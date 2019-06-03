/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <utility>
#include <string>
#include "runtime/sstream.h"
#include "runtime/hash.h"
#include "library/private.h"
#include "library/module.h"

namespace lean {
struct private_ext : public environment_extension {
    unsigned       m_counter;
    name_map<name> m_inv_map;  // map: hidden-name -> user-name
    /* We store private prefixes to make sure register_private_name is used correctly.
       This information does not need to be stored in .olean files. */
    name_set       m_private_prefixes;
    private_ext():m_counter(1) {}
};

struct private_ext_reg {
    unsigned m_ext_id;
    private_ext_reg() { m_ext_id = environment::register_extension(new private_ext()); }
};

static private_ext_reg * g_ext = nullptr;
static private_ext const & get_extension(environment const & env) {
    return static_cast<private_ext const &>(env.get_extension(g_ext->m_ext_id));
}
static environment update(environment const & env, private_ext const & ext) {
    return env.update(g_ext->m_ext_id, new private_ext(ext));
}

static name * g_private = nullptr;

struct private_modification : public modification {
    LEAN_MODIFICATION("prv")

    name m_name, m_real;

    private_modification() {}
    private_modification(name const & n, name const & h) : m_name(n), m_real(h) {}

    void perform(environment & env) const override {
        private_ext ext = get_extension(env);
        // we restore only the mapping hidden-name -> user-name (for pretty printing purposes)
        ext.m_inv_map.insert(m_real, m_name);
        env = update(env, ext);
    }

    void serialize(serializer & s) const override {
        s << m_name << m_real;
    }

    static modification* deserialize(deserializer & d) {
        name n, h;
        d >> n >> h;
        return new private_modification(n, h);
    }
};

/* Make sure the mapping "hidden-name r ==> user-name n" is preserved when we close sections and
   export .olean files. */
static environment preserve_private_data(environment const & env, name const & r, name const & n) {
    return module::add(env, new private_modification(n, r));
}

static name mk_private_name_core(environment const & env, name const & n) {
    private_ext const & ext = get_extension(env);
    return name(name(*g_private) + env.get_main_module(), ext.m_counter) + n;
}

pair<environment, name> add_private_name(environment const & env, name const & n) {
    name r          = mk_private_name_core(env, n);
    private_ext ext = get_extension(env);
    ext.m_inv_map.insert(r, n);
    ext.m_counter++;
    environment new_env = update(env, ext);
    new_env = preserve_private_data(new_env, r, n);
    return mk_pair(new_env, r);
}

pair<environment, name> mk_private_prefix(environment const & env) {
    name r          = mk_private_name_core(env, name());
    private_ext ext = get_extension(env);
    ext.m_private_prefixes.insert(r);
    ext.m_counter++;
    environment new_env = update(env, ext);
    return mk_pair(new_env, r);
}

static optional<name> get_private_prefix(private_ext const & ext, name n) {
    while (true) {
        if (ext.m_private_prefixes.contains(n))
            return optional<name>(n);
        if (n.is_atomic())
            return optional<name>();
        n = n.get_prefix();
    }
}

/* Return true iff a prefix of `n` is registered as a private prefix in `ext` */
static bool has_private_prefix(private_ext const & ext, name n) {
    return static_cast<bool>(get_private_prefix(ext, n));
}

optional<name> get_private_prefix(environment const & env, name const & n) {
    private_ext const & ext = get_extension(env);
    return get_private_prefix(ext, n);
}

bool has_private_prefix(environment const & env, name const & n) {
    private_ext const & ext = get_extension(env);
    return has_private_prefix(ext, n);
}

environment register_private_name(environment const & env, name const & n, name const & prv_n) {
    private_ext ext = get_extension(env);
    if (!has_private_prefix(ext, prv_n)) {
        /* TODO(Leo): consider using an assertion */
        throw exception(sstream() << "failed to register private name '" << prv_n << "', prefix has not been registered");
    }
    ext.m_inv_map.insert(prv_n, n);
    environment new_env = update(env, ext);
    return preserve_private_data(new_env, prv_n, n);
}

optional<name> private_to_user_name(environment const & env, name const & n) {
    auto it = get_extension(env).m_inv_map.find(n);
    return it ? optional<name>(*it) : optional<name>();
}

bool is_private(environment const & env, name const & n) {
    return static_cast<bool>(private_to_user_name(env, n));
}

void initialize_private() {
    g_ext     = new private_ext_reg();
    g_private = new name("_private");
    private_modification::init();
}

void finalize_private() {
    private_modification::finalize();
    delete g_private;
    delete g_ext;
}
}

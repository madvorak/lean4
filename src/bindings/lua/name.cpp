/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <lua.hpp>
#include "util/debug.h"
#include "util/name.h"
#include "bindings/lua/util.h"

namespace lean {
constexpr char const * name_mt = "name.mt";

bool is_name(lua_State * L, int idx) {
    return testudata(L, idx, name_mt);
}

name & to_name(lua_State * L, int idx) {
    return *static_cast<name*>(luaL_checkudata(L, idx, name_mt));
}

name to_name_ext(lua_State * L, int idx) {
    if (lua_isstring(L, idx))
        return luaL_checkstring(L, idx);
    else
        return to_name(L, idx);
}

int push_name(lua_State * L, name const & n) {
    void * mem = lua_newuserdata(L, sizeof(name));
    new (mem) name(n);
    luaL_getmetatable(L, name_mt);
    lua_setmetatable(L, -2);
    return 1;
}

static int mk_name(lua_State * L) {
    int nargs = lua_gettop(L);
    name r;
    for (int i = 1; i <= nargs; i++) {
        if (lua_isnil(L, i)) {
            // skip
        } else if (lua_isuserdata(L, i)) {
            r = r + to_name(L, i);
        } else if (lua_isstring(L, i)) {
            r = name(r, luaL_checkstring(L, i));
        } else {
            r = name(r, luaL_checkinteger(L, i));
        }
    }
    return push_name(L, r);
}

static int name_gc(lua_State * L) {
    to_name(L, 1).~name();
    return 0;
}

static int name_tostring(lua_State * L) {
    lua_pushfstring(L, to_name(L, 1).to_string().c_str());
    return 1;
}

static int name_eq(lua_State * L) {
    lua_pushboolean(L, to_name(L, 1) == to_name(L, 2));
    return 1;
}

static int name_lt(lua_State * L) {
    lua_pushboolean(L, to_name(L, 1) < to_name(L, 2));
    return 1;
}

static const struct luaL_Reg name_m[] = {
    {"__gc",       name_gc}, // never throws
    {"__tostring", safe_function<name_tostring>},
    {"__eq",       safe_function<name_eq>},
    {"__lt",       safe_function<name_lt>},
    {0, 0}
};

void open_name(lua_State * L) {
    luaL_newmetatable(L, name_mt);
    setfuncs(L, name_m, 0);

    set_global_function<mk_name>(L, "name");
}
}

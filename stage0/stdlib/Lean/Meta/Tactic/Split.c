// Lean compiler output
// Module: Lean.Meta.Tactic.Split
// Imports: Lean.Meta.Match.MatcherApp.Basic Lean.Meta.Tactic.Simp.Main Lean.Meta.Tactic.SplitIf Lean.Meta.Tactic.Apply Lean.Meta.Tactic.Generalize
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__1;
static lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3;
static lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__3;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_splitTarget_x3f_go___closed__1;
lean_object* l_ReaderT_instMonadFunctorReaderT(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(size_t, size_t, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__1;
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__1;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_splitMatch___closed__1;
uint8_t l_Lean_Expr_isDIte(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___lambda__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_UInt32_ofNatTruncate(lean_object*);
static uint32_t l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__9;
lean_object* l_Lean_MessageData_ofList(lean_object*);
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs(lean_object*);
lean_object* l_Lean_mkHashSetImp___rarg(lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__2;
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1;
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_GetElem_0__outOfBounds___rarg(lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_casesOnSuffix;
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Split_findSplit_x3f_isCandidate___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__1;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at_Lean_Meta_splitTarget_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwNestedTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__2;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f___at_Lean_Meta_reduceMatcher_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__9;
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__2;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_simpMatch___closed__2;
static lean_object* l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
static lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__1;
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__3;
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__8(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__2;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__8;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__2;
LEAN_EXPORT lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_splitMatch___closed__2;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__4;
extern lean_object* l_instInhabitedPUnit;
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at_Lean_Meta_Split_simpMatch_pre___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_go(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch_pre___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__1;
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_splitMatch___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__6;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__1___boxed(lean_object**);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1;
static lean_object* l_Lean_Meta_Split_splitMatch___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__7;
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___spec__1(lean_object*, size_t, size_t);
static lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitLocalDecl_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___boxed(lean_object**);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__3;
static lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_simpMatch___closed__4;
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___closed__3;
lean_object* l_Lean_Meta_Simp_simpMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__7;
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___at_Lean_MessageData_instCoeListExprMessageData___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2___closed__1;
lean_object* l_Lean_Name_getPrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go(lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__5;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6;
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__5;
static lean_object* l_Lean_Meta_Split_splitMatch___closed__3;
lean_object* l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
lean_object* l_ReaderT_instMonadExceptOfReaderT___rarg(lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___closed__4;
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__3;
lean_object* l_Lean_Meta_transform___at_Lean_Meta_zetaReduce___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLiftReaderT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__2;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__1(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2;
lean_object* l_Lean_Meta_splitIfLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Meta_splitLocalDecl_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__1;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__2;
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__2;
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_splitMatch___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__6;
extern lean_object* l_Lean_instInhabitedExpr;
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_splitMatch___closed__5;
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__5;
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___closed__6;
static lean_object* l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3___closed__1;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__15;
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_splitMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__1;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isIte(lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isRflTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
static lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__2;
extern lean_object* l_Lean_Meta_instMonadMetaM;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore_x3f(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed__const__1;
static lean_object* l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1;
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__2;
lean_object* l_Lean_Meta_Match_MatchEqns_size(lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__4;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__10;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__5;
static lean_object* l_Lean_Meta_Split_simpMatch___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___boxed__const__1;
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__4;
lean_object* l_Lean_Expr_FindImpl_findUnsafe_x3f(lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotation___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__2;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__11;
lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__1;
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_instAddErrorMessageContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
static lean_object* l_Lean_Meta_Split_simpMatch_pre___closed__1;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_simpMatch___closed__3;
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_isMatcherAppCore(lean_object*, lean_object*);
static lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__2;
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__1;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282_(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___closed__1;
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__1;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__2;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__7;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHashMapImp___rarg(lean_object*);
static lean_object* l_Lean_Meta_Split_simpMatch___lambda__2___closed__1;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_removeUnusedArguments_x3f___spec__2___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at_Lean_Meta_Split_simpMatch_pre___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Simp_defaultMaxSteps;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_simpMatch___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_tryTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__13;
lean_object* l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__1;
lean_object* l_List_redLength___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
static lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__2;
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___closed__1;
static lean_object* l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1;
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isAuxRecursorWithSuffix(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__1;
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__1;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__6;
static lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__12;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_HashSetImp_contains___at_Lean_ForEachExprWhere_checked___spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch_pre___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__1(size_t, size_t, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__3;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOfStateRefT_x27___rarg(lean_object*);
static lean_object* l_Lean_Meta_splitTarget_x3f_go___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatchTarget___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__2;
static lean_object* _init_l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_Simp_defaultMaxSteps;
x_2 = lean_unsigned_to_nat(2u);
x_3 = 0;
x_4 = 1;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 1, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 2, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 4, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 5, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 6, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 7, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 8, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 9, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 10, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 11, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 12, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 13, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 14, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 15, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 16, x_3);
return x_6;
}
}
static uint32_t _init_l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__2() {
_start:
{
lean_object* x_1; uint32_t x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_UInt32_ofNatTruncate(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Meta_getSimpCongrTheorems___rarg(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint32_t x_7; lean_object* x_8; uint32_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_box(0);
x_7 = 0;
x_8 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1;
x_9 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__2;
x_10 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_11 = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_5);
lean_ctor_set(x_11, 3, x_6);
lean_ctor_set_uint32(x_11, sizeof(void*)*4, x_9);
lean_ctor_set_uint32(x_11, sizeof(void*)*4 + 4, x_7);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint32_t x_15; lean_object* x_16; uint32_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_box(0);
x_15 = 0;
x_16 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1;
x_17 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__2;
x_18 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_19 = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_12);
lean_ctor_set(x_19, 3, x_14);
lean_ctor_set_uint32(x_19, sizeof(void*)*4, x_17);
lean_ctor_set_uint32(x_19, sizeof(void*)*4 + 4, x_15);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_13);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_Split_getSimpMatchContext___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Split_getSimpMatchContext___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_getSimpMatchContext___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_Split_getSimpMatchContext(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at_Lean_Meta_Split_simpMatch_pre___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Meta_isMatcherAppCore(x_13, x_1);
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_isMatcherAppCore(x_18, x_1);
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch_pre___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_getAppFn(x_1);
x_12 = l_Lean_Expr_constName_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_13 = l_Lean_Meta_reduceRecMatcher_x3f(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_Simp_simpMatchCore(x_12, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint32_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_13, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_box(0);
x_21 = 0;
x_22 = 1;
x_23 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set_uint32(x_23, sizeof(void*)*2, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*2 + 4, x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_13, 0, x_24);
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint32_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_dec(x_13);
x_26 = lean_ctor_get(x_14, 0);
lean_inc(x_26);
lean_dec(x_14);
x_27 = lean_box(0);
x_28 = 0;
x_29 = 1;
x_30 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_27);
lean_ctor_set_uint32(x_30, sizeof(void*)*2, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 4, x_29);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_25);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch_pre___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch_pre(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_Meta_isMatcherApp___at_Lean_Meta_Split_simpMatch_pre___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_box(0);
x_21 = l_Lean_Meta_Split_simpMatch_pre___lambda__1(x_1, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at_Lean_Meta_Split_simpMatch_pre___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_isMatcherApp___at_Lean_Meta_Split_simpMatch_pre___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch_pre___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Split_simpMatch_pre___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint32_t x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_box(0);
x_11 = 0;
x_12 = 1;
x_13 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set_uint32(x_13, sizeof(void*)*2, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 4, x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Meta_Split_simpMatch___lambda__2___closed__1;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Lean_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Split_simpMatch_pre), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Split_simpMatch___lambda__1___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Split_simpMatch___lambda__2___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_simpMatch___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Split_simpMatch___lambda__3___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_7 = 0;
lean_inc(x_2);
x_8 = l_Lean_Meta_SplitIf_mkDischarge_x3f(x_7, x_2, x_3, x_4, x_5, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Meta_Split_getSimpMatchContext___rarg(x_5, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_Split_simpMatch___closed__2;
x_15 = l_Lean_Meta_Split_simpMatch___closed__3;
x_16 = l_Lean_Meta_Split_simpMatch___closed__4;
x_17 = l_Lean_Meta_Split_simpMatch___closed__5;
x_18 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set(x_18, 3, x_17);
lean_ctor_set(x_18, 4, x_9);
x_19 = l_Lean_Meta_Split_simpMatch___closed__1;
x_20 = l_Lean_Meta_Simp_main(x_1, x_12, x_19, x_18, x_2, x_3, x_4, x_5, x_13);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Split_simpMatch___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Split_simpMatch___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatch___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Split_simpMatch___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatchTarget___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_MVarId_getType(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_8, x_2, x_3, x_4, x_5, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_11);
x_13 = l_Lean_Meta_Split_simpMatch(x_11, x_2, x_3, x_4, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_applySimpResultToTarget(x_1, x_11, x_14, x_2, x_3, x_4, x_5, x_15);
lean_dec(x_11);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_7);
if (x_21 == 0)
{
return x_7;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_7);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_Split_simpMatchTarget___lambda__1), 6, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore_pre(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = l_Lean_Expr_isAppOf(x_3, x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
x_15 = l_Lean_Meta_reduceRecMatcher_x3f(x_3, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
x_18 = l_Lean_Meta_isRflTheorem(x_2, x_9, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
lean_inc(x_2);
x_22 = l_Lean_Expr_const___override(x_2, x_21);
x_23 = 1;
x_24 = 0;
x_25 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*1 + 1, x_24);
x_26 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_27 = lean_unsigned_to_nat(1000u);
x_28 = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_27);
lean_ctor_set(x_28, 4, x_25);
lean_ctor_set_uint8(x_28, sizeof(void*)*5, x_23);
lean_ctor_set_uint8(x_28, sizeof(void*)*5 + 1, x_24);
x_29 = lean_unbox(x_19);
lean_dec(x_19);
lean_ctor_set_uint8(x_28, sizeof(void*)*5 + 2, x_29);
x_30 = !lean_is_exclusive(x_7);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_7, 0);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; 
x_33 = 2;
lean_ctor_set_uint8(x_31, 9, x_33);
x_34 = l_Lean_Meta_Simp_tryTheorem_x3f(x_3, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 0);
lean_dec(x_37);
x_38 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
lean_ctor_set(x_34, 0, x_38);
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_34);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_34, 0);
lean_dec(x_43);
x_44 = lean_ctor_get(x_35, 0);
lean_inc(x_44);
lean_dec(x_35);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_34, 0, x_45);
return x_34;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_34, 1);
lean_inc(x_46);
lean_dec(x_34);
x_47 = lean_ctor_get(x_35, 0);
lean_inc(x_47);
lean_dec(x_35);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_34);
if (x_50 == 0)
{
return x_34;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_34, 0);
x_52 = lean_ctor_get(x_34, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_34);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_54 = lean_ctor_get_uint8(x_31, 0);
x_55 = lean_ctor_get_uint8(x_31, 1);
x_56 = lean_ctor_get_uint8(x_31, 2);
x_57 = lean_ctor_get_uint8(x_31, 3);
x_58 = lean_ctor_get_uint8(x_31, 4);
x_59 = lean_ctor_get_uint8(x_31, 5);
x_60 = lean_ctor_get_uint8(x_31, 6);
x_61 = lean_ctor_get_uint8(x_31, 7);
x_62 = lean_ctor_get_uint8(x_31, 8);
x_63 = lean_ctor_get_uint8(x_31, 10);
x_64 = lean_ctor_get_uint8(x_31, 11);
lean_dec(x_31);
x_65 = 2;
x_66 = lean_alloc_ctor(0, 0, 12);
lean_ctor_set_uint8(x_66, 0, x_54);
lean_ctor_set_uint8(x_66, 1, x_55);
lean_ctor_set_uint8(x_66, 2, x_56);
lean_ctor_set_uint8(x_66, 3, x_57);
lean_ctor_set_uint8(x_66, 4, x_58);
lean_ctor_set_uint8(x_66, 5, x_59);
lean_ctor_set_uint8(x_66, 6, x_60);
lean_ctor_set_uint8(x_66, 7, x_61);
lean_ctor_set_uint8(x_66, 8, x_62);
lean_ctor_set_uint8(x_66, 9, x_65);
lean_ctor_set_uint8(x_66, 10, x_63);
lean_ctor_set_uint8(x_66, 11, x_64);
lean_ctor_set(x_7, 0, x_66);
x_67 = l_Lean_Meta_Simp_tryTheorem_x3f(x_3, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
if (lean_is_scalar(x_70)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_70;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_69);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_74 = x_67;
} else {
 lean_dec_ref(x_67);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_68, 0);
lean_inc(x_75);
lean_dec(x_68);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_73);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_67, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_67, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_80 = x_67;
} else {
 lean_dec_ref(x_67);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; lean_object* x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_82 = lean_ctor_get(x_7, 0);
x_83 = lean_ctor_get(x_7, 1);
x_84 = lean_ctor_get(x_7, 2);
x_85 = lean_ctor_get(x_7, 3);
x_86 = lean_ctor_get(x_7, 4);
x_87 = lean_ctor_get(x_7, 5);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_7);
x_88 = lean_ctor_get_uint8(x_82, 0);
x_89 = lean_ctor_get_uint8(x_82, 1);
x_90 = lean_ctor_get_uint8(x_82, 2);
x_91 = lean_ctor_get_uint8(x_82, 3);
x_92 = lean_ctor_get_uint8(x_82, 4);
x_93 = lean_ctor_get_uint8(x_82, 5);
x_94 = lean_ctor_get_uint8(x_82, 6);
x_95 = lean_ctor_get_uint8(x_82, 7);
x_96 = lean_ctor_get_uint8(x_82, 8);
x_97 = lean_ctor_get_uint8(x_82, 10);
x_98 = lean_ctor_get_uint8(x_82, 11);
if (lean_is_exclusive(x_82)) {
 x_99 = x_82;
} else {
 lean_dec_ref(x_82);
 x_99 = lean_box(0);
}
x_100 = 2;
if (lean_is_scalar(x_99)) {
 x_101 = lean_alloc_ctor(0, 0, 12);
} else {
 x_101 = x_99;
}
lean_ctor_set_uint8(x_101, 0, x_88);
lean_ctor_set_uint8(x_101, 1, x_89);
lean_ctor_set_uint8(x_101, 2, x_90);
lean_ctor_set_uint8(x_101, 3, x_91);
lean_ctor_set_uint8(x_101, 4, x_92);
lean_ctor_set_uint8(x_101, 5, x_93);
lean_ctor_set_uint8(x_101, 6, x_94);
lean_ctor_set_uint8(x_101, 7, x_95);
lean_ctor_set_uint8(x_101, 8, x_96);
lean_ctor_set_uint8(x_101, 9, x_100);
lean_ctor_set_uint8(x_101, 10, x_97);
lean_ctor_set_uint8(x_101, 11, x_98);
x_102 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_83);
lean_ctor_set(x_102, 2, x_84);
lean_ctor_set(x_102, 3, x_85);
lean_ctor_set(x_102, 4, x_86);
lean_ctor_set(x_102, 5, x_87);
x_103 = l_Lean_Meta_Simp_tryTheorem_x3f(x_3, x_28, x_4, x_5, x_6, x_102, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_106 = x_103;
} else {
 lean_dec_ref(x_103);
 x_106 = lean_box(0);
}
x_107 = l_Lean_Meta_Split_simpMatch_pre___closed__1;
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_105);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_110 = x_103;
} else {
 lean_dec_ref(x_103);
 x_110 = lean_box(0);
}
x_111 = lean_ctor_get(x_104, 0);
lean_inc(x_111);
lean_dec(x_104);
x_112 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_112, 0, x_111);
if (lean_is_scalar(x_110)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_110;
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_109);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_103, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_103, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_116 = x_103;
} else {
 lean_dec_ref(x_103);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_118 = !lean_is_exclusive(x_18);
if (x_118 == 0)
{
return x_18;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_18, 0);
x_120 = lean_ctor_get(x_18, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_18);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_122 = !lean_is_exclusive(x_15);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; uint32_t x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; 
x_123 = lean_ctor_get(x_15, 0);
lean_dec(x_123);
x_124 = lean_ctor_get(x_16, 0);
lean_inc(x_124);
lean_dec(x_16);
x_125 = lean_box(0);
x_126 = 0;
x_127 = 1;
x_128 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_128, 0, x_124);
lean_ctor_set(x_128, 1, x_125);
lean_ctor_set_uint32(x_128, sizeof(void*)*2, x_126);
lean_ctor_set_uint8(x_128, sizeof(void*)*2 + 4, x_127);
x_129 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_15, 0, x_129);
return x_15;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; uint32_t x_133; uint8_t x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_130 = lean_ctor_get(x_15, 1);
lean_inc(x_130);
lean_dec(x_15);
x_131 = lean_ctor_get(x_16, 0);
lean_inc(x_131);
lean_dec(x_16);
x_132 = lean_box(0);
x_133 = 0;
x_134 = 1;
x_135 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_135, 0, x_131);
lean_ctor_set(x_135, 1, x_132);
lean_ctor_set_uint32(x_135, sizeof(void*)*2, x_133);
lean_ctor_set_uint8(x_135, sizeof(void*)*2 + 4, x_134);
x_136 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_136, 0, x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_130);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_138 = !lean_is_exclusive(x_15);
if (x_138 == 0)
{
return x_15;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_15, 0);
x_140 = lean_ctor_get(x_15, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_15);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore_pre___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore_pre(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = 0;
lean_inc(x_4);
x_10 = l_Lean_Meta_SplitIf_mkDischarge_x3f(x_9, x_4, x_5, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_Split_getSimpMatchContext___rarg(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore_pre___boxed), 11, 2);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
x_17 = l_Lean_Meta_Split_simpMatch___closed__3;
x_18 = l_Lean_Meta_Split_simpMatch___closed__4;
x_19 = l_Lean_Meta_Split_simpMatch___closed__5;
x_20 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_17);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_19);
lean_ctor_set(x_20, 4, x_11);
x_21 = l_Lean_Meta_Split_simpMatch___closed__1;
x_22 = l_Lean_Meta_Simp_main(x_3, x_14, x_21, x_20, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_22);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_22);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_MVarId_getType(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_10, x_4, x_5, x_6, x_7, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchCore(x_2, x_3, x_13, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_MVarId_replaceTargetDefEq(x_1, x_19, x_4, x_5, x_6, x_7, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
x_24 = l_Lean_MVarId_replaceTargetEq(x_1, x_23, x_22, x_4, x_5, x_6, x_7, x_21);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_9);
if (x_29 == 0)
{
return x_9;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_9, 0);
x_31 = lean_ctor_get(x_9, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_9);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore___lambda__1), 8, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_1, x_14);
lean_dec(x_1);
x_16 = lean_array_push(x_2, x_3);
x_17 = lean_array_push(x_4, x_8);
x_18 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg(x_5, x_6, x_7, x_15, x_16, x_17, x_9, x_10, x_11, x_12, x_13);
return x_18;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = lean_infer_type(x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_isEq(x_15);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_18 = l_Lean_Meta_mkHEqRefl(x_7, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__1(x_1, x_2, x_8, x_3, x_4, x_5, x_6, x_19, x_9, x_10, x_11, x_12, x_20);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_26 = l_Lean_Meta_mkEqRefl(x_7, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__1(x_1, x_2, x_8, x_3, x_4, x_5, x_6, x_27, x_9, x_10, x_11, x_12, x_28);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_26);
if (x_30 == 0)
{
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
return x_14;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_14);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("heq", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_4, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_7(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_33; uint8_t x_34; 
x_15 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__2;
x_16 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_15, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_fget(x_1, x_4);
x_33 = lean_array_get_size(x_2);
x_34 = lean_nat_dec_lt(x_4, x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_Lean_instInhabitedExpr;
x_36 = l___private_Init_GetElem_0__outOfBounds___rarg(x_35);
x_20 = x_36;
goto block_32;
}
else
{
lean_object* x_37; 
x_37 = lean_array_fget(x_2, x_4);
x_20 = x_37;
goto block_32;
}
block_32:
{
lean_object* x_21; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_19);
x_21 = l_Lean_Meta_mkEqHEq(x_19, x_20, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___lambda__2), 13, 7);
lean_closure_set(x_24, 0, x_4);
lean_closure_set(x_24, 1, x_5);
lean_closure_set(x_24, 2, x_6);
lean_closure_set(x_24, 3, x_1);
lean_closure_set(x_24, 4, x_2);
lean_closure_set(x_24, 5, x_3);
lean_closure_set(x_24, 6, x_19);
x_25 = 0;
x_26 = 0;
x_27 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_removeUnusedArguments_x3f___spec__2___rarg(x_17, x_25, x_22, x_24, x_26, x_7, x_8, x_9, x_10, x_23);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
return x_21;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_11 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg(x_1, x_2, x_3, x_9, x_10, x_10, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Lean_Meta_mkHEqTrans(x_1, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_19 = lean_array_push(x_3, x_8);
x_20 = lean_array_push(x_4, x_15);
x_21 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go(x_5, x_6, x_7, x_18, x_19, x_20, x_9, x_10, x_11, x_12, x_16);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Lean_Meta_mkEqTrans(x_1, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_19 = lean_array_push(x_3, x_8);
x_20 = lean_array_push(x_4, x_15);
x_21 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go(x_5, x_6, x_7, x_18, x_19, x_20, x_9, x_10, x_11, x_12, x_16);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'applyMatchSplitter' failed, unexpected discriminant equalities", 63);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HEq", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Eq", 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_4, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_apply_7(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_1, x_4);
lean_inc(x_7);
x_16 = l_Lean_Meta_getFVarLocalDecl(x_15, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_194; uint8_t x_195; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_194 = lean_array_get_size(x_3);
x_195 = lean_nat_dec_lt(x_4, x_194);
lean_dec(x_194);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; 
x_196 = l_Lean_instInhabitedExpr;
x_197 = l___private_Init_GetElem_0__outOfBounds___rarg(x_196);
x_19 = x_197;
goto block_193;
}
else
{
lean_object* x_198; 
x_198 = lean_array_fget(x_3, x_4);
x_19 = x_198;
goto block_193;
}
block_193:
{
lean_object* x_20; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_19);
x_20 = lean_infer_type(x_19, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_47; lean_object* x_48; lean_object* x_98; lean_object* x_99; lean_object* x_168; lean_object* x_169; uint8_t x_170; uint8_t x_171; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_47 = l_Lean_LocalDecl_type(x_17);
x_168 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__6;
x_169 = lean_unsigned_to_nat(3u);
x_170 = l_Lean_Expr_isAppOfArity(x_21, x_168, x_169);
x_171 = l_Lean_Expr_isAppOfArity(x_47, x_168, x_169);
if (x_170 == 0)
{
lean_object* x_172; 
x_172 = lean_box(0);
x_48 = x_172;
goto block_97;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_inc(x_21);
x_173 = l_Lean_Expr_appFn_x21(x_21);
lean_inc(x_173);
x_174 = l_Lean_Expr_appFn_x21(x_173);
x_175 = l_Lean_Expr_appArg_x21(x_174);
lean_dec(x_174);
x_176 = l_Lean_Expr_appArg_x21(x_173);
lean_dec(x_173);
x_177 = l_Lean_Expr_appArg_x21(x_21);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_175);
lean_ctor_set(x_179, 1, x_178);
if (x_171 == 0)
{
lean_object* x_180; 
x_180 = lean_box(0);
x_98 = x_180;
x_99 = x_179;
goto block_167;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_inc(x_47);
x_181 = l_Lean_Expr_appFn_x21(x_47);
lean_inc(x_181);
x_182 = l_Lean_Expr_appFn_x21(x_181);
x_183 = l_Lean_Expr_appArg_x21(x_182);
lean_dec(x_182);
x_184 = l_Lean_Expr_appArg_x21(x_181);
lean_dec(x_181);
x_185 = l_Lean_Expr_appArg_x21(x_47);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_183);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_188, 0, x_187);
x_98 = x_188;
x_99 = x_179;
goto block_167;
}
}
block_46:
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_26);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2;
x_28 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_27, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
lean_inc(x_29);
lean_dec(x_23);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_34 = l_Lean_Meta_mkHEq(x_32, x_33, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; uint8_t x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_LocalDecl_userName(x_17);
lean_dec(x_17);
x_38 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___lambda__1), 13, 7);
lean_closure_set(x_38, 0, x_19);
lean_closure_set(x_38, 1, x_4);
lean_closure_set(x_38, 2, x_5);
lean_closure_set(x_38, 3, x_6);
lean_closure_set(x_38, 4, x_1);
lean_closure_set(x_38, 5, x_2);
lean_closure_set(x_38, 6, x_3);
x_39 = 0;
x_40 = 0;
x_41 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_removeUnusedArguments_x3f___spec__2___rarg(x_37, x_39, x_35, x_38, x_40, x_7, x_8, x_9, x_10, x_36);
return x_41;
}
else
{
uint8_t x_42; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_34);
if (x_42 == 0)
{
return x_34;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_34, 0);
x_44 = lean_ctor_get(x_34, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_34);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
block_97:
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; 
lean_dec(x_48);
x_49 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4;
x_50 = lean_unsigned_to_nat(4u);
x_51 = l_Lean_Expr_isAppOfArity(x_21, x_49, x_50);
x_52 = l_Lean_Expr_isAppOfArity(x_47, x_49, x_50);
if (x_51 == 0)
{
lean_object* x_85; 
lean_dec(x_21);
x_85 = lean_box(0);
x_53 = x_85;
goto block_84;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_inc(x_21);
x_86 = l_Lean_Expr_appFn_x21(x_21);
lean_inc(x_86);
x_87 = l_Lean_Expr_appFn_x21(x_86);
lean_inc(x_87);
x_88 = l_Lean_Expr_appFn_x21(x_87);
x_89 = l_Lean_Expr_appArg_x21(x_88);
lean_dec(x_88);
x_90 = l_Lean_Expr_appArg_x21(x_87);
lean_dec(x_87);
x_91 = l_Lean_Expr_appArg_x21(x_86);
lean_dec(x_86);
x_92 = l_Lean_Expr_appArg_x21(x_21);
lean_dec(x_21);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_90);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_89);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_53 = x_96;
goto block_84;
}
block_84:
{
if (x_52 == 0)
{
lean_dec(x_47);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2;
x_55 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_54, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 0);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_box(0);
x_23 = x_57;
x_24 = x_56;
goto block_46;
}
}
else
{
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_47);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2;
x_59 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_58, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_53);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_61 = lean_ctor_get(x_53, 0);
lean_inc(x_47);
x_62 = l_Lean_Expr_appFn_x21(x_47);
lean_inc(x_62);
x_63 = l_Lean_Expr_appFn_x21(x_62);
lean_inc(x_63);
x_64 = l_Lean_Expr_appFn_x21(x_63);
x_65 = l_Lean_Expr_appArg_x21(x_64);
lean_dec(x_64);
x_66 = l_Lean_Expr_appArg_x21(x_63);
lean_dec(x_63);
x_67 = l_Lean_Expr_appArg_x21(x_62);
lean_dec(x_62);
x_68 = l_Lean_Expr_appArg_x21(x_47);
lean_dec(x_47);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_53, 0, x_71);
x_23 = x_53;
x_24 = x_61;
goto block_46;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_72 = lean_ctor_get(x_53, 0);
lean_inc(x_72);
lean_dec(x_53);
lean_inc(x_47);
x_73 = l_Lean_Expr_appFn_x21(x_47);
lean_inc(x_73);
x_74 = l_Lean_Expr_appFn_x21(x_73);
lean_inc(x_74);
x_75 = l_Lean_Expr_appFn_x21(x_74);
x_76 = l_Lean_Expr_appArg_x21(x_75);
lean_dec(x_75);
x_77 = l_Lean_Expr_appArg_x21(x_74);
lean_dec(x_74);
x_78 = l_Lean_Expr_appArg_x21(x_73);
lean_dec(x_73);
x_79 = l_Lean_Expr_appArg_x21(x_47);
lean_dec(x_47);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_77);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_23 = x_83;
x_24 = x_72;
goto block_46;
}
}
}
}
}
block_167:
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; uint8_t x_106; lean_object* x_107; 
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_102 = x_100;
} else {
 lean_dec_ref(x_100);
 x_102 = lean_box(0);
}
x_103 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4;
x_104 = lean_unsigned_to_nat(4u);
x_105 = l_Lean_Expr_isAppOfArity(x_21, x_103, x_104);
x_106 = l_Lean_Expr_isAppOfArity(x_47, x_103, x_104);
if (x_105 == 0)
{
lean_object* x_139; 
lean_dec(x_21);
x_139 = lean_box(0);
x_107 = x_139;
goto block_138;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_inc(x_21);
x_140 = l_Lean_Expr_appFn_x21(x_21);
lean_inc(x_140);
x_141 = l_Lean_Expr_appFn_x21(x_140);
lean_inc(x_141);
x_142 = l_Lean_Expr_appFn_x21(x_141);
x_143 = l_Lean_Expr_appArg_x21(x_142);
lean_dec(x_142);
x_144 = l_Lean_Expr_appArg_x21(x_141);
lean_dec(x_141);
x_145 = l_Lean_Expr_appArg_x21(x_140);
lean_dec(x_140);
x_146 = l_Lean_Expr_appArg_x21(x_21);
lean_dec(x_21);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_144);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_143);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_150, 0, x_149);
x_107 = x_150;
goto block_138;
}
block_138:
{
if (x_106 == 0)
{
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_47);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2;
x_109 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_108, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_107, 0);
lean_inc(x_110);
lean_dec(x_107);
x_111 = lean_box(0);
x_23 = x_111;
x_24 = x_110;
goto block_46;
}
}
else
{
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_47);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_112 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2;
x_113 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_112, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_113;
}
else
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_107);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_115 = lean_ctor_get(x_107, 0);
lean_inc(x_47);
x_116 = l_Lean_Expr_appFn_x21(x_47);
lean_inc(x_116);
x_117 = l_Lean_Expr_appFn_x21(x_116);
lean_inc(x_117);
x_118 = l_Lean_Expr_appFn_x21(x_117);
x_119 = l_Lean_Expr_appArg_x21(x_118);
lean_dec(x_118);
x_120 = l_Lean_Expr_appArg_x21(x_117);
lean_dec(x_117);
x_121 = l_Lean_Expr_appArg_x21(x_116);
lean_dec(x_116);
x_122 = l_Lean_Expr_appArg_x21(x_47);
lean_dec(x_47);
if (lean_is_scalar(x_102)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_102;
}
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
if (lean_is_scalar(x_101)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_101;
}
lean_ctor_set(x_124, 0, x_120);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_119);
lean_ctor_set(x_125, 1, x_124);
lean_ctor_set(x_107, 0, x_125);
x_23 = x_107;
x_24 = x_115;
goto block_46;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_126 = lean_ctor_get(x_107, 0);
lean_inc(x_126);
lean_dec(x_107);
lean_inc(x_47);
x_127 = l_Lean_Expr_appFn_x21(x_47);
lean_inc(x_127);
x_128 = l_Lean_Expr_appFn_x21(x_127);
lean_inc(x_128);
x_129 = l_Lean_Expr_appFn_x21(x_128);
x_130 = l_Lean_Expr_appArg_x21(x_129);
lean_dec(x_129);
x_131 = l_Lean_Expr_appArg_x21(x_128);
lean_dec(x_128);
x_132 = l_Lean_Expr_appArg_x21(x_127);
lean_dec(x_127);
x_133 = l_Lean_Expr_appArg_x21(x_47);
lean_dec(x_47);
if (lean_is_scalar(x_102)) {
 x_134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_134 = x_102;
}
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
if (lean_is_scalar(x_101)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_101;
}
lean_ctor_set(x_135, 0, x_131);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_130);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_23 = x_137;
x_24 = x_126;
goto block_46;
}
}
}
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_101);
lean_dec(x_47);
lean_dec(x_21);
x_151 = lean_ctor_get(x_98, 0);
lean_inc(x_151);
lean_dec(x_98);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
x_153 = lean_ctor_get(x_100, 1);
lean_inc(x_153);
lean_dec(x_100);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_155 = l_Lean_Meta_mkEq(x_153, x_154, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; uint8_t x_161; lean_object* x_162; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = l_Lean_LocalDecl_userName(x_17);
lean_dec(x_17);
x_159 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___lambda__2), 13, 7);
lean_closure_set(x_159, 0, x_19);
lean_closure_set(x_159, 1, x_4);
lean_closure_set(x_159, 2, x_5);
lean_closure_set(x_159, 3, x_6);
lean_closure_set(x_159, 4, x_1);
lean_closure_set(x_159, 5, x_2);
lean_closure_set(x_159, 6, x_3);
x_160 = 0;
x_161 = 0;
x_162 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_SynthInstance_removeUnusedArguments_x3f___spec__2___rarg(x_158, x_160, x_156, x_159, x_161, x_7, x_8, x_9, x_10, x_157);
return x_162;
}
else
{
uint8_t x_163; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_155);
if (x_163 == 0)
{
return x_155;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_155, 0);
x_165 = lean_ctor_get(x_155, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_155);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
}
}
else
{
uint8_t x_189; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_189 = !lean_is_exclusive(x_20);
if (x_189 == 0)
{
return x_20;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_20, 0);
x_191 = lean_ctor_get(x_20, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_20);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
return x_192;
}
}
}
}
else
{
uint8_t x_199; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_199 = !lean_is_exclusive(x_16);
if (x_199 == 0)
{
return x_16;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_16, 0);
x_201 = lean_ctor_get(x_16, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_16);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_6);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_array_push(x_4, x_11);
x_2 = x_8;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_le(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_12 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__2(x_1, x_9, x_10, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 4);
x_11 = l_Array_zip___rarg(x_2, x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_filterMapM___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__1(x_11, x_13, x_12);
lean_dec(x_11);
x_15 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_16 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go(x_3, x_4, x_14, x_13, x_15, x_15, x_5, x_6, x_7, x_8, x_9);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_filterMapM___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instMonadMetaM;
x_2 = l_instInhabitedPUnit;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2___closed__1;
x_8 = lean_panic_fn(x_7, x_1);
x_9 = lean_apply_5(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Meta.Match.MatcherApp.Basic", 32);
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Meta.matchMatcherApp\?", 26);
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__1;
x_2 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__2;
x_3 = lean_unsigned_to_nat(63u);
x_4 = lean_unsigned_to_nat(53u);
x_5 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_16; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_16 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 6)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_19, 4);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_array_push(x_2, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_11 = x_22;
x_12 = x_18;
goto block_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_17);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__4;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_25 = l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2(x_24, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_2);
x_11 = x_27;
x_12 = x_26;
goto block_15;
}
else
{
uint8_t x_28; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_25, 0);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_25);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_16);
if (x_32 == 0)
{
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
block_15:
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_1 = x_10;
x_2 = x_13;
x_7 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_unsigned_to_nat(0u);
lean_inc(x_11);
lean_inc(x_2);
x_13 = l_Array_toSubarray___rarg(x_2, x_12, x_11);
x_14 = lean_array_get_size(x_2);
x_15 = lean_nat_dec_lt(x_11, x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_11, x_16);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_nat_add(x_17, x_18);
x_20 = lean_nat_add(x_19, x_16);
lean_dec(x_19);
lean_inc(x_20);
lean_inc(x_2);
x_21 = l_Array_toSubarray___rarg(x_2, x_17, x_20);
x_22 = lean_nat_add(x_18, x_16);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_mk_array(x_22, x_23);
x_25 = l_Lean_InductiveVal_numCtors(x_1);
x_26 = lean_nat_add(x_20, x_25);
lean_dec(x_25);
lean_inc(x_26);
lean_inc(x_2);
x_27 = l_Array_toSubarray___rarg(x_2, x_20, x_26);
x_28 = lean_array_get_size(x_2);
lean_inc(x_2);
x_29 = l_Array_toSubarray___rarg(x_2, x_26, x_28);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_List_lengthTRAux___rarg(x_31, x_12);
lean_dec(x_31);
x_33 = l_List_lengthTRAux___rarg(x_3, x_12);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_33);
lean_dec(x_32);
if (x_15 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 4);
lean_inc(x_35);
lean_dec(x_1);
x_36 = l_Lean_instInhabitedExpr;
x_37 = l___private_Init_GetElem_0__outOfBounds___rarg(x_36);
if (x_34 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_39 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3(x_35, x_38, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = l_List_redLength___rarg(x_3);
x_43 = lean_mk_empty_array_with_capacity(x_42);
lean_dec(x_42);
x_44 = l_List_toArrayAux___rarg(x_3, x_43);
x_45 = l_Array_ofSubarray___rarg(x_13);
x_46 = l_Array_ofSubarray___rarg(x_21);
x_47 = l_Array_ofSubarray___rarg(x_27);
x_48 = l_Array_ofSubarray___rarg(x_29);
x_49 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1;
x_50 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_50, 0, x_4);
lean_ctor_set(x_50, 1, x_44);
lean_ctor_set(x_50, 2, x_49);
lean_ctor_set(x_50, 3, x_24);
lean_ctor_set(x_50, 4, x_45);
lean_ctor_set(x_50, 5, x_37);
lean_ctor_set(x_50, 6, x_46);
lean_ctor_set(x_50, 7, x_41);
lean_ctor_set(x_50, 8, x_47);
lean_ctor_set(x_50, 9, x_48);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_39, 0, x_51);
return x_39;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_52 = lean_ctor_get(x_39, 0);
x_53 = lean_ctor_get(x_39, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_39);
x_54 = l_List_redLength___rarg(x_3);
x_55 = lean_mk_empty_array_with_capacity(x_54);
lean_dec(x_54);
x_56 = l_List_toArrayAux___rarg(x_3, x_55);
x_57 = l_Array_ofSubarray___rarg(x_13);
x_58 = l_Array_ofSubarray___rarg(x_21);
x_59 = l_Array_ofSubarray___rarg(x_27);
x_60 = l_Array_ofSubarray___rarg(x_29);
x_61 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1;
x_62 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_62, 0, x_4);
lean_ctor_set(x_62, 1, x_56);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_24);
lean_ctor_set(x_62, 4, x_57);
lean_ctor_set(x_62, 5, x_37);
lean_ctor_set(x_62, 6, x_58);
lean_ctor_set(x_62, 7, x_52);
lean_ctor_set(x_62, 8, x_59);
lean_ctor_set(x_62, 9, x_60);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_53);
return x_64;
}
}
else
{
uint8_t x_65; 
lean_dec(x_37);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
x_65 = !lean_is_exclusive(x_39);
if (x_65 == 0)
{
return x_39;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_39, 0);
x_67 = lean_ctor_get(x_39, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_39);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_70 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3(x_35, x_69, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; 
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = l_List_redLength___rarg(x_3);
x_74 = lean_mk_empty_array_with_capacity(x_73);
lean_dec(x_73);
x_75 = l_List_toArrayAux___rarg(x_3, x_74);
x_76 = l_Array_ofSubarray___rarg(x_13);
x_77 = l_Array_ofSubarray___rarg(x_21);
x_78 = l_Array_ofSubarray___rarg(x_27);
x_79 = l_Array_ofSubarray___rarg(x_29);
x_80 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_80, 0, x_4);
lean_ctor_set(x_80, 1, x_75);
lean_ctor_set(x_80, 2, x_23);
lean_ctor_set(x_80, 3, x_24);
lean_ctor_set(x_80, 4, x_76);
lean_ctor_set(x_80, 5, x_37);
lean_ctor_set(x_80, 6, x_77);
lean_ctor_set(x_80, 7, x_72);
lean_ctor_set(x_80, 8, x_78);
lean_ctor_set(x_80, 9, x_79);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_70, 0, x_81);
return x_70;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_82 = lean_ctor_get(x_70, 0);
x_83 = lean_ctor_get(x_70, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_70);
x_84 = l_List_redLength___rarg(x_3);
x_85 = lean_mk_empty_array_with_capacity(x_84);
lean_dec(x_84);
x_86 = l_List_toArrayAux___rarg(x_3, x_85);
x_87 = l_Array_ofSubarray___rarg(x_13);
x_88 = l_Array_ofSubarray___rarg(x_21);
x_89 = l_Array_ofSubarray___rarg(x_27);
x_90 = l_Array_ofSubarray___rarg(x_29);
x_91 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_91, 0, x_4);
lean_ctor_set(x_91, 1, x_86);
lean_ctor_set(x_91, 2, x_23);
lean_ctor_set(x_91, 3, x_24);
lean_ctor_set(x_91, 4, x_87);
lean_ctor_set(x_91, 5, x_37);
lean_ctor_set(x_91, 6, x_88);
lean_ctor_set(x_91, 7, x_82);
lean_ctor_set(x_91, 8, x_89);
lean_ctor_set(x_91, 9, x_90);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_83);
return x_93;
}
}
else
{
uint8_t x_94; 
lean_dec(x_37);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
x_94 = !lean_is_exclusive(x_70);
if (x_94 == 0)
{
return x_70;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_70, 0);
x_96 = lean_ctor_get(x_70, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_70);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_1, 4);
lean_inc(x_98);
lean_dec(x_1);
x_99 = lean_array_fget(x_2, x_11);
lean_dec(x_11);
lean_dec(x_2);
if (x_34 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_101 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3(x_98, x_100, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_101) == 0)
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_103 = lean_ctor_get(x_101, 0);
x_104 = l_List_redLength___rarg(x_3);
x_105 = lean_mk_empty_array_with_capacity(x_104);
lean_dec(x_104);
x_106 = l_List_toArrayAux___rarg(x_3, x_105);
x_107 = l_Array_ofSubarray___rarg(x_13);
x_108 = l_Array_ofSubarray___rarg(x_21);
x_109 = l_Array_ofSubarray___rarg(x_27);
x_110 = l_Array_ofSubarray___rarg(x_29);
x_111 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1;
x_112 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_112, 0, x_4);
lean_ctor_set(x_112, 1, x_106);
lean_ctor_set(x_112, 2, x_111);
lean_ctor_set(x_112, 3, x_24);
lean_ctor_set(x_112, 4, x_107);
lean_ctor_set(x_112, 5, x_99);
lean_ctor_set(x_112, 6, x_108);
lean_ctor_set(x_112, 7, x_103);
lean_ctor_set(x_112, 8, x_109);
lean_ctor_set(x_112, 9, x_110);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_101, 0, x_113);
return x_101;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_114 = lean_ctor_get(x_101, 0);
x_115 = lean_ctor_get(x_101, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_101);
x_116 = l_List_redLength___rarg(x_3);
x_117 = lean_mk_empty_array_with_capacity(x_116);
lean_dec(x_116);
x_118 = l_List_toArrayAux___rarg(x_3, x_117);
x_119 = l_Array_ofSubarray___rarg(x_13);
x_120 = l_Array_ofSubarray___rarg(x_21);
x_121 = l_Array_ofSubarray___rarg(x_27);
x_122 = l_Array_ofSubarray___rarg(x_29);
x_123 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1;
x_124 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_124, 0, x_4);
lean_ctor_set(x_124, 1, x_118);
lean_ctor_set(x_124, 2, x_123);
lean_ctor_set(x_124, 3, x_24);
lean_ctor_set(x_124, 4, x_119);
lean_ctor_set(x_124, 5, x_99);
lean_ctor_set(x_124, 6, x_120);
lean_ctor_set(x_124, 7, x_114);
lean_ctor_set(x_124, 8, x_121);
lean_ctor_set(x_124, 9, x_122);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_115);
return x_126;
}
}
else
{
uint8_t x_127; 
lean_dec(x_99);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
x_127 = !lean_is_exclusive(x_101);
if (x_127 == 0)
{
return x_101;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_101, 0);
x_129 = lean_ctor_get(x_101, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_101);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; 
x_131 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
x_132 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3(x_98, x_131, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_132) == 0)
{
uint8_t x_133; 
x_133 = !lean_is_exclusive(x_132);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_134 = lean_ctor_get(x_132, 0);
x_135 = l_List_redLength___rarg(x_3);
x_136 = lean_mk_empty_array_with_capacity(x_135);
lean_dec(x_135);
x_137 = l_List_toArrayAux___rarg(x_3, x_136);
x_138 = l_Array_ofSubarray___rarg(x_13);
x_139 = l_Array_ofSubarray___rarg(x_21);
x_140 = l_Array_ofSubarray___rarg(x_27);
x_141 = l_Array_ofSubarray___rarg(x_29);
x_142 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_142, 0, x_4);
lean_ctor_set(x_142, 1, x_137);
lean_ctor_set(x_142, 2, x_23);
lean_ctor_set(x_142, 3, x_24);
lean_ctor_set(x_142, 4, x_138);
lean_ctor_set(x_142, 5, x_99);
lean_ctor_set(x_142, 6, x_139);
lean_ctor_set(x_142, 7, x_134);
lean_ctor_set(x_142, 8, x_140);
lean_ctor_set(x_142, 9, x_141);
x_143 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_132, 0, x_143);
return x_132;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_144 = lean_ctor_get(x_132, 0);
x_145 = lean_ctor_get(x_132, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_132);
x_146 = l_List_redLength___rarg(x_3);
x_147 = lean_mk_empty_array_with_capacity(x_146);
lean_dec(x_146);
x_148 = l_List_toArrayAux___rarg(x_3, x_147);
x_149 = l_Array_ofSubarray___rarg(x_13);
x_150 = l_Array_ofSubarray___rarg(x_21);
x_151 = l_Array_ofSubarray___rarg(x_27);
x_152 = l_Array_ofSubarray___rarg(x_29);
x_153 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_153, 0, x_4);
lean_ctor_set(x_153, 1, x_148);
lean_ctor_set(x_153, 2, x_23);
lean_ctor_set(x_153, 3, x_24);
lean_ctor_set(x_153, 4, x_149);
lean_ctor_set(x_153, 5, x_99);
lean_ctor_set(x_153, 6, x_150);
lean_ctor_set(x_153, 7, x_144);
lean_ctor_set(x_153, 8, x_151);
lean_ctor_set(x_153, 9, x_152);
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_153);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_145);
return x_155;
}
}
else
{
uint8_t x_156; 
lean_dec(x_99);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
x_156 = !lean_is_exclusive(x_132);
if (x_156 == 0)
{
return x_132;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_132, 0);
x_158 = lean_ctor_get(x_132, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_132);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_st_ref_get(x_10, x_11);
if (x_1 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_apply_6(x_2, x_14, x_7, x_8, x_9, x_10, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_casesOnSuffix;
lean_inc(x_3);
x_20 = l_Lean_isAuxRecursorWithSuffix(x_18, x_3, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = lean_box(0);
x_22 = lean_apply_6(x_2, x_21, x_7, x_8, x_9, x_10, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
x_23 = l_Lean_Name_getPrefix(x_3);
x_24 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_23, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 5)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_4, x_30);
x_32 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1;
lean_inc(x_31);
x_33 = lean_mk_array(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_31, x_34);
lean_dec(x_31);
x_36 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_4, x_33, x_35);
x_37 = lean_ctor_get(x_29, 1);
lean_inc(x_37);
x_38 = lean_nat_add(x_37, x_34);
lean_dec(x_37);
x_39 = lean_ctor_get(x_29, 2);
lean_inc(x_39);
x_40 = lean_nat_add(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
x_41 = lean_nat_add(x_40, x_34);
lean_dec(x_40);
x_42 = l_Lean_InductiveVal_numCtors(x_29);
x_43 = lean_nat_add(x_41, x_42);
lean_dec(x_42);
lean_dec(x_41);
x_44 = lean_array_get_size(x_36);
x_45 = lean_nat_dec_le(x_43, x_44);
lean_dec(x_44);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_36);
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_46 = lean_box(0);
lean_ctor_set(x_24, 0, x_46);
return x_24;
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_free_object(x_24);
x_47 = lean_box(0);
x_48 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2(x_29, x_36, x_5, x_3, x_47, x_7, x_8, x_9, x_10, x_27);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_49 = lean_ctor_get(x_24, 1);
lean_inc(x_49);
lean_dec(x_24);
x_50 = lean_ctor_get(x_25, 0);
lean_inc(x_50);
lean_dec(x_25);
x_51 = lean_unsigned_to_nat(0u);
x_52 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_4, x_51);
x_53 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1;
lean_inc(x_52);
x_54 = lean_mk_array(x_52, x_53);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_sub(x_52, x_55);
lean_dec(x_52);
x_57 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_4, x_54, x_56);
x_58 = lean_ctor_get(x_50, 1);
lean_inc(x_58);
x_59 = lean_nat_add(x_58, x_55);
lean_dec(x_58);
x_60 = lean_ctor_get(x_50, 2);
lean_inc(x_60);
x_61 = lean_nat_add(x_59, x_60);
lean_dec(x_60);
lean_dec(x_59);
x_62 = lean_nat_add(x_61, x_55);
lean_dec(x_61);
x_63 = l_Lean_InductiveVal_numCtors(x_50);
x_64 = lean_nat_add(x_62, x_63);
lean_dec(x_63);
lean_dec(x_62);
x_65 = lean_array_get_size(x_57);
x_66 = lean_nat_dec_le(x_64, x_65);
lean_dec(x_65);
lean_dec(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_57);
lean_dec(x_50);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_49);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_box(0);
x_70 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2(x_50, x_57, x_5, x_3, x_69, x_7, x_8, x_9, x_10, x_49);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_71 = !lean_is_exclusive(x_24);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_24, 0);
lean_dec(x_72);
x_73 = lean_box(0);
lean_ctor_set(x_24, 0, x_73);
return x_24;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_24, 1);
lean_inc(x_74);
lean_dec(x_24);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_77 = !lean_is_exclusive(x_24);
if (x_77 == 0)
{
return x_24;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_24, 0);
x_79 = lean_ctor_get(x_24, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_24);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_11 = l_List_redLength___rarg(x_1);
x_12 = lean_mk_empty_array_with_capacity(x_11);
lean_dec(x_11);
x_13 = l_List_toArrayAux___rarg(x_1, x_12);
x_14 = lean_ctor_get(x_2, 3);
x_15 = lean_ctor_get(x_2, 4);
x_16 = lean_ctor_get(x_2, 0);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_extract___rarg(x_3, x_17, x_16);
x_19 = lean_array_get_size(x_3);
x_20 = lean_nat_dec_lt(x_16, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_16, x_21);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_nat_add(x_22, x_23);
lean_inc(x_24);
lean_inc(x_3);
x_25 = l_Array_toSubarray___rarg(x_3, x_22, x_24);
x_26 = l_Array_ofSubarray___rarg(x_25);
x_27 = lean_ctor_get(x_2, 2);
x_28 = l_Lean_Meta_Match_MatcherInfo_numAlts(x_2);
x_29 = lean_nat_add(x_24, x_28);
lean_dec(x_28);
lean_inc(x_29);
lean_inc(x_3);
x_30 = l_Array_toSubarray___rarg(x_3, x_24, x_29);
x_31 = l_Array_ofSubarray___rarg(x_30);
lean_inc(x_3);
x_32 = l_Array_toSubarray___rarg(x_3, x_29, x_19);
x_33 = l_Array_ofSubarray___rarg(x_32);
if (x_20 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_3);
x_34 = l_Lean_instInhabitedExpr;
x_35 = l___private_Init_GetElem_0__outOfBounds___rarg(x_34);
lean_inc(x_27);
lean_inc(x_15);
lean_inc(x_14);
x_36 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_13);
lean_ctor_set(x_36, 2, x_14);
lean_ctor_set(x_36, 3, x_15);
lean_ctor_set(x_36, 4, x_18);
lean_ctor_set(x_36, 5, x_35);
lean_ctor_set(x_36, 6, x_26);
lean_ctor_set(x_36, 7, x_27);
lean_ctor_set(x_36, 8, x_31);
lean_ctor_set(x_36, 9, x_33);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_10);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_array_fget(x_3, x_16);
lean_dec(x_3);
lean_inc(x_27);
lean_inc(x_15);
lean_inc(x_14);
x_40 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_40, 0, x_4);
lean_ctor_set(x_40, 1, x_13);
lean_ctor_set(x_40, 2, x_14);
lean_ctor_set(x_40, 3, x_15);
lean_ctor_set(x_40, 4, x_18);
lean_ctor_set(x_40, 5, x_39);
lean_ctor_set(x_40, 6, x_26);
lean_ctor_set(x_40, 7, x_27);
lean_ctor_set(x_40, 8, x_31);
lean_ctor_set(x_40, 9, x_33);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_10);
return x_42;
}
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1;
x_9 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = l_Lean_Meta_getMatcherInfo_x3f___at_Lean_Meta_reduceMatcher_x3f___spec__1(x_10, x_3, x_4, x_5, x_6, x_7);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3(x_2, x_8, x_10, x_1, x_11, x_15, x_3, x_4, x_5, x_6, x_14);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_18 = lean_ctor_get(x_12, 1);
x_19 = lean_ctor_get(x_12, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_13, 0);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_21);
x_23 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1;
lean_inc(x_22);
x_24 = lean_mk_array(x_22, x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_22, x_25);
lean_dec(x_22);
x_27 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_24, x_26);
x_28 = lean_array_get_size(x_27);
x_29 = l_Lean_Meta_Match_MatcherInfo_arity(x_20);
x_30 = lean_nat_dec_lt(x_28, x_29);
lean_dec(x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_free_object(x_12);
x_31 = lean_box(0);
x_32 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4(x_11, x_20, x_27, x_10, x_31, x_3, x_4, x_5, x_6, x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_20);
return x_32;
}
else
{
lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = lean_box(0);
lean_ctor_set(x_12, 0, x_33);
return x_12;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_dec(x_12);
x_35 = lean_ctor_get(x_13, 0);
lean_inc(x_35);
lean_dec(x_13);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_36);
x_38 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1;
lean_inc(x_37);
x_39 = lean_mk_array(x_37, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
x_42 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_39, x_41);
x_43 = lean_array_get_size(x_42);
x_44 = l_Lean_Meta_Match_MatcherInfo_arity(x_35);
x_45 = lean_nat_dec_lt(x_43, x_44);
lean_dec(x_44);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_box(0);
x_47 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4(x_11, x_35, x_42, x_10, x_46, x_3, x_4, x_5, x_6, x_34);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_35);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_42);
lean_dec(x_35);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_34);
return x_49;
}
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_1);
x_50 = lean_box(0);
x_51 = lean_apply_6(x_8, x_50, x_3, x_4, x_5, x_6, x_7);
return x_51;
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_simpMatch___lambda__2___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___closed__1;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Meta", 4);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Tactic", 6);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("split", 5);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1;
x_2 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2;
x_3 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("discr mismatch ", 15);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" != ", 4);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_4, x_3);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_23; 
x_13 = lean_array_uget(x_2, x_4);
x_23 = !lean_is_exclusive(x_5);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_24 = lean_ctor_get(x_5, 1);
x_25 = lean_ctor_get(x_5, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_24, 2);
lean_inc(x_28);
x_29 = lean_nat_dec_lt(x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_13);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_5);
x_14 = x_30;
x_15 = x_10;
goto block_22;
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_32 = lean_ctor_get(x_24, 2);
lean_dec(x_32);
x_33 = lean_ctor_get(x_24, 1);
lean_dec(x_33);
x_34 = lean_ctor_get(x_24, 0);
lean_dec(x_34);
x_35 = lean_array_fget(x_26, x_27);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_27, x_36);
lean_dec(x_27);
lean_ctor_set(x_24, 1, x_37);
x_38 = lean_expr_eqv(x_13, x_35);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_free_object(x_5);
x_39 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_40 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_39, x_6, x_7, x_8, x_9, x_10);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_35);
lean_dec(x_13);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_box(0);
x_45 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_24, x_44, x_6, x_7, x_8, x_9, x_43);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_14 = x_46;
x_15 = x_47;
goto block_22;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_48 = lean_ctor_get(x_40, 1);
lean_inc(x_48);
lean_dec(x_40);
x_49 = l_Lean_MessageData_ofExpr(x_13);
x_50 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_MessageData_ofExpr(x_35);
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_39, x_57, x_6, x_7, x_8, x_9, x_48);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_24, x_59, x_6, x_7, x_8, x_9, x_60);
lean_dec(x_59);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_14 = x_62;
x_15 = x_63;
goto block_22;
}
}
else
{
lean_object* x_64; 
lean_dec(x_35);
lean_dec(x_13);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_5);
x_14 = x_64;
x_15 = x_10;
goto block_22;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_24);
x_65 = lean_array_fget(x_26, x_27);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_add(x_27, x_66);
lean_dec(x_27);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_26);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_28);
x_69 = lean_expr_eqv(x_13, x_65);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
lean_free_object(x_5);
x_70 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_71 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_70, x_6, x_7, x_8, x_9, x_10);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_unbox(x_72);
lean_dec(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_65);
lean_dec(x_13);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_dec(x_71);
x_75 = lean_box(0);
x_76 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_68, x_75, x_6, x_7, x_8, x_9, x_74);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_14 = x_77;
x_15 = x_78;
goto block_22;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_79 = lean_ctor_get(x_71, 1);
lean_inc(x_79);
lean_dec(x_71);
x_80 = l_Lean_MessageData_ofExpr(x_13);
x_81 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6;
x_82 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8;
x_84 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_Lean_MessageData_ofExpr(x_65);
x_86 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_88 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_70, x_88, x_6, x_7, x_8, x_9, x_79);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_68, x_90, x_6, x_7, x_8, x_9, x_91);
lean_dec(x_90);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_14 = x_93;
x_15 = x_94;
goto block_22;
}
}
else
{
lean_object* x_95; 
lean_dec(x_65);
lean_dec(x_13);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_68);
lean_ctor_set(x_5, 0, x_1);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_5);
x_14 = x_95;
x_15 = x_10;
goto block_22;
}
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_96 = lean_ctor_get(x_5, 1);
lean_inc(x_96);
lean_dec(x_5);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
x_99 = lean_ctor_get(x_96, 2);
lean_inc(x_99);
x_100 = lean_nat_dec_lt(x_98, x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_13);
lean_inc(x_1);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_1);
lean_ctor_set(x_101, 1, x_96);
x_102 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_14 = x_102;
x_15 = x_10;
goto block_22;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 lean_ctor_release(x_96, 2);
 x_103 = x_96;
} else {
 lean_dec_ref(x_96);
 x_103 = lean_box(0);
}
x_104 = lean_array_fget(x_97, x_98);
x_105 = lean_unsigned_to_nat(1u);
x_106 = lean_nat_add(x_98, x_105);
lean_dec(x_98);
if (lean_is_scalar(x_103)) {
 x_107 = lean_alloc_ctor(0, 3, 0);
} else {
 x_107 = x_103;
}
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_107, 2, x_99);
x_108 = lean_expr_eqv(x_13, x_104);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_110 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_109, x_6, x_7, x_8, x_9, x_10);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_unbox(x_111);
lean_dec(x_111);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_104);
lean_dec(x_13);
x_113 = lean_ctor_get(x_110, 1);
lean_inc(x_113);
lean_dec(x_110);
x_114 = lean_box(0);
x_115 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_107, x_114, x_6, x_7, x_8, x_9, x_113);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_14 = x_116;
x_15 = x_117;
goto block_22;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_118 = lean_ctor_get(x_110, 1);
lean_inc(x_118);
lean_dec(x_110);
x_119 = l_Lean_MessageData_ofExpr(x_13);
x_120 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6;
x_121 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8;
x_123 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
x_124 = l_Lean_MessageData_ofExpr(x_104);
x_125 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_126 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_127 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_109, x_127, x_6, x_7, x_8, x_9, x_118);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_107, x_129, x_6, x_7, x_8, x_9, x_130);
lean_dec(x_129);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_14 = x_132;
x_15 = x_133;
goto block_22;
}
}
else
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_104);
lean_dec(x_13);
lean_inc(x_1);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_1);
lean_ctor_set(x_134, 1, x_107);
x_135 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_14 = x_135;
x_15 = x_10;
goto block_22;
}
}
}
block_22:
{
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; size_t x_19; size_t x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = 1;
x_20 = lean_usize_add(x_4, x_19);
x_4 = x_20;
x_5 = x_18;
x_10 = x_15;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_11 = l_Lean_Expr_replaceFVars(x_1, x_2, x_5);
x_12 = l_Array_ofSubarray___rarg(x_3);
x_13 = l_Array_append___rarg(x_12, x_4);
x_14 = 0;
x_15 = 1;
x_16 = 1;
x_17 = l_Lean_Meta_mkLambdaFVars(x_13, x_11, x_14, x_15, x_16, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_9);
lean_inc(x_10);
lean_inc(x_9);
x_21 = l_Array_toSubarray___rarg(x_9, x_10, x_20);
x_22 = l_Array_ofSubarray___rarg(x_21);
x_23 = 0;
x_24 = 1;
x_25 = 1;
x_26 = l_Lean_Meta_mkLambdaFVars(x_22, x_18, x_23, x_24, x_25, x_12, x_13, x_14, x_15, x_19);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_nat_sub(x_10, x_4);
x_30 = lean_unsigned_to_nat(0u);
lean_inc(x_29);
lean_inc(x_9);
x_31 = l_Array_toSubarray___rarg(x_9, x_30, x_29);
x_32 = lean_nat_dec_eq(x_4, x_30);
lean_dec(x_4);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = l_Array_toSubarray___rarg(x_9, x_29, x_10);
x_34 = l_Array_ofSubarray___rarg(x_33);
lean_inc(x_34);
x_35 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__1___boxed), 10, 3);
lean_closure_set(x_35, 0, x_27);
lean_closure_set(x_35, 1, x_34);
lean_closure_set(x_35, 2, x_31);
x_36 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs(x_3, x_6, x_34, x_35, x_12, x_13, x_14, x_15, x_28);
lean_dec(x_6);
lean_dec(x_3);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_37 = l_Array_ofSubarray___rarg(x_31);
x_38 = l_Lean_Meta_mkLambdaFVars(x_37, x_27, x_23, x_24, x_25, x_12, x_13, x_14, x_15, x_28);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_26);
if (x_39 == 0)
{
return x_26;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_26, 0);
x_41 = lean_ctor_get(x_26, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_26);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_17);
if (x_43 == 0)
{
return x_17;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_17, 0);
x_45 = lean_ctor_get(x_17, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_17);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'applyMatchSplitter' failed, unexpected `match` alternative", 59);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_9);
x_17 = lean_nat_dec_lt(x_16, x_8);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = lean_nat_dec_lt(x_16, x_4);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_10, x_9, x_8, x_19, x_11, x_12, x_13, x_14, x_15);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2;
x_22 = l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(x_21, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2;
x_28 = l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(x_27, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_14, x_13);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_eq(x_12, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_12, x_25);
lean_dec(x_12);
x_27 = lean_nat_dec_lt(x_13, x_11);
x_28 = lean_array_get_size(x_9);
x_29 = lean_nat_dec_lt(x_13, x_28);
lean_dec(x_28);
if (x_27 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = l_Lean_instInhabitedExpr;
x_50 = l___private_Init_GetElem_0__outOfBounds___rarg(x_49);
x_30 = x_50;
goto block_48;
}
else
{
lean_object* x_51; 
x_51 = lean_array_fget(x_10, x_13);
x_30 = x_51;
goto block_48;
}
block_48:
{
lean_object* x_31; 
if (x_29 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_instInhabitedNat;
x_46 = l___private_Init_GetElem_0__outOfBounds___rarg(x_45);
x_31 = x_46;
goto block_44;
}
else
{
lean_object* x_47; 
x_47 = lean_array_fget(x_9, x_13);
x_31 = x_47;
goto block_44;
}
block_44:
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_32 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3), 15, 8);
lean_closure_set(x_32, 0, x_1);
lean_closure_set(x_32, 1, x_2);
lean_closure_set(x_32, 2, x_3);
lean_closure_set(x_32, 3, x_4);
lean_closure_set(x_32, 4, x_5);
lean_closure_set(x_32, 5, x_6);
lean_closure_set(x_32, 6, x_7);
lean_closure_set(x_32, 7, x_31);
x_33 = 0;
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_34 = l_Lean_Meta_lambdaTelescope___at___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm___spec__1___rarg(x_30, x_32, x_33, x_17, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_array_push(x_16, x_35);
x_38 = lean_nat_add(x_13, x_15);
lean_dec(x_13);
x_12 = x_26;
x_13 = x_38;
x_16 = x_37;
x_21 = x_36;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_26);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_34);
if (x_40 == 0)
{
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_34, 0);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_34);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
else
{
lean_object* x_52; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_16);
lean_ctor_set(x_52, 1, x_21);
return x_52;
}
}
else
{
lean_object* x_53; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_16);
lean_ctor_set(x_53, 1, x_21);
return x_53;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_st_ref_set(x_1, x_25, x_23);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_array_get_size(x_2);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_unsigned_to_nat(1u);
x_31 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
lean_inc(x_28);
lean_inc(x_7);
x_32 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5(x_3, x_4, x_5, x_6, x_7, x_8, x_1, x_9, x_10, x_2, x_28, x_28, x_29, x_28, x_30, x_31, x_19, x_20, x_21, x_22, x_27);
lean_dec(x_28);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_35, 0, x_11);
lean_ctor_set(x_35, 1, x_12);
lean_ctor_set(x_35, 2, x_13);
lean_ctor_set(x_35, 3, x_14);
lean_ctor_set(x_35, 4, x_15);
lean_ctor_set(x_35, 5, x_16);
lean_ctor_set(x_35, 6, x_7);
lean_ctor_set(x_35, 7, x_10);
lean_ctor_set(x_35, 8, x_34);
lean_ctor_set(x_35, 9, x_17);
x_36 = l_Lean_Meta_MatcherApp_toExpr(x_35);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_32, 0, x_37);
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(x_40, 0, x_11);
lean_ctor_set(x_40, 1, x_12);
lean_ctor_set(x_40, 2, x_13);
lean_ctor_set(x_40, 3, x_14);
lean_ctor_set(x_40, 4, x_15);
lean_ctor_set(x_40, 5, x_16);
lean_ctor_set(x_40, 6, x_7);
lean_ctor_set(x_40, 7, x_10);
lean_ctor_set(x_40, 8, x_38);
lean_ctor_set(x_40, 9, x_17);
x_41 = l_Lean_Meta_MatcherApp_toExpr(x_40);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_39);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
x_44 = !lean_is_exclusive(x_32);
if (x_44 == 0)
{
return x_32;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_32, 0);
x_46 = lean_ctor_get(x_32, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_32);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_instMonadExceptOfExceptionCoreM;
x_2 = l_StateRefT_x27_instMonadExceptOfStateRefT_x27___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__1;
x_2 = l_ReaderT_instMonadExceptOfReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_instMonadFunctorReaderT), 3, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_instMonadLiftReaderT), 3, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StateRefT_x27_lift), 4, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3;
x_2 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__5;
x_3 = l_Lean_Core_instMonadQuotationCoreM;
x_4 = l_Lean_instMonadQuotation___rarg(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3;
x_2 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__4;
x_3 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__6;
x_4 = l_Lean_instMonadQuotation___rarg(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instAddMessageContextMetaM;
x_2 = l_Lean_Meta_instMonadMetaM;
x_3 = lean_alloc_closure((void*)(l_Lean_instAddErrorMessageContext___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__7;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__2;
x_4 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__8;
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
lean_dec(x_9);
x_15 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_16 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1(x_1, x_15, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
x_20 = l_Lean_Meta_Split_simpMatch___lambda__2___closed__1;
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = l_Lean_Meta_Split_simpMatch___lambda__2___closed__1;
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_dec(x_16);
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_array_get_size(x_2);
x_27 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_28 = l_Array_toSubarray___rarg(x_2, x_27, x_26);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_25, 2);
lean_inc(x_31);
x_32 = lean_ctor_get(x_25, 3);
lean_inc(x_32);
x_33 = lean_ctor_get(x_25, 4);
lean_inc(x_33);
x_34 = lean_ctor_get(x_25, 5);
lean_inc(x_34);
x_35 = lean_ctor_get(x_25, 6);
lean_inc(x_35);
x_36 = lean_ctor_get(x_25, 7);
lean_inc(x_36);
x_37 = lean_ctor_get(x_25, 8);
lean_inc(x_37);
x_38 = lean_ctor_get(x_25, 9);
lean_inc(x_38);
lean_dec(x_25);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_28);
x_41 = lean_array_get_size(x_35);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = 0;
x_44 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4(x_39, x_35, x_42, x_43, x_40, x_10, x_11, x_12, x_13, x_24);
lean_dec(x_35);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__9;
x_49 = lean_box(0);
x_50 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__1(x_3, x_37, x_4, x_2, x_5, x_6, x_7, x_8, x_48, x_36, x_29, x_30, x_31, x_32, x_33, x_34, x_38, x_49, x_10, x_11, x_12, x_13, x_47);
lean_dec(x_37);
return x_50;
}
else
{
uint8_t x_51; 
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_44);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_44, 0);
lean_dec(x_52);
x_53 = lean_ctor_get(x_46, 0);
lean_inc(x_53);
lean_dec(x_46);
lean_ctor_set(x_44, 0, x_53);
return x_44;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_44, 1);
lean_inc(x_54);
lean_dec(x_44);
x_55 = lean_ctor_get(x_46, 0);
lean_inc(x_55);
lean_dec(x_46);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_16);
if (x_57 == 0)
{
return x_16;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_16, 0);
x_59 = lean_ctor_get(x_16, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_16);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Meta_Match_MatcherInfo_arity(x_4);
x_15 = l_Lean_Expr_isAppOfArity(x_8, x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = l_Lean_Meta_Split_simpMatch___lambda__2___closed__1;
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_18, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__4___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_14 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__3), 13, 7);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_7);
lean_closure_set(x_14, 2, x_1);
lean_closure_set(x_14, 3, x_3);
lean_closure_set(x_14, 4, x_4);
lean_closure_set(x_14, 5, x_5);
lean_closure_set(x_14, 6, x_6);
x_15 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_8, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___closed__1;
x_19 = 0;
x_20 = l_Lean_Meta_transform___at_Lean_Meta_zetaReduce___spec__1(x_16, x_14, x_18, x_19, x_19, x_9, x_10, x_11, x_12, x_17);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_22;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
_start:
{
lean_object* x_24; 
x_24 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_2);
return x_24;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = l_Lean_Expr_fvarId_x21(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3___closed__1;
x_8 = lean_panic_fn(x_7, x_1);
x_9 = lean_apply_5(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'applyMatchSplitter' failed, failed to generalize target", 56);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
lean_dec(x_5);
x_11 = l_Array_append___rarg(x_1, x_2);
x_12 = 0;
x_13 = 1;
x_14 = 1;
x_15 = l_Lean_Meta_mkForallFVars(x_11, x_3, x_12, x_13, x_14, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_16);
x_18 = l_Lean_Meta_isTypeCorrect(x_16, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_4);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__2;
x_23 = l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(x_22, x_6, x_7, x_8, x_9, x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_dec(x_18);
x_29 = lean_box(0);
x_30 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__1(x_16, x_4, x_29, x_6, x_7, x_8, x_9, x_28);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'applyMatchSplitter' failed, did not find discriminants", 55);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_st_mk_ref(x_15, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_MVarId_getType(x_1, x_9, x_10, x_11, x_12, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget(x_2, x_3, x_4, x_5, x_6, x_7, x_17, x_20, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_get(x_17, x_24);
lean_dec(x_17);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__2;
x_30 = l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(x_29, x_9, x_10, x_11, x_12, x_28);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_dec(x_25);
x_36 = lean_box(0);
x_37 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2(x_6, x_7, x_23, x_8, x_36, x_9, x_10, x_11, x_12, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_22);
if (x_38 == 0)
{
return x_22;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_22, 0);
x_40 = lean_ctor_get(x_22, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_22);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_19);
if (x_42 == 0)
{
return x_19;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_19, 0);
x_44 = lean_ctor_get(x_19, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_19);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
lean_inc(x_6);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3), 13, 6);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
lean_closure_set(x_13, 5, x_6);
x_14 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs___rarg(x_3, x_6, x_13, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_mkAppN(x_1, x_2);
x_12 = l_Lean_mkAppN(x_11, x_3);
x_13 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_4, x_12, x_6, x_7, x_8, x_9, x_10);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Expr_mvarId_x21(x_1);
x_16 = lean_array_get_size(x_2);
lean_dec(x_2);
x_17 = lean_box(0);
x_18 = 0;
x_19 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_16);
x_20 = l_Lean_Meta_introNCore(x_15, x_16, x_17, x_18, x_19, x_6, x_7, x_8, x_9, x_14);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
x_26 = l_Lean_Meta_introNCore(x_25, x_16, x_17, x_18, x_19, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_ctor_set(x_21, 1, x_28);
lean_ctor_set(x_26, 0, x_21);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_21, 1, x_32);
lean_ctor_set(x_26, 0, x_21);
return x_26;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_37 = x_33;
} else {
 lean_dec_ref(x_33);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set(x_21, 1, x_38);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_21);
lean_ctor_set(x_39, 1, x_34);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_free_object(x_21);
lean_dec(x_24);
x_40 = !lean_is_exclusive(x_26);
if (x_40 == 0)
{
return x_26;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_26, 0);
x_42 = lean_ctor_get(x_26, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_26);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = l_Lean_Meta_introNCore(x_45, x_16, x_17, x_18, x_19, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_52 = x_47;
} else {
 lean_dec_ref(x_47);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_44);
lean_ctor_set(x_54, 1, x_53);
if (lean_is_scalar(x_49)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_49;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_48);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_44);
x_56 = lean_ctor_get(x_46, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_58 = x_46;
} else {
 lean_dec_ref(x_46);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_60 = !lean_is_exclusive(x_20);
if (x_60 == 0)
{
return x_20;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_20, 0);
x_62 = lean_ctor_get(x_20, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_20);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Meta.Tactic.Split", 22);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_private.Lean.Meta.Tactic.Split.0.Lean.Meta.Split.generalizeMatchDiscrs", 71);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__1;
x_2 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__2;
x_3 = lean_unsigned_to_nat(115u);
x_4 = lean_unsigned_to_nat(59u);
x_5 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("targetNew:\n", 11);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_inc(x_1);
x_11 = l_Lean_Meta_getMatcherInfo_x3f___at_Lean_Meta_reduceMatcher_x3f___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__3;
x_15 = l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3(x_14, x_6, x_7, x_8, x_9, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
lean_dec(x_12);
x_18 = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(x_17);
lean_inc(x_3);
lean_inc(x_2);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__4___boxed), 12, 5);
lean_closure_set(x_19, 0, x_2);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_3);
lean_closure_set(x_19, 3, x_17);
lean_closure_set(x_19, 4, x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_Lean_Meta_forallTelescope___at_Lean_Meta_mapForallTelescope_x27___spec__1___rarg(x_4, x_19, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
lean_inc(x_2);
x_25 = l_Lean_MVarId_getTag(x_2, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_6);
x_28 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_23, x_26, x_6, x_7, x_8, x_9, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_32 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_31, x_6, x_7, x_8, x_9, x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_box(0);
x_37 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5(x_29, x_3, x_24, x_2, x_36, x_6, x_7, x_8, x_9, x_35);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
lean_inc(x_29);
x_39 = l_Lean_Expr_mvarId_x21(x_29);
x_40 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__5;
x_42 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_44 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_31, x_44, x_6, x_7, x_8, x_9, x_38);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5(x_29, x_3, x_24, x_2, x_46, x_6, x_7, x_8, x_9, x_47);
lean_dec(x_46);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_25);
if (x_49 == 0)
{
return x_25;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_25, 0);
x_51 = lean_ctor_get(x_25, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_25);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_20);
if (x_53 == 0)
{
return x_20;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_20, 0);
x_55 = lean_ctor_get(x_20, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_20);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_array_get_size(x_4);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_box(0);
x_10 = x_24;
goto block_20;
}
else
{
size_t x_25; size_t x_26; uint8_t x_27; 
x_25 = 0;
x_26 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_27 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___spec__1(x_4, x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_box(0);
x_10 = x_28;
goto block_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_box(0);
lean_inc(x_1);
x_30 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6), 10, 5);
lean_closure_set(x_30, 0, x_2);
lean_closure_set(x_30, 1, x_1);
lean_closure_set(x_30, 2, x_4);
lean_closure_set(x_30, 3, x_3);
lean_closure_set(x_30, 4, x_29);
x_31 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_30, x_5, x_6, x_7, x_8, x_9);
return x_31;
}
}
block_20:
{
lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
x_11 = lean_array_get_size(x_4);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__1(x_12, x_13, x_4);
x_15 = l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3;
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg___boxed), 6, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_18, x_5, x_6, x_7, x_8, x_9);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ReaderT_pure___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_lt(x_3, x_2);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_array_uget(x_1, x_3);
x_20 = lean_ctor_get(x_4, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_dec(x_4);
x_22 = l_Lean_Expr_fvar___override(x_12);
x_23 = l_Lean_Meta_FVarSubst_apply(x_20, x_22);
if (lean_obj_tag(x_23) == 1)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l_Lean_Meta_heqToEq(x_21, x_24, x_25, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_20);
lean_inc(x_29);
lean_inc(x_30);
x_32 = l_Lean_Meta_substCore_x3f(x_30, x_29, x_31, x_20, x_25, x_31, x_5, x_6, x_7, x_8, x_28);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_20);
lean_inc(x_30);
x_35 = l_Lean_Meta_substCore_x3f(x_30, x_29, x_25, x_20, x_25, x_31, x_5, x_6, x_7, x_8, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_20);
lean_ctor_set(x_38, 1, x_30);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_13 = x_39;
x_14 = x_37;
goto block_19;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_30);
lean_dec(x_20);
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
lean_dec(x_36);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_13 = x_45;
x_14 = x_41;
goto block_19;
}
}
else
{
uint8_t x_46; 
lean_dec(x_30);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_46 = !lean_is_exclusive(x_35);
if (x_46 == 0)
{
return x_35;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_35, 0);
x_48 = lean_ctor_get(x_35, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_35);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_20);
x_50 = lean_ctor_get(x_33, 0);
lean_inc(x_50);
lean_dec(x_33);
x_51 = lean_ctor_get(x_32, 1);
lean_inc(x_51);
lean_dec(x_32);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_13 = x_55;
x_14 = x_51;
goto block_19;
}
}
else
{
uint8_t x_56; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_56 = !lean_is_exclusive(x_32);
if (x_56 == 0)
{
return x_32;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_32, 0);
x_58 = lean_ctor_get(x_32, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_32);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_60 = !lean_is_exclusive(x_26);
if (x_60 == 0)
{
return x_26;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_26, 0);
x_62 = lean_ctor_get(x_26, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_26);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_23);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_20);
lean_ctor_set(x_64, 1, x_21);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_13 = x_65;
x_14 = x_9;
goto block_19;
}
block_19:
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = lean_usize_add(x_3, x_16);
x_3 = x_17;
x_4 = x_15;
x_9 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___lambda__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_1);
x_10 = lean_array_get_size(x_3);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = lean_box_usize(x_11);
x_13 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___lambda__1___boxed), 9, 4);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_12);
lean_closure_set(x_14, 2, x_13);
lean_closure_set(x_14, 3, x_9);
x_15 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_14, x_4, x_5, x_6, x_7, x_8);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___lambda__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs(x_1, x_2, x_3, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_4, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_5);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_4, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_12);
if (x_26 == 0)
{
return x_12;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_12, 0);
x_28 = lean_ctor_get(x_12, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_12);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("after unifyEqs\n", 15);
return x_1;
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
x_14 = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(x_1);
lean_dec(x_1);
x_15 = lean_nat_add(x_2, x_14);
lean_dec(x_14);
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_18 = l_Lean_Meta_Cases_unifyEqs_x3f(x_15, x_3, x_16, x_17, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_4, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_5);
lean_ctor_set(x_18, 0, x_24);
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_4, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_ctor_get(x_19, 0);
lean_inc(x_30);
lean_dec(x_19);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_dec(x_18);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
lean_inc(x_6);
x_34 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_6, x_9, x_10, x_11, x_12, x_31);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_6);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_box(0);
x_39 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1(x_32, x_33, x_7, x_4, x_5, x_38, x_9, x_10, x_11, x_12, x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_dec(x_34);
lean_inc(x_32);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_32);
x_42 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__2;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_45 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_6, x_45, x_9, x_10, x_11, x_12, x_40);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1(x_32, x_33, x_7, x_4, x_5, x_47, x_9, x_10, x_11, x_12, x_48);
lean_dec(x_47);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_50 = !lean_is_exclusive(x_18);
if (x_50 == 0)
{
return x_18;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_18, 0);
x_52 = lean_ctor_get(x_18, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_18);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("before unifyEqs\n", 16);
return x_1;
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_dec(x_7);
x_60 = lean_ctor_get(x_2, 2);
x_61 = lean_array_get_size(x_60);
x_62 = lean_nat_dec_lt(x_17, x_61);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = l_instInhabitedNat;
x_64 = l___private_Init_GetElem_0__outOfBounds___rarg(x_63);
x_19 = x_64;
goto block_59;
}
else
{
lean_object* x_65; 
x_65 = lean_array_fget(x_60, x_17);
x_19 = x_65;
goto block_59;
}
block_59:
{
uint8_t x_20; lean_object* x_21; 
x_20 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
x_21 = l_Lean_Meta_introNCore(x_15, x_19, x_6, x_20, x_20, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_3);
x_25 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_3, x_9, x_10, x_11, x_12, x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_1);
x_30 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2(x_1, x_5, x_24, x_17, x_18, x_3, x_4, x_29, x_9, x_10, x_11, x_12, x_28);
lean_dec(x_17);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_7 = x_31;
x_8 = x_16;
x_13 = x_32;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_30, 0);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_30);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_25, 1);
lean_inc(x_38);
lean_dec(x_25);
lean_inc(x_24);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_24);
x_40 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__2;
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
lean_inc(x_3);
x_44 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_43, x_9, x_10, x_11, x_12, x_38);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_1);
x_47 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2(x_1, x_5, x_24, x_17, x_18, x_3, x_4, x_45, x_9, x_10, x_11, x_12, x_46);
lean_dec(x_17);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_7 = x_48;
x_8 = x_16;
x_13 = x_49;
goto _start;
}
else
{
uint8_t x_51; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_47);
if (x_51 == 0)
{
return x_47;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_21);
if (x_55 == 0)
{
return x_21;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_21, 0);
x_57 = lean_ctor_get(x_21, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_21);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("discrEqs after generalizeTargetsEq: ", 36);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__1(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_1);
x_9 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_array_get_size(x_2);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_20, x_3, x_2);
x_22 = lean_array_to_list(lean_box(0), x_21);
x_23 = lean_box(0);
x_24 = l_List_mapTR_loop___at_Lean_MessageData_instCoeListExprMessageData___spec__1(x_22, x_23);
x_25 = l_Lean_MessageData_ofList(x_24);
lean_dec(x_24);
x_26 = l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__2;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_1, x_29, x_4, x_5, x_6, x_7, x_18);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_1);
x_16 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2(x_2, x_3, x_4, x_5, x_6, x_1, x_15, x_7, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_List_reverse___rarg(x_19);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_List_reverse___rarg(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
return x_16;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_1 = 0;
x_2 = 1;
x_3 = 0;
x_4 = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(x_4, 0, x_1);
lean_ctor_set_uint8(x_4, 1, x_2);
lean_ctor_set_uint8(x_4, 2, x_3);
lean_ctor_set_uint8(x_4, 3, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'applyMatchSplitter' failed, unexpected number of goals created after applying splitter for '", 93);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'.", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
x_16 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__1;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_MVarId_apply(x_1, x_2, x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_List_lengthTRAux___rarg(x_18, x_20);
x_22 = l_Lean_Meta_Match_MatchEqns_size(x_5);
x_23 = lean_nat_dec_eq(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = l_Lean_MessageData_ofName(x_9);
x_25 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__3;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__5;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(x_28, x_11, x_12, x_13, x_14, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_9);
x_34 = lean_box(0);
x_35 = l_Lean_Meta_Split_applyMatchSplitter___lambda__2(x_3, x_4, x_5, x_6, x_7, x_8, x_18, x_34, x_11, x_12, x_13, x_14, x_19);
lean_dec(x_5);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_17);
if (x_36 == 0)
{
return x_17;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_17, 0);
x_38 = lean_ctor_get(x_17, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_17);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("after check splitter", 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_17 = 0;
x_18 = 1;
x_19 = 1;
lean_inc(x_1);
x_20 = l_Lean_Meta_mkLambdaFVars(x_1, x_2, x_17, x_18, x_19, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_app___override(x_3, x_21);
x_24 = l_Lean_mkAppN(x_23, x_1);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_24);
x_25 = l_Lean_Meta_check(x_24, x_12, x_13, x_14, x_15, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
lean_inc(x_4);
x_27 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_4, x_12, x_13, x_14, x_15, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_box(0);
x_32 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3(x_5, x_24, x_6, x_7, x_8, x_4, x_9, x_10, x_11, x_31, x_12, x_13, x_14, x_15, x_30);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__2;
lean_inc(x_4);
x_35 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_4, x_34, x_12, x_13, x_14, x_15, x_33);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Meta_Split_applyMatchSplitter___lambda__3(x_5, x_24, x_6, x_7, x_8, x_4, x_9, x_10, x_11, x_36, x_12, x_13, x_14, x_15, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_39 = !lean_is_exclusive(x_25);
if (x_39 == 0)
{
return x_25;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_25, 0);
x_41 = lean_ctor_get(x_25, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_25);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_20);
if (x_43 == 0)
{
return x_20;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_20, 0);
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_20);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_to_list(lean_box(0), x_13);
x_20 = l_Lean_Expr_const___override(x_1, x_19);
x_21 = l_Lean_mkAppN(x_20, x_2);
lean_inc(x_6);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_Split_applyMatchSplitter___lambda__4), 16, 11);
lean_closure_set(x_22, 0, x_3);
lean_closure_set(x_22, 1, x_4);
lean_closure_set(x_22, 2, x_21);
lean_closure_set(x_22, 3, x_5);
lean_closure_set(x_22, 4, x_6);
lean_closure_set(x_22, 5, x_7);
lean_closure_set(x_22, 6, x_8);
lean_closure_set(x_22, 7, x_9);
lean_closure_set(x_22, 8, x_10);
lean_closure_set(x_22, 9, x_11);
lean_closure_set(x_22, 10, x_12);
x_23 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_6, x_22, x_14, x_15, x_16, x_17, x_18);
return x_23;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_6(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("match-splitter can only eliminate into `Prop`", 45);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__7(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_14);
x_20 = lean_array_get_size(x_1);
x_21 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_22 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_21, x_2, x_1);
lean_inc(x_3);
x_23 = l_Lean_MVarId_getType(x_3, x_15, x_16, x_17, x_18, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Meta_getLevel), 6, 1);
lean_closure_set(x_26, 0, x_24);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_3);
x_27 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_3, x_26, x_15, x_16, x_17, x_18, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_8, 3);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = l_Lean_Level_isZero(x_29);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_32 = l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__2;
x_33 = l_Lean_throwError___at___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___spec__3(x_32, x_15, x_16, x_17, x_18, x_30);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
lean_object* x_38; 
x_38 = l_Lean_Meta_Split_applyMatchSplitter___lambda__5(x_4, x_5, x_22, x_24, x_6, x_3, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_15, x_16, x_17, x_18, x_30);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_27, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_27, 1);
lean_inc(x_40);
lean_dec(x_27);
x_41 = lean_ctor_get(x_28, 0);
lean_inc(x_41);
lean_dec(x_28);
x_42 = lean_array_set(x_13, x_41, x_39);
lean_dec(x_41);
x_43 = l_Lean_Meta_Split_applyMatchSplitter___lambda__5(x_4, x_5, x_22, x_24, x_6, x_3, x_7, x_8, x_9, x_10, x_11, x_12, x_42, x_15, x_16, x_17, x_18, x_40);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_27);
if (x_44 == 0)
{
return x_27;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_27, 0);
x_46 = lean_ctor_get(x_27, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_27);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_23);
if (x_48 == 0)
{
return x_23;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_23, 0);
x_50 = lean_ctor_get(x_23, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_23);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("after introN\n", 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
lean_dec(x_12);
x_18 = lean_array_get_size(x_1);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = 0;
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_18);
x_21 = l_Lean_Meta_introNCore(x_2, x_18, x_19, x_20, x_20, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_3);
x_26 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_3, x_13, x_14, x_15, x_16, x_23);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_box(0);
x_31 = l_Lean_Meta_Split_applyMatchSplitter___lambda__7(x_24, x_4, x_25, x_5, x_6, x_3, x_19, x_7, x_8, x_9, x_18, x_10, x_11, x_30, x_13, x_14, x_15, x_16, x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
lean_inc(x_25);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_25);
x_34 = l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__2;
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
lean_inc(x_3);
x_38 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_37, x_13, x_14, x_15, x_16, x_32);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Meta_Split_applyMatchSplitter___lambda__7(x_24, x_4, x_25, x_5, x_6, x_3, x_19, x_7, x_8, x_9, x_18, x_10, x_11, x_39, x_13, x_14, x_15, x_16, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_21);
if (x_42 == 0)
{
return x_21;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_21, 0);
x_44 = lean_ctor_get(x_21, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_21);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("after generalize\n", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_13);
x_19 = lean_array_get_size(x_1);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = 0;
x_22 = l_Array_mapMUnsafe_map___at_Lean_LocalContext_getFVars___spec__1(x_20, x_21, x_1);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
x_23 = l_Lean_Meta_generalizeTargetsEq(x_2, x_3, x_22, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed__const__1;
lean_inc(x_5);
lean_inc(x_4);
x_27 = lean_alloc_closure((void*)(l_Lean_Meta_Split_applyMatchSplitter___lambda__1___boxed), 8, 3);
lean_closure_set(x_27, 0, x_4);
lean_closure_set(x_27, 1, x_5);
lean_closure_set(x_27, 2, x_26);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_24);
x_28 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_24, x_27, x_14, x_15, x_16, x_17, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_4);
x_30 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_4, x_14, x_15, x_16, x_17, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_box(0);
x_35 = l_Lean_Meta_Split_applyMatchSplitter___lambda__8(x_6, x_24, x_4, x_21, x_7, x_8, x_9, x_10, x_5, x_11, x_12, x_34, x_14, x_15, x_16, x_17, x_33);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
lean_inc(x_24);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_24);
x_38 = l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__2;
x_39 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_inc(x_4);
x_42 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_4, x_41, x_14, x_15, x_16, x_17, x_36);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Meta_Split_applyMatchSplitter___lambda__8(x_6, x_24, x_4, x_21, x_7, x_8, x_9, x_10, x_5, x_11, x_12, x_43, x_14, x_15, x_16, x_17, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_28);
if (x_46 == 0)
{
return x_28;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_28, 0);
x_48 = lean_ctor_get(x_28, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_28);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_23);
if (x_50 == 0)
{
return x_23;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_23, 0);
x_52 = lean_ctor_get(x_23, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_23);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("after generalizeMatchDiscrs\n", 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
lean_dec(x_11);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs(x_1, x_2, x_3, x_4, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_5);
x_24 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_5, x_12, x_13, x_14, x_15, x_20);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_box(0);
x_29 = l_Lean_Meta_Split_applyMatchSplitter___lambda__9(x_21, x_23, x_3, x_5, x_22, x_4, x_6, x_7, x_8, x_9, x_2, x_10, x_28, x_12, x_13, x_14, x_15, x_27);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_dec(x_24);
lean_inc(x_23);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_23);
x_32 = l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__2;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
lean_inc(x_5);
x_36 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_5, x_35, x_12, x_13, x_14, x_15, x_30);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Meta_Split_applyMatchSplitter___lambda__9(x_21, x_23, x_3, x_5, x_22, x_4, x_6, x_7, x_8, x_9, x_2, x_10, x_37, x_12, x_13, x_14, x_15, x_38);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_17);
if (x_40 == 0)
{
return x_17;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'applyMatchSplitter' failed, '", 30);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("' is not a 'match' auxiliary declaration.", 41);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("applyMatchSplitter\n", 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_applyMatchSplitter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_applyMatchSplitter___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_11 = l_Lean_Meta_getMatcherInfo_x3f___at_Lean_Meta_reduceMatcher_x3f___spec__1(x_2, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_MessageData_ofName(x_2);
x_15 = l_Lean_Meta_Split_applyMatchSplitter___closed__2;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Meta_Split_applyMatchSplitter___closed__4;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1(x_18, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_ctor_get(x_12, 0);
lean_inc(x_21);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
x_22 = lean_get_match_equations_for(x_2, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_inc(x_3);
x_26 = lean_array_to_list(lean_box(0), x_3);
lean_inc(x_25);
x_27 = l_Lean_Expr_const___override(x_25, x_26);
lean_inc(x_4);
x_28 = l_Lean_mkAppN(x_27, x_4);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_29 = lean_infer_type(x_28, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_32 = l_Lean_Meta_whnfForall(x_30, x_6, x_7, x_8, x_9, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Expr_bindingDomain_x21(x_33);
lean_dec(x_33);
x_36 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_37 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_36, x_6, x_7, x_8, x_9, x_34);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_box(0);
x_42 = l_Lean_Meta_Split_applyMatchSplitter___lambda__10(x_1, x_2, x_35, x_5, x_36, x_25, x_4, x_21, x_23, x_3, x_41, x_6, x_7, x_8, x_9, x_40);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
lean_inc(x_1);
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_1);
x_45 = l_Lean_Meta_Split_applyMatchSplitter___closed__6;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_36, x_48, x_6, x_7, x_8, x_9, x_43);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Meta_Split_applyMatchSplitter___lambda__10(x_1, x_2, x_35, x_5, x_36, x_25, x_4, x_21, x_23, x_3, x_50, x_6, x_7, x_8, x_9, x_51);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_32);
if (x_53 == 0)
{
return x_32;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_32, 0);
x_55 = lean_ctor_get(x_32, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_32);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_29);
if (x_57 == 0)
{
return x_29;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_29, 0);
x_59 = lean_ctor_get(x_29, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_29);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_22);
if (x_61 == 0)
{
return x_22;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_22, 0);
x_63 = lean_ctor_get(x_22, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_22);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; lean_object* x_10; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_Split_applyMatchSplitter___lambda__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_Split_applyMatchSplitter___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__5___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_Lean_Meta_Split_applyMatchSplitter___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Split_applyMatchSplitter___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__7___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
size_t x_20; lean_object* x_21; 
x_20 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_21 = l_Lean_Meta_Split_applyMatchSplitter___lambda__7(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__8___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
size_t x_18; lean_object* x_19; 
x_18 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_19 = l_Lean_Meta_Split_applyMatchSplitter___lambda__8(x_1, x_2, x_3, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_Lean_Meta_Split_applyMatchSplitter___lambda__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_splitMatch___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_array_get_size(x_17);
x_19 = lean_nat_dec_lt(x_15, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = l_Lean_instInhabitedName;
x_21 = l___private_Init_GetElem_0__outOfBounds___rarg(x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_22 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(x_13, x_1, x_21, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_15, x_25);
lean_dec(x_15);
lean_ctor_set(x_4, 1, x_16);
lean_ctor_set(x_4, 0, x_23);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_26);
x_4 = x_14;
x_9 = x_24;
goto _start;
}
else
{
uint8_t x_28; 
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_4);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_array_fget(x_17, x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_33 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(x_13, x_1, x_32, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_15, x_36);
lean_dec(x_15);
lean_ctor_set(x_4, 1, x_16);
lean_ctor_set(x_4, 0, x_34);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_37);
x_4 = x_14;
x_9 = x_35;
goto _start;
}
else
{
uint8_t x_39; 
lean_free_object(x_3);
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_4);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_33);
if (x_39 == 0)
{
return x_33;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_33, 0);
x_41 = lean_ctor_get(x_33, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_33);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_4, 0);
x_44 = lean_ctor_get(x_4, 1);
x_45 = lean_ctor_get(x_3, 0);
x_46 = lean_ctor_get(x_3, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_3);
x_47 = lean_ctor_get(x_2, 0);
x_48 = lean_array_get_size(x_47);
x_49 = lean_nat_dec_lt(x_45, x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = l_Lean_instInhabitedName;
x_51 = l___private_Init_GetElem_0__outOfBounds___rarg(x_50);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_52 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(x_43, x_1, x_51, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_add(x_45, x_55);
lean_dec(x_45);
lean_ctor_set(x_4, 1, x_46);
lean_ctor_set(x_4, 0, x_53);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_4);
x_3 = x_57;
x_4 = x_44;
x_9 = x_54;
goto _start;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_46);
lean_dec(x_45);
lean_free_object(x_4);
lean_dec(x_44);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_59 = lean_ctor_get(x_52, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_52, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_61 = x_52;
} else {
 lean_dec_ref(x_52);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_array_fget(x_47, x_45);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_64 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(x_43, x_1, x_63, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_nat_add(x_45, x_67);
lean_dec(x_45);
lean_ctor_set(x_4, 1, x_46);
lean_ctor_set(x_4, 0, x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_4);
x_3 = x_69;
x_4 = x_44;
x_9 = x_66;
goto _start;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_46);
lean_dec(x_45);
lean_free_object(x_4);
lean_dec(x_44);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_71 = lean_ctor_get(x_64, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_64, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_73 = x_64;
} else {
 lean_dec_ref(x_64);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_75 = lean_ctor_get(x_4, 0);
x_76 = lean_ctor_get(x_4, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_4);
x_77 = lean_ctor_get(x_3, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_3, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_79 = x_3;
} else {
 lean_dec_ref(x_3);
 x_79 = lean_box(0);
}
x_80 = lean_ctor_get(x_2, 0);
x_81 = lean_array_get_size(x_80);
x_82 = lean_nat_dec_lt(x_77, x_81);
lean_dec(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = l_Lean_instInhabitedName;
x_84 = l___private_Init_GetElem_0__outOfBounds___rarg(x_83);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_85 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(x_75, x_1, x_84, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_unsigned_to_nat(1u);
x_89 = lean_nat_add(x_77, x_88);
lean_dec(x_77);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_86);
lean_ctor_set(x_90, 1, x_78);
if (lean_is_scalar(x_79)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_79;
}
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_3 = x_91;
x_4 = x_76;
x_9 = x_87;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_95 = x_85;
} else {
 lean_dec_ref(x_85);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_array_fget(x_80, x_77);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_98 = l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_simpMatchTargetCore(x_75, x_1, x_97, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_77, x_101);
lean_dec(x_77);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_99);
lean_ctor_set(x_103, 1, x_78);
if (lean_is_scalar(x_79)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_79;
}
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
x_3 = x_104;
x_4 = x_76;
x_9 = x_100;
goto _start;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_106 = lean_ctor_get(x_98, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_98, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_108 = x_98;
} else {
 lean_dec_ref(x_98);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(1, 2, 0);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_107);
return x_109;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Split_splitMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("splitMatch", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_splitMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Split_splitMatch___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Split_splitMatch___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("match application expected", 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_splitMatch___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Split_splitMatch___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_splitMatch___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_splitMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_26; lean_object* x_27; 
x_26 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_27 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1(x_2, x_26, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_1);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_Split_splitMatch___closed__4;
x_31 = l_Lean_throwError___at_Lean_Meta_Split_applyMatchSplitter___spec__1(x_30, x_3, x_4, x_5, x_6, x_29);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_8 = x_32;
x_9 = x_33;
goto block_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_ctor_get(x_28, 0);
lean_inc(x_35);
lean_dec(x_28);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_36);
x_37 = lean_get_match_equations_for(x_36, x_3, x_4, x_5, x_6, x_34);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_35, 4);
lean_inc(x_41);
x_42 = lean_ctor_get(x_35, 6);
lean_inc(x_42);
lean_dec(x_35);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_36);
x_43 = l_Lean_Meta_Split_applyMatchSplitter(x_1, x_36, x_40, x_41, x_42, x_3, x_4, x_5, x_6, x_39);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Meta_Split_splitMatch___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_47 = l_List_foldlM___at_Lean_Meta_Split_splitMatch___spec__1(x_36, x_38, x_46, x_44, x_3, x_4, x_5, x_6, x_45);
lean_dec(x_38);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = l_List_reverse___rarg(x_50);
lean_ctor_set(x_47, 0, x_51);
return x_47;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_List_reverse___rarg(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_47, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_47, 1);
lean_inc(x_58);
lean_dec(x_47);
x_8 = x_57;
x_9 = x_58;
goto block_25;
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_38);
lean_dec(x_36);
x_59 = lean_ctor_get(x_43, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_43, 1);
lean_inc(x_60);
lean_dec(x_43);
x_8 = x_59;
x_9 = x_60;
goto block_25;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_1);
x_61 = lean_ctor_get(x_37, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_37, 1);
lean_inc(x_62);
lean_dec(x_37);
x_8 = x_61;
x_9 = x_62;
goto block_25;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_1);
x_63 = lean_ctor_get(x_27, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_27, 1);
lean_inc(x_64);
lean_dec(x_27);
x_8 = x_63;
x_9 = x_64;
goto block_25;
}
block_25:
{
uint8_t x_10; 
x_10 = l_Lean_Exception_isRuntime(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_Meta_Split_splitMatch___closed__2;
x_12 = l_Lean_Meta_throwNestedTacticEx___rarg(x_11, x_8, x_3, x_4, x_5, x_6, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = lean_ctor_get_uint8(x_5, sizeof(void*)*11);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = l_Lean_Meta_Split_splitMatch___closed__2;
x_20 = l_Lean_Meta_throwNestedTacticEx___rarg(x_19, x_8, x_3, x_4, x_5, x_6, x_9);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lean_Meta_Split_splitMatch___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_foldlM___at_Lean_Meta_Split_splitMatch___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_13 = lean_array_get_size(x_1);
x_14 = lean_nat_dec_lt(x_4, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = l_Lean_instInhabitedExpr;
x_16 = l___private_Init_GetElem_0__outOfBounds___rarg(x_15);
x_17 = l_Lean_Expr_hasLooseBVars(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
{
lean_object* _tmp_2 = x_12;
lean_object* _tmp_3 = x_18;
lean_object* _tmp_6 = x_2;
x_3 = _tmp_2;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_4);
x_20 = l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2;
return x_20;
}
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_array_fget(x_1, x_4);
x_22 = l_Lean_Expr_hasLooseBVars(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
{
lean_object* _tmp_2 = x_12;
lean_object* _tmp_3 = x_23;
lean_object* _tmp_6 = x_2;
x_3 = _tmp_2;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_12);
lean_dec(x_4);
x_25 = l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2;
return x_25;
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_7);
return x_7;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_7);
return x_7;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Split_findSplit_x3f_isCandidate___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Split_findSplit_x3f_isCandidate___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__2;
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_sub(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__4;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_sub(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_26; 
lean_inc(x_4);
x_26 = l_Lean_HashSetImp_contains___at_Lean_ForEachExprWhere_checked___spec__1(x_3, x_4);
if (x_26 == 0)
{
if (x_2 == 0)
{
lean_object* x_27; 
x_27 = lean_box(0);
x_5 = x_27;
goto block_25;
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Expr_isIte(x_4);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l_Lean_Expr_isDIte(x_4);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_box(0);
x_5 = x_30;
goto block_25;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_1);
x_31 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
x_32 = l_Lean_Expr_getRevArg_x21(x_4, x_31);
lean_dec(x_4);
x_33 = l_Lean_Expr_hasLooseBVars(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; lean_object* x_35; 
x_34 = 1;
x_35 = lean_box(x_34);
return x_35;
}
else
{
uint8_t x_36; lean_object* x_37; 
x_36 = 0;
x_37 = lean_box(x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_1);
x_38 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
x_39 = l_Lean_Expr_getRevArg_x21(x_4, x_38);
lean_dec(x_4);
x_40 = l_Lean_Expr_hasLooseBVars(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
uint8_t x_41; lean_object* x_42; 
x_41 = 1;
x_42 = lean_box(x_41);
return x_42;
}
else
{
uint8_t x_43; lean_object* x_44; 
x_43 = 0;
x_44 = lean_box(x_43);
return x_44;
}
}
}
}
else
{
uint8_t x_45; lean_object* x_46; 
lean_dec(x_4);
lean_dec(x_1);
x_45 = 0;
x_46 = lean_box(x_45);
return x_46;
}
block_25:
{
lean_object* x_6; 
lean_dec(x_5);
x_6 = l_Lean_Meta_isMatcherAppCore_x3f(x_1, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = 0;
x_8 = lean_box(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_4, x_10);
x_12 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1;
lean_inc(x_11);
x_13 = lean_mk_array(x_11, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_11, x_14);
lean_dec(x_11);
x_16 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_4, x_13, x_15);
x_17 = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(x_9);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_nat_add(x_17, x_18);
lean_dec(x_18);
x_20 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__1;
lean_inc(x_19);
x_21 = l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1(x_16, x_20, x_19, x_17, x_19, x_14, x_20);
lean_dec(x_19);
lean_dec(x_16);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__3;
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_isCandidate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Meta_Split_findSplit_x3f_isCandidate(x_1, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_go(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_Split_findSplit_x3f_isCandidate___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_3);
lean_inc(x_4);
x_7 = l_Lean_Expr_FindImpl_findUnsafe_x3f(x_6, x_4);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_Expr_isIte(x_4);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = l_Lean_Expr_isDIte(x_4);
lean_dec(x_4);
if (x_12 == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
x_14 = l_Lean_Expr_getRevArg_x21(x_10, x_13);
x_15 = l_Lean_Meta_Split_findSplit_x3f_go(x_1, x_2, x_3, x_14);
if (lean_obj_tag(x_15) == 0)
{
return x_7;
}
else
{
uint8_t x_16; 
lean_free_object(x_7);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
x_19 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
x_20 = l_Lean_Expr_getRevArg_x21(x_10, x_19);
x_21 = l_Lean_Meta_Split_findSplit_x3f_go(x_1, x_2, x_3, x_20);
if (lean_obj_tag(x_21) == 0)
{
return x_7;
}
else
{
uint8_t x_22; 
lean_free_object(x_7);
lean_dec(x_10);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
else
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_7, 0);
lean_inc(x_25);
lean_dec(x_7);
x_26 = l_Lean_Expr_isIte(x_4);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_Expr_isDIte(x_4);
lean_dec(x_4);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_3);
lean_dec(x_1);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_25);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
x_30 = l_Lean_Expr_getRevArg_x21(x_25, x_29);
x_31 = l_Lean_Meta_Split_findSplit_x3f_go(x_1, x_2, x_3, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_25);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_25);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(1, 1, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_33);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_4);
x_36 = l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5;
x_37 = l_Lean_Expr_getRevArg_x21(x_25, x_36);
x_38 = l_Lean_Meta_Split_findSplit_x3f_go(x_1, x_2, x_3, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_25);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_25);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 x_41 = x_38;
} else {
 lean_dec_ref(x_38);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(1, 1, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_40);
return x_42;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Meta_Split_findSplit_x3f_go(x_1, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_Split_findSplit_x3f_go(x_1, x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Split_findSplit_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Meta_Split_findSplit_x3f(x_1, x_2, x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_splitTarget_x3f_go___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("did not find term to split\n", 27);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_splitTarget_x3f_go___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_splitTarget_x3f_go___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f_go(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_3);
lean_inc(x_4);
x_14 = l_Lean_Meta_Split_findSplit_x3f_go(x_13, x_2, x_4, x_3);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
lean_dec(x_4);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_16 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_15, x_5, x_6, x_7, x_8, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1;
x_20 = lean_unbox(x_17);
lean_dec(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_apply_6(x_19, x_21, x_5, x_6, x_7, x_8, x_18);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_1);
x_24 = l_Lean_Meta_splitTarget_x3f_go___closed__2;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_15, x_27, x_5, x_6, x_7, x_8, x_18);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_apply_6(x_19, x_29, x_5, x_6, x_7, x_8, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_14);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_14, 0);
x_34 = l_Lean_Expr_isIte(x_33);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = l_Lean_Expr_isDIte(x_33);
if (x_35 == 0)
{
lean_object* x_36; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_33);
lean_inc(x_1);
x_36 = l_Lean_Meta_Split_splitMatch(x_1, x_33, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_ctor_set(x_14, 0, x_38);
lean_ctor_set(x_36, 0, x_14);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_36, 0);
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_36);
lean_ctor_set(x_14, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_14);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_free_object(x_14);
x_42 = !lean_is_exclusive(x_36);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_36, 0);
x_44 = lean_ctor_get(x_36, 1);
x_45 = l_Lean_Exception_isRuntime(x_43);
if (x_45 == 0)
{
lean_object* x_46; 
lean_free_object(x_36);
lean_dec(x_43);
x_46 = l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(x_4, x_33);
x_4 = x_46;
x_9 = x_44;
goto _start;
}
else
{
uint8_t x_48; 
x_48 = lean_ctor_get_uint8(x_7, sizeof(void*)*11);
if (x_48 == 0)
{
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_36;
}
else
{
lean_object* x_49; 
lean_free_object(x_36);
lean_dec(x_43);
x_49 = l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(x_4, x_33);
x_4 = x_49;
x_9 = x_44;
goto _start;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = lean_ctor_get(x_36, 0);
x_52 = lean_ctor_get(x_36, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_36);
x_53 = l_Lean_Exception_isRuntime(x_51);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_51);
x_54 = l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(x_4, x_33);
x_4 = x_54;
x_9 = x_52;
goto _start;
}
else
{
uint8_t x_56; 
x_56 = lean_ctor_get_uint8(x_7, sizeof(void*)*11);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_51);
lean_ctor_set(x_57, 1, x_52);
return x_57;
}
else
{
lean_object* x_58; 
lean_dec(x_51);
x_58 = l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(x_4, x_33);
x_4 = x_58;
x_9 = x_52;
goto _start;
}
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_free_object(x_14);
lean_dec(x_33);
lean_dec(x_4);
lean_dec(x_3);
x_60 = lean_box(0);
x_61 = l_Lean_Meta_splitIfTarget_x3f(x_1, x_60, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_61);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_61, 0);
lean_dec(x_64);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_61, 1);
lean_inc(x_65);
lean_dec(x_61);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_60);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_62);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_62, 0);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = !lean_is_exclusive(x_61);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_72 = lean_ctor_get(x_61, 0);
lean_dec(x_72);
x_73 = lean_ctor_get(x_69, 0);
lean_inc(x_73);
lean_dec(x_69);
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
lean_dec(x_70);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_73);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_62, 0, x_77);
return x_61;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_61, 1);
lean_inc(x_78);
lean_dec(x_61);
x_79 = lean_ctor_get(x_69, 0);
lean_inc(x_79);
lean_dec(x_69);
x_80 = lean_ctor_get(x_70, 0);
lean_inc(x_80);
lean_dec(x_70);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_79);
lean_ctor_set(x_83, 1, x_82);
lean_ctor_set(x_62, 0, x_83);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_62);
lean_ctor_set(x_84, 1, x_78);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_85 = lean_ctor_get(x_62, 0);
lean_inc(x_85);
lean_dec(x_62);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_ctor_get(x_61, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_89 = x_61;
} else {
 lean_dec_ref(x_61);
 x_89 = lean_box(0);
}
x_90 = lean_ctor_get(x_86, 0);
lean_inc(x_90);
lean_dec(x_86);
x_91 = lean_ctor_get(x_87, 0);
lean_inc(x_91);
lean_dec(x_87);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_90);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
if (lean_is_scalar(x_89)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_89;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_88);
return x_96;
}
}
}
else
{
uint8_t x_97; 
x_97 = !lean_is_exclusive(x_61);
if (x_97 == 0)
{
return x_61;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_61, 0);
x_99 = lean_ctor_get(x_61, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_61);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_101; lean_object* x_102; 
lean_free_object(x_14);
lean_dec(x_33);
lean_dec(x_4);
lean_dec(x_3);
x_101 = lean_box(0);
x_102 = l_Lean_Meta_splitIfTarget_x3f(x_1, x_101, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
if (lean_obj_tag(x_103) == 0)
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_102);
if (x_104 == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_102, 0);
lean_dec(x_105);
lean_ctor_set(x_102, 0, x_101);
return x_102;
}
else
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_102, 1);
lean_inc(x_106);
lean_dec(x_102);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_101);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
else
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_103);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = lean_ctor_get(x_103, 0);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = !lean_is_exclusive(x_102);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_102, 0);
lean_dec(x_113);
x_114 = lean_ctor_get(x_110, 0);
lean_inc(x_114);
lean_dec(x_110);
x_115 = lean_ctor_get(x_111, 0);
lean_inc(x_115);
lean_dec(x_111);
x_116 = lean_box(0);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_114);
lean_ctor_set(x_118, 1, x_117);
lean_ctor_set(x_103, 0, x_118);
return x_102;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_119 = lean_ctor_get(x_102, 1);
lean_inc(x_119);
lean_dec(x_102);
x_120 = lean_ctor_get(x_110, 0);
lean_inc(x_120);
lean_dec(x_110);
x_121 = lean_ctor_get(x_111, 0);
lean_inc(x_121);
lean_dec(x_111);
x_122 = lean_box(0);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_120);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set(x_103, 0, x_124);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_103);
lean_ctor_set(x_125, 1, x_119);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_126 = lean_ctor_get(x_103, 0);
lean_inc(x_126);
lean_dec(x_103);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_ctor_get(x_102, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_130 = x_102;
} else {
 lean_dec_ref(x_102);
 x_130 = lean_box(0);
}
x_131 = lean_ctor_get(x_127, 0);
lean_inc(x_131);
lean_dec(x_127);
x_132 = lean_ctor_get(x_128, 0);
lean_inc(x_132);
lean_dec(x_128);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_131);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_136, 0, x_135);
if (lean_is_scalar(x_130)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_130;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_129);
return x_137;
}
}
}
else
{
uint8_t x_138; 
x_138 = !lean_is_exclusive(x_102);
if (x_138 == 0)
{
return x_102;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_102, 0);
x_140 = lean_ctor_get(x_102, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_102);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
}
else
{
lean_object* x_142; uint8_t x_143; 
x_142 = lean_ctor_get(x_14, 0);
lean_inc(x_142);
lean_dec(x_14);
x_143 = l_Lean_Expr_isIte(x_142);
if (x_143 == 0)
{
uint8_t x_144; 
x_144 = l_Lean_Expr_isDIte(x_142);
if (x_144 == 0)
{
lean_object* x_145; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_142);
lean_inc(x_1);
x_145 = l_Lean_Meta_Split_splitMatch(x_1, x_142, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_142);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_146);
if (lean_is_scalar(x_148)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_148;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_147);
return x_150;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_151 = lean_ctor_get(x_145, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_145, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_153 = x_145;
} else {
 lean_dec_ref(x_145);
 x_153 = lean_box(0);
}
x_154 = l_Lean_Exception_isRuntime(x_151);
if (x_154 == 0)
{
lean_object* x_155; 
lean_dec(x_153);
lean_dec(x_151);
x_155 = l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(x_4, x_142);
x_4 = x_155;
x_9 = x_152;
goto _start;
}
else
{
uint8_t x_157; 
x_157 = lean_ctor_get_uint8(x_7, sizeof(void*)*11);
if (x_157 == 0)
{
lean_object* x_158; 
lean_dec(x_142);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_153)) {
 x_158 = lean_alloc_ctor(1, 2, 0);
} else {
 x_158 = x_153;
}
lean_ctor_set(x_158, 0, x_151);
lean_ctor_set(x_158, 1, x_152);
return x_158;
}
else
{
lean_object* x_159; 
lean_dec(x_153);
lean_dec(x_151);
x_159 = l_Lean_HashSetImp_insert___at_Lean_ForEachExprWhere_checked___spec__3(x_4, x_142);
x_4 = x_159;
x_9 = x_152;
goto _start;
}
}
}
}
else
{
lean_object* x_161; lean_object* x_162; 
lean_dec(x_142);
lean_dec(x_4);
lean_dec(x_3);
x_161 = lean_box(0);
x_162 = l_Lean_Meta_splitIfTarget_x3f(x_1, x_161, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_162) == 0)
{
lean_object* x_163; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_165 = x_162;
} else {
 lean_dec_ref(x_162);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_161);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_167 = lean_ctor_get(x_163, 0);
lean_inc(x_167);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 x_168 = x_163;
} else {
 lean_dec_ref(x_163);
 x_168 = lean_box(0);
}
x_169 = lean_ctor_get(x_167, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_167, 1);
lean_inc(x_170);
lean_dec(x_167);
x_171 = lean_ctor_get(x_162, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_172 = x_162;
} else {
 lean_dec_ref(x_162);
 x_172 = lean_box(0);
}
x_173 = lean_ctor_get(x_169, 0);
lean_inc(x_173);
lean_dec(x_169);
x_174 = lean_ctor_get(x_170, 0);
lean_inc(x_174);
lean_dec(x_170);
x_175 = lean_box(0);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_173);
lean_ctor_set(x_177, 1, x_176);
if (lean_is_scalar(x_168)) {
 x_178 = lean_alloc_ctor(1, 1, 0);
} else {
 x_178 = x_168;
}
lean_ctor_set(x_178, 0, x_177);
if (lean_is_scalar(x_172)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_172;
}
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_171);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_180 = lean_ctor_get(x_162, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_162, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_182 = x_162;
} else {
 lean_dec_ref(x_162);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(1, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
}
else
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_142);
lean_dec(x_4);
lean_dec(x_3);
x_184 = lean_box(0);
x_185 = l_Lean_Meta_splitIfTarget_x3f(x_1, x_184, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; 
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_188 = x_185;
} else {
 lean_dec_ref(x_185);
 x_188 = lean_box(0);
}
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_184);
lean_ctor_set(x_189, 1, x_187);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_190 = lean_ctor_get(x_186, 0);
lean_inc(x_190);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 x_191 = x_186;
} else {
 lean_dec_ref(x_186);
 x_191 = lean_box(0);
}
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
lean_dec(x_190);
x_194 = lean_ctor_get(x_185, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_195 = x_185;
} else {
 lean_dec_ref(x_185);
 x_195 = lean_box(0);
}
x_196 = lean_ctor_get(x_192, 0);
lean_inc(x_196);
lean_dec(x_192);
x_197 = lean_ctor_get(x_193, 0);
lean_inc(x_197);
lean_dec(x_193);
x_198 = lean_box(0);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_196);
lean_ctor_set(x_200, 1, x_199);
if (lean_is_scalar(x_191)) {
 x_201 = lean_alloc_ctor(1, 1, 0);
} else {
 x_201 = x_191;
}
lean_ctor_set(x_201, 0, x_200);
if (lean_is_scalar(x_195)) {
 x_202 = lean_alloc_ctor(0, 2, 0);
} else {
 x_202 = x_195;
}
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_194);
return x_202;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_203 = lean_ctor_get(x_185, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_185, 1);
lean_inc(x_204);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_205 = x_185;
} else {
 lean_dec_ref(x_185);
 x_205 = lean_box(0);
}
if (lean_is_scalar(x_205)) {
 x_206 = lean_alloc_ctor(1, 2, 0);
} else {
 x_206 = x_205;
}
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_204);
return x_206;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Meta_splitTarget_x3f_go(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at_Lean_Meta_splitTarget_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_27; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_10 = x_7;
} else {
 lean_dec_ref(x_7);
 x_10 = lean_box(0);
}
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
lean_dec(x_10);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_27);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_27, 0);
lean_dec(x_38);
x_39 = !lean_is_exclusive(x_28);
if (x_39 == 0)
{
return x_27;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_28, 0);
lean_inc(x_40);
lean_dec(x_28);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_27, 0, x_41);
return x_27;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_dec(x_27);
x_43 = lean_ctor_get(x_28, 0);
lean_inc(x_43);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_44 = x_28;
} else {
 lean_dec_ref(x_28);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 1, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_27, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_27, 1);
lean_inc(x_48);
lean_dec(x_27);
x_11 = x_47;
x_12 = x_48;
goto block_26;
}
block_26:
{
uint8_t x_13; 
x_13 = l_Lean_Exception_isRuntime(x_11);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
lean_dec(x_10);
x_14 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_11);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*11);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_10)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_10;
 lean_ctor_set_tag(x_20, 1);
}
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_12);
return x_20;
}
else
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_10);
x_21 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_11);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_11);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Lean_mkHashSetImp___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_9, x_3, x_4, x_5, x_6, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1;
x_15 = l_Lean_Meta_splitTarget_x3f_go(x_1, x_2, x_12, x_14, x_3, x_4, x_5, x_6, x_13);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_box(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_splitTarget_x3f___lambda__1___boxed), 7, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_commitWhenSome_x3f___at_Lean_Meta_splitTarget_x3f___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_splitTarget_x3f___lambda__1(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitTarget_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_splitTarget_x3f(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Meta_splitLocalDecl_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_List_reverse___rarg(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_box(0);
x_15 = 0;
x_16 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_17 = l_Lean_Meta_introNCore(x_12, x_1, x_14, x_15, x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_20);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_19;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
uint8_t x_22; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_2, 0);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_2);
x_28 = lean_box(0);
x_29 = 0;
x_30 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_31 = l_Lean_Meta_introNCore(x_26, x_1, x_28, x_29, x_30, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_3);
x_2 = x_27;
x_3 = x_35;
x_8 = x_33;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_39 = x_31;
} else {
 lean_dec_ref(x_31);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitLocalDecl_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
x_12 = l_Lean_Expr_fvar___override(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = lean_infer_type(x_12, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_14, x_3, x_4, x_5, x_6, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = 1;
x_21 = l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1;
x_22 = l_Lean_Meta_Split_findSplit_x3f_go(x_11, x_20, x_21, x_18);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_box(0);
lean_ctor_set(x_16, 0, x_23);
return x_16;
}
else
{
uint8_t x_24; 
lean_free_object(x_16);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_22, 0);
x_26 = l_Lean_Expr_isIte(x_25);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_Expr_isDIte(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1;
x_29 = lean_array_push(x_28, x_1);
x_30 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_31 = l_Lean_MVarId_revert(x_2, x_29, x_30, x_30, x_3, x_4, x_5, x_6, x_19);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_array_get_size(x_34);
lean_dec(x_34);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_37 = l_Lean_Meta_Split_splitMatch(x_35, x_25, x_3, x_4, x_5, x_6, x_33);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_box(0);
x_41 = l_List_mapM_loop___at_Lean_Meta_splitLocalDecl_x3f___spec__1(x_36, x_38, x_40, x_3, x_4, x_5, x_6, x_39);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_ctor_set(x_22, 0, x_43);
lean_ctor_set(x_41, 0, x_22);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_41, 0);
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_41);
lean_ctor_set(x_22, 0, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_22);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_free_object(x_22);
x_47 = !lean_is_exclusive(x_41);
if (x_47 == 0)
{
return x_41;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_41, 0);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_41);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_36);
lean_free_object(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_51 = !lean_is_exclusive(x_37);
if (x_51 == 0)
{
return x_37;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_37, 0);
x_53 = lean_ctor_get(x_37, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_37);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_free_object(x_22);
lean_dec(x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_55 = !lean_is_exclusive(x_31);
if (x_55 == 0)
{
return x_31;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_31, 0);
x_57 = lean_ctor_get(x_31, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_31);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_free_object(x_22);
lean_dec(x_25);
x_59 = lean_box(0);
x_60 = l_Lean_Meta_splitIfLocalDecl_x3f(x_2, x_1, x_59, x_3, x_4, x_5, x_6, x_19);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
lean_ctor_set(x_60, 0, x_59);
return x_60;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_60, 1);
lean_inc(x_64);
lean_dec(x_60);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_61);
if (x_66 == 0)
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_60);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_68 = lean_ctor_get(x_61, 0);
x_69 = lean_ctor_get(x_60, 0);
lean_dec(x_69);
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_70);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_61, 0, x_74);
return x_60;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_61, 0);
x_76 = lean_ctor_get(x_60, 1);
lean_inc(x_76);
lean_dec(x_60);
x_77 = lean_ctor_get(x_75, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_dec(x_75);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_77);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_61, 0, x_81);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_61);
lean_ctor_set(x_82, 1, x_76);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_83 = lean_ctor_get(x_61, 0);
lean_inc(x_83);
lean_dec(x_61);
x_84 = lean_ctor_get(x_60, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_85 = x_60;
} else {
 lean_dec_ref(x_60);
 x_85 = lean_box(0);
}
x_86 = lean_ctor_get(x_83, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_83, 1);
lean_inc(x_87);
lean_dec(x_83);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_86);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_90);
if (lean_is_scalar(x_85)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_85;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_60);
if (x_93 == 0)
{
return x_60;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_60, 0);
x_95 = lean_ctor_get(x_60, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_60);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_free_object(x_22);
lean_dec(x_25);
x_97 = lean_box(0);
x_98 = l_Lean_Meta_splitIfLocalDecl_x3f(x_2, x_1, x_97, x_3, x_4, x_5, x_6, x_19);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
if (lean_obj_tag(x_99) == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_98);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_98, 0);
lean_dec(x_101);
lean_ctor_set(x_98, 0, x_97);
return x_98;
}
else
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
lean_dec(x_98);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_97);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
else
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_99);
if (x_104 == 0)
{
uint8_t x_105; 
x_105 = !lean_is_exclusive(x_98);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_106 = lean_ctor_get(x_99, 0);
x_107 = lean_ctor_get(x_98, 0);
lean_dec(x_107);
x_108 = lean_ctor_get(x_106, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
lean_dec(x_106);
x_110 = lean_box(0);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_108);
lean_ctor_set(x_112, 1, x_111);
lean_ctor_set(x_99, 0, x_112);
return x_98;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_113 = lean_ctor_get(x_99, 0);
x_114 = lean_ctor_get(x_98, 1);
lean_inc(x_114);
lean_dec(x_98);
x_115 = lean_ctor_get(x_113, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
lean_dec(x_113);
x_117 = lean_box(0);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_115);
lean_ctor_set(x_119, 1, x_118);
lean_ctor_set(x_99, 0, x_119);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_99);
lean_ctor_set(x_120, 1, x_114);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_121 = lean_ctor_get(x_99, 0);
lean_inc(x_121);
lean_dec(x_99);
x_122 = lean_ctor_get(x_98, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_123 = x_98;
} else {
 lean_dec_ref(x_98);
 x_123 = lean_box(0);
}
x_124 = lean_ctor_get(x_121, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_121, 1);
lean_inc(x_125);
lean_dec(x_121);
x_126 = lean_box(0);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_124);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_129, 0, x_128);
if (lean_is_scalar(x_123)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_123;
}
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_122);
return x_130;
}
}
}
else
{
uint8_t x_131; 
x_131 = !lean_is_exclusive(x_98);
if (x_131 == 0)
{
return x_98;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_98, 0);
x_133 = lean_ctor_get(x_98, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_98);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
else
{
lean_object* x_135; uint8_t x_136; 
x_135 = lean_ctor_get(x_22, 0);
lean_inc(x_135);
lean_dec(x_22);
x_136 = l_Lean_Expr_isIte(x_135);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = l_Lean_Expr_isDIte(x_135);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; uint8_t x_140; lean_object* x_141; 
x_138 = l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1;
x_139 = lean_array_push(x_138, x_1);
x_140 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_141 = l_Lean_MVarId_revert(x_2, x_139, x_140, x_140, x_3, x_4, x_5, x_6, x_19);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_ctor_get(x_142, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_dec(x_142);
x_146 = lean_array_get_size(x_144);
lean_dec(x_144);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_147 = l_Lean_Meta_Split_splitMatch(x_145, x_135, x_3, x_4, x_5, x_6, x_143);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_150 = lean_box(0);
x_151 = l_List_mapM_loop___at_Lean_Meta_splitLocalDecl_x3f___spec__1(x_146, x_148, x_150, x_3, x_4, x_5, x_6, x_149);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_154 = x_151;
} else {
 lean_dec_ref(x_151);
 x_154 = lean_box(0);
}
x_155 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_155, 0, x_152);
if (lean_is_scalar(x_154)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_154;
}
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_153);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_151, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_151, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_159 = x_151;
} else {
 lean_dec_ref(x_151);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_146);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_161 = lean_ctor_get(x_147, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_147, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_163 = x_147;
} else {
 lean_dec_ref(x_147);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_161);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_135);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_165 = lean_ctor_get(x_141, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_141, 1);
lean_inc(x_166);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_167 = x_141;
} else {
 lean_dec_ref(x_141);
 x_167 = lean_box(0);
}
if (lean_is_scalar(x_167)) {
 x_168 = lean_alloc_ctor(1, 2, 0);
} else {
 x_168 = x_167;
}
lean_ctor_set(x_168, 0, x_165);
lean_ctor_set(x_168, 1, x_166);
return x_168;
}
}
else
{
lean_object* x_169; lean_object* x_170; 
lean_dec(x_135);
x_169 = lean_box(0);
x_170 = l_Lean_Meta_splitIfLocalDecl_x3f(x_2, x_1, x_169, x_3, x_4, x_5, x_6, x_19);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_169);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_175 = lean_ctor_get(x_171, 0);
lean_inc(x_175);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 x_176 = x_171;
} else {
 lean_dec_ref(x_171);
 x_176 = lean_box(0);
}
x_177 = lean_ctor_get(x_170, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_178 = x_170;
} else {
 lean_dec_ref(x_170);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_175, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_175, 1);
lean_inc(x_180);
lean_dec(x_175);
x_181 = lean_box(0);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_179);
lean_ctor_set(x_183, 1, x_182);
if (lean_is_scalar(x_176)) {
 x_184 = lean_alloc_ctor(1, 1, 0);
} else {
 x_184 = x_176;
}
lean_ctor_set(x_184, 0, x_183);
if (lean_is_scalar(x_178)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_178;
}
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_177);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_186 = lean_ctor_get(x_170, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_170, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_188 = x_170;
} else {
 lean_dec_ref(x_170);
 x_188 = lean_box(0);
}
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(1, 2, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_187);
return x_189;
}
}
}
else
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_135);
x_190 = lean_box(0);
x_191 = l_Lean_Meta_splitIfLocalDecl_x3f(x_2, x_1, x_190, x_3, x_4, x_5, x_6, x_19);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_194 = x_191;
} else {
 lean_dec_ref(x_191);
 x_194 = lean_box(0);
}
if (lean_is_scalar(x_194)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_194;
}
lean_ctor_set(x_195, 0, x_190);
lean_ctor_set(x_195, 1, x_193);
return x_195;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_196 = lean_ctor_get(x_192, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 x_197 = x_192;
} else {
 lean_dec_ref(x_192);
 x_197 = lean_box(0);
}
x_198 = lean_ctor_get(x_191, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_199 = x_191;
} else {
 lean_dec_ref(x_191);
 x_199 = lean_box(0);
}
x_200 = lean_ctor_get(x_196, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_196, 1);
lean_inc(x_201);
lean_dec(x_196);
x_202 = lean_box(0);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_200);
lean_ctor_set(x_204, 1, x_203);
if (lean_is_scalar(x_197)) {
 x_205 = lean_alloc_ctor(1, 1, 0);
} else {
 x_205 = x_197;
}
lean_ctor_set(x_205, 0, x_204);
if (lean_is_scalar(x_199)) {
 x_206 = lean_alloc_ctor(0, 2, 0);
} else {
 x_206 = x_199;
}
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_198);
return x_206;
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_207 = lean_ctor_get(x_191, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_191, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_209 = x_191;
} else {
 lean_dec_ref(x_191);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(1, 2, 0);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_208);
return x_210;
}
}
}
}
}
else
{
lean_object* x_211; lean_object* x_212; uint8_t x_213; lean_object* x_214; lean_object* x_215; 
x_211 = lean_ctor_get(x_16, 0);
x_212 = lean_ctor_get(x_16, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_16);
x_213 = 1;
x_214 = l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1;
x_215 = l_Lean_Meta_Split_findSplit_x3f_go(x_11, x_213, x_214, x_211);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; lean_object* x_217; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_216 = lean_box(0);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_212);
return x_217;
}
else
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_215, 0);
lean_inc(x_218);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 x_219 = x_215;
} else {
 lean_dec_ref(x_215);
 x_219 = lean_box(0);
}
x_220 = l_Lean_Expr_isIte(x_218);
if (x_220 == 0)
{
uint8_t x_221; 
x_221 = l_Lean_Expr_isDIte(x_218);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; uint8_t x_224; lean_object* x_225; 
x_222 = l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1;
x_223 = lean_array_push(x_222, x_1);
x_224 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_225 = l_Lean_MVarId_revert(x_2, x_223, x_224, x_224, x_3, x_4, x_5, x_6, x_212);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_226, 1);
lean_inc(x_229);
lean_dec(x_226);
x_230 = lean_array_get_size(x_228);
lean_dec(x_228);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_231 = l_Lean_Meta_Split_splitMatch(x_229, x_218, x_3, x_4, x_5, x_6, x_227);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
x_234 = lean_box(0);
x_235 = l_List_mapM_loop___at_Lean_Meta_splitLocalDecl_x3f___spec__1(x_230, x_232, x_234, x_3, x_4, x_5, x_6, x_233);
if (lean_obj_tag(x_235) == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_236 = lean_ctor_get(x_235, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_235, 1);
lean_inc(x_237);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 x_238 = x_235;
} else {
 lean_dec_ref(x_235);
 x_238 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_239 = lean_alloc_ctor(1, 1, 0);
} else {
 x_239 = x_219;
}
lean_ctor_set(x_239, 0, x_236);
if (lean_is_scalar(x_238)) {
 x_240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_240 = x_238;
}
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_237);
return x_240;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_219);
x_241 = lean_ctor_get(x_235, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_235, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 x_243 = x_235;
} else {
 lean_dec_ref(x_235);
 x_243 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_244 = lean_alloc_ctor(1, 2, 0);
} else {
 x_244 = x_243;
}
lean_ctor_set(x_244, 0, x_241);
lean_ctor_set(x_244, 1, x_242);
return x_244;
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_230);
lean_dec(x_219);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_245 = lean_ctor_get(x_231, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_231, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_247 = x_231;
} else {
 lean_dec_ref(x_231);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_219);
lean_dec(x_218);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_249 = lean_ctor_get(x_225, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_225, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_251 = x_225;
} else {
 lean_dec_ref(x_225);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
else
{
lean_object* x_253; lean_object* x_254; 
lean_dec(x_219);
lean_dec(x_218);
x_253 = lean_box(0);
x_254 = l_Lean_Meta_splitIfLocalDecl_x3f(x_2, x_1, x_253, x_3, x_4, x_5, x_6, x_212);
if (lean_obj_tag(x_254) == 0)
{
lean_object* x_255; 
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_257 = x_254;
} else {
 lean_dec_ref(x_254);
 x_257 = lean_box(0);
}
if (lean_is_scalar(x_257)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_257;
}
lean_ctor_set(x_258, 0, x_253);
lean_ctor_set(x_258, 1, x_256);
return x_258;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_259 = lean_ctor_get(x_255, 0);
lean_inc(x_259);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 x_260 = x_255;
} else {
 lean_dec_ref(x_255);
 x_260 = lean_box(0);
}
x_261 = lean_ctor_get(x_254, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_262 = x_254;
} else {
 lean_dec_ref(x_254);
 x_262 = lean_box(0);
}
x_263 = lean_ctor_get(x_259, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_259, 1);
lean_inc(x_264);
lean_dec(x_259);
x_265 = lean_box(0);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_263);
lean_ctor_set(x_267, 1, x_266);
if (lean_is_scalar(x_260)) {
 x_268 = lean_alloc_ctor(1, 1, 0);
} else {
 x_268 = x_260;
}
lean_ctor_set(x_268, 0, x_267);
if (lean_is_scalar(x_262)) {
 x_269 = lean_alloc_ctor(0, 2, 0);
} else {
 x_269 = x_262;
}
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_261);
return x_269;
}
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_270 = lean_ctor_get(x_254, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_254, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_254)) {
 lean_ctor_release(x_254, 0);
 lean_ctor_release(x_254, 1);
 x_272 = x_254;
} else {
 lean_dec_ref(x_254);
 x_272 = lean_box(0);
}
if (lean_is_scalar(x_272)) {
 x_273 = lean_alloc_ctor(1, 2, 0);
} else {
 x_273 = x_272;
}
lean_ctor_set(x_273, 0, x_270);
lean_ctor_set(x_273, 1, x_271);
return x_273;
}
}
}
else
{
lean_object* x_274; lean_object* x_275; 
lean_dec(x_219);
lean_dec(x_218);
x_274 = lean_box(0);
x_275 = l_Lean_Meta_splitIfLocalDecl_x3f(x_2, x_1, x_274, x_3, x_4, x_5, x_6, x_212);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_278 = x_275;
} else {
 lean_dec_ref(x_275);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_274);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_280 = lean_ctor_get(x_276, 0);
lean_inc(x_280);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 x_281 = x_276;
} else {
 lean_dec_ref(x_276);
 x_281 = lean_box(0);
}
x_282 = lean_ctor_get(x_275, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_283 = x_275;
} else {
 lean_dec_ref(x_275);
 x_283 = lean_box(0);
}
x_284 = lean_ctor_get(x_280, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_280, 1);
lean_inc(x_285);
lean_dec(x_280);
x_286 = lean_box(0);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_285);
lean_ctor_set(x_287, 1, x_286);
x_288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_288, 0, x_284);
lean_ctor_set(x_288, 1, x_287);
if (lean_is_scalar(x_281)) {
 x_289 = lean_alloc_ctor(1, 1, 0);
} else {
 x_289 = x_281;
}
lean_ctor_set(x_289, 0, x_288);
if (lean_is_scalar(x_283)) {
 x_290 = lean_alloc_ctor(0, 2, 0);
} else {
 x_290 = x_283;
}
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_282);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_291 = lean_ctor_get(x_275, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_275, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_293 = x_275;
} else {
 lean_dec_ref(x_275);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(1, 2, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_291);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
}
}
}
}
else
{
uint8_t x_295; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_295 = !lean_is_exclusive(x_13);
if (x_295 == 0)
{
return x_13;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_296 = lean_ctor_get(x_13, 0);
x_297 = lean_ctor_get(x_13, 1);
lean_inc(x_297);
lean_inc(x_296);
lean_dec(x_13);
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_297);
return x_298;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitLocalDecl_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_splitLocalDecl_x3f___lambda__1), 7, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg), 7, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_commitWhenSome_x3f___at_Lean_Meta_splitTarget_x3f___spec__1(x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__2;
x_2 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("initFn", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__3;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_@", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__5;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__7;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__8;
x_2 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__9;
x_2 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Split", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__10;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_hyg", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__12;
x_2 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__14;
x_2 = lean_unsigned_to_nat(6282u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4;
x_3 = 0;
x_4 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__15;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherApp_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SplitIf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Generalize(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1 = _init_l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__1);
l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__2 = _init_l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__2();
l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3 = _init_l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_Split_getSimpMatchContext___rarg___closed__3);
l_Lean_Meta_Split_simpMatch_pre___closed__1 = _init_l_Lean_Meta_Split_simpMatch_pre___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch_pre___closed__1);
l_Lean_Meta_Split_simpMatch___lambda__2___closed__1 = _init_l_Lean_Meta_Split_simpMatch___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch___lambda__2___closed__1);
l_Lean_Meta_Split_simpMatch___closed__1 = _init_l_Lean_Meta_Split_simpMatch___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch___closed__1);
l_Lean_Meta_Split_simpMatch___closed__2 = _init_l_Lean_Meta_Split_simpMatch___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch___closed__2);
l_Lean_Meta_Split_simpMatch___closed__3 = _init_l_Lean_Meta_Split_simpMatch___closed__3();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch___closed__3);
l_Lean_Meta_Split_simpMatch___closed__4 = _init_l_Lean_Meta_Split_simpMatch___closed__4();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch___closed__4);
l_Lean_Meta_Split_simpMatch___closed__5 = _init_l_Lean_Meta_Split_simpMatch___closed__5();
lean_mark_persistent(l_Lean_Meta_Split_simpMatch___closed__5);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__2 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_withEqs_go___rarg___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__3 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__3);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__4);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__5 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__5);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__6 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__6();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_withNewAltEqs_go___closed__6);
l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2___closed__1 = _init_l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2___closed__1();
lean_mark_persistent(l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__2___closed__1);
l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__1 = _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__1();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__1);
l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__2 = _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__2();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__2);
l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3 = _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__3);
l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__4 = _init_l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__4();
lean_mark_persistent(l_List_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__3___closed__4);
l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1 = _init_l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__2___closed__1);
l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1 = _init_l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___lambda__3___closed__1);
l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1 = _init_l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1();
lean_mark_persistent(l_Lean_Meta_matchMatcherApp_x3f___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__1___closed__1);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___closed__1 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___lambda__1___closed__1);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__1);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__2);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__3 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__3);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__4);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__5 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__5);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__6);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__7 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__7);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__8);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__9 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__9();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__9);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__4___closed__10);
l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__1 = _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__1);
l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2 = _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___spec__5___lambda__3___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__2 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__3);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__4 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__4);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__5 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__5);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__6 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__6();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__6);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__7 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__7();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__7);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__8 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__8();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__8);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__9 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__9();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___lambda__2___closed__9);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs_mkNewTarget___closed__1);
l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3___closed__1 = _init_l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3___closed__1();
lean_mark_persistent(l_panic___at___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___spec__3___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__2 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__2___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__2 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__3___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__1);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__2 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__2);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__3 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__3();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__3);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__4 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__4();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__4);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__5 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__5();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_generalizeMatchDiscrs___lambda__6___closed__5);
l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___boxed__const__1 = _init_l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___boxed__const__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Split_0__Lean_Meta_Split_substDiscrEqs___boxed__const__1);
l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__1 = _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__1();
lean_mark_persistent(l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__1);
l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__2 = _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__2();
lean_mark_persistent(l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___lambda__2___closed__2);
l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__1 = _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__1();
lean_mark_persistent(l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__1);
l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__2 = _init_l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__2();
lean_mark_persistent(l_List_foldlM___at_Lean_Meta_Split_applyMatchSplitter___spec__2___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__1___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__3 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__3);
l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__4 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__4);
l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__5 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__5();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__3___closed__5);
l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__4___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__7___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__8___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__9___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed__const__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__9___boxed__const__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___lambda__10___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___closed__1 = _init_l_Lean_Meta_Split_applyMatchSplitter___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___closed__1);
l_Lean_Meta_Split_applyMatchSplitter___closed__2 = _init_l_Lean_Meta_Split_applyMatchSplitter___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___closed__2);
l_Lean_Meta_Split_applyMatchSplitter___closed__3 = _init_l_Lean_Meta_Split_applyMatchSplitter___closed__3();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___closed__3);
l_Lean_Meta_Split_applyMatchSplitter___closed__4 = _init_l_Lean_Meta_Split_applyMatchSplitter___closed__4();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___closed__4);
l_Lean_Meta_Split_applyMatchSplitter___closed__5 = _init_l_Lean_Meta_Split_applyMatchSplitter___closed__5();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___closed__5);
l_Lean_Meta_Split_applyMatchSplitter___closed__6 = _init_l_Lean_Meta_Split_applyMatchSplitter___closed__6();
lean_mark_persistent(l_Lean_Meta_Split_applyMatchSplitter___closed__6);
l_Lean_Meta_Split_splitMatch___closed__1 = _init_l_Lean_Meta_Split_splitMatch___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_splitMatch___closed__1);
l_Lean_Meta_Split_splitMatch___closed__2 = _init_l_Lean_Meta_Split_splitMatch___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_splitMatch___closed__2);
l_Lean_Meta_Split_splitMatch___closed__3 = _init_l_Lean_Meta_Split_splitMatch___closed__3();
lean_mark_persistent(l_Lean_Meta_Split_splitMatch___closed__3);
l_Lean_Meta_Split_splitMatch___closed__4 = _init_l_Lean_Meta_Split_splitMatch___closed__4();
lean_mark_persistent(l_Lean_Meta_Split_splitMatch___closed__4);
l_Lean_Meta_Split_splitMatch___closed__5 = _init_l_Lean_Meta_Split_splitMatch___closed__5();
lean_mark_persistent(l_Lean_Meta_Split_splitMatch___closed__5);
l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__1 = _init_l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__1);
l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2 = _init_l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Meta_Split_findSplit_x3f_isCandidate___spec__1___closed__2);
l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__1 = _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__1();
lean_mark_persistent(l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__1);
l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__2 = _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__2();
lean_mark_persistent(l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__2);
l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__3 = _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__3();
lean_mark_persistent(l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__3);
l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__4 = _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__4();
lean_mark_persistent(l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__4);
l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5 = _init_l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5();
lean_mark_persistent(l_Lean_Meta_Split_findSplit_x3f_isCandidate___closed__5);
l_Lean_Meta_splitTarget_x3f_go___closed__1 = _init_l_Lean_Meta_splitTarget_x3f_go___closed__1();
lean_mark_persistent(l_Lean_Meta_splitTarget_x3f_go___closed__1);
l_Lean_Meta_splitTarget_x3f_go___closed__2 = _init_l_Lean_Meta_splitTarget_x3f_go___closed__2();
lean_mark_persistent(l_Lean_Meta_splitTarget_x3f_go___closed__2);
l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1 = _init_l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_splitTarget_x3f___lambda__1___closed__1);
l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1 = _init_l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_splitLocalDecl_x3f___lambda__1___closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__1);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__2 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__2();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__2);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__3 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__3();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__3);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__4 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__4();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__4);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__5 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__5();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__5);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__6 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__6();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__6);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__7 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__7();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__7);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__8 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__8();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__8);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__9 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__9();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__9);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__10 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__10();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__10);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__11 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__11();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__11);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__12 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__12();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__12);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__13 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__13();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__13);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__14 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__14();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__14);
l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__15 = _init_l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__15();
lean_mark_persistent(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282____closed__15);
if (builtin) {res = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Split___hyg_6282_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

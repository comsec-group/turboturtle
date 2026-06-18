// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb_myfunc.h"

VL_ATTR_COLD void Vtb_myfunc___eval_static__TOP__tb__DOT__a_myfunc(Vtb_myfunc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_myfunc___eval_static__TOP__tb__DOT__a_myfunc\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue = 1U;
    vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready = 0U;
    vlSelfRef.__PVT__muli0__DOT__join_inputs__DOT__singleValid = 0U;
    vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg = 0ULL;
    vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg = 0ULL;
    vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0 = 0ULL;
    vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1 = 0ULL;
    vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2 = 0ULL;
    vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs = 0U;
    vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid = 0U;
    vlSelfRef.andi0__DOT____Vcellout__join_inputs__ins_ready = 0U;
    vlSelfRef.__PVT__andi0__DOT__join_inputs__DOT__singleValid = 0U;
    vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready = 0U;
    vlSelfRef.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid = 0U;
    vlSelfRef.__PVT__buffer0__DOT__dataReg = 0U;
    vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid = 0U;
    vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0 = 0U;
    vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1 = 0U;
    vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready = 0U;
    vlSelfRef.__PVT__shrui0__DOT__join_inputs__DOT__singleValid = 0U;
    vlSelfRef.__PVT__buffer1__DOT__dataReg = 0ULL;
    vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg = 0U;
    vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready = 0U;
    vlSelfRef.__PVT__xori0__DOT__join_inputs__DOT__singleValid = 0U;
}

VL_ATTR_COLD void Vtb_myfunc___ctor_var_reset(Vtb_myfunc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_myfunc___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->var_0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11878874088511104028ull);
    vlSelf->var_0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17950966589717053381ull);
    vlSelf->var_1_secret = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6458600468133249200ull);
    vlSelf->var_1_secret_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3764133346122664328ull);
    vlSelf->start_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15236367654457824803ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->out0_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15905458145543680265ull);
    vlSelf->end_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6918289148681436680ull);
    vlSelf->__PVT__var_0_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4082659268904099495ull);
    vlSelf->__PVT__var_1_secret_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4454372260882667823ull);
    vlSelf->__PVT__start_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12792651944731561107ull);
    vlSelf->__PVT__out0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3479339022578516965ull);
    vlSelf->out0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9925536650864704992ull);
    vlSelf->__PVT__end_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14488688720691505148ull);
    vlSelf->__PVT__fork0_outs_0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6025862034739417107ull);
    vlSelf->__PVT__fork0_outs_1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5998433447431214969ull);
    vlSelf->__PVT__fork0_outs_2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10059828887657793801ull);
    vlSelf->__PVT__fork2_outs_1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12547808394144630490ull);
    vlSelf->__PVT__muli0_result_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295877444007117238ull);
    vlSelf->__PVT__buffer0_outs_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3048097793376230513ull);
    vlSelf->__PVT__select0_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15770497999068404141ull);
    vlSelf->__PVT__select0_result_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3572841709332337955ull);
    vlSelf->__PVT__buffer1_outs_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4636820452260502442ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__backpressure = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2324952700932004093ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 573718553846741636ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3852721007624427281ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4603542112337677532ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8138009896736419018ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18046481834049337891ull);
    vlSelf->__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12649509841578545869ull);
    vlSelf->__PVT__fork1__DOT__control__DOT__blockStopArray = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16046666214421176667ull);
    vlSelf->__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 659158528253362172ull);
    vlSelf->__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11105611568515555306ull);
    vlSelf->__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5779976276096851373ull);
    vlSelf->__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7725377269807740501ull);
    vlSelf->__PVT__fork2__DOT__control__DOT__blockStopArray = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17727152104284769830ull);
    vlSelf->__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15280350651031806403ull);
    vlSelf->__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3930958009420740674ull);
    vlSelf->__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1467202545569490914ull);
    vlSelf->__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11426148621740583869ull);
    vlSelf->__PVT__muli0__DOT__oehb_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8492395641425497635ull);
    vlSelf->muli0__DOT____Vcellout__join_inputs__ins_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10929648425885672698ull);
    vlSelf->__PVT__muli0__DOT__join_inputs__DOT__singleValid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1925913516897102573ull);
    vlSelf->__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 387286336494444283ull);
    vlSelf->__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8810540631104140693ull);
    vlSelf->__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13662544802204638301ull);
    vlSelf->__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12188640908934144236ull);
    vlSelf->__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12129272723153305535ull);
    vlSelf->__PVT__muli0__DOT__buff__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3237113566284426235ull);
    vlSelf->__PVT__muli0__DOT__buff__DOT__regs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3999997240679058541ull);
    vlSelf->muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10351342613645355185ull);
    vlSelf->__PVT__muli0__DOT__oehb_inst__DOT__outputValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14367848083494546998ull);
    vlSelf->andi0__DOT____Vcellout__join_inputs__ins_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10358651853232491072ull);
    vlSelf->andi0__DOT____Vcellinp__join_inputs__ins_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5516149890627617509ull);
    vlSelf->__PVT__andi0__DOT__join_inputs__DOT__singleValid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9429075290999074047ull);
    vlSelf->cmpi0__DOT____Vcellout__join_inputs__ins_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18430832980243716514ull);
    vlSelf->cmpi0__DOT____Vcellinp__join_inputs__ins_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14192414250407232062ull);
    vlSelf->__PVT__cmpi0__DOT__join_inputs__DOT__singleValid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8219244436844078735ull);
    vlSelf->__PVT__buffer0__DOT__inputReady = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6837066948368792010ull);
    vlSelf->__PVT__buffer0__DOT__dataReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10923014554794772776ull);
    vlSelf->__PVT__buffer0__DOT__control__DOT__outputValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11696106686642155226ull);
    vlSelf->__PVT__select0__DOT__kill0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13508202349235429508ull);
    vlSelf->__PVT__select0__DOT__kill1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9475604473742055198ull);
    vlSelf->select0__DOT____VdfgRegularize_he6049783_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6378269085050685914ull);
    vlSelf->__PVT__select0__DOT__antitokens__DOT__reg_out0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9083970983166422051ull);
    vlSelf->__PVT__select0__DOT__antitokens__DOT__reg_out1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3997916434338758409ull);
    vlSelf->shrui0__DOT____Vcellout__join_inputs__ins_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5848027028681922378ull);
    vlSelf->shrui0__DOT____Vcellinp__join_inputs__ins_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17677535507959782205ull);
    vlSelf->__PVT__shrui0__DOT__join_inputs__DOT__singleValid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8594191961237000819ull);
    vlSelf->__PVT__buffer1__DOT__dataReg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14042780003029225875ull);
    vlSelf->__PVT__buffer1__DOT__control__DOT__fullReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4082997959465128484ull);
    vlSelf->xori0__DOT____Vcellout__join_inputs__ins_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6034500876201034267ull);
    vlSelf->xori0__DOT____Vcellinp__join_inputs__ins_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3554156434057227457ull);
    vlSelf->__PVT__xori0__DOT__join_inputs__DOT__singleValid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9396622137968254772ull);
}

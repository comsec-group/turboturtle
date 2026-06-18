// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb_myfunc.h"

VL_INLINE_OPT void Vtb_myfunc___act_sequent__TOP__tb__DOT__a_myfunc__0(Vtb_myfunc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_myfunc___act_sequent__TOP__tb__DOT__a_myfunc__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__andi0__DOT__join_inputs__DOT__singleValid 
        = (((IData)(vlSymsp->TOP.tb__DOT__var_1_secret_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0_outs_2_valid = ((IData)(vlSymsp->TOP.tb__DOT__var_0_valid) 
                                           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0_outs_1_valid = ((IData)(vlSymsp->TOP.tb__DOT__var_0_valid) 
                                           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.andi0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue) 
            << 1U) | (IData)(vlSymsp->TOP.tb__DOT__var_1_secret_valid));
    vlSelfRef.__PVT__fork0_outs_0_valid = ((IData)(vlSymsp->TOP.tb__DOT__var_0_valid) 
                                           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__muli0__DOT__join_inputs__DOT__singleValid 
        = (((IData)(vlSelfRef.__PVT__fork0_outs_1_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork0_outs_2_valid));
    vlSelfRef.cmpi0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue) 
            << 1U) | (3U == (IData)(vlSelfRef.andi0__DOT____Vcellinp__join_inputs__ins_valid)));
    vlSelfRef.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid 
        = (((3U == (IData)(vlSelfRef.andi0__DOT____Vcellinp__join_inputs__ins_valid)) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__shrui0__DOT__join_inputs__DOT__singleValid 
        = (((IData)(vlSelfRef.__PVT__fork0_outs_0_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.shrui0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork0_outs_0_valid));
    vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__muli0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((IData)(vlSelfRef.__PVT__muli0__DOT__oehb_ready))));
    vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((IData)(vlSelfRef.__PVT__buffer0__DOT__inputReady))));
    vlSelfRef.xori0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__buffer1_outs_valid) 
            << 1U) | (3U == (IData)(vlSelfRef.shrui0__DOT____Vcellinp__join_inputs__ins_valid)));
    vlSelfRef.__PVT__xori0__DOT__join_inputs__DOT__singleValid 
        = (((3U == (IData)(vlSelfRef.shrui0__DOT____Vcellinp__join_inputs__ins_valid)) 
            << 1U) | (IData)(vlSelfRef.__PVT__buffer1_outs_valid));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue 
        = ((~ (IData)(vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready)) 
           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.andi0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__andi0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((1U & (IData)(vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready)))));
    vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__xori0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((IData)(vlSymsp->TOP.tb__DOT__out0_ready))));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__blockStopArray 
        = (((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.andi0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__shrui0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((1U & (IData)(vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready)))));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue 
        = ((~ (IData)(vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready)) 
           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__blockStopArray 
        = (((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure 
        = ((0U != (((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                               << 1U) | (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue)))) 
           & (IData)(vlSymsp->TOP.tb__DOT__var_0_valid));
}

VL_INLINE_OPT void Vtb_myfunc___nba_sequent__TOP__tb__DOT__a_myfunc__0(Vtb_myfunc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_myfunc___nba_sequent__TOP__tb__DOT__a_myfunc__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__muli0__DOT__buff__DOT__regs;
    __Vdly__muli0__DOT__buff__DOT__regs = 0;
    CData/*0:0*/ __Vdly__muli0__DOT__oehb_inst__DOT__outputValid;
    __Vdly__muli0__DOT__oehb_inst__DOT__outputValid = 0;
    CData/*0:0*/ __Vdly__buffer1__DOT__control__DOT__fullReg;
    __Vdly__buffer1__DOT__control__DOT__fullReg = 0;
    // Body
    __Vdly__muli0__DOT__buff__DOT__regs = vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs;
    __Vdly__buffer1__DOT__control__DOT__fullReg = vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg;
    __Vdly__muli0__DOT__oehb_inst__DOT__outputValid 
        = vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid;
    if (vlSymsp->TOP.tb__DOT__rst) {
        vlSelfRef.__PVT__muli0__DOT__buff__DOT__i = 3U;
        __Vdly__muli0__DOT__buff__DOT__regs = (1U & (IData)(__Vdly__muli0__DOT__buff__DOT__regs));
        __Vdly__muli0__DOT__buff__DOT__regs = (6U & (IData)(__Vdly__muli0__DOT__buff__DOT__regs));
        vlSelfRef.__PVT__buffer1__DOT__dataReg = 0ULL;
        vlSelfRef.__PVT__buffer0__DOT__dataReg = 0U;
    } else {
        if (vlSelfRef.__PVT__muli0__DOT__oehb_ready) {
            vlSelfRef.__PVT__muli0__DOT__buff__DOT__i = 3U;
            vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1 
                = (1U & (IData)(vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs));
            __Vdly__muli0__DOT__buff__DOT__regs = (
                                                   (5U 
                                                    & (IData)(__Vdly__muli0__DOT__buff__DOT__regs)) 
                                                   | ((IData)(vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1) 
                                                      << 1U));
            vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1 
                = (1U & ((IData)(vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs) 
                         >> 1U));
            __Vdly__muli0__DOT__buff__DOT__regs = (
                                                   (3U 
                                                    & (IData)(__Vdly__muli0__DOT__buff__DOT__regs)) 
                                                   | ((IData)(vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1) 
                                                      << 2U));
            __Vdly__muli0__DOT__buff__DOT__regs = (
                                                   (6U 
                                                    & (IData)(__Vdly__muli0__DOT__buff__DOT__regs)) 
                                                   | ((IData)(vlSelfRef.__PVT__fork0_outs_2_valid) 
                                                      & (IData)(vlSelfRef.__PVT__fork0_outs_1_valid)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg)) 
             & ((~ ((IData)(vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                    >> 1U)) & (IData)(vlSelfRef.__PVT__select0_result_valid)))) {
            vlSelfRef.__PVT__buffer1__DOT__dataReg 
                = vlSelfRef.__PVT__select0_result;
        }
        if (((IData)(vlSelfRef.__PVT__buffer0__DOT__inputReady) 
             & (3U == (IData)(vlSelfRef.cmpi0__DOT____Vcellinp__join_inputs__ins_valid)))) {
            vlSelfRef.__PVT__buffer0__DOT__dataReg 
                = (0U == (1U & (IData)(vlSymsp->TOP.tb__DOT__a_var_1_secret)));
        }
    }
    __Vdly__buffer1__DOT__control__DOT__fullReg = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
                                                   && (((IData)(vlSelfRef.__PVT__select0_result_valid) 
                                                        | (IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                                                           >> 1U))));
    vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && ((3U == (IData)(vlSelfRef.cmpi0__DOT____Vcellinp__join_inputs__ins_valid)) 
               | ((~ (IData)(vlSelfRef.__PVT__buffer0_outs_ready)) 
                  & (IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid))));
    __Vdly__muli0__DOT__oehb_inst__DOT__outputValid 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && (1U & (((IData)(vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs) 
                      >> 2U) | ((~ (IData)(vlSelfRef.__PVT__muli0_result_ready)) 
                                & (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)))));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                                     | (~ (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure)))));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                     | (~ (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure)))));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue) 
                                                     | (~ (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure)))));
    if (vlSelfRef.__PVT__muli0__DOT__oehb_ready) {
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2 
            = vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1;
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1 
            = vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0;
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0 
            = (vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg 
               * vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg);
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg 
            = vlSymsp->TOP.tb__DOT__var_0;
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg 
            = vlSymsp->TOP.tb__DOT__var_0;
    }
    vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
               & (IData)(vlSelfRef.__PVT__select0__DOT__kill1)));
    vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
               & (IData)(vlSelfRef.__PVT__select0__DOT__kill0)));
    vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs = __Vdly__muli0__DOT__buff__DOT__regs;
    vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg 
        = __Vdly__buffer1__DOT__control__DOT__fullReg;
    vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid 
        = __Vdly__muli0__DOT__oehb_inst__DOT__outputValid;
    vlSelfRef.__PVT__select0_result = ((IData)(vlSelfRef.__PVT__buffer0__DOT__dataReg)
                                        ? 0ULL : vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2);
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__select0_result_valid = ((~ ((IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0) 
                                                 | (IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1))) 
                                             & ((IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid) 
                                                & (((~ (IData)(vlSelfRef.__PVT__buffer0__DOT__dataReg)) 
                                                    & (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                                   | ((IData)(vlSelfRef.__PVT__buffer0__DOT__dataReg) 
                                                      & (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)))));
    vlSelfRef.__PVT__buffer1_outs_valid = ((IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg) 
                                           | (IData)(vlSelfRef.__PVT__select0_result_valid));
    vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2 
        = ((~ (IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg)) 
           & (IData)(vlSelfRef.__PVT__select0_result_valid));
    vlSelfRef.__PVT__select0__DOT__kill0 = (((~ (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                             & (IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2)) 
                                            | (IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0));
    vlSelfRef.__PVT__buffer0_outs_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid)) 
                                                 | (IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2)));
    vlSelfRef.__PVT__select0__DOT__kill1 = (((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                             & (IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2)) 
                                            | (IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1));
    vlSelfRef.__PVT__fork2_outs_1_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                                 | ((IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2) 
                                                    | (IData)(vlSelfRef.__PVT__select0__DOT__kill0))));
    vlSelfRef.__PVT__buffer0__DOT__inputReady = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid)) 
                                                    | (IData)(vlSelfRef.__PVT__buffer0_outs_ready)));
    vlSelfRef.__PVT__muli0_result_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                                 | ((IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2) 
                                                    | (IData)(vlSelfRef.__PVT__select0__DOT__kill1))));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue 
        = ((~ (IData)(vlSelfRef.__PVT__fork2_outs_1_ready)) 
           & (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__muli0__DOT__oehb_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                                | (IData)(vlSelfRef.__PVT__muli0_result_ready)));
}

VL_INLINE_OPT void Vtb_myfunc___nba_comb__TOP__tb__DOT__a_myfunc__0(Vtb_myfunc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_myfunc___nba_comb__TOP__tb__DOT__a_myfunc__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fork0_outs_2_valid = ((IData)(vlSymsp->TOP.tb__DOT__var_0_valid) 
                                           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0_outs_1_valid = ((IData)(vlSymsp->TOP.tb__DOT__var_0_valid) 
                                           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__andi0__DOT__join_inputs__DOT__singleValid 
        = (((IData)(vlSymsp->TOP.tb__DOT__var_1_secret_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.andi0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue) 
            << 1U) | (IData)(vlSymsp->TOP.tb__DOT__var_1_secret_valid));
    vlSelfRef.__PVT__fork0_outs_0_valid = ((IData)(vlSymsp->TOP.tb__DOT__var_0_valid) 
                                           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__muli0__DOT__join_inputs__DOT__singleValid 
        = (((IData)(vlSelfRef.__PVT__fork0_outs_1_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork0_outs_2_valid));
    vlSelfRef.cmpi0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue) 
            << 1U) | (3U == (IData)(vlSelfRef.andi0__DOT____Vcellinp__join_inputs__ins_valid)));
    vlSelfRef.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid 
        = (((3U == (IData)(vlSelfRef.andi0__DOT____Vcellinp__join_inputs__ins_valid)) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__shrui0__DOT__join_inputs__DOT__singleValid 
        = (((IData)(vlSelfRef.__PVT__fork0_outs_0_valid) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.shrui0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork0_outs_0_valid));
    vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__muli0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((IData)(vlSelfRef.__PVT__muli0__DOT__oehb_ready))));
    vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((IData)(vlSelfRef.__PVT__buffer0__DOT__inputReady))));
    vlSelfRef.xori0__DOT____Vcellinp__join_inputs__ins_valid 
        = (((IData)(vlSelfRef.__PVT__buffer1_outs_valid) 
            << 1U) | (3U == (IData)(vlSelfRef.shrui0__DOT____Vcellinp__join_inputs__ins_valid)));
    vlSelfRef.__PVT__xori0__DOT__join_inputs__DOT__singleValid 
        = (((3U == (IData)(vlSelfRef.shrui0__DOT____Vcellinp__join_inputs__ins_valid)) 
            << 1U) | (IData)(vlSelfRef.__PVT__buffer1_outs_valid));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue 
        = ((~ (IData)(vlSelfRef.muli0__DOT____Vcellout__join_inputs__ins_ready)) 
           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.andi0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__andi0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((1U & (IData)(vlSelfRef.cmpi0__DOT____Vcellout__join_inputs__ins_ready)))));
    vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__xori0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((IData)(vlSymsp->TOP.tb__DOT__out0_ready))));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__blockStopArray 
        = (((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.andi0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready 
        = ((IData)(vlSelfRef.__PVT__shrui0__DOT__join_inputs__DOT__singleValid) 
           & (- (IData)((1U & (IData)(vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready)))));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue 
        = ((~ ((IData)(vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready) 
               >> 1U)) & (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue 
        = ((~ (IData)(vlSelfRef.shrui0__DOT____Vcellout__join_inputs__ins_ready)) 
           & (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__blockStopArray 
        = (((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
            << 1U) | (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure 
        = ((0U != (((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                               << 1U) | (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue)))) 
           & (IData)(vlSymsp->TOP.tb__DOT__var_0_valid));
}

VL_INLINE_OPT void Vtb_myfunc___nba_sequent__TOP__tb__DOT__b_myfunc__0(Vtb_myfunc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_myfunc___nba_sequent__TOP__tb__DOT__b_myfunc__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__muli0__DOT__buff__DOT__regs;
    __Vdly__muli0__DOT__buff__DOT__regs = 0;
    CData/*0:0*/ __Vdly__muli0__DOT__oehb_inst__DOT__outputValid;
    __Vdly__muli0__DOT__oehb_inst__DOT__outputValid = 0;
    CData/*0:0*/ __Vdly__buffer1__DOT__control__DOT__fullReg;
    __Vdly__buffer1__DOT__control__DOT__fullReg = 0;
    // Body
    __Vdly__muli0__DOT__buff__DOT__regs = vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs;
    __Vdly__buffer1__DOT__control__DOT__fullReg = vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg;
    __Vdly__muli0__DOT__oehb_inst__DOT__outputValid 
        = vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid;
    if (vlSymsp->TOP.tb__DOT__rst) {
        vlSelfRef.__PVT__muli0__DOT__buff__DOT__i = 3U;
        __Vdly__muli0__DOT__buff__DOT__regs = (1U & (IData)(__Vdly__muli0__DOT__buff__DOT__regs));
        __Vdly__muli0__DOT__buff__DOT__regs = (6U & (IData)(__Vdly__muli0__DOT__buff__DOT__regs));
        vlSelfRef.__PVT__buffer1__DOT__dataReg = 0ULL;
        vlSelfRef.__PVT__buffer0__DOT__dataReg = 0U;
    } else {
        if (vlSelfRef.__PVT__muli0__DOT__oehb_ready) {
            vlSelfRef.__PVT__muli0__DOT__buff__DOT__i = 3U;
            vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1 
                = (1U & (IData)(vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs));
            __Vdly__muli0__DOT__buff__DOT__regs = (
                                                   (5U 
                                                    & (IData)(__Vdly__muli0__DOT__buff__DOT__regs)) 
                                                   | ((IData)(vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1) 
                                                      << 1U));
            vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1 
                = (1U & ((IData)(vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs) 
                         >> 1U));
            __Vdly__muli0__DOT__buff__DOT__regs = (
                                                   (3U 
                                                    & (IData)(__Vdly__muli0__DOT__buff__DOT__regs)) 
                                                   | ((IData)(vlSelfRef.muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1) 
                                                      << 2U));
            __Vdly__muli0__DOT__buff__DOT__regs = (
                                                   (6U 
                                                    & (IData)(__Vdly__muli0__DOT__buff__DOT__regs)) 
                                                   | ((IData)(vlSelfRef.__PVT__fork0_outs_2_valid) 
                                                      & (IData)(vlSelfRef.__PVT__fork0_outs_1_valid)));
        }
        if (((~ (IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg)) 
             & ((~ ((IData)(vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                    >> 1U)) & (IData)(vlSelfRef.__PVT__select0_result_valid)))) {
            vlSelfRef.__PVT__buffer1__DOT__dataReg 
                = vlSelfRef.__PVT__select0_result;
        }
        if (((IData)(vlSelfRef.__PVT__buffer0__DOT__inputReady) 
             & (3U == (IData)(vlSelfRef.cmpi0__DOT____Vcellinp__join_inputs__ins_valid)))) {
            vlSelfRef.__PVT__buffer0__DOT__dataReg 
                = (0U == (1U & (IData)(vlSymsp->TOP.tb__DOT__b_var_1_secret)));
        }
    }
    __Vdly__buffer1__DOT__control__DOT__fullReg = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
                                                   && (((IData)(vlSelfRef.__PVT__select0_result_valid) 
                                                        | (IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                                                           >> 1U))));
    vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && ((3U == (IData)(vlSelfRef.cmpi0__DOT____Vcellinp__join_inputs__ins_valid)) 
               | ((~ (IData)(vlSelfRef.__PVT__buffer0_outs_ready)) 
                  & (IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid))));
    __Vdly__muli0__DOT__oehb_inst__DOT__outputValid 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && (1U & (((IData)(vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs) 
                      >> 2U) | ((~ (IData)(vlSelfRef.__PVT__muli0_result_ready)) 
                                & (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)))));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                                     | (~ (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure)))));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                     | (~ (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure)))));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork1__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || (1U 
                                                  & ((IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue) 
                                                     | (~ (IData)(vlSelfRef.__PVT__fork0__DOT__control__DOT__backpressure)))));
    if (vlSelfRef.__PVT__muli0__DOT__oehb_ready) {
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2 
            = vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1;
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1 
            = vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0;
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0 
            = (vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg 
               * vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg);
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg 
            = vlSymsp->TOP.tb__DOT__var_0;
        vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg 
            = vlSymsp->TOP.tb__DOT__var_0;
    }
    vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
               & (IData)(vlSelfRef.__PVT__select0__DOT__kill1)));
    vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0 
        = ((1U & (~ (IData)(vlSymsp->TOP.tb__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
               & (IData)(vlSelfRef.__PVT__select0__DOT__kill0)));
    vlSelfRef.__PVT__muli0__DOT__buff__DOT__regs = __Vdly__muli0__DOT__buff__DOT__regs;
    vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg 
        = __Vdly__buffer1__DOT__control__DOT__fullReg;
    vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid 
        = __Vdly__muli0__DOT__oehb_inst__DOT__outputValid;
    vlSelfRef.__PVT__select0_result = ((IData)(vlSelfRef.__PVT__buffer0__DOT__dataReg)
                                        ? 0ULL : vlSelfRef.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2);
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue 
        = ((IData)(vlSymsp->TOP.tb__DOT__rst) || ((IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__blockStopArray))));
    vlSelfRef.__PVT__select0_result_valid = ((~ ((IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0) 
                                                 | (IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1))) 
                                             & ((IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid) 
                                                & (((~ (IData)(vlSelfRef.__PVT__buffer0__DOT__dataReg)) 
                                                    & (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                                   | ((IData)(vlSelfRef.__PVT__buffer0__DOT__dataReg) 
                                                      & (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)))));
    vlSelfRef.__PVT__buffer1_outs_valid = ((IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg) 
                                           | (IData)(vlSelfRef.__PVT__select0_result_valid));
    vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2 
        = ((~ (IData)(vlSelfRef.__PVT__buffer1__DOT__control__DOT__fullReg)) 
           & (IData)(vlSelfRef.__PVT__select0_result_valid));
    vlSelfRef.__PVT__select0__DOT__kill0 = (((~ (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                             & (IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2)) 
                                            | (IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out0));
    vlSelfRef.__PVT__buffer0_outs_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid)) 
                                                 | (IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2)));
    vlSelfRef.__PVT__select0__DOT__kill1 = (((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                             & (IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2)) 
                                            | (IData)(vlSelfRef.__PVT__select0__DOT__antitokens__DOT__reg_out1));
    vlSelfRef.__PVT__fork2_outs_1_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                                 | ((IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2) 
                                                    | (IData)(vlSelfRef.__PVT__select0__DOT__kill0))));
    vlSelfRef.__PVT__buffer0__DOT__inputReady = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__buffer0__DOT__control__DOT__outputValid)) 
                                                    | (IData)(vlSelfRef.__PVT__buffer0_outs_ready)));
    vlSelfRef.__PVT__muli0_result_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                                 | ((IData)(vlSelfRef.select0__DOT____VdfgRegularize_he6049783_0_2) 
                                                    | (IData)(vlSelfRef.__PVT__select0__DOT__kill1))));
    vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue 
        = ((~ (IData)(vlSelfRef.__PVT__fork2_outs_1_ready)) 
           & (IData)(vlSelfRef.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
    vlSelfRef.__PVT__muli0__DOT__oehb_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                                | (IData)(vlSelfRef.__PVT__muli0_result_ready)));
}

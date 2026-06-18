// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__first_start));
        bufp->chgBit(oldp+1,(vlSelfRef.tb__DOT__rst));
        bufp->chgQData(oldp+2,(vlSelfRef.tb__DOT__var_0_mem[0]),64);
        bufp->chgQData(oldp+4,(vlSelfRef.tb__DOT__var_0_mem[1]),64);
        bufp->chgQData(oldp+6,(vlSelfRef.tb__DOT__var_0_mem[2]),64);
        bufp->chgQData(oldp+8,(vlSelfRef.tb__DOT__var_0_mem[3]),64);
        bufp->chgQData(oldp+10,(vlSelfRef.tb__DOT__var_0_mem[4]),64);
        bufp->chgQData(oldp+12,(vlSelfRef.tb__DOT__a_var_1_secret_mem[0]),64);
        bufp->chgQData(oldp+14,(vlSelfRef.tb__DOT__a_var_1_secret_mem[1]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.tb__DOT__a_var_1_secret_mem[2]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.tb__DOT__a_var_1_secret_mem[3]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.tb__DOT__a_var_1_secret_mem[4]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.tb__DOT__b_var_1_secret_mem[0]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.tb__DOT__b_var_1_secret_mem[1]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.tb__DOT__b_var_1_secret_mem[2]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.tb__DOT__b_var_1_secret_mem[3]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.tb__DOT__b_var_1_secret_mem[4]),64);
        bufp->chgBit(oldp+32,(vlSelfRef.tb__DOT__out0_ready));
        bufp->chgBit(oldp+33,(vlSelfRef.tb__DOT__end_ready));
        bufp->chgBit(oldp+34,(vlSelfRef.tb__DOT__var_0_valid));
        bufp->chgBit(oldp+35,(vlSelfRef.tb__DOT__var_1_secret_valid));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+36,((VL_SHIFTR_QQQ(64,64,64, vlSelfRef.tb__DOT__var_0, 1ULL) 
                                 ^ ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)
                                     ? vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__dataReg
                                     : vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0_result))),64);
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__inputReady) 
                               & (3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellinp__join_inputs__ins_valid)))));
        bufp->chgBit(oldp+39,(((~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)) 
                               & ((~ ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U)) & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0_result_valid)))));
        bufp->chgCData(oldp+40,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2_outs_1_ready) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready) 
                                                  >> 1U)))),2);
        bufp->chgQData(oldp+41,((VL_SHIFTR_QQQ(64,64,64, vlSelfRef.tb__DOT__var_0, 1ULL) 
                                 ^ ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)
                                     ? vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__dataReg
                                     : vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0_result))),64);
        bufp->chgBit(oldp+43,(((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__inputReady) 
                               & (3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellinp__join_inputs__ins_valid)))));
        bufp->chgBit(oldp+44,(((~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)) 
                               & ((~ ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U)) & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0_result_valid)))));
        bufp->chgCData(oldp+45,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2_outs_1_ready) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready) 
                                                  >> 1U)))),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+46,(vlSelfRef.tb__DOT__design_iterations_d),32);
        bufp->chgQData(oldp+47,(vlSelfRef.tb__DOT__var_0),64);
        bufp->chgQData(oldp+49,(vlSelfRef.tb__DOT__a_var_1_secret),64);
        bufp->chgQData(oldp+51,(vlSelfRef.tb__DOT__b_var_1_secret),64);
        bufp->chgBit(oldp+53,(vlSelfRef.tb__DOT__start_again_0_d));
        bufp->chgBit(oldp+54,(vlSelfRef.tb__DOT__finish_sim_d));
        bufp->chgBit(oldp+55,(((3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid)) 
                               != (3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid)))));
        bufp->chgBit(oldp+56,((0U == (((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                       << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue))))));
        bufp->chgBit(oldp+57,((3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_0_valid));
        bufp->chgBit(oldp+59,((1U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_1_valid));
        bufp->chgBit(oldp+61,((1U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_2_valid));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready) 
                                     >> 1U))));
        bufp->chgCData(oldp+64,((3U & (IData)(vlSelfRef.tb__DOT__a_var_1_secret))),2);
        bufp->chgBit(oldp+65,((1U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+66,((0U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+67,((1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready) 
                                     >> 1U))));
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready) 
                                     >> 1U))));
        bufp->chgBit(oldp+69,((0U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready) 
                                     >> 1U))));
        bufp->chgCData(oldp+71,((1U & (IData)(vlSelfRef.tb__DOT__a_var_1_secret))),2);
        bufp->chgBit(oldp+72,((3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+73,((1U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+74,((0U == (1U & (IData)(vlSelfRef.tb__DOT__a_var_1_secret)))));
        bufp->chgBit(oldp+75,((3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgQData(oldp+76,(VL_SHIFTR_QQQ(64,64,64, vlSelfRef.tb__DOT__var_0, 1ULL)),64);
        bufp->chgBit(oldp+78,((3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+79,((1U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                                     >> 1U))));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__andi0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__tb__DOT__a_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid),2);
        __Vtemp_1[0U] = (IData)(vlSelfRef.tb__DOT__var_0);
        __Vtemp_1[1U] = (IData)((vlSelfRef.tb__DOT__var_0 
                                 >> 0x20U));
        __Vtemp_1[2U] = (IData)(vlSelfRef.tb__DOT__var_0);
        __Vtemp_1[3U] = (IData)((vlSelfRef.tb__DOT__var_0 
                                 >> 0x20U));
        __Vtemp_1[4U] = (IData)(vlSelfRef.tb__DOT__var_0);
        __Vtemp_1[5U] = (IData)((vlSelfRef.tb__DOT__var_0 
                                 >> 0x20U));
        bufp->chgWData(oldp+87,(__Vtemp_1),192);
        bufp->chgCData(oldp+93,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_2_valid) 
                                  << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_1_valid) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_0_valid)))),3);
        bufp->chgCData(oldp+94,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready) 
                                  << 1U) | (1U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready)))),3);
        bufp->chgCData(oldp+95,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                  << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue)))),3);
        bufp->chgBit(oldp+96,((0U != (((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                       << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue))))));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__backpressure));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue));
        bufp->chgCData(oldp+101,(((2U & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready)) 
                                  | (1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready) 
                                           >> 1U)))),2);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__blockStopArray),2);
        bufp->chgBit(oldp+103,((0U != (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__blockStopArray),2);
        bufp->chgBit(oldp+107,((0U != (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+109,(((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_2_valid) 
                                & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_1_valid))));
        bufp->chgCData(oldp+110,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_2_valid) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0_outs_1_valid))),2);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__tb__DOT__a_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__tb__DOT__a_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__shrui0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__xori0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgBit(oldp+119,((0U == (((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                        << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue))))));
        bufp->chgBit(oldp+120,((3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_0_valid));
        bufp->chgBit(oldp+122,((1U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_1_valid));
        bufp->chgBit(oldp+124,((1U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_2_valid));
        bufp->chgBit(oldp+126,((1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U))));
        bufp->chgCData(oldp+127,((3U & (IData)(vlSelfRef.tb__DOT__b_var_1_secret))),2);
        bufp->chgBit(oldp+128,((1U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+129,((0U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U))));
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U))));
        bufp->chgBit(oldp+132,((0U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U))));
        bufp->chgCData(oldp+134,((1U & (IData)(vlSelfRef.tb__DOT__b_var_1_secret))),2);
        bufp->chgBit(oldp+135,((3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+136,((1U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+137,((0U == (1U & (IData)(vlSelfRef.tb__DOT__b_var_1_secret)))));
        bufp->chgBit(oldp+138,((3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+139,((3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellinp__join_inputs__ins_valid))));
        bufp->chgBit(oldp+140,((1U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready) 
                                      >> 1U))));
        bufp->chgCData(oldp+142,(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__andi0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__tb__DOT__b_myfunc.cmpi0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__cmpi0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+148,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_2_valid) 
                                   << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_1_valid) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_0_valid)))),3);
        bufp->chgCData(oldp+149,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready) 
                                   << 1U) | (1U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready)))),3);
        bufp->chgCData(oldp+150,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                   << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue)))),3);
        bufp->chgBit(oldp+151,((0U != (((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue) 
                                        << 2U) | (((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue))))));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__backpressure));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue));
        bufp->chgCData(oldp+156,(((2U & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready)) 
                                  | (1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready) 
                                           >> 1U)))),2);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__blockStopArray),2);
        bufp->chgBit(oldp+158,((0U != (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue));
        bufp->chgCData(oldp+161,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__blockStopArray),2);
        bufp->chgBit(oldp+162,((0U != (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__blockStopArray))));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+164,(((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_2_valid) 
                                & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_1_valid))));
        bufp->chgCData(oldp+165,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_2_valid) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0_outs_1_valid))),2);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__tb__DOT__b_myfunc.muli0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+167,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+169,(vlSymsp->TOP__tb__DOT__b_myfunc.shrui0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+170,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__shrui0__DOT__join_inputs__DOT__singleValid),2);
        bufp->chgCData(oldp+171,(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid),2);
        bufp->chgCData(oldp+172,(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellout__join_inputs__ins_ready),2);
        bufp->chgCData(oldp+173,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__xori0__DOT__join_inputs__DOT__singleValid),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+174,(vlSelfRef.tb__DOT__design_iterations_q),32);
        bufp->chgBit(oldp+175,(vlSelfRef.tb__DOT__start_again_2_q));
        bufp->chgBit(oldp+176,(vlSelfRef.tb__DOT__start_again_0_q));
        bufp->chgBit(oldp+177,(vlSelfRef.tb__DOT__start_again_1_q));
        bufp->chgBit(oldp+178,(vlSelfRef.tb__DOT__finish_sim_q));
        bufp->chgBit(oldp+179,(vlSelfRef.tb__DOT__ts_detected_q));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2_outs_1_ready));
        bufp->chgQData(oldp+185,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2),64);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0_result_ready));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__inputReady));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__dataReg));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__control__DOT__outputValid));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0_outs_ready));
        bufp->chgQData(oldp+193,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0_result),64);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0_result_valid));
        bufp->chgBit(oldp+196,((1U & (~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)))));
        bufp->chgQData(oldp+197,(((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)
                                   ? vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__dataReg
                                   : vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0_result)),64);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1_outs_valid));
        bufp->chgQData(oldp+200,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__dataReg),64);
        bufp->chgBit(oldp+202,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgCData(oldp+206,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue))),2);
        bufp->chgCData(oldp+207,((((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue))),2);
        bufp->chgBit(oldp+208,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__oehb_ready));
        bufp->chgBit(oldp+210,((1U & ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__buff__DOT__regs) 
                                      >> 2U))));
        bufp->chgIData(oldp+211,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__buff__DOT__i),32);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__buff__DOT__regs),3);
        bufp->chgQData(oldp+213,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg),64);
        bufp->chgQData(oldp+215,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg),64);
        bufp->chgQData(oldp+217,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0),64);
        bufp->chgQData(oldp+219,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1),64);
        bufp->chgQData(oldp+221,((vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg 
                                  * vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg)),64);
        bufp->chgBit(oldp+223,(((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__control__DOT__outputValid) 
                                & (((~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__dataReg)) 
                                    & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                   | ((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__buffer0__DOT__dataReg) 
                                      & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue))))));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__kill0));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__kill1));
        bufp->chgBit(oldp+226,(((IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out0) 
                                | (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out1))));
        bufp->chgBit(oldp+227,(((~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.select0__DOT____VdfgRegularize_he6049783_0_2))));
        bufp->chgBit(oldp+228,(((~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.select0__DOT____VdfgRegularize_he6049783_0_2))));
        bufp->chgBit(oldp+229,(((~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__kill0))));
        bufp->chgBit(oldp+230,(((~ (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__kill1))));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out0));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__tb__DOT__a_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out1));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2_outs_1_ready));
        bufp->chgQData(oldp+238,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q2),64);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0_result_ready));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__inputReady));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__dataReg));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__control__DOT__outputValid));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0_outs_ready));
        bufp->chgQData(oldp+246,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0_result),64);
        bufp->chgBit(oldp+248,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0_result_valid));
        bufp->chgBit(oldp+249,((1U & (~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)))));
        bufp->chgQData(oldp+250,(((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg)
                                   ? vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__dataReg
                                   : vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0_result)),64);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1_outs_valid));
        bufp->chgQData(oldp+253,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__dataReg),64);
        bufp->chgBit(oldp+255,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer1__DOT__control__DOT__fullReg));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue));
        bufp->chgCData(oldp+259,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue))),2);
        bufp->chgCData(oldp+260,((((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue))),2);
        bufp->chgBit(oldp+261,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__oehb_ready));
        bufp->chgBit(oldp+263,((1U & ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__buff__DOT__regs) 
                                      >> 2U))));
        bufp->chgIData(oldp+264,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__buff__DOT__i),32);
        bufp->chgCData(oldp+265,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__buff__DOT__regs),3);
        bufp->chgQData(oldp+266,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg),64);
        bufp->chgQData(oldp+268,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg),64);
        bufp->chgQData(oldp+270,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q0),64);
        bufp->chgQData(oldp+272,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__q1),64);
        bufp->chgQData(oldp+274,((vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg 
                                  * vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg)),64);
        bufp->chgBit(oldp+276,(((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__control__DOT__outputValid) 
                                & (((~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__dataReg)) 
                                    & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                   | ((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__buffer0__DOT__dataReg) 
                                      & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue))))));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__kill0));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__kill1));
        bufp->chgBit(oldp+279,(((IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out0) 
                                | (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out1))));
        bufp->chgBit(oldp+280,(((~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.select0__DOT____VdfgRegularize_he6049783_0_2))));
        bufp->chgBit(oldp+281,(((~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.select0__DOT____VdfgRegularize_he6049783_0_2))));
        bufp->chgBit(oldp+282,(((~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__kill0))));
        bufp->chgBit(oldp+283,(((~ (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__muli0__DOT__oehb_inst__DOT__outputValid)) 
                                & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__kill1))));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out0));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__tb__DOT__b_myfunc.__PVT__select0__DOT__antitokens__DOT__reg_out1));
    }
    bufp->chgBit(oldp+286,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+287,((1U & ((~ (IData)(vlSelfRef.tb__DOT__var_1_secret_valid)) 
                                  | ((IData)(vlSelfRef.tb__DOT__var_1_secret_valid) 
                                     & (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready))))));
    bufp->chgBit(oldp+288,((1U & ((~ (IData)(vlSelfRef.tb__DOT__var_1_secret_valid)) 
                                  | ((IData)(vlSelfRef.tb__DOT__var_1_secret_valid) 
                                     & (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.andi0__DOT____Vcellout__join_inputs__ins_ready))))));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

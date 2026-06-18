// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb_myfunc___eval_static__TOP__tb__DOT__a_myfunc(Vtb_myfunc* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_myfunc___eval_static__TOP__tb__DOT__a_myfunc((&vlSymsp->TOP__tb__DOT__a_myfunc));
    Vtb___024root____Vm_traceActivitySetAll(vlSelf);
    Vtb_myfunc___eval_static__TOP__tb__DOT__a_myfunc((&vlSymsp->TOP__tb__DOT__b_myfunc));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_myfunc___stl_sequent__TOP__tb__DOT__a_myfunc__0(Vtb_myfunc* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_myfunc___stl_sequent__TOP__tb__DOT__a_myfunc__0((&vlSymsp->TOP__tb__DOT__a_myfunc));
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
        Vtb_myfunc___stl_sequent__TOP__tb__DOT__a_myfunc__0((&vlSymsp->TOP__tb__DOT__b_myfunc));
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb__DOT__start_again_2_q) {
        if ((4U >= (7U & vlSelfRef.tb__DOT__design_iterations_q))) {
            vlSelfRef.tb__DOT__var_0 = vlSelfRef.tb__DOT__var_0_mem
                [(7U & vlSelfRef.tb__DOT__design_iterations_q)];
            vlSelfRef.tb__DOT__a_var_1_secret = vlSelfRef.tb__DOT__a_var_1_secret_mem
                [(7U & vlSelfRef.tb__DOT__design_iterations_q)];
            vlSelfRef.tb__DOT__b_var_1_secret = vlSelfRef.tb__DOT__b_var_1_secret_mem
                [(7U & vlSelfRef.tb__DOT__design_iterations_q)];
        } else {
            vlSelfRef.tb__DOT__var_0 = 0ULL;
            vlSelfRef.tb__DOT__a_var_1_secret = 0ULL;
            vlSelfRef.tb__DOT__b_var_1_secret = 0ULL;
        }
    }
    vlSelfRef.tb__DOT__start_again_0_d = 0U;
    vlSelfRef.tb__DOT__design_iterations_d = vlSelfRef.tb__DOT__design_iterations_q;
    vlSelfRef.tb__DOT__finish_sim_d = 0U;
    if (VL_UNLIKELY((vlSelfRef.tb__DOT__finish_sim_q))) {
        VL_WRITEF_NX("[success-finish] Design can finish!\n",0);
        VL_FINISH_MT("tb.sv", 121, "");
    }
    if (VL_UNLIKELY((vlSelfRef.tb__DOT__ts_detected_q))) {
        VL_WRITEF_NX("[bug-ts] Timing side-channel detected!\n",0);
        VL_FINISH_MT("tb.sv", 126, "");
    }
    if (vlSelfRef.tb__DOT__first_start) {
        vlSelfRef.tb__DOT__start_again_0_d = 1U;
    }
    if (((3U == (IData)(vlSymsp->TOP__tb__DOT__a_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid)) 
         & (3U == (IData)(vlSymsp->TOP__tb__DOT__b_myfunc.xori0__DOT____Vcellinp__join_inputs__ins_valid)))) {
        if (VL_UNLIKELY((VL_GTS_III(32, 4U, vlSelfRef.tb__DOT__design_iterations_q)))) {
            VL_WRITEF_NX("[success-finish] Design can finish!\n",0);
            vlSelfRef.tb__DOT__start_again_0_d = 1U;
            vlSelfRef.tb__DOT__design_iterations_d 
                = ((IData)(1U) + vlSelfRef.tb__DOT__design_iterations_q);
        } else {
            vlSelfRef.tb__DOT__finish_sim_d = 1U;
        }
    }
}

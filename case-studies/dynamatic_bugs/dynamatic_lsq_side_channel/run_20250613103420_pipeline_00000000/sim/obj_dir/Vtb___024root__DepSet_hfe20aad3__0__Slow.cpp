// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb_mysecretfunction___eval_static__TOP__tb__DOT__a_mysecretfunction(Vtb_mysecretfunction* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mysecretfunction___eval_static__TOP__tb__DOT__a_mysecretfunction((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
    Vtb___024root____Vm_traceActivitySetAll(vlSelf);
    Vtb_mysecretfunction___eval_static__TOP__tb__DOT__a_mysecretfunction((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
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

VL_ATTR_COLD void Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__a_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);
VL_ATTR_COLD void Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__a_mysecretfunction__1(Vtb_mysecretfunction* vlSelf);
VL_ATTR_COLD void Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__a_mysecretfunction__2(Vtb_mysecretfunction* vlSelf);
VL_ATTR_COLD void Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__b_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);
VL_ATTR_COLD void Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__b_mysecretfunction__1(Vtb_mysecretfunction* vlSelf);
VL_ATTR_COLD void Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__b_mysecretfunction__2(Vtb_mysecretfunction* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__a_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
        Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__a_mysecretfunction__1((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__a_mysecretfunction__2((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__b_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__b_mysecretfunction__1((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___stl_sequent__TOP__tb__DOT__b_mysecretfunction__2((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);
void Vtb_mysecretfunction___eval_initial__TOP__tb__DOT__a_mysecretfunction(Vtb_mysecretfunction* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_mysecretfunction___eval_initial__TOP__tb__DOT__a_mysecretfunction((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
    Vtb_mysecretfunction___eval_initial__TOP__tb__DOT__a_mysecretfunction((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x61636573U;
    __Vtemp_1[2U] = 0x7472U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__clk = 0U;
    vlSelfRef.tb__DOT__start_valid = 0U;
    vlSelfRef.tb__DOT__fn_arg_0_secret_valid = 0U;
    vlSelfRef.tb__DOT__fn_arg_1_valid = 0U;
    vlSelfRef.tb__DOT__fn_arg_arrout_1_start_valid = 0U;
    vlSelfRef.tb__DOT__out0_ready = 1U;
    vlSelfRef.tb__DOT__fn_arg_arrout_1_end_ready = 1U;
    vlSelfRef.tb__DOT__end_ready = 1U;
    vlSelfRef.tb__DOT__a_fn_arg_0_secret = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb__DOT__b_fn_arg_0_secret = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb__DOT__fn_arg_1 = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb__DOT__fn_arg_arrout_1_loadData = (0xffU 
                                                   & VL_RANDOM_I());
    VL_WRITEF_NX("a_secret: 0x%0x, b_secret: 0x%0x\n",0,
                 8,vlSelfRef.tb__DOT__a_fn_arg_0_secret,
                 8,(IData)(vlSelfRef.tb__DOT__b_fn_arg_0_secret));
    vlSelfRef.tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1770ULL, 
                                         nullptr, "tb_sim.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__rst = 0U;
    vlSelfRef.tb__DOT__start_valid = 1U;
    vlSelfRef.tb__DOT__fn_arg_0_secret_valid = 1U;
    vlSelfRef.tb__DOT__fn_arg_1_valid = 1U;
    vlSelfRef.tb__DOT__fn_arg_arrout_1_start_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb_sim.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__start_valid = 0U;
    vlSelfRef.tb__DOT__fn_arg_0_secret_valid = 0U;
    vlSelfRef.tb__DOT__fn_arg_1_valid = 0U;
    vlSelfRef.tb__DOT__fn_arg_arrout_1_start_valid = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h3f5fc40e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "tb_sim.sv", 
                                                             143);
        vlSelfRef.tb__DOT__fn_arg_arrout_1_loadData 
            = (0xffU & VL_RANDOM_I());
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__rst)))) {
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__cond_br2_falseOut_valid) 
                              != ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__buffer19_outs)) 
                                  & (3U == (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__cond_br2__DOT__control__DOT__ins_valid_vec))))))) {
                VL_WRITEF_NX("Timing Side-Channel!\n",0);
            }
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__cond_br2_falseOut_valid) 
                              | ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__buffer19_outs)) 
                                 & (3U == (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__cond_br2__DOT__control__DOT__ins_valid_vec))))))) {
                co_await vlSelfRef.__VdlySched.delay(0xfa0ULL, 
                                                     nullptr, 
                                                     "tb_sim.sv", 
                                                     161);
                VL_FINISH_MT("tb_sim.sv", 161, "");
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_mysecretfunction___act_sequent__TOP__tb__DOT__a_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___act_sequent__TOP__tb__DOT__b_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_mysecretfunction___act_sequent__TOP__tb__DOT__a_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtb_mysecretfunction___act_sequent__TOP__tb__DOT__b_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
    }
}

void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__1(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__2(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__3(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__4(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__5(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__b_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__b_mysecretfunction__5(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_comb__TOP__tb__DOT__a_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);
void Vtb_mysecretfunction___nba_comb__TOP__tb__DOT__b_mysecretfunction__0(Vtb_mysecretfunction* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__1((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__2((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__3((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__4((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__5((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__b_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__1((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__2((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__3((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__a_mysecretfunction__4((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
        Vtb_mysecretfunction___nba_sequent__TOP__tb__DOT__b_mysecretfunction__5((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_mysecretfunction___nba_comb__TOP__tb__DOT__a_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__a_mysecretfunction));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtb_mysecretfunction___nba_comb__TOP__tb__DOT__b_mysecretfunction__0((&vlSymsp->TOP__tb__DOT__b_mysecretfunction));
    }
}

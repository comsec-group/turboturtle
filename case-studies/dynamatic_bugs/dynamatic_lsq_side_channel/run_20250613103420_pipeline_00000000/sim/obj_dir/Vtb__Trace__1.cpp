// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_1(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 4130);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15));
        bufp->chgCData(oldp+7,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0),8);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1),8);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2),8);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3),8);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4),8);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5),8);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6),8);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7),8);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8),8);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9),8);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10),8);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11),8);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12),8);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13),8);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14),8);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15),8);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_0));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_1));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_2));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_3));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_4));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_5));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_6));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_7));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_8));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_9));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_10));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_11));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_12));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_13));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_14));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__addrKnownPReg_15));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_0));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_1));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_2));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_3));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_4));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_5));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_6));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_7));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_8));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_9));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_10));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_11));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_12));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_13));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_14));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__dataKnownPReg_15));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx),4);
        bufp->chgBit(oldp+56,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+57,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1),4);
        bufp->chgBit(oldp+59,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+60,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_1))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2),4);
        bufp->chgBit(oldp+62,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+63,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_2))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3),4);
        bufp->chgBit(oldp+65,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+66,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_3))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4),4);
        bufp->chgBit(oldp+68,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+69,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_4))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5),4);
        bufp->chgBit(oldp+71,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+72,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_5))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6),4);
        bufp->chgBit(oldp+74,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+75,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_6))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7),4);
        bufp->chgBit(oldp+77,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+78,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_7))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8),4);
        bufp->chgBit(oldp+80,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+81,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_8))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9),4);
        bufp->chgBit(oldp+83,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+84,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_9))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10),4);
        bufp->chgBit(oldp+86,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+87,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_10))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11),4);
        bufp->chgBit(oldp+89,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+90,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_11))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12),4);
        bufp->chgBit(oldp+92,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+93,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_12))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13),4);
        bufp->chgBit(oldp+95,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+96,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_13))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14),4);
        bufp->chgBit(oldp+98,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                    ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                        ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                        : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                            ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                            : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+99,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_14))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15),4);
        bufp->chgBit(oldp+101,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                 ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                     ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_15)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_14))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_13)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_12)))
                                     : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_11)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_10))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_9)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_8))))
                                 : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                     ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_7)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_6))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_5)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_4)))
                                     : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_3)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_2))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_1)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataKnownPReg_0)))))));
        bufp->chgCData(oldp+102,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                   ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                       ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                           ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_15)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_14))
                                           : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_13)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_12)))
                                       : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                           ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_11)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_10))
                                           : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_9)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_8))))
                                   : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                       ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                           ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_7)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_6))
                                           : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_5)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_4)))
                                       : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                           ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_3)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_2))
                                           : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__lastIdx_15))
                                               ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_1)
                                               : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__shiftedStoreDataQPreg_0)))))),8);
        bufp->chgSData(oldp+103,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+104,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+105,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+106,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+107,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+108,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+109,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+110,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+111,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+112,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+113,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+114,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+115,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+116,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+117,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+118,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_15)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_0)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_1)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_2)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_3)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_4)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_5)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_6)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_7)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_8)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_9)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_10)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_11)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_12)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_13)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadRequest_14) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_0));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_1));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_2));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_3));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_4));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_5));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_6));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_7));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_8));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_9));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_10));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_11));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_12));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_13));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_14));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__prevPriorityRequest_15));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_0));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_1));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_2));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_3));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_4));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_5));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_6));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_7));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_8));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_9));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_10));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_11));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_12));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_13));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_14));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__bypassRequest_15));
        bufp->chgCData(oldp+151,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__casez_tmp_79),8);
        bufp->chgSData(oldp+152,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+153,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+154,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+155,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+156,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+157,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+158,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+159,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+160,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+161,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+162,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+163,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+164,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+165,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+166,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+167,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                   ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                       ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                           ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                               ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                             ? 
                                                            (0x8000U 
                                                             & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)) 
                                                                << 0xfU))
                                                             : 0x4000U)
                                                            : 0x2000U)
                                                           : 0x1000U)
                                                          : 0x800U)
                                                         : 0x400U)
                                                        : 0x200U)
                                                       : 0x100U)
                                                      : 0x80U)
                                                     : 0x40U)
                                                    : 0x20U)
                                                   : 0x10U)
                                               : 8U)
                                           : 4U) : 2U)
                                   : 1U)),16);
        bufp->chgSData(oldp+168,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+169,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+170,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+171,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+172,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+173,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+174,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+175,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+176,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+177,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+178,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+179,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+180,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+181,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+182,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+183,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_15)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_0)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_1)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_2)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_3)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_4)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_5)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_6)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_7)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_8)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_9)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_10)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_11)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_12)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_13)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__portQ_14) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_0));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_1));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_2));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_3));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_4));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_5));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_6));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_7));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_8));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_9));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_10));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_11));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_12));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_13));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_14));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_15));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_0));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_1));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_2));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_3));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_4));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_5));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_6));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_7));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_8));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_9));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_10));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_11));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_12));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_13));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_34_14));
        bufp->chgCData(oldp+215,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__casez_tmp_80),8);
        bufp->chgBit(oldp+216,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_0));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_1));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_2));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_3));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_4));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_5));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_6));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_7));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_8));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_9));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_10));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_11));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_12));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_13));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_35_14));
        bufp->chgCData(oldp+231,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__casez_tmp_81),8);
        bufp->chgBit(oldp+232,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                 ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                     ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_15)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_14))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_13)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_12)))
                                     : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_11)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_10))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_9)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_8))))
                                 : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                     ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_7)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_6))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_5)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_4)))
                                     : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_3)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_2))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_1)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleted_0)))))));
        bufp->chgBit(oldp+233,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                 ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                     ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_15)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_14))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_13)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_12)))
                                     : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_11)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_10))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_9)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_8))))
                                 : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                     ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_7)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_6))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_5)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_4)))
                                     : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                         ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_3)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_2))
                                         : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__head))
                                             ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_1)
                                             : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__loadCompleting_0)))))));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15));
        bufp->chgSData(oldp+250,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+251,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+252,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+253,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+254,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+255,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+256,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+257,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+258,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+259,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+260,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+261,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+262,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+263,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+264,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+265,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_0)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15));
        bufp->chgSData(oldp+282,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+283,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+284,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+285,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+286,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+287,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+288,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+289,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+290,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+291,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+292,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+293,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+294,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+295,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+296,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgSData(oldp+297,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_15)
                                   ? 1U : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_0)
                                            ? 2U : 
                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_1)
                                             ? 4U : 
                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_2)
                                              ? 8U : 
                                             ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_3)
                                               ? 0x10U
                                               : ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_4)
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_5)
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_6)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_7)
                                                      ? 0x100U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_8)
                                                       ? 0x200U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_9)
                                                        ? 0x400U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_10)
                                                         ? 0x800U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_11)
                                                          ? 0x1000U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_12)
                                                           ? 0x2000U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_13)
                                                            ? 0x4000U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_1_14) 
                                                            << 0xfU))))))))))))))))),16);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_2_1));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_3_1));
        bufp->chgBit(oldp+300,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_4_1));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_5_1));
        bufp->chgBit(oldp+302,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_6_1));
        bufp->chgBit(oldp+303,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_7_1));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_8_1));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_9_1));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_10_1));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_11_1));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_12_1));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_13_1));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_14_1));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_15_1));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_16_1));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__condVec_17_1));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_0));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_1));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_2));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_3));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_4));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_5));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_6));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_7));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_8));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_9));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_10));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_11));
        bufp->chgBit(oldp+326,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_12));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_13));
        bufp->chgBit(oldp+328,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_14));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__validEntriesInStoreQ_15));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_0));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_1));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_2));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_3));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_4));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_5));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_6));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_7));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_8));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_9));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_10));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_11));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_12));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_13));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_14));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_0_15));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_0));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_1));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_2));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_3));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_4));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_5));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_6));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_7));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_8));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_9));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_10));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_11));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_12));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_13));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_14));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_1_15));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_0));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_1));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_2));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_3));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_4));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_5));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_6));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_7));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_8));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_9));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_10));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_11));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_12));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_13));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_14));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_2_15));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_0));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_1));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_2));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_3));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_4));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_5));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_6));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_7));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_8));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_9));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_10));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_11));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_12));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_13));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_14));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_3_15));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_0));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_1));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_2));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_3));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_4));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_5));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_6));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_7));
        bufp->chgBit(oldp+402,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_8));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_9));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_10));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_11));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_12));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_13));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_14));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_4_15));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_0));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_1));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_2));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_3));
        bufp->chgBit(oldp+414,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_4));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_5));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_6));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_7));
        bufp->chgBit(oldp+418,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_8));
        bufp->chgBit(oldp+419,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_9));
        bufp->chgBit(oldp+420,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_10));
        bufp->chgBit(oldp+421,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_11));
        bufp->chgBit(oldp+422,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_12));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_13));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_14));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_5_15));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_0));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_1));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_2));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_3));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_4));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_5));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_6));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_7));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_8));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_9));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_10));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_11));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_12));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_13));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_14));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_6_15));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_0));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_1));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_2));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_3));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_4));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_5));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_6));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_7));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_8));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_9));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_10));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_11));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_12));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_13));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_14));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_7_15));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_0));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_1));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_2));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_3));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_4));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_5));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_6));
        bufp->chgBit(oldp+465,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_7));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_8));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_9));
        bufp->chgBit(oldp+468,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_10));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_11));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_12));
        bufp->chgBit(oldp+471,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_13));
        bufp->chgBit(oldp+472,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_14));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_8_15));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_0));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_1));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_2));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_3));
        bufp->chgBit(oldp+478,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_4));
        bufp->chgBit(oldp+479,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_5));
        bufp->chgBit(oldp+480,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_6));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_7));
        bufp->chgBit(oldp+482,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_8));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_9));
        bufp->chgBit(oldp+484,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_10));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_11));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_12));
        bufp->chgBit(oldp+487,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_13));
        bufp->chgBit(oldp+488,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_14));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_9_15));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_0));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_1));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_2));
        bufp->chgBit(oldp+493,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_3));
        bufp->chgBit(oldp+494,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_4));
        bufp->chgBit(oldp+495,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_5));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_6));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_7));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_8));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_9));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_10));
        bufp->chgBit(oldp+501,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_11));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_12));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_13));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_14));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_10_15));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_0));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_1));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_2));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_3));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_4));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_5));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_6));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_7));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_8));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_9));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_10));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_11));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_12));
        bufp->chgBit(oldp+519,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_13));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_14));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_11_15));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_0));
        bufp->chgBit(oldp+523,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_1));
        bufp->chgBit(oldp+524,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_2));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_3));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_4));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_5));
        bufp->chgBit(oldp+528,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_6));
        bufp->chgBit(oldp+529,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_7));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_8));
        bufp->chgBit(oldp+531,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_9));
        bufp->chgBit(oldp+532,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_10));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_11));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_12));
        bufp->chgBit(oldp+535,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_13));
        bufp->chgBit(oldp+536,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_14));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_12_15));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_0));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_1));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_2));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_3));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_4));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_5));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_6));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_7));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_8));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_9));
        bufp->chgBit(oldp+548,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_10));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_11));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_12));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_13));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_14));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_13_15));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_0));
        bufp->chgBit(oldp+555,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_1));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_2));
        bufp->chgBit(oldp+557,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_3));
        bufp->chgBit(oldp+558,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_4));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_5));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_6));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_7));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_8));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_9));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_10));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_11));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_12));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_13));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_14));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_14_15));
        bufp->chgBit(oldp+570,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_0));
        bufp->chgBit(oldp+571,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_1));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_2));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_3));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_4));
        bufp->chgBit(oldp+575,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_5));
        bufp->chgBit(oldp+576,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_6));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_7));
        bufp->chgBit(oldp+578,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_8));
        bufp->chgBit(oldp+579,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_9));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_10));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_11));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_12));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_13));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_14));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__entriesToCheck_15_15));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_0));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_1));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_2));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_3));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_4));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_5));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_6));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_7));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_8));
        bufp->chgBit(oldp+595,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_9));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_10));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_11));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_12));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_13));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_14));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_0_15));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_0));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_1));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_2));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_3));
        bufp->chgBit(oldp+606,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_4));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_5));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_6));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_7));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_8));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_9));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_10));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_11));
        bufp->chgBit(oldp+614,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_12));
        bufp->chgBit(oldp+615,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_13));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_14));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_1_15));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_0));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_1));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_2));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_3));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_4));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_5));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_6));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_7));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_8));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_9));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_10));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_11));
        bufp->chgBit(oldp+630,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_12));
        bufp->chgBit(oldp+631,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_13));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_14));
        bufp->chgBit(oldp+633,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_2_15));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_0));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_1));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_2));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_3));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_4));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_5));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_6));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_7));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_8));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_9));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_10));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_11));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_12));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_13));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_14));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_3_15));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_0));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_1));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_2));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_3));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_4));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_5));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_6));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_7));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_8));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_9));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_10));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_11));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_12));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_13));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_14));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_4_15));
        bufp->chgBit(oldp+666,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_0));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_1));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_2));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_3));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_4));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_5));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_6));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_7));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_8));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_9));
        bufp->chgBit(oldp+676,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_10));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_11));
        bufp->chgBit(oldp+678,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_12));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_13));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_14));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_5_15));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_0));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_1));
        bufp->chgBit(oldp+684,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_2));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_3));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_4));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_5));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_6));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_7));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_8));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_9));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_10));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_11));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_12));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_13));
        bufp->chgBit(oldp+696,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_14));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_6_15));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_0));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_1));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_2));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_3));
        bufp->chgBit(oldp+702,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_4));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_5));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_6));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_7));
        bufp->chgBit(oldp+706,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_8));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_9));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_10));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_11));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_12));
        bufp->chgBit(oldp+711,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_13));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_14));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_7_15));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_0));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_1));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_2));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_3));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_4));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_5));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_6));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_7));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_8));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_9));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_10));
        bufp->chgBit(oldp+725,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_11));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_12));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_13));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_14));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_8_15));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_0));
        bufp->chgBit(oldp+731,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_1));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_2));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_3));
        bufp->chgBit(oldp+734,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_4));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_5));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_6));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_7));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_8));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_9));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_10));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_11));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_12));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_13));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_14));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_9_15));
        bufp->chgBit(oldp+746,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_0));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_1));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_2));
        bufp->chgBit(oldp+749,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_3));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_4));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_5));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_6));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_7));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_8));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_9));
        bufp->chgBit(oldp+756,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_10));
        bufp->chgBit(oldp+757,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_11));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_12));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_13));
        bufp->chgBit(oldp+760,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_14));
        bufp->chgBit(oldp+761,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_10_15));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_0));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_1));
        bufp->chgBit(oldp+764,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_2));
        bufp->chgBit(oldp+765,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_3));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_4));
        bufp->chgBit(oldp+767,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_5));
        bufp->chgBit(oldp+768,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_6));
        bufp->chgBit(oldp+769,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_7));
        bufp->chgBit(oldp+770,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_8));
        bufp->chgBit(oldp+771,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_9));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_10));
        bufp->chgBit(oldp+773,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_11));
        bufp->chgBit(oldp+774,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_12));
        bufp->chgBit(oldp+775,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_13));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_14));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_11_15));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_0));
        bufp->chgBit(oldp+779,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_1));
        bufp->chgBit(oldp+780,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_2));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_3));
        bufp->chgBit(oldp+782,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_4));
        bufp->chgBit(oldp+783,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_5));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_6));
        bufp->chgBit(oldp+785,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_7));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_8));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_9));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_10));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_11));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_12));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_13));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_14));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_12_15));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_0));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_1));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_2));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_3));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_4));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_5));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_6));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_7));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_8));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_9));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_10));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_11));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_12));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_13));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_14));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_13_15));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_0));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_1));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_2));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_3));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_4));
        bufp->chgBit(oldp+815,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_5));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_6));
        bufp->chgBit(oldp+817,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_7));
        bufp->chgBit(oldp+818,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_8));
        bufp->chgBit(oldp+819,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_9));
        bufp->chgBit(oldp+820,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_10));
        bufp->chgBit(oldp+821,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_11));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_12));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_13));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_14));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_14_15));
        bufp->chgBit(oldp+826,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_0));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_1));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_2));
        bufp->chgBit(oldp+829,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_3));
        bufp->chgBit(oldp+830,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_4));
        bufp->chgBit(oldp+831,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_5));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_6));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_7));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_8));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_9));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_10));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_11));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_12));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_13));
        bufp->chgBit(oldp+840,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_14));
        bufp->chgBit(oldp+841,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__conflict_15_15));
        bufp->chgBit(oldp+842,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_0));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_1));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_2));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_3));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_4));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_5));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_6));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_7));
        bufp->chgBit(oldp+850,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_8));
        bufp->chgBit(oldp+851,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_9));
        bufp->chgBit(oldp+852,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_10));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_11));
        bufp->chgBit(oldp+854,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_12));
        bufp->chgBit(oldp+855,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_13));
        bufp->chgBit(oldp+856,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_14));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_0_15));
        bufp->chgBit(oldp+858,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_0));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_1));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_2));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_3));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_4));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_5));
        bufp->chgBit(oldp+864,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_6));
        bufp->chgBit(oldp+865,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_7));
        bufp->chgBit(oldp+866,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_8));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_9));
        bufp->chgBit(oldp+868,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_10));
        bufp->chgBit(oldp+869,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_11));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_12));
        bufp->chgBit(oldp+871,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_13));
        bufp->chgBit(oldp+872,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_14));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_1_15));
        bufp->chgBit(oldp+874,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_0));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_1));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_2));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_3));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_4));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_5));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_6));
        bufp->chgBit(oldp+881,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_7));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_8));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_9));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_10));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_11));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_12));
        bufp->chgBit(oldp+887,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_13));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_14));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_2_15));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_0));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_1));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_2));
        bufp->chgBit(oldp+893,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_3));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_4));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_5));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_6));
        bufp->chgBit(oldp+897,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_7));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_8));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_9));
        bufp->chgBit(oldp+900,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_10));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_11));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_12));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_13));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_14));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_3_15));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_0));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_1));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_2));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_3));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_4));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_5));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_6));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_7));
        bufp->chgBit(oldp+914,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_8));
        bufp->chgBit(oldp+915,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_9));
        bufp->chgBit(oldp+916,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_10));
        bufp->chgBit(oldp+917,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_11));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_12));
        bufp->chgBit(oldp+919,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_13));
        bufp->chgBit(oldp+920,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_14));
        bufp->chgBit(oldp+921,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_4_15));
        bufp->chgBit(oldp+922,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_0));
        bufp->chgBit(oldp+923,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_1));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_2));
        bufp->chgBit(oldp+925,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_3));
        bufp->chgBit(oldp+926,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_4));
        bufp->chgBit(oldp+927,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_5));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_6));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_7));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_8));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_9));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_10));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_11));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_12));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_13));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_14));
        bufp->chgBit(oldp+937,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_5_15));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_0));
        bufp->chgBit(oldp+939,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_1));
        bufp->chgBit(oldp+940,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_2));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_3));
        bufp->chgBit(oldp+942,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_4));
        bufp->chgBit(oldp+943,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_5));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_6));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_7));
        bufp->chgBit(oldp+946,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_8));
        bufp->chgBit(oldp+947,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_9));
        bufp->chgBit(oldp+948,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_10));
        bufp->chgBit(oldp+949,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_11));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_12));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_13));
        bufp->chgBit(oldp+952,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_14));
        bufp->chgBit(oldp+953,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_6_15));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_0));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_1));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_2));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_3));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_4));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_5));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_6));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_7));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_8));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_9));
        bufp->chgBit(oldp+964,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_10));
        bufp->chgBit(oldp+965,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_11));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_12));
        bufp->chgBit(oldp+967,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_13));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_14));
        bufp->chgBit(oldp+969,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_7_15));
        bufp->chgBit(oldp+970,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_0));
        bufp->chgBit(oldp+971,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_1));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_2));
        bufp->chgBit(oldp+973,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_3));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_4));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_5));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_6));
        bufp->chgBit(oldp+977,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_7));
        bufp->chgBit(oldp+978,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_8));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_9));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_10));
        bufp->chgBit(oldp+981,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_11));
        bufp->chgBit(oldp+982,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_12));
        bufp->chgBit(oldp+983,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_13));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_14));
        bufp->chgBit(oldp+985,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_8_15));
        bufp->chgBit(oldp+986,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_0));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_1));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_2));
        bufp->chgBit(oldp+989,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_3));
        bufp->chgBit(oldp+990,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_4));
        bufp->chgBit(oldp+991,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_5));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_6));
        bufp->chgBit(oldp+993,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_7));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_8));
        bufp->chgBit(oldp+995,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_9));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_10));
        bufp->chgBit(oldp+997,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_11));
        bufp->chgBit(oldp+998,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_12));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_13));
        bufp->chgBit(oldp+1000,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_14));
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_9_15));
        bufp->chgBit(oldp+1002,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_0));
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_1));
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_2));
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_3));
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_4));
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_5));
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_6));
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_7));
        bufp->chgBit(oldp+1010,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_8));
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_9));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_10));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_11));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_12));
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_13));
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_14));
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_10_15));
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_0));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_1));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_2));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_3));
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_4));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_5));
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_6));
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_7));
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_8));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_9));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_10));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_11));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_12));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_13));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_14));
        bufp->chgBit(oldp+1033,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_11_15));
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_0));
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_1));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_2));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_3));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_4));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_5));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_6));
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_7));
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_8));
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_9));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_10));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_11));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_12));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_13));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_14));
        bufp->chgBit(oldp+1049,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_12_15));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_0));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_1));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_2));
        bufp->chgBit(oldp+1053,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_3));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_4));
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_5));
        bufp->chgBit(oldp+1056,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_6));
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_7));
        bufp->chgBit(oldp+1058,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_8));
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_9));
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_10));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_11));
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_12));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_13));
        bufp->chgBit(oldp+1064,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_14));
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_13_15));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_0));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_1));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_2));
        bufp->chgBit(oldp+1069,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_3));
        bufp->chgBit(oldp+1070,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_4));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_5));
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_6));
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_7));
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_8));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_9));
        bufp->chgBit(oldp+1076,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_10));
        bufp->chgBit(oldp+1077,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_11));
        bufp->chgBit(oldp+1078,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_12));
        bufp->chgBit(oldp+1079,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_13));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_14));
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_14_15));
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_0));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_1));
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_2));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_3));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_4));
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_5));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_6));
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_7));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_8));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_9));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_10));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_11));
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_12));
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_13));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_14));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__loadQ__DOT__storeAddrNotKnownFlags_15_15));
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_0),4);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_1),4);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_2),4);
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_3),4);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_4),4);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_5),4);
        bufp->chgCData(oldp+1104,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_6),4);
        bufp->chgCData(oldp+1105,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_7),4);
        bufp->chgCData(oldp+1106,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_8),4);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_9),4);
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_10),4);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_11),4);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_12),4);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_13),4);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_14),4);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__offsetQ_15),4);
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_0));
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_1));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_2));
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_3));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_4));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_5));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_6));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_7));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_8));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_9));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_10));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_11));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_12));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_13));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_14));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__allocatedEntries_15));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_0));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_1));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_2));
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_3));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_4));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_5));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_6));
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_7));
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_8));
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_9));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_10));
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_11));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_12));
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_13));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_14));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_15));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_0));
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_1));
        bufp->chgBit(oldp+1148,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_2));
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_3));
        bufp->chgBit(oldp+1150,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_4));
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_5));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_6));
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_7));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_8));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_9));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_10));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_11));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_12));
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_13));
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_14));
        bufp->chgBit(oldp+1161,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__checkBits_15));
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__previousLoadHead),4);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__casez_tmp_31),4);
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__casez_tmp_32));
        bufp->chgBit(oldp+1165,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)))))));
        bufp->chgBit(oldp+1166,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)))))));
        bufp->chgBit(oldp+1167,(((8U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                  ? ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_15)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_14))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_13)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_12)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_11)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_10))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_9)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_8))))
                                  : ((4U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                      ? ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_7)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_6))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_5)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_4)))
                                      : ((2U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                          ? ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_3)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_2))
                                          : ((1U & (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__head))
                                              ? (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_1)
                                              : (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__storeCompleted_0)))))));
        bufp->chgSData(oldp+1168,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1169,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1170,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1171,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1172,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1173,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1174,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1175,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1176,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1177,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1178,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1179,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1180,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1181,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1182,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1183,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_15)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_0)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_1)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_2)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_3)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_4)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_5)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_6)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_7)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_8)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_9)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_10)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_11)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_12)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_13)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__addrKnown_14)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1184,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1185,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1186,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1187,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1188,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1189,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1190,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1191,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1192,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1193,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1194,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1195,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1196,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1197,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1198,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgSData(oldp+1199,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_15)
                                    ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_0)
                                        ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_1)
                                            ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_2)
                                                ? ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_3)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_4)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_5)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_6)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_7)
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_8)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_9)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_10)
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_11)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_12)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_13)
                                                              ? 
                                                             (0x8000U 
                                                              & ((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__dataKnown_14)) 
                                                                 << 0xfU))
                                                              : 0x4000U)
                                                             : 0x2000U)
                                                            : 0x1000U)
                                                           : 0x800U)
                                                          : 0x400U)
                                                         : 0x200U)
                                                        : 0x100U)
                                                       : 0x80U)
                                                      : 0x40U)
                                                     : 0x20U)
                                                    : 0x10U)
                                                : 8U)
                                            : 4U) : 2U)
                                    : 1U)),16);
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_1_0));
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_2_0));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_3_0));
        bufp->chgBit(oldp+1203,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_4_0));
        bufp->chgBit(oldp+1204,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_5_0));
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_6_0));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_7_0));
        bufp->chgBit(oldp+1207,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_8_0));
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_9_0));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_10_0));
        bufp->chgBit(oldp+1210,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_11_0));
        bufp->chgBit(oldp+1211,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_12_0));
        bufp->chgBit(oldp+1212,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_13_0));
        bufp->chgBit(oldp+1213,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_14_0));
        bufp->chgBit(oldp+1214,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_15_0));
        bufp->chgBit(oldp+1215,(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__lsq1__DOT__storeQ__DOT__condVecAddr_16_0));
        bufp->chgCData(oldp+1216,((0xf0U & ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__buffer18__DOT__dataReg) 
                                            << 4U))),8);
        bufp->chgSData(oldp+1217,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__addi3_result) 
                                   << 8U)),16);
    }
    bufp->chgCData(oldp+1218,(vlSelfRef.tb__DOT__fn_arg_arrout_1_loadData),8);
    bufp->chgBit(oldp+1219,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+1220,(((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__fork0__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                             & (IData)(vlSelfRef.tb__DOT__start_valid))));
    bufp->chgBit(oldp+1221,(((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__fork0__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                             & (IData)(vlSelfRef.tb__DOT__start_valid))));
    bufp->chgBit(oldp+1222,((((~ (IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__buffer19_outs)) 
                              & (IData)(vlSelfRef.tb__DOT__out0_ready)) 
                             | ((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__buffer19_outs) 
                                & ((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__Vcellout__mux1__ins_ready) 
                                   >> 1U)))));
    bufp->chgCData(oldp+1223,((((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__fork0_outs_2_valid) 
                                << 2U) | ((((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__fork0__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                                            & (IData)(vlSelfRef.tb__DOT__start_valid)) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__fork0_outs_0_valid)))),3);
    bufp->chgCData(oldp+1224,(((4U & ((IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__control_merge0__DOT__merge_ins__DOT__tmp_ready_out) 
                                      << 2U)) | (((IData)(vlSelfRef.tb__DOT__end_ready) 
                                                  << 1U) 
                                                 | (0U 
                                                    == (IData)(vlSymsp->TOP__tb__DOT__a_mysecretfunction.__PVT__fork1__DOT__control__DOT__blockStopArray))))),3);
    bufp->chgBit(oldp+1225,((((~ (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__buffer19_outs)) 
                              & (IData)(vlSelfRef.tb__DOT__out0_ready)) 
                             | ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__buffer19_outs) 
                                & ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__Vcellout__mux1__ins_ready) 
                                   >> 1U)))));
    bufp->chgCData(oldp+1226,((((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__fork0_outs_2_valid) 
                                << 2U) | ((((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__fork0__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue) 
                                            & (IData)(vlSelfRef.tb__DOT__start_valid)) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__fork0_outs_0_valid)))),3);
    bufp->chgCData(oldp+1227,(((4U & ((IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__control_merge0__DOT__merge_ins__DOT__tmp_ready_out) 
                                      << 2U)) | (((IData)(vlSelfRef.tb__DOT__end_ready) 
                                                  << 1U) 
                                                 | (0U 
                                                    == (IData)(vlSymsp->TOP__tb__DOT__b_mysecretfunction.__PVT__fork1__DOT__control__DOT__blockStopArray))))),3);
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

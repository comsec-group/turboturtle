// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_MYFUNC_H_
#define VERILATED_VTB_MYFUNC_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_myfunc final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(var_0_valid,0,0);
        VL_IN8(var_1_secret_valid,0,0);
        VL_IN8(start_valid,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(out0_ready,0,0);
        VL_IN8(end_ready,0,0);
        VL_OUT8(__PVT__var_0_ready,0,0);
        VL_OUT8(__PVT__var_1_secret_ready,0,0);
        VL_OUT8(__PVT__start_ready,0,0);
        VL_OUT8(out0_valid,0,0);
        VL_OUT8(__PVT__end_valid,0,0);
        CData/*0:0*/ __PVT__fork0_outs_0_valid;
        CData/*0:0*/ __PVT__fork0_outs_1_valid;
        CData/*0:0*/ __PVT__fork0_outs_2_valid;
        CData/*0:0*/ __PVT__fork2_outs_1_ready;
        CData/*0:0*/ __PVT__muli0_result_ready;
        CData/*0:0*/ __PVT__buffer0_outs_ready;
        CData/*0:0*/ __PVT__select0_result_valid;
        CData/*0:0*/ __PVT__buffer1_outs_valid;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__backpressure;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__regBlock__BRA__2__KET____DOT__regblock__DOT__keepValue;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork0__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue;
        CData/*1:0*/ __PVT__fork1__DOT__control__DOT__blockStopArray;
        CData/*0:0*/ __PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork1__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue;
        CData/*0:0*/ __PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork1__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue;
        CData/*1:0*/ __PVT__fork2__DOT__control__DOT__blockStopArray;
        CData/*0:0*/ __PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork2__DOT__control__DOT__regBlock__BRA__1__KET____DOT__regblock__DOT__keepValue;
        CData/*0:0*/ __PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__transmitValue;
        CData/*0:0*/ __PVT__fork2__DOT__control__DOT__regBlock__BRA__0__KET____DOT__regblock__DOT__keepValue;
        CData/*0:0*/ __PVT__muli0__DOT__oehb_ready;
        CData/*1:0*/ muli0__DOT____Vcellout__join_inputs__ins_ready;
        CData/*1:0*/ __PVT__muli0__DOT__join_inputs__DOT__singleValid;
        CData/*2:0*/ __PVT__muli0__DOT__buff__DOT__regs;
        CData/*0:0*/ muli0__DOT__buff__DOT____Vlvbound_hd0df871a__1;
        CData/*0:0*/ __PVT__muli0__DOT__oehb_inst__DOT__outputValid;
        CData/*1:0*/ andi0__DOT____Vcellout__join_inputs__ins_ready;
        CData/*1:0*/ andi0__DOT____Vcellinp__join_inputs__ins_valid;
        CData/*1:0*/ __PVT__andi0__DOT__join_inputs__DOT__singleValid;
        CData/*1:0*/ cmpi0__DOT____Vcellout__join_inputs__ins_ready;
        CData/*1:0*/ cmpi0__DOT____Vcellinp__join_inputs__ins_valid;
        CData/*1:0*/ __PVT__cmpi0__DOT__join_inputs__DOT__singleValid;
        CData/*0:0*/ __PVT__buffer0__DOT__inputReady;
        CData/*0:0*/ __PVT__buffer0__DOT__dataReg;
        CData/*0:0*/ __PVT__buffer0__DOT__control__DOT__outputValid;
        CData/*0:0*/ __PVT__select0__DOT__kill0;
        CData/*0:0*/ __PVT__select0__DOT__kill1;
        CData/*0:0*/ select0__DOT____VdfgRegularize_he6049783_0_2;
        CData/*0:0*/ __PVT__select0__DOT__antitokens__DOT__reg_out0;
        CData/*0:0*/ __PVT__select0__DOT__antitokens__DOT__reg_out1;
        CData/*1:0*/ shrui0__DOT____Vcellout__join_inputs__ins_ready;
        CData/*1:0*/ shrui0__DOT____Vcellinp__join_inputs__ins_valid;
        CData/*1:0*/ __PVT__shrui0__DOT__join_inputs__DOT__singleValid;
        CData/*0:0*/ __PVT__buffer1__DOT__control__DOT__fullReg;
        CData/*1:0*/ xori0__DOT____Vcellout__join_inputs__ins_ready;
        CData/*1:0*/ xori0__DOT____Vcellinp__join_inputs__ins_valid;
        CData/*1:0*/ __PVT__xori0__DOT__join_inputs__DOT__singleValid;
    };
    struct {
        IData/*31:0*/ __PVT__muli0__DOT__buff__DOT__i;
        VL_IN64(var_0,63,0);
        VL_IN64(var_1_secret,63,0);
        VL_OUT64(__PVT__out0,63,0);
        QData/*63:0*/ __PVT__select0_result;
        QData/*63:0*/ __PVT__muli0__DOT__mul_4_stage_inst__DOT__a_reg;
        QData/*63:0*/ __PVT__muli0__DOT__mul_4_stage_inst__DOT__b_reg;
        QData/*63:0*/ __PVT__muli0__DOT__mul_4_stage_inst__DOT__q0;
        QData/*63:0*/ __PVT__muli0__DOT__mul_4_stage_inst__DOT__q1;
        QData/*63:0*/ __PVT__muli0__DOT__mul_4_stage_inst__DOT__q2;
        QData/*63:0*/ __PVT__buffer1__DOT__dataReg;
    };

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_myfunc(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_myfunc();
    VL_UNCOPYABLE(Vtb_myfunc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

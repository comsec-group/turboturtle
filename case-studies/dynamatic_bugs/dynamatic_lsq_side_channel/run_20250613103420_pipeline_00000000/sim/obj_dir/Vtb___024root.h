// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mysecretfunction;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mysecretfunction* __PVT__tb__DOT__a_mysecretfunction;
    Vtb_mysecretfunction* __PVT__tb__DOT__b_mysecretfunction;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*7:0*/ tb__DOT__a_fn_arg_0_secret;
    CData/*7:0*/ tb__DOT__b_fn_arg_0_secret;
    CData/*0:0*/ tb__DOT__fn_arg_0_secret_valid;
    CData/*7:0*/ tb__DOT__fn_arg_1;
    CData/*0:0*/ tb__DOT__fn_arg_1_valid;
    CData/*7:0*/ tb__DOT__fn_arg_arrout_1_loadData;
    CData/*0:0*/ tb__DOT__fn_arg_arrout_1_start_valid;
    CData/*0:0*/ tb__DOT__start_valid;
    CData/*0:0*/ tb__DOT__rst;
    CData/*0:0*/ tb__DOT__out0_ready;
    CData/*0:0*/ tb__DOT__fn_arg_arrout_1_end_ready;
    CData/*0:0*/ tb__DOT__end_ready;
    CData/*7:0*/ tb__DOT__b_fn_arg_arrout_1_storeData;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3f5fc40e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

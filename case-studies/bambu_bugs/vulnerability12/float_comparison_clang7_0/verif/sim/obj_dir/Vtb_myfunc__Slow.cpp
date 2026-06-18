// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb_myfunc.h"

void Vtb_myfunc___ctor_var_reset(Vtb_myfunc* vlSelf);

Vtb_myfunc::Vtb_myfunc(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_myfunc___ctor_var_reset(this);
}

void Vtb_myfunc::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_myfunc::~Vtb_myfunc() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb_mysecretfunction.h"

void Vtb_mysecretfunction___ctor_var_reset(Vtb_mysecretfunction* vlSelf);

Vtb_mysecretfunction::Vtb_mysecretfunction(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mysecretfunction___ctor_var_reset(this);
}

void Vtb_mysecretfunction::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_mysecretfunction::~Vtb_mysecretfunction() {
}

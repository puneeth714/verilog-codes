// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdone.h for the primary calling header

#include "verilated.h"

#include "Vdone__Syms.h"
#include "Vdone___024root.h"

void Vdone___024root___ctor_var_reset(Vdone___024root* vlSelf);

Vdone___024root::Vdone___024root(Vdone__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdone___024root___ctor_var_reset(this);
}

void Vdone___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdone___024root::~Vdone___024root() {
}

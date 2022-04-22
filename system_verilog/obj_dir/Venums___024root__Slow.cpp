// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Venums.h for the primary calling header

#include "verilated.h"

#include "Venums__Syms.h"
#include "Venums___024root.h"

void Venums___024root___ctor_var_reset(Venums___024root* vlSelf);

Venums___024root::Venums___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Venums___024root___ctor_var_reset(this);
}

void Venums___024root::__Vconfigure(Venums__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Venums___024root::~Venums___024root() {
}

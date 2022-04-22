// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Venums.h for the primary calling header

#ifndef VERILATED_VENUMS___024ROOT_H_
#define VERILATED_VENUMS___024ROOT_H_  // guard

#include "verilated.h"

class Venums__Syms;
VL_MODULE(Venums___024root) {
  public:

    // INTERNAL VARIABLES
    Venums__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Venums___024root(const char* name);
    ~Venums___024root();
    VL_UNCOPYABLE(Venums___024root);

    // INTERNAL METHODS
    void __Vconfigure(Venums__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENUMS__SYMS_H_
#define VERILATED_VENUMS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Venums.h"

// INCLUDE MODULE CLASSES
#include "Venums___024root.h"

// SYMS CLASS (contains all model state)
class Venums__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Venums* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Venums___024root               TOP;

    // CONSTRUCTORS
    Venums__Syms(VerilatedContext* contextp, const char* namep, Venums* modelp);
    ~Venums__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

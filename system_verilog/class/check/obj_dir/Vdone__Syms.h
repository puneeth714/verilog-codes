// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDONE__SYMS_H_
#define VERILATED_VDONE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdone.h"

// INCLUDE MODULE CLASSES
#include "Vdone___024root.h"

// SYMS CLASS (contains all model state)
class Vdone__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdone* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdone___024root                TOP;

    // CONSTRUCTORS
    Vdone__Syms(VerilatedContext* contextp, const char* namep, Vdone* modelp);
    ~Vdone__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

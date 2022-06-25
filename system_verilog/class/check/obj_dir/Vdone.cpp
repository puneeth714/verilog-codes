// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdone.h"
#include "Vdone__Syms.h"

//============================================================
// Constructors

Vdone::Vdone(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdone__Syms(_vcontextp__, _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdone::Vdone(const char* _vcname__)
    : Vdone(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdone::~Vdone() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdone___024root___eval_initial(Vdone___024root* vlSelf);
void Vdone___024root___eval_settle(Vdone___024root* vlSelf);
void Vdone___024root___eval(Vdone___024root* vlSelf);
#ifdef VL_DEBUG
void Vdone___024root___eval_debug_assertions(Vdone___024root* vlSelf);
#endif  // VL_DEBUG
void Vdone___024root___final(Vdone___024root* vlSelf);

static void _eval_initial_loop(Vdone__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdone___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdone___024root___eval_settle(&(vlSymsp->TOP));
        Vdone___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdone::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdone::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdone___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdone___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdone::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdone::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdone::final() {
    Vdone___024root___final(&(vlSymsp->TOP));
}

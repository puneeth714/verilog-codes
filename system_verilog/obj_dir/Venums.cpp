// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Venums.h"
#include "Venums__Syms.h"

//============================================================
// Constructors

Venums::Venums(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Venums__Syms(_vcontextp__, _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
}

Venums::Venums(const char* _vcname__)
    : Venums(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Venums::~Venums() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Venums___024root___eval_initial(Venums___024root* vlSelf);
void Venums___024root___eval_settle(Venums___024root* vlSelf);
void Venums___024root___eval(Venums___024root* vlSelf);
#ifdef VL_DEBUG
void Venums___024root___eval_debug_assertions(Venums___024root* vlSelf);
#endif  // VL_DEBUG
void Venums___024root___final(Venums___024root* vlSelf);

static void _eval_initial_loop(Venums__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Venums___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Venums___024root___eval_settle(&(vlSymsp->TOP));
        Venums___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Venums::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Venums::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Venums___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Venums___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Venums::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Venums::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Venums::final() {
    Venums___024root___final(&(vlSymsp->TOP));
}

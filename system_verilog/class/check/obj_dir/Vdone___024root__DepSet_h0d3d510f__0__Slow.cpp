// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdone.h for the primary calling header

#include "verilated.h"

#include "Vdone___024root.h"

VL_ATTR_COLD void Vdone___024root___initial__TOP__0(Vdone___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdone__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdone___024root___initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ done__DOT__unnamedblk1__DOT__a;
    // Body
    done__DOT__unnamedblk1__DOT__a = 0U;
    while (VL_GTS_III(32, 0xaU, done__DOT__unnamedblk1__DOT__a)) {
        VL_WRITEF("%11d\n",32,done__DOT__unnamedblk1__DOT__a);
        VL_FINISH_MT("done.sv", 6, "");
    }
}

VL_ATTR_COLD void Vdone___024root___eval_initial(Vdone___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdone__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdone___024root___eval_initial\n"); );
    // Body
    Vdone___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdone___024root___eval_settle(Vdone___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdone__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdone___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vdone___024root___final(Vdone___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdone__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdone___024root___final\n"); );
}

VL_ATTR_COLD void Vdone___024root___ctor_var_reset(Vdone___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdone__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdone___024root___ctor_var_reset\n"); );
}

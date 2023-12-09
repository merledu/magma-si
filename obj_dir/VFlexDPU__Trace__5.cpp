// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFlexDPU__Syms.h"


void VFlexDPU::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFlexDPU__Syms* __restrict vlSymsp = static_cast<VFlexDPU__Syms*>(userp);
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}

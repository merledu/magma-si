// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFlexDPUby2__Syms.h"
#include "VFlexDPUby2.h"



// FUNCTIONS
VFlexDPUby2__Syms::VFlexDPUby2__Syms(VFlexDPUby2* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}

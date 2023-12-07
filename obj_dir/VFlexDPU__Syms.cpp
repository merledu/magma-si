// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFlexDPU__Syms.h"
#include "VFlexDPU.h"
#include "VFlexDPU_PathFinder.h"



// FUNCTIONS
VFlexDPU__Syms::VFlexDPU__Syms(VFlexDPU* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__FlexDPU__DOT__PathFinder(Verilated::catName(topp->name(), "FlexDPU.PathFinder"))
    , TOP__FlexDPU__DOT__PathFinder_1(Verilated::catName(topp->name(), "FlexDPU.PathFinder_1"))
    , TOP__FlexDPU__DOT__PathFinder_2(Verilated::catName(topp->name(), "FlexDPU.PathFinder_2"))
    , TOP__FlexDPU__DOT__PathFinder_3(Verilated::catName(topp->name(), "FlexDPU.PathFinder_3"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__FlexDPU__DOT__PathFinder = &TOP__FlexDPU__DOT__PathFinder;
    TOPp->__PVT__FlexDPU__DOT__PathFinder_1 = &TOP__FlexDPU__DOT__PathFinder_1;
    TOPp->__PVT__FlexDPU__DOT__PathFinder_2 = &TOP__FlexDPU__DOT__PathFinder_2;
    TOPp->__PVT__FlexDPU__DOT__PathFinder_3 = &TOP__FlexDPU__DOT__PathFinder_3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__FlexDPU__DOT__PathFinder.__Vconfigure(this, true);
    TOP__FlexDPU__DOT__PathFinder_1.__Vconfigure(this, false);
    TOP__FlexDPU__DOT__PathFinder_2.__Vconfigure(this, false);
    TOP__FlexDPU__DOT__PathFinder_3.__Vconfigure(this, false);
}

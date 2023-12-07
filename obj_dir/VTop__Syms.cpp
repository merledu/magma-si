// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTop__Syms.h"
#include "VTop.h"
#include "VTop_PathFinder.h"



// FUNCTIONS
VTop__Syms::VTop__Syms(VTop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__Top__DOT__FDPU__DOT__PathFinder(Verilated::catName(topp->name(), "Top.FDPU.PathFinder"))
    , TOP__Top__DOT__FDPU__DOT__PathFinder_1(Verilated::catName(topp->name(), "Top.FDPU.PathFinder_1"))
    , TOP__Top__DOT__FDPU__DOT__PathFinder_2(Verilated::catName(topp->name(), "Top.FDPU.PathFinder_2"))
    , TOP__Top__DOT__FDPU__DOT__PathFinder_3(Verilated::catName(topp->name(), "Top.FDPU.PathFinder_3"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__Top__DOT__FDPU__DOT__PathFinder = &TOP__Top__DOT__FDPU__DOT__PathFinder;
    TOPp->__PVT__Top__DOT__FDPU__DOT__PathFinder_1 = &TOP__Top__DOT__FDPU__DOT__PathFinder_1;
    TOPp->__PVT__Top__DOT__FDPU__DOT__PathFinder_2 = &TOP__Top__DOT__FDPU__DOT__PathFinder_2;
    TOPp->__PVT__Top__DOT__FDPU__DOT__PathFinder_3 = &TOP__Top__DOT__FDPU__DOT__PathFinder_3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Top__DOT__FDPU__DOT__PathFinder.__Vconfigure(this, true);
    TOP__Top__DOT__FDPU__DOT__PathFinder_1.__Vconfigure(this, false);
    TOP__Top__DOT__FDPU__DOT__PathFinder_2.__Vconfigure(this, false);
    TOP__Top__DOT__FDPU__DOT__PathFinder_3.__Vconfigure(this, false);
}

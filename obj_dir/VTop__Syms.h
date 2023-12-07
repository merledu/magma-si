// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTOP__SYMS_H_
#define _VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VTop.h"
#include "VTop_PathFinder.h"

// SYMS CLASS
class VTop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTop*                          TOPp;
    VTop_PathFinder                TOP__Top__DOT__FDPU__DOT__PathFinder;
    VTop_PathFinder                TOP__Top__DOT__FDPU__DOT__PathFinder_1;
    VTop_PathFinder                TOP__Top__DOT__FDPU__DOT__PathFinder_2;
    VTop_PathFinder                TOP__Top__DOT__FDPU__DOT__PathFinder_3;
    
    // CREATORS
    VTop__Syms(VTop* topp, const char* namep);
    ~VTop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

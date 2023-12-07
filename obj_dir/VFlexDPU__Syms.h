// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VFLEXDPU__SYMS_H_
#define _VFLEXDPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VFlexDPU.h"
#include "VFlexDPU_PathFinder.h"

// SYMS CLASS
class VFlexDPU__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VFlexDPU*                      TOPp;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_1;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_2;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_3;
    
    // CREATORS
    VFlexDPU__Syms(VFlexDPU* topp, const char* namep);
    ~VFlexDPU__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

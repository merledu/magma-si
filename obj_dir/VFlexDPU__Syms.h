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
#include "VFlexDPU_flexdpecom4.h"

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
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_10;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_11;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_12;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_13;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_14;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_15;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_2;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_3;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_4;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_5;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_6;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_7;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_8;
    VFlexDPU_PathFinder            TOP__FlexDPU__DOT__PathFinder_9;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_1;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_10;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_11;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_12;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_13;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_14;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_15;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_2;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_3;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_4;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_5;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_6;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_7;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_8;
    VFlexDPU_flexdpecom4           TOP__FlexDPU__DOT__flexdpecom4_9;
    
    // CREATORS
    VFlexDPU__Syms(VFlexDPU* topp, const char* namep);
    ~VFlexDPU__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

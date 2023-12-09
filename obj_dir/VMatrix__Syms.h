// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMATRIX__SYMS_H_
#define _VMATRIX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMatrix.h"
#include "VMatrix_PathFinder.h"
#include "VMatrix_flexdpecom4.h"
#include "VMatrix_stationary.h"

// SYMS CLASS
class VMatrix__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMatrix*                       TOPp;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_1;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_10;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_11;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_12;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_13;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_14;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_15;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_2;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_3;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_4;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_5;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_6;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_7;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_8;
    VMatrix_PathFinder             TOP__Matrix__DOT__FDPU__DOT__PathFinder_9;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_10;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_11;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_12;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_13;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_14;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_15;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_3;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_4;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_5;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_6;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_7;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_8;
    VMatrix_flexdpecom4            TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_9;
    VMatrix_stationary             TOP__Matrix__DOT__FDPU__DOT__ivntop__DOT__my_stationary;
    VMatrix_stationary             TOP__Matrix__DOT__ivntop__DOT__my_stationary;
    
    // CREATORS
    VMatrix__Syms(VMatrix* topp, const char* namep);
    ~VMatrix__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFlexDPU.h for the primary calling header

#ifndef _VFLEXDPU_BENES_H_
#define _VFLEXDPU_BENES_H_  // guard

#include "verilated.h"

//==========

class VFlexDPU__Syms;
class VFlexDPU_VerilatedVcd;


//----------

VL_MODULE(VFlexDPU_Benes) {
  public:
    
    // PORTS
    VL_IN8(io_i_mux_bus_0,3,0);
    VL_IN8(io_i_mux_bus_1,3,0);
    VL_IN8(io_i_mux_bus_2,3,0);
    VL_IN8(io_i_mux_bus_3,3,0);
    VL_IN16(io_i_data_bus2_0,15,0);
    VL_IN16(io_i_data_bus2_1,15,0);
    VL_IN16(io_i_data_bus2_2,15,0);
    VL_IN16(io_i_data_bus2_3,15,0);
    VL_IN16(io_i_data_bus1_0,15,0);
    VL_IN16(io_i_data_bus1_1,15,0);
    VL_IN16(io_i_data_bus1_2,15,0);
    VL_IN16(io_i_data_bus1_3,15,0);
    VL_OUT16(io_o_dist_bus1_0,15,0);
    VL_OUT16(io_o_dist_bus1_1,15,0);
    VL_OUT16(io_o_dist_bus1_2,15,0);
    VL_OUT16(io_o_dist_bus1_3,15,0);
    VL_OUT16(io_o_dist_bus2_0,15,0);
    VL_OUT16(io_o_dist_bus2_1,15,0);
    VL_OUT16(io_o_dist_bus2_2,15,0);
    VL_OUT16(io_o_dist_bus2_3,15,0);
    
    // LOCAL SIGNALS
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_1;
    CData/*1:0*/ __PVT__parsedindexvalue;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_2;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_3;
    CData/*1:0*/ __PVT__parsedindexvalue_1;
    CData/*1:0*/ __PVT___parsedindexvalue_nextIndex_T_191;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_4;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_5;
    CData/*1:0*/ __PVT__parsedindexvalue_2;
    CData/*1:0*/ __PVT___parsedindexvalue_nextIndex_T_269;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_6;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_7;
    CData/*1:0*/ __PVT__parsedindexvalue_3;
    CData/*1:0*/ __PVT___parsedindexvalue_nextIndex_T_347;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_8;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_9;
    CData/*1:0*/ __PVT__parsedindexvalue_4;
    CData/*1:0*/ __PVT___parsedindexvalue_nextIndex_T_425;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_10;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_11;
    CData/*1:0*/ __PVT__parsedindexvalue_5;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_12;
    CData/*1:0*/ __PVT__parsedindexvalue_nextIndex_13;
    CData/*1:0*/ __PVT__parsedindexvalue_6;
    SData/*15:0*/ __PVT___GEN_21;
    SData/*15:0*/ __PVT___GEN_22;
    SData/*15:0*/ __PVT___GEN_23;
    SData/*15:0*/ __PVT___GEN_24;
    SData/*15:0*/ __PVT___GEN_47;
    SData/*15:0*/ __PVT___GEN_48;
    SData/*15:0*/ __PVT___GEN_49;
    SData/*15:0*/ __PVT___GEN_50;
    SData/*15:0*/ __PVT___GEN_73;
    SData/*15:0*/ __PVT___GEN_74;
    SData/*15:0*/ __PVT___GEN_75;
    SData/*15:0*/ __PVT___GEN_76;
    
    // INTERNAL VARIABLES
  private:
    VFlexDPU__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFlexDPU_Benes);  ///< Copying not allowed
  public:
    VFlexDPU_Benes(const char* name = "TOP");
    ~VFlexDPU_Benes();
    
    // INTERNAL METHODS
    void __Vconfigure(VFlexDPU__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes__2(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes__3(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes__4(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes__1(VFlexDPU__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

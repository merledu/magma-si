// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFlexDPU.h for the primary calling header

#ifndef _VFLEXDPU_FLEXDPECOM4_H_
#define _VFLEXDPU_FLEXDPECOM4_H_  // guard

#include "verilated.h"

//==========

class VFlexDPU__Syms;
class VFlexDPU_VerilatedVcd;


//----------

VL_MODULE(VFlexDPU_flexdpecom4) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_i_data_valid,0,0);
    VL_IN8(io_i_vn_0,4,0);
    VL_IN8(io_i_vn_1,4,0);
    VL_IN8(io_i_vn_2,4,0);
    VL_IN8(io_i_vn_3,4,0);
    VL_IN8(io_i_mux_bus_0_0,3,0);
    VL_IN8(io_i_mux_bus_0_1,3,0);
    VL_IN8(io_i_mux_bus_0_2,3,0);
    VL_IN8(io_i_mux_bus_0_3,3,0);
    VL_IN8(io_i_mux_bus_1_0,3,0);
    VL_IN8(io_i_mux_bus_1_1,3,0);
    VL_IN8(io_i_mux_bus_1_2,3,0);
    VL_IN8(io_i_mux_bus_2_0,3,0);
    VL_IN8(io_i_mux_bus_2_1,3,0);
    VL_IN8(io_i_mux_bus_3_0,3,0);
    VL_IN16(io_i_data_bus_0,15,0);
    VL_IN16(io_i_data_bus_1,15,0);
    VL_IN16(io_i_data_bus_2,15,0);
    VL_IN16(io_i_data_bus_3,15,0);
    VL_IN16(io_i_data_bus2_0,15,0);
    VL_IN16(io_i_data_bus2_1,15,0);
    VL_IN16(io_i_data_bus2_2,15,0);
    VL_IN16(io_i_data_bus2_3,15,0);
    VL_OUT16(io_o_adder_0,15,0);
    VL_OUT16(io_o_adder_1,15,0);
    VL_OUT16(io_o_adder_2,15,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__my_controller__DOT__r_reduction_add_0;
        CData/*0:0*/ __PVT__my_controller__DOT__r_reduction_add_1;
        CData/*0:0*/ __PVT__my_controller__DOT__r_reduction_add_2;
        CData/*2:0*/ __PVT__my_controller__DOT__r_reduction_cmd_0;
        CData/*2:0*/ __PVT__my_controller__DOT__r_reduction_cmd_1;
        CData/*2:0*/ __PVT__my_controller__DOT__r_reduction_cmd_2;
        CData/*0:0*/ __PVT__my_controller__DOT__r_add_lvl_0Reg_6;
        CData/*0:0*/ __PVT__my_controller__DOT__r_add_lvl_0Reg_7;
        CData/*0:0*/ __PVT__my_controller__DOT__r_add_lvl_1Reg_4;
        CData/*2:0*/ __PVT__my_controller__DOT__r_cmd_lvl_0Reg_6;
        CData/*2:0*/ __PVT__my_controller__DOT__r_cmd_lvl_0Reg_7;
        CData/*2:0*/ __PVT__my_controller__DOT__r_cmd_lvl_1Reg_4;
        CData/*4:0*/ __PVT__my_controller__DOT__w_vn_0;
        CData/*4:0*/ __PVT__my_controller__DOT__w_vn_1;
        CData/*4:0*/ __PVT__my_controller__DOT__w_vn_2;
        CData/*4:0*/ __PVT__my_controller__DOT__w_vn_3;
        CData/*0:0*/ __PVT__my_controller__DOT__r_valid_0;
        CData/*0:0*/ __PVT__my_controller__DOT__r_valid_1;
        CData/*0:0*/ __PVT__my_controller__DOT__r_valid_2;
        CData/*0:0*/ __PVT__my_controller__DOT__r_valid_3;
        CData/*0:0*/ __PVT__my_controller__DOT___T_32;
        CData/*0:0*/ __PVT__my_controller__DOT___T_143;
        CData/*0:0*/ __PVT__my_controller__DOT___T_258;
        CData/*0:0*/ __PVT__my_controller__DOT___T_268;
        CData/*0:0*/ __PVT__my_controller__DOT___T_278;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue;
        CData/*0:0*/ __PVT__my_Benes__DOT___T_13;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_1;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2;
        CData/*0:0*/ __PVT__my_Benes__DOT___T_25;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex_1;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue3;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue4_nextIndex;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue4_nextIndex_1;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue4;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_2;
        CData/*0:0*/ __PVT__my_Benes__DOT___T_83;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_8;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_9;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_4;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex_6;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex_7;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue3_3;
        CData/*1:0*/ __PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_4;
        CData/*1:0*/ __PVT__my_Benes__DOT___parsedindexvalue2_nextIndex_T_659;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_16;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_17;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue2_8;
        CData/*1:0*/ __PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_503;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_6;
        CData/*0:0*/ __PVT__my_fan_network__DOT__r_valid_0;
        CData/*0:0*/ __PVT__my_fan_network__DOT__r_valid_1;
        CData/*0:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT__r_valid;
    };
    struct {
        CData/*2:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT__r_add_en;
        CData/*0:0*/ __PVT__my_fan_network__DOT__my_adder_1__DOT__r_valid;
        CData/*2:0*/ __PVT__my_fan_network__DOT__my_adder_1__DOT__r_add_en;
        CData/*0:0*/ __PVT__my_fan_network__DOT__my_adder_2__DOT__r_valid;
        CData/*2:0*/ __PVT__my_fan_network__DOT__my_adder_2__DOT__r_add_en;
        SData/*14:0*/ __PVT__r_mult_0;
        SData/*14:0*/ __PVT__r_mult_1;
        SData/*14:0*/ __PVT__r_mult_2;
        SData/*14:0*/ __PVT__r_mult_3;
        SData/*15:0*/ __PVT__matrix_0_0;
        SData/*15:0*/ __PVT__matrix_0_1;
        SData/*15:0*/ __PVT__matrix_0_2;
        SData/*15:0*/ __PVT__matrix_0_3;
        SData/*15:0*/ __PVT__matrix_0_4;
        SData/*15:0*/ __PVT__matrix_0_5;
        SData/*15:0*/ __PVT__matrix_0_6;
        SData/*15:0*/ __PVT__matrix_0_7;
        SData/*15:0*/ __PVT__matrix_1_0;
        SData/*15:0*/ __PVT__matrix_1_1;
        SData/*15:0*/ __PVT__matrix_1_2;
        SData/*15:0*/ __PVT__matrix_1_3;
        SData/*15:0*/ __PVT__matrix_1_4;
        SData/*15:0*/ __PVT__matrix_1_5;
        SData/*15:0*/ __PVT__matrix_1_6;
        SData/*15:0*/ __PVT__matrix_1_7;
        SData/*15:0*/ __PVT__matrix_2_0;
        SData/*15:0*/ __PVT__matrix_2_1;
        SData/*15:0*/ __PVT__matrix_2_2;
        SData/*15:0*/ __PVT__matrix_2_3;
        SData/*15:0*/ __PVT__matrix_2_4;
        SData/*15:0*/ __PVT__matrix_2_5;
        SData/*15:0*/ __PVT__matrix_2_6;
        SData/*15:0*/ __PVT__matrix_2_7;
        SData/*15:0*/ __PVT__matrix_3_0;
        SData/*15:0*/ __PVT__matrix_3_1;
        SData/*15:0*/ __PVT__matrix_3_2;
        SData/*15:0*/ __PVT__matrix_3_3;
        SData/*15:0*/ __PVT__matrix_3_4;
        SData/*15:0*/ __PVT__matrix_3_5;
        SData/*15:0*/ __PVT__matrix_3_6;
        SData/*15:0*/ __PVT__matrix_3_7;
        SData/*15:0*/ __PVT__matrix_4_0;
        SData/*15:0*/ __PVT__matrix_4_1;
        SData/*15:0*/ __PVT__matrix_4_2;
        SData/*15:0*/ __PVT__matrix_4_3;
        SData/*15:0*/ __PVT__matrix_4_4;
        SData/*15:0*/ __PVT__matrix_4_5;
        SData/*15:0*/ __PVT__matrix_4_6;
        SData/*15:0*/ __PVT__matrix_4_7;
        SData/*15:0*/ __PVT__matrix_5_0;
        SData/*15:0*/ __PVT__matrix_5_1;
        SData/*15:0*/ __PVT__matrix_5_2;
        SData/*15:0*/ __PVT__matrix_5_3;
        SData/*15:0*/ __PVT__matrix_5_4;
        SData/*15:0*/ __PVT__matrix_5_5;
        SData/*15:0*/ __PVT__matrix_5_6;
        SData/*15:0*/ __PVT__matrix_5_7;
        SData/*15:0*/ __PVT__matrix_6_0;
        SData/*15:0*/ __PVT__matrix_6_1;
        SData/*15:0*/ __PVT__matrix_6_2;
        SData/*15:0*/ __PVT__matrix_6_3;
        SData/*15:0*/ __PVT__matrix_6_4;
        SData/*15:0*/ __PVT__matrix_6_5;
        SData/*15:0*/ __PVT__matrix_6_6;
    };
    struct {
        SData/*15:0*/ __PVT__matrix_6_7;
        SData/*15:0*/ __PVT__matrix_7_0;
        SData/*15:0*/ __PVT__matrix_7_1;
        SData/*15:0*/ __PVT__matrix_7_2;
        SData/*15:0*/ __PVT__matrix_7_3;
        SData/*15:0*/ __PVT__matrix_7_4;
        SData/*15:0*/ __PVT__matrix_7_5;
        SData/*15:0*/ __PVT__matrix_7_6;
        SData/*15:0*/ __PVT__matrix_7_7;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_5;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_6;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_7;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_8;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_15;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_16;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_17;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_18;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_30;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_31;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_32;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_33;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_50;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_51;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_52;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_53;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_75;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_76;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_77;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_78;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_105;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_106;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_107;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_108;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_115;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_116;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_117;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_118;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_125;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_126;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_127;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_128;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_140;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_141;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_142;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_143;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_215;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_216;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_217;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_218;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_225;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_226;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_227;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_228;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_235;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_236;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_237;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_238;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_325;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_326;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_327;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_328;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_335;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_336;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_337;
    };
    struct {
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_338;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_0_io_o_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_2_io_o_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT__r_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT___GEN_3;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_2__DOT__r_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_2__DOT___GEN_3;
    };
    
    // INTERNAL VARIABLES
  private:
    VFlexDPU__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFlexDPU_flexdpecom4);  ///< Copying not allowed
  public:
    VFlexDPU_flexdpecom4(const char* name = "TOP");
    ~VFlexDPU_flexdpecom4();
    
    // INTERNAL METHODS
    void __Vconfigure(VFlexDPU__Syms* symsp, bool first);
    void _combo__TOP__FlexDPU__DOT__flexdpecom4__65(VFlexDPU__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_10__11(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_10__27(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_11__12(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_11__28(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_12__13(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_12__29(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_13__14(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_13__30(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_14__15(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_14__31(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_15__16(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_15__32(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_1__18(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_1__2(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_2__19(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_2__3(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_3__20(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_3__4(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_4__21(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_4__5(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_5__22(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_5__6(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_6__23(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_6__7(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_7__24(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_7__8(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_8__25(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_8__9(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_9__10(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4_9__26(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4__1(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__flexdpecom4__17(VFlexDPU__Syms* __restrict vlSymsp);
    void _settle__TOP__FlexDPU__DOT__flexdpecom4__33(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

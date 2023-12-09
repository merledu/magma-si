// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMatrix.h for the primary calling header

#ifndef _VMATRIX_FLEXDPECOM4_H_
#define _VMATRIX_FLEXDPECOM4_H_  // guard

#include "verilated.h"

//==========

class VMatrix__Syms;
class VMatrix_VerilatedVcd;


//----------

VL_MODULE(VMatrix_flexdpecom4) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_i_data_valid,0,0);
    VL_IN8(io_i_vn_0,4,0);
    VL_IN8(io_i_vn_1,4,0);
    VL_IN8(io_i_vn_2,4,0);
    VL_IN8(io_i_vn_3,4,0);
    VL_IN8(io_i_mux_bus_0,3,0);
    VL_IN8(io_i_mux_bus_1,3,0);
    VL_IN8(io_i_mux_bus_2,3,0);
    VL_IN8(io_i_mux_bus_3,3,0);
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
        CData/*1:0*/ __PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_2;
        CData/*1:0*/ __PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_4;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13;
        CData/*1:0*/ __PVT__my_Benes__DOT__parsedindexvalue_6;
        CData/*0:0*/ __PVT__my_fan_network__DOT__r_valid_0;
        CData/*0:0*/ __PVT__my_fan_network__DOT__r_valid_1;
        CData/*0:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT__r_valid;
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
    };
    struct {
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
        SData/*15:0*/ __PVT__matrix_6_7;
        SData/*15:0*/ __PVT__matrix_7_0;
        SData/*15:0*/ __PVT__matrix_7_1;
        SData/*15:0*/ __PVT__matrix_7_2;
        SData/*15:0*/ __PVT__matrix_7_3;
        SData/*15:0*/ __PVT__matrix_7_4;
        SData/*15:0*/ __PVT__matrix_7_5;
        SData/*15:0*/ __PVT__matrix_7_6;
        SData/*15:0*/ __PVT__matrix_7_7;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_16;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_17;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_19;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_42;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_43;
        SData/*15:0*/ __PVT__my_Benes__DOT___GEN_44;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_0_io_o_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_2_io_o_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT__r_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_0__DOT___GEN_3;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3;
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_2__DOT__r_adder;
    };
    struct {
        IData/*31:0*/ __PVT__my_fan_network__DOT__my_adder_2__DOT___GEN_3;
    };
    
    // INTERNAL VARIABLES
  private:
    VMatrix__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMatrix_flexdpecom4);  ///< Copying not allowed
  public:
    VMatrix_flexdpecom4(const char* name = "TOP");
    ~VMatrix_flexdpecom4();
    
    // INTERNAL METHODS
    void __Vconfigure(VMatrix__Syms* symsp, bool first);
    void _combo__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2__51(VMatrix__Syms* __restrict vlSymsp);
    void _combo__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__65(VMatrix__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_10__11(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_10__29(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_11__12(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_11__30(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_12__13(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_12__31(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_13__14(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_13__32(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_14__15(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_14__33(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_15__16(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_15__34(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1__18(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1__2(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1__20(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2__21(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2__3(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_3__22(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_3__4(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_4__23(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_4__5(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_5__24(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_5__6(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_6__25(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_6__7(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_7__26(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_7__8(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_8__27(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_8__9(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_9__10(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_9__28(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__1(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__17(VMatrix__Syms* __restrict vlSymsp);
    void _sequent__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__19(VMatrix__Syms* __restrict vlSymsp);
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_10__45(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_11__46(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_12__47(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_13__48(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_14__49(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_15__50(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1__36(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2__37(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_3__38(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_4__39(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_5__40(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_6__41(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_7__42(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_8__43(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_9__44(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__35(VMatrix__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

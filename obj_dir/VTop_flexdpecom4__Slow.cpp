// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop_flexdpecom4.h"
#include "VTop__Syms.h"

//==========

VL_CTOR_IMP(VTop_flexdpecom4) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VTop_flexdpecom4::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VTop_flexdpecom4::~VTop_flexdpecom4() {
}

void VTop_flexdpecom4::_settle__TOP__Top__DOT__FDPU__DOT__flexdpecom4__33(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_flexdpecom4::_settle__TOP__Top__DOT__FDPU__DOT__flexdpecom4__33\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_0Reg_6))
            ? (IData)((QData)((IData)(this->__PVT__r_mult_1)))
            : this->__PVT__my_fan_network__DOT__my_adder_0__DOT__r_adder);
    this->__PVT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_0Reg_7))
            ? (IData)((QData)((IData)(this->__PVT__r_mult_3)))
            : this->__PVT__my_fan_network__DOT__my_adder_2__DOT__r_adder);
    if (vlTOPp->reset) {
        this->__PVT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
        this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
    } else {
        this->__PVT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(this->__PVT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? this->__PVT__my_fan_network__DOT__my_adder_0__DOT__r_adder
                : ((IData)((QData)((IData)(this->__PVT__r_mult_0))) 
                   + (IData)((QData)((IData)(this->__PVT__r_mult_1)))));
        this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(this->__PVT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? this->__PVT__my_fan_network__DOT__my_adder_2__DOT__r_adder
                : ((IData)((QData)((IData)(this->__PVT__r_mult_2))) 
                   + (IData)((QData)((IData)(this->__PVT__r_mult_3)))));
    }
    this->__PVT__my_controller__DOT___T_32 = ((IData)(this->__PVT__my_controller__DOT__w_vn_0) 
                                              != (IData)(this->__PVT__my_controller__DOT__w_vn_1));
    this->__PVT__my_controller__DOT___T_143 = ((IData)(this->__PVT__my_controller__DOT__w_vn_2) 
                                               != (IData)(this->__PVT__my_controller__DOT__w_vn_3));
    this->__PVT__my_controller__DOT___T_258 = ((IData)(this->__PVT__my_controller__DOT__w_vn_2) 
                                               == (IData)(this->__PVT__my_controller__DOT__w_vn_3));
    this->__PVT__my_controller__DOT___T_268 = ((IData)(this->__PVT__my_controller__DOT__w_vn_0) 
                                               != (IData)(this->__PVT__my_controller__DOT__w_vn_3));
    this->__PVT__my_controller__DOT___T_278 = ((IData)(this->__PVT__my_controller__DOT__w_vn_1) 
                                               != (IData)(this->__PVT__my_controller__DOT__w_vn_2));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
}

void VTop_flexdpecom4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_flexdpecom4::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_i_data_valid = VL_RAND_RESET_I(1);
    io_i_data_bus_0 = VL_RAND_RESET_I(16);
    io_i_data_bus_1 = VL_RAND_RESET_I(16);
    io_i_data_bus_2 = VL_RAND_RESET_I(16);
    io_i_data_bus_3 = VL_RAND_RESET_I(16);
    io_i_data_bus2_0 = VL_RAND_RESET_I(16);
    io_i_data_bus2_1 = VL_RAND_RESET_I(16);
    io_i_data_bus2_2 = VL_RAND_RESET_I(16);
    io_i_data_bus2_3 = VL_RAND_RESET_I(16);
    io_i_vn_0 = VL_RAND_RESET_I(5);
    io_i_vn_1 = VL_RAND_RESET_I(5);
    io_i_vn_2 = VL_RAND_RESET_I(5);
    io_i_vn_3 = VL_RAND_RESET_I(5);
    io_o_adder_0 = VL_RAND_RESET_I(16);
    io_o_adder_1 = VL_RAND_RESET_I(16);
    io_o_adder_2 = VL_RAND_RESET_I(16);
    io_i_mux_bus_0_0 = VL_RAND_RESET_I(4);
    io_i_mux_bus_0_1 = VL_RAND_RESET_I(4);
    io_i_mux_bus_0_2 = VL_RAND_RESET_I(4);
    io_i_mux_bus_0_3 = VL_RAND_RESET_I(4);
    io_i_mux_bus_1_0 = VL_RAND_RESET_I(4);
    io_i_mux_bus_1_1 = VL_RAND_RESET_I(4);
    io_i_mux_bus_1_2 = VL_RAND_RESET_I(4);
    io_i_mux_bus_2_0 = VL_RAND_RESET_I(4);
    io_i_mux_bus_2_1 = VL_RAND_RESET_I(4);
    io_i_mux_bus_3_0 = VL_RAND_RESET_I(4);
    __PVT__r_mult_0 = VL_RAND_RESET_I(15);
    __PVT__r_mult_1 = VL_RAND_RESET_I(15);
    __PVT__r_mult_2 = VL_RAND_RESET_I(15);
    __PVT__r_mult_3 = VL_RAND_RESET_I(15);
    __PVT__matrix_0_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_0_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_1_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_2_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_3_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_4_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_5_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_6_7 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_0 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_1 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_2 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_3 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_4 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_5 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_6 = VL_RAND_RESET_I(16);
    __PVT__matrix_7_7 = VL_RAND_RESET_I(16);
    __PVT__my_controller__DOT__r_reduction_add_0 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_reduction_add_1 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_reduction_add_2 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_reduction_cmd_0 = VL_RAND_RESET_I(3);
    __PVT__my_controller__DOT__r_reduction_cmd_1 = VL_RAND_RESET_I(3);
    __PVT__my_controller__DOT__r_reduction_cmd_2 = VL_RAND_RESET_I(3);
    __PVT__my_controller__DOT__r_add_lvl_0Reg_6 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_add_lvl_0Reg_7 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_add_lvl_1Reg_4 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_cmd_lvl_0Reg_6 = VL_RAND_RESET_I(3);
    __PVT__my_controller__DOT__r_cmd_lvl_0Reg_7 = VL_RAND_RESET_I(3);
    __PVT__my_controller__DOT__r_cmd_lvl_1Reg_4 = VL_RAND_RESET_I(3);
    __PVT__my_controller__DOT__w_vn_0 = VL_RAND_RESET_I(5);
    __PVT__my_controller__DOT__w_vn_1 = VL_RAND_RESET_I(5);
    __PVT__my_controller__DOT__w_vn_2 = VL_RAND_RESET_I(5);
    __PVT__my_controller__DOT__w_vn_3 = VL_RAND_RESET_I(5);
    __PVT__my_controller__DOT__r_valid_0 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_valid_1 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_valid_2 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT__r_valid_3 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT___T_32 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT___T_143 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT___T_258 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT___T_268 = VL_RAND_RESET_I(1);
    __PVT__my_controller__DOT___T_278 = VL_RAND_RESET_I(1);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_5 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_6 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_7 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_8 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_15 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_16 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_17 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_18 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___T_13 = VL_RAND_RESET_I(1);
    __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_1 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_30 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_31 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_32 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_33 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___T_25 = VL_RAND_RESET_I(1);
    __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex_1 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue3 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_50 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_51 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_52 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_53 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT__parsedindexvalue4_nextIndex = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue4_nextIndex_1 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue4 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_75 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_76 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_77 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_78 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_105 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_106 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_107 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_108 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_2 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_115 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_116 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_117 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_118 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_125 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_126 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_127 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_128 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___T_83 = VL_RAND_RESET_I(1);
    __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_8 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_9 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2_4 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_140 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_141 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_142 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_143 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex_6 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue3_nextIndex_7 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue3_3 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_215 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_216 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_217 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_218 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_4 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_225 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_226 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_227 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_228 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_235 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_236 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_237 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_238 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___parsedindexvalue2_nextIndex_T_659 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_16 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2_nextIndex_17 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue2_8 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_325 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_326 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_327 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_328 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_503 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT__parsedindexvalue_6 = VL_RAND_RESET_I(2);
    __PVT__my_Benes__DOT___GEN_335 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_336 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_337 = VL_RAND_RESET_I(16);
    __PVT__my_Benes__DOT___GEN_338 = VL_RAND_RESET_I(16);
    __PVT__my_fan_network__DOT__my_adder_0_io_o_adder = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__my_adder_2_io_o_adder = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__r_valid_0 = VL_RAND_RESET_I(1);
    __PVT__my_fan_network__DOT__r_valid_1 = VL_RAND_RESET_I(1);
    __PVT__my_fan_network__DOT__my_adder_0__DOT__r_valid = VL_RAND_RESET_I(1);
    __PVT__my_fan_network__DOT__my_adder_0__DOT__r_adder = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = VL_RAND_RESET_I(3);
    __PVT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__my_adder_1__DOT__r_valid = VL_RAND_RESET_I(1);
    __PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__my_adder_1__DOT__r_add_en = VL_RAND_RESET_I(3);
    __PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__my_adder_2__DOT__r_valid = VL_RAND_RESET_I(1);
    __PVT__my_fan_network__DOT__my_adder_2__DOT__r_adder = VL_RAND_RESET_I(32);
    __PVT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = VL_RAND_RESET_I(3);
    __PVT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 = VL_RAND_RESET_I(32);
}

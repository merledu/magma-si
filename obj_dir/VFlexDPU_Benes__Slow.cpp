// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFlexDPU.h for the primary calling header

#include "VFlexDPU_Benes.h"
#include "VFlexDPU__Syms.h"

//==========

VL_CTOR_IMP(VFlexDPU_Benes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VFlexDPU_Benes::__Vconfigure(VFlexDPU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VFlexDPU_Benes::~VFlexDPU_Benes() {
}

void VFlexDPU_Benes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFlexDPU_Benes::_ctor_var_reset\n"); );
    // Body
    io_i_data_bus2_0 = VL_RAND_RESET_I(16);
    io_i_data_bus2_1 = VL_RAND_RESET_I(16);
    io_i_data_bus2_2 = VL_RAND_RESET_I(16);
    io_i_data_bus2_3 = VL_RAND_RESET_I(16);
    io_i_data_bus1_0 = VL_RAND_RESET_I(16);
    io_i_data_bus1_1 = VL_RAND_RESET_I(16);
    io_i_data_bus1_2 = VL_RAND_RESET_I(16);
    io_i_data_bus1_3 = VL_RAND_RESET_I(16);
    io_i_mux_bus_0 = VL_RAND_RESET_I(4);
    io_i_mux_bus_1 = VL_RAND_RESET_I(4);
    io_i_mux_bus_2 = VL_RAND_RESET_I(4);
    io_i_mux_bus_3 = VL_RAND_RESET_I(4);
    io_o_dist_bus1_0 = VL_RAND_RESET_I(16);
    io_o_dist_bus1_1 = VL_RAND_RESET_I(16);
    io_o_dist_bus1_2 = VL_RAND_RESET_I(16);
    io_o_dist_bus1_3 = VL_RAND_RESET_I(16);
    io_o_dist_bus2_0 = VL_RAND_RESET_I(16);
    io_o_dist_bus2_1 = VL_RAND_RESET_I(16);
    io_o_dist_bus2_2 = VL_RAND_RESET_I(16);
    io_o_dist_bus2_3 = VL_RAND_RESET_I(16);
    __PVT__parsedindexvalue_nextIndex = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_1 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_2 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_3 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_1 = VL_RAND_RESET_I(2);
    __PVT___GEN_21 = VL_RAND_RESET_I(16);
    __PVT___GEN_22 = VL_RAND_RESET_I(16);
    __PVT___GEN_23 = VL_RAND_RESET_I(16);
    __PVT___GEN_24 = VL_RAND_RESET_I(16);
    __PVT___parsedindexvalue_nextIndex_T_191 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_4 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_5 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_2 = VL_RAND_RESET_I(2);
    __PVT___parsedindexvalue_nextIndex_T_269 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_6 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_7 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_3 = VL_RAND_RESET_I(2);
    __PVT___GEN_47 = VL_RAND_RESET_I(16);
    __PVT___GEN_48 = VL_RAND_RESET_I(16);
    __PVT___GEN_49 = VL_RAND_RESET_I(16);
    __PVT___GEN_50 = VL_RAND_RESET_I(16);
    __PVT___parsedindexvalue_nextIndex_T_347 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_8 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_9 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_4 = VL_RAND_RESET_I(2);
    __PVT___parsedindexvalue_nextIndex_T_425 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_10 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_11 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_5 = VL_RAND_RESET_I(2);
    __PVT___GEN_73 = VL_RAND_RESET_I(16);
    __PVT___GEN_74 = VL_RAND_RESET_I(16);
    __PVT___GEN_75 = VL_RAND_RESET_I(16);
    __PVT___GEN_76 = VL_RAND_RESET_I(16);
    __PVT__parsedindexvalue_nextIndex_12 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_nextIndex_13 = VL_RAND_RESET_I(2);
    __PVT__parsedindexvalue_6 = VL_RAND_RESET_I(2);
}

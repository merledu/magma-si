// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFlexDPU.h for the primary calling header

#include "VFlexDPU.h"
#include "VFlexDPU__Syms.h"

//==========

VL_CTOR_IMP(VFlexDPU) {
    VFlexDPU__Syms* __restrict vlSymsp = __VlSymsp = new VFlexDPU__Syms(this, name());
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__FlexDPU__DOT__PathFinder, VFlexDPU_PathFinder);
    VL_CELL(__PVT__FlexDPU__DOT__PathFinder_1, VFlexDPU_PathFinder);
    VL_CELL(__PVT__FlexDPU__DOT__PathFinder_2, VFlexDPU_PathFinder);
    VL_CELL(__PVT__FlexDPU__DOT__PathFinder_3, VFlexDPU_PathFinder);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFlexDPU::__Vconfigure(VFlexDPU__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VFlexDPU::~VFlexDPU() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VFlexDPU::_settle__TOP__3(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_settle__TOP__3\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FlexDPU__DOT___ModuleIndex_T_1 = ((IData)(1U) 
                                              + vlTOPp->FlexDPU__DOT__ModuleIndex);
    if ((3U == (3U & vlTOPp->FlexDPU__DOT__ModuleIndex))) {
        vlTOPp->FlexDPU__DOT___GEN_73 = vlTOPp->io_Streaming_matrix_0_3;
        vlTOPp->FlexDPU__DOT___GEN_77 = vlTOPp->io_Streaming_matrix_1_3;
        vlTOPp->FlexDPU__DOT___GEN_81 = vlTOPp->io_Streaming_matrix_2_3;
        vlTOPp->FlexDPU__DOT___GEN_85 = vlTOPp->io_Streaming_matrix_3_3;
    } else {
        vlTOPp->FlexDPU__DOT___GEN_73 = ((2U == (3U 
                                                 & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                          ? (IData)(vlTOPp->io_Streaming_matrix_0_2)
                                          : ((1U == 
                                              (3U & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                              ? (IData)(vlTOPp->io_Streaming_matrix_0_1)
                                              : (IData)(vlTOPp->io_Streaming_matrix_0_0)));
        vlTOPp->FlexDPU__DOT___GEN_77 = ((2U == (3U 
                                                 & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                          ? (IData)(vlTOPp->io_Streaming_matrix_1_2)
                                          : ((1U == 
                                              (3U & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                              ? (IData)(vlTOPp->io_Streaming_matrix_1_1)
                                              : (IData)(vlTOPp->io_Streaming_matrix_1_0)));
        vlTOPp->FlexDPU__DOT___GEN_81 = ((2U == (3U 
                                                 & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                          ? (IData)(vlTOPp->io_Streaming_matrix_2_2)
                                          : ((1U == 
                                              (3U & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                              ? (IData)(vlTOPp->io_Streaming_matrix_2_1)
                                              : (IData)(vlTOPp->io_Streaming_matrix_2_0)));
        vlTOPp->FlexDPU__DOT___GEN_85 = ((2U == (3U 
                                                 & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                          ? (IData)(vlTOPp->io_Streaming_matrix_3_2)
                                          : ((1U == 
                                              (3U & vlTOPp->FlexDPU__DOT__ModuleIndex))
                                              ? (IData)(vlTOPp->io_Streaming_matrix_3_1)
                                              : (IData)(vlTOPp->io_Streaming_matrix_3_0)));
    }
    vlTOPp->FlexDPU__DOT___Statvalid_T_1 = (3U == vlTOPp->FlexDPU__DOT__jloop);
    vlTOPp->FlexDPU__DOT___iloop_T_1 = ((IData)(1U) 
                                        + vlTOPp->FlexDPU__DOT__iloop);
    vlTOPp->FlexDPU__DOT___jloop_T_1 = ((IData)(1U) 
                                        + vlTOPp->FlexDPU__DOT__jloop);
    vlTOPp->FlexDPU__DOT___Statvalid_T_2 = ((3U == vlTOPp->FlexDPU__DOT__iloop) 
                                            & (3U == vlTOPp->FlexDPU__DOT__jloop));
    if (vlTOPp->FlexDPU__DOT__Statvalid) {
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT___GEN_104 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_0;
        vlTOPp->FlexDPU__DOT___GEN_105 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_1;
        vlTOPp->FlexDPU__DOT___GEN_106 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_2;
        vlTOPp->FlexDPU__DOT___GEN_107 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_3;
    } else {
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_104 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_105 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_106 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_107 = 0U;
    }
}

void VFlexDPU::_eval_initial(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_eval_initial\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFlexDPU::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::final\n"); );
    // Variables
    VFlexDPU__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFlexDPU::_eval_settle(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_eval_settle\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__FlexDPU__DOT__PathFinder._settle__TOP__FlexDPU__DOT__PathFinder__9(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_1._settle__TOP__FlexDPU__DOT__PathFinder_1__10(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_2._settle__TOP__FlexDPU__DOT__PathFinder_2__11(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_3._settle__TOP__FlexDPU__DOT__PathFinder_3__12(vlSymsp);
}

void VFlexDPU::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_CalFDE = VL_RAND_RESET_I(32);
    io_i_vn_0 = VL_RAND_RESET_I(5);
    io_i_vn_1 = VL_RAND_RESET_I(5);
    io_i_vn_2 = VL_RAND_RESET_I(5);
    io_i_vn_3 = VL_RAND_RESET_I(5);
    io_i_stationary = VL_RAND_RESET_I(1);
    io_i_data_valid = VL_RAND_RESET_I(1);
    io_Stationary_matrix_0_0 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_0_1 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_0_2 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_0_3 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_1_0 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_1_1 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_1_2 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_1_3 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_2_0 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_2_1 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_2_2 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_2_3 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_3_0 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_3_1 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_3_2 = VL_RAND_RESET_I(16);
    io_Stationary_matrix_3_3 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_0_0 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_0_1 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_0_2 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_0_3 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_1_0 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_1_1 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_1_2 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_1_3 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_2_0 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_2_1 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_2_2 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_2_3 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_3_0 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_3_1 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_3_2 = VL_RAND_RESET_I(16);
    io_Streaming_matrix_3_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_0 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_1 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_2 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3 = VL_RAND_RESET_I(16);
    FlexDPU__DOT__used_FlexDPE_0 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__used_FlexDPE_1 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__iloop = VL_RAND_RESET_I(32);
    FlexDPU__DOT__jloop = VL_RAND_RESET_I(32);
    FlexDPU__DOT__Statvalid = VL_RAND_RESET_I(1);
    FlexDPU__DOT___Statvalid_T_1 = VL_RAND_RESET_I(1);
    FlexDPU__DOT___Statvalid_T_2 = VL_RAND_RESET_I(1);
    FlexDPU__DOT___iloop_T_1 = VL_RAND_RESET_I(32);
    FlexDPU__DOT___jloop_T_1 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__PF1_Stream_Col_0 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__PF1_Stream_Col_1 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__PF1_Stream_Col_2 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__PF1_Stream_Col_3 = VL_RAND_RESET_I(32);
    FlexDPU__DOT__ModuleIndex = VL_RAND_RESET_I(32);
    FlexDPU__DOT___ModuleIndex_T_1 = VL_RAND_RESET_I(32);
    FlexDPU__DOT___GEN_73 = VL_RAND_RESET_I(16);
    FlexDPU__DOT___GEN_77 = VL_RAND_RESET_I(16);
    FlexDPU__DOT___GEN_81 = VL_RAND_RESET_I(16);
    FlexDPU__DOT___GEN_85 = VL_RAND_RESET_I(16);
    FlexDPU__DOT___GEN_104 = VL_RAND_RESET_I(32);
    FlexDPU__DOT___GEN_105 = VL_RAND_RESET_I(32);
    FlexDPU__DOT___GEN_106 = VL_RAND_RESET_I(32);
    FlexDPU__DOT___GEN_107 = VL_RAND_RESET_I(32);
    __Vdly__FlexDPU__DOT__iloop = VL_RAND_RESET_I(32);
    __Vdly__FlexDPU__DOT__jloop = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

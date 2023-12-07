// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFlexDPU.h for the primary calling header

#include "VFlexDPU.h"
#include "VFlexDPU__Syms.h"

//==========

void VFlexDPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFlexDPU::eval\n"); );
    VFlexDPU__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FlexDPU.v", 3917, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFlexDPU::_eval_initial_loop(VFlexDPU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FlexDPU.v", 3917, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFlexDPU::_sequent__TOP__1(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_sequent__TOP__1\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__FlexDPU__DOT__ModuleIndex;
    // Body
    vlTOPp->__Vdly__FlexDPU__DOT__iloop = vlTOPp->FlexDPU__DOT__iloop;
    vlTOPp->__Vdly__FlexDPU__DOT__jloop = vlTOPp->FlexDPU__DOT__jloop;
    __Vdly__FlexDPU__DOT__ModuleIndex = vlTOPp->FlexDPU__DOT__ModuleIndex;
    vlTOPp->FlexDPU__DOT__used_FlexDPE_1 = ((1U < (1U 
                                                   & vlTOPp->io_CalFDE))
                                             ? ((IData)(1U) 
                                                + (vlTOPp->io_CalFDE 
                                                   >> 1U))
                                             : (vlTOPp->io_CalFDE 
                                                >> 1U));
    vlTOPp->FlexDPU__DOT__used_FlexDPE_0 = ((0U < (1U 
                                                   & vlTOPp->io_CalFDE))
                                             ? ((IData)(1U) 
                                                + (vlTOPp->io_CalFDE 
                                                   >> 1U))
                                             : (vlTOPp->io_CalFDE 
                                                >> 1U));
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__ModuleIndex = 0U;
    } else {
        if (vlTOPp->FlexDPU__DOT__Statvalid) {
            if ((1U & (~ ((3U == vlTOPp->FlexDPU__DOT__ModuleIndex) 
                          & ((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                             & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k) 
                                  & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j)) 
                                 & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i)) 
                                & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext))))))) {
                if (((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k) 
                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j)) 
                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i)) 
                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext)))) {
                    __Vdly__FlexDPU__DOT__ModuleIndex 
                        = vlTOPp->FlexDPU__DOT___ModuleIndex_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__PF1_Stream_Col_0 = 0U;
    } else {
        if (vlTOPp->FlexDPU__DOT__Statvalid) {
            vlTOPp->FlexDPU__DOT__PF1_Stream_Col_0 
                = vlTOPp->FlexDPU__DOT___GEN_73;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__PF1_Stream_Col_1 = 0U;
    } else {
        if (vlTOPp->FlexDPU__DOT__Statvalid) {
            vlTOPp->FlexDPU__DOT__PF1_Stream_Col_1 
                = vlTOPp->FlexDPU__DOT___GEN_77;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__PF1_Stream_Col_2 = 0U;
    } else {
        if (vlTOPp->FlexDPU__DOT__Statvalid) {
            vlTOPp->FlexDPU__DOT__PF1_Stream_Col_2 
                = vlTOPp->FlexDPU__DOT___GEN_81;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__PF1_Stream_Col_3 = 0U;
    } else {
        if (vlTOPp->FlexDPU__DOT__Statvalid) {
            vlTOPp->FlexDPU__DOT__PF1_Stream_Col_3 
                = vlTOPp->FlexDPU__DOT___GEN_85;
        }
    }
    vlTOPp->FlexDPU__DOT__ModuleIndex = __Vdly__FlexDPU__DOT__ModuleIndex;
    vlTOPp->FlexDPU__DOT___ModuleIndex_T_1 = ((IData)(1U) 
                                              + vlTOPp->FlexDPU__DOT__ModuleIndex);
}

VL_INLINE_OPT void VFlexDPU::_sequent__TOP__2(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_sequent__TOP__2\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__FlexDPU__DOT__iloop = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__iloop) & (IData)(vlTOPp->FlexDPU__DOT___Statvalid_T_1))) {
            vlTOPp->__Vdly__FlexDPU__DOT__iloop = vlTOPp->FlexDPU__DOT___iloop_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__FlexDPU__DOT__jloop = 0U;
    } else {
        if (((3U >= vlTOPp->FlexDPU__DOT__iloop) & 
             (3U > vlTOPp->FlexDPU__DOT__jloop))) {
            vlTOPp->__Vdly__FlexDPU__DOT__jloop = vlTOPp->FlexDPU__DOT___jloop_T_1;
        } else {
            if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT___Statvalid_T_2)))) {
                vlTOPp->__Vdly__FlexDPU__DOT__jloop = 0U;
            }
        }
    }
    vlTOPp->FlexDPU__DOT__Statvalid = ((~ (IData)(vlTOPp->reset)) 
                                       & ((3U == vlTOPp->FlexDPU__DOT__iloop) 
                                          & (3U == vlTOPp->FlexDPU__DOT__jloop)));
    vlTOPp->FlexDPU__DOT__iloop = vlTOPp->__Vdly__FlexDPU__DOT__iloop;
    vlTOPp->FlexDPU__DOT__jloop = vlTOPp->__Vdly__FlexDPU__DOT__jloop;
    vlTOPp->FlexDPU__DOT___iloop_T_1 = ((IData)(1U) 
                                        + vlTOPp->FlexDPU__DOT__iloop);
    vlTOPp->FlexDPU__DOT___Statvalid_T_1 = (3U == vlTOPp->FlexDPU__DOT__jloop);
    vlTOPp->FlexDPU__DOT___jloop_T_1 = ((IData)(1U) 
                                        + vlTOPp->FlexDPU__DOT__jloop);
    vlTOPp->FlexDPU__DOT___Statvalid_T_2 = ((3U == vlTOPp->FlexDPU__DOT__iloop) 
                                            & (3U == vlTOPp->FlexDPU__DOT__jloop));
    if (vlTOPp->FlexDPU__DOT__Statvalid) {
        vlTOPp->FlexDPU__DOT___GEN_104 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_0;
        vlTOPp->FlexDPU__DOT___GEN_105 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_1;
        vlTOPp->FlexDPU__DOT___GEN_106 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_2;
        vlTOPp->FlexDPU__DOT___GEN_107 = vlTOPp->FlexDPU__DOT__PF1_Stream_Col_3;
    } else {
        vlTOPp->FlexDPU__DOT___GEN_104 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_105 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_106 = 0U;
        vlTOPp->FlexDPU__DOT___GEN_107 = 0U;
    }
}

VL_INLINE_OPT void VFlexDPU::_combo__TOP__4(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_combo__TOP__4\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    }
}

void VFlexDPU::_eval(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_eval\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__FlexDPU__DOT__PathFinder._sequent__TOP__FlexDPU__DOT__PathFinder__1(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_1._sequent__TOP__FlexDPU__DOT__PathFinder_1__2(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_2._sequent__TOP__FlexDPU__DOT__PathFinder_2__3(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_3._sequent__TOP__FlexDPU__DOT__PathFinder_3__4(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_1._sequent__TOP__FlexDPU__DOT__PathFinder_1__5(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_2._sequent__TOP__FlexDPU__DOT__PathFinder_2__6(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_3._sequent__TOP__FlexDPU__DOT__PathFinder_3__7(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder._sequent__TOP__FlexDPU__DOT__PathFinder__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__FlexDPU__DOT__PathFinder._combo__TOP__FlexDPU__DOT__PathFinder__13(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_1._combo__TOP__FlexDPU__DOT__PathFinder_1__14(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_2._combo__TOP__FlexDPU__DOT__PathFinder_2__15(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_3._combo__TOP__FlexDPU__DOT__PathFinder_3__16(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VFlexDPU::_change_request(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_change_request\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFlexDPU::_change_request_1(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_change_request_1\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFlexDPU::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPU::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_i_vn_0 & 0xe0U))) {
        Verilated::overWidthError("io_i_vn_0");}
    if (VL_UNLIKELY((io_i_vn_1 & 0xe0U))) {
        Verilated::overWidthError("io_i_vn_1");}
    if (VL_UNLIKELY((io_i_vn_2 & 0xe0U))) {
        Verilated::overWidthError("io_i_vn_2");}
    if (VL_UNLIKELY((io_i_vn_3 & 0xe0U))) {
        Verilated::overWidthError("io_i_vn_3");}
    if (VL_UNLIKELY((io_i_stationary & 0xfeU))) {
        Verilated::overWidthError("io_i_stationary");}
    if (VL_UNLIKELY((io_i_data_valid & 0xfeU))) {
        Verilated::overWidthError("io_i_data_valid");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFlexDPUby2.h for the primary calling header

#include "VFlexDPUby2.h"
#include "VFlexDPUby2__Syms.h"

//==========

void VFlexDPUby2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFlexDPUby2::eval\n"); );
    VFlexDPUby2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("FlexDPUby2.v", 5319, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFlexDPUby2::_eval_initial_loop(VFlexDPUby2__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("FlexDPUby2.v", 5319, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFlexDPUby2::_sequent__TOP__1(VFlexDPUby2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_sequent__TOP__1\n"); );
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__FlexDPUby2__DOT__iterationChange;
    CData/*0:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__SindexRow;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__SindexCol;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__indexRow;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__indexCol;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__iloop;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__jloop;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j;
    // Body
    __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j 
        = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j;
    __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
        = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i;
    __Vdly__FlexDPUby2__DOT__indexRow = vlTOPp->FlexDPUby2__DOT__indexRow;
    __Vdly__FlexDPUby2__DOT__indexCol = vlTOPp->FlexDPUby2__DOT__indexCol;
    __Vdly__FlexDPUby2__DOT__jloop = vlTOPp->FlexDPUby2__DOT__jloop;
    __Vdly__FlexDPUby2__DOT__iloop = vlTOPp->FlexDPUby2__DOT__iloop;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k;
    __Vdly__FlexDPUby2__DOT__SindexRow = vlTOPp->FlexDPUby2__DOT__SindexRow;
    __Vdly__FlexDPUby2__DOT__SindexCol = vlTOPp->FlexDPUby2__DOT__SindexCol;
    __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid;
    __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j;
    __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j;
    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i;
    __Vdly__FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j;
    __Vdly__FlexDPUby2__DOT__iterationChange = vlTOPp->FlexDPUby2__DOT__iterationChange;
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k = 0U;
    } else {
        if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge) 
             & (2U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay))) {
            if (((vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                  < vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_IDex) 
                 & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___k_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l = 0U;
    } else {
        if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge) 
             & (2U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay))) {
            if (((vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                  < vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_IDex) 
                 & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l = 0U;
            } else {
                if (((vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                      <= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_IDex) 
                     & (1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))) {
                    __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___l_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay = 0U;
    } else {
        if (((1U >= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay) 
             & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge))) {
            __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay 
                = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___delay_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_1Reg_4;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_6;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_7;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_0 
        = (0xffffU & vlTOPp->FlexDPUby2__DOT___GEN_49);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_1 
        = (0xffffU & vlTOPp->FlexDPUby2__DOT___GEN_51);
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid) {
                vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
                        ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder
                        : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPESrc_0_0 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & ((~ vlTOPp->FlexDPUby2__DOT__SindexRow) 
                       & (~ vlTOPp->FlexDPUby2__DOT__SindexCol)))) {
                vlTOPp->FlexDPUby2__DOT__DPESrc_0_0 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                              & vlTOPp->FlexDPUby2__DOT__iloop))
                        ? (IData)(vlTOPp->io_Streaming_matrix_1_1)
                        : ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                                  & (~ vlTOPp->FlexDPUby2__DOT__iloop)))
                            ? (IData)(vlTOPp->io_Streaming_matrix_1_0)
                            : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__jloop) 
                                      & vlTOPp->FlexDPUby2__DOT__iloop))
                                ? (IData)(vlTOPp->io_Streaming_matrix_0_1)
                                : (IData)(vlTOPp->io_Streaming_matrix_0_0))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPESrc_0_1 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & ((~ vlTOPp->FlexDPUby2__DOT__SindexRow) 
                       & vlTOPp->FlexDPUby2__DOT__SindexCol))) {
                vlTOPp->FlexDPUby2__DOT__DPESrc_0_1 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                              & vlTOPp->FlexDPUby2__DOT__iloop))
                        ? (IData)(vlTOPp->io_Streaming_matrix_1_1)
                        : ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                                  & (~ vlTOPp->FlexDPUby2__DOT__iloop)))
                            ? (IData)(vlTOPp->io_Streaming_matrix_1_0)
                            : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__jloop) 
                                      & vlTOPp->FlexDPUby2__DOT__iloop))
                                ? (IData)(vlTOPp->io_Streaming_matrix_0_1)
                                : (IData)(vlTOPp->io_Streaming_matrix_0_0))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPESrc_1_0 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & (vlTOPp->FlexDPUby2__DOT__SindexRow 
                       & (~ vlTOPp->FlexDPUby2__DOT__SindexCol)))) {
                vlTOPp->FlexDPUby2__DOT__DPESrc_1_0 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                              & vlTOPp->FlexDPUby2__DOT__iloop))
                        ? (IData)(vlTOPp->io_Streaming_matrix_1_1)
                        : ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                                  & (~ vlTOPp->FlexDPUby2__DOT__iloop)))
                            ? (IData)(vlTOPp->io_Streaming_matrix_1_0)
                            : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__jloop) 
                                      & vlTOPp->FlexDPUby2__DOT__iloop))
                                ? (IData)(vlTOPp->io_Streaming_matrix_0_1)
                                : (IData)(vlTOPp->io_Streaming_matrix_0_0))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPESrc_1_1 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & (vlTOPp->FlexDPUby2__DOT__SindexRow 
                       & vlTOPp->FlexDPUby2__DOT__SindexCol))) {
                vlTOPp->FlexDPUby2__DOT__DPESrc_1_1 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                              & vlTOPp->FlexDPUby2__DOT__iloop))
                        ? (IData)(vlTOPp->io_Streaming_matrix_1_1)
                        : ((1U & (vlTOPp->FlexDPUby2__DOT__jloop 
                                  & (~ vlTOPp->FlexDPUby2__DOT__iloop)))
                            ? (IData)(vlTOPp->io_Streaming_matrix_1_0)
                            : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__jloop) 
                                      & vlTOPp->FlexDPUby2__DOT__iloop))
                                ? (IData)(vlTOPp->io_Streaming_matrix_0_1)
                                : (IData)(vlTOPp->io_Streaming_matrix_0_0))));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__SindexRow = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & (~ ((1U == vlTOPp->FlexDPUby2__DOT__SindexCol) 
                          & (1U == vlTOPp->FlexDPUby2__DOT__SindexRow))))) {
                if (vlTOPp->FlexDPUby2__DOT___T_9) {
                    __Vdly__FlexDPUby2__DOT__SindexRow 
                        = vlTOPp->FlexDPUby2__DOT___SindexRow_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__SindexCol = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & (~ ((1U == vlTOPp->FlexDPUby2__DOT__SindexCol) 
                          & (1U == vlTOPp->FlexDPUby2__DOT__SindexRow))))) {
                __Vdly__FlexDPUby2__DOT__SindexCol 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT___T_9)
                        ? 0U : vlTOPp->FlexDPUby2__DOT___SindexCol_T_1);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__iterationNo = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3)) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__iterationNo 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___iterationNo_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__count = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3)) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__count 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___count_T_1;
            }
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge_REG 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__io_PF_Valid_REG 
        = (((((0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__k) 
              & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j)) 
             & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)) 
            & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jNext)) 
           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3)) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_1 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_10;
            } else {
                if ((((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3) 
                      & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i)) 
                     & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_1 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_10;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3)) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_1 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_12;
            } else {
                if ((((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3) 
                      & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i)) 
                     & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_1 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_12;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if (((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i) 
                 & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___i_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3)) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_0 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_9;
            } else {
                if ((((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3) 
                      & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i)) 
                     & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_0 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_9;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_1 = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge)
                ? ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                          & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)))
                    ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_mat_1_1
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_30)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_15)
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_15);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge)
                ? ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                          & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                    ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_mat_1_1
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_30)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_16)
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_16);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge)
                ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                          & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)))
                    ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_mat_1_1
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_30)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_17)
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_17);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge)
                ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                          & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                    ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_mat_1_1
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_30)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_18)
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_18);
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check = 0U;
    } else {
        if ((1U <= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check)) {
            __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check 
                = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___check_T_1;
        } else {
            if ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_i_valid) 
                  & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i)) 
                 & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___check_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_22) {
            if ((4U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_31)) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                    = (((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___io_valid_T_1))
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___i_T_3
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_19);
            }
        } else {
            __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_19;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_22) {
            if ((4U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_31)) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j 
                    = (((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___io_valid_T_1))
                        ? 0U : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_41);
            }
        } else {
            if ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_i_valid) 
                  & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i)) 
                 & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j = 0U;
            }
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__io_Ovalid_REG 
        = (2U == ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex)
                   ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
                   : (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_92)));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_0 = 0U;
    } else {
        if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c) 
             & (0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a))) {
            if ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex) 
                       & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j)))) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_0 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))
                        ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___GEN_6);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_1 = 0U;
    } else {
        if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c) 
             & (0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a))) {
            if ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex) 
                       & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_1 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))
                        ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___GEN_6);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_0 = 0U;
    } else {
        if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c) 
             & (0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a))) {
            if ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                       & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j)))) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_0 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))
                        ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___GEN_6);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_1 = 0U;
    } else {
        if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c) 
             & (0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a))) {
            if ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                       & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_1 
                    = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))
                        ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___GEN_6);
            }
        }
    }
    if ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c) 
          & (0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a)) 
         & (1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___j_T_1;
    } else {
        if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___T_4)))) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c)
                    ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_0
                    : 0U);
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__io_valid_REG 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
           & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid) {
                vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0)))
                        : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid) {
                vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2)))
                        : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3);
            }
        }
    }
    if ((0x1aU > vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter)) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_0 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_1))
                           ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0)
                           : ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_0))
                               ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1)
                               : (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder))))));
    }
    if ((0x28U < vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter)) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_1 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_1))
                           ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0)
                           : ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_0))
                               ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1)
                               : (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder))))));
    }
    if ((0x1aU > vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter)) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_0 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_3))
                           ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2)
                           : ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_2))
                               ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3)
                               : (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))));
    }
    if ((0x28U < vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter)) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_1 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_3))
                           ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2)
                           : ((0U == (0xffffU & vlTOPp->FlexDPUby2__DOT__dest_2))
                               ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3)
                               : (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))));
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l;
    vlTOPp->FlexDPUby2__DOT__SindexRow = __Vdly__FlexDPUby2__DOT__SindexRow;
    vlTOPp->FlexDPUby2__DOT__SindexCol = __Vdly__FlexDPUby2__DOT__SindexCol;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___delay_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___k_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___l_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_1Reg_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_2));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_0));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_1));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_2));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_1));
    vlTOPp->FlexDPUby2__DOT___SindexRow_T_1 = ((IData)(1U) 
                                               + vlTOPp->FlexDPUby2__DOT__SindexRow);
    vlTOPp->FlexDPUby2__DOT___SindexCol_T_1 = ((IData)(1U) 
                                               + vlTOPp->FlexDPUby2__DOT__SindexCol);
    vlTOPp->FlexDPUby2__DOT___T_9 = (1U == vlTOPp->FlexDPUby2__DOT__SindexCol);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___iterationNo_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__iterationNo);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___count_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__count);
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__k = 0U;
    } else {
        if (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i) 
             & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j))) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__k 
                = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___k_T_1;
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___check_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_22 
        = (1U <= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___i_T_3 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___io_valid_T_1 
        = (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j);
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a 
                = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___a_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3)) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_0 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_11;
            } else {
                if ((((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3) 
                      & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i)) 
                     & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_0 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_11;
                }
            }
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___T_4 
        = (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_27))
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_27));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_28))
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_28));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_29))
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_29));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_30))
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_30));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_36))
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_36));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_37))
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_37));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) {
                if ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                      & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                     & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i = 0U;
                }
            } else {
                if ((1U <= vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_45;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 0U : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_40)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_40);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1 = 1U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 1U : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_31)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_31);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2 = 1U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2 
                = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                    ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                        & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))
                        ? 1U : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_41)
                    : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_41);
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
            if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) {
                if ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                      & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                     & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high))) {
                    __Vdly__FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j = 0U;
                }
            } else {
                __Vdly__FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j 
                    = ((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___j_T_1
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_44);
            }
        }
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_0));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_1));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3 = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT___counter_T_1;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0 
            = (0x7fffU & ((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_0) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                         ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                             ? ((0U 
                                                 == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                 ? vlTOPp->FlexDPUby2__DOT__src_3
                                                 : 
                                                ((0U 
                                                  == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                  ? vlTOPp->FlexDPUby2__DOT__src_3
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                    ? vlTOPp->FlexDPUby2__DOT__src_3
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_645)))))
                                             : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_645))
                                         : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1 
            = (0x7fffU & ((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_1) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                         ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                             ? ((1U 
                                                 == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                 ? vlTOPp->FlexDPUby2__DOT__src_3
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                  ? vlTOPp->FlexDPUby2__DOT__src_3
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                    ? vlTOPp->FlexDPUby2__DOT__src_3
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_646)))))
                                             : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_646))
                                         : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2 
            = (0x7fffU & ((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_2) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                         ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                             ? ((2U 
                                                 == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                 ? vlTOPp->FlexDPUby2__DOT__src_3
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                  ? vlTOPp->FlexDPUby2__DOT__src_3
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                    ? vlTOPp->FlexDPUby2__DOT__src_3
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_647)))))
                                             : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_647))
                                         : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3 
            = (0x7fffU & ((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_3) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                         ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                             ? ((3U 
                                                 == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                 ? vlTOPp->FlexDPUby2__DOT__src_3
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                  ? vlTOPp->FlexDPUby2__DOT__src_3
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                    ? vlTOPp->FlexDPUby2__DOT__src_3
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_648)))))
                                             : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_648))
                                         : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508)))));
    }
    if (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_IDex 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_i_valid 
            = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
               & 1U);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge_REG) 
               & 1U);
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_IDex = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_i_valid = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge = 0U;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_12 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                  & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))
            ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_1
                : 0U) : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                                & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l)))
                          ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                              & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                              ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_0
                              : 0U) : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k) 
                                              & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))
                                        ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_1
                                            : 0U) : 
                                       (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_0
                                         : 0U))));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j;
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_2 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1) 
                                            == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_0 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0) 
                                            == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2) 
                                            == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_3))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___k_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__k);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___a_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__a);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i) 
           & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_41 
        = (((1U >= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
            & (1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
            ? ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)
            : (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j
                : ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_i_valid) 
                     & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i)) 
                    & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                    ? 0U : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_19 
        = ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_i_valid) 
             & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i)) 
            & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
            ? ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_IDex)
            : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i);
    if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_merge) 
         & (2U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__delay))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_15 
            = ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k) 
                      & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l)))
                ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_12
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_0);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_16 
            = ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k) 
                      & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))
                ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_12
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_1);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_17 
            = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                      & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l)))
                ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_12
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_0);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_18 
            = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__k 
                      & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__l))
                ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_12
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_1);
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_15 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_16 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_17 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_18 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_1;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_40 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k)
            ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k
            : ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_88));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___reg_i_T_2 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j) 
           & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
           & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j));
    if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_62;
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT___counter_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1)))
            : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3)))
            : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder);
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__iterationChange = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange)))) {
                    __Vdly__FlexDPUby2__DOT__iterationChange 
                        = vlTOPp->FlexDPUby2__DOT___GEN_58;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__src_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__src_0 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                                   ? 
                                                  (0xffffU 
                                                   & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0))
                                                   : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__src_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__src_1 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                                   ? 
                                                  (0xffffU 
                                                   & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1))
                                                   : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__src_2 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__src_2 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                                   ? 
                                                  (0xffffU 
                                                   & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2))
                                                   : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__src_3 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__src_3 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                                   ? 
                                                  (0xffffU 
                                                   & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3))
                                                   : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_0_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_0_0 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_0_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_0_1 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_0_2 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_0_2 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_0_3 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_0_3 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_1_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_1_0 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_1_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_1_1 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_1_2 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_1_2 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_1_3 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_1_3 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_2_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_2_0 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_2_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_2_1 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_2_2 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_2_2 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_2_3 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_2_3 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_3_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_3_0 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_3_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_3_1 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_3_2 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_3_2 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__muxes_3_3 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            if (vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid) {
                vlTOPp->FlexDPUby2__DOT__muxes_3_3 
                    = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3)
                        : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__dest_0 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            vlTOPp->FlexDPUby2__DOT__dest_0 = vlTOPp->FlexDPUby2__DOT__DPEDest_0_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__dest_1 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            vlTOPp->FlexDPUby2__DOT__dest_1 = vlTOPp->FlexDPUby2__DOT__DPEDest_0_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__dest_2 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            vlTOPp->FlexDPUby2__DOT__dest_2 = vlTOPp->FlexDPUby2__DOT__DPEDest_0_2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__dest_3 = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__Statvalid) {
            vlTOPp->FlexDPUby2__DOT__dest_3 = vlTOPp->FlexDPUby2__DOT__DPEDest_0_3;
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i;
    if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___reg_i_T_2) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_44 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_45 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i;
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_44 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_45 
            = ((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i)
                ? ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i)
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i);
    }
    vlTOPp->FlexDPUby2__DOT__iterationChange = __Vdly__FlexDPUby2__DOT__iterationChange;
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_3 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_3));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_3));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__c)
            ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_0
            : 0U);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i);
    if ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__count)) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_9 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_10 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i;
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_9 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_10 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Idex_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) {
            if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__ab) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___j_T_1;
            } else {
                if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___io_validIteration_T_2)))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j = 0U;
                }
            }
        }
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_62 
        = ((~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)) 
           & ((1U <= vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j) 
              & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___reg_i_T_2)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG 
        = vlTOPp->FlexDPUby2__DOT__Statvalid;
    if (vlTOPp->FlexDPUby2__DOT__iterationChange) {
        vlTOPp->FlexDPUby2__DOT___GEN_49 = vlTOPp->FlexDPUby2__DOT__DPESrc_1_0;
        vlTOPp->FlexDPUby2__DOT___GEN_51 = vlTOPp->FlexDPUby2__DOT__DPESrc_1_1;
    } else {
        vlTOPp->FlexDPUby2__DOT___GEN_49 = vlTOPp->FlexDPUby2__DOT__DPESrc_0_0;
        vlTOPp->FlexDPUby2__DOT___GEN_51 = vlTOPp->FlexDPUby2__DOT__DPESrc_0_1;
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6) {
            if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_36)))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_148;
            }
        } else {
            if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                 & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6) {
            if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_36)))) {
                if ((1U & (~ ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                              & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))))) {
                    __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_145;
                }
            }
        } else {
            if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                 & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6) {
            if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_36) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
                    = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_28;
            } else {
                if ((1U & (~ ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                              & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))))) {
                    __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j = 0U;
                }
            }
        } else {
            if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                 & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))) {
                __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter = 0U;
    } else {
        if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6) {
            if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_36)))) {
                if ((1U & (~ ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                              & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))))) {
                    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter 
                        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_146;
                }
            }
        } else {
            if (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                 & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))) {
                vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_3 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jNext = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_36)
                    ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_144
                    : (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                        & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_144
                        : vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_147))
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_144));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_114)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_114)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_115)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_115)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_116)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_116)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_117)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_117)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_118)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_118)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_119)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_119)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_120)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_120)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_121)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_121)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_122)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_122)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_123)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_123)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_124)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_124)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_125)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_125)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_126)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_126)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_127)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_127)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_128)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_128)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_129)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_129)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_130)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_130)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_131)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_131)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_132)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_132)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_133)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_133)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_134)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_134)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_135)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_135)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_136)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_136)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_3 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6)
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_137)
                : (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid) 
                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual)))
                    ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_137)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jNext 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j;
    }
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_3) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_3) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_3) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_3) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_2) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_2) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_2) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_2) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_1) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_1) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_1) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_1) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_0) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_0) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_0) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_3_0) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_3) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_3) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_3) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_3) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_2) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_2) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_2) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_2) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_1) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_1) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_1) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_1) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_0) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_0) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_0) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_2_0) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_3) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_3) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_3) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_3) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_2) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_2) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_2) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_2) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_1) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_1) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_1) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_1) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_0) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_0) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_0) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_1_0) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_3) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_3) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_3) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_3) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_2) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_2) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_2) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_2) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_1) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_1) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_1) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_1) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0 
        = ((((8U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_0) 
                    << 3U)) | (4U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_0) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_0) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__muxes_0_0) 
                    >> 3U)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_4 
        = (1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high)) 
                 | (((1U & (vlTOPp->FlexDPUby2__DOT___GEN_51 
                            >> 1U)) == (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_1) 
                                              >> 1U))) 
                    & (((1U & vlTOPp->FlexDPUby2__DOT___GEN_51) 
                        == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_1))) 
                       & (((1U & (vlTOPp->FlexDPUby2__DOT___GEN_49 
                                  >> 1U)) == (1U & 
                                              ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_0) 
                                               >> 1U))) 
                          & (((1U & vlTOPp->FlexDPUby2__DOT___GEN_49) 
                              == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_0))) 
                             & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual)))))));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_33 
        = (0xffffU & ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k)
                       ? vlTOPp->FlexDPUby2__DOT___GEN_51
                       : vlTOPp->FlexDPUby2__DOT___GEN_49));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i 
        = __Vdly__FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i;
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue3_nextIndex_T_971 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                           ? 2U : 3U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                     ? 2U
                                                     : 3U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                      ? 2U
                                                      : 3U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                       ? 2U
                                                       : 3U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                     ? 2U
                                                     : 3U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue2_nextIndex_T_1439 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                           ? 2U : 3U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                     ? 2U
                                                     : 3U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                      ? 2U
                                                      : 3U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                       ? 2U
                                                       : 3U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                     ? 2U
                                                     : 3U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue1_nextIndex_T_1673 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                           ? 2U : 3U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                     ? 2U
                                                     : 3U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                      ? 2U
                                                      : 3U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                       ? 2U
                                                       : 3U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                     ? 2U
                                                     : 3U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414 
        = ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)))) 
             & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_463 
        = ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_408 
        = ((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_411 
        = (((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_1205 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                           ? 2U : 3U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                     ? 2U
                                                     : 3U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                      ? 2U
                                                      : 3U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                       ? 2U
                                                       : 3U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                     ? 2U
                                                     : 3U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue3_nextIndex_T_659 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                           ? 3U : 2U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                     ? 3U
                                                     : 2U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                      ? 3U
                                                      : 2U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                       ? 3U
                                                       : 2U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                     ? 3U
                                                     : 2U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue2_nextIndex_T_971 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                           ? 3U : 2U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                     ? 3U
                                                     : 2U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                      ? 3U
                                                      : 2U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                       ? 3U
                                                       : 2U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                     ? 3U
                                                     : 2U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue1_nextIndex_T_1127 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                           ? 3U : 2U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                     ? 3U
                                                     : 2U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                      ? 3U
                                                      : 2U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                       ? 3U
                                                       : 2U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                     ? 3U
                                                     : 2U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_284 
        = ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)))) 
             & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_333 
        = ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_278 
        = ((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_281 
        = (((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_815 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                           ? 3U : 2U)) & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                     ? 3U
                                                     : 2U)) 
                                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                      ? 3U
                                                      : 2U)) 
                                                   & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                       ? 3U
                                                       : 2U)) 
                                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                     ? 3U
                                                     : 2U))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8 
        = (3U & ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                              >> 1U)))) ? (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))
                  : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                  >> 1U)))) ? (1U & 
                                               (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))
                      : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3))))
                          : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3))))
                              : (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12 
        = (3U & ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                              >> 1U)))) ? (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)))
                  : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                  >> 1U)))) ? (1U & 
                                               (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)))
                      : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))))
                          : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))))
                              : (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14 
        = (3U & ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                              >> 1U)))) ? (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)))
                  : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                  >> 1U)))) ? (1U & 
                                               (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)))
                      : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))))
                          : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))))
                              : (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_154 
        = ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))) 
             & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_203 
        = ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_148 
        = ((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_151 
        = (((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (3U & ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                              >> 1U)))) ? (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))
                  : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                  >> 1U)))) ? (1U & 
                                               (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))
                      : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0))))
                          : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0))))
                              : (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex 
        = (3U & ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                              >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3))
                  : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                  >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3))
                      : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))
                          : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))
                              : (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex 
        = (3U & ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                              >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))
                  : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                  >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))
                      : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)))
                          : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)))
                              : (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex 
        = (3U & ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                              >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))
                  : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                  >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))
                      : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)))
                          : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)))
                              : (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_24 
        = ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))) 
             & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_73 
        = ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_18 
        = ((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_21 
        = (((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))) 
            & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)) 
                        & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                              >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0))
                  : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                            & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                  >> 1U)))) ? (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0))
                      : ((1U & ((~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)) 
                                & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))
                          : ((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                    & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))
                              : (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_2));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___io_validIteration_T_2 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i) 
           & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__ab 
        = ((1U >= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i) 
           & (1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j));
    if ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__count)) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_11 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_12 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j;
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_11 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_12 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__Jdex_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPEDest_0_0 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT___GEN_3)) 
                 & (1U >= vlTOPp->FlexDPUby2__DOT__iloop))) {
                if (((~ vlTOPp->FlexDPUby2__DOT__indexRow) 
                     & (0U == (3U & vlTOPp->FlexDPUby2__DOT__indexCol)))) {
                    vlTOPp->FlexDPUby2__DOT__DPEDest_0_0 
                        = vlTOPp->FlexDPUby2__DOT___GEN_3;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPEDest_0_1 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT___GEN_3)) 
                 & (1U >= vlTOPp->FlexDPUby2__DOT__iloop))) {
                if (((~ vlTOPp->FlexDPUby2__DOT__indexRow) 
                     & (1U == (3U & vlTOPp->FlexDPUby2__DOT__indexCol)))) {
                    vlTOPp->FlexDPUby2__DOT__DPEDest_0_1 
                        = vlTOPp->FlexDPUby2__DOT___GEN_3;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPEDest_0_2 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT___GEN_3)) 
                 & (1U >= vlTOPp->FlexDPUby2__DOT__iloop))) {
                if (((~ vlTOPp->FlexDPUby2__DOT__indexRow) 
                     & (2U == (3U & vlTOPp->FlexDPUby2__DOT__indexCol)))) {
                    vlTOPp->FlexDPUby2__DOT__DPEDest_0_2 
                        = vlTOPp->FlexDPUby2__DOT___GEN_3;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__DPEDest_0_3 = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT___GEN_3)) 
                 & (1U >= vlTOPp->FlexDPUby2__DOT__iloop))) {
                if (((~ vlTOPp->FlexDPUby2__DOT__indexRow) 
                     & (3U == (3U & vlTOPp->FlexDPUby2__DOT__indexCol)))) {
                    vlTOPp->FlexDPUby2__DOT__DPEDest_0_3 
                        = vlTOPp->FlexDPUby2__DOT___GEN_3;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__indexRow = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & (~ ((3U == vlTOPp->FlexDPUby2__DOT__indexCol) 
                          & (1U == vlTOPp->FlexDPUby2__DOT__indexRow))))) {
                if (vlTOPp->FlexDPUby2__DOT___T_13) {
                    __Vdly__FlexDPUby2__DOT__indexRow 
                        = vlTOPp->FlexDPUby2__DOT___indexRow_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__indexCol = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if ((1U & (~ ((3U == vlTOPp->FlexDPUby2__DOT__indexCol) 
                          & (1U == vlTOPp->FlexDPUby2__DOT__indexRow))))) {
                __Vdly__FlexDPUby2__DOT__indexCol = 
                    ((IData)(vlTOPp->FlexDPUby2__DOT___T_13)
                      ? 0U : vlTOPp->FlexDPUby2__DOT___GEN_24);
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__iloop = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if (((IData)(vlTOPp->FlexDPUby2__DOT___T_3) 
                 & (1U > vlTOPp->FlexDPUby2__DOT__jloop))) {
                if (((1U > vlTOPp->FlexDPUby2__DOT__iloop) 
                     & (IData)(vlTOPp->FlexDPUby2__DOT___SrcDestValid_T_1))) {
                    __Vdly__FlexDPUby2__DOT__iloop 
                        = vlTOPp->FlexDPUby2__DOT___iloop_T_1;
                }
            } else {
                __Vdly__FlexDPUby2__DOT__iloop = ((IData)(vlTOPp->FlexDPUby2__DOT___SrcDestValid_T_2)
                                                   ? 2U
                                                   : vlTOPp->FlexDPUby2__DOT___GEN_42);
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__jloop = 0U;
    } else {
        if (vlTOPp->io_valid) {
            if (((IData)(vlTOPp->FlexDPUby2__DOT___T_3) 
                 & (1U > vlTOPp->FlexDPUby2__DOT__jloop))) {
                __Vdly__FlexDPUby2__DOT__jloop = vlTOPp->FlexDPUby2__DOT___jloop_T_1;
            } else {
                if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT___SrcDestValid_T_2)))) {
                    __Vdly__FlexDPUby2__DOT__jloop 
                        = vlTOPp->FlexDPUby2__DOT___T_28;
                }
            }
        }
    }
    vlTOPp->FlexDPUby2__DOT__Statvalid = ((~ (IData)(vlTOPp->reset)) 
                                          & (((IData)(vlTOPp->FlexDPUby2__DOT___SrcDestValid_T) 
                                              | (2U 
                                                 == vlTOPp->FlexDPUby2__DOT__iloop)) 
                                             & (IData)(vlTOPp->FlexDPUby2__DOT___SrcDestValid_T_1)));
    vlTOPp->FlexDPUby2__DOT__SrcDestValid = ((~ (IData)(vlTOPp->reset)) 
                                             & ((1U 
                                                 == vlTOPp->FlexDPUby2__DOT__iloop) 
                                                & (1U 
                                                   == vlTOPp->FlexDPUby2__DOT__jloop)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) 
           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__io_valid_REG));
    if (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_91 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_92 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_93 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_88 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid)
                ? ((((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid) 
                     & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual))) 
                    & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high)) 
                   | (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_4))
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_4));
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_91 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_92 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_93 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_88 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_4;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_41 
        = ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k)
            ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2
            : ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_33))
                ? ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2)
                : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2));
    if ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_33))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_36 
            = (0xffffU & ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k)
                           ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0)
                           : vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_37 
            = (0xffffU & ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k)
                           ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1)));
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_36 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_37 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1));
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_6 
        = (1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_28 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___T_36 
        = (1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j);
    if ((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_145 
            = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_146 
            = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter);
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_145 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_146 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_148 
        = (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
            & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)) 
           | (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual 
        = (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_1) 
            == (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_1)) 
           & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_1) 
               == (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_1)) 
              & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_0) 
                  == (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_0)) 
                 & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_0) 
                     == (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_0)) 
                    & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_1) 
                        == (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_1)) 
                       & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_0) 
                          == (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_0)))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                     ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                         ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                    ? 2U : 3U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                            ? 2U : 3U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue3_nextIndex_T_971)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                     ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                         ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                    ? 2U : 3U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                            ? 2U : 3U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue2_nextIndex_T_1439)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                     ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                         ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                    ? 2U : 3U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                            ? 2U : 3U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue1_nextIndex_T_1673)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_475 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_463) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                     ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                         ? 2U : 3U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                    ? 2U : 3U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                            ? 2U : 3U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_1205)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                     ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                         ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                    ? 3U : 2U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                            ? 3U : 2U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue3_nextIndex_T_659)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                     ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                         ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                    ? 3U : 2U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                            ? 3U : 2U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue2_nextIndex_T_971)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                     ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                         ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                    ? 3U : 2U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                            ? 3U : 2U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue1_nextIndex_T_1127)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_345 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_333) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20 
        = (((0U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                     ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                         ? 3U : 2U)) & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                    ? 3U : 2U) : (((2U == ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                            ? 3U : 2U)) 
                                   & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_815)))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_215 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_203) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_85 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_73) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    vlTOPp->FlexDPUby2__DOT__indexRow = __Vdly__FlexDPUby2__DOT__indexRow;
    vlTOPp->FlexDPUby2__DOT__indexCol = __Vdly__FlexDPUby2__DOT__indexCol;
    vlTOPp->FlexDPUby2__DOT__jloop = __Vdly__FlexDPUby2__DOT__jloop;
    vlTOPp->FlexDPUby2__DOT__iloop = __Vdly__FlexDPUby2__DOT__iloop;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_mat_1_1 
        = (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
            & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
            ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
            : 0U);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT___GEN_6 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex 
                  & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j)))
            ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_93)
            : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_IDex) 
                      & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_92)
                : (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_91)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT___GEN_3 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i 
                  & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))
            ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_94)
            : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i 
                      & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j)))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_93)
                : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__i) 
                          & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__j))
                    ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_92)
                    : (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_91))));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_30 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                  & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)))
            ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_93)
                : 0U) : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                                & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
                          ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                              & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                              ? (0xffffU & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_92)
                              : 0U) : (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                                        & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                                        ? (0xffffU 
                                           & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_91)
                                        : 0U)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21 
        = (3U & (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                  & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                        >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)
                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                      & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                            >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)
                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                          & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)
                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                              & (~ ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                    >> 2U))) ? (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)
                              : (((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                                  & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20))
                                  : (((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                                      & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20))
                                      : (((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                                          & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20)) 
                                              & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20))))))))));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_2 = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_0 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1) 
                     != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2)) 
                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_32))
                    ? 5U : ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1) 
                              == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2)) 
                             & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_32))
                             ? 3U : 0U)) : 0U);
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_1 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2) 
                     != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1)) 
                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_143))
                    ? 5U : ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2) 
                              == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1)) 
                             & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_143))
                             ? 4U : 0U)) : 0U);
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_2 
            = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1)
                ? ((((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0) 
                       == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1)) 
                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_258)) 
                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_268)) 
                    & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_278))
                    ? 5U : ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_258) 
                              & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_268)) 
                             & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_278))
                             ? 4U : ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0) 
                                       == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1)) 
                                      & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_278))
                                      ? 3U : 0U))) : 0U);
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1));
    vlTOPp->FlexDPUby2__DOT___indexRow_T_1 = ((IData)(1U) 
                                              + vlTOPp->FlexDPUby2__DOT__indexRow);
    vlTOPp->FlexDPUby2__DOT___T_13 = (3U == vlTOPp->FlexDPUby2__DOT__indexCol);
    vlTOPp->FlexDPUby2__DOT___SrcDestValid_T_1 = (1U 
                                                  == vlTOPp->FlexDPUby2__DOT__jloop);
    vlTOPp->FlexDPUby2__DOT___jloop_T_1 = ((IData)(1U) 
                                           + vlTOPp->FlexDPUby2__DOT__jloop);
    vlTOPp->FlexDPUby2__DOT___SrcDestValid_T = (1U 
                                                == vlTOPp->FlexDPUby2__DOT__iloop);
    vlTOPp->FlexDPUby2__DOT___T_3 = (1U >= vlTOPp->FlexDPUby2__DOT__iloop);
    vlTOPp->FlexDPUby2__DOT___iloop_T_1 = ((IData)(1U) 
                                           + vlTOPp->FlexDPUby2__DOT__iloop);
    vlTOPp->FlexDPUby2__DOT___SrcDestValid_T_2 = ((1U 
                                                   == vlTOPp->FlexDPUby2__DOT__iloop) 
                                                  & (1U 
                                                     == vlTOPp->FlexDPUby2__DOT__jloop));
    vlTOPp->FlexDPUby2__DOT___T_28 = ((2U == vlTOPp->FlexDPUby2__DOT__iloop) 
                                      & (1U == vlTOPp->FlexDPUby2__DOT__jloop));
    vlTOPp->FlexDPUby2__DOT___GEN_42 = (((2U == vlTOPp->FlexDPUby2__DOT__iloop) 
                                         & (1U == vlTOPp->FlexDPUby2__DOT__jloop))
                                         ? 2U : (((1U 
                                                   > vlTOPp->FlexDPUby2__DOT__iloop) 
                                                  & (1U 
                                                     == vlTOPp->FlexDPUby2__DOT__jloop))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + vlTOPp->FlexDPUby2__DOT__iloop)
                                                  : vlTOPp->FlexDPUby2__DOT__iloop));
    vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid) 
                                               & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__io_PF_Valid_REG));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_31 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i 
                  & vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j))
            ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3_io_mat_1_1
            : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_30);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_1 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_1;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_0 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_0;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_1 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_1;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_0 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_0;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_1 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_1;
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_0 
        = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_0;
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10 
        = (3U & ((8U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                  ? ((0U == (1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21)))
                      ? ((IData)(1U) + (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21))
                      : ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21) 
                         - (IData)(1U))) : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21)));
    if ((1U & ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))) 
                 & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))))) 
                & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))))) 
               & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3))))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_5 
            = ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__src_0)
                : 0U);
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_6 
            = ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__src_0)
                : 0U);
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_7 
            = ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__src_0)
                : 0U);
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_8 
            = ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                ? (0xffffU & vlTOPp->FlexDPUby2__DOT__src_0)
                : 0U);
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_5 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_6 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_7 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_8 = 0U;
    }
    vlTOPp->FlexDPUby2__DOT___GEN_58 = (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid)
                                               ? ((0U 
                                                   != 
                                                   ((1U 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange)))
                                                     ? vlTOPp->FlexDPUby2__DOT__DPESrc_1_1
                                                     : vlTOPp->FlexDPUby2__DOT__DPESrc_0_1))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange))
                                                   : 
                                                  ((0U 
                                                    != 
                                                    ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange)))
                                                      ? vlTOPp->FlexDPUby2__DOT__DPESrc_1_0
                                                      : vlTOPp->FlexDPUby2__DOT__DPESrc_0_0))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange))
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange)))
                                               : (IData)(vlTOPp->FlexDPUby2__DOT__iterationChange)));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution_io_ProcessValid 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid) 
           & (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
               & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
               ? ((1U <= vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__check)
                   ? ((4U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT___GEN_31) 
                      | ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                         & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)))
                   : ((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__i) 
                      & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__j)))
               : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)));
    if (((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_30 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_5))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_31 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_6))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_32 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_7))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_33 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_8))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_30 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_5));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_31 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_6));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_32 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_7));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_33 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_8));
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2 = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_0;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_1;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_2;
    }
    if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution_io_ProcessValid) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_0 
            = (0xffffU & vlTOPp->FlexDPUby2__DOT___GEN_49);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_1 
            = (0xffffU & vlTOPp->FlexDPUby2__DOT___GEN_51);
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_1 = 0U;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17 
        = (0xffffU & ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)
                       ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution_io_ProcessValid)
                           ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                               ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1)
                               : 0U) : 0U) : ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution_io_ProcessValid)
                                               ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                                   ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0)
                                                   : 0U)
                                               : 0U)));
    if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution_io_ProcessValid) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_7 = 
            ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid)
              ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                  ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_0
                  : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_0)
              : 0U);
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_8 = 
            ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid)
              ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                  ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_0_1
                  : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_0_1)
              : 0U);
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_9 = 
            ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid)
              ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                  ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_0
                  : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_0)
              : 0U);
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_10 = 
            ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid)
              ? (((1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__j) 
                  & (~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2_io_Ovalid)))
                  ? vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part3__DOT__b_1_1
                  : vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution__DOT__part2__DOT__b_1_1)
              : 0U);
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_7 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_8 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_9 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_10 = 0U;
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_21) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_50 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_30)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_51 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_31)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_52 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_32)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_53 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_33)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_50 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_30));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_51 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_31));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_52 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_32));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_53 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_33));
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11 
        = ((1U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)
            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_1)
            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_0));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9 
        = (0xffffU & ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
                             & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
                       ? vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_10
                       : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
                                 & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)))
                           ? vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_9
                           : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                                     & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
                               ? vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_8
                               : vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_7))));
    if ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_18) 
          & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))))) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_65 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_50))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_66 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_51))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_67 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_52))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_68 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_53))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_65 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_50));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_66 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_51));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_67 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_52));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_68 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_53));
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_0 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_268 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_32 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_143 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2) 
           != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_258 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2) 
           == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT___T_278 
        = ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1) 
           != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_2 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_3 = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_0 
            = ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                ? 0U : ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                         ? 0U : ((0U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                                  ? ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                                      ? 1U : ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : 0x1cU))
                                  : 0x1cU)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_1 
            = ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                ? 0U : ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                         ? ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                             ? 1U : ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                                      ? 1U : 0x1fU))
                         : ((0U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                             ? ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : 0x1fU) : 0x1fU)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_2 
            = ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                ? ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                    ? 1U : 0xdU) : ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                                     ? ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                                         ? 0xdU : (
                                                   (2U 
                                                    == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 0xdU))
                                     : 0xdU));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_3 
            = ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0)
                ? ((2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1)
                    ? 1U : 8U) : 8U);
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_144 
        = (((((~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid)) 
              & (0U != (0xffffU & ((1U & (((IData)(1U) 
                                           + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                                          & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
                                    ? vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_10
                                    : ((1U & (((IData)(1U) 
                                               + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                                              & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)))
                                        ? vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_9
                                        : ((1U & ((~ 
                                                   ((IData)(1U) 
                                                    + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j)) 
                                                  & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
                                            ? vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_8
                                            : vlTOPp->FlexDPUby2__DOT__PF__DOT___GEN_7)))))) 
             & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11))) 
            & (1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j))
            ? ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)
            : vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter);
    if ((((~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid)) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_130 
            = ((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_131 
            = ((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_132 
            = ((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_133 
            = ((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3));
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_130 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_131 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_132 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_133 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3;
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8 
        = (0xffffU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17) 
                       - (IData)(1U)) - ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                                         - (IData)(1U))));
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17 
        = (0xffffU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                       - (IData)(1U)) - ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17) 
                                         - (IData)(1U))));
    if ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_75 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_65)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_76 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_66)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_77 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_67)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_78 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_68)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_75 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_65));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_76 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_66));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_77 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_67));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_78 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_68));
    }
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_147 
        = ((1U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)
            ? 0U : vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_144);
    if ((((~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid)) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_114 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0))
                        : (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_115 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1))
                        : (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_116 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2))
                        : (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_117 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3))
                        : (((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_118 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0))
                        : (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_119 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1))
                        : (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_120 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2))
                        : (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_121 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3))
                        : (((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_122 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0))
                        : (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_123 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1))
                        : (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_124 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2))
                        : (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_125 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3))
                        : (((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_126 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0))
                        : (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_127 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1))
                        : (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_128 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2))
                        : (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_129 
            = (0xfU & (((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9) 
                        <= (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_17))
                        ? (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_8)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3))
                        : (((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter)) 
                            & (3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter)))
                            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___muxes_T_17)
                            : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3))));
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_114 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_115 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_116 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_117 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_118 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_119 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_120 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_121 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_122 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_123 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_124 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_125 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_126 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_127 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_128 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_129 
            = (0xfU & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3));
    }
    if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0)) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_90 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_75))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_91 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_76))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_92 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_77))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_93 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_78))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_90 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_75));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_91 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_76));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_92 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_77));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_93 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_78));
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0 = 0U;
    } else {
        if (((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
             & (2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0 
                = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1 = 0U;
    } else {
        if (((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
             & (2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1 
                = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i = 0U;
    } else {
        if (((1U > vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
             & (1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
            __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
                = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___i_T_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j = 0U;
    } else {
        if (((1U > vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j) 
             & (1U >= vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i))) {
            __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j 
                = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___j_T_1;
        } else {
            if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___T_8) 
                 & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___T_12))) {
                __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j 
                    = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___j_T_1;
            } else {
                if ((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___T_10)))) {
                    __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j = 0U;
                }
            }
        }
    }
    if ((1U & ((~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
               & (~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_0_0 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7;
    }
    if ((1U & ((~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
               & vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_0_1 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7;
    }
    if ((1U & (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
               & (~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_1_0 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7;
    }
    if ((1U & (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
               & vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_1_1 
            = vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7;
    }
    if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7)) 
         & (2U > vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
        if ((1U & (~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i))) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_0 
                = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_13);
        }
    }
    if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7)) 
         & (2U > vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))) {
        if ((1U & vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i)) {
            vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_1 
                = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_13);
        }
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_73) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_110 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_90)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_111 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_91)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_112 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_92)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_113 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_93)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_110 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_90));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_111 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_91));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_112 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_92));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_113 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_93));
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j 
        = __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j;
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
        = __Vdly__FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i;
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_85) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_135 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_110))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_136 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_111))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_137 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_112))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_138 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                           ? vlTOPp->FlexDPUby2__DOT__src_0
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_113))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_135 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_110));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_136 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_111));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_137 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_112));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_138 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_113));
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___T_12 
        = (1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___T_8 
        = (1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i);
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___T_10 
        = ((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
           & (2U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j));
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_13 
        = ((1U & vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i)
            ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_1
            : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_0);
    if ((0U != (0xffffU & vlTOPp->FlexDPUby2__DOT__src_0))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_165 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_24)
                           ? ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                           ? vlTOPp->FlexDPUby2__DOT__src_0
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_135)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_135)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_166 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_24)
                           ? ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                           ? vlTOPp->FlexDPUby2__DOT__src_0
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_136)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_136)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_167 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_24)
                           ? ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                           ? vlTOPp->FlexDPUby2__DOT__src_0
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_137)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_137)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_168 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_24)
                           ? ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3))
                               ? vlTOPp->FlexDPUby2__DOT__src_0
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2))
                                   ? vlTOPp->FlexDPUby2__DOT__src_0
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1))
                                       ? vlTOPp->FlexDPUby2__DOT__src_0
                                       : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue))
                                           ? vlTOPp->FlexDPUby2__DOT__src_0
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_138)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_138)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_165 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_166 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_167 = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_168 = 0U;
    }
    if ((1U & ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))) 
                 & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))))) 
                & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))))) 
               & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3))))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_175 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_165)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_176 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_166)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_177 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_167)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_178 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_168)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_175 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_165));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_176 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_166));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_177 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_167));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_178 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_168));
    }
    if (((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1))) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_200 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_175))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_201 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_176))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_202 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_177))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_203 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_178))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_200 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_175));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_201 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_176));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_202 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_177));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_203 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_178));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_151) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_220 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_200)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_221 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_201)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_222 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_202)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_223 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_203)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_220 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_200));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_221 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_201));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_222 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_202));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_223 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_203));
    }
    if ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_148) 
          & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2))))) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_235 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_220))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_236 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_221))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_237 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_222))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_238 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_223))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_235 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_220));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_236 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_221));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_237 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_222));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_238 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_223));
    }
    if ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_245 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_235)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_246 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_236)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_247 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_237)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_248 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_238)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_245 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_235));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_246 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_236));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_247 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_237));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_248 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_238));
    }
    if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_260 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_245))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_261 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_246))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_262 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_247))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_263 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_248))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_260 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_245));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_261 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_246));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_262 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_247));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_263 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_248));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_203) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_280 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_260)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_281 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_261)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_282 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_262)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_283 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_263)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_280 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_260));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_281 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_261));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_282 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_262));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_283 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_263));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_215) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_305 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_280))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_306 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_281))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_307 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_282))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_308 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                           ? vlTOPp->FlexDPUby2__DOT__src_1
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_283))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_305 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_280));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_306 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_281));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_307 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_282));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_308 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_283));
    }
    if ((0U != (0xffffU & vlTOPp->FlexDPUby2__DOT__src_1))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_335 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_154)
                           ? ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                           ? vlTOPp->FlexDPUby2__DOT__src_1
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_305)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_305)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_336 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_154)
                           ? ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                           ? vlTOPp->FlexDPUby2__DOT__src_1
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_306)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_306)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_337 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_154)
                           ? ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                           ? vlTOPp->FlexDPUby2__DOT__src_1
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_307)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_307)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_338 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_154)
                           ? ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4))
                               ? vlTOPp->FlexDPUby2__DOT__src_1
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6))
                                   ? vlTOPp->FlexDPUby2__DOT__src_1
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7))
                                       ? vlTOPp->FlexDPUby2__DOT__src_1
                                       : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5))
                                           ? vlTOPp->FlexDPUby2__DOT__src_1
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_308)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_308)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_335 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_165));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_336 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_166));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_337 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_167));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_338 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_168));
    }
    if ((1U & ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)))) 
                 & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))))) 
                & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))))) 
               & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_345 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_335)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_346 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_336)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_347 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_337)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_348 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_338)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_345 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_335));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_346 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_336));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_347 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_337));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_348 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_338));
    }
    if (((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_370 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_345))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_371 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_346))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_372 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_347))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_373 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_348))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_370 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_345));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_371 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_346));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_372 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_347));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_373 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_348));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_281) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_390 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_370)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_391 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_371)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_392 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_372)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_393 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_373)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_390 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_370));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_391 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_371));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_392 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_372));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_393 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_373));
    }
    if ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_278) 
          & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))))) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_405 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_390))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_406 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_391))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_407 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_392))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_408 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_393))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_405 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_390));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_406 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_391));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_407 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_392));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_408 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_393));
    }
    if ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_415 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_405)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_416 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_406)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_417 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_407)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_418 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_408)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_415 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_405));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_416 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_406));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_417 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_407));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_418 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_408));
    }
    if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0)) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_430 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_415))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_431 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_416))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_432 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_417))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_433 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_418))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_430 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_415));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_431 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_416));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_432 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_417));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_433 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_418));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_333) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_450 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_430)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_451 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_431)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_452 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_432)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_453 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_433)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_450 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_430));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_451 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_431));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_452 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_432));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_453 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_433));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_345) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_475 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_450))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_476 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_451))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_477 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_452))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_478 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                           ? vlTOPp->FlexDPUby2__DOT__src_2
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_453))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_475 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_450));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_476 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_451));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_477 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_452));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_478 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_453));
    }
    if ((0U != (0xffffU & vlTOPp->FlexDPUby2__DOT__src_2))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_284)
                           ? ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                           ? vlTOPp->FlexDPUby2__DOT__src_2
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_475)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_475)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_284)
                           ? ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                           ? vlTOPp->FlexDPUby2__DOT__src_2
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_476)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_476)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_335));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_336));
    }
}

VL_INLINE_OPT void VFlexDPUby2::_sequent__TOP__2(VFlexDPUby2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_sequent__TOP__2\n"); );
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U != (0xffffU & vlTOPp->FlexDPUby2__DOT__src_2))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_284)
                           ? ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                           ? vlTOPp->FlexDPUby2__DOT__src_2
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_477)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_477)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508 
            = (0xffffU & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_284)
                           ? ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8))
                               ? vlTOPp->FlexDPUby2__DOT__src_2
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12))
                                   ? vlTOPp->FlexDPUby2__DOT__src_2
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14))
                                       ? vlTOPp->FlexDPUby2__DOT__src_2
                                       : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10))
                                           ? vlTOPp->FlexDPUby2__DOT__src_2
                                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_478)))))
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_478)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_337));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_338));
    }
    if ((1U & ((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)))) 
                 & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))))) 
                & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))))) 
               & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_515 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_516 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_517 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_518 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_515 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_516 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_517 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_518 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508));
    }
    if (((((~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)))) 
           & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_540 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_515))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_541 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_516))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_542 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_517))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_543 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_518))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_540 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_515));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_541 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_516));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_542 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_517));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_543 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_518));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_411) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_560 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_540)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_561 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_541)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_562 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_542)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_563 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_543)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_560 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_540));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_561 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_541));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_562 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_542));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_563 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_543));
    }
    if ((((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_408) 
          & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))))) 
         & (~ (IData)((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3)))))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_575 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_560))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_576 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_561))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_577 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_562))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_578 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_563))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_575 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_560));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_576 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_561));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_577 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_562));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_578 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_563));
    }
    if ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_585 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_575)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_586 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_576)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_587 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_577)));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_588 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_578)));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_585 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_575));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_586 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_576));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_587 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_577));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_588 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_578));
    }
    if (((0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0)) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_600 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_585))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_601 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_586))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_602 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_587))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_603 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_588))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_600 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_585));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_601 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_586));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_602 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_587));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_603 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_588));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_463) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_620 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_600)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_621 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_601)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_622 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_602)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_623 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_603)))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_620 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_600));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_621 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_601));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_622 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_602));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_623 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_603));
    }
    if (((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_475) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3)))) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_645 
            = (0xffffU & ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_620))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_646 
            = (0xffffU & ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((1U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_621))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_647 
            = (0xffffU & ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((2U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_622))))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_648 
            = (0xffffU & ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                           ? vlTOPp->FlexDPUby2__DOT__src_3
                           : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                               ? vlTOPp->FlexDPUby2__DOT__src_3
                               : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                   ? vlTOPp->FlexDPUby2__DOT__src_3
                                   : ((3U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                       ? vlTOPp->FlexDPUby2__DOT__src_3
                                       : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_623))))));
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_645 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_620));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_646 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_621));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_647 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_622));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_648 
            = (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_623));
    }
}

VL_INLINE_OPT void VFlexDPUby2::_combo__TOP__4(VFlexDPUby2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_combo__TOP__4\n"); );
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_8 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                  & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
            : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                      & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                          & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
    } else {
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1)))));
        vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3)))));
    }
    vlTOPp->FlexDPUby2__DOT___GEN_3 = ((1U & (vlTOPp->FlexDPUby2__DOT__iloop 
                                              & vlTOPp->FlexDPUby2__DOT__jloop))
                                        ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                                        : ((1U & (vlTOPp->FlexDPUby2__DOT__iloop 
                                                  & (~ vlTOPp->FlexDPUby2__DOT__jloop)))
                                            ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                                            : ((1U 
                                                & ((~ vlTOPp->FlexDPUby2__DOT__iloop) 
                                                   & vlTOPp->FlexDPUby2__DOT__jloop))
                                                ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                                : (IData)(vlTOPp->io_Stationary_matrix_0_0))));
    if (vlTOPp->io_valid) {
        vlTOPp->io_output_0_0 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                  ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid)
                                      ? (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_0))
                                      : 0U) : 0U);
        vlTOPp->io_output_0_1 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                  ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid)
                                      ? (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_1))
                                      : 0U) : 0U);
        vlTOPp->io_output_1_0 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                  ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid)
                                      ? (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_0))
                                      : 0U) : 0U);
        vlTOPp->io_output_1_1 = ((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                  ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid)
                                      ? (0xffffU & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_1))
                                      : 0U) : 0U);
    } else {
        vlTOPp->io_output_0_0 = 0U;
        vlTOPp->io_output_0_1 = 0U;
        vlTOPp->io_output_1_0 = 0U;
        vlTOPp->io_output_1_1 = 0U;
    }
    if (vlTOPp->FlexDPUby2__DOT__PF__DOT__Distribution_io_ProcessValid) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_1 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_0 = 0U;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_1 = 0U;
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT___GEN_7 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
                  & vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
            : ((1U & (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i 
                      & (~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
                          & vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))
                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))));
    if ((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_8))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_31 
            = ((5U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1)
                ? ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___reg_i_T_2)
                    ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1
                    : ((IData)(1U) + vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1))
                : 2U);
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_27 
            = (0xffffU & ((5U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1)
                           ? ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                                     & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                               ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0))
                           : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                                     & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                               ? 1U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_28 
            = (0xffffU & ((5U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1)
                           ? ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                                     & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                               ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1))
                           : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                                     & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                               ? 1U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_29 
            = (0xffffU & ((5U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1)
                           ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                                     & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                               ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0))
                           : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                                     & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                               ? 1U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0))));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_30 
            = (0xffffU & ((5U > vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1)
                           ? ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                                     & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                               ? vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1
                               : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1))
                           : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                                     & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                               ? 1U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1))));
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_31 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_27 
            = (0xffffU & ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                                 & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                           ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_28 
            = (0xffffU & ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i) 
                                 & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                           ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_29 
            = (0xffffU & ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                                 & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j)))
                           ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0)));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT___GEN_30 
            = (0xffffU & ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i 
                                 & vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j))
                           ? 0U : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1)));
    }
    vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder
            : vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    vlTOPp->FlexDPUby2__DOT___GEN_24 = (((0U != (IData)(vlTOPp->FlexDPUby2__DOT___GEN_3)) 
                                         & (1U >= vlTOPp->FlexDPUby2__DOT__iloop))
                                         ? ((IData)(1U) 
                                            + vlTOPp->FlexDPUby2__DOT__indexCol)
                                         : vlTOPp->FlexDPUby2__DOT__indexCol);
    vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_53 
        = ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
                  & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
            ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_1)
            : ((1U & (vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j 
                      & (~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_0)
                : ((1U & ((~ vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j) 
                          & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i))
                    ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_1)
                    : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_0))));
    if ((((~ (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid)) 
          & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_9))) 
         & (0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_11)))) {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_134 
            = ((0U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_53)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_0));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_135 
            = ((1U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_53)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_1));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_136 
            = ((2U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_53)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_2));
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_137 
            = ((3U == (3U & vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_53)
                : (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_3));
    } else {
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_134 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_0;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_135 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_1;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_136 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_2;
        vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT___GEN_137 
            = vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_3;
    }
}

void VFlexDPUby2::_eval(VFlexDPUby2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_eval\n"); );
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VFlexDPUby2::_change_request(VFlexDPUby2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_change_request\n"); );
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFlexDPUby2::_change_request_1(VFlexDPUby2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_change_request_1\n"); );
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFlexDPUby2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFlexDPUby2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_valid & 0xfeU))) {
        Verilated::overWidthError("io_valid");}
}
#endif  // VL_DEBUG

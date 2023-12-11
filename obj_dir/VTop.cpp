// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

//==========

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval\n"); );
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Top.v", 3209, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Top.v", 3209, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTop::_sequent__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_sequent__TOP__1\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__Top__DOT__delay;
    CData/*0:0*/ __Vdly__Top__DOT__PreProcessor__DOT__j;
    CData/*0:0*/ __Vdly__Top__DOT__PreProcessor__DOT__bitmap__DOT__i;
    CData/*0:0*/ __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid;
    SData/*15:0*/ __Vdly__Top__DOT__FDPU__DOT__delay4;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__delay2;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__ModuleIndex;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__delay;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i;
    IData/*31:0*/ __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j;
    // Body
    __Vdly__Top__DOT__FDPU__DOT__delay2 = vlTOPp->Top__DOT__FDPU__DOT__delay2;
    __Vdly__Top__DOT__delay = vlTOPp->Top__DOT__delay;
    __Vdly__Top__DOT__PreProcessor__DOT__bitmap__DOT__i 
        = vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i;
    __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
        = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j;
    __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
        = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i;
    __Vdly__Top__DOT__PreProcessor__DOT__j = vlTOPp->Top__DOT__PreProcessor__DOT__j;
    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__delay 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay;
    __Vdly__Top__DOT__FDPU__DOT__delay4 = vlTOPp->Top__DOT__FDPU__DOT__delay4;
    __Vdly__Top__DOT__FDPU__DOT__ModuleIndex = vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex;
    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid;
    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j;
    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j;
    vlTOPp->Top__DOT__PreProcessor__DOT__reg_0 = ((~ (IData)(vlTOPp->reset)) 
                                                  & ((0U 
                                                      != 
                                                      (0xffffU 
                                                       & vlTOPp->io_Streaming_matrix_0_0)) 
                                                     | (0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->io_Streaming_matrix_0_1))));
    vlTOPp->Top__DOT__PreProcessor__DOT__reg_1 = ((~ (IData)(vlTOPp->reset)) 
                                                  & ((0U 
                                                      != 
                                                      (0xffffU 
                                                       & vlTOPp->io_Streaming_matrix_1_0)) 
                                                     | (0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->io_Streaming_matrix_1_1))));
    vlTOPp->Top__DOT__high = ((~ (IData)(vlTOPp->reset)) 
                              & (IData)(vlTOPp->Top__DOT___GEN_3));
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__delay2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)))) {
            if ((4U > vlTOPp->Top__DOT__FDPU__DOT__delay2)) {
                __Vdly__Top__DOT__FDPU__DOT__delay2 
                    = vlTOPp->Top__DOT__FDPU__DOT___delay2_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_0 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_3))) {
            if ((1U & ((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i)) 
                       & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_0 = 1U;
            }
        } else {
            if ((1U & ((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i)) 
                       & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_0 = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__delay = 0U;
    } else {
        if ((1U <= (IData)(vlTOPp->Top__DOT__delay))) {
            __Vdly__Top__DOT__delay = vlTOPp->Top__DOT___delay_T_1;
        } else {
            if (vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2) {
                __Vdly__Top__DOT__delay = (1U & ((IData)(1U) 
                                                 + (IData)(vlTOPp->Top__DOT__delay)));
            }
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_3))) {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_42) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_1 = 1U;
            }
        } else {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_42) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_1 = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_0 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_3))) {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i) 
                 & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j)))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_0 = 1U;
            }
        } else {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i) 
                 & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j)))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_0 = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_3))) {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_1 = 1U;
            }
        } else {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_1 = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__PreProcessor__DOT__bitmap__DOT__i = 0U;
    } else {
        if (vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j) {
            __Vdly__Top__DOT__PreProcessor__DOT__bitmap__DOT__i 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = 0U;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0 = 0U;
    } else {
        if (((1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
             & (2U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
            vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0 
                = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1 = 0U;
    } else {
        if (((1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
             & (2U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
            vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1 
                = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i = 0U;
    } else {
        if (((1U > vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
             & (1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
            __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
                = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___i_T_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j = 0U;
    } else {
        if (((1U > vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j) 
             & (1U >= vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
            __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
                = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___j_T_1;
        } else {
            if (((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_8) 
                 & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_12))) {
                __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
                    = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___j_T_1;
            } else {
                if ((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10)))) {
                    __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j = 0U;
                }
            }
        }
    }
    if ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
               & (~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_0 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7;
    }
    if ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
               & vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_1 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7;
    }
    if ((1U & (vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
               & (~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_0 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7;
    }
    if ((1U & (vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
               & vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_1 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7;
    }
    if (((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7)) 
         & (2U > vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
        if ((1U & (~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
            vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0 
                = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_13);
        }
    }
    if (((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7)) 
         & (2U > vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
        if ((1U & vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) {
            vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1 
                = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_13);
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1 
        = ((IData)(vlTOPp->reset) ? 0U : (0x7fffU & 
                                          ((0xffffU 
                                            & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1) 
                                           * (0xffffU 
                                              & ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41))
                                                  : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41))))));
    if ((0x3cU > vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter)) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_0 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3))
                           ? (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder)))
                           : ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2))
                               ? (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder)))
                               : ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1))
                                   ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0)
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT___GEN_0)))));
    }
    if ((0x64U < vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter)) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_1 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3))
                           ? (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder)))
                           : ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2))
                               ? (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder)))
                               : ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1))
                                   ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0)
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT___GEN_0)))));
    }
    if ((0x3cU > vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter)) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_0 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3))
                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2)
                           : ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2))
                               ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3)
                               : (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))));
    }
    if ((0x64U < vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter)) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_1 
            = (0xffffU & ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3))
                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2)
                           : ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2))
                               ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3)
                               : (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))));
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__delay = 0U;
    } else {
        if ((8U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay)) {
            __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__delay 
                = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT___delay_T_1;
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__io_End_REG_1 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__io_End_REG;
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1 = 0U;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_45))
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_45))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_45));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_46))
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_46))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_46));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_47))
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_47))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_47));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_48))
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_48))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_48));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_50))
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_50))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_50));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_51))
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_51))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_51));
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) {
            if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) {
                if (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                     & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))) {
                    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i = 0U;
                }
            } else {
                if ((1U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)) {
                    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_61;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1 = 1U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2 = 1U;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 0U : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_54)
                    : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_54)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_53);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 1U : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_49)
                    : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_49)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_49);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)
                    ? (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))
                        ? 1U : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_55)
                    : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_55)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_52);
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) {
            if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) {
                if (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid) 
                     & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual)))) {
                    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j = 0U;
                }
            } else {
                __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j 
                    = ((1U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)
                        ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___j_T_1
                        : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_60);
            }
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT__delay2 = __Vdly__Top__DOT__FDPU__DOT__delay2;
    vlTOPp->Top__DOT__delay = __Vdly__Top__DOT__delay;
    vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i 
        = __Vdly__Top__DOT__PreProcessor__DOT__bitmap__DOT__i;
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
        = __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j;
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
        = __Vdly__Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay 
        = __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__delay;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j 
        = __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j;
    vlTOPp->Top__DOT__FDPU__DOT___delay2_T_1 = ((IData)(1U) 
                                                + vlTOPp->Top__DOT__FDPU__DOT__delay2);
    vlTOPp->Top__DOT___delay_T_1 = (1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->Top__DOT__delay)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_2));
    vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_42 
        = (1U & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i)));
    vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___j_T_1));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_1));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_0));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_12 
        = (1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j);
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j);
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_8 
        = (1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i);
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i);
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10 
        = ((1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
           & (2U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_13 
        = ((1U & vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)
            ? vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1
            : vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0 = 0U;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter 
            = vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT___counter_T_1;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2 
            = (0x7fffU & ((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                         ? ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                             ? ((2U 
                                                 == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                 ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                 : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                             : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42)))));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3 
            = (0x7fffU & ((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                         ? ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                             ? ((3U 
                                                 == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                 ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                 : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43))
                                             : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3)
                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43)))));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0 
            = (0x7fffU & ((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0) 
                          * (0xffffU & ((0U != (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                         ? ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                             ? ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                 ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                 : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                             : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40)))));
    }
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT___delay_T_1 
        = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay);
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__io_End_REG 
        = ((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i) 
           & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j);
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_13 
        = (1U & (~ ((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j) 
                    & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i))));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12 
        = ((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j) 
           & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual 
        = (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1) 
            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_1_1)) 
           & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0) 
               == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_1_0)) 
              & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1) 
                  == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_0_1)) 
                 & ((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0) 
                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_0_0)))));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) 
           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_77));
    if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_60 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_61 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_60 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_61 
            = ((1U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i)
                ? ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i);
    }
    vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___j_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT___counter_T_1 
        = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0 = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_5))) {
                if ((0U == (3U & vlTOPp->Top__DOT__FDPU__DOT__index))) {
                    vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0 
                        = vlTOPp->Top__DOT__FDPU__DOT___GEN_5;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__jloop = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if (((1U >= vlTOPp->Top__DOT__FDPU__DOT__iloop) 
                 & (IData)(vlTOPp->Top__DOT__FDPU__DOT___T_2))) {
                vlTOPp->Top__DOT__FDPU__DOT__jloop 
                    = vlTOPp->Top__DOT__FDPU__DOT___jloop_T_1;
            } else {
                if ((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT___T_6)))) {
                    vlTOPp->Top__DOT__FDPU__DOT__jloop = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1 = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_5))) {
                if ((1U == (3U & vlTOPp->Top__DOT__FDPU__DOT__index))) {
                    vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1 
                        = vlTOPp->Top__DOT__FDPU__DOT___GEN_5;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2 = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_5))) {
                if ((2U == (3U & vlTOPp->Top__DOT__FDPU__DOT__index))) {
                    vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2 
                        = vlTOPp->Top__DOT__FDPU__DOT___GEN_5;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3 = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_5))) {
                if ((3U == (3U & vlTOPp->Top__DOT__FDPU__DOT__index))) {
                    vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3 
                        = vlTOPp->Top__DOT__FDPU__DOT___GEN_5;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__iloop = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if (((IData)(vlTOPp->Top__DOT__FDPU__DOT___T) 
                 & (IData)(vlTOPp->Top__DOT__FDPU__DOT___T_5))) {
                vlTOPp->Top__DOT__FDPU__DOT__iloop 
                    = vlTOPp->Top__DOT__FDPU__DOT___iloop_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__index = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__high3) {
            if ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_5))) {
                vlTOPp->Top__DOT__FDPU__DOT__index 
                    = vlTOPp->Top__DOT__FDPU__DOT___index_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid) {
            if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23) {
                if ((1U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j)) {
                    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid 
                        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_158;
                }
            } else {
                if (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                     & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))) {
                    __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid) {
            if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23) {
                if ((1U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j)) {
                    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i 
                        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_160;
                }
            } else {
                if (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                     & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))) {
                    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid) {
            __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
                = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? ((1U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j)
                        ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___j_T_1
                        : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_26)
                            ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_154
                            : 0U)) : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                                       & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                                       ? 0U : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_154));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_3 = 0U;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_155
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_155))
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_92);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_142)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_142)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_80));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_143)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_143)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_81));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_144)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_144)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_82));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_145)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_145)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_83));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_146)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_146)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_84));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_147)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_147)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_85));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_148)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_148)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_86));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_149)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_149)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_87));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_0 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_150)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_150)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_88));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_1 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_151)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_151)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_89));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_2 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_152)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_152)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_90));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_3 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid)
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_153)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid) 
                        & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual)))
                        ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_153)))
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_91));
    }
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_1_1 
        = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_1_0 
        = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_0_1 
        = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_0_0 
        = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_77 
        = ((~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid)) 
           & ((1U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j) 
              & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)));
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__ModuleIndex = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__Statvalid) {
            if ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__high4) 
                  & (0x14U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__delay4))) 
                 & (1U > vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex))) {
                __Vdly__Top__DOT__FDPU__DOT__ModuleIndex 
                    = vlTOPp->Top__DOT__FDPU__DOT___ModuleIndex_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_0 = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__Statvalid) {
            vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_0 
                = vlTOPp->Top__DOT__FDPU__DOT___GEN_46;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_1 = 0U;
    } else {
        if (vlTOPp->Top__DOT__FDPU__DOT__Statvalid) {
            vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_1 
                = vlTOPp->Top__DOT__FDPU__DOT___GEN_48;
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG = vlTOPp->Top__DOT__FDPU__DOT__Statvalid;
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__FDPU__DOT__delay4 = 0U;
    } else {
        if ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__high4) 
              & (0x14U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__delay4))) 
             & (1U > vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex))) {
            __Vdly__Top__DOT__FDPU__DOT__delay4 = 0U;
        } else {
            if (vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid) {
                __Vdly__Top__DOT__FDPU__DOT__delay4 
                    = vlTOPp->Top__DOT__FDPU__DOT___delay4_T_1;
            } else {
                if (((IData)(vlTOPp->Top__DOT__FDPU__DOT__high4) 
                     & (0U < (IData)(vlTOPp->Top__DOT__FDPU__DOT__delay4)))) {
                    __Vdly__Top__DOT__FDPU__DOT__delay4 
                        = vlTOPp->Top__DOT__FDPU__DOT___delay4_T_1;
                }
            }
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT__high4 = ((~ (IData)(vlTOPp->reset)) 
                                          & ((~ (((IData)(vlTOPp->Top__DOT__FDPU__DOT__high4) 
                                                  & (0x14U 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__delay4))) 
                                                 & (1U 
                                                    > vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex))) 
                                             & (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_39)));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid 
        = ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
             & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
           & ((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j) 
              & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i)));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid 
        = __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
        = __Vdly__Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j;
    vlTOPp->Top__DOT__FDPU__DOT__delay4 = __Vdly__Top__DOT__FDPU__DOT__delay4;
    vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex = __Vdly__Top__DOT__FDPU__DOT__ModuleIndex;
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_0));
    vlTOPp->Top__DOT__FDPU__DOT___index_T_1 = ((IData)(1U) 
                                               + vlTOPp->Top__DOT__FDPU__DOT__index);
    vlTOPp->Top__DOT__FDPU__DOT___T = (1U > vlTOPp->Top__DOT__FDPU__DOT__iloop);
    vlTOPp->Top__DOT__FDPU__DOT___iloop_T_1 = ((IData)(1U) 
                                               + vlTOPp->Top__DOT__FDPU__DOT__iloop);
    vlTOPp->Top__DOT__FDPU__DOT___T_2 = (1U > vlTOPp->Top__DOT__FDPU__DOT__jloop);
    vlTOPp->Top__DOT__FDPU__DOT___T_5 = (1U == vlTOPp->Top__DOT__FDPU__DOT__jloop);
    vlTOPp->Top__DOT__FDPU__DOT___jloop_T_1 = ((IData)(1U) 
                                               + vlTOPp->Top__DOT__FDPU__DOT__jloop);
    vlTOPp->Top__DOT__FDPU__DOT__high3 = ((~ (IData)(vlTOPp->reset)) 
                                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT___GEN_1));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_23 
        = (1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid)));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j);
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_154 
        = (((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i) 
            & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j))
            ? ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j)
            : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j);
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_26 
        = ((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j) 
           & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17 
        = ((1U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i)
            ? ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                 & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1)
                : 0U) : ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                          ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0)
                          : 0U));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15 
        = ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
                  & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i))
            ? ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                 & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1)
                : 0U) : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
                                & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i)))
                          ? ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                               & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                              & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                              ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0)
                              : 0U) : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j) 
                                              & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i))
                                        ? ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                             & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1)
                                            : 0U) : 
                                       ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                         ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0)
                                         : 0U))));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual 
        = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_1) 
            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStreaming_matrix_1)) 
           & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_1) 
               == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_1_1)) 
              & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_0) 
                  == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_1_0)) 
                 & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_0) 
                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStreaming_matrix_0)) 
                    & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_1) 
                        == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_0_1)) 
                       & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_0) 
                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_0_0)))))));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_1)) 
             & (1U == (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_5)))) {
            if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_31))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0 = 0U;
            }
        } else {
            if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_31))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0 
                    = (0xffffU & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                                   & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))
                                   ? vlTOPp->io_Stationary_matrix_1_1
                                   : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_16)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_1)) 
             & (1U == (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_5)))) {
            if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1 = 0U;
            }
        } else {
            if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1 
                    = (0xffffU & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                                   & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))
                                   ? vlTOPp->io_Stationary_matrix_1_1
                                   : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_16)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_1)) 
             & (1U == (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_5)))) {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_31))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0 = 0U;
            }
        } else {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_31))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0 
                    = (0xffffU & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                                   & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))
                                   ? vlTOPp->io_Stationary_matrix_1_1
                                   : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_16)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1 = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_1)) 
             & (1U == (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_5)))) {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1 = 0U;
            }
        } else {
            if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                 & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))) {
                vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1 
                    = (0xffffU & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                                   & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))
                                   ? vlTOPp->io_Stationary_matrix_1_1
                                   : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___GEN_16)));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__PreProcessor__DOT__j = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2)))) {
            if (vlTOPp->Top__DOT__PreProcessor__DOT__i) {
                __Vdly__Top__DOT__PreProcessor__DOT__j 
                    = (1U & ((IData)(1U) + (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j)));
            }
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT___delay4_T_1 = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlTOPp->Top__DOT__FDPU__DOT__delay4)));
    vlTOPp->Top__DOT__FDPU__DOT___ModuleIndex_T_1 = 
        ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex);
    vlTOPp->Top__DOT__FDPU__DOT__Statvalid = ((~ (IData)(vlTOPp->reset)) 
                                              & (IData)(vlTOPp->Top__DOT__FDPU__DOT___T_6));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_32 
        = (0xffffU & ((1U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k)
                       ? vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_1
                       : vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_0));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) 
           & ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
               & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
              & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__io_End_REG_1)));
    if (vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1 = 0U;
    }
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_158 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_26) 
           | (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_160 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___T_26)
            ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i
            : ((1U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i)
                ? ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_8 
        = (0xffffU & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17) 
                       - (IData)(1U)) - ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15) 
                                         - (IData)(1U))));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_17 
        = (0xffffU & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15) 
                       - (IData)(1U)) - ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17) 
                                         - (IData)(1U))));
    vlTOPp->Top__DOT__PreProcessor__DOT__j = __Vdly__Top__DOT__PreProcessor__DOT__j;
    vlTOPp->Top__DOT__FDPU__DOT___T_6 = ((1U == vlTOPp->Top__DOT__FDPU__DOT__iloop) 
                                         & (1U == vlTOPp->Top__DOT__FDPU__DOT__jloop));
    if (vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_50 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_32))
                           ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                               ? ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k 
                                         - (IData)(1U)))
                                   ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0)
                                   : (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2 
                                      - (IData)(1U)))
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0)));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_51 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_32))
                           ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                               ? ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k 
                                         - (IData)(1U)))
                                   ? (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2 
                                      - (IData)(1U))
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1))
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1)));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_53 
            = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_32))
                ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                    ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_13)
                        ? ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k)
                        : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k)
                    : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_52 
            = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_32))
                ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                    ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_13)
                        ? ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                        : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                    : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2)
                : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2);
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_50 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_51 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_53 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_52 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2;
    }
    vlTOPp->Top__DOT__FDPU__DOT___GEN_39 = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid) 
                                            | (((IData)(vlTOPp->Top__DOT__FDPU__DOT__high4) 
                                                & (0U 
                                                   < (IData)(vlTOPp->Top__DOT__FDPU__DOT__delay4))) 
                                               | (IData)(vlTOPp->Top__DOT__FDPU__DOT__high4)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3 
        = ((((8U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3) 
                    << 3U)) | (4U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3) 
                    >> 3U)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2 
        = ((((8U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2) 
                    << 3U)) | (4U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2) 
                    >> 3U)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1 
        = ((((8U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1) 
                    << 3U)) | (4U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1) 
                    >> 3U)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0 
        = ((((8U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0) 
                    << 3U)) | (4U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0) 
                                     << 1U))) | (2U 
                                                 & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0) 
                                                    >> 1U))) 
           | (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0) 
                    >> 3U)));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
           != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_2 
        = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)) 
           & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_4 
        = (((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)) 
            & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1))) 
           & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___GEN_154 
        = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
            != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)) 
           != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_26 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
           != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_11 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
           != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_0 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->Top__DOT__FDPU__DOT___GEN_1 = ((((IData)(vlTOPp->Top__DOT__high) 
                                             & (1U 
                                                > vlTOPp->Top__DOT__FDPU__DOT__iloop)) 
                                            & (1U > vlTOPp->Top__DOT__FDPU__DOT__jloop)) 
                                           | ((~ ((1U 
                                                   == vlTOPp->Top__DOT__FDPU__DOT__iloop) 
                                                  & (1U 
                                                     == vlTOPp->Top__DOT__FDPU__DOT__jloop))) 
                                              & (IData)(vlTOPp->Top__DOT__FDPU__DOT__high3)));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStreaming_matrix_1 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_1;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStreaming_matrix_0 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_0;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_1_1 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_1;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_1_0 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_0;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_0_1 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_1;
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_0_0 
        = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_0;
    vlTOPp->Top__DOT__PreProcessor__DOT___GEN_31 = 
        (1U & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j)));
    vlTOPp->Top__DOT__PreProcessor__DOT___GEN_1 = ((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j)
                                                    ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__reg_1)
                                                    : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__reg_0));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__PreProcessor__DOT__i = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2)))) {
            vlTOPp->Top__DOT__PreProcessor__DOT__i 
                = vlTOPp->Top__DOT__PreProcessor__DOT___i_T_1;
        }
    }
    vlTOPp->Top__DOT__FDPU__DOT___GEN_5 = ((1U & (vlTOPp->Top__DOT__FDPU__DOT__iloop 
                                                  & vlTOPp->Top__DOT__FDPU__DOT__jloop))
                                            ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1)
                                            : ((1U 
                                                & (vlTOPp->Top__DOT__FDPU__DOT__iloop 
                                                   & (~ vlTOPp->Top__DOT__FDPU__DOT__jloop)))
                                                ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0)
                                                : (
                                                   (1U 
                                                    & ((~ vlTOPp->Top__DOT__FDPU__DOT__iloop) 
                                                       & vlTOPp->Top__DOT__FDPU__DOT__jloop))
                                                    ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1)
                                                    : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_7 
        = ((1U & (vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
                  & vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))
            ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1)
            : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
                      & (~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0)
                : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
                          & vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))
                    ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1)
                    : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0))));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_7 
        = ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                  & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
            ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1)
            : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                      & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0)
                : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                          & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                    ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1)
                    : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0))));
    if (vlTOPp->Top__DOT__delay) {
        vlTOPp->io_Third_Matrix_0_0 = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_0)
                                            : 0U) : 0U);
        vlTOPp->io_Third_Matrix_0_1 = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_1)
                                            : 0U) : 0U);
        vlTOPp->io_Third_Matrix_1_0 = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_0)
                                            : 0U) : 0U);
        vlTOPp->io_Third_Matrix_1_1 = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_1)
                                            : 0U) : 0U);
    } else {
        vlTOPp->io_Third_Matrix_0_0 = 0U;
        vlTOPp->io_Third_Matrix_0_1 = 0U;
        vlTOPp->io_Third_Matrix_1_0 = 0U;
        vlTOPp->io_Third_Matrix_1_1 = 0U;
    }
    if ((2U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k)) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_54 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_55 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_54 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_53;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_55 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_52;
    }
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                           ? 2U : 3U)) & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                     ? 2U
                                                     : 3U)) 
                                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                      ? 2U
                                                      : 3U)) 
                                                   & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                       ? 2U
                                                       : 3U)) 
                                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                     ? 2U
                                                     : 3U))))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                           ? 3U : 2U)) & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                     ? 3U
                                                     : 2U)) 
                                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                      ? 3U
                                                      : 2U)) 
                                                   & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                       ? 3U
                                                       : 2U)) 
                                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                     ? 3U
                                                     : 2U))))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                        & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                              >> 1U)))) ? (1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1)))
                  : ((1U & ((~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1)) 
                            & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                  >> 1U)))) ? (1U & 
                                               (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1)))
                      : ((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))))
                          : ((1U & ((~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1)) 
                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))))
                              : (1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))))))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0)) 
                        & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                              >> 1U)))) ? (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                  : ((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                            & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                  >> 1U)))) ? (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                      : ((1U & ((~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0)) 
                                & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0)))
                          : ((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0)))
                              : (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0)))))));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_37 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15) 
           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_26));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27 
        = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
           & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
              == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)));
    vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17 
        = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)) 
           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_11));
    if ((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_1 
            = (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_1);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_0 
            = (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_0);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_1 
            = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_0 
            = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_1 
            = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_0 
            = vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_0 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_1 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_0 = 0U;
    }
    if (vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_49 
            = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_7))
                ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                    ? (((~ ((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j) 
                            & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i))) 
                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG))
                        ? ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                        : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                    : 2U) : vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1);
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_45 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_7))
                           ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                               ? ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                                         & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                                   ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0))
                               : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                                         & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                                   ? 1U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0)))
                           : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                                     & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                               ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0))));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_46 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_7))
                           ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                               ? ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                                         & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                                   ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1))
                               : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                                         & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                                   ? 1U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1)))
                           : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i) 
                                     & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                               ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1))));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_47 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_7))
                           ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                               ? ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                                         & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                                   ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0))
                               : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                                         & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                                   ? 1U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0)))
                           : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                                     & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j)))
                               ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0))));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_48 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_7))
                           ? ((5U > vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1)
                               ? ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                                         & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                                   ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1
                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1))
                               : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                                         & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                                   ? 1U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1)))
                           : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i 
                                     & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j))
                               ? 0U : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1))));
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_49 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_45 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_46 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_47 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___GEN_48 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1));
    }
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                     ? 2U : 3U)) & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                         ? 2U : 3U)) & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                    ? 2U : 3U) : (((2U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                            ? 2U : 3U)) 
                                   & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                     ? 3U : 2U)) & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                         ? 3U : 2U)) & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                           >> 1U)))
                ? ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                    ? 3U : 2U) : (((2U == ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                            ? 3U : 2U)) 
                                   & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                         >> 1U))) ? 
                                  ((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                        >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                            >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                    >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                        >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                            >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                    >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    if (((((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)) 
           & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1))) 
          & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
         & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))) {
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3 
            = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_37) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                ? 0U : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15) 
                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_26)) 
                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                         ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)
                         : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27) 
                             & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                             ? 0U : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                       & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                                      ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)
                                      : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17) 
                                          & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                             != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                          ? 0U : ((
                                                   (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)) 
                                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_11)) 
                                                   & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                                     & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                                        != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                                    ? 0U
                                                    : 
                                                   ((vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___GEN_154 
                                                     != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3))
                                                     ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)
                                                     : 0U))))))));
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2 
            = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_37) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                ? 0U : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15) 
                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_26)) 
                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                         ? 0U : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27) 
                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                                  ? 0U : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                            & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                               == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                                           ? 0U : (
                                                   ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17) 
                                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                                       != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)
                                                    : 
                                                   (((((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)) 
                                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_11)) 
                                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                                       & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                                          != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                                      & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                                         == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                                      ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)
                                                      : 
                                                     ((vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___GEN_154 
                                                       != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3))
                                                       ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)
                                                       : 0U))))))));
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1 
            = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_37) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                ? 0U : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15) 
                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_26)) 
                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                         ? 0U : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27) 
                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                                  ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                                  : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                       & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                      & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                                      ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                                      : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17) 
                                          & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                             != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                          ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)
                                          : (((((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
                                                == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)) 
                                               & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_11)) 
                                              & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                                              ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)
                                              : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                                   & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                                      != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                                  ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                                                  : 
                                                 ((vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___GEN_154 
                                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3))
                                                   ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                                                   : 0U))))))));
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0 
            = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_37) 
                & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15) 
                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_26)) 
                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                    : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27) 
                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                        : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                             & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_23))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                            : (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17) 
                                & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                : (((((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0) 
                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)) 
                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_11)) 
                                    & (IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_13))
                                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                    : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7) 
                                         & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1) 
                                            != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                        & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2) 
                                           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                        : ((vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___GEN_154 
                                            != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3))
                                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                            : 0U))))))));
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1 
            = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_4) 
                & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2)
                    : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27)
                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                        : 0U)) : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_2) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                   & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                   ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15)
                                       ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                                       : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7)
                                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1)
                                           : 0U)) : 0U));
        vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0 
            = (((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_4) 
                & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_17)
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                    : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_27)
                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                        : 0U)) : ((((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_2) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                   & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                   ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_15)
                                       ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                       : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper__DOT___T_7)
                                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                           : 0U)) : 
                                  (((((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)) 
                                      & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1))) 
                                     & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2))) 
                                    & (0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3)))
                                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0)
                                    : 0U)));
    }
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_11 
        = ((1U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i)
            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_1)
            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_0));
    vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_9 
        = ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
                  & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i))
            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_1)
            : ((1U & (vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j 
                      & (~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i)))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_0)
                : ((1U & ((~ vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j) 
                          & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i))
                    ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_1)
                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_0))));
    vlTOPp->Top__DOT__PreProcessor__DOT___i_T_1 = (1U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)));
    if (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
         & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))) {
        vlTOPp->Top__DOT__PreProcessor__DOT___GEN_5 
            = vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_1;
        vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2 = 1U;
    } else {
        vlTOPp->Top__DOT__PreProcessor__DOT___GEN_5 
            = (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j)))
                ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_0)
                : (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)) 
                    & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))
                    ? (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_1)
                    : (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_0)));
        vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2 = 0U;
    }
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                        >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                            >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                    >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                        >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                            >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                    >> 2U))) ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                             >> 2U))
                                          ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                                 >> 2U))
                                              ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_1 
        = (3U & ((8U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))
                  ? ((0U == (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))) : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_3)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue 
        = (3U & ((8U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                  ? ((0U == (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))) : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    if (((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_9)) 
         & (0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_11)))) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_84 
            = ((0U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_85 
            = ((1U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_86 
            = ((2U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_87 
            = ((3U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_11)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_88 
            = ((0U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_9)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_0));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_89 
            = ((1U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_9)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_1));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_90 
            = ((2U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_9)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_2));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_91 
            = ((3U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_9)
                : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_3));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_92 
            = ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid)
                ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter
                : (((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j) 
                    & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i))
                    ? vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter
                    : ((IData)(1U) + vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter)));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_80 
            = (0xfU & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15) 
                        < (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17))
                        ? ((0U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_8)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0))
                        : ((0U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_17)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0))));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_81 
            = (0xfU & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15) 
                        < (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17))
                        ? ((1U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_8)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1))
                        : ((1U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_17)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1))));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_82 
            = (0xfU & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15) 
                        < (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17))
                        ? ((2U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_8)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2))
                        : ((2U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_17)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2))));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_83 
            = (0xfU & (((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_15) 
                        < (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_17))
                        ? ((3U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_8)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3))
                        : ((3U == (3U & vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter))
                            ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___mux_T_17)
                            : (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3))));
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_84 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_85 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_86 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_87 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_88 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_89 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_90 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_91 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_3;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_92 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_80 
            = (0xfU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_81 
            = (0xfU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_82 
            = (0xfU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2));
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_83 
            = (0xfU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3));
    }
    vlTOPp->Top__DOT___GEN_3 = ((1U <= (IData)(vlTOPp->Top__DOT__delay)) 
                                | ((IData)(vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2) 
                                   | (IData)(vlTOPp->Top__DOT__high)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3 
        = (3U & ((8U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                  ? ((0U == (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))) : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_7)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                  ? ((0U == (1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_10 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                           ? ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0
                               : 0U) : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_11 
            = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                ? ((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue))
                    ? (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0)
                    : 0U) : 0U);
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_12 
            = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                ? ((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue))
                    ? (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0)
                    : 0U) : 0U);
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_13 
            = ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))
                ? ((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue))
                    ? (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0)
                    : 0U) : 0U);
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_10 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_11 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_12 = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_13 = 0U;
    }
    if (((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i) 
         & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j))) {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_146 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_147 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_148 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_149 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_150 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_151 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_152 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_153 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_3;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_155 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_142 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_143 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_144 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_145 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_146 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_84;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_147 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_85;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_148 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_86;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_149 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_87;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_150 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_88;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_151 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_89;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_152 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_90;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_153 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_91;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_155 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_92;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_142 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_80;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_143 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_81;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_144 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_82;
        vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_145 
            = vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT___GEN_83;
    }
    if ((0U != (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_25 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))
                           ? ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_1))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_10))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_10)));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_26 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))
                           ? ((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_1))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_11))
                           : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_27 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))
                           ? ((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_1))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_12))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_12)));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_28 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1))
                           ? ((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_1))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_13))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_13)));
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_25 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_10));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_26 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_11));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_27 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_12));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_28 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_13));
    }
    if ((0U != (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2))) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                           ? ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_2))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_25))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_25)));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                           ? ((1U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_2))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_26))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_26)));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                           ? ((2U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_2))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_27))
                           : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43 
            = (0xffffU & ((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                           ? ((3U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_2))
                               ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2
                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_28))
                           : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_28)));
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_25));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_26));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_27));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43 
            = (0xffffU & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_28));
    }
}

VL_INLINE_OPT void VTop::_combo__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_combo__TOP__3\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT___GEN_3 
        = (0xffffU & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i) 
                       & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))
                       ? vlTOPp->io_Stationary_matrix_1_1
                       : (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i) 
                           & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j)))
                           ? vlTOPp->io_Stationary_matrix_1_0
                           : (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i)) 
                               & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j))
                               ? vlTOPp->io_Stationary_matrix_0_1
                               : vlTOPp->io_Stationary_matrix_0_0))));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
    } else {
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? 0U : ((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2))) 
                        + (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3)))));
        vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? 0U : ((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0))) 
                        + (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1)))));
    }
    if ((1U & vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex)) {
        vlTOPp->Top__DOT__FDPU__DOT___GEN_46 = (0xffffU 
                                                & vlTOPp->io_Streaming_matrix_0_1);
        vlTOPp->Top__DOT__FDPU__DOT___GEN_48 = (0xffffU 
                                                & vlTOPp->io_Streaming_matrix_1_1);
    } else {
        vlTOPp->Top__DOT__FDPU__DOT___GEN_46 = (0xffffU 
                                                & vlTOPp->io_Streaming_matrix_0_0);
        vlTOPp->Top__DOT__FDPU__DOT___GEN_48 = (0xffffU 
                                                & vlTOPp->io_Streaming_matrix_1_0);
    }
    vlTOPp->Top__DOT__PreProcessor__DOT___GEN_16 = 
        (0xffffU & (((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i) 
                     & (~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j)))
                     ? vlTOPp->io_Stationary_matrix_1_0
                     : (((~ (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__i)) 
                         & (IData)(vlTOPp->Top__DOT__PreProcessor__DOT__j))
                         ? vlTOPp->io_Stationary_matrix_0_1
                         : vlTOPp->io_Stationary_matrix_0_0)));
    vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT___GEN_0 
        = (0xffffU & ((0U == (0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0))
                       ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1)
                       : (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder)))));
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTop::_change_request_1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request_1\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

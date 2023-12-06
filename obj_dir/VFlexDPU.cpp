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
            VL_FATAL_MT("FlexDPU.v", 8843, "",
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
            VL_FATAL_MT("FlexDPU.v", 8843, "",
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
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j;
    // Body
    __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j;
    __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j;
    __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j;
    __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j;
    __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i;
    __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i;
    __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i;
    __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i;
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
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_2 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_2;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_0;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_1 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_1;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_3 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_3;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_0 
        = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_0;
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_3 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_3 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_3 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_3 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_1Reg_4;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_1Reg_4;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_1Reg_4;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_6;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_6;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_6;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_7;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_7;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_7;
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder
                        : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0_io_o_adder
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0_io_o_adder
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0_io_o_adder
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_1))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_3))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_1))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_1))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_1))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_3))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_3))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_3))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76)))));
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder = 0U;
        } else {
            if (vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder 
                    = ((3U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
                        ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2)))
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3);
            }
        }
    }
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
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_1Reg_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_1Reg_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_1Reg_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_0))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_1;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_2))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                 ? 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_0;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_0))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_0;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_0))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_0;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_0))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_1;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_2))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                 ? 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_1;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2 
            = (0x7fffU & (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                            ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_2))
                            : 0U) * (0xffffU & ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                 ? 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75))
                                                 : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_1;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2 
        = ((IData)(vlTOPp->reset) ? 0U : (0x7fffU & 
                                          (((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_2))
                                             : 0U) 
                                           * (0xffffU 
                                              & ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                  ? 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                   : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75))
                                                  : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75))))));
    vlTOPp->FlexDPU__DOT___ModuleIndex_T_1 = ((IData)(1U) 
                                              + vlTOPp->FlexDPU__DOT__ModuleIndex);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_2 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_2 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_2 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_2 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2))));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_0 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_0 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_0 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_0 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1))));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1) 
                                         & ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2) 
                                            == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3))));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_0));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7))
            ? (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3)))
            : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder);
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_3;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_3;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_3;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_3;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_2));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_2));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_32))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_32))
                             ? 3U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_143))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_143))
                             ? 4U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1)
                ? ((((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0) 
                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1)) 
                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_258)) 
                     & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_268)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_278))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_258) 
                              & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_268)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_278))
                             ? 4U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0) 
                                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1)) 
                                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_278))
                                      ? 3U : 0U))) : 0U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_32))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_32))
                             ? 3U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_143))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_143))
                             ? 4U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1)
                ? ((((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0) 
                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1)) 
                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_258)) 
                     & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_268)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_278))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_258) 
                              & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_268)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_278))
                             ? 4U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0) 
                                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1)) 
                                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_278))
                                      ? 3U : 0U))) : 0U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_32))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_32))
                             ? 3U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_143))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_143))
                             ? 4U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1)
                ? ((((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0) 
                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1)) 
                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_258)) 
                     & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_268)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_278))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_258) 
                              & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_268)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_278))
                             ? 4U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0) 
                                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1)) 
                                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_278))
                                      ? 3U : 0U))) : 0U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_32))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_32))
                             ? 3U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1)
                ? ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2) 
                     != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_143))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2) 
                              == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_143))
                             ? 4U : 0U)) : 0U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1)
                ? ((((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0) 
                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1)) 
                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_258)) 
                     & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_268)) 
                    & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_278))
                    ? 5U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_258) 
                              & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_268)) 
                             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_278))
                             ? 4U : ((((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0) 
                                       == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1)) 
                                      & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_278))
                                      ? 3U : 0U))) : 0U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_0;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_1;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_2;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_0;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_1;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_2;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_0;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_1;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_2;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_0));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_0;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_1;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_2;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_0 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_268 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_32 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_143 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_258 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2) 
           == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT___T_278 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_3 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                             ? 0U : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                      ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                               ? ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                      ? 1U
                                                      : 9U))))
                                               : ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 9U)))))
                : 9U);
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                             ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : ((1U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    < vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 0xaU))))
                             : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                 ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                          ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                              ? 1U : 
                                             ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : ((2U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0xaU)))
                                          : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                              ? 0U : 0xaU)))))
                : 0xaU);
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : 5U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                     ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                              ? 5U : 
                                             ((3U < vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : 5U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                            ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                     ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                         ? 1U : ((3U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 5U))
                                     : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                         ? 0U : 5U)))))
                : 5U);
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_3 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                 ? 0x16U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                             ? 1U : 0x16U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                     ? 0x16U : ((1U 
                                                 == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                 ? 0x16U
                                                 : 
                                                ((3U 
                                                  < vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x16U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                            ? ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                ? 1U : 0x16U) : ((0U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                                  ? 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0x16U)
                                                  : 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 0x16U)))))
                : 0x16U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_0 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_268 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_32 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_143 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_258 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2) 
           == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT___T_278 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_3 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                             ? 0U : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                      ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                               ? ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                      ? 1U
                                                      : 4U))))
                                               : ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 4U)))))
                : 4U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                             ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : ((1U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    < vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 0x10U))))
                             : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                 ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                          ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                              ? 1U : 
                                             ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : ((2U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0x10U)))
                                          : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                              ? 0U : 0x10U)))))
                : 0x10U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : 0x1eU)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                     ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                              ? 0x1eU
                                              : ((3U 
                                                  < vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x1eU))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                            ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                     ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                         ? 1U : ((3U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x1eU))
                                     : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                         ? 0U : 0x1eU)))))
                : 0x1eU);
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_3 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                 ? 0x11U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                             ? 1U : 0x11U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                     ? 0x11U : ((1U 
                                                 == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                 ? 0x11U
                                                 : 
                                                ((3U 
                                                  < vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x11U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                            ? ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                ? 1U : 0x11U) : ((0U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                                  ? 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0x11U)
                                                  : 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 0x11U)))))
                : 0x11U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_0 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_268 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_32 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_143 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_258 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2) 
           == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT___T_278 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_3 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                             ? 0U : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                      ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                               ? ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                      ? 1U
                                                      : 0x1aU))))
                                               : ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 0x1aU)))))
                : 0x1aU);
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                             ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : ((1U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    < vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 4U))))
                             : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                 ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                          ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                              ? 1U : 
                                             ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : ((2U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 4U)))
                                          : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                              ? 0U : 4U)))))
                : 4U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : 0x19U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                     ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                              ? 0x19U
                                              : ((3U 
                                                  < vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x19U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                            ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                     ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                         ? 1U : ((3U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x19U))
                                     : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                         ? 0U : 0x19U)))))
                : 0x19U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_3 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                 ? 0x12U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                             ? 1U : 0x12U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                     ? 0x12U : ((1U 
                                                 == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                 ? 0x12U
                                                 : 
                                                ((3U 
                                                  < vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x12U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                            ? ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                ? 1U : 0x12U) : ((0U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                                  ? 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0x12U)
                                                  : 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 0x12U)))))
                : 0x12U);
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_0 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_268 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_32 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_143 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_258 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2) 
           == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT___T_278 
        = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1) 
           != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2));
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_0 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_1 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_2 = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_3 = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_0 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                             ? 0U : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                      ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                               ? ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                      ? 1U
                                                      : 0x14U))))
                                               : ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 0x14U)))))
                : 0x14U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_1 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                    ? 0U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                             ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : ((1U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    < vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                    ? 1U
                                                    : 0x1dU))))
                             : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                 ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                          ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                              ? 1U : 
                                             ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : ((2U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0x1dU)))
                                          : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                              ? 0U : 0x1dU)))))
                : 0x1dU);
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_2 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                 ? 1U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                          ? 1U : 9U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                     ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                              ? 9U : 
                                             ((3U < vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                               ? 1U
                                               : 9U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                            ? 0U : ((0U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                     ? ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                         ? 1U : ((3U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 9U))
                                     : ((4U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                         ? 0U : 9U)))))
                : 9U);
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_3 
            = ((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10)
                ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                    ? ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                        ? 1U : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                 ? 0x18U : ((2U < vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                             ? 1U : 0x18U)))
                    : ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                        ? ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                            ? 1U : ((2U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                     ? 0x18U : ((1U 
                                                 == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                 ? 0x18U
                                                 : 
                                                ((3U 
                                                  < vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                  ? 1U
                                                  : 0x18U))))
                        : ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                            ? ((1U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                ? 1U : 0x18U) : ((0U 
                                                  == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                                  ? 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1)
                                                   ? 1U
                                                   : 0x18U)
                                                  : 
                                                 ((4U 
                                                   == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0)
                                                   ? 0U
                                                   : 0x18U)))))
                : 0x18U);
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0 
                = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1 
                = ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_3))
                    ? ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                          & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                         | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                             & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                        | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___rowcount_1_T_1
                        : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_70)
                    : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1);
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_9))) {
            __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
                = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___i_T_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j) 
             & (3U >= vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
            __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
                = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___j_T_1;
        } else {
            if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10)))) {
                __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j = 0U;
            }
        }
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31;
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31))) {
            if ((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31))) {
            if ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31))) {
            if ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_2 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31))) {
            if ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_3 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1 
                = ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_3))
                    ? ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                          & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                         | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                             & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                        | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___rowcount_1_T_1
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_70)
                    : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1);
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i) 
             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_9))) {
            __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___i_T_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j) 
             & (3U >= vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))) {
            __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___j_T_1;
        } else {
            if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10)))) {
                __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j = 0U;
            }
        }
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31;
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31))) {
            if ((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_0 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31))) {
            if ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31))) {
            if ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_2 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31))) {
            if ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_3 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1 
                = ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_3))
                    ? ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                          & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                         | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                             & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                        | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___rowcount_1_T_1
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_70)
                    : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1);
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i) 
             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_9))) {
            __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___i_T_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j) 
             & (3U >= vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))) {
            __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___j_T_1;
        } else {
            if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10)))) {
                __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j = 0U;
            }
        }
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31;
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31))) {
            if ((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_0 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31))) {
            if ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31))) {
            if ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_2 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31))) {
            if ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_3 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1 = 0U;
    } else {
        if (((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i) 
             & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j))) {
            vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1 
                = ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_3))
                    ? ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                          & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                         | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                             & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                        | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)) 
                            & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                           & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_0))))
                        ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___rowcount_1_T_1
                        : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_70)
                    : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1);
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i) 
             & (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_9))) {
            __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___i_T_1;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j = 0U;
    } else {
        if (((3U > vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j) 
             & (3U >= vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))) {
            __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j 
                = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___j_T_1;
        } else {
            if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10)))) {
                __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j = 0U;
            }
        }
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_0 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_1 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_2 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
         & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))) {
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_3 
            = vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31;
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31))) {
            if ((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_0 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31))) {
            if ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31))) {
            if ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_2 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_64)))) {
        if ((0U != (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31))) {
            if ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))) {
                vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_3 
                    = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_51);
            }
        }
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j 
        = __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i 
        = __Vdly__FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j 
        = __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j;
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i 
        = __Vdly__FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j 
        = __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j;
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i 
        = __Vdly__FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j 
        = __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j;
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i 
        = __Vdly__FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i;
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_64 
        = (4U <= vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___rowcount_1_T_1 
        = (vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1 
           - (IData)(2U));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_9 
        = (3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10 
        = ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
           & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_51 
        = ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_3
            : ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_2
                : ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i))
                    ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1
                    : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0)));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_64 
        = (4U <= vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___rowcount_1_T_1 
        = (vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1 
           - (IData)(2U));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_9 
        = (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10 
        = ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i) 
           & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_51 
        = ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_3
            : ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_2
                : ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i))
                    ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1
                    : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_0)));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_64 
        = (4U <= vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___rowcount_1_T_1 
        = (vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1 
           - (IData)(2U));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_9 
        = (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10 
        = ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i) 
           & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_51 
        = ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_3
            : ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_2
                : ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i))
                    ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1
                    : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_0)));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_64 
        = (4U <= vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___rowcount_1_T_1 
        = (vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1 
           - (IData)(2U));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_9 
        = (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___j_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___i_T_1 
        = ((IData)(1U) + vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10 
        = ((3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i) 
           & (3U == vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_51 
        = ((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_3
            : ((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_2
                : ((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i))
                    ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1
                    : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_0)));
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
    if (vlTOPp->reset) {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2_io_o_adder = 0U;
    } else {
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3)))));
        vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2_io_o_adder 
            = ((0U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en))
                ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder
                : ((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2))) 
                   + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3)))));
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_70 
        = ((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
             & ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                | (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
            | ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
               & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
            ? (vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1 
               - (IData)(1U)) : ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                    & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                                   | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                       & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                                  | (((0U == (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
                                  ? (vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1 
                                     - (IData)(3U))
                                  : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_23 
        = (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_3)
            : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_2)
                : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                    : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                        & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                        : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_0_3)
                            : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_0_2)
                                : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_70 
        = ((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
             & ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                | (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
            | ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
               & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
            ? (vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1 
               - (IData)(1U)) : ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                    & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                                   | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                       & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                                  | (((0U == (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
                                  ? (vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1 
                                     - (IData)(3U))
                                  : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_23 
        = (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_3)
            : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_2)
                : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                    : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                        & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                        : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_0_3)
                            : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_0_2)
                                : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_70 
        = ((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
             & ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                | (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
            | ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
               & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
            ? (vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1 
               - (IData)(1U)) : ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                    & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                                   | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                       & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                                  | (((0U == (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
                                  ? (vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1 
                                     - (IData)(3U))
                                  : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_23 
        = (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_3)
            : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_2)
                : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                    : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                        & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                        : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_0_3)
                            : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_0_2)
                                : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_70 
        = ((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
             & ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
                | (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
            | ((0U != (IData)(vlTOPp->io_Stationary_matrix_1_1)) 
               & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
            ? (vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1 
               - (IData)(1U)) : ((((((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                    & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_2))) 
                                   | (((0U != (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                       & (0U == (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2)))) 
                                  | (((0U == (IData)(vlTOPp->io_Stationary_matrix_1_0)) 
                                      & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_1))) 
                                     & (0U != (IData)(vlTOPp->io_Stationary_matrix_1_2))))
                                  ? (vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1 
                                     - (IData)(3U))
                                  : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_23 
        = (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_3)
            : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_2)
                : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                    : (((1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                        & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                        : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_0_3)
                            : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                                & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_0_2)
                                : (((0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                                    & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))))))));
    if (vlTOPp->FlexDPU__DOT__Statvalid) {
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_3 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_3 
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
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_2 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_0 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_1 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_2 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_3 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_0 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_1 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_2 
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
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_0 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_1 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_2 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_3 
            = vlTOPp->io_Stationary_matrix_1_3;
    } else {
        vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_3 = 0U;
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
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_3_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_2_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_3_2 = 0U;
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
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_4_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_5_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_6_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_7_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_8_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_9_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_10_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_11_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_12_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_13_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_14_io_Stationary_matrix_1_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_0_3 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_0 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_1 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_2 = 0U;
        vlTOPp->FlexDPU__DOT__PathFinder_15_io_Stationary_matrix_1_3 = 0U;
    }
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder
            : vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2_io_o_adder
            : vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2_io_o_adder
            : vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2_io_o_adder
            : vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_30 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_2)
            : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_3_1)
                : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_3_0)
                    : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                        & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_2_3)
                        : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_2_2)
                            : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_2_1)
                                : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
                                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_2_0)
                                    : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_23))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_30 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_2)
            : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_3_1)
                : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_3_0)
                    : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                        & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_2_3)
                        : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_2_2)
                            : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_2_1)
                                : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
                                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_2_0)
                                    : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_23))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_30 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_2)
            : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_3_1)
                : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_3_0)
                    : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                        & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_2_3)
                        : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_2_2)
                            : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_2_1)
                                : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
                                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_2_0)
                                    : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_23))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_30 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_2)
            : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_3_1)
                : (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_3_0)
                    : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                        & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_2_3)
                        : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                            & (2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_2_2)
                            : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                                & (1U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_2_1)
                                : (((2U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
                                    & (0U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_2_0)
                                    : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_23))))))));
    vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_31 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_3)
            : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___GEN_30));
    vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_31 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_3)
            : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___GEN_30));
    vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_31 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_3)
            : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___GEN_30));
    vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_31 
        = (((3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i)) 
            & (3U == (3U & vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_3)
            : (IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___GEN_30));
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
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_4._sequent__TOP__FlexDPU__DOT__PathFinder_4__5(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_5._sequent__TOP__FlexDPU__DOT__PathFinder_5__6(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_6._sequent__TOP__FlexDPU__DOT__PathFinder_6__7(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_7._sequent__TOP__FlexDPU__DOT__PathFinder_7__8(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_8._sequent__TOP__FlexDPU__DOT__PathFinder_8__9(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_9._sequent__TOP__FlexDPU__DOT__PathFinder_9__10(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_10._sequent__TOP__FlexDPU__DOT__PathFinder_10__11(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_11._sequent__TOP__FlexDPU__DOT__PathFinder_11__12(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_12._sequent__TOP__FlexDPU__DOT__PathFinder_12__13(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_13._sequent__TOP__FlexDPU__DOT__PathFinder_13__14(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_14._sequent__TOP__FlexDPU__DOT__PathFinder_14__15(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_15._sequent__TOP__FlexDPU__DOT__PathFinder_15__16(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder._sequent__TOP__FlexDPU__DOT__PathFinder__17(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_1._sequent__TOP__FlexDPU__DOT__PathFinder_1__18(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_2._sequent__TOP__FlexDPU__DOT__PathFinder_2__19(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_3._sequent__TOP__FlexDPU__DOT__PathFinder_3__20(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_4._sequent__TOP__FlexDPU__DOT__PathFinder_4__21(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_5._sequent__TOP__FlexDPU__DOT__PathFinder_5__22(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_6._sequent__TOP__FlexDPU__DOT__PathFinder_6__23(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_7._sequent__TOP__FlexDPU__DOT__PathFinder_7__24(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_8._sequent__TOP__FlexDPU__DOT__PathFinder_8__25(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_9._sequent__TOP__FlexDPU__DOT__PathFinder_9__26(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_10._sequent__TOP__FlexDPU__DOT__PathFinder_10__27(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_11._sequent__TOP__FlexDPU__DOT__PathFinder_11__28(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_12._sequent__TOP__FlexDPU__DOT__PathFinder_12__29(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_13._sequent__TOP__FlexDPU__DOT__PathFinder_13__30(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_14._sequent__TOP__FlexDPU__DOT__PathFinder_14__31(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__PathFinder_15._sequent__TOP__FlexDPU__DOT__PathFinder_15__32(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes._sequent__TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes__1(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes._sequent__TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes__2(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes._sequent__TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes__3(vlSymsp);
        vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes._sequent__TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__FlexDPU__DOT__PathFinder._combo__TOP__FlexDPU__DOT__PathFinder__49(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_1._combo__TOP__FlexDPU__DOT__PathFinder_1__50(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_2._combo__TOP__FlexDPU__DOT__PathFinder_2__51(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_3._combo__TOP__FlexDPU__DOT__PathFinder_3__52(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_4._combo__TOP__FlexDPU__DOT__PathFinder_4__53(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_5._combo__TOP__FlexDPU__DOT__PathFinder_5__54(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_6._combo__TOP__FlexDPU__DOT__PathFinder_6__55(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_7._combo__TOP__FlexDPU__DOT__PathFinder_7__56(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_8._combo__TOP__FlexDPU__DOT__PathFinder_8__57(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_9._combo__TOP__FlexDPU__DOT__PathFinder_9__58(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_10._combo__TOP__FlexDPU__DOT__PathFinder_10__59(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_11._combo__TOP__FlexDPU__DOT__PathFinder_11__60(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_12._combo__TOP__FlexDPU__DOT__PathFinder_12__61(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_13._combo__TOP__FlexDPU__DOT__PathFinder_13__62(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_14._combo__TOP__FlexDPU__DOT__PathFinder_14__63(vlSymsp);
    vlSymsp->TOP__FlexDPU__DOT__PathFinder_15._combo__TOP__FlexDPU__DOT__PathFinder_15__64(vlSymsp);
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

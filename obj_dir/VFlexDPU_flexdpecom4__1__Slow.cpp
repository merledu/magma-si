// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFlexDPU.h for the primary calling header

#include "VFlexDPU_flexdpecom4.h"
#include "VFlexDPU__Syms.h"

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_8__41(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_8__41\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_9__42(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_9__42\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_10__43(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_10__43\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_11__44(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_11__44\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_12__45(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_12__45\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_13__46(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_13__46\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_14__47(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_14__47\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

void VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_15__48(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFlexDPU_flexdpecom4::_settle__TOP__FlexDPU__DOT__flexdpecom4_15__48\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153) 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2 
        = (3U & ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                        & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                              >> 1U)))) ? (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                  : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153) 
                            & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & 
                                               (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                      : ((1U & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153)))
                          : ((1U & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153) 
                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153)))
                              : (1U & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153)))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                     ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                         ? 2U : 3U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                    ? 2U : 3U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                            ? 2U : 3U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                    ? 2U : 3U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 2U
                                                    : 3U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6 
        = (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                  & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                      & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                          & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                              & (~ (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6)) 
                                              & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1));
        this->__PVT__my_Benes__DOT__parsedindexvalue_1 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_4 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9));
        this->__PVT__my_Benes__DOT__parsedindexvalue_5 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154)) {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7) 
                         - (IData)(1U))));
    } else {
        this->__PVT__my_Benes__DOT__parsedindexvalue_2 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5));
        this->__PVT__my_Benes__DOT__parsedindexvalue_3 
            = (3U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217))) {
        this->__PVT__my_Benes__DOT___GEN_21 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_216))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((0U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_22 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_216))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                     : 0U))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_216))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217)));
        this->__PVT__my_Benes__DOT___GEN_23 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_216))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_24 = ((0U 
                                                != 
                                                (0xfU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_153))
                                                ? (0xffffU 
                                                   & (((0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217) 
                                                       == 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_216))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_1))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217
                                                        : 0U)))
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_21 = 0U;
        this->__PVT__my_Benes__DOT___GEN_22 = 0U;
        this->__PVT__my_Benes__DOT___GEN_23 = 0U;
        this->__PVT__my_Benes__DOT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218))) {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_21)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_21)));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_22)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_22)));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_23)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218)));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_154))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_217))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_3))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_24)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_24)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_47 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_21));
        this->__PVT__my_Benes__DOT___GEN_48 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_22));
        this->__PVT__my_Benes__DOT___GEN_49 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_23));
        this->__PVT__my_Benes__DOT___GEN_50 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219))) {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47))
                                                    : 
                                                   ((0U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_47)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_47)));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48))
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_48)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_48)));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49))
                                                    : 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_49)))
                                                   : (IData)(this->__PVT__my_Benes__DOT___GEN_49)));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & ((0U 
                                                   != 
                                                   (0xfU 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_155))
                                                   ? 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_4))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50))
                                                    : 
                                                   ((3U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_5))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219
                                                     : (IData)(this->__PVT__my_Benes__DOT___GEN_50)))
                                                   : 
                                                  (((0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219) 
                                                    == 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_218))
                                                    ? 0U
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT___GEN_219)));
    } else {
        this->__PVT__my_Benes__DOT___GEN_73 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_47));
        this->__PVT__my_Benes__DOT___GEN_74 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_48));
        this->__PVT__my_Benes__DOT___GEN_75 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_49));
        this->__PVT__my_Benes__DOT___GEN_76 = (0xffffU 
                                               & (IData)(this->__PVT__my_Benes__DOT___GEN_50));
    }
}

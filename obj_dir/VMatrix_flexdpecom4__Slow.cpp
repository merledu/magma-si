// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMatrix.h for the primary calling header

#include "VMatrix_flexdpecom4.h"
#include "VMatrix__Syms.h"

//==========

VL_CTOR_IMP(VMatrix_flexdpecom4) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMatrix_flexdpecom4::__Vconfigure(VMatrix__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VMatrix_flexdpecom4::~VMatrix_flexdpecom4() {
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__35(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4__35\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1__36(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_1__36\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_1.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2__37(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_2__37\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_2.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_3__38(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_3__38\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_3.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_4__39(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_4__39\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_4.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_5__40(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_5__40\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_5.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_6__41(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_6__41\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_6.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_7__42(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_7__42\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_7.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_8__43(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_8__43\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_8.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_9__44(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_9__44\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_9.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_10__45(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_10__45\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_10.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_11__46(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_11__46\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_11.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_12__47(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_12__47\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_12.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_13__48(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_13__48\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_13.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_14__49(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_14__49\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_14.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

void VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_15__50(VMatrix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMatrix_flexdpecom4::_settle__TOP__Matrix__DOT__FDPU__DOT__flexdpecom4_15__50\n"); );
    VMatrix* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                           ? 3U : 2U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                           ? 0U : 1U)) & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex 
        = (3U & ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153) 
                        & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                              >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153)
                  : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                            & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                  >> 1U)))) ? (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153)
                      : ((1U & ((~ vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153) 
                                & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                   >> 1U))) ? ((IData)(2U) 
                                               + (1U 
                                                  & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153))
                          : ((1U & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                    & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                       >> 1U))) ? ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153))
                              : (1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153))))));
    this->__PVT__my_fan_network__DOT__my_adder_1__DOT___GEN_3 
        = ((4U == (IData)(this->__PVT__my_controller__DOT__r_cmd_lvl_1Reg_4))
            ? this->__PVT__my_fan_network__DOT__my_adder_2_io_o_adder
            : this->__PVT__my_fan_network__DOT__my_adder_1__DOT__r_adder);
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                     ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                         ? 3U : 2U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                    ? 3U : 2U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                            ? 3U : 2U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                    ? 3U : 2U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                                                    ? 3U
                                                    : 2U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4 
        = (((0U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                     ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
            : (((1U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                         ? 0U : 1U)) & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                           >> 1U)))
                ? ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                    ? 0U : 1U) : (((2U == ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                            ? 0U : 1U)) 
                                   & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                         >> 1U))) ? 
                                  ((1U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                    ? 0U : 1U) : ((
                                                   (3U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(this->__PVT__my_Benes__DOT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_6 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_152)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_13)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5 
        = (3U & (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                  & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                        >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                      & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                            >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                          & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                              & (~ (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                    >> 2U))) ? (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)
                              : (((0U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                  & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                     >> 2U)) ? ((IData)(2U) 
                                                + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                  : (((1U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                      & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                         >> 2U)) ? 
                                     ((IData)(2U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))
                                      : (((2U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                          & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                             >> 2U))
                                          ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                             - (IData)(2U))
                                          : (((3U == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4)) 
                                              & (vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154 
                                                 >> 2U))
                                              ? ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4) 
                                                 - (IData)(2U))
                                              : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__my_Benes__DOT__parsedindexvalue = 
        (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153)
                ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)))
                    ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1))
                    : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1) 
                       - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_1)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_4 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_155)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_9)));
    this->__PVT__my_Benes__DOT__parsedindexvalue_2 
        = (3U & ((8U & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154)
                  ? ((0U == (1U & (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)))
                      ? ((IData)(1U) + (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5))
                      : ((IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5) 
                         - (IData)(1U))) : (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_nextIndex_5)));
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153))) {
        this->__PVT__my_Benes__DOT___GEN_19 = ((3U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_16 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
        this->__PVT__my_Benes__DOT___GEN_17 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                ? 1U
                                                : 0U);
    } else {
        this->__PVT__my_Benes__DOT___GEN_19 = 0U;
        this->__PVT__my_Benes__DOT___GEN_16 = 0U;
        this->__PVT__my_Benes__DOT___GEN_17 = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_154))) {
        this->__PVT__my_Benes__DOT___GEN_44 = ((2U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSymsp->TOP__Matrix__DOT__FDPU__DOT__PathFinder_15.__PVT___GEN_153))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U));
        this->__PVT__my_Benes__DOT___GEN_42 = ((0U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_16));
        this->__PVT__my_Benes__DOT___GEN_43 = ((1U 
                                                == (IData)(this->__PVT__my_Benes__DOT__parsedindexvalue_2))
                                                ? 1U
                                                : (IData)(this->__PVT__my_Benes__DOT___GEN_17));
    } else {
        this->__PVT__my_Benes__DOT___GEN_44 = 0U;
        this->__PVT__my_Benes__DOT___GEN_42 = this->__PVT__my_Benes__DOT___GEN_16;
        this->__PVT__my_Benes__DOT___GEN_43 = this->__PVT__my_Benes__DOT___GEN_17;
    }
}

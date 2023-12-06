// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFlexDPU.h for the primary calling header

#include "VFlexDPU_Benes.h"
#include "VFlexDPU__Syms.h"

//==========

VL_INLINE_OPT void VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes__1(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes__1\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__parsedindexvalue_nextIndex_12 = (3U 
                                                  & ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44)
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                          & (~ 
                                                             (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                              >> 1U))))
                                                       ? 
                                                      (1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44)
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44))
                                                        : 
                                                       ((1U 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                               >> 1U)))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + 
                                                         (1U 
                                                          & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44))
                                                         : 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44))))));
    this->__PVT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__parsedindexvalue_nextIndex = (3U & 
                                               ((1U 
                                                 & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                        >> 1U))))
                                                 ? 
                                                (1U 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)
                                                 : 
                                                ((1U 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                         >> 1U))))
                                                  ? 
                                                 (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)
                                                  : 
                                                 ((1U 
                                                   & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45) 
                                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                                   : 
                                                  ((1U 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                          >> 1U)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + 
                                                    (1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                                    : 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))))));
    this->__PVT__parsedindexvalue_nextIndex_2 = (3U 
                                                 & ((1U 
                                                     & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                            >> 1U))))
                                                     ? 
                                                    (1U 
                                                     & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                                     : 
                                                    ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                             >> 1U)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)))
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)))
                                                        : 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)))))));
    this->__PVT__parsedindexvalue_nextIndex_13 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__parsedindexvalue_nextIndex_8 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__parsedindexvalue_nextIndex_10 = ((
                                                   (0U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  (((1U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                        ? 2U
                                                        : 3U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    (((3U 
                                                       == 
                                                       ((1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                         ? 2U
                                                         : 3U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                          >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)
                                                      : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__parsedindexvalue_nextIndex_4 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                        ? 0U
                                                        : 1U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__parsedindexvalue_nextIndex_6 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__parsedindexvalue_nextIndex_1 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__parsedindexvalue_nextIndex_3 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__parsedindexvalue_6 = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44)
                                              ? ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_13)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_13))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_13) 
                                                  - (IData)(1U)))
                                              : (IData)(this->__PVT__parsedindexvalue_nextIndex_13)));
    this->__PVT__parsedindexvalue_nextIndex_9 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__parsedindexvalue_nextIndex_11 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__parsedindexvalue_nextIndex_5 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__parsedindexvalue_nextIndex_7 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)) {
        this->__PVT__parsedindexvalue = (3U & ((0U 
                                                == 
                                                (1U 
                                                 & (IData)(this->__PVT__parsedindexvalue_nextIndex_1)))
                                                ? ((IData)(1U) 
                                                   + (IData)(this->__PVT__parsedindexvalue_nextIndex_1))
                                                : ((IData)(this->__PVT__parsedindexvalue_nextIndex_1) 
                                                   - (IData)(1U))));
        this->__PVT__parsedindexvalue_1 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_3)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_3))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_3) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_1));
        this->__PVT__parsedindexvalue_1 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)) {
        this->__PVT__parsedindexvalue_4 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_9)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_9))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_9) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_5 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_11)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_11))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_11) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_4 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_9));
        this->__PVT__parsedindexvalue_5 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)) {
        this->__PVT__parsedindexvalue_2 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_5)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_5))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_5) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_3 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_7)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_7))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_7) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_2 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_5));
        this->__PVT__parsedindexvalue_3 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77))) {
        this->__PVT___GEN_21 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_22 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77)));
        this->__PVT___GEN_23 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_24 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
    } else {
        this->__PVT___GEN_21 = 0U;
        this->__PVT___GEN_22 = 0U;
        this->__PVT___GEN_23 = 0U;
        this->__PVT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78))) {
        this->__PVT___GEN_47 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21)))
                                            : (IData)(this->__PVT___GEN_21)));
        this->__PVT___GEN_48 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22)))
                                            : (IData)(this->__PVT___GEN_22)));
        this->__PVT___GEN_49 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78)));
        this->__PVT___GEN_50 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24)))
                                            : (IData)(this->__PVT___GEN_24)));
    } else {
        this->__PVT___GEN_47 = (0xffffU & (IData)(this->__PVT___GEN_21));
        this->__PVT___GEN_48 = (0xffffU & (IData)(this->__PVT___GEN_22));
        this->__PVT___GEN_49 = (0xffffU & (IData)(this->__PVT___GEN_23));
        this->__PVT___GEN_50 = (0xffffU & (IData)(this->__PVT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79))) {
        this->__PVT___GEN_73 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47)))
                                            : (IData)(this->__PVT___GEN_47)));
        this->__PVT___GEN_74 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48)))
                                            : (IData)(this->__PVT___GEN_48)));
        this->__PVT___GEN_75 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49)))
                                            : (IData)(this->__PVT___GEN_49)));
        this->__PVT___GEN_76 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79)));
    } else {
        this->__PVT___GEN_73 = (0xffffU & (IData)(this->__PVT___GEN_47));
        this->__PVT___GEN_74 = (0xffffU & (IData)(this->__PVT___GEN_48));
        this->__PVT___GEN_75 = (0xffffU & (IData)(this->__PVT___GEN_49));
        this->__PVT___GEN_76 = (0xffffU & (IData)(this->__PVT___GEN_50));
    }
}

VL_INLINE_OPT void VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes__2(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes__2\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__parsedindexvalue_nextIndex_12 = (3U 
                                                  & ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44)
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                          & (~ 
                                                             (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                              >> 1U))))
                                                       ? 
                                                      (1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44)
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44))
                                                        : 
                                                       ((1U 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                               >> 1U)))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + 
                                                         (1U 
                                                          & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44))
                                                         : 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44))))));
    this->__PVT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__parsedindexvalue_nextIndex = (3U & 
                                               ((1U 
                                                 & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                        >> 1U))))
                                                 ? 
                                                (1U 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)
                                                 : 
                                                ((1U 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                         >> 1U))))
                                                  ? 
                                                 (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)
                                                  : 
                                                 ((1U 
                                                   & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45) 
                                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                                   : 
                                                  ((1U 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                          >> 1U)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + 
                                                    (1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                                    : 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))))));
    this->__PVT__parsedindexvalue_nextIndex_2 = (3U 
                                                 & ((1U 
                                                     & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                            >> 1U))))
                                                     ? 
                                                    (1U 
                                                     & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                                     : 
                                                    ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                             >> 1U)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)))
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)))
                                                        : 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)))))));
    this->__PVT__parsedindexvalue_nextIndex_13 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__parsedindexvalue_nextIndex_8 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__parsedindexvalue_nextIndex_10 = ((
                                                   (0U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  (((1U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                        ? 2U
                                                        : 3U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    (((3U 
                                                       == 
                                                       ((1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                         ? 2U
                                                         : 3U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                          >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)
                                                      : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__parsedindexvalue_nextIndex_4 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                        ? 0U
                                                        : 1U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__parsedindexvalue_nextIndex_6 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__parsedindexvalue_nextIndex_1 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__parsedindexvalue_nextIndex_3 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__parsedindexvalue_6 = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44)
                                              ? ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_13)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_13))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_13) 
                                                  - (IData)(1U)))
                                              : (IData)(this->__PVT__parsedindexvalue_nextIndex_13)));
    this->__PVT__parsedindexvalue_nextIndex_9 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__parsedindexvalue_nextIndex_11 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__parsedindexvalue_nextIndex_5 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__parsedindexvalue_nextIndex_7 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)) {
        this->__PVT__parsedindexvalue = (3U & ((0U 
                                                == 
                                                (1U 
                                                 & (IData)(this->__PVT__parsedindexvalue_nextIndex_1)))
                                                ? ((IData)(1U) 
                                                   + (IData)(this->__PVT__parsedindexvalue_nextIndex_1))
                                                : ((IData)(this->__PVT__parsedindexvalue_nextIndex_1) 
                                                   - (IData)(1U))));
        this->__PVT__parsedindexvalue_1 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_3)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_3))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_3) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_1));
        this->__PVT__parsedindexvalue_1 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)) {
        this->__PVT__parsedindexvalue_4 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_9)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_9))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_9) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_5 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_11)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_11))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_11) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_4 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_9));
        this->__PVT__parsedindexvalue_5 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)) {
        this->__PVT__parsedindexvalue_2 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_5)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_5))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_5) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_3 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_7)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_7))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_7) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_2 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_5));
        this->__PVT__parsedindexvalue_3 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77))) {
        this->__PVT___GEN_21 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_22 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77)));
        this->__PVT___GEN_23 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_24 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
    } else {
        this->__PVT___GEN_21 = 0U;
        this->__PVT___GEN_22 = 0U;
        this->__PVT___GEN_23 = 0U;
        this->__PVT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78))) {
        this->__PVT___GEN_47 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21)))
                                            : (IData)(this->__PVT___GEN_21)));
        this->__PVT___GEN_48 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22)))
                                            : (IData)(this->__PVT___GEN_22)));
        this->__PVT___GEN_49 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78)));
        this->__PVT___GEN_50 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24)))
                                            : (IData)(this->__PVT___GEN_24)));
    } else {
        this->__PVT___GEN_47 = (0xffffU & (IData)(this->__PVT___GEN_21));
        this->__PVT___GEN_48 = (0xffffU & (IData)(this->__PVT___GEN_22));
        this->__PVT___GEN_49 = (0xffffU & (IData)(this->__PVT___GEN_23));
        this->__PVT___GEN_50 = (0xffffU & (IData)(this->__PVT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79))) {
        this->__PVT___GEN_73 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47)))
                                            : (IData)(this->__PVT___GEN_47)));
        this->__PVT___GEN_74 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48)))
                                            : (IData)(this->__PVT___GEN_48)));
        this->__PVT___GEN_75 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49)))
                                            : (IData)(this->__PVT___GEN_49)));
        this->__PVT___GEN_76 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79)));
    } else {
        this->__PVT___GEN_73 = (0xffffU & (IData)(this->__PVT___GEN_47));
        this->__PVT___GEN_74 = (0xffffU & (IData)(this->__PVT___GEN_48));
        this->__PVT___GEN_75 = (0xffffU & (IData)(this->__PVT___GEN_49));
        this->__PVT___GEN_76 = (0xffffU & (IData)(this->__PVT___GEN_50));
    }
}

VL_INLINE_OPT void VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes__3(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes__3\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__parsedindexvalue_nextIndex_12 = (3U 
                                                  & ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44)
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                          & (~ 
                                                             (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                              >> 1U))))
                                                       ? 
                                                      (1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44)
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44))
                                                        : 
                                                       ((1U 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                               >> 1U)))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + 
                                                         (1U 
                                                          & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44))
                                                         : 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44))))));
    this->__PVT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__parsedindexvalue_nextIndex = (3U & 
                                               ((1U 
                                                 & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                        >> 1U))))
                                                 ? 
                                                (1U 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)
                                                 : 
                                                ((1U 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                         >> 1U))))
                                                  ? 
                                                 (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)
                                                  : 
                                                 ((1U 
                                                   & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45) 
                                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                                   : 
                                                  ((1U 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                          >> 1U)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + 
                                                    (1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                                    : 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))))));
    this->__PVT__parsedindexvalue_nextIndex_2 = (3U 
                                                 & ((1U 
                                                     & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                            >> 1U))))
                                                     ? 
                                                    (1U 
                                                     & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                                     : 
                                                    ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                             >> 1U)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)))
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)))
                                                        : 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)))))));
    this->__PVT__parsedindexvalue_nextIndex_13 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__parsedindexvalue_nextIndex_8 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__parsedindexvalue_nextIndex_10 = ((
                                                   (0U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  (((1U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                        ? 2U
                                                        : 3U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    (((3U 
                                                       == 
                                                       ((1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                         ? 2U
                                                         : 3U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                          >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)
                                                      : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__parsedindexvalue_nextIndex_4 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                        ? 0U
                                                        : 1U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__parsedindexvalue_nextIndex_6 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__parsedindexvalue_nextIndex_1 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__parsedindexvalue_nextIndex_3 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__parsedindexvalue_6 = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44)
                                              ? ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_13)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_13))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_13) 
                                                  - (IData)(1U)))
                                              : (IData)(this->__PVT__parsedindexvalue_nextIndex_13)));
    this->__PVT__parsedindexvalue_nextIndex_9 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__parsedindexvalue_nextIndex_11 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__parsedindexvalue_nextIndex_5 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__parsedindexvalue_nextIndex_7 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)) {
        this->__PVT__parsedindexvalue = (3U & ((0U 
                                                == 
                                                (1U 
                                                 & (IData)(this->__PVT__parsedindexvalue_nextIndex_1)))
                                                ? ((IData)(1U) 
                                                   + (IData)(this->__PVT__parsedindexvalue_nextIndex_1))
                                                : ((IData)(this->__PVT__parsedindexvalue_nextIndex_1) 
                                                   - (IData)(1U))));
        this->__PVT__parsedindexvalue_1 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_3)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_3))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_3) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_1));
        this->__PVT__parsedindexvalue_1 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)) {
        this->__PVT__parsedindexvalue_4 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_9)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_9))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_9) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_5 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_11)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_11))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_11) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_4 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_9));
        this->__PVT__parsedindexvalue_5 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)) {
        this->__PVT__parsedindexvalue_2 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_5)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_5))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_5) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_3 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_7)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_7))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_7) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_2 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_5));
        this->__PVT__parsedindexvalue_3 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77))) {
        this->__PVT___GEN_21 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_22 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77)));
        this->__PVT___GEN_23 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_24 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
    } else {
        this->__PVT___GEN_21 = 0U;
        this->__PVT___GEN_22 = 0U;
        this->__PVT___GEN_23 = 0U;
        this->__PVT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78))) {
        this->__PVT___GEN_47 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21)))
                                            : (IData)(this->__PVT___GEN_21)));
        this->__PVT___GEN_48 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22)))
                                            : (IData)(this->__PVT___GEN_22)));
        this->__PVT___GEN_49 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78)));
        this->__PVT___GEN_50 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24)))
                                            : (IData)(this->__PVT___GEN_24)));
    } else {
        this->__PVT___GEN_47 = (0xffffU & (IData)(this->__PVT___GEN_21));
        this->__PVT___GEN_48 = (0xffffU & (IData)(this->__PVT___GEN_22));
        this->__PVT___GEN_49 = (0xffffU & (IData)(this->__PVT___GEN_23));
        this->__PVT___GEN_50 = (0xffffU & (IData)(this->__PVT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79))) {
        this->__PVT___GEN_73 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47)))
                                            : (IData)(this->__PVT___GEN_47)));
        this->__PVT___GEN_74 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48)))
                                            : (IData)(this->__PVT___GEN_48)));
        this->__PVT___GEN_75 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49)))
                                            : (IData)(this->__PVT___GEN_49)));
        this->__PVT___GEN_76 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79)));
    } else {
        this->__PVT___GEN_73 = (0xffffU & (IData)(this->__PVT___GEN_47));
        this->__PVT___GEN_74 = (0xffffU & (IData)(this->__PVT___GEN_48));
        this->__PVT___GEN_75 = (0xffffU & (IData)(this->__PVT___GEN_49));
        this->__PVT___GEN_76 = (0xffffU & (IData)(this->__PVT___GEN_50));
    }
}

VL_INLINE_OPT void VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes__4(VFlexDPU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFlexDPU_Benes::_sequent__TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes__4\n"); );
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__parsedindexvalue_nextIndex_12 = (3U 
                                                  & ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44)
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                          & (~ 
                                                             (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                              >> 1U))))
                                                       ? 
                                                      (1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44)
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44))
                                                        : 
                                                       ((1U 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                               >> 1U)))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + 
                                                         (1U 
                                                          & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44))
                                                         : 
                                                        (1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44))))));
    this->__PVT___parsedindexvalue_nextIndex_T_347 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_425 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                           ? 2U : 3U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                  ? 2U : 3U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_191 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                           ? 0U : 1U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                  ? 0U : 1U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U))))));
    this->__PVT___parsedindexvalue_nextIndex_T_269 
        = (3U & (((0U == ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                           ? 3U : 2U)) & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                          >> 1U)) ? 
                 ((IData)(2U) + ((1U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                  ? 3U : 2U)) : (((1U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                     >> 1U))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 (((2U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                      >> 1U))
                                                   ? 
                                                  (((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U) 
                                                   - (IData)(2U))
                                                   : 
                                                  (((3U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                       >> 1U))
                                                    ? 
                                                   (((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U) 
                                                    - (IData)(2U))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U))))));
    this->__PVT__parsedindexvalue_nextIndex = (3U & 
                                               ((1U 
                                                 & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                        >> 1U))))
                                                 ? 
                                                (1U 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)
                                                 : 
                                                ((1U 
                                                  & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                         >> 1U))))
                                                  ? 
                                                 (1U 
                                                  & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)
                                                  : 
                                                 ((1U 
                                                   & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45) 
                                                      & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                                   : 
                                                  ((1U 
                                                    & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                          >> 1U)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + 
                                                    (1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                                    : 
                                                   (1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))))));
    this->__PVT__parsedindexvalue_nextIndex_2 = (3U 
                                                 & ((1U 
                                                     & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                            >> 1U))))
                                                     ? 
                                                    (1U 
                                                     & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                                     : 
                                                    ((1U 
                                                      & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                             >> 1U))))
                                                      ? 
                                                     (1U 
                                                      & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                                      : 
                                                     ((1U 
                                                       & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                             >> 1U)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)))
                                                       : 
                                                      ((1U 
                                                        & ((~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                              >> 1U)))
                                                        ? 
                                                       ((IData)(2U) 
                                                        + 
                                                        (1U 
                                                         & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)))
                                                        : 
                                                       (1U 
                                                        & (~ vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)))))));
    this->__PVT__parsedindexvalue_nextIndex_13 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_12)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_12))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_12)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_12) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_12))))))))));
    this->__PVT__parsedindexvalue_nextIndex_8 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_347)))));
    this->__PVT__parsedindexvalue_nextIndex_10 = ((
                                                   (0U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  (((1U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                        ? 2U
                                                        : 3U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    (((3U 
                                                       == 
                                                       ((1U 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                         ? 2U
                                                         : 3U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                          >> 1U)))
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)
                                                       ? 2U
                                                       : 3U)
                                                      : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_425)))));
    this->__PVT__parsedindexvalue_nextIndex_4 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                       ? 0U
                                                       : 1U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                        ? 0U
                                                        : 1U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 0U
                                                      : 1U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_191)))));
    this->__PVT__parsedindexvalue_nextIndex_6 = (((0U 
                                                   == 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                      >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                       >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     ((1U 
                                                       & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                       ? 3U
                                                       : 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      ((1U 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                        ? 3U
                                                        : 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)
                                                      ? 3U
                                                      : 2U)
                                                     : (IData)(this->__PVT___parsedindexvalue_nextIndex_T_269)))));
    this->__PVT__parsedindexvalue_nextIndex_1 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex))))))))));
    this->__PVT__parsedindexvalue_nextIndex_3 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_2)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_2))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_2)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_2) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_2))))))))));
    this->__PVT__parsedindexvalue_6 = (3U & ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44)
                                              ? ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_13)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_13))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_13) 
                                                  - (IData)(1U)))
                                              : (IData)(this->__PVT__parsedindexvalue_nextIndex_13)));
    this->__PVT__parsedindexvalue_nextIndex_9 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_8)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_8))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_8)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_8) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_8))))))))));
    this->__PVT__parsedindexvalue_nextIndex_11 = (3U 
                                                  & (((0U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                      : 
                                                     (((1U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                       : 
                                                      (((2U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                        : 
                                                       (((3U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                             >> 2U)))
                                                         ? (IData)(this->__PVT__parsedindexvalue_nextIndex_10)
                                                         : 
                                                        (((0U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                          : 
                                                         (((1U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(this->__PVT__parsedindexvalue_nextIndex_10))
                                                           : 
                                                          (((2U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                            - (IData)(2U))
                                                            : 
                                                           (((3U 
                                                              == (IData)(this->__PVT__parsedindexvalue_nextIndex_10)) 
                                                             & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47 
                                                                >> 2U))
                                                             ? 
                                                            ((IData)(this->__PVT__parsedindexvalue_nextIndex_10) 
                                                             - (IData)(2U))
                                                             : (IData)(this->__PVT__parsedindexvalue_nextIndex_10))))))))));
    this->__PVT__parsedindexvalue_nextIndex_5 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_4)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_4))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_4)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_4) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_4))))))))));
    this->__PVT__parsedindexvalue_nextIndex_7 = (3U 
                                                 & (((0U 
                                                      == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                         >> 2U)))
                                                     ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                     : 
                                                    (((1U 
                                                       == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                          >> 2U)))
                                                      ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                      : 
                                                     (((2U 
                                                        == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                           >> 2U)))
                                                       ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                       : 
                                                      (((3U 
                                                         == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                            >> 2U)))
                                                        ? (IData)(this->__PVT__parsedindexvalue_nextIndex_6)
                                                        : 
                                                       (((0U 
                                                          == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                         & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                            >> 2U))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                         : 
                                                        (((1U 
                                                           == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                          & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                             >> 2U))
                                                          ? 
                                                         ((IData)(2U) 
                                                          + (IData)(this->__PVT__parsedindexvalue_nextIndex_6))
                                                          : 
                                                         (((2U 
                                                            == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                           & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                              >> 2U))
                                                           ? 
                                                          ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                           - (IData)(2U))
                                                           : 
                                                          (((3U 
                                                             == (IData)(this->__PVT__parsedindexvalue_nextIndex_6)) 
                                                            & (vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46 
                                                               >> 2U))
                                                            ? 
                                                           ((IData)(this->__PVT__parsedindexvalue_nextIndex_6) 
                                                            - (IData)(2U))
                                                            : (IData)(this->__PVT__parsedindexvalue_nextIndex_6))))))))));
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)) {
        this->__PVT__parsedindexvalue = (3U & ((0U 
                                                == 
                                                (1U 
                                                 & (IData)(this->__PVT__parsedindexvalue_nextIndex_1)))
                                                ? ((IData)(1U) 
                                                   + (IData)(this->__PVT__parsedindexvalue_nextIndex_1))
                                                : ((IData)(this->__PVT__parsedindexvalue_nextIndex_1) 
                                                   - (IData)(1U))));
        this->__PVT__parsedindexvalue_1 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_3)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_3))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_3) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_1));
        this->__PVT__parsedindexvalue_1 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_3));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)) {
        this->__PVT__parsedindexvalue_4 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_9)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_9))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_9) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_5 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_11)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_11))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_11) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_4 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_9));
        this->__PVT__parsedindexvalue_5 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_11));
    }
    if ((8U & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)) {
        this->__PVT__parsedindexvalue_2 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_5)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_5))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_5) 
                                                  - (IData)(1U))));
        this->__PVT__parsedindexvalue_3 = (3U & ((0U 
                                                  == 
                                                  (1U 
                                                   & (IData)(this->__PVT__parsedindexvalue_nextIndex_7)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(this->__PVT__parsedindexvalue_nextIndex_7))
                                                  : 
                                                 ((IData)(this->__PVT__parsedindexvalue_nextIndex_7) 
                                                  - (IData)(1U))));
    } else {
        this->__PVT__parsedindexvalue_2 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_5));
        this->__PVT__parsedindexvalue_3 = (3U & (IData)(this->__PVT__parsedindexvalue_nextIndex_7));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77))) {
        this->__PVT___GEN_21 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_22 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77)));
        this->__PVT___GEN_23 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
        this->__PVT___GEN_24 = ((0U != (0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45))
                                 ? (0xffffU & (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_1))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77
                                                    : 0U)))
                                 : 0U);
    } else {
        this->__PVT___GEN_21 = 0U;
        this->__PVT___GEN_22 = 0U;
        this->__PVT___GEN_23 = 0U;
        this->__PVT___GEN_24 = 0U;
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78))) {
        this->__PVT___GEN_47 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_21)))
                                            : (IData)(this->__PVT___GEN_21)));
        this->__PVT___GEN_48 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_22)))
                                            : (IData)(this->__PVT___GEN_22)));
        this->__PVT___GEN_49 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_23)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78)));
        this->__PVT___GEN_50 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_2))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_3))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78
                                                    : (IData)(this->__PVT___GEN_24)))
                                            : (IData)(this->__PVT___GEN_24)));
    } else {
        this->__PVT___GEN_47 = (0xffffU & (IData)(this->__PVT___GEN_21));
        this->__PVT___GEN_48 = (0xffffU & (IData)(this->__PVT___GEN_22));
        this->__PVT___GEN_49 = (0xffffU & (IData)(this->__PVT___GEN_23));
        this->__PVT___GEN_50 = (0xffffU & (IData)(this->__PVT___GEN_24));
    }
    if ((0U != (0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79))) {
        this->__PVT___GEN_73 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78))
                                                ? (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47))
                                                : (
                                                   (0U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_47)))
                                            : (IData)(this->__PVT___GEN_47)));
        this->__PVT___GEN_74 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78))
                                                ? (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48))
                                                : (
                                                   (1U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_48)))
                                            : (IData)(this->__PVT___GEN_48)));
        this->__PVT___GEN_75 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78))
                                                ? (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49))
                                                : (
                                                   (2U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_49)))
                                            : (IData)(this->__PVT___GEN_49)));
        this->__PVT___GEN_76 = (0xffffU & ((0U != (0xfU 
                                                   & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47))
                                            ? (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78))
                                                ? (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_4))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50))
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__parsedindexvalue_5))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79
                                                    : (IData)(this->__PVT___GEN_50)))
                                            : (((0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78))
                                                ? 0U
                                                : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79)));
    } else {
        this->__PVT___GEN_73 = (0xffffU & (IData)(this->__PVT___GEN_47));
        this->__PVT___GEN_74 = (0xffffU & (IData)(this->__PVT___GEN_48));
        this->__PVT___GEN_75 = (0xffffU & (IData)(this->__PVT___GEN_49));
        this->__PVT___GEN_76 = (0xffffU & (IData)(this->__PVT___GEN_50));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vivntop.h for the primary calling header

#include "Vivntop.h"
#include "Vivntop__Syms.h"

VL_INLINE_OPT void Vivntop::_combo__TOP__10(Vivntop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vivntop::_combo__TOP__10\n"); );
    Vivntop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_455 
        = (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_0_7)
            : (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_0_6)
                : (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_0_5)
                    : (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_0_4)
                        : (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_0_3)
                            : (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_0_2)
                                : (((0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                    : (IData)(vlTOPp->io_Stationary_matrix_0_0))))))));
    if ((0U == vlTOPp->ivntop__DOT__my_stationary__DOT__count)) {
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_0 
            = vlTOPp->io_Stationary_matrix_0_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1 
            = vlTOPp->io_Stationary_matrix_0_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_2 
            = vlTOPp->io_Stationary_matrix_0_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_3 
            = vlTOPp->io_Stationary_matrix_0_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_4 
            = vlTOPp->io_Stationary_matrix_0_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_5 
            = vlTOPp->io_Stationary_matrix_0_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_6 
            = vlTOPp->io_Stationary_matrix_0_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_7 
            = vlTOPp->io_Stationary_matrix_0_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_8 
            = vlTOPp->io_Stationary_matrix_1_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_9 
            = vlTOPp->io_Stationary_matrix_1_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_10 
            = vlTOPp->io_Stationary_matrix_1_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_11 
            = vlTOPp->io_Stationary_matrix_1_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_12 
            = vlTOPp->io_Stationary_matrix_1_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_13 
            = vlTOPp->io_Stationary_matrix_1_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_14 
            = vlTOPp->io_Stationary_matrix_1_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_15 
            = vlTOPp->io_Stationary_matrix_1_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_16 
            = vlTOPp->io_Stationary_matrix_2_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_17 
            = vlTOPp->io_Stationary_matrix_2_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_18 
            = vlTOPp->io_Stationary_matrix_2_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_19 
            = vlTOPp->io_Stationary_matrix_2_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_20 
            = vlTOPp->io_Stationary_matrix_2_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_21 
            = vlTOPp->io_Stationary_matrix_2_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_22 
            = vlTOPp->io_Stationary_matrix_2_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_23 
            = vlTOPp->io_Stationary_matrix_2_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_24 
            = vlTOPp->io_Stationary_matrix_3_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_25 
            = vlTOPp->io_Stationary_matrix_3_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_26 
            = vlTOPp->io_Stationary_matrix_3_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_27 
            = vlTOPp->io_Stationary_matrix_3_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_28 
            = vlTOPp->io_Stationary_matrix_3_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_29 
            = vlTOPp->io_Stationary_matrix_3_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_30 
            = vlTOPp->io_Stationary_matrix_3_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_31 
            = vlTOPp->io_Stationary_matrix_3_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_32 
            = vlTOPp->io_Stationary_matrix_4_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_33 
            = vlTOPp->io_Stationary_matrix_4_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_34 
            = vlTOPp->io_Stationary_matrix_4_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_35 
            = vlTOPp->io_Stationary_matrix_4_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_36 
            = vlTOPp->io_Stationary_matrix_4_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_37 
            = vlTOPp->io_Stationary_matrix_4_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_38 
            = vlTOPp->io_Stationary_matrix_4_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_39 
            = vlTOPp->io_Stationary_matrix_4_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_40 
            = vlTOPp->io_Stationary_matrix_5_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_41 
            = vlTOPp->io_Stationary_matrix_5_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_42 
            = vlTOPp->io_Stationary_matrix_5_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_43 
            = vlTOPp->io_Stationary_matrix_5_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_44 
            = vlTOPp->io_Stationary_matrix_5_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_45 
            = vlTOPp->io_Stationary_matrix_5_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_46 
            = vlTOPp->io_Stationary_matrix_5_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_47 
            = vlTOPp->io_Stationary_matrix_5_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_48 
            = vlTOPp->io_Stationary_matrix_6_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_49 
            = vlTOPp->io_Stationary_matrix_6_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_50 
            = vlTOPp->io_Stationary_matrix_6_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_51 
            = vlTOPp->io_Stationary_matrix_6_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_52 
            = vlTOPp->io_Stationary_matrix_6_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_53 
            = vlTOPp->io_Stationary_matrix_6_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_54 
            = vlTOPp->io_Stationary_matrix_6_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_55 
            = vlTOPp->io_Stationary_matrix_6_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_56 
            = vlTOPp->io_Stationary_matrix_7_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_57 
            = vlTOPp->io_Stationary_matrix_7_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_58 
            = vlTOPp->io_Stationary_matrix_7_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_59 
            = vlTOPp->io_Stationary_matrix_7_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_60 
            = vlTOPp->io_Stationary_matrix_7_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_61 
            = vlTOPp->io_Stationary_matrix_7_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_62 
            = vlTOPp->io_Stationary_matrix_7_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_63 
            = vlTOPp->io_Stationary_matrix_7_7;
    } else {
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_0 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_2 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_3 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_4 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_5 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_6 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_7 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_0_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_8 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_9 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_10 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_11 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_12 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_13 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_14 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_15 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_1_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_16 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_17 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_18 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_19 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_20 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_21 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_22 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_23 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_2_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_24 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_25 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_26 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_27 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_28 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_29 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_30 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_31 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_3_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_32 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_33 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_34 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_35 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_36 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_37 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_38 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_39 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_4_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_40 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_41 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_42 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_43 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_44 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_45 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_46 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_47 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_5_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_48 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_49 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_50 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_51 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_52 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_53 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_54 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_55 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_6_7;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_56 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_0;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_57 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_1;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_58 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_2;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_59 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_3;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_60 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_4;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_61 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_5;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_62 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_6;
        vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_63 
            = vlTOPp->ivntop__DOT__my_stationary__DOT__Station2_7_7;
    }
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_72 = ((
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                   & (7U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                   ? (IData)(vlTOPp->io_Stationary_matrix_0_7)
                                                   : 
                                                  (((0U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (6U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_0_6)
                                                    : 
                                                   (((0U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (5U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_0_5)
                                                     : 
                                                    (((0U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (4U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_0_4)
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (3U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_0_3)
                                                       : 
                                                      (((0U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (2U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_0_2)
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_0_1)
                                                         : (IData)(vlTOPp->io_Stationary_matrix_0_0))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_462 
        = (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_1_6)
            : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_1_5)
                : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_1_4)
                    : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_1_3)
                        : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_1_2)
                            : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                                : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_455))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_79 = ((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                   & (6U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                   ? (IData)(vlTOPp->io_Stationary_matrix_1_6)
                                                   : 
                                                  (((1U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (5U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_1_5)
                                                    : 
                                                   (((1U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (4U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_1_4)
                                                     : 
                                                    (((1U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_1_3)
                                                      : 
                                                     (((1U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (2U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_1_2)
                                                       : 
                                                      (((1U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (1U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_1_1)
                                                        : 
                                                       (((1U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (0U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_1_0)
                                                         : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_72))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_469 
        = (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_2_5)
            : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_2_4)
                : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_2_3)
                    : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_2_2)
                        : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_2_1)
                            : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_2_0)
                                : (((1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_1_7)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_462))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_86 = ((
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                   ? (IData)(vlTOPp->io_Stationary_matrix_2_5)
                                                   : 
                                                  (((2U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_2_4)
                                                    : 
                                                   (((2U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (3U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_2_3)
                                                     : 
                                                    (((2U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (2U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_2_2)
                                                      : 
                                                     (((2U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (1U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_2_1)
                                                       : 
                                                      (((2U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (0U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_2_0)
                                                        : 
                                                       (((1U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (7U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_1_7)
                                                         : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_79))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_476 
        = (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_3_4)
            : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_3_3)
                : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_3_2)
                    : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_3_1)
                        : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_3_0)
                            : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_2_7)
                                : (((2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_2_6)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_469))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_93 = ((
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                   ? (IData)(vlTOPp->io_Stationary_matrix_3_4)
                                                   : 
                                                  (((3U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_3_3)
                                                    : 
                                                   (((3U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_3_2)
                                                     : 
                                                    (((3U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (1U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_3_1)
                                                      : 
                                                     (((3U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_3_0)
                                                       : 
                                                      (((2U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (7U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_2_7)
                                                        : 
                                                       (((2U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (6U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_2_6)
                                                         : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_86))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_483 
        = (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_4_3)
            : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_4_2)
                : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_4_1)
                    : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_4_0)
                        : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_3_7)
                            : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_3_6)
                                : (((3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_3_5)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_476))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_100 = (
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_4_3)
                                                    : 
                                                   (((4U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_4_2)
                                                     : 
                                                    (((4U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (1U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_4_1)
                                                      : 
                                                     (((4U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_4_0)
                                                       : 
                                                      (((3U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (7U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_3_7)
                                                        : 
                                                       (((3U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (6U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_3_6)
                                                         : 
                                                        (((3U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                          & (5U 
                                                             == 
                                                             (7U 
                                                              & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                          ? (IData)(vlTOPp->io_Stationary_matrix_3_5)
                                                          : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_93))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_490 
        = (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_5_2)
            : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_5_1)
                : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_5_0)
                    : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_4_7)
                        : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_4_6)
                            : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_4_5)
                                : (((4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_4_4)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_483))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_107 = (
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (2U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_5_2)
                                                    : 
                                                   (((5U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (1U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_5_1)
                                                     : 
                                                    (((5U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (0U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_5_0)
                                                      : 
                                                     (((4U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (7U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_4_7)
                                                       : 
                                                      (((4U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (6U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_4_6)
                                                        : 
                                                       (((4U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (5U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_4_5)
                                                         : 
                                                        (((4U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                          & (4U 
                                                             == 
                                                             (7U 
                                                              & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                          ? (IData)(vlTOPp->io_Stationary_matrix_4_4)
                                                          : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_100))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_497 
        = (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_6_1)
            : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_6_0)
                : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_5_7)
                    : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_5_6)
                        : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_5_5)
                            : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_5_4)
                                : (((5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_5_3)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_490))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_114 = (
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_6_1)
                                                    : 
                                                   (((6U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (0U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_6_0)
                                                     : 
                                                    (((5U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (7U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_5_7)
                                                      : 
                                                     (((5U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (6U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_5_6)
                                                       : 
                                                      (((5U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_5_5)
                                                        : 
                                                       (((5U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (4U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_5_4)
                                                         : 
                                                        (((5U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                          & (3U 
                                                             == 
                                                             (7U 
                                                              & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                          ? (IData)(vlTOPp->io_Stationary_matrix_5_3)
                                                          : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_107))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_504 
        = (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (0U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_7_0)
            : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_6_7)
                : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_6_6)
                    : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_6_5)
                        : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_6_4)
                            : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_6_3)
                                : (((6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_6_2)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_497))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_121 = (
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_7_0)
                                                    : 
                                                   (((6U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (7U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_6_7)
                                                     : 
                                                    (((6U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (6U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_6_6)
                                                      : 
                                                     (((6U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_6_5)
                                                       : 
                                                      (((6U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (4U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_6_4)
                                                        : 
                                                       (((6U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (3U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_6_3)
                                                         : 
                                                        (((6U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                          & (2U 
                                                             == 
                                                             (7U 
                                                              & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                          ? (IData)(vlTOPp->io_Stationary_matrix_6_2)
                                                          : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_114))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_511 
        = (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
            & (7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
            ? (IData)(vlTOPp->io_Stationary_matrix_7_7)
            : (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                & (6U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                ? (IData)(vlTOPp->io_Stationary_matrix_7_6)
                : (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                    & (5U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                    ? (IData)(vlTOPp->io_Stationary_matrix_7_5)
                    : (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                        & (4U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                        ? (IData)(vlTOPp->io_Stationary_matrix_7_4)
                        : (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                            & (3U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                            ? (IData)(vlTOPp->io_Stationary_matrix_7_3)
                            : (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                & (2U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                ? (IData)(vlTOPp->io_Stationary_matrix_7_2)
                                : (((7U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__i)) 
                                    & (1U == (7U & vlTOPp->ivntop__DOT__my_stationary__DOT__j)))
                                    ? (IData)(vlTOPp->io_Stationary_matrix_7_1)
                                    : (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_504))))))));
    vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_128 = (
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                    & (7U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                    ? (IData)(vlTOPp->io_Stationary_matrix_7_7)
                                                    : 
                                                   (((7U 
                                                      == 
                                                      (7U 
                                                       & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                     & (6U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                     ? (IData)(vlTOPp->io_Stationary_matrix_7_6)
                                                     : 
                                                    (((7U 
                                                       == 
                                                       (7U 
                                                        & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                      & (5U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                      ? (IData)(vlTOPp->io_Stationary_matrix_7_5)
                                                      : 
                                                     (((7U 
                                                        == 
                                                        (7U 
                                                         & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                       ? (IData)(vlTOPp->io_Stationary_matrix_7_4)
                                                       : 
                                                      (((7U 
                                                         == 
                                                         (7U 
                                                          & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                        & (3U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                        ? (IData)(vlTOPp->io_Stationary_matrix_7_3)
                                                        : 
                                                       (((7U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                         & (2U 
                                                            == 
                                                            (7U 
                                                             & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                         ? (IData)(vlTOPp->io_Stationary_matrix_7_2)
                                                         : 
                                                        (((7U 
                                                           == 
                                                           (7U 
                                                            & vlTOPp->ivntop__DOT__my_ivn1__DOT__i)) 
                                                          & (1U 
                                                             == 
                                                             (7U 
                                                              & vlTOPp->ivntop__DOT__my_ivn1__DOT__j)))
                                                          ? (IData)(vlTOPp->io_Stationary_matrix_7_1)
                                                          : (IData)(vlTOPp->ivntop__DOT__my_ivn1__DOT___GEN_121))))))));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_705 
        = ((8U <= vlTOPp->ivntop__DOT__my_stationary__DOT__count)
            ? vlTOPp->ivntop__DOT__my_stationary__DOT__count
            : ((0U != (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_511))
                ? ((IData)(1U) + vlTOPp->ivntop__DOT__my_stationary__DOT__count)
                : vlTOPp->ivntop__DOT__my_stationary__DOT__count));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_963 
        = ((0x10U <= vlTOPp->ivntop__DOT__my_stationary__DOT__count)
            ? vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_705
            : ((0U != (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_769))
                ? ((IData)(1U) + vlTOPp->ivntop__DOT__my_stationary__DOT__count)
                : vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_705));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1221 
        = ((0x18U <= vlTOPp->ivntop__DOT__my_stationary__DOT__count)
            ? vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_963
            : ((0U != (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1027))
                ? ((IData)(1U) + vlTOPp->ivntop__DOT__my_stationary__DOT__count)
                : vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_963));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1479 
        = ((0x20U <= vlTOPp->ivntop__DOT__my_stationary__DOT__count)
            ? vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1221
            : ((0U != (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1285))
                ? ((IData)(1U) + vlTOPp->ivntop__DOT__my_stationary__DOT__count)
                : vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1221));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1737 
        = ((0x28U <= vlTOPp->ivntop__DOT__my_stationary__DOT__count)
            ? vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1479
            : ((0U != (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1543))
                ? ((IData)(1U) + vlTOPp->ivntop__DOT__my_stationary__DOT__count)
                : vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1479));
    vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1995 
        = ((0x30U <= vlTOPp->ivntop__DOT__my_stationary__DOT__count)
            ? vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1737
            : ((0U != (IData)(vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1801))
                ? ((IData)(1U) + vlTOPp->ivntop__DOT__my_stationary__DOT__count)
                : vlTOPp->ivntop__DOT__my_stationary__DOT___GEN_1737));
}

void Vivntop::_eval(Vivntop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vivntop::_eval\n"); );
    Vivntop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData Vivntop::_change_request(Vivntop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vivntop::_change_request\n"); );
    Vivntop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vivntop::_change_request_1(Vivntop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vivntop::_change_request_1\n"); );
    Vivntop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vivntop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vivntop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

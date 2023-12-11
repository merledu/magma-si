// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VTop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_0),16);
            tracep->chgSData(oldp+1,(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_0_1),16);
            tracep->chgSData(oldp+2,(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_0),16);
            tracep->chgSData(oldp+3,(vlTOPp->Top__DOT__PreProcessor__DOT__matReg1_1_1),16);
            tracep->chgBit(oldp+4,(vlTOPp->Top__DOT__PreProcessor__DOT___io_End_T_2));
            tracep->chgSData(oldp+5,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_0)
                                           : 0U) : 0U)),16);
            tracep->chgSData(oldp+6,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_1)
                                           : 0U) : 0U)),16);
            tracep->chgSData(oldp+7,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_0)
                                           : 0U) : 0U)),16);
            tracep->chgSData(oldp+8,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid)
                                           ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_1)
                                           : 0U) : 0U)),16);
            tracep->chgBit(oldp+9,(vlTOPp->Top__DOT__high));
            tracep->chgBit(oldp+10,(vlTOPp->Top__DOT__delay));
            tracep->chgSData(oldp+11,(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_0),16);
            tracep->chgSData(oldp+12,(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_0_1),16);
            tracep->chgSData(oldp+13,(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_0),16);
            tracep->chgSData(oldp+14,(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__matReg1_1_1),16);
            tracep->chgBit(oldp+15,(vlTOPp->Top__DOT__PreProcessor__DOT__reg_0));
            tracep->chgBit(oldp+16,(vlTOPp->Top__DOT__PreProcessor__DOT__reg_1));
            tracep->chgBit(oldp+17,(vlTOPp->Top__DOT__PreProcessor__DOT__i));
            tracep->chgBit(oldp+18,(vlTOPp->Top__DOT__PreProcessor__DOT__j));
            tracep->chgBit(oldp+19,(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__i));
            tracep->chgBit(oldp+20,(vlTOPp->Top__DOT__PreProcessor__DOT__bitmap__DOT__j));
            tracep->chgSData(oldp+21,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_0)),16);
            tracep->chgSData(oldp+22,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_1)),16);
            tracep->chgCData(oldp+23,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_0),4);
            tracep->chgCData(oldp+24,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_1),4);
            tracep->chgCData(oldp+25,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_2),4);
            tracep->chgCData(oldp+26,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_i_mux_bus_3),4);
            tracep->chgSData(oldp+27,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0),16);
            tracep->chgSData(oldp+28,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1),16);
            tracep->chgSData(oldp+29,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2),16);
            tracep->chgSData(oldp+30,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3),16);
            tracep->chgBit(oldp+31,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid));
            tracep->chgBit(oldp+32,(vlTOPp->Top__DOT__FDPU__DOT__PF_0_Ivalid_REG));
            tracep->chgIData(oldp+33,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_0),32);
            tracep->chgIData(oldp+34,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_1),32);
            tracep->chgIData(oldp+35,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_2),32);
            tracep->chgIData(oldp+36,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_Source_3),32);
            tracep->chgIData(oldp+37,(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0),32);
            tracep->chgIData(oldp+38,(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1),32);
            tracep->chgIData(oldp+39,(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2),32);
            tracep->chgIData(oldp+40,(vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3),32);
            tracep->chgSData(oldp+41,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0)),16);
            tracep->chgSData(oldp+42,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1)),16);
            tracep->chgSData(oldp+43,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2)),16);
            tracep->chgSData(oldp+44,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3)),16);
            tracep->chgSData(oldp+45,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_0)),16);
            tracep->chgSData(oldp+46,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_1)),16);
            tracep->chgSData(oldp+47,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_2)),16);
            tracep->chgSData(oldp+48,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3)),16);
            tracep->chgCData(oldp+49,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0),4);
            tracep->chgCData(oldp+50,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1),4);
            tracep->chgCData(oldp+51,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2),4);
            tracep->chgCData(oldp+52,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3),4);
            tracep->chgSData(oldp+53,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+54,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+55,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+56,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__matrix_1_1),16);
            tracep->chgIData(oldp+57,(vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0),32);
            tracep->chgIData(oldp+58,(vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1),32);
            tracep->chgIData(oldp+59,(vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2),32);
            tracep->chgIData(oldp+60,(vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3),32);
            tracep->chgIData(oldp+61,(vlTOPp->Top__DOT__FDPU__DOT__index),32);
            tracep->chgIData(oldp+62,(vlTOPp->Top__DOT__FDPU__DOT__iloop),32);
            tracep->chgIData(oldp+63,(vlTOPp->Top__DOT__FDPU__DOT__jloop),32);
            tracep->chgBit(oldp+64,(vlTOPp->Top__DOT__FDPU__DOT__Statvalid));
            tracep->chgBit(oldp+65,(vlTOPp->Top__DOT__FDPU__DOT__high3));
            tracep->chgIData(oldp+66,(vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_0),32);
            tracep->chgIData(oldp+67,(vlTOPp->Top__DOT__FDPU__DOT__PF1_Stream_Col_1),32);
            tracep->chgIData(oldp+68,(vlTOPp->Top__DOT__FDPU__DOT__ModuleIndex),32);
            tracep->chgIData(oldp+69,(vlTOPp->Top__DOT__FDPU__DOT__delay2),32);
            tracep->chgSData(oldp+70,(vlTOPp->Top__DOT__FDPU__DOT__delay4),16);
            tracep->chgBit(oldp+71,(vlTOPp->Top__DOT__FDPU__DOT__high4));
            tracep->chgBit(oldp+72,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder_io_PF_Valid) 
                                     | (4U > vlTOPp->Top__DOT__FDPU__DOT__delay2))));
            tracep->chgSData(oldp+73,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+74,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+75,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+76,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat1_1_1),16);
            tracep->chgSData(oldp+77,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+78,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+79,(((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0)
                                        : 0U)),16);
            tracep->chgSData(oldp+80,(((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1)
                                        : 0U)),16);
            tracep->chgSData(oldp+81,(((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0)
                                        : 0U)),16);
            tracep->chgSData(oldp+82,(((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1)
                                        : 0U)),16);
            tracep->chgSData(oldp+83,(((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0)
                                        : 0U)),16);
            tracep->chgSData(oldp+84,(((((4U <= vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay) 
                                         & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12)) 
                                        & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12))
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1)
                                        : 0U)),16);
            tracep->chgCData(oldp+85,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+86,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+87,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+88,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+89,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+90,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+91,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+92,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__src_3),16);
            tracep->chgBit(oldp+93,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes_io_valid));
            tracep->chgBit(oldp+94,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__io_End_REG_1));
            tracep->chgBit(oldp+95,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT___T_12));
            tracep->chgSData(oldp+96,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+97,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+98,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+99,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+100,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+101,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgBit(oldp+102,(((1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j) 
                                      & (1U == vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i))));
            tracep->chgIData(oldp+103,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__delay),32);
            tracep->chgSData(oldp+104,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+105,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+106,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+107,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+108,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+109,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgBit(oldp+110,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+111,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+112,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+113,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+114,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__counter),32);
            tracep->chgSData(oldp+115,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+116,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+117,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+118,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+119,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myMuxes__DOT__io_End_REG));
            tracep->chgSData(oldp+120,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+121,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+122,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+123,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgBit(oldp+124,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__matricesAreEqual));
            tracep->chgIData(oldp+125,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+126,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+127,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+128,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+129,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+130,(vlTOPp->Top__DOT__FDPU__DOT__PathFinder__DOT__myCounter__DOT__counter2),32);
            tracep->chgBit(oldp+131,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+132,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+133,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgSData(oldp+134,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                      : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                                     : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40)))),16);
            tracep->chgSData(oldp+135,((0xffffU & (
                                                   (0U 
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
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41)))),16);
            tracep->chgSData(oldp+136,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                      : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                                     : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42)))),16);
            tracep->chgSData(oldp+137,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                      : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43))
                                                     : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3)
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43)))),16);
            tracep->chgSData(oldp+138,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                         ? 
                                                        ((0U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                          : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40)))))),16);
            tracep->chgSData(oldp+139,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1) 
                                                   * 
                                                   (0xffffU 
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
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41)))))),16);
            tracep->chgSData(oldp+140,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                         ? 
                                                        ((2U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                          : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42)))))),16);
            tracep->chgSData(oldp+141,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                                        ? 
                                                       ((0U 
                                                         != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                         ? 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                          : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43))
                                                         : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3)
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43)))))),16);
            tracep->chgIData(oldp+142,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0),32);
            tracep->chgIData(oldp+143,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1),32);
            tracep->chgIData(oldp+144,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2),32);
            tracep->chgIData(oldp+145,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3),32);
            tracep->chgSData(oldp+146,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0),15);
            tracep->chgSData(oldp+147,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1),15);
            tracep->chgSData(oldp+148,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2),15);
            tracep->chgSData(oldp+149,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3),15);
            tracep->chgIData(oldp+150,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__counter),32);
            tracep->chgIData(oldp+151,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+152,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+153,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+154,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+155,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+156,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+157,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+158,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+159,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+160,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1),32);
            tracep->chgBit(oldp+161,(((1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i) 
                                      & (1U == vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j))));
            tracep->chgBit(oldp+162,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+163,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+164,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgBit(oldp+165,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+166,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+167,((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0))));
            tracep->chgBit(oldp+168,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+169,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+170,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex),2);
            tracep->chgCData(oldp+171,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1),2);
            tracep->chgCData(oldp+172,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue),2);
            tracep->chgBit(oldp+173,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1)))));
            tracep->chgBit(oldp+174,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+175,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1) 
                                            >> 2U))));
            tracep->chgBit(oldp+176,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_1)))));
            tracep->chgCData(oldp+177,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_2),2);
            tracep->chgCData(oldp+178,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_3),2);
            tracep->chgCData(oldp+179,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_1),2);
            tracep->chgCData(oldp+180,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+181,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+182,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+183,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_4),2);
            tracep->chgCData(oldp+184,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_5),2);
            tracep->chgCData(oldp+185,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_2),2);
            tracep->chgCData(oldp+186,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+187,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+188,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+189,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_6),2);
            tracep->chgCData(oldp+190,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_7),2);
            tracep->chgCData(oldp+191,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3),2);
            tracep->chgIData(oldp+192,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_0) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                               ? ((0U 
                                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_40))))),32);
            tracep->chgIData(oldp+193,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_1) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                               ? ((0U 
                                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_41))))),32);
            tracep->chgIData(oldp+194,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_2) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                               ? ((0U 
                                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_42))))),32);
            tracep->chgIData(oldp+195,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__nonZeroValues_3) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3))
                                               ? ((0U 
                                                   != (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4_io_i_mux_bus_3))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT__parsedindexvalue_3))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43))
                                                   : vlTOPp->Top__DOT__FDPU__DOT__MuxesWrapper_io_Osrc_3)
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_Benes__DOT___GEN_43))))),32);
            tracep->chgQData(oldp+196,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+198,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+200,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+201,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgQData(oldp+202,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+204,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+206,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgIData(oldp+207,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+208,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+209,(((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_1))))),32);
            tracep->chgCData(oldp+210,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgCData(oldp+211,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+212,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+213,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+214,(((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__r_mult_3))))),32);
            tracep->chgCData(oldp+215,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+216,((0xffffU & (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder))))),16);
            tracep->chgSData(oldp+217,((0xffffU & (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))),16);
            tracep->chgIData(oldp+218,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder),32);
            tracep->chgIData(oldp+219,(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder),32);
            tracep->chgQData(oldp+220,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))),64);
            tracep->chgQData(oldp+222,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder))),64);
            tracep->chgIData(oldp+224,((vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                        + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder)),32);
        }
        tracep->chgBit(oldp+225,(vlTOPp->clock));
        tracep->chgBit(oldp+226,(vlTOPp->reset));
        tracep->chgIData(oldp+227,(vlTOPp->io_Stationary_matrix_0_0),32);
        tracep->chgIData(oldp+228,(vlTOPp->io_Stationary_matrix_0_1),32);
        tracep->chgIData(oldp+229,(vlTOPp->io_Stationary_matrix_1_0),32);
        tracep->chgIData(oldp+230,(vlTOPp->io_Stationary_matrix_1_1),32);
        tracep->chgIData(oldp+231,(vlTOPp->io_Streaming_matrix_0_0),32);
        tracep->chgIData(oldp+232,(vlTOPp->io_Streaming_matrix_0_1),32);
        tracep->chgIData(oldp+233,(vlTOPp->io_Streaming_matrix_1_0),32);
        tracep->chgIData(oldp+234,(vlTOPp->io_Streaming_matrix_1_1),32);
        tracep->chgIData(oldp+235,(vlTOPp->io_Third_Matrix_0_0),32);
        tracep->chgIData(oldp+236,(vlTOPp->io_Third_Matrix_0_1),32);
        tracep->chgIData(oldp+237,(vlTOPp->io_Third_Matrix_1_0),32);
        tracep->chgIData(oldp+238,(vlTOPp->io_Third_Matrix_1_1),32);
        tracep->chgSData(oldp+239,((0xffffU & vlTOPp->io_Stationary_matrix_0_0)),16);
        tracep->chgSData(oldp+240,((0xffffU & vlTOPp->io_Stationary_matrix_0_1)),16);
        tracep->chgSData(oldp+241,((0xffffU & vlTOPp->io_Stationary_matrix_1_0)),16);
        tracep->chgSData(oldp+242,((0xffffU & vlTOPp->io_Stationary_matrix_1_1)),16);
        tracep->chgSData(oldp+243,((0xffffU & vlTOPp->io_Streaming_matrix_0_0)),16);
        tracep->chgSData(oldp+244,((0xffffU & vlTOPp->io_Streaming_matrix_0_1)),16);
        tracep->chgSData(oldp+245,((0xffffU & vlTOPp->io_Streaming_matrix_1_0)),16);
        tracep->chgSData(oldp+246,((0xffffU & vlTOPp->io_Streaming_matrix_1_1)),16);
        tracep->chgSData(oldp+247,(((IData)(vlTOPp->reset)
                                     ? 0U : ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en))
                                              ? 0U : 
                                             (0xffffU 
                                              & (vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                                 + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))),16);
        tracep->chgIData(oldp+248,(((IData)(vlTOPp->reset)
                                     ? 0U : ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en))
                                              ? 0U : 
                                             (vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                              + vlTOPp->Top__DOT__FDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2_io_o_adder)))),32);
    }
}

void VTop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}

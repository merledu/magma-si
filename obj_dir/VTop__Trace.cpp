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
            tracep->chgBit(oldp+4,(vlTOPp->Top__DOT__PreProcessor__DOT__io_valid_REG));
            tracep->chgSData(oldp+5,(((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__io_valid_REG)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                           ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                               ? (0xffffU 
                                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_0_0))
                                               : 0U)
                                           : 0U) : 0U)),16);
            tracep->chgSData(oldp+6,(((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__io_valid_REG)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                           ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                               ? (0xffffU 
                                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_0_1))
                                               : 0U)
                                           : 0U) : 0U)),16);
            tracep->chgSData(oldp+7,(((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__io_valid_REG)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                           ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                               ? (0xffffU 
                                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_1_0))
                                               : 0U)
                                           : 0U) : 0U)),16);
            tracep->chgSData(oldp+8,(((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__io_valid_REG)
                                       ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                           ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                               ? (0xffffU 
                                                  & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_1_1))
                                               : 0U)
                                           : 0U) : 0U)),16);
            tracep->chgBit(oldp+9,(((IData)(vlTOPp->Top__DOT__PreProcessor__DOT__io_valid_REG) 
                                    & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid) 
                                       & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig) 
                                          & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__o_valid))))));
            tracep->chgBit(oldp+10,(vlTOPp->Top__DOT__PreProcessor__DOT__reg_0));
            tracep->chgBit(oldp+11,(vlTOPp->Top__DOT__PreProcessor__DOT__reg_1));
            tracep->chgBit(oldp+12,(vlTOPp->Top__DOT__PreProcessor__DOT__delay));
            tracep->chgIData(oldp+13,(vlTOPp->Top__DOT__PreProcessor__DOT__i),32);
            tracep->chgIData(oldp+14,(vlTOPp->Top__DOT__PreProcessor__DOT__j),32);
            tracep->chgSData(oldp+15,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT___GEN_58)),16);
            tracep->chgSData(oldp+16,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT___GEN_60)),16);
            tracep->chgCData(oldp+17,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_0)
                                        : 0U)),4);
            tracep->chgCData(oldp+18,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_1)
                                        : 0U)),4);
            tracep->chgCData(oldp+19,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_2)
                                        : 0U)),4);
            tracep->chgCData(oldp+20,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_3)
                                        : 0U)),4);
            tracep->chgCData(oldp+21,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_0)
                                        : 0U)),4);
            tracep->chgCData(oldp+22,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_1)
                                        : 0U)),4);
            tracep->chgCData(oldp+23,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_2)
                                        : 0U)),4);
            tracep->chgCData(oldp+24,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_3)
                                        : 0U)),4);
            tracep->chgCData(oldp+25,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_0)
                                        : 0U)),4);
            tracep->chgCData(oldp+26,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_1)
                                        : 0U)),4);
            tracep->chgCData(oldp+27,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_2)
                                        : 0U)),4);
            tracep->chgCData(oldp+28,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_3)
                                        : 0U)),4);
            tracep->chgCData(oldp+29,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_0)
                                        : 0U)),4);
            tracep->chgCData(oldp+30,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_1)
                                        : 0U)),4);
            tracep->chgCData(oldp+31,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_2)
                                        : 0U)),4);
            tracep->chgCData(oldp+32,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_3)
                                        : 0U)),4);
            tracep->chgSData(oldp+33,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+34,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+35,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+36,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgBit(oldp+37,(vlTOPp->Top__DOT__FDPU__DOT__PF_io_PF_Valid));
            tracep->chgBit(oldp+38,(vlTOPp->Top__DOT__FDPU__DOT__Statvalid));
            tracep->chgSData(oldp+39,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_0)),16);
            tracep->chgSData(oldp+40,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_1)),16);
            tracep->chgSData(oldp+41,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_2)),16);
            tracep->chgSData(oldp+42,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_3)),16);
            tracep->chgSData(oldp+43,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__src_0)),16);
            tracep->chgSData(oldp+44,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__src_1)),16);
            tracep->chgSData(oldp+45,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__src_2)),16);
            tracep->chgSData(oldp+46,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__src_3)),16);
            tracep->chgCData(oldp+47,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_0),4);
            tracep->chgCData(oldp+48,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_1),4);
            tracep->chgCData(oldp+49,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_2),4);
            tracep->chgCData(oldp+50,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_3),4);
            tracep->chgCData(oldp+51,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_0),4);
            tracep->chgCData(oldp+52,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_1),4);
            tracep->chgCData(oldp+53,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_2),4);
            tracep->chgCData(oldp+54,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_3),4);
            tracep->chgCData(oldp+55,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_0),4);
            tracep->chgCData(oldp+56,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_1),4);
            tracep->chgCData(oldp+57,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_2),4);
            tracep->chgCData(oldp+58,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_3),4);
            tracep->chgCData(oldp+59,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_0),4);
            tracep->chgCData(oldp+60,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_1),4);
            tracep->chgCData(oldp+61,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_2),4);
            tracep->chgCData(oldp+62,(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_3),4);
            tracep->chgSData(oldp+63,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_0_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+64,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_0_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+65,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_1_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+66,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_1_1))
                                        : 0U)),16);
            tracep->chgBit(oldp+67,(vlTOPp->Top__DOT__FDPU__DOT__hig));
            tracep->chgBit(oldp+68,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig) 
                                     & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__o_valid))));
            tracep->chgIData(oldp+69,(vlTOPp->Top__DOT__FDPU__DOT__DPEDest_0_0),32);
            tracep->chgIData(oldp+70,(vlTOPp->Top__DOT__FDPU__DOT__DPEDest_0_1),32);
            tracep->chgIData(oldp+71,(vlTOPp->Top__DOT__FDPU__DOT__DPEDest_0_2),32);
            tracep->chgIData(oldp+72,(vlTOPp->Top__DOT__FDPU__DOT__DPEDest_0_3),32);
            tracep->chgIData(oldp+73,(vlTOPp->Top__DOT__FDPU__DOT__DPESrc_0_0),32);
            tracep->chgIData(oldp+74,(vlTOPp->Top__DOT__FDPU__DOT__DPESrc_0_1),32);
            tracep->chgIData(oldp+75,(vlTOPp->Top__DOT__FDPU__DOT__DPESrc_1_0),32);
            tracep->chgIData(oldp+76,(vlTOPp->Top__DOT__FDPU__DOT__DPESrc_1_1),32);
            tracep->chgIData(oldp+77,(vlTOPp->Top__DOT__FDPU__DOT__indexRow),32);
            tracep->chgIData(oldp+78,(vlTOPp->Top__DOT__FDPU__DOT__indexCol),32);
            tracep->chgIData(oldp+79,(vlTOPp->Top__DOT__FDPU__DOT__SindexRow),32);
            tracep->chgIData(oldp+80,(vlTOPp->Top__DOT__FDPU__DOT__SindexCol),32);
            tracep->chgIData(oldp+81,(vlTOPp->Top__DOT__FDPU__DOT__iloop),32);
            tracep->chgIData(oldp+82,(vlTOPp->Top__DOT__FDPU__DOT__jloop),32);
            tracep->chgBit(oldp+83,(vlTOPp->Top__DOT__FDPU__DOT__SrcDestValid));
            tracep->chgIData(oldp+84,(vlTOPp->Top__DOT__FDPU__DOT__src_0),32);
            tracep->chgIData(oldp+85,(vlTOPp->Top__DOT__FDPU__DOT__src_1),32);
            tracep->chgIData(oldp+86,(vlTOPp->Top__DOT__FDPU__DOT__src_2),32);
            tracep->chgIData(oldp+87,(vlTOPp->Top__DOT__FDPU__DOT__src_3),32);
            tracep->chgCData(oldp+88,(vlTOPp->Top__DOT__FDPU__DOT__muxes_0_0),4);
            tracep->chgCData(oldp+89,(vlTOPp->Top__DOT__FDPU__DOT__muxes_0_1),4);
            tracep->chgCData(oldp+90,(vlTOPp->Top__DOT__FDPU__DOT__muxes_0_2),4);
            tracep->chgCData(oldp+91,(vlTOPp->Top__DOT__FDPU__DOT__muxes_0_3),4);
            tracep->chgCData(oldp+92,(vlTOPp->Top__DOT__FDPU__DOT__muxes_1_0),4);
            tracep->chgCData(oldp+93,(vlTOPp->Top__DOT__FDPU__DOT__muxes_1_1),4);
            tracep->chgCData(oldp+94,(vlTOPp->Top__DOT__FDPU__DOT__muxes_1_2),4);
            tracep->chgCData(oldp+95,(vlTOPp->Top__DOT__FDPU__DOT__muxes_1_3),4);
            tracep->chgCData(oldp+96,(vlTOPp->Top__DOT__FDPU__DOT__muxes_2_0),4);
            tracep->chgCData(oldp+97,(vlTOPp->Top__DOT__FDPU__DOT__muxes_2_1),4);
            tracep->chgCData(oldp+98,(vlTOPp->Top__DOT__FDPU__DOT__muxes_2_2),4);
            tracep->chgCData(oldp+99,(vlTOPp->Top__DOT__FDPU__DOT__muxes_2_3),4);
            tracep->chgCData(oldp+100,(vlTOPp->Top__DOT__FDPU__DOT__muxes_3_0),4);
            tracep->chgCData(oldp+101,(vlTOPp->Top__DOT__FDPU__DOT__muxes_3_1),4);
            tracep->chgCData(oldp+102,(vlTOPp->Top__DOT__FDPU__DOT__muxes_3_2),4);
            tracep->chgCData(oldp+103,(vlTOPp->Top__DOT__FDPU__DOT__muxes_3_3),4);
            tracep->chgIData(oldp+104,(vlTOPp->Top__DOT__FDPU__DOT__dest_0),32);
            tracep->chgIData(oldp+105,(vlTOPp->Top__DOT__FDPU__DOT__dest_1),32);
            tracep->chgIData(oldp+106,(vlTOPp->Top__DOT__FDPU__DOT__dest_2),32);
            tracep->chgIData(oldp+107,(vlTOPp->Top__DOT__FDPU__DOT__dest_3),32);
            tracep->chgBit(oldp+108,(vlTOPp->Top__DOT__FDPU__DOT__iterationChange));
            tracep->chgBit(oldp+109,(vlTOPp->Top__DOT__FDPU__DOT__hi));
            tracep->chgSData(oldp+110,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+111,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+112,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+113,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_mat1_1_1),16);
            tracep->chgSData(oldp+114,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+115,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+116,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_0),16);
            tracep->chgSData(oldp+117,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_1),16);
            tracep->chgSData(oldp+118,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_0),16);
            tracep->chgSData(oldp+119,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_1),16);
            tracep->chgSData(oldp+120,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix2_0),16);
            tracep->chgSData(oldp+121,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix2_1),16);
            tracep->chgCData(oldp+122,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_0),4);
            tracep->chgCData(oldp+123,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_1),4);
            tracep->chgCData(oldp+124,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_2),4);
            tracep->chgCData(oldp+125,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_3),4);
            tracep->chgCData(oldp+126,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_0),4);
            tracep->chgCData(oldp+127,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_1),4);
            tracep->chgCData(oldp+128,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_2),4);
            tracep->chgCData(oldp+129,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_3),4);
            tracep->chgCData(oldp+130,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_0),4);
            tracep->chgCData(oldp+131,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_1),4);
            tracep->chgCData(oldp+132,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_2),4);
            tracep->chgCData(oldp+133,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_3),4);
            tracep->chgCData(oldp+134,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_0),4);
            tracep->chgCData(oldp+135,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_1),4);
            tracep->chgCData(oldp+136,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_2),4);
            tracep->chgCData(oldp+137,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_3),4);
            tracep->chgSData(oldp+138,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+139,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+140,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+141,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__src_3),16);
            tracep->chgBit(oldp+142,(((((0U != vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__k) 
                                        & (1U == vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__j)) 
                                       & (1U == vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__i)) 
                                      & (0U == vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+143,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+144,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+145,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+146,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+147,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs2_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+148,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs2_1))
                                         : 0U)),16);
            tracep->chgBit(oldp+149,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_valid));
            tracep->chgBit(oldp+150,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter_io_start_REG));
            tracep->chgBit(oldp+151,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__io_PF_Valid_REG));
            tracep->chgSData(oldp+152,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+153,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+154,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+155,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+156,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+157,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgBit(oldp+158,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+159,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+160,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+161,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+162,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+163,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__counter),32);
            tracep->chgIData(oldp+164,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__indexcounter),32);
            tracep->chgCData(oldp+165,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_0),2);
            tracep->chgCData(oldp+166,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_1),2);
            tracep->chgCData(oldp+167,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_2),2);
            tracep->chgCData(oldp+168,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_0_3),2);
            tracep->chgCData(oldp+169,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_0),2);
            tracep->chgCData(oldp+170,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_1),2);
            tracep->chgCData(oldp+171,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_2),2);
            tracep->chgCData(oldp+172,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_1_3),2);
            tracep->chgCData(oldp+173,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_0),2);
            tracep->chgCData(oldp+174,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_1),2);
            tracep->chgCData(oldp+175,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_2),2);
            tracep->chgCData(oldp+176,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_2_3),2);
            tracep->chgCData(oldp+177,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_0),2);
            tracep->chgCData(oldp+178,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_1),2);
            tracep->chgCData(oldp+179,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_2),2);
            tracep->chgCData(oldp+180,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__muxes_3_3),2);
            tracep->chgSData(oldp+181,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+182,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+183,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+184,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__dest_3),16);
            tracep->chgIData(oldp+185,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes__DOT__jNext),32);
            tracep->chgBit(oldp+186,(((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_0))
                                       ? (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_0) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgBit(oldp+187,(((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_1))
                                       ? (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_1) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgBit(oldp+188,(((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_0))
                                       ? (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_0) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgBit(oldp+189,(((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_1))
                                       ? (1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_1) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgSData(oldp+190,(((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix2_0))
                                         ? (0xffffU 
                                            & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix2_0) 
                                               - (IData)(0xffffU)))
                                         : 0U)),16);
            tracep->chgSData(oldp+191,(((0U != (IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix2_1))
                                         ? (0xffffU 
                                            & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myMuxes_io_counterMatrix2_1) 
                                               - (IData)(0xffffU)))
                                         : 0U)),16);
            tracep->chgSData(oldp+192,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_0),16);
            tracep->chgSData(oldp+193,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_1),16);
            tracep->chgBit(oldp+194,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+195,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+196,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+197,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+198,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+199,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+200,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgIData(oldp+201,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+202,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+203,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+204,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+205,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+206,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__counter2),32);
            tracep->chgBit(oldp+207,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__high));
            tracep->chgBit(oldp+208,(vlTOPp->Top__DOT__FDPU__DOT__PF__DOT__myCounter__DOT__io_valid_REG));
            tracep->chgCData(oldp+209,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__i_vn_0),5);
            tracep->chgCData(oldp+210,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__i_vn_1),5);
            tracep->chgCData(oldp+211,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__i_vn_2),5);
            tracep->chgCData(oldp+212,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__i_vn_3),5);
            tracep->chgBit(oldp+213,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+214,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+215,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgCData(oldp+216,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),3);
            tracep->chgCData(oldp+217,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),3);
            tracep->chgCData(oldp+218,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),3);
            tracep->chgBit(oldp+219,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_valid_3));
            tracep->chgSData(oldp+220,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                        ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                         ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_645)))))
                                                     : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_645))
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_505)))),16);
            tracep->chgSData(oldp+221,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                        ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                         ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_646)))))
                                                     : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_646))
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_506)))),16);
            tracep->chgSData(oldp+222,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                        ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                         ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_647)))))
                                                     : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_647))
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_507)))),16);
            tracep->chgSData(oldp+223,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                        ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                         ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_648)))))
                                                     : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_648))
                                                    : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_508)))),16);
            tracep->chgSData(oldp+224,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__dest_0) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((0U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                          : 
                                                         ((0U 
                                                           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                           ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                           : 
                                                          ((0U 
                                                            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                            ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                            : 
                                                           ((0U 
                                                             == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                             ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                             : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_645)))))
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_645))
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_505)))))),16);
            tracep->chgSData(oldp+225,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__dest_1) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((1U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                           ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                            ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                             ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                             : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_646)))))
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_646))
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_506)))))),16);
            tracep->chgSData(oldp+226,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__dest_2) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((2U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                           ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                            ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                             ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                             : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_647)))))
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_647))
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_507)))))),16);
            tracep->chgSData(oldp+227,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->Top__DOT__FDPU__DOT__dest_3) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((3U 
                                                          == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                          ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                           ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                            ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                             ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                             : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_648)))))
                                                         : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_648))
                                                        : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_508)))))),16);
            tracep->chgIData(oldp+228,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_0),32);
            tracep->chgIData(oldp+229,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_1),32);
            tracep->chgIData(oldp+230,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_2),32);
            tracep->chgIData(oldp+231,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_3),32);
            tracep->chgSData(oldp+232,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_0),15);
            tracep->chgSData(oldp+233,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_1),15);
            tracep->chgSData(oldp+234,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_2),15);
            tracep->chgSData(oldp+235,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_3),15);
            tracep->chgIData(oldp+236,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__counter),32);
            tracep->chgBit(oldp+237,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__o_valid));
            tracep->chgSData(oldp+238,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+239,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+240,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+241,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__matrix_1_1),16);
            tracep->chgIData(oldp+242,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+243,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+244,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+245,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+246,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+247,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+248,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+249,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+250,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+251,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__count_1),32);
            tracep->chgBit(oldp+252,(((1U == vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__i) 
                                      & (1U == vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_ivn__DOT__j))));
            tracep->chgBit(oldp+253,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+254,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+255,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgCData(oldp+256,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_0),3);
            tracep->chgCData(oldp+257,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_1),3);
            tracep->chgCData(oldp+258,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_2),3);
            tracep->chgCData(oldp+259,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__w_vn_0),5);
            tracep->chgCData(oldp+260,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__w_vn_1),5);
            tracep->chgCData(oldp+261,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__w_vn_2),5);
            tracep->chgCData(oldp+262,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__w_vn_3),5);
            tracep->chgBit(oldp+263,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+264,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+265,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_valid_2));
            tracep->chgBit(oldp+266,((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_0))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+269,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex),2);
            tracep->chgCData(oldp+270,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1),2);
            tracep->chgCData(oldp+271,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue),2);
            tracep->chgBit(oldp+272,((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_1))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_1) 
                                            >> 2U))));
            tracep->chgCData(oldp+275,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex),2);
            tracep->chgCData(oldp+276,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1),2);
            tracep->chgCData(oldp+277,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1),2);
            tracep->chgBit(oldp+278,((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_2))));
            tracep->chgBit(oldp+279,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+280,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+281,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex),2);
            tracep->chgCData(oldp+282,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1),2);
            tracep->chgCData(oldp+283,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2),2);
            tracep->chgBit(oldp+284,((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_3))));
            tracep->chgBit(oldp+285,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_0_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+287,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex),2);
            tracep->chgCData(oldp+288,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1),2);
            tracep->chgCData(oldp+289,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3),2);
            tracep->chgBit(oldp+290,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_0)))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+292,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_0) 
                                            >> 2U))));
            tracep->chgBit(oldp+293,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_0)))));
            tracep->chgCData(oldp+294,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10),2);
            tracep->chgCData(oldp+295,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11),2);
            tracep->chgCData(oldp+296,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5),2);
            tracep->chgBit(oldp+297,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_1)))));
            tracep->chgBit(oldp+298,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+299,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_1) 
                                            >> 2U))));
            tracep->chgBit(oldp+300,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_1)))));
            tracep->chgCData(oldp+301,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14),2);
            tracep->chgCData(oldp+302,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15),2);
            tracep->chgCData(oldp+303,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7),2);
            tracep->chgBit(oldp+304,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_2)))));
            tracep->chgBit(oldp+305,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_2) 
                                            >> 2U))));
            tracep->chgBit(oldp+307,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_2)))));
            tracep->chgCData(oldp+308,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12),2);
            tracep->chgCData(oldp+309,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13),2);
            tracep->chgCData(oldp+310,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6),2);
            tracep->chgBit(oldp+311,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_3)))));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_3) 
                                            >> 2U))));
            tracep->chgBit(oldp+314,((1U & (~ (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_1_3)))));
            tracep->chgCData(oldp+315,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8),2);
            tracep->chgCData(oldp+316,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9),2);
            tracep->chgCData(oldp+317,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4),2);
            tracep->chgCData(oldp+318,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_0))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+319,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+321,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20),2);
            tracep->chgCData(oldp+322,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21),2);
            tracep->chgCData(oldp+323,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10),2);
            tracep->chgCData(oldp+324,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_1))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+325,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+326,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_1) 
                                            >> 2U))));
            tracep->chgCData(oldp+327,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28),2);
            tracep->chgCData(oldp+328,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29),2);
            tracep->chgCData(oldp+329,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14),2);
            tracep->chgCData(oldp+330,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_2))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+331,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+333,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24),2);
            tracep->chgCData(oldp+334,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25),2);
            tracep->chgCData(oldp+335,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12),2);
            tracep->chgCData(oldp+336,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_3))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+337,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_2_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+339,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16),2);
            tracep->chgCData(oldp+340,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17),2);
            tracep->chgCData(oldp+341,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8),2);
            tracep->chgCData(oldp+342,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_0))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+343,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+344,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+345,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30),2);
            tracep->chgCData(oldp+346,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31),2);
            tracep->chgCData(oldp+347,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15),2);
            tracep->chgCData(oldp+348,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_1))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+349,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+350,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_1) 
                                            >> 2U))));
            tracep->chgCData(oldp+351,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42),2);
            tracep->chgCData(oldp+352,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43),2);
            tracep->chgCData(oldp+353,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21),2);
            tracep->chgCData(oldp+354,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_2))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+355,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+356,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+357,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36),2);
            tracep->chgCData(oldp+358,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37),2);
            tracep->chgCData(oldp+359,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18),2);
            tracep->chgCData(oldp+360,(((1U & (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_3))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+361,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+362,((1U & ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE_io_i_mux_bus_3_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+363,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24),2);
            tracep->chgCData(oldp+364,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25),2);
            tracep->chgCData(oldp+365,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12),2);
            tracep->chgIData(oldp+366,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_0) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                               ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                     ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_645)))))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_645))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_505))))),32);
            tracep->chgIData(oldp+367,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_1) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                               ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                     ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_646)))))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_646))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_506))))),32);
            tracep->chgIData(oldp+368,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_2) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                               ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                     ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_647)))))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_647))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_507))))),32);
            tracep->chgIData(oldp+369,(((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__dest_3) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->Top__DOT__FDPU__DOT__src_3))
                                               ? ((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12))
                                                    ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18))
                                                     ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21))
                                                      ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15))
                                                       ? vlTOPp->Top__DOT__FDPU__DOT__src_3
                                                       : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_648)))))
                                                   : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_648))
                                               : (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_Benes__DOT___GEN_508))))),32);
            tracep->chgBit(oldp+370,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_0));
            tracep->chgQData(oldp+371,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+373,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+375,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+376,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),5);
            tracep->chgBit(oldp+377,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_1));
            tracep->chgCData(oldp+378,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgCData(oldp+379,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),5);
            tracep->chgQData(oldp+380,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+382,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+384,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgCData(oldp+385,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),5);
            tracep->chgIData(oldp+386,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+387,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+388,(((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_1))))),32);
            tracep->chgBit(oldp+389,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid));
            tracep->chgIData(oldp+390,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder),32);
            tracep->chgCData(oldp+391,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgBit(oldp+392,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid));
            tracep->chgIData(oldp+393,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder),32);
            tracep->chgCData(oldp+394,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+395,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+396,((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+397,(((IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__r_mult_3))))),32);
            tracep->chgBit(oldp+398,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid));
            tracep->chgIData(oldp+399,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder),32);
            tracep->chgCData(oldp+400,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+401,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT___GEN_49)),16);
            tracep->chgSData(oldp+402,((0xffffU & vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT___GEN_51)),16);
            tracep->chgIData(oldp+403,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder),32);
            tracep->chgIData(oldp+404,(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder),32);
            tracep->chgQData(oldp+405,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))),64);
            tracep->chgQData(oldp+407,((QData)((IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder))),64);
            tracep->chgIData(oldp+409,((vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                        + vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder)),32);
        }
        tracep->chgBit(oldp+410,(vlTOPp->clock));
        tracep->chgBit(oldp+411,(vlTOPp->reset));
        tracep->chgIData(oldp+412,(vlTOPp->io_Stationary_matrix_0_0),32);
        tracep->chgIData(oldp+413,(vlTOPp->io_Stationary_matrix_0_1),32);
        tracep->chgIData(oldp+414,(vlTOPp->io_Stationary_matrix_1_0),32);
        tracep->chgIData(oldp+415,(vlTOPp->io_Stationary_matrix_1_1),32);
        tracep->chgIData(oldp+416,(vlTOPp->io_Streaming_matrix_0_0),32);
        tracep->chgIData(oldp+417,(vlTOPp->io_Streaming_matrix_0_1),32);
        tracep->chgIData(oldp+418,(vlTOPp->io_Streaming_matrix_1_0),32);
        tracep->chgIData(oldp+419,(vlTOPp->io_Streaming_matrix_1_1),32);
        tracep->chgIData(oldp+420,(vlTOPp->io_Third_Matrix_0_0),32);
        tracep->chgIData(oldp+421,(vlTOPp->io_Third_Matrix_0_1),32);
        tracep->chgIData(oldp+422,(vlTOPp->io_Third_Matrix_1_0),32);
        tracep->chgIData(oldp+423,(vlTOPp->io_Third_Matrix_1_1),32);
        tracep->chgBit(oldp+424,(vlTOPp->io_O_valid));
        tracep->chgSData(oldp+425,((0xffffU & vlTOPp->io_Streaming_matrix_0_0)),16);
        tracep->chgSData(oldp+426,((0xffffU & vlTOPp->io_Streaming_matrix_0_1)),16);
        tracep->chgSData(oldp+427,((0xffffU & vlTOPp->io_Streaming_matrix_1_0)),16);
        tracep->chgSData(oldp+428,((0xffffU & vlTOPp->io_Streaming_matrix_1_1)),16);
        tracep->chgSData(oldp+429,((0xffffU & vlTOPp->io_Stationary_matrix_0_0)),16);
        tracep->chgSData(oldp+430,((0xffffU & vlTOPp->io_Stationary_matrix_0_1)),16);
        tracep->chgSData(oldp+431,((0xffffU & vlTOPp->io_Stationary_matrix_1_0)),16);
        tracep->chgSData(oldp+432,((0xffffU & vlTOPp->io_Stationary_matrix_1_1)),16);
        tracep->chgSData(oldp+433,(((IData)(vlTOPp->Top__DOT__FDPU__DOT__hig)
                                     ? ((IData)(vlTOPp->reset)
                                         ? 0U : (0xffffU 
                                                 & ((0U 
                                                     == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en))
                                                     ? vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder
                                                     : 
                                                    (vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                                     + vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))
                                     : 0U)),16);
        tracep->chgIData(oldp+434,(((IData)(vlTOPp->reset)
                                     ? 0U : ((0U == (IData)(vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en))
                                              ? vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder
                                              : (vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                                 + vlTOPp->Top__DOT__FDPU__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder)))),32);
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

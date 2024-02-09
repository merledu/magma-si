// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFlexDPUby2__Syms.h"


void VFlexDPUby2::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFlexDPUby2__Syms* __restrict vlSymsp = static_cast<VFlexDPUby2__Syms*>(userp);
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFlexDPUby2::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFlexDPUby2__Syms* __restrict vlSymsp = static_cast<VFlexDPUby2__Syms*>(userp);
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,((0xffffU & vlTOPp->FlexDPUby2__DOT___GEN_58)),16);
            tracep->chgSData(oldp+1,((0xffffU & vlTOPp->FlexDPUby2__DOT___GEN_60)),16);
            tracep->chgCData(oldp+2,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0)
                                       : 0U)),4);
            tracep->chgCData(oldp+3,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1)
                                       : 0U)),4);
            tracep->chgCData(oldp+4,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2)
                                       : 0U)),4);
            tracep->chgCData(oldp+5,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3)
                                       : 0U)),4);
            tracep->chgCData(oldp+6,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0)
                                       : 0U)),4);
            tracep->chgCData(oldp+7,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1)
                                       : 0U)),4);
            tracep->chgCData(oldp+8,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2)
                                       : 0U)),4);
            tracep->chgCData(oldp+9,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                       ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3)
                                       : 0U)),4);
            tracep->chgCData(oldp+10,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0)
                                        : 0U)),4);
            tracep->chgCData(oldp+11,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1)
                                        : 0U)),4);
            tracep->chgCData(oldp+12,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2)
                                        : 0U)),4);
            tracep->chgCData(oldp+13,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3)
                                        : 0U)),4);
            tracep->chgCData(oldp+14,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0)
                                        : 0U)),4);
            tracep->chgCData(oldp+15,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1)
                                        : 0U)),4);
            tracep->chgCData(oldp+16,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2)
                                        : 0U)),4);
            tracep->chgCData(oldp+17,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3)
                                        : 0U)),4);
            tracep->chgSData(oldp+18,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+19,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+20,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+21,(((IData)(vlTOPp->FlexDPUby2__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgBit(oldp+22,(vlTOPp->FlexDPUby2__DOT__PF_io_PF_Valid));
            tracep->chgBit(oldp+23,(vlTOPp->FlexDPUby2__DOT__Statvalid));
            tracep->chgSData(oldp+24,((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_0)),16);
            tracep->chgSData(oldp+25,((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_1)),16);
            tracep->chgSData(oldp+26,((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_2)),16);
            tracep->chgSData(oldp+27,((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_3)),16);
            tracep->chgSData(oldp+28,((0xffffU & vlTOPp->FlexDPUby2__DOT__src_0)),16);
            tracep->chgSData(oldp+29,((0xffffU & vlTOPp->FlexDPUby2__DOT__src_1)),16);
            tracep->chgSData(oldp+30,((0xffffU & vlTOPp->FlexDPUby2__DOT__src_2)),16);
            tracep->chgSData(oldp+31,((0xffffU & vlTOPp->FlexDPUby2__DOT__src_3)),16);
            tracep->chgCData(oldp+32,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0),4);
            tracep->chgCData(oldp+33,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1),4);
            tracep->chgCData(oldp+34,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2),4);
            tracep->chgCData(oldp+35,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3),4);
            tracep->chgCData(oldp+36,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0),4);
            tracep->chgCData(oldp+37,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1),4);
            tracep->chgCData(oldp+38,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2),4);
            tracep->chgCData(oldp+39,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3),4);
            tracep->chgCData(oldp+40,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0),4);
            tracep->chgCData(oldp+41,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1),4);
            tracep->chgCData(oldp+42,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2),4);
            tracep->chgCData(oldp+43,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3),4);
            tracep->chgCData(oldp+44,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0),4);
            tracep->chgCData(oldp+45,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1),4);
            tracep->chgCData(oldp+46,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2),4);
            tracep->chgCData(oldp+47,(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3),4);
            tracep->chgSData(oldp+48,(((IData)(vlTOPp->FlexDPUby2__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+49,(((IData)(vlTOPp->FlexDPUby2__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+50,(((IData)(vlTOPp->FlexDPUby2__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+51,(((IData)(vlTOPp->FlexDPUby2__DOT__hig)
                                        ? (0xffffU 
                                           & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_1))
                                        : 0U)),16);
            tracep->chgBit(oldp+52,(vlTOPp->FlexDPUby2__DOT__hig));
            tracep->chgBit(oldp+53,(((IData)(vlTOPp->FlexDPUby2__DOT__hig) 
                                     & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__o_valid))));
            tracep->chgIData(oldp+54,(vlTOPp->FlexDPUby2__DOT__DPEDest_0_0),32);
            tracep->chgIData(oldp+55,(vlTOPp->FlexDPUby2__DOT__DPEDest_0_1),32);
            tracep->chgIData(oldp+56,(vlTOPp->FlexDPUby2__DOT__DPEDest_0_2),32);
            tracep->chgIData(oldp+57,(vlTOPp->FlexDPUby2__DOT__DPEDest_0_3),32);
            tracep->chgIData(oldp+58,(vlTOPp->FlexDPUby2__DOT__DPESrc_0_0),32);
            tracep->chgIData(oldp+59,(vlTOPp->FlexDPUby2__DOT__DPESrc_0_1),32);
            tracep->chgIData(oldp+60,(vlTOPp->FlexDPUby2__DOT__DPESrc_1_0),32);
            tracep->chgIData(oldp+61,(vlTOPp->FlexDPUby2__DOT__DPESrc_1_1),32);
            tracep->chgIData(oldp+62,(vlTOPp->FlexDPUby2__DOT__indexRow),32);
            tracep->chgIData(oldp+63,(vlTOPp->FlexDPUby2__DOT__indexCol),32);
            tracep->chgIData(oldp+64,(vlTOPp->FlexDPUby2__DOT__SindexRow),32);
            tracep->chgIData(oldp+65,(vlTOPp->FlexDPUby2__DOT__SindexCol),32);
            tracep->chgIData(oldp+66,(vlTOPp->FlexDPUby2__DOT__iloop),32);
            tracep->chgIData(oldp+67,(vlTOPp->FlexDPUby2__DOT__jloop),32);
            tracep->chgBit(oldp+68,(vlTOPp->FlexDPUby2__DOT__SrcDestValid));
            tracep->chgIData(oldp+69,(vlTOPp->FlexDPUby2__DOT__src_0),32);
            tracep->chgIData(oldp+70,(vlTOPp->FlexDPUby2__DOT__src_1),32);
            tracep->chgIData(oldp+71,(vlTOPp->FlexDPUby2__DOT__src_2),32);
            tracep->chgIData(oldp+72,(vlTOPp->FlexDPUby2__DOT__src_3),32);
            tracep->chgCData(oldp+73,(vlTOPp->FlexDPUby2__DOT__muxes_0_0),4);
            tracep->chgCData(oldp+74,(vlTOPp->FlexDPUby2__DOT__muxes_0_1),4);
            tracep->chgCData(oldp+75,(vlTOPp->FlexDPUby2__DOT__muxes_0_2),4);
            tracep->chgCData(oldp+76,(vlTOPp->FlexDPUby2__DOT__muxes_0_3),4);
            tracep->chgCData(oldp+77,(vlTOPp->FlexDPUby2__DOT__muxes_1_0),4);
            tracep->chgCData(oldp+78,(vlTOPp->FlexDPUby2__DOT__muxes_1_1),4);
            tracep->chgCData(oldp+79,(vlTOPp->FlexDPUby2__DOT__muxes_1_2),4);
            tracep->chgCData(oldp+80,(vlTOPp->FlexDPUby2__DOT__muxes_1_3),4);
            tracep->chgCData(oldp+81,(vlTOPp->FlexDPUby2__DOT__muxes_2_0),4);
            tracep->chgCData(oldp+82,(vlTOPp->FlexDPUby2__DOT__muxes_2_1),4);
            tracep->chgCData(oldp+83,(vlTOPp->FlexDPUby2__DOT__muxes_2_2),4);
            tracep->chgCData(oldp+84,(vlTOPp->FlexDPUby2__DOT__muxes_2_3),4);
            tracep->chgCData(oldp+85,(vlTOPp->FlexDPUby2__DOT__muxes_3_0),4);
            tracep->chgCData(oldp+86,(vlTOPp->FlexDPUby2__DOT__muxes_3_1),4);
            tracep->chgCData(oldp+87,(vlTOPp->FlexDPUby2__DOT__muxes_3_2),4);
            tracep->chgCData(oldp+88,(vlTOPp->FlexDPUby2__DOT__muxes_3_3),4);
            tracep->chgIData(oldp+89,(vlTOPp->FlexDPUby2__DOT__dest_0),32);
            tracep->chgIData(oldp+90,(vlTOPp->FlexDPUby2__DOT__dest_1),32);
            tracep->chgIData(oldp+91,(vlTOPp->FlexDPUby2__DOT__dest_2),32);
            tracep->chgIData(oldp+92,(vlTOPp->FlexDPUby2__DOT__dest_3),32);
            tracep->chgBit(oldp+93,(vlTOPp->FlexDPUby2__DOT__iterationChange));
            tracep->chgBit(oldp+94,(vlTOPp->FlexDPUby2__DOT__hi));
            tracep->chgSData(oldp+95,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+96,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+97,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_0),16);
            tracep->chgSData(oldp+98,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_1),16);
            tracep->chgSData(oldp+99,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_0),16);
            tracep->chgSData(oldp+100,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_1),16);
            tracep->chgSData(oldp+101,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix2_0),16);
            tracep->chgSData(oldp+102,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix2_1),16);
            tracep->chgCData(oldp+103,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0),4);
            tracep->chgCData(oldp+104,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1),4);
            tracep->chgCData(oldp+105,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2),4);
            tracep->chgCData(oldp+106,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3),4);
            tracep->chgCData(oldp+107,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0),4);
            tracep->chgCData(oldp+108,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1),4);
            tracep->chgCData(oldp+109,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2),4);
            tracep->chgCData(oldp+110,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3),4);
            tracep->chgCData(oldp+111,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0),4);
            tracep->chgCData(oldp+112,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1),4);
            tracep->chgCData(oldp+113,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2),4);
            tracep->chgCData(oldp+114,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3),4);
            tracep->chgCData(oldp+115,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0),4);
            tracep->chgCData(oldp+116,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1),4);
            tracep->chgCData(oldp+117,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2),4);
            tracep->chgCData(oldp+118,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3),4);
            tracep->chgSData(oldp+119,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+120,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+121,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+122,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__src_3),16);
            tracep->chgBit(oldp+123,(((((0U != vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__k) 
                                        & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j)) 
                                       & (1U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i)) 
                                      & (0U == vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+124,(((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+125,(((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+126,(((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+127,(((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+128,(((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+129,(((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1))
                                         : 0U)),16);
            tracep->chgBit(oldp+130,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_valid));
            tracep->chgBit(oldp+131,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter_io_start_REG));
            tracep->chgBit(oldp+132,(vlTOPp->FlexDPUby2__DOT__PF__DOT__io_PF_Valid_REG));
            tracep->chgSData(oldp+133,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+134,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+135,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+136,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+137,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+138,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgBit(oldp+139,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+140,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+141,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+142,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+143,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+144,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__counter),32);
            tracep->chgIData(oldp+145,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__indexcounter),32);
            tracep->chgCData(oldp+146,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_0),2);
            tracep->chgCData(oldp+147,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_1),2);
            tracep->chgCData(oldp+148,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_2),2);
            tracep->chgCData(oldp+149,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_0_3),2);
            tracep->chgCData(oldp+150,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_0),2);
            tracep->chgCData(oldp+151,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_1),2);
            tracep->chgCData(oldp+152,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_2),2);
            tracep->chgCData(oldp+153,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_1_3),2);
            tracep->chgCData(oldp+154,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_0),2);
            tracep->chgCData(oldp+155,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_1),2);
            tracep->chgCData(oldp+156,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_2),2);
            tracep->chgCData(oldp+157,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_2_3),2);
            tracep->chgCData(oldp+158,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_0),2);
            tracep->chgCData(oldp+159,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_1),2);
            tracep->chgCData(oldp+160,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_2),2);
            tracep->chgCData(oldp+161,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__muxes_3_3),2);
            tracep->chgSData(oldp+162,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+163,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+164,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+165,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__dest_3),16);
            tracep->chgIData(oldp+166,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes__DOT__jNext),32);
            tracep->chgBit(oldp+167,(((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_0))
                                       ? (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_0) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgBit(oldp+168,(((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_1))
                                       ? (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_0_1) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgBit(oldp+169,(((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_0))
                                       ? (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_0) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgBit(oldp+170,(((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_1))
                                       ? (1U & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix1_1_1) 
                                                - (IData)(0xffffU)))
                                       : 0U)));
            tracep->chgSData(oldp+171,(((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix2_0))
                                         ? (0xffffU 
                                            & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix2_0) 
                                               - (IData)(0xffffU)))
                                         : 0U)),16);
            tracep->chgSData(oldp+172,(((0U != (IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix2_1))
                                         ? (0xffffU 
                                            & ((IData)(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_counterMatrix2_1) 
                                               - (IData)(0xffffU)))
                                         : 0U)),16);
            tracep->chgSData(oldp+173,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_0),16);
            tracep->chgSData(oldp+174,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__prevStationary_matrix_1),16);
            tracep->chgBit(oldp+175,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+176,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+177,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+178,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+179,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+180,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+181,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgIData(oldp+182,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+183,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+184,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+185,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+186,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+187,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__counter2),32);
            tracep->chgBit(oldp+188,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__high));
            tracep->chgBit(oldp+189,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myCounter__DOT__io_valid_REG));
            tracep->chgCData(oldp+190,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_0),5);
            tracep->chgCData(oldp+191,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_1),5);
            tracep->chgCData(oldp+192,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_2),5);
            tracep->chgCData(oldp+193,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i_vn_3),5);
            tracep->chgBit(oldp+194,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+195,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+196,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgCData(oldp+197,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),3);
            tracep->chgCData(oldp+198,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),3);
            tracep->chgCData(oldp+199,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),3);
            tracep->chgBit(oldp+200,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_3));
            tracep->chgSData(oldp+201,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->FlexDPUby2__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((0U 
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
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505)))),16);
            tracep->chgSData(oldp+202,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->FlexDPUby2__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((1U 
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
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506)))),16);
            tracep->chgSData(oldp+203,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->FlexDPUby2__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((2U 
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
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507)))),16);
            tracep->chgSData(oldp+204,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlTOPp->FlexDPUby2__DOT__src_3))
                                                    ? 
                                                   ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                     ? 
                                                    ((3U 
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
                                                    : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508)))),16);
            tracep->chgSData(oldp+205,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->FlexDPUby2__DOT__dest_0) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->FlexDPUby2__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((0U 
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
                                                        : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505)))))),16);
            tracep->chgSData(oldp+206,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->FlexDPUby2__DOT__dest_1) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->FlexDPUby2__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((1U 
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
                                                        : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506)))))),16);
            tracep->chgSData(oldp+207,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->FlexDPUby2__DOT__dest_2) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->FlexDPUby2__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((2U 
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
                                                        : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507)))))),16);
            tracep->chgSData(oldp+208,((0xffffU & (
                                                   (0xffffU 
                                                    & vlTOPp->FlexDPUby2__DOT__dest_3) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlTOPp->FlexDPUby2__DOT__src_3))
                                                        ? 
                                                       ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                         ? 
                                                        ((3U 
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
                                                        : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508)))))),16);
            tracep->chgIData(oldp+209,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0),32);
            tracep->chgIData(oldp+210,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1),32);
            tracep->chgIData(oldp+211,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2),32);
            tracep->chgIData(oldp+212,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3),32);
            tracep->chgSData(oldp+213,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0),15);
            tracep->chgSData(oldp+214,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1),15);
            tracep->chgSData(oldp+215,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2),15);
            tracep->chgSData(oldp+216,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3),15);
            tracep->chgIData(oldp+217,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__counter),32);
            tracep->chgBit(oldp+218,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__o_valid));
            tracep->chgSData(oldp+219,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+220,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+221,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+222,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__matrix_1_1),16);
            tracep->chgIData(oldp+223,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+224,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+225,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+226,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+227,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+228,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+229,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+230,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+231,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+232,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__count_1),32);
            tracep->chgBit(oldp+233,(((1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__i) 
                                      & (1U == vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_ivn__DOT__j))));
            tracep->chgBit(oldp+234,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+235,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+236,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgCData(oldp+237,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_0),3);
            tracep->chgCData(oldp+238,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_1),3);
            tracep->chgCData(oldp+239,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_reduction_cmd_2),3);
            tracep->chgCData(oldp+240,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_0),5);
            tracep->chgCData(oldp+241,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_1),5);
            tracep->chgCData(oldp+242,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_2),5);
            tracep->chgCData(oldp+243,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__w_vn_3),5);
            tracep->chgBit(oldp+244,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+245,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+246,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_valid_2));
            tracep->chgBit(oldp+247,((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+250,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex),2);
            tracep->chgCData(oldp+251,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_1),2);
            tracep->chgCData(oldp+252,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue),2);
            tracep->chgBit(oldp+253,((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_1) 
                                            >> 2U))));
            tracep->chgCData(oldp+256,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex),2);
            tracep->chgCData(oldp+257,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_1),2);
            tracep->chgCData(oldp+258,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1),2);
            tracep->chgBit(oldp+259,((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+262,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex),2);
            tracep->chgCData(oldp+263,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_1),2);
            tracep->chgCData(oldp+264,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2),2);
            tracep->chgBit(oldp+265,((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_0_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+268,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex),2);
            tracep->chgCData(oldp+269,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_1),2);
            tracep->chgCData(oldp+270,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3),2);
            tracep->chgBit(oldp+271,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0) 
                                            >> 2U))));
            tracep->chgBit(oldp+274,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_0)))));
            tracep->chgCData(oldp+275,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_10),2);
            tracep->chgCData(oldp+276,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_11),2);
            tracep->chgCData(oldp+277,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_5),2);
            tracep->chgBit(oldp+278,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)))));
            tracep->chgBit(oldp+279,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+280,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1) 
                                            >> 2U))));
            tracep->chgBit(oldp+281,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_1)))));
            tracep->chgCData(oldp+282,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_14),2);
            tracep->chgCData(oldp+283,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_15),2);
            tracep->chgCData(oldp+284,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_7),2);
            tracep->chgBit(oldp+285,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+287,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2) 
                                            >> 2U))));
            tracep->chgBit(oldp+288,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_2)))));
            tracep->chgCData(oldp+289,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_12),2);
            tracep->chgCData(oldp+290,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_13),2);
            tracep->chgCData(oldp+291,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_6),2);
            tracep->chgBit(oldp+292,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3) 
                                            >> 2U))));
            tracep->chgBit(oldp+295,((1U & (~ (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_1_3)))));
            tracep->chgCData(oldp+296,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_8),2);
            tracep->chgCData(oldp+297,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_9),2);
            tracep->chgCData(oldp+298,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_4),2);
            tracep->chgCData(oldp+299,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+300,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+302,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_20),2);
            tracep->chgCData(oldp+303,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_21),2);
            tracep->chgCData(oldp+304,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_10),2);
            tracep->chgCData(oldp+305,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+306,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_1) 
                                            >> 2U))));
            tracep->chgCData(oldp+308,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_28),2);
            tracep->chgCData(oldp+309,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_29),2);
            tracep->chgCData(oldp+310,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_14),2);
            tracep->chgCData(oldp+311,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+312,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+314,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_24),2);
            tracep->chgCData(oldp+315,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_25),2);
            tracep->chgCData(oldp+316,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_12),2);
            tracep->chgCData(oldp+317,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3))
                                         ? 3U : 2U)),2);
            tracep->chgBit(oldp+318,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_2_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+320,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_16),2);
            tracep->chgCData(oldp+321,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_17),2);
            tracep->chgCData(oldp+322,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_8),2);
            tracep->chgCData(oldp+323,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+324,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                            >> 1U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_0) 
                                            >> 2U))));
            tracep->chgCData(oldp+326,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_30),2);
            tracep->chgCData(oldp+327,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_nextIndex_31),2);
            tracep->chgCData(oldp+328,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue_15),2);
            tracep->chgCData(oldp+329,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+330,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                            >> 1U))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_1) 
                                            >> 2U))));
            tracep->chgCData(oldp+332,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_42),2);
            tracep->chgCData(oldp+333,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_nextIndex_43),2);
            tracep->chgCData(oldp+334,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue1_21),2);
            tracep->chgCData(oldp+335,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+336,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                            >> 1U))));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_2) 
                                            >> 2U))));
            tracep->chgCData(oldp+338,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_36),2);
            tracep->chgCData(oldp+339,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_nextIndex_37),2);
            tracep->chgCData(oldp+340,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue2_18),2);
            tracep->chgCData(oldp+341,(((1U & (IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3))
                                         ? 2U : 3U)),2);
            tracep->chgBit(oldp+342,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                            >> 1U))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE_io_i_mux_bus_3_3) 
                                            >> 2U))));
            tracep->chgCData(oldp+344,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_24),2);
            tracep->chgCData(oldp+345,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_nextIndex_25),2);
            tracep->chgCData(oldp+346,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT__parsedindexvalue3_12),2);
            tracep->chgIData(oldp+347,(((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_0) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                               ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((0U 
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
                                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_505))))),32);
            tracep->chgIData(oldp+348,(((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_1) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                               ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((1U 
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
                                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_506))))),32);
            tracep->chgIData(oldp+349,(((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_2) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                               ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((2U 
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
                                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_507))))),32);
            tracep->chgIData(oldp+350,(((0xffffU & vlTOPp->FlexDPUby2__DOT__dest_3) 
                                        * (0xffffU 
                                           & ((0U != 
                                               (0xffffU 
                                                & vlTOPp->FlexDPUby2__DOT__src_3))
                                               ? ((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___T_414)
                                                   ? 
                                                  ((3U 
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
                                               : (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_Benes__DOT___GEN_508))))),32);
            tracep->chgBit(oldp+351,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_0));
            tracep->chgQData(oldp+352,((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+354,((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+356,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+357,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),5);
            tracep->chgBit(oldp+358,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__r_valid_1));
            tracep->chgCData(oldp+359,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgCData(oldp+360,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),5);
            tracep->chgQData(oldp+361,((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+363,((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+365,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgCData(oldp+366,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),5);
            tracep->chgIData(oldp+367,((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+368,((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+369,(((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_1))))),32);
            tracep->chgBit(oldp+370,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid));
            tracep->chgIData(oldp+371,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder),32);
            tracep->chgCData(oldp+372,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgBit(oldp+373,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid));
            tracep->chgIData(oldp+374,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder),32);
            tracep->chgCData(oldp+375,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+376,((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+377,((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+378,(((IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__r_mult_3))))),32);
            tracep->chgBit(oldp+379,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid));
            tracep->chgIData(oldp+380,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder),32);
            tracep->chgCData(oldp+381,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+382,((0xffffU & vlTOPp->FlexDPUby2__DOT__FDPE__DOT___GEN_49)),16);
            tracep->chgSData(oldp+383,((0xffffU & vlTOPp->FlexDPUby2__DOT__FDPE__DOT___GEN_51)),16);
            tracep->chgSData(oldp+384,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+385,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+386,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+387,(vlTOPp->FlexDPUby2__DOT__PF__DOT__myMuxes_io_mat1_1_1),16);
            tracep->chgIData(oldp+388,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder),32);
            tracep->chgIData(oldp+389,(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder),32);
            tracep->chgQData(oldp+390,((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))),64);
            tracep->chgQData(oldp+392,((QData)((IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder))),64);
            tracep->chgIData(oldp+394,((vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                        + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder)),32);
        }
        tracep->chgBit(oldp+395,(vlTOPp->clock));
        tracep->chgBit(oldp+396,(vlTOPp->reset));
        tracep->chgSData(oldp+397,(vlTOPp->io_Stationary_matrix_0_0),16);
        tracep->chgSData(oldp+398,(vlTOPp->io_Stationary_matrix_0_1),16);
        tracep->chgSData(oldp+399,(vlTOPp->io_Stationary_matrix_1_0),16);
        tracep->chgSData(oldp+400,(vlTOPp->io_Stationary_matrix_1_1),16);
        tracep->chgSData(oldp+401,(vlTOPp->io_Streaming_matrix_0_0),16);
        tracep->chgSData(oldp+402,(vlTOPp->io_Streaming_matrix_0_1),16);
        tracep->chgSData(oldp+403,(vlTOPp->io_Streaming_matrix_1_0),16);
        tracep->chgSData(oldp+404,(vlTOPp->io_Streaming_matrix_1_1),16);
        tracep->chgSData(oldp+405,(vlTOPp->io_output_0_0),16);
        tracep->chgSData(oldp+406,(vlTOPp->io_output_0_1),16);
        tracep->chgSData(oldp+407,(vlTOPp->io_output_1_0),16);
        tracep->chgSData(oldp+408,(vlTOPp->io_output_1_1),16);
        tracep->chgBit(oldp+409,(vlTOPp->io_valid));
        tracep->chgBit(oldp+410,(vlTOPp->io_O_valid));
        tracep->chgSData(oldp+411,(((IData)(vlTOPp->FlexDPUby2__DOT__hig)
                                     ? ((IData)(vlTOPp->reset)
                                         ? 0U : (0xffffU 
                                                 & ((0U 
                                                     == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en))
                                                     ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder
                                                     : 
                                                    (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                                     + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder))))
                                     : 0U)),16);
        tracep->chgIData(oldp+412,(((IData)(vlTOPp->reset)
                                     ? 0U : ((0U == (IData)(vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en))
                                              ? vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder
                                              : (vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_0_io_o_adder 
                                                 + vlTOPp->FlexDPUby2__DOT__FDPE__DOT__my_fan_network__DOT__my_adder_2_io_o_adder)))),32);
    }
}

void VFlexDPUby2::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFlexDPUby2__Syms* __restrict vlSymsp = static_cast<VFlexDPUby2__Syms*>(userp);
    VFlexDPUby2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}

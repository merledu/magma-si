// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFlexDPU__Syms.h"


void VFlexDPU::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFlexDPU__Syms* __restrict vlSymsp = static_cast<VFlexDPU__Syms*>(userp);
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
    }
}

void VFlexDPU::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFlexDPU__Syms* __restrict vlSymsp = static_cast<VFlexDPU__Syms*>(userp);
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,((0xffffU & vlTOPp->FlexDPU__DOT___GEN_104)),16);
            tracep->chgSData(oldp+1,((0xffffU & vlTOPp->FlexDPU__DOT___GEN_105)),16);
            tracep->chgSData(oldp+2,((0xffffU & vlTOPp->FlexDPU__DOT___GEN_106)),16);
            tracep->chgSData(oldp+3,((0xffffU & vlTOPp->FlexDPU__DOT___GEN_107)),16);
            tracep->chgCData(oldp+4,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_44)),4);
            tracep->chgCData(oldp+5,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_45)),4);
            tracep->chgCData(oldp+6,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_46)),4);
            tracep->chgCData(oldp+7,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_47)),4);
            tracep->chgSData(oldp+8,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                       ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_0))
                                       : 0U)),16);
            tracep->chgSData(oldp+9,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                       ? (0xffffU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_1))
                                       : 0U)),16);
            tracep->chgSData(oldp+10,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+11,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+12,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76)),16);
            tracep->chgSData(oldp+13,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_77)),16);
            tracep->chgSData(oldp+14,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_78)),16);
            tracep->chgSData(oldp+15,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_79)),16);
            tracep->chgBit(oldp+16,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgBit(oldp+17,(vlTOPp->FlexDPU__DOT__Statvalid));
            tracep->chgCData(oldp+18,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_44)),4);
            tracep->chgCData(oldp+19,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_45)),4);
            tracep->chgCData(oldp+20,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_46)),4);
            tracep->chgCData(oldp+21,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_47)),4);
            tracep->chgSData(oldp+22,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+23,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+24,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+25,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+26,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76)),16);
            tracep->chgSData(oldp+27,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_77)),16);
            tracep->chgSData(oldp+28,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_78)),16);
            tracep->chgSData(oldp+29,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_79)),16);
            tracep->chgBit(oldp+30,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+31,(vlTOPp->FlexDPU__DOT__Statvalid),32);
            tracep->chgCData(oldp+32,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_44)),4);
            tracep->chgCData(oldp+33,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_45)),4);
            tracep->chgCData(oldp+34,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_46)),4);
            tracep->chgCData(oldp+35,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_47)),4);
            tracep->chgSData(oldp+36,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+37,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+38,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+39,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+40,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76)),16);
            tracep->chgSData(oldp+41,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_77)),16);
            tracep->chgSData(oldp+42,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_78)),16);
            tracep->chgSData(oldp+43,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_79)),16);
            tracep->chgBit(oldp+44,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+45,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? 2U : 0U)),32);
            tracep->chgCData(oldp+46,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_44)),4);
            tracep->chgCData(oldp+47,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_45)),4);
            tracep->chgCData(oldp+48,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_46)),4);
            tracep->chgCData(oldp+49,((0xfU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_47)),4);
            tracep->chgSData(oldp+50,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+51,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+52,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+53,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+54,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76)),16);
            tracep->chgSData(oldp+55,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_77)),16);
            tracep->chgSData(oldp+56,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_78)),16);
            tracep->chgSData(oldp+57,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_79)),16);
            tracep->chgBit(oldp+58,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+59,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? 3U : 0U)),32);
            tracep->chgCData(oldp+60,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_0))
                                        : 0U)),4);
            tracep->chgCData(oldp+61,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_1))
                                        : 0U)),4);
            tracep->chgCData(oldp+62,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_2))
                                        : 0U)),4);
            tracep->chgCData(oldp+63,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_3))
                                        : 0U)),4);
            tracep->chgSData(oldp+64,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+65,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+66,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+67,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+68,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+69,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+70,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+71,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_3))
                                        : 0U)),16);
            tracep->chgBit(oldp+72,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+73,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? 4U : 0U)),32);
            tracep->chgCData(oldp+74,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_0))
                                        : 0U)),4);
            tracep->chgCData(oldp+75,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_1))
                                        : 0U)),4);
            tracep->chgCData(oldp+76,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_2))
                                        : 0U)),4);
            tracep->chgCData(oldp+77,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_3))
                                        : 0U)),4);
            tracep->chgSData(oldp+78,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+79,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+80,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+81,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+82,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+83,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+84,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+85,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_3))
                                        : 0U)),16);
            tracep->chgBit(oldp+86,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+87,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? 5U : 0U)),32);
            tracep->chgCData(oldp+88,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_0))
                                        : 0U)),4);
            tracep->chgCData(oldp+89,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_1))
                                        : 0U)),4);
            tracep->chgCData(oldp+90,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_2))
                                        : 0U)),4);
            tracep->chgCData(oldp+91,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_3))
                                        : 0U)),4);
            tracep->chgSData(oldp+92,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+93,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+94,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+95,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_3))
                                        : 0U)),16);
            tracep->chgSData(oldp+96,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+97,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+98,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+99,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_3))
                                        : 0U)),16);
            tracep->chgBit(oldp+100,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+101,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 6U : 0U)),32);
            tracep->chgCData(oldp+102,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+103,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+104,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+105,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+106,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+107,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+108,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+109,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+110,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+111,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+112,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+113,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+114,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+115,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 7U : 0U)),32);
            tracep->chgCData(oldp+116,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+117,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+118,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+119,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+120,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+121,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+122,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+123,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+124,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+125,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+126,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+127,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+128,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+129,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 8U : 0U)),32);
            tracep->chgCData(oldp+130,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+131,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+132,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+133,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+134,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+135,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+136,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+137,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+138,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+139,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+140,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+141,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+142,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_9.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+143,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 9U : 0U)),32);
            tracep->chgCData(oldp+144,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+145,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+146,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+147,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+148,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+149,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+150,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+151,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+152,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+153,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+154,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+155,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+156,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_10.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+157,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 0xaU : 0U)),32);
            tracep->chgCData(oldp+158,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+159,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+160,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+161,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+162,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+163,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+164,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+165,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+166,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+167,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+168,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+169,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+170,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_11.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+171,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 0xbU : 0U)),32);
            tracep->chgCData(oldp+172,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+173,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+174,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+175,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+176,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+177,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+178,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+179,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+180,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+181,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+182,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+183,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+184,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_12.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+185,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 0xcU : 0U)),32);
            tracep->chgCData(oldp+186,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+187,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+188,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+189,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+190,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+191,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+192,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+193,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+194,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+195,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+196,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+197,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+198,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_13.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+199,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 0xdU : 0U)),32);
            tracep->chgCData(oldp+200,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+201,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+202,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+203,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+204,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+205,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+206,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+207,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+208,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+209,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+210,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+211,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+212,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_14.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+213,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 0xeU : 0U)),32);
            tracep->chgCData(oldp+214,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__mux_0))
                                         : 0U)),4);
            tracep->chgCData(oldp+215,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__mux_1))
                                         : 0U)),4);
            tracep->chgCData(oldp+216,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__mux_2))
                                         : 0U)),4);
            tracep->chgCData(oldp+217,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xfU & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__mux_3))
                                         : 0U)),4);
            tracep->chgSData(oldp+218,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__src_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+219,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__src_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+220,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__src_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+221,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__src_3))
                                         : 0U)),16);
            tracep->chgSData(oldp+222,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__dest_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+223,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__dest_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+224,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__dest_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+225,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__dest_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+226,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                      & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__k) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__j)) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__i)) 
                                         & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_15.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+227,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                         ? 0xfU : 0U)),32);
            tracep->chgIData(oldp+228,(vlTOPp->FlexDPU__DOT__used_FlexDPE_0),32);
            tracep->chgIData(oldp+229,(vlTOPp->FlexDPU__DOT__used_FlexDPE_1),32);
            tracep->chgIData(oldp+230,(vlTOPp->FlexDPU__DOT__iloop),32);
            tracep->chgIData(oldp+231,(vlTOPp->FlexDPU__DOT__jloop),32);
            tracep->chgIData(oldp+232,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_0),32);
            tracep->chgIData(oldp+233,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_1),32);
            tracep->chgIData(oldp+234,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_2),32);
            tracep->chgIData(oldp+235,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_3),32);
            tracep->chgIData(oldp+236,(vlTOPp->FlexDPU__DOT__ModuleIndex),32);
            tracep->chgCData(oldp+237,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_0),5);
            tracep->chgCData(oldp+238,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_1),5);
            tracep->chgCData(oldp+239,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_2),5);
            tracep->chgCData(oldp+240,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i_vn_3),5);
            tracep->chgBit(oldp+241,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+242,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+243,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgCData(oldp+244,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),3);
            tracep->chgCData(oldp+245,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),3);
            tracep->chgCData(oldp+246,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),3);
            tracep->chgBit(oldp+247,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_3));
            tracep->chgSData(oldp+248,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73)))),16);
            tracep->chgSData(oldp+249,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74)))),16);
            tracep->chgSData(oldp+250,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75)))),16);
            tracep->chgSData(oldp+251,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76)))),16);
            tracep->chgSData(oldp+252,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_0))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73)))))),16);
            tracep->chgSData(oldp+253,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_1))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                        ? 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74)))))),16);
            tracep->chgSData(oldp+254,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_2))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                        ? 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75)))))),16);
            tracep->chgSData(oldp+255,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_3))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76)))))),16);
            tracep->chgIData(oldp+256,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0),32);
            tracep->chgIData(oldp+257,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1),32);
            tracep->chgIData(oldp+258,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2),32);
            tracep->chgIData(oldp+259,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3),32);
            tracep->chgSData(oldp+260,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0),15);
            tracep->chgSData(oldp+261,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1),15);
            tracep->chgSData(oldp+262,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2),15);
            tracep->chgSData(oldp+263,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3),15);
            tracep->chgSData(oldp+264,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+265,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+266,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_2),16);
            tracep->chgSData(oldp+267,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_0_3),16);
            tracep->chgSData(oldp+268,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+269,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_1),16);
            tracep->chgSData(oldp+270,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_2),16);
            tracep->chgSData(oldp+271,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_1_3),16);
            tracep->chgSData(oldp+272,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_0),16);
            tracep->chgSData(oldp+273,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_1),16);
            tracep->chgSData(oldp+274,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_2),16);
            tracep->chgSData(oldp+275,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_2_3),16);
            tracep->chgSData(oldp+276,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_0),16);
            tracep->chgSData(oldp+277,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_1),16);
            tracep->chgSData(oldp+278,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_2),16);
            tracep->chgSData(oldp+279,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__matrix_3_3),16);
            tracep->chgIData(oldp+280,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+281,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+282,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_2),32);
            tracep->chgIData(oldp+283,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__rowcount_3),32);
            tracep->chgIData(oldp+284,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+285,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+286,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+287,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+288,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_2),32);
            tracep->chgIData(oldp+289,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_0_3),32);
            tracep->chgIData(oldp+290,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+291,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+292,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_2),32);
            tracep->chgIData(oldp+293,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_1_3),32);
            tracep->chgIData(oldp+294,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_0),32);
            tracep->chgIData(oldp+295,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_1),32);
            tracep->chgIData(oldp+296,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_2),32);
            tracep->chgIData(oldp+297,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_2_3),32);
            tracep->chgIData(oldp+298,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_0),32);
            tracep->chgIData(oldp+299,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_1),32);
            tracep->chgIData(oldp+300,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_2),32);
            tracep->chgIData(oldp+301,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__mat_3_3),32);
            tracep->chgIData(oldp+302,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+303,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1),32);
            tracep->chgIData(oldp+304,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_2),32);
            tracep->chgIData(oldp+305,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_3),32);
            tracep->chgBit(oldp+306,((4U <= vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT__count_1)));
            tracep->chgBit(oldp+307,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_ivn__DOT___T_10));
            tracep->chgBit(oldp+308,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+309,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+310,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgCData(oldp+311,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_0),3);
            tracep->chgCData(oldp+312,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_1),3);
            tracep->chgCData(oldp+313,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_reduction_cmd_2),3);
            tracep->chgCData(oldp+314,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_0),5);
            tracep->chgCData(oldp+315,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_1),5);
            tracep->chgCData(oldp+316,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_2),5);
            tracep->chgCData(oldp+317,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__w_vn_3),5);
            tracep->chgBit(oldp+318,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+319,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+320,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_valid_2));
            tracep->chgIData(oldp+321,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_0))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_73))))),32);
            tracep->chgIData(oldp+322,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_1))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                       ? 
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_74))))),32);
            tracep->chgIData(oldp+323,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_2))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_75))))),32);
            tracep->chgIData(oldp+324,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_3))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4__DOT__my_Benes.__PVT___GEN_76))))),32);
            tracep->chgBit(oldp+325,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_0));
            tracep->chgQData(oldp+326,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+328,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+330,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+331,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),5);
            tracep->chgBit(oldp+332,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__r_valid_1));
            tracep->chgCData(oldp+333,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgCData(oldp+334,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),5);
            tracep->chgQData(oldp+335,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+337,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+339,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgCData(oldp+340,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),5);
            tracep->chgIData(oldp+341,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+342,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+343,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_1))))),32);
            tracep->chgBit(oldp+344,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid));
            tracep->chgIData(oldp+345,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder),32);
            tracep->chgCData(oldp+346,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgBit(oldp+347,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid));
            tracep->chgIData(oldp+348,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder),32);
            tracep->chgCData(oldp+349,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+350,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+351,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+352,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__r_mult_3))))),32);
            tracep->chgBit(oldp+353,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid));
            tracep->chgIData(oldp+354,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder),32);
            tracep->chgCData(oldp+355,(vlTOPp->FlexDPU__DOT__flexdpecom4__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
            tracep->chgCData(oldp+356,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_0),5);
            tracep->chgCData(oldp+357,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_1),5);
            tracep->chgCData(oldp+358,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_2),5);
            tracep->chgCData(oldp+359,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i_vn_3),5);
            tracep->chgBit(oldp+360,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+361,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+362,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgCData(oldp+363,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),3);
            tracep->chgCData(oldp+364,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),3);
            tracep->chgCData(oldp+365,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),3);
            tracep->chgBit(oldp+366,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_3));
            tracep->chgSData(oldp+367,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73)))),16);
            tracep->chgSData(oldp+368,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74)))),16);
            tracep->chgSData(oldp+369,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75)))),16);
            tracep->chgSData(oldp+370,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76)))),16);
            tracep->chgSData(oldp+371,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_0))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73)))))),16);
            tracep->chgSData(oldp+372,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_1))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                        ? 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74)))))),16);
            tracep->chgSData(oldp+373,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_2))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                        ? 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75)))))),16);
            tracep->chgSData(oldp+374,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_3))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76)))))),16);
            tracep->chgIData(oldp+375,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0),32);
            tracep->chgIData(oldp+376,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1),32);
            tracep->chgIData(oldp+377,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2),32);
            tracep->chgIData(oldp+378,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3),32);
            tracep->chgSData(oldp+379,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0),15);
            tracep->chgSData(oldp+380,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1),15);
            tracep->chgSData(oldp+381,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2),15);
            tracep->chgSData(oldp+382,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3),15);
            tracep->chgSData(oldp+383,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+384,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+385,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_2),16);
            tracep->chgSData(oldp+386,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_0_3),16);
            tracep->chgSData(oldp+387,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+388,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_1),16);
            tracep->chgSData(oldp+389,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_2),16);
            tracep->chgSData(oldp+390,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_1_3),16);
            tracep->chgSData(oldp+391,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_0),16);
            tracep->chgSData(oldp+392,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_1),16);
            tracep->chgSData(oldp+393,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_2),16);
            tracep->chgSData(oldp+394,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_2_3),16);
            tracep->chgSData(oldp+395,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_0),16);
            tracep->chgSData(oldp+396,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_1),16);
            tracep->chgSData(oldp+397,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_2),16);
            tracep->chgSData(oldp+398,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__matrix_3_3),16);
            tracep->chgIData(oldp+399,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+400,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+401,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_2),32);
            tracep->chgIData(oldp+402,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__rowcount_3),32);
            tracep->chgIData(oldp+403,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+404,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+405,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+406,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+407,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_2),32);
            tracep->chgIData(oldp+408,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_0_3),32);
            tracep->chgIData(oldp+409,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+410,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+411,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_2),32);
            tracep->chgIData(oldp+412,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_1_3),32);
            tracep->chgIData(oldp+413,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_0),32);
            tracep->chgIData(oldp+414,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_1),32);
            tracep->chgIData(oldp+415,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_2),32);
            tracep->chgIData(oldp+416,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_2_3),32);
            tracep->chgIData(oldp+417,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_0),32);
            tracep->chgIData(oldp+418,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_1),32);
            tracep->chgIData(oldp+419,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_2),32);
            tracep->chgIData(oldp+420,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__mat_3_3),32);
            tracep->chgIData(oldp+421,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+422,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1),32);
            tracep->chgIData(oldp+423,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_2),32);
            tracep->chgIData(oldp+424,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_3),32);
            tracep->chgBit(oldp+425,((4U <= vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT__count_1)));
            tracep->chgBit(oldp+426,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_ivn__DOT___T_10));
            tracep->chgBit(oldp+427,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+428,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+429,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgCData(oldp+430,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_0),3);
            tracep->chgCData(oldp+431,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_1),3);
            tracep->chgCData(oldp+432,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_reduction_cmd_2),3);
            tracep->chgCData(oldp+433,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_0),5);
            tracep->chgCData(oldp+434,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_1),5);
            tracep->chgCData(oldp+435,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_2),5);
            tracep->chgCData(oldp+436,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__w_vn_3),5);
            tracep->chgBit(oldp+437,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+438,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+439,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_valid_2));
            tracep->chgIData(oldp+440,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_0))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_73))))),32);
            tracep->chgIData(oldp+441,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_1))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                       ? 
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_74))))),32);
            tracep->chgIData(oldp+442,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_2))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_75))))),32);
            tracep->chgIData(oldp+443,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_3))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_1__DOT__my_Benes.__PVT___GEN_76))))),32);
            tracep->chgBit(oldp+444,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_0));
            tracep->chgQData(oldp+445,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+447,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+449,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+450,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),5);
            tracep->chgBit(oldp+451,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__r_valid_1));
            tracep->chgCData(oldp+452,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgCData(oldp+453,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),5);
            tracep->chgQData(oldp+454,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+456,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+458,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgCData(oldp+459,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),5);
            tracep->chgIData(oldp+460,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+461,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+462,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_1))))),32);
            tracep->chgBit(oldp+463,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid));
            tracep->chgIData(oldp+464,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder),32);
            tracep->chgCData(oldp+465,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgBit(oldp+466,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid));
            tracep->chgIData(oldp+467,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder),32);
            tracep->chgCData(oldp+468,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+469,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+470,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+471,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__r_mult_3))))),32);
            tracep->chgBit(oldp+472,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid));
            tracep->chgIData(oldp+473,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder),32);
            tracep->chgCData(oldp+474,(vlTOPp->FlexDPU__DOT__flexdpecom4_1__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
            tracep->chgCData(oldp+475,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_0),5);
            tracep->chgCData(oldp+476,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_1),5);
            tracep->chgCData(oldp+477,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_2),5);
            tracep->chgCData(oldp+478,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i_vn_3),5);
            tracep->chgBit(oldp+479,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+480,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+481,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgCData(oldp+482,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),3);
            tracep->chgCData(oldp+483,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),3);
            tracep->chgCData(oldp+484,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),3);
            tracep->chgBit(oldp+485,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_3));
            tracep->chgSData(oldp+486,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73)))),16);
            tracep->chgSData(oldp+487,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74)))),16);
            tracep->chgSData(oldp+488,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75)))),16);
            tracep->chgSData(oldp+489,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76)))),16);
            tracep->chgSData(oldp+490,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_0))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73)))))),16);
            tracep->chgSData(oldp+491,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_1))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                        ? 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74)))))),16);
            tracep->chgSData(oldp+492,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_2))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                        ? 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75)))))),16);
            tracep->chgSData(oldp+493,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_3))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76)))))),16);
            tracep->chgIData(oldp+494,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0),32);
            tracep->chgIData(oldp+495,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1),32);
            tracep->chgIData(oldp+496,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2),32);
            tracep->chgIData(oldp+497,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3),32);
            tracep->chgSData(oldp+498,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0),15);
            tracep->chgSData(oldp+499,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1),15);
            tracep->chgSData(oldp+500,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2),15);
            tracep->chgSData(oldp+501,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3),15);
            tracep->chgSData(oldp+502,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+503,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+504,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_2),16);
            tracep->chgSData(oldp+505,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_0_3),16);
            tracep->chgSData(oldp+506,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+507,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_1),16);
            tracep->chgSData(oldp+508,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_2),16);
            tracep->chgSData(oldp+509,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_1_3),16);
            tracep->chgSData(oldp+510,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_0),16);
            tracep->chgSData(oldp+511,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_1),16);
            tracep->chgSData(oldp+512,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_2),16);
            tracep->chgSData(oldp+513,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_2_3),16);
            tracep->chgSData(oldp+514,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_0),16);
            tracep->chgSData(oldp+515,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_1),16);
            tracep->chgSData(oldp+516,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_2),16);
            tracep->chgSData(oldp+517,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__matrix_3_3),16);
            tracep->chgIData(oldp+518,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+519,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+520,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_2),32);
            tracep->chgIData(oldp+521,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__rowcount_3),32);
            tracep->chgIData(oldp+522,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+523,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+524,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+525,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+526,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_2),32);
            tracep->chgIData(oldp+527,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_0_3),32);
            tracep->chgIData(oldp+528,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+529,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+530,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_2),32);
            tracep->chgIData(oldp+531,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_1_3),32);
            tracep->chgIData(oldp+532,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_0),32);
            tracep->chgIData(oldp+533,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_1),32);
            tracep->chgIData(oldp+534,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_2),32);
            tracep->chgIData(oldp+535,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_2_3),32);
            tracep->chgIData(oldp+536,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_0),32);
            tracep->chgIData(oldp+537,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_1),32);
            tracep->chgIData(oldp+538,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_2),32);
            tracep->chgIData(oldp+539,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__mat_3_3),32);
            tracep->chgIData(oldp+540,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+541,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1),32);
            tracep->chgIData(oldp+542,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_2),32);
            tracep->chgIData(oldp+543,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_3),32);
            tracep->chgBit(oldp+544,((4U <= vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT__count_1)));
            tracep->chgBit(oldp+545,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_ivn__DOT___T_10));
            tracep->chgBit(oldp+546,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+547,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+548,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgCData(oldp+549,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_0),3);
            tracep->chgCData(oldp+550,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_1),3);
            tracep->chgCData(oldp+551,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_reduction_cmd_2),3);
            tracep->chgCData(oldp+552,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_0),5);
            tracep->chgCData(oldp+553,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_1),5);
            tracep->chgCData(oldp+554,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_2),5);
            tracep->chgCData(oldp+555,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__w_vn_3),5);
            tracep->chgBit(oldp+556,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+557,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+558,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_valid_2));
            tracep->chgIData(oldp+559,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_0))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_73))))),32);
            tracep->chgIData(oldp+560,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_1))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                       ? 
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_74))))),32);
            tracep->chgIData(oldp+561,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_2))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_75))))),32);
            tracep->chgIData(oldp+562,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_3))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_2__DOT__my_Benes.__PVT___GEN_76))))),32);
            tracep->chgBit(oldp+563,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_0));
            tracep->chgQData(oldp+564,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+566,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+568,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+569,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),5);
            tracep->chgBit(oldp+570,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__r_valid_1));
            tracep->chgCData(oldp+571,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgCData(oldp+572,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),5);
            tracep->chgQData(oldp+573,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+575,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+577,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgCData(oldp+578,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),5);
            tracep->chgIData(oldp+579,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+580,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+581,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_1))))),32);
            tracep->chgBit(oldp+582,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid));
            tracep->chgIData(oldp+583,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder),32);
            tracep->chgCData(oldp+584,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgBit(oldp+585,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid));
            tracep->chgIData(oldp+586,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder),32);
            tracep->chgCData(oldp+587,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+588,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+589,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+590,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__r_mult_3))))),32);
            tracep->chgBit(oldp+591,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid));
            tracep->chgIData(oldp+592,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder),32);
            tracep->chgCData(oldp+593,(vlTOPp->FlexDPU__DOT__flexdpecom4_2__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
            tracep->chgCData(oldp+594,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_0),5);
            tracep->chgCData(oldp+595,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_1),5);
            tracep->chgCData(oldp+596,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_2),5);
            tracep->chgCData(oldp+597,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i_vn_3),5);
            tracep->chgBit(oldp+598,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_6));
            tracep->chgBit(oldp+599,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_7));
            tracep->chgBit(oldp+600,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_1Reg_4));
            tracep->chgCData(oldp+601,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),3);
            tracep->chgCData(oldp+602,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),3);
            tracep->chgCData(oldp+603,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),3);
            tracep->chgBit(oldp+604,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_3));
            tracep->chgSData(oldp+605,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73)))),16);
            tracep->chgSData(oldp+606,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74)))),16);
            tracep->chgSData(oldp+607,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75)))),16);
            tracep->chgSData(oldp+608,((0xffffU & (
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                     ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                     : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76))
                                                    : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76)))),16);
            tracep->chgSData(oldp+609,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_0))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73)))))),16);
            tracep->chgSData(oldp+610,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_1))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                        ? 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74)))))),16);
            tracep->chgSData(oldp+611,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_2))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                        ? 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75)))))),16);
            tracep->chgSData(oldp+612,((0xffffU & (
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_3))
                                                     : 0U) 
                                                   * 
                                                   (0xffffU 
                                                    & ((0U 
                                                        != 
                                                        (0xffffU 
                                                         & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                         : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76))
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76)))))),16);
            tracep->chgIData(oldp+613,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0),32);
            tracep->chgIData(oldp+614,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1),32);
            tracep->chgIData(oldp+615,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2),32);
            tracep->chgIData(oldp+616,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3),32);
            tracep->chgSData(oldp+617,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0),15);
            tracep->chgSData(oldp+618,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1),15);
            tracep->chgSData(oldp+619,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2),15);
            tracep->chgSData(oldp+620,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3),15);
            tracep->chgSData(oldp+621,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_0),16);
            tracep->chgSData(oldp+622,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_1),16);
            tracep->chgSData(oldp+623,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_2),16);
            tracep->chgSData(oldp+624,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_0_3),16);
            tracep->chgSData(oldp+625,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_0),16);
            tracep->chgSData(oldp+626,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_1),16);
            tracep->chgSData(oldp+627,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_2),16);
            tracep->chgSData(oldp+628,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_1_3),16);
            tracep->chgSData(oldp+629,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_0),16);
            tracep->chgSData(oldp+630,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_1),16);
            tracep->chgSData(oldp+631,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_2),16);
            tracep->chgSData(oldp+632,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_2_3),16);
            tracep->chgSData(oldp+633,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_0),16);
            tracep->chgSData(oldp+634,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_1),16);
            tracep->chgSData(oldp+635,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_2),16);
            tracep->chgSData(oldp+636,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__matrix_3_3),16);
            tracep->chgIData(oldp+637,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_0),32);
            tracep->chgIData(oldp+638,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_1),32);
            tracep->chgIData(oldp+639,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_2),32);
            tracep->chgIData(oldp+640,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__rowcount_3),32);
            tracep->chgIData(oldp+641,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__i),32);
            tracep->chgIData(oldp+642,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__j),32);
            tracep->chgIData(oldp+643,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_0),32);
            tracep->chgIData(oldp+644,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_1),32);
            tracep->chgIData(oldp+645,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_2),32);
            tracep->chgIData(oldp+646,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_0_3),32);
            tracep->chgIData(oldp+647,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_0),32);
            tracep->chgIData(oldp+648,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_1),32);
            tracep->chgIData(oldp+649,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_2),32);
            tracep->chgIData(oldp+650,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_1_3),32);
            tracep->chgIData(oldp+651,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_0),32);
            tracep->chgIData(oldp+652,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_1),32);
            tracep->chgIData(oldp+653,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_2),32);
            tracep->chgIData(oldp+654,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_2_3),32);
            tracep->chgIData(oldp+655,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_0),32);
            tracep->chgIData(oldp+656,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_1),32);
            tracep->chgIData(oldp+657,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_2),32);
            tracep->chgIData(oldp+658,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__mat_3_3),32);
            tracep->chgIData(oldp+659,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_0),32);
            tracep->chgIData(oldp+660,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1),32);
            tracep->chgIData(oldp+661,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_2),32);
            tracep->chgIData(oldp+662,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_3),32);
            tracep->chgBit(oldp+663,((4U <= vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT__count_1)));
            tracep->chgBit(oldp+664,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_ivn__DOT___T_10));
            tracep->chgBit(oldp+665,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_0));
            tracep->chgBit(oldp+666,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_1));
            tracep->chgBit(oldp+667,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_add_2));
            tracep->chgCData(oldp+668,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_0),3);
            tracep->chgCData(oldp+669,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_1),3);
            tracep->chgCData(oldp+670,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_reduction_cmd_2),3);
            tracep->chgCData(oldp+671,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_0),5);
            tracep->chgCData(oldp+672,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_1),5);
            tracep->chgCData(oldp+673,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_2),5);
            tracep->chgCData(oldp+674,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__w_vn_3),5);
            tracep->chgBit(oldp+675,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_0));
            tracep->chgBit(oldp+676,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_1));
            tracep->chgBit(oldp+677,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_valid_2));
            tracep->chgIData(oldp+678,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_0))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_73))))),32);
            tracep->chgIData(oldp+679,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_1))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                       ? 
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_74))))),32);
            tracep->chgIData(oldp+680,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_2))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                       ? 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_75))))),32);
            tracep->chgIData(oldp+681,((((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_3))
                                          : 0U) * (0xffffU 
                                                   & ((0U 
                                                       != 
                                                       (0xffffU 
                                                        & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT__parsedindexvalue_6))
                                                        ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT___GEN_76
                                                        : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76))
                                                       : (IData)(vlSymsp->TOP__FlexDPU__DOT__flexdpecom4_3__DOT__my_Benes.__PVT___GEN_76))))),32);
            tracep->chgBit(oldp+682,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_0));
            tracep->chgQData(oldp+683,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1))),64);
            tracep->chgQData(oldp+685,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0))),64);
            tracep->chgCData(oldp+687,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_6),3);
            tracep->chgCData(oldp+688,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_6),5);
            tracep->chgBit(oldp+689,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__r_valid_1));
            tracep->chgCData(oldp+690,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_1Reg_4),3);
            tracep->chgCData(oldp+691,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_1Reg_4),5);
            tracep->chgQData(oldp+692,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3))),64);
            tracep->chgQData(oldp+694,((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2))),64);
            tracep->chgCData(oldp+696,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_add_lvl_0Reg_7),3);
            tracep->chgCData(oldp+697,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_controller__DOT__r_cmd_lvl_0Reg_7),5);
            tracep->chgIData(oldp+698,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1)))),32);
            tracep->chgIData(oldp+699,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0)))),32);
            tracep->chgIData(oldp+700,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_0))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_1))))),32);
            tracep->chgBit(oldp+701,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_valid));
            tracep->chgIData(oldp+702,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_adder),32);
            tracep->chgCData(oldp+703,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_0__DOT__r_add_en),3);
            tracep->chgBit(oldp+704,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_valid));
            tracep->chgIData(oldp+705,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_adder),32);
            tracep->chgCData(oldp+706,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_1__DOT__r_add_en),3);
            tracep->chgIData(oldp+707,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3)))),32);
            tracep->chgIData(oldp+708,((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2)))),32);
            tracep->chgIData(oldp+709,(((IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_2))) 
                                        + (IData)((QData)((IData)(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__r_mult_3))))),32);
            tracep->chgBit(oldp+710,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_valid));
            tracep->chgIData(oldp+711,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_adder),32);
            tracep->chgCData(oldp+712,(vlTOPp->FlexDPU__DOT__flexdpecom4_3__DOT__my_fan_network__DOT__my_adder_2__DOT__r_add_en),3);
            tracep->chgSData(oldp+713,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+714,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+715,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+716,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+717,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_0
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+718,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_1
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+719,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_2
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+720,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_3
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+721,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_0
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+722,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_1
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+723,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_2
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+724,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_3
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+725,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_0
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+726,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_1
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+727,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_2
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+728,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_3
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+729,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_0
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+730,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_1
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+731,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_2
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+732,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                             ? (0xffffU 
                                                & (((3U 
                                                     == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                    & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                    ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_3
                                                    : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+733,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+734,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+735,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+736,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_3))
                                             : 0U) : 0U)),16);
            tracep->chgCData(oldp+737,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+738,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+739,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+740,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+741,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+742,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+743,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+744,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+745,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+746,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+747,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+748,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+749,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j)) 
                                       & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i)) 
                                      & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+750,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+751,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+752,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+753,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+754,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+755,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+756,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+757,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+758,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+759,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+760,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+761,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+762,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+763,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+764,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+765,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+766,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+767,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+768,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+769,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+770,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+771,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+772,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+773,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+774,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+775,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+776,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+777,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+778,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+779,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+780,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+781,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+782,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+783,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+784,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+785,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+786,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+787,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+788,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_0
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0)
                                         : 0U)),32);
            tracep->chgIData(oldp+789,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_1
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1)
                                         : 0U)),32);
            tracep->chgIData(oldp+790,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_2
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2)
                                         : 0U)),32);
            tracep->chgIData(oldp+791,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_3
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3)
                                         : 0U)),32);
            tracep->chgIData(oldp+792,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_0
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0)
                                         : 0U)),32);
            tracep->chgIData(oldp+793,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_1
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1)
                                         : 0U)),32);
            tracep->chgIData(oldp+794,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_2
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2)
                                         : 0U)),32);
            tracep->chgIData(oldp+795,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_3
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3)
                                         : 0U)),32);
            tracep->chgIData(oldp+796,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_0
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0)
                                         : 0U)),32);
            tracep->chgIData(oldp+797,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_1
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1)
                                         : 0U)),32);
            tracep->chgIData(oldp+798,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_2
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2)
                                         : 0U)),32);
            tracep->chgIData(oldp+799,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_3
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3)
                                         : 0U)),32);
            tracep->chgIData(oldp+800,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_0
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0)
                                         : 0U)),32);
            tracep->chgIData(oldp+801,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_1
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1)
                                         : 0U)),32);
            tracep->chgIData(oldp+802,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_2
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2)
                                         : 0U)),32);
            tracep->chgIData(oldp+803,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_3
                                             : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3)
                                         : 0U)),32);
            tracep->chgBit(oldp+804,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+805,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+806,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+807,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+808,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+809,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+810,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+811,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+812,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+813,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+814,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+815,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+816,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+817,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+818,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+819,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+820,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+821,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+822,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+823,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+824,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+825,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+826,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+827,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+828,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+829,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+830,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+831,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+832,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+833,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+834,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+835,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+836,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+837,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+838,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+839,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+840,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+841,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+842,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+843,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+844,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+845,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+846,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+847,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+848,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+849,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+850,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+851,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+852,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+853,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+854,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+855,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+856,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+857,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+858,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+859,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+860,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+861,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+862,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+863,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+864,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+865,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+866,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+867,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+868,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+869,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+870,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+871,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+872,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+873,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+874,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+875,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+876,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+877,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+878,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+879,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+880,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+881,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+882,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+883,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+884,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+885,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+886,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+887,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+888,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+889,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+890,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+891,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+892,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+893,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+894,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+895,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+896,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+897,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+898,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+899,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+900,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+901,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+902,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+903,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+904,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+905,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+906,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+907,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+908,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+909,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+910,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+911,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+912,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__c)
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_0
                                         : 0U)),32);
            tracep->chgBit(oldp+913,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+914,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+915,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+916,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+917,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+918,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+919,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+920,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+921,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+922,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+923,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+924,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+925,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+926,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+927,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+928,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+929,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+930,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+931,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+932,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                         : 0U)),32);
            tracep->chgIData(oldp+933,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                         : 0U)),32);
            tracep->chgIData(oldp+934,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                         : 0U)),32);
            tracep->chgIData(oldp+935,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                         : 0U)),32);
            tracep->chgIData(oldp+936,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                         : 0U)),32);
            tracep->chgIData(oldp+937,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                         : 0U)),32);
            tracep->chgIData(oldp+938,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                         : 0U)),32);
            tracep->chgIData(oldp+939,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                         : 0U)),32);
            tracep->chgIData(oldp+940,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                         : 0U)),32);
            tracep->chgIData(oldp+941,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                         : 0U)),32);
            tracep->chgIData(oldp+942,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                         : 0U)),32);
            tracep->chgIData(oldp+943,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                         : 0U)),32);
            tracep->chgIData(oldp+944,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                         : 0U)),32);
            tracep->chgIData(oldp+945,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                         : 0U)),32);
            tracep->chgIData(oldp+946,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                         : 0U)),32);
            tracep->chgIData(oldp+947,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                         : 0U)),32);
            tracep->chgIData(oldp+948,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+949,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_220)
                                         : 0U)),32);
            tracep->chgIData(oldp+950,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_221)
                                         : 0U)),32);
            tracep->chgIData(oldp+951,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_222)
                                         : 0U)),32);
            tracep->chgIData(oldp+952,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_223)
                                         : 0U)),32);
            tracep->chgIData(oldp+953,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_224)
                                         : 0U)),32);
            tracep->chgIData(oldp+954,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_225)
                                         : 0U)),32);
            tracep->chgIData(oldp+955,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_226)
                                         : 0U)),32);
            tracep->chgIData(oldp+956,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_227)
                                         : 0U)),32);
            tracep->chgIData(oldp+957,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_228)
                                         : 0U)),32);
            tracep->chgIData(oldp+958,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_229)
                                         : 0U)),32);
            tracep->chgIData(oldp+959,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_230)
                                         : 0U)),32);
            tracep->chgIData(oldp+960,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_231)
                                         : 0U)),32);
            tracep->chgIData(oldp+961,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_232)
                                         : 0U)),32);
            tracep->chgIData(oldp+962,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_233)
                                         : 0U)),32);
            tracep->chgIData(oldp+963,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_234)
                                         : 0U)),32);
            tracep->chgIData(oldp+964,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+965,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+966,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__check)
                                       ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                          | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__i) 
                                             & (3U 
                                                == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__j)))
                                       : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__i) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+967,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+968,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+969,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+970,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+971,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+972,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+973,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+974,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+975,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+976,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+977,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+978,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+979,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+980,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+981,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+982,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+983,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+984,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+985,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+986,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+987,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+988,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+989,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+990,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+991,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+992,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+993,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+994,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+995,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+996,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+997,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+998,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+999,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+1000,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+1001,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+1002,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+1003,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+1004,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+1005,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+1006,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+1007,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+1008,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+1009,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+1010,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+1011,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+1012,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1013,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1014,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1015,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1016,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1017,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1018,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1019,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1020,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1021,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1022,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1023,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1024,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1025,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1026,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1027,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1028,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1029,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1030,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1031,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+1032,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+1033,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+1034,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+1035,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+1036,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+1037,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+1038,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+1039,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+1040,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+1041,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+1042,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+1043,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+1044,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+1045,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+1046,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+1047,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+1048,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+1049,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+1050,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+1051,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+1052,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+1053,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+1054,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+1055,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+1056,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+1057,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+1058,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+1059,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+1060,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+1061,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+1062,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+1063,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+1064,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+1066,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+1067,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+1068,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+1069,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+1070,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+1071,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+1072,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+1073,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+1074,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+1075,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+1076,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+1077,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+1078,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+1079,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+1080,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+1081,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+1082,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+1083,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1084,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1085,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1086,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1087,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1088,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1089,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1090,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1091,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1092,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1093,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1094,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1095,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1096,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1097,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1098,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+1099,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+1100,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1101,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1102,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1103,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1104,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1105,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1106,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1107,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1108,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1109,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1110,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1111,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1112,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1113,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1114,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1115,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+1116,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+1117,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+1118,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+1119,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+1120,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+1121,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+1122,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+1123,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+1124,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+1125,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+1126,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+1127,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+1128,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+1129,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+1130,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+1131,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+1132,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+1133,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+1134,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+1135,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+1136,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+1137,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+1138,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+1139,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+1140,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+1141,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+1142,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+1143,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+1144,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+1145,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+1146,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+1147,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+1148,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+1149,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+1150,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+1151,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+1152,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+1153,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+1154,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+1155,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+1156,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+1157,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+1158,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+1159,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+1160,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+1161,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+1162,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+1163,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1164,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1165,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1166,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1167,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1168,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1169,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1170,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1171,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1172,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1173,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1174,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1175,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1176,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1177,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1178,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+1179,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+1180,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+1181,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+1182,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+1183,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+1184,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+1185,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+1186,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+1187,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+1188,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+1189,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+1190,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+1191,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+1192,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+1193,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+1194,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+1195,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+1196,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+1197,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+1198,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+1199,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+1200,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+1201,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+1202,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+1203,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+1204,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+1205,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+1206,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+1207,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__c)
                                          ? ((3U == 
                                              (3U & (IData)(vlTOPp->FlexDPU__DOT__Statvalid)))
                                              ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_3
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->FlexDPU__DOT__Statvalid)))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_2
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->FlexDPU__DOT__Statvalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_0)))
                                          : 0U)),32);
            tracep->chgBit(oldp+1208,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+1209,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+1210,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+1211,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+1212,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+1213,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+1214,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+1215,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+1216,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+1217,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+1218,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+1219,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+1220,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+1221,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+1222,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+1223,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+1224,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+1225,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+1226,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+1227,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1228,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1229,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1230,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1231,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1232,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1233,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1234,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1235,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1236,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1237,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1238,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1239,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1240,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1241,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1242,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1243,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+1244,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+1245,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+1246,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+1247,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+1248,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+1249,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+1250,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+1251,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+1252,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+1253,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+1254,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+1255,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+1256,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+1257,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+1258,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+1259,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+1260,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+1261,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+1262,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+1263,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+1264,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+1265,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+1266,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+1267,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+1268,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+1269,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+1270,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+1271,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+1272,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+1273,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+1274,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+1275,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+1276,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+1277,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+1278,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+1279,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+1280,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+1281,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+1282,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+1283,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+1284,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+1285,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+1286,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+1287,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+1288,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+1289,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+1290,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+1291,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+1292,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+1293,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+1294,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+1295,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+1296,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+1297,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+1298,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+1299,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+1300,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+1301,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+1302,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+1303,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+1304,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+1305,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+1306,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+1307,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+1308,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1309,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1310,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1311,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1312,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1313,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1314,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1315,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1316,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1317,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1318,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1319,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1320,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1321,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1322,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1323,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1324,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1325,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1326,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1327,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+1328,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+1329,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+1330,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+1331,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+1332,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+1333,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+1334,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+1335,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+1336,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+1337,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+1338,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+1339,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+1340,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+1341,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+1342,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+1343,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+1344,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+1345,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+1346,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+1347,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+1348,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+1349,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+1350,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+1351,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+1352,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+1353,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+1354,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+1355,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+1356,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+1357,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+1358,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+1359,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+1360,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+1361,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+1362,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+1363,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+1364,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+1365,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+1366,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+1367,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+1368,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+1369,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+1370,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+1371,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+1372,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+1373,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+1374,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+1375,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+1376,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+1377,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+1378,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+1379,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1380,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1381,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1382,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1383,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1384,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1385,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1386,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1387,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1388,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1389,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1390,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1391,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1392,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1393,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1394,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+1395,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+1396,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1397,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1398,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1399,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1400,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1401,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1402,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1403,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1404,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1405,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1406,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1407,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1408,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1409,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1410,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1411,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+1412,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+1413,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+1414,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+1415,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+1416,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+1417,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+1418,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+1419,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+1420,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+1421,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+1422,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+1423,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+1424,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+1425,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+1426,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+1427,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+1428,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+1429,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+1430,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+1431,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+1432,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+1433,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+1434,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+1435,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+1436,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+1437,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+1438,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+1439,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+1440,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+1441,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+1442,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+1443,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+1444,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+1445,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+1446,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+1447,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+1448,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+1449,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+1450,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+1451,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+1452,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+1453,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+1454,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+1455,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+1456,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+1457,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+1458,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+1459,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1460,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1461,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1462,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1463,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1464,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1465,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1466,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1467,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1468,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1469,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1470,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1471,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1472,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1473,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1474,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+1475,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+1476,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+1477,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+1478,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+1479,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+1480,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+1481,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+1482,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+1483,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+1484,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+1485,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+1486,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+1487,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+1488,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+1489,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+1490,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+1491,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+1492,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+1493,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+1494,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+1495,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+1496,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+1497,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+1498,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+1499,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+1500,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+1501,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+1502,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+1503,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__c)
                                          ? ((3U == 
                                              ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                ? 2U
                                                : 0U))
                                              ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_3
                                              : ((2U 
                                                  == 
                                                  ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                    ? 2U
                                                    : 0U))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_2
                                                  : 
                                                 ((1U 
                                                   == 
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 2U
                                                     : 0U))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_0)))
                                          : 0U)),32);
            tracep->chgBit(oldp+1504,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+1505,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+1506,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+1507,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+1508,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+1509,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+1510,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+1511,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+1512,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+1513,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+1514,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+1515,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+1516,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+1517,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+1518,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+1519,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+1520,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+1521,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+1522,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+1523,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1524,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1525,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1526,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1527,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1528,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1529,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1530,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1531,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1532,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1533,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1534,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1535,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1536,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1537,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1538,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1539,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+1540,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+1541,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+1542,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+1543,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+1544,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+1545,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+1546,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+1547,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+1548,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+1549,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+1550,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+1551,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+1552,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+1553,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+1554,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+1555,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+1556,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+1557,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+1558,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+1559,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+1560,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+1561,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+1562,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+1563,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+1564,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+1565,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+1566,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+1567,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+1568,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+1569,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+1570,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+1571,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+1572,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+1573,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+1574,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+1575,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+1576,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+1577,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+1578,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+1579,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+1580,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+1581,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+1582,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+1583,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+1584,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+1585,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+1586,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+1587,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+1588,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+1589,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+1590,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+1591,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+1592,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+1593,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+1594,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+1595,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+1596,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+1597,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+1598,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+1599,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+1600,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+1601,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+1602,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+1603,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+1604,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1605,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1606,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1607,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1608,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1609,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1610,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1611,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1612,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1613,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1614,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1615,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1616,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1617,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1618,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1619,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1620,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1621,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1622,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1623,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+1624,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+1625,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+1626,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+1627,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+1628,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+1629,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+1630,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+1631,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+1632,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+1633,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+1634,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+1635,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+1636,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+1637,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+1638,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+1639,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+1640,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+1641,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+1642,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+1643,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+1644,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+1645,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+1646,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+1647,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+1648,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+1649,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+1650,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+1651,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+1652,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+1653,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+1654,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+1655,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+1656,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+1657,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+1658,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+1659,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+1660,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+1661,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+1662,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+1663,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+1664,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+1665,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+1666,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+1667,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+1668,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+1669,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+1670,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+1671,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+1672,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+1673,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+1674,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+1675,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1676,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1677,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1678,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1679,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1680,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1681,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1682,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1683,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1684,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1685,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1686,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1687,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1688,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1689,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1690,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+1691,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+1692,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1693,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1694,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1695,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1696,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1697,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1698,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1699,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1700,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1701,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1702,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1703,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1704,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1705,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1706,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1707,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+1708,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+1709,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+1710,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+1711,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+1712,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+1713,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+1714,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+1715,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+1716,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+1717,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+1718,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+1719,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+1720,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+1721,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+1722,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+1723,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+1724,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+1725,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+1726,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+1727,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+1728,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+1729,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+1730,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+1731,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+1732,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+1733,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+1734,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+1735,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+1736,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+1737,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+1738,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+1739,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+1740,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+1741,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+1742,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+1743,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+1744,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+1745,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+1746,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+1747,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+1748,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+1749,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+1750,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+1751,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+1752,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+1753,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+1754,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+1755,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1756,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1757,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1758,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1759,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1760,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1761,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1762,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1763,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1764,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1765,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1766,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1767,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1768,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1769,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1770,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+1771,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+1772,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+1773,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+1774,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+1775,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+1776,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+1777,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+1778,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+1779,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+1780,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+1781,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+1782,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+1783,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+1784,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+1785,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+1786,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+1787,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+1788,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+1789,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+1790,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+1791,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+1792,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+1793,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+1794,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+1795,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+1796,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+1797,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+1798,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+1799,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__c)
                                          ? ((3U == 
                                              ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                ? 3U
                                                : 0U))
                                              ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_3
                                              : ((2U 
                                                  == 
                                                  ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                    ? 3U
                                                    : 0U))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_2
                                                  : 
                                                 ((1U 
                                                   == 
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 3U
                                                     : 0U))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_0)))
                                          : 0U)),32);
            tracep->chgBit(oldp+1800,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+1801,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+1802,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+1803,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+1804,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+1805,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+1806,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+1807,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+1808,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+1809,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+1810,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+1811,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+1812,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+1813,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+1814,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+1815,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+1816,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+1817,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+1818,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+1819,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1820,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1821,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1822,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1823,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1824,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1825,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1826,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1827,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1828,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1829,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1830,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1831,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1832,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1833,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1834,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1835,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+1836,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+1837,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+1838,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+1839,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+1840,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+1841,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+1842,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+1843,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+1844,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+1845,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+1846,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+1847,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+1848,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+1849,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+1850,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+1851,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+1852,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+1853,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+1854,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+1855,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+1856,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+1857,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+1858,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+1859,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+1860,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+1861,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+1862,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+1863,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+1864,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+1865,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+1866,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+1867,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+1868,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+1869,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+1870,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+1871,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+1872,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+1873,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+1874,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+1875,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+1876,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+1877,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+1878,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+1879,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+1880,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+1881,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+1882,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+1883,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+1884,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+1885,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+1886,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+1887,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+1888,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+1889,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+1890,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+1891,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+1892,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+1893,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+1894,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+1895,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+1896,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+1897,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+1898,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+1899,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+1900,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1901,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1902,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1903,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1904,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1905,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1906,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1907,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1908,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1909,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1910,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1911,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1912,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1913,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1914,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1915,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1916,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1917,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1918,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+1919,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+1920,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+1921,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+1922,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+1923,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+1924,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+1925,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+1926,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+1927,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+1928,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+1929,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+1930,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+1931,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+1932,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+1933,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+1934,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+1935,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+1936,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+1937,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+1938,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+1939,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+1940,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+1941,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+1942,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+1943,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+1944,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+1945,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+1946,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+1947,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+1948,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+1949,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+1950,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+1951,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+1952,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+1953,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+1954,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+1955,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+1956,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+1957,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+1958,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+1959,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+1960,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+1961,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+1962,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+1963,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+1964,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+1965,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+1966,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+1967,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+1968,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+1969,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+1970,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+1971,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1972,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1973,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1974,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1975,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1976,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1977,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1978,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1979,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1980,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1981,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1982,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+1983,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+1984,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+1985,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+1986,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+1987,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+1988,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1989,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1990,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1991,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1992,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1993,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1994,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1995,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1996,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1997,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1998,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1999,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2000,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2001,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2002,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2003,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+2004,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+2005,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+2006,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+2007,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+2008,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+2009,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+2010,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+2011,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+2012,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+2013,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+2014,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+2015,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+2016,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+2017,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+2018,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+2019,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+2020,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+2021,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+2022,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+2023,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+2024,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+2025,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+2026,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+2027,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+2028,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+2029,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+2030,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+2031,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+2032,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+2033,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+2034,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+2035,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+2036,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+2037,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+2038,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+2039,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+2040,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+2041,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+2042,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+2043,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+2044,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+2045,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+2046,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+2047,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+2048,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+2049,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+2050,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+2051,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2052,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2053,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2054,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2055,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2056,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2057,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2058,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2059,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2060,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2061,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2062,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2063,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2064,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2065,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2066,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+2067,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+2068,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+2069,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+2070,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+2071,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+2072,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+2073,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+2074,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+2075,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+2076,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+2077,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+2078,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+2079,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+2080,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+2081,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+2082,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+2083,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+2084,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+2085,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+2086,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+2087,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+2088,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+2089,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+2090,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+2091,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+2092,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+2093,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+2094,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+2095,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__c)
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Jdex_0
                                          : 0U)),32);
            tracep->chgBit(oldp+2096,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+2097,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+2098,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+2099,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+2100,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+2101,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+2102,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+2103,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+2104,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+2105,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+2106,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+2107,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+2108,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+2109,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+2110,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+2111,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+2112,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+2113,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+2114,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+2115,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2116,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2117,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2118,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2119,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2120,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2121,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2122,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2123,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2124,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2125,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2126,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2127,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2128,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2129,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2130,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2131,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+2132,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+2133,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+2134,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+2135,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+2136,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+2137,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+2138,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+2139,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+2140,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+2141,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+2142,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+2143,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+2144,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+2145,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+2146,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+2147,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+2148,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+2149,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+2150,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+2151,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+2152,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+2153,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+2154,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+2155,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+2156,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+2157,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+2158,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+2159,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+2160,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+2161,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+2162,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+2163,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+2164,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+2165,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+2166,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+2167,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+2168,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+2169,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+2170,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+2171,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+2172,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+2173,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+2174,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+2175,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+2176,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+2177,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+2178,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+2179,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+2180,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+2181,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+2182,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+2183,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+2184,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+2185,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+2186,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+2187,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+2188,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+2189,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+2190,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+2191,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_4.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+2192,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+2193,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+2194,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+2195,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+2196,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2197,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2198,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2199,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2200,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2201,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2202,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2203,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2204,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2205,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2206,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2207,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2208,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2209,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2210,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2211,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2212,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2213,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2214,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2215,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+2216,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+2217,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+2218,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+2219,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+2220,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+2221,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+2222,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+2223,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+2224,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+2225,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+2226,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+2227,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+2228,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+2229,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+2230,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+2231,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+2232,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+2233,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+2234,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+2235,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+2236,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+2237,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+2238,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+2239,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+2240,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+2241,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+2242,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+2243,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+2244,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+2245,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+2246,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+2247,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+2248,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+2249,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+2250,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+2251,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+2252,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+2253,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+2254,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+2255,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+2256,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+2257,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+2258,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+2259,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+2260,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+2261,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+2262,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+2263,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+2264,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+2265,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+2266,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+2267,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2268,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2269,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2270,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2271,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2272,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2273,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2274,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2275,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2276,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2277,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2278,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2279,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2280,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2281,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2282,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+2283,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+2284,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2285,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2286,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2287,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2288,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2289,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2290,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2291,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2292,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2293,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2294,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2295,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2296,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2297,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2298,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2299,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+2300,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+2301,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+2302,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+2303,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+2304,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+2305,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+2306,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+2307,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+2308,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+2309,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+2310,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+2311,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+2312,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+2313,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+2314,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+2315,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+2316,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+2317,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+2318,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+2320,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+2321,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+2322,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+2323,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+2324,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+2325,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+2326,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+2327,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+2328,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+2329,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+2330,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+2331,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+2332,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+2333,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+2334,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+2335,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+2336,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+2337,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+2338,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+2339,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+2340,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+2341,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+2342,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+2343,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+2344,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+2345,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+2346,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+2347,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2348,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2349,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2350,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2351,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2352,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2353,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2354,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2355,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2356,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2357,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2358,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2359,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2360,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2361,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2362,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+2363,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+2364,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+2365,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+2366,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+2367,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+2368,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+2369,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+2370,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+2371,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+2372,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+2373,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+2374,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+2375,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+2376,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+2377,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+2378,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+2379,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+2380,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+2381,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+2382,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+2383,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+2384,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+2385,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+2386,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+2387,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+2388,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+2389,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+2390,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+2391,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__c)
                                          ? ((3U == 
                                              ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                ? 1U
                                                : 0U))
                                              ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_3
                                              : ((2U 
                                                  == 
                                                  ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                    ? 1U
                                                    : 0U))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_2
                                                  : 
                                                 ((1U 
                                                   == 
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 1U
                                                     : 0U))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_0)))
                                          : 0U)),32);
            tracep->chgBit(oldp+2392,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+2393,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+2394,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+2395,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+2396,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+2397,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+2398,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+2399,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+2400,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+2401,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+2402,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+2403,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+2404,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+2405,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+2406,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+2407,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+2408,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+2409,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+2410,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+2411,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2412,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2413,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2414,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2415,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2416,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2417,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2418,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2419,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2420,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2421,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2422,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2423,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2424,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2425,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2426,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2427,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+2428,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+2429,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+2430,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+2431,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+2432,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+2433,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+2434,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+2435,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+2436,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+2437,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+2438,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+2439,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+2440,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+2441,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+2442,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+2443,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+2444,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+2445,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+2446,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+2447,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+2448,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+2449,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+2450,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+2451,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+2452,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+2453,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+2454,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+2455,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+2456,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+2457,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+2458,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+2459,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+2460,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+2461,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+2462,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+2463,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+2464,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+2465,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+2466,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+2467,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+2468,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+2469,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+2470,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+2471,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+2472,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+2473,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+2474,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+2475,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+2476,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+2477,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+2478,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+2479,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+2480,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+2481,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+2482,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+2483,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+2484,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+2485,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+2486,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+2487,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_5.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+2488,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+2489,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+2490,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+2491,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+2492,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2493,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2494,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2495,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2496,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2497,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2498,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2499,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2500,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2501,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2502,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2503,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2504,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2505,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2506,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2507,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2508,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2509,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2510,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2511,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+2512,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+2513,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+2514,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+2515,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+2516,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+2517,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+2518,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+2519,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+2520,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+2521,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+2522,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+2523,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+2524,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+2525,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+2526,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+2527,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+2528,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+2529,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+2530,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+2531,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+2532,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+2533,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+2534,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+2535,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+2536,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+2537,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+2538,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+2539,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+2540,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+2541,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+2542,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+2543,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+2544,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+2545,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+2546,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+2547,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+2548,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+2549,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+2550,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+2551,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+2552,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+2553,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+2554,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+2555,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+2556,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+2557,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+2558,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+2559,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+2560,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+2561,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+2562,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+2563,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2564,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2565,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2566,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2567,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2568,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2569,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2570,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2571,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2572,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2573,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2574,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2575,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2576,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2577,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2578,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+2579,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+2580,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2581,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2582,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2583,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2584,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2585,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2586,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2587,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2588,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2589,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2590,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2591,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2592,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2593,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2594,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2595,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+2596,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+2597,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+2598,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+2599,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+2600,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+2601,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+2602,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+2603,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+2604,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+2605,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+2606,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+2607,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+2608,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+2609,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+2610,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+2611,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+2612,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+2613,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+2614,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+2615,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+2616,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+2617,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+2618,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+2619,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+2620,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+2621,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+2622,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+2623,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+2624,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+2625,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+2626,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+2627,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+2628,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+2629,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+2630,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+2631,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+2632,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+2633,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+2634,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+2635,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+2636,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+2637,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+2638,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+2639,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+2640,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+2641,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+2642,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+2643,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2644,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2645,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2646,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2647,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2648,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2649,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2650,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2651,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2652,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2653,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2654,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2655,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2656,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2657,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2658,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+2659,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+2660,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+2661,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+2662,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+2663,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+2664,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+2665,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+2666,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+2667,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+2668,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+2669,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+2670,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+2671,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+2672,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+2673,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+2674,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+2675,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+2676,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+2677,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+2678,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+2679,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+2680,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+2681,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+2682,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+2683,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+2684,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+2685,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+2686,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+2687,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__c)
                                          ? ((3U == 
                                              ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                ? 2U
                                                : 0U))
                                              ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_3
                                              : ((2U 
                                                  == 
                                                  ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                    ? 2U
                                                    : 0U))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_2
                                                  : 
                                                 ((1U 
                                                   == 
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 2U
                                                     : 0U))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_0)))
                                          : 0U)),32);
            tracep->chgBit(oldp+2688,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+2689,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+2690,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+2691,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+2692,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+2693,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+2694,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+2695,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+2696,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+2697,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+2698,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+2699,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+2700,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+2701,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+2702,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+2703,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+2704,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+2705,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+2706,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+2707,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2708,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2709,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2710,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2711,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2712,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2713,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2714,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2715,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2716,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2717,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2718,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2719,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+2720,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+2721,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+2722,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+2723,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+2724,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+2725,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+2726,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+2727,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+2728,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+2729,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+2730,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+2731,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+2732,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+2733,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+2734,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+2735,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+2736,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+2737,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+2738,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+2739,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+2740,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+2741,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+2742,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+2743,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+2744,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+2745,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+2746,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+2747,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+2748,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+2749,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+2750,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+2751,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+2752,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+2753,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+2754,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+2755,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+2756,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+2757,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+2758,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+2759,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+2760,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+2761,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+2762,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+2763,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+2764,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+2765,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+2766,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+2767,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+2768,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+2769,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+2770,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+2771,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+2772,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+2773,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+2774,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+2775,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+2776,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+2777,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+2778,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+2779,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+2780,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+2781,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+2782,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+2783,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_6.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+2784,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+2785,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+2786,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+2787,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+2788,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2789,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2790,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2791,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2792,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2793,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2794,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2795,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2796,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2797,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2798,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2799,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2800,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2801,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2802,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2803,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2804,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2805,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2806,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+2807,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+2808,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+2809,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+2810,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+2811,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+2812,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+2813,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+2814,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+2815,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+2816,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+2817,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+2818,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+2819,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+2820,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+2821,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+2822,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+2823,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+2824,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+2825,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+2826,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+2827,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+2828,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+2829,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+2830,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+2831,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+2832,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+2833,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+2834,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+2835,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+2836,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+2837,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+2838,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+2839,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+2840,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+2841,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+2842,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+2843,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+2844,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+2845,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+2846,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+2847,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+2848,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+2849,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+2850,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+2851,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+2852,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+2853,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+2854,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+2855,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+2856,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+2857,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+2858,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+2859,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2860,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2861,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2862,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2863,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2864,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2865,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2866,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2867,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2868,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2869,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2870,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+2871,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+2872,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+2873,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+2874,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+2875,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+2876,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2877,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2878,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2879,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2880,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2881,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2882,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2883,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2884,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2885,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2886,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2887,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2888,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2889,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2890,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2891,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+2892,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+2893,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+2894,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+2895,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+2896,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+2897,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+2898,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+2899,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+2900,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+2901,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+2902,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+2903,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+2904,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+2905,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+2906,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+2907,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+2908,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+2909,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+2910,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+2911,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+2912,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+2913,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+2914,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+2915,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+2916,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+2917,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+2918,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+2919,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+2920,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+2921,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+2922,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+2923,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+2924,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+2925,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+2926,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+2927,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+2928,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+2929,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+2930,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+2931,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+2932,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+2933,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+2934,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+2935,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+2936,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+2937,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+2938,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+2939,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+2940,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+2941,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+2942,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+2943,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+2944,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+2945,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+2946,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+2947,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+2948,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+2949,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+2950,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+2951,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+2952,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+2953,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+2954,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+2955,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+2956,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+2957,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+2958,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+2959,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+2960,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+2961,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+2962,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+2963,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+2964,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+2965,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+2966,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+2967,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+2968,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+2969,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+2970,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+2971,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+2972,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+2973,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+2974,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+2975,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+2976,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+2977,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+2978,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+2979,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+2980,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+2981,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+2982,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+2983,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__c)
                                          ? ((3U == 
                                              ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                ? 3U
                                                : 0U))
                                              ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_3
                                              : ((2U 
                                                  == 
                                                  ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                    ? 3U
                                                    : 0U))
                                                  ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_2
                                                  : 
                                                 ((1U 
                                                   == 
                                                   ((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                                     ? 3U
                                                     : 0U))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_0)))
                                          : 0U)),32);
            tracep->chgBit(oldp+2984,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+2985,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+2986,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+2987,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+2988,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+2989,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+2990,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+2991,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+2992,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+2993,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+2994,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+2995,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+2996,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+2997,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+2998,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+2999,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+3000,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+3001,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+3002,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+3003,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3004,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3005,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3006,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3007,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3008,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3009,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3010,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3011,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3012,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3013,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3014,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3015,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3016,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3017,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3018,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3019,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+3020,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+3021,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+3022,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+3023,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+3024,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+3025,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+3026,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+3027,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+3028,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+3029,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+3030,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+3031,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+3032,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+3033,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+3034,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+3035,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+3036,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+3037,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+3038,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+3039,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+3040,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+3041,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+3042,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+3043,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+3044,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+3045,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+3046,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+3047,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+3048,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+3049,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+3050,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+3051,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+3052,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+3053,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+3054,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+3055,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+3056,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+3057,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+3058,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+3059,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+3060,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+3061,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+3062,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+3063,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+3064,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+3065,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+3066,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+3067,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+3068,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+3069,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgIData(oldp+3070,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+3071,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+3072,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+3073,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+3074,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+3075,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+3076,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+3077,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+3078,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+3079,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_7.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+3080,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+3081,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+3082,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+3083,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+3084,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3085,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3086,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3087,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3088,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3089,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3090,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3091,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3092,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3093,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3094,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3095,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3096,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_0)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3097,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_1)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3098,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_2)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3099,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                              ? (0xffffU 
                                                 & (((3U 
                                                      == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                                     & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                      ? 0U
                                                      : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_3)))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3100,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_0))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3101,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_1))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3102,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_2))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgSData(oldp+3103,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid)
                                          ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                              ? (0xffffU 
                                                 & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_3))
                                              : 0U)
                                          : 0U)),16);
            tracep->chgCData(oldp+3104,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+3105,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+3106,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+3107,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgSData(oldp+3108,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+3109,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+3110,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+3111,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+3112,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+3113,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+3114,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+3115,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgBit(oldp+3116,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+3117,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+3118,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+3119,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+3120,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+3121,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+3122,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+3123,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+3124,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+3125,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+3126,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+3127,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+3128,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+3129,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+3130,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+3131,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+3132,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+3133,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_0))
                                          : 0U)),16);
            tracep->chgSData(oldp+3134,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_1))
                                          : 0U)),16);
            tracep->chgSData(oldp+3135,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_2))
                                          : 0U)),16);
            tracep->chgSData(oldp+3136,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG)
                                          ? (0xffffU 
                                             & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_3))
                                          : 0U)),16);
            tracep->chgBit(oldp+3137,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+3138,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+3139,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+3140,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+3141,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+3142,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+3143,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+3144,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+3145,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+3146,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+3147,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+3148,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+3149,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+3150,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+3151,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+3152,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+3153,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+3154,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+3155,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+3156,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+3157,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+3158,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+3159,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+3160,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+3161,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+3162,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+3163,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+3164,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+3165,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+3166,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                          : 0U)),32);
            tracep->chgIData(oldp+3167,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                          : 0U)),32);
            tracep->chgIData(oldp+3168,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                          : 0U)),32);
            tracep->chgIData(oldp+3169,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                          : 0U)),32);
            tracep->chgIData(oldp+3170,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter_io_valid)
                                          ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                              & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                              ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                              : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__e)
                                                  ? 0U
                                                  : vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                          : 0U)),32);
            tracep->chgBit(oldp+3171,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+3172,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+3173,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+3174,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+3175,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+3176,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+3177,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+3178,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+3179,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+3180,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+3181,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+3182,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+3183,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+3184,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+3185,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+3186,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+3187,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+3188,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+3189,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+3190,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+3191,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+3192,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+3193,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+3194,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+3195,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+3196,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+3197,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+3198,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+3199,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+3200,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+3201,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+3202,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+3203,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+3204,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+3205,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+3206,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+3207,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+3208,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+3209,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+3210,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+3211,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+3212,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+3213,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+3214,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+3215,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+3216,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+3217,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+3218,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+3219,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+3220,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+3221,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+3222,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+3223,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+3224,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+3225,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+3226,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+3227,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+3228,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+3229,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+3230,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+3231,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+3232,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+3233,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+3234,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+3235,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+3236,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+3237,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+3238,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+3239,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+3240,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+3241,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+3242,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+3243,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+3244,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+3245,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+3246,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+3247,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+3248,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+3249,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+3250,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+3251,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+3252,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+3253,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+3254,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+3255,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+3256,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+3257,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+3258,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+3259,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+3260,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+3261,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+3262,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+3263,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+3264,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+3265,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+3266,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+3267,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+3268,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+3269,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+3270,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+3271,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+3272,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+3273,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+3274,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+3275,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+3276,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+3277,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+3278,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+3279,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__c)
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__Jdex_0
                                          : 0U)),32);
            tracep->chgBit(oldp+3280,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+3281,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+3282,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+3283,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+3284,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+3285,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+3286,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+3287,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+3288,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+3289,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+3290,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+3291,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+3292,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+3293,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+3294,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+3295,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+3296,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+3297,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+3298,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+3299,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3300,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3301,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3302,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3303,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3304,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3305,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3306,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3307,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3308,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3309,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3310,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3311,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+3312,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+3313,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+3314,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+3315,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+3316,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+3317,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+3318,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+3319,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+3320,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+3321,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_8.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
        }
    }
}

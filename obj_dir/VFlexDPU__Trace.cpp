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
            tracep->chgBit(oldp+4,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                    & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgBit(oldp+5,(vlTOPp->FlexDPU__DOT__Statvalid));
            tracep->chgBit(oldp+6,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                    & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+7,(vlTOPp->FlexDPU__DOT__Statvalid),32);
            tracep->chgBit(oldp+8,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                    & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__k) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__j)) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__i)) 
                                       & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+9,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                       ? 2U : 0U)),32);
            tracep->chgBit(oldp+10,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid) 
                                     & ((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__k) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__j)) 
                                         & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__i)) 
                                        & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jNext)))));
            tracep->chgIData(oldp+11,(((IData)(vlTOPp->FlexDPU__DOT__Statvalid)
                                        ? 3U : 0U)),32);
            tracep->chgIData(oldp+12,(vlTOPp->FlexDPU__DOT__used_FlexDPE_0),32);
            tracep->chgIData(oldp+13,(vlTOPp->FlexDPU__DOT__used_FlexDPE_1),32);
            tracep->chgIData(oldp+14,(vlTOPp->FlexDPU__DOT__iloop),32);
            tracep->chgIData(oldp+15,(vlTOPp->FlexDPU__DOT__jloop),32);
            tracep->chgIData(oldp+16,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_0),32);
            tracep->chgIData(oldp+17,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_1),32);
            tracep->chgIData(oldp+18,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_2),32);
            tracep->chgIData(oldp+19,(vlTOPp->FlexDPU__DOT__PF1_Stream_Col_3),32);
            tracep->chgIData(oldp+20,(vlTOPp->FlexDPU__DOT__ModuleIndex),32);
            tracep->chgSData(oldp+21,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+22,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+23,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+24,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+25,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_0
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+26,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+27,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_2
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+28,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_3
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+29,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_0
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+30,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+31,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_2
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+32,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_3
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+33,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_0
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+34,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+35,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_2
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+36,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_3
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+37,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_0
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+38,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_1
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+39,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_2
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+40,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                            ? (0xffffU 
                                               & (((3U 
                                                    == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                                   & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                                   ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_3
                                                   : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+41,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                            ? (0xffffU 
                                               & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_0))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+42,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                            ? (0xffffU 
                                               & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_1))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+43,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                            ? (0xffffU 
                                               & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_2))
                                            : 0U) : 0U)),16);
            tracep->chgSData(oldp+44,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid)
                                        ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                            ? (0xffffU 
                                               & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_3))
                                            : 0U) : 0U)),16);
            tracep->chgBit(oldp+45,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k) 
                                       & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j)) 
                                      & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i)) 
                                     & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+46,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+47,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+48,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+49,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+50,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+51,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+52,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+53,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+54,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+55,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+56,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+57,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+58,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+59,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+60,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+61,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+62,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_0))
                                        : 0U)),16);
            tracep->chgSData(oldp+63,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_1))
                                        : 0U)),16);
            tracep->chgSData(oldp+64,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_2))
                                        : 0U)),16);
            tracep->chgSData(oldp+65,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG)
                                        ? (0xffffU 
                                           & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_3))
                                        : 0U)),16);
            tracep->chgBit(oldp+66,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+68,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+69,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+70,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+71,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+72,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+73,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+74,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+75,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+76,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+77,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+78,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+79,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+80,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+81,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+82,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+83,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+84,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_0
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0)
                                        : 0U)),32);
            tracep->chgIData(oldp+85,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_1
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1)
                                        : 0U)),32);
            tracep->chgIData(oldp+86,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_2
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2)
                                        : 0U)),32);
            tracep->chgIData(oldp+87,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_3
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3)
                                        : 0U)),32);
            tracep->chgIData(oldp+88,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_0
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0)
                                        : 0U)),32);
            tracep->chgIData(oldp+89,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_1
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1)
                                        : 0U)),32);
            tracep->chgIData(oldp+90,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_2
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2)
                                        : 0U)),32);
            tracep->chgIData(oldp+91,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_3
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3)
                                        : 0U)),32);
            tracep->chgIData(oldp+92,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_0
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0)
                                        : 0U)),32);
            tracep->chgIData(oldp+93,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_1
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1)
                                        : 0U)),32);
            tracep->chgIData(oldp+94,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_2
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2)
                                        : 0U)),32);
            tracep->chgIData(oldp+95,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_3
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3)
                                        : 0U)),32);
            tracep->chgIData(oldp+96,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_0
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0)
                                        : 0U)),32);
            tracep->chgIData(oldp+97,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_1
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1)
                                        : 0U)),32);
            tracep->chgIData(oldp+98,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_2
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2)
                                        : 0U)),32);
            tracep->chgIData(oldp+99,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter_io_valid)
                                        ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                            & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                            ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_3
                                            : vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3)
                                        : 0U)),32);
            tracep->chgBit(oldp+100,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+101,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+102,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+103,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+104,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+105,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+106,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+107,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+108,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+109,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+110,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+111,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+112,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+113,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+114,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+115,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+116,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+117,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+118,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+119,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+120,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+121,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+123,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+127,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+128,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+129,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+130,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgCData(oldp+131,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+132,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+133,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+134,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+135,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+136,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+137,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+138,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+139,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+140,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+143,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+144,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+145,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+146,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+147,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+148,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+149,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+150,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+151,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+152,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+153,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+154,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+155,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+156,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+157,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+158,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+159,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+160,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+161,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+162,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgSData(oldp+163,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+164,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+165,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+166,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+167,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+168,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+169,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+170,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+171,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+172,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+173,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+174,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+175,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+176,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+177,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+178,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+179,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+180,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+181,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+182,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+183,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+184,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+185,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+186,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+187,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+188,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+189,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+190,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+191,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+192,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+193,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+194,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+195,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+196,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+197,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+198,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+199,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+200,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+201,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+202,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+203,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+204,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+205,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+206,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+207,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+208,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+209,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+210,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+211,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+212,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+213,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+214,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+215,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+216,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+217,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+218,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+219,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+220,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__c)
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_0
                                         : 0U)),32);
            tracep->chgBit(oldp+221,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+222,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+223,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+224,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+225,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+226,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+227,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+228,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+229,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+230,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+231,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+232,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+233,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+234,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+235,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+236,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+237,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+238,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+239,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+240,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                         : 0U)),32);
            tracep->chgIData(oldp+241,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                         : 0U)),32);
            tracep->chgIData(oldp+242,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                         : 0U)),32);
            tracep->chgIData(oldp+243,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                         : 0U)),32);
            tracep->chgIData(oldp+244,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                         : 0U)),32);
            tracep->chgIData(oldp+245,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                         : 0U)),32);
            tracep->chgIData(oldp+246,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                         : 0U)),32);
            tracep->chgIData(oldp+247,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                         : 0U)),32);
            tracep->chgIData(oldp+248,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                         : 0U)),32);
            tracep->chgIData(oldp+249,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                         : 0U)),32);
            tracep->chgIData(oldp+250,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                         : 0U)),32);
            tracep->chgIData(oldp+251,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                         : 0U)),32);
            tracep->chgIData(oldp+252,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                         : 0U)),32);
            tracep->chgIData(oldp+253,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                         : 0U)),32);
            tracep->chgIData(oldp+254,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                         : 0U)),32);
            tracep->chgIData(oldp+255,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                         : 0U)),32);
            tracep->chgIData(oldp+256,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+257,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_220)
                                         : 0U)),32);
            tracep->chgIData(oldp+258,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_221)
                                         : 0U)),32);
            tracep->chgIData(oldp+259,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_222)
                                         : 0U)),32);
            tracep->chgIData(oldp+260,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_223)
                                         : 0U)),32);
            tracep->chgIData(oldp+261,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_224)
                                         : 0U)),32);
            tracep->chgIData(oldp+262,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_225)
                                         : 0U)),32);
            tracep->chgIData(oldp+263,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_226)
                                         : 0U)),32);
            tracep->chgIData(oldp+264,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_227)
                                         : 0U)),32);
            tracep->chgIData(oldp+265,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_228)
                                         : 0U)),32);
            tracep->chgIData(oldp+266,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_229)
                                         : 0U)),32);
            tracep->chgIData(oldp+267,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_230)
                                         : 0U)),32);
            tracep->chgIData(oldp+268,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_231)
                                         : 0U)),32);
            tracep->chgIData(oldp+269,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_232)
                                         : 0U)),32);
            tracep->chgIData(oldp+270,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_233)
                                         : 0U)),32);
            tracep->chgIData(oldp+271,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myCounter__DOT___GEN_234)
                                         : 0U)),32);
            tracep->chgIData(oldp+272,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+273,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+274,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__check)
                                       ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                          | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__i) 
                                             & (3U 
                                                == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__j)))
                                       : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__i) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+275,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+276,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+277,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+278,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+279,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+280,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+281,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+282,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+283,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+284,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+285,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+286,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+287,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+288,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+289,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+290,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+291,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+292,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+294,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+295,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+296,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+297,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+298,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+299,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+300,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+301,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+302,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+303,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+304,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+305,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgBit(oldp+306,(((3U >= vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__i) 
                                      & (3U > vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__j))));
            tracep->chgIData(oldp+307,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+308,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+309,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+310,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+311,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+312,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+313,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+315,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+316,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+317,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+318,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+319,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+320,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+321,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+322,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+323,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+324,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+325,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+326,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+327,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+328,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+329,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+330,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+331,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+332,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+333,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+334,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+335,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+336,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+337,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+338,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+339,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+340,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_3))
                                             : 0U) : 0U)),16);
            tracep->chgBit(oldp+341,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__k) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__j)) 
                                       & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__i)) 
                                      & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+342,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+343,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+344,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+345,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+346,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+347,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+348,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+349,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+350,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+351,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+352,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+353,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+354,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+355,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+356,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+357,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+358,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+359,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+360,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+361,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+362,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+363,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+364,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+365,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+366,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+367,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+368,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+369,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+370,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+371,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+372,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+373,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+374,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+375,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+376,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+377,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+378,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+379,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+380,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+381,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+382,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+383,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+384,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+385,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+386,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+387,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+388,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+389,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+390,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+391,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+392,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+393,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+394,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+395,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                         : 0U)),32);
            tracep->chgBit(oldp+396,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+397,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+398,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+399,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+400,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+401,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+402,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+403,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+404,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+405,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+406,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+407,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+408,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+409,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+410,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+411,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+412,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+413,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+414,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+415,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+416,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+417,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+418,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+419,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+420,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+421,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+422,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+423,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+424,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+425,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+426,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgCData(oldp+427,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+428,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+429,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+430,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+431,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+432,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+433,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+434,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+435,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+436,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+437,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+438,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+439,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+440,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+441,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+442,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+443,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+444,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+445,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+446,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+447,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+448,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+449,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+450,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+451,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+452,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+453,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+454,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+455,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+456,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+457,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+458,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgSData(oldp+459,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+460,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+461,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+462,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+463,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+464,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+465,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+466,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+467,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+468,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+469,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+470,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+471,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+472,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+473,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+474,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+475,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+476,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+477,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+478,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+479,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+480,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+481,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+482,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+483,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+484,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+485,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+486,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+487,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+488,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+489,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+490,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+491,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+492,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+493,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+494,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+495,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+496,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+497,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+498,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+499,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+500,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+501,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+502,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+503,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+504,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+505,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+506,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+507,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+508,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+509,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+510,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+511,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+512,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+513,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+514,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+515,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+516,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__c)
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
            tracep->chgBit(oldp+517,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+518,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+519,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+520,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+521,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+522,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+523,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+524,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+525,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+526,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+527,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+528,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+529,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+530,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+531,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+532,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+533,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+534,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+535,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+536,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                         : 0U)),32);
            tracep->chgIData(oldp+537,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                         : 0U)),32);
            tracep->chgIData(oldp+538,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                         : 0U)),32);
            tracep->chgIData(oldp+539,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                         : 0U)),32);
            tracep->chgIData(oldp+540,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                         : 0U)),32);
            tracep->chgIData(oldp+541,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                         : 0U)),32);
            tracep->chgIData(oldp+542,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                         : 0U)),32);
            tracep->chgIData(oldp+543,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                         : 0U)),32);
            tracep->chgIData(oldp+544,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                         : 0U)),32);
            tracep->chgIData(oldp+545,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                         : 0U)),32);
            tracep->chgIData(oldp+546,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                         : 0U)),32);
            tracep->chgIData(oldp+547,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                         : 0U)),32);
            tracep->chgIData(oldp+548,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                         : 0U)),32);
            tracep->chgIData(oldp+549,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                         : 0U)),32);
            tracep->chgIData(oldp+550,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                         : 0U)),32);
            tracep->chgIData(oldp+551,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                         : 0U)),32);
            tracep->chgIData(oldp+552,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+553,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_220)
                                         : 0U)),32);
            tracep->chgIData(oldp+554,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_221)
                                         : 0U)),32);
            tracep->chgIData(oldp+555,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_222)
                                         : 0U)),32);
            tracep->chgIData(oldp+556,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_223)
                                         : 0U)),32);
            tracep->chgIData(oldp+557,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_224)
                                         : 0U)),32);
            tracep->chgIData(oldp+558,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_225)
                                         : 0U)),32);
            tracep->chgIData(oldp+559,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_226)
                                         : 0U)),32);
            tracep->chgIData(oldp+560,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_227)
                                         : 0U)),32);
            tracep->chgIData(oldp+561,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_228)
                                         : 0U)),32);
            tracep->chgIData(oldp+562,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_229)
                                         : 0U)),32);
            tracep->chgIData(oldp+563,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_230)
                                         : 0U)),32);
            tracep->chgIData(oldp+564,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_231)
                                         : 0U)),32);
            tracep->chgIData(oldp+565,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_232)
                                         : 0U)),32);
            tracep->chgIData(oldp+566,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_233)
                                         : 0U)),32);
            tracep->chgIData(oldp+567,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myCounter__DOT___GEN_234)
                                         : 0U)),32);
            tracep->chgIData(oldp+568,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+569,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+570,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__check)
                                       ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                          | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__i) 
                                             & (3U 
                                                == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__j)))
                                       : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__i) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+571,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+572,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+573,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+574,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+575,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+576,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+577,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+578,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+579,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+580,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+581,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+582,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+583,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+584,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+585,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+586,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+587,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+588,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+589,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+590,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+591,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+592,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+593,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+594,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+595,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+596,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+597,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+598,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+599,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+600,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+601,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+602,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgBit(oldp+603,(((3U >= vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__i) 
                                      & (3U > vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__j))));
            tracep->chgIData(oldp+604,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+605,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+606,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+607,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+608,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+609,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+610,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+611,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+612,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+613,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+614,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+615,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+616,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+617,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+618,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+619,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+620,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+621,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+622,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+623,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+624,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+625,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+626,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+627,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+628,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+629,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+630,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+631,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+632,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+633,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+634,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+635,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+636,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+637,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_3))
                                             : 0U) : 0U)),16);
            tracep->chgBit(oldp+638,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__k) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__j)) 
                                       & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__i)) 
                                      & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+639,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+640,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+641,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+642,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+643,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+644,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+645,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+646,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+647,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+648,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+649,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+650,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+651,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+652,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+653,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+654,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+655,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+656,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+657,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+658,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+659,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+660,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+661,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+662,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+663,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+664,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+665,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+666,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+667,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+668,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+669,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+670,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+671,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+672,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+673,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+674,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+675,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+676,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+677,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+678,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+679,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+680,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+681,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+682,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+683,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+684,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+685,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+686,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+687,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+688,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+689,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+690,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+691,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+692,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                         : 0U)),32);
            tracep->chgBit(oldp+693,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+694,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+695,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+696,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+697,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+698,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+699,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+700,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+701,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+702,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+703,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+704,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+705,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+706,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+707,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+708,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+709,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+710,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+711,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+712,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+713,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+714,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+715,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+716,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+717,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+718,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+719,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+720,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+721,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+722,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgCData(oldp+724,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+725,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+726,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+727,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+728,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+729,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+730,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+731,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+732,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+733,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+734,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+735,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+736,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+737,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+738,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+739,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+740,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+741,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+742,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+743,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+744,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+745,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+746,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+747,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+748,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+749,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+750,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+751,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+752,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+753,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+754,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+755,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgSData(oldp+756,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+757,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+758,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+759,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+760,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+761,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+762,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+763,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+764,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+765,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+766,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+767,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+768,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+769,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+770,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+771,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+772,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+773,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+774,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+775,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+776,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+777,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+778,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+779,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+780,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+781,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+782,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+783,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+784,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+785,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+786,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+787,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+788,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+789,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+790,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+791,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+792,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+793,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+794,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+795,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+796,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+797,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+798,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+799,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+800,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+801,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+802,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+803,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+804,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+805,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+806,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+807,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+808,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+809,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+810,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+811,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+812,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+813,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__c)
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
            tracep->chgBit(oldp+814,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+815,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+816,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+817,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+818,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+819,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+820,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+821,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+822,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+823,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+824,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+825,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+826,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+827,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+828,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+829,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+830,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+831,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+832,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+833,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                         : 0U)),32);
            tracep->chgIData(oldp+834,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                         : 0U)),32);
            tracep->chgIData(oldp+835,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                         : 0U)),32);
            tracep->chgIData(oldp+836,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                         : 0U)),32);
            tracep->chgIData(oldp+837,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                         : 0U)),32);
            tracep->chgIData(oldp+838,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                         : 0U)),32);
            tracep->chgIData(oldp+839,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                         : 0U)),32);
            tracep->chgIData(oldp+840,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                         : 0U)),32);
            tracep->chgIData(oldp+841,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                         : 0U)),32);
            tracep->chgIData(oldp+842,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                         : 0U)),32);
            tracep->chgIData(oldp+843,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                         : 0U)),32);
            tracep->chgIData(oldp+844,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                         : 0U)),32);
            tracep->chgIData(oldp+845,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                         : 0U)),32);
            tracep->chgIData(oldp+846,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                         : 0U)),32);
            tracep->chgIData(oldp+847,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                         : 0U)),32);
            tracep->chgIData(oldp+848,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                         : 0U)),32);
            tracep->chgIData(oldp+849,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+850,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_220)
                                         : 0U)),32);
            tracep->chgIData(oldp+851,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_221)
                                         : 0U)),32);
            tracep->chgIData(oldp+852,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_222)
                                         : 0U)),32);
            tracep->chgIData(oldp+853,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_223)
                                         : 0U)),32);
            tracep->chgIData(oldp+854,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_224)
                                         : 0U)),32);
            tracep->chgIData(oldp+855,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_225)
                                         : 0U)),32);
            tracep->chgIData(oldp+856,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_226)
                                         : 0U)),32);
            tracep->chgIData(oldp+857,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_227)
                                         : 0U)),32);
            tracep->chgIData(oldp+858,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_228)
                                         : 0U)),32);
            tracep->chgIData(oldp+859,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_229)
                                         : 0U)),32);
            tracep->chgIData(oldp+860,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_230)
                                         : 0U)),32);
            tracep->chgIData(oldp+861,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_231)
                                         : 0U)),32);
            tracep->chgIData(oldp+862,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_232)
                                         : 0U)),32);
            tracep->chgIData(oldp+863,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_233)
                                         : 0U)),32);
            tracep->chgIData(oldp+864,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j) 
                                         & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                         ? (0xffffU 
                                            & vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myCounter__DOT___GEN_234)
                                         : 0U)),32);
            tracep->chgIData(oldp+865,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+866,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+867,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__check)
                                       ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                          | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__i) 
                                             & (3U 
                                                == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__j)))
                                       : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__i) 
                                          & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+868,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+869,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+870,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+871,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+872,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+873,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+874,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+875,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+876,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+877,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+878,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+879,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+880,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+881,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+882,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+883,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+884,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+885,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+886,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+887,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+888,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+889,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+890,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+891,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+892,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+893,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+894,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+895,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+896,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+897,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+898,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+899,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgBit(oldp+900,(((3U >= vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__i) 
                                      & (3U > vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__j))));
            tracep->chgIData(oldp+901,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+902,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+903,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+904,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+905,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+906,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+907,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+908,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+909,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+910,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__Distribution__DOT__part3__DOT__check)));
            tracep->chgSData(oldp+911,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_0),16);
            tracep->chgSData(oldp+912,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_1),16);
            tracep->chgSData(oldp+913,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_2),16);
            tracep->chgSData(oldp+914,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat2_3),16);
            tracep->chgSData(oldp+915,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+916,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+917,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+918,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+919,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+920,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+921,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+922,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+923,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+924,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+925,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+926,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+927,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+928,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+929,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+930,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
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
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+931,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_0))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+932,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_1))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+933,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_2))
                                             : 0U) : 0U)),16);
            tracep->chgSData(oldp+934,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid)
                                         ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                             ? (0xffffU 
                                                & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_3))
                                             : 0U) : 0U)),16);
            tracep->chgBit(oldp+935,(((((0U != vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__k) 
                                        & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__j)) 
                                       & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__i)) 
                                      & (2U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jNext))));
            tracep->chgSData(oldp+936,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_220)),16);
            tracep->chgSData(oldp+937,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_221)),16);
            tracep->chgSData(oldp+938,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_222)),16);
            tracep->chgSData(oldp+939,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_223)),16);
            tracep->chgSData(oldp+940,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_224)),16);
            tracep->chgSData(oldp+941,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_225)),16);
            tracep->chgSData(oldp+942,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_226)),16);
            tracep->chgSData(oldp+943,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_227)),16);
            tracep->chgSData(oldp+944,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_228)),16);
            tracep->chgSData(oldp+945,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_229)),16);
            tracep->chgSData(oldp+946,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_230)),16);
            tracep->chgSData(oldp+947,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_231)),16);
            tracep->chgSData(oldp+948,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_232)),16);
            tracep->chgSData(oldp+949,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_233)),16);
            tracep->chgSData(oldp+950,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_234)),16);
            tracep->chgSData(oldp+951,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_235)),16);
            tracep->chgSData(oldp+952,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_0))
                                         : 0U)),16);
            tracep->chgSData(oldp+953,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_1))
                                         : 0U)),16);
            tracep->chgSData(oldp+954,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_2))
                                         : 0U)),16);
            tracep->chgSData(oldp+955,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG)
                                         ? (0xffffU 
                                            & (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_3))
                                         : 0U)),16);
            tracep->chgBit(oldp+956,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid));
            tracep->chgBit(oldp+957,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_start_REG));
            tracep->chgIData(oldp+958,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_220)),32);
            tracep->chgIData(oldp+959,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_221)),32);
            tracep->chgIData(oldp+960,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_222)),32);
            tracep->chgIData(oldp+961,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_223)),32);
            tracep->chgIData(oldp+962,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_224)),32);
            tracep->chgIData(oldp+963,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_225)),32);
            tracep->chgIData(oldp+964,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_226)),32);
            tracep->chgIData(oldp+965,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_227)),32);
            tracep->chgIData(oldp+966,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_228)),32);
            tracep->chgIData(oldp+967,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_229)),32);
            tracep->chgIData(oldp+968,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_230)),32);
            tracep->chgIData(oldp+969,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_231)),32);
            tracep->chgIData(oldp+970,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_232)),32);
            tracep->chgIData(oldp+971,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_233)),32);
            tracep->chgIData(oldp+972,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_234)),32);
            tracep->chgIData(oldp+973,((0xffffU & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_235)),32);
            tracep->chgIData(oldp+974,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+975,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+976,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+977,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+978,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+979,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+980,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+981,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+982,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+983,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+984,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+985,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3))
                                         : 0U)),32);
            tracep->chgIData(oldp+986,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_0)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0))
                                         : 0U)),32);
            tracep->chgIData(oldp+987,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_1)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1))
                                         : 0U)),32);
            tracep->chgIData(oldp+988,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_2)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+989,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter_io_valid)
                                         ? (((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                             & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                             ? ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_3)
                                             : ((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e)
                                                 ? 0U
                                                 : vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3))
                                         : 0U)),32);
            tracep->chgBit(oldp+990,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution_io_ProcessValid));
            tracep->chgSData(oldp+991,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+992,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+993,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+994,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+995,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+996,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+997,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+998,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+999,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1000,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1001,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1002,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1003,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1004,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1005,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1006,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStationary_matrix_3_3),16);
            tracep->chgSData(oldp+1007,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_0),16);
            tracep->chgSData(oldp+1008,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_1),16);
            tracep->chgSData(oldp+1009,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_2),16);
            tracep->chgSData(oldp+1010,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__prevStreaming_matrix_3),16);
            tracep->chgBit(oldp+1011,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__matricesAreEqual));
            tracep->chgBit(oldp+1012,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jValid));
            tracep->chgIData(oldp+1013,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__i),32);
            tracep->chgIData(oldp+1014,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__j),32);
            tracep->chgIData(oldp+1015,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__k),32);
            tracep->chgIData(oldp+1016,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__counter),32);
            tracep->chgCData(oldp+1017,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_0),4);
            tracep->chgCData(oldp+1018,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_1),4);
            tracep->chgCData(oldp+1019,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_2),4);
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_3),4);
            tracep->chgCData(oldp+1021,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_4),4);
            tracep->chgCData(oldp+1022,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_5),4);
            tracep->chgCData(oldp+1023,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_6),4);
            tracep->chgCData(oldp+1024,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_7),4);
            tracep->chgCData(oldp+1025,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_8),4);
            tracep->chgCData(oldp+1026,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_9),4);
            tracep->chgCData(oldp+1027,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_10),4);
            tracep->chgCData(oldp+1028,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_11),4);
            tracep->chgCData(oldp+1029,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_12),4);
            tracep->chgCData(oldp+1030,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_13),4);
            tracep->chgCData(oldp+1031,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_14),4);
            tracep->chgCData(oldp+1032,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__mux_15),4);
            tracep->chgSData(oldp+1033,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_0),16);
            tracep->chgSData(oldp+1034,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_1),16);
            tracep->chgSData(oldp+1035,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_2),16);
            tracep->chgSData(oldp+1036,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_3),16);
            tracep->chgSData(oldp+1037,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_4),16);
            tracep->chgSData(oldp+1038,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_5),16);
            tracep->chgSData(oldp+1039,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_6),16);
            tracep->chgSData(oldp+1040,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_7),16);
            tracep->chgSData(oldp+1041,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_8),16);
            tracep->chgSData(oldp+1042,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_9),16);
            tracep->chgSData(oldp+1043,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_10),16);
            tracep->chgSData(oldp+1044,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_11),16);
            tracep->chgSData(oldp+1045,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_12),16);
            tracep->chgSData(oldp+1046,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_13),16);
            tracep->chgSData(oldp+1047,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_14),16);
            tracep->chgSData(oldp+1048,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__src_15),16);
            tracep->chgSData(oldp+1049,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_0),16);
            tracep->chgSData(oldp+1050,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_1),16);
            tracep->chgSData(oldp+1051,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_2),16);
            tracep->chgSData(oldp+1052,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_3),16);
            tracep->chgSData(oldp+1053,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_4),16);
            tracep->chgSData(oldp+1054,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_5),16);
            tracep->chgSData(oldp+1055,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_6),16);
            tracep->chgSData(oldp+1056,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_7),16);
            tracep->chgSData(oldp+1057,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_8),16);
            tracep->chgSData(oldp+1058,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_9),16);
            tracep->chgSData(oldp+1059,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_10),16);
            tracep->chgSData(oldp+1060,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_11),16);
            tracep->chgSData(oldp+1061,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_12),16);
            tracep->chgSData(oldp+1062,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_13),16);
            tracep->chgSData(oldp+1063,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_14),16);
            tracep->chgSData(oldp+1064,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__dest_15),16);
            tracep->chgIData(oldp+1065,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes__DOT__jNext),32);
            tracep->chgSData(oldp+1066,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_0),16);
            tracep->chgSData(oldp+1067,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_1),16);
            tracep->chgSData(oldp+1068,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_2),16);
            tracep->chgSData(oldp+1069,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_0_3),16);
            tracep->chgSData(oldp+1070,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_0),16);
            tracep->chgSData(oldp+1071,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_1),16);
            tracep->chgSData(oldp+1072,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_2),16);
            tracep->chgSData(oldp+1073,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_1_3),16);
            tracep->chgSData(oldp+1074,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_0),16);
            tracep->chgSData(oldp+1075,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_1),16);
            tracep->chgSData(oldp+1076,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_2),16);
            tracep->chgSData(oldp+1077,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_2_3),16);
            tracep->chgSData(oldp+1078,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_0),16);
            tracep->chgSData(oldp+1079,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_1),16);
            tracep->chgSData(oldp+1080,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_2),16);
            tracep->chgSData(oldp+1081,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__prevStationary_matrix_3_3),16);
            tracep->chgBit(oldp+1082,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__matricesAreEqual));
            tracep->chgSData(oldp+1083,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_0),16);
            tracep->chgSData(oldp+1084,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_1),16);
            tracep->chgSData(oldp+1085,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_2),16);
            tracep->chgSData(oldp+1086,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_0_3),16);
            tracep->chgSData(oldp+1087,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_0),16);
            tracep->chgSData(oldp+1088,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_1),16);
            tracep->chgSData(oldp+1089,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_2),16);
            tracep->chgSData(oldp+1090,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_1_3),16);
            tracep->chgSData(oldp+1091,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_0),16);
            tracep->chgSData(oldp+1092,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_1),16);
            tracep->chgSData(oldp+1093,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_2),16);
            tracep->chgSData(oldp+1094,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_2_3),16);
            tracep->chgSData(oldp+1095,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_0),16);
            tracep->chgSData(oldp+1096,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_1),16);
            tracep->chgSData(oldp+1097,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_2),16);
            tracep->chgSData(oldp+1098,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs1_3_3),16);
            tracep->chgSData(oldp+1099,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_0),16);
            tracep->chgSData(oldp+1100,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_1),16);
            tracep->chgSData(oldp+1101,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_2),16);
            tracep->chgSData(oldp+1102,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counterRegs2_3),16);
            tracep->chgIData(oldp+1103,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__i),32);
            tracep->chgIData(oldp+1104,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__j),32);
            tracep->chgBit(oldp+1105,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__jValid));
            tracep->chgIData(oldp+1106,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__k),32);
            tracep->chgIData(oldp+1107,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counter1),32);
            tracep->chgIData(oldp+1108,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT__counter2),32);
            tracep->chgIData(oldp+1109,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_IDex),32);
            tracep->chgIData(oldp+1110,(((IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__c)
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
            tracep->chgBit(oldp+1111,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__c));
            tracep->chgIData(oldp+1112,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0),32);
            tracep->chgIData(oldp+1113,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1),32);
            tracep->chgIData(oldp+1114,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2),32);
            tracep->chgIData(oldp+1115,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3),32);
            tracep->chgIData(oldp+1116,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0),32);
            tracep->chgIData(oldp+1117,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1),32);
            tracep->chgIData(oldp+1118,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2),32);
            tracep->chgIData(oldp+1119,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3),32);
            tracep->chgIData(oldp+1120,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0),32);
            tracep->chgIData(oldp+1121,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1),32);
            tracep->chgIData(oldp+1122,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2),32);
            tracep->chgIData(oldp+1123,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3),32);
            tracep->chgIData(oldp+1124,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0),32);
            tracep->chgIData(oldp+1125,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1),32);
            tracep->chgIData(oldp+1126,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2),32);
            tracep->chgIData(oldp+1127,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3),32);
            tracep->chgBit(oldp+1128,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid));
            tracep->chgBit(oldp+1129,((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j)));
            tracep->chgIData(oldp+1130,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1131,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1132,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1133,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_0_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1134,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1135,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1136,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1137,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_1_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1138,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1139,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1140,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1141,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_2_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1142,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_0
                                          : 0U)),32);
            tracep->chgIData(oldp+1143,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_1
                                          : 0U)),32);
            tracep->chgIData(oldp+1144,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_2
                                          : 0U)),32);
            tracep->chgIData(oldp+1145,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__b_3_3
                                          : 0U)),32);
            tracep->chgIData(oldp+1146,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_IDex),32);
            tracep->chgIData(oldp+1147,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_220)
                                          : 0U)),32);
            tracep->chgIData(oldp+1148,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_221)
                                          : 0U)),32);
            tracep->chgIData(oldp+1149,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_222)
                                          : 0U)),32);
            tracep->chgIData(oldp+1150,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_223)
                                          : 0U)),32);
            tracep->chgIData(oldp+1151,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_224)
                                          : 0U)),32);
            tracep->chgIData(oldp+1152,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_225)
                                          : 0U)),32);
            tracep->chgIData(oldp+1153,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_226)
                                          : 0U)),32);
            tracep->chgIData(oldp+1154,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_227)
                                          : 0U)),32);
            tracep->chgIData(oldp+1155,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_228)
                                          : 0U)),32);
            tracep->chgIData(oldp+1156,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_229)
                                          : 0U)),32);
            tracep->chgIData(oldp+1157,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_230)
                                          : 0U)),32);
            tracep->chgIData(oldp+1158,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_231)
                                          : 0U)),32);
            tracep->chgIData(oldp+1159,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_232)
                                          : 0U)),32);
            tracep->chgIData(oldp+1160,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_233)
                                          : 0U)),32);
            tracep->chgIData(oldp+1161,((((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j) 
                                          & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))
                                          ? (0xffffU 
                                             & vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myCounter__DOT___GEN_234)
                                          : 0U)),32);
            tracep->chgIData(oldp+1162,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_mat_3_3),32);
            tracep->chgBit(oldp+1163,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_i_valid));
            tracep->chgBit(oldp+1164,(((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__check)
                                        ? ((4U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT___GEN_91) 
                                           | ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__i) 
                                              & (3U 
                                                 == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__j)))
                                        : ((3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__i) 
                                           & (3U == vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__j)))));
            tracep->chgIData(oldp+1165,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_0),32);
            tracep->chgIData(oldp+1166,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_1),32);
            tracep->chgIData(oldp+1167,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_2),32);
            tracep->chgIData(oldp+1168,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_0_3),32);
            tracep->chgIData(oldp+1169,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_0),32);
            tracep->chgIData(oldp+1170,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_1),32);
            tracep->chgIData(oldp+1171,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_2),32);
            tracep->chgIData(oldp+1172,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_1_3),32);
            tracep->chgIData(oldp+1173,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_0),32);
            tracep->chgIData(oldp+1174,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_1),32);
            tracep->chgIData(oldp+1175,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_2),32);
            tracep->chgIData(oldp+1176,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_2_3),32);
            tracep->chgIData(oldp+1177,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_0),32);
            tracep->chgIData(oldp+1178,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_1),32);
            tracep->chgIData(oldp+1179,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_2),32);
            tracep->chgIData(oldp+1180,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__b_3_3),32);
            tracep->chgBit(oldp+1181,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_merge));
            tracep->chgIData(oldp+1182,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__i),32);
            tracep->chgIData(oldp+1183,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__j),32);
            tracep->chgIData(oldp+1184,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__count),32);
            tracep->chgIData(oldp+1185,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_0),32);
            tracep->chgIData(oldp+1186,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_1),32);
            tracep->chgIData(oldp+1187,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_2),32);
            tracep->chgIData(oldp+1188,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Idex_3),32);
            tracep->chgIData(oldp+1189,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_0),32);
            tracep->chgIData(oldp+1190,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_1),32);
            tracep->chgIData(oldp+1191,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_2),32);
            tracep->chgIData(oldp+1192,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__Jdex_3),32);
            tracep->chgIData(oldp+1193,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__iterationNo),32);
            tracep->chgBit(oldp+1194,((1U & (~ (IData)(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2_io_Ovalid)))));
            tracep->chgBit(oldp+1195,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__e));
            tracep->chgBit(oldp+1196,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3_io_merge_REG));
            tracep->chgBit(oldp+1197,(((3U >= vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__i) 
                                       & (3U > vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__j))));
            tracep->chgIData(oldp+1198,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__j),32);
            tracep->chgIData(oldp+1199,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__a),32);
            tracep->chgBit(oldp+1200,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG));
            tracep->chgIData(oldp+1201,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__check),32);
            tracep->chgIData(oldp+1202,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__i),32);
            tracep->chgIData(oldp+1203,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__j),32);
            tracep->chgIData(oldp+1204,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__k),32);
            tracep->chgIData(oldp+1205,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__l),32);
            tracep->chgIData(oldp+1206,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__delay),32);
            tracep->chgBit(oldp+1207,((1U <= vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__Distribution__DOT__part3__DOT__check)));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+1208,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_0),16);
            tracep->chgSData(oldp+1209,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_1),16);
            tracep->chgSData(oldp+1210,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_2),16);
            tracep->chgSData(oldp+1211,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_3),16);
            tracep->chgSData(oldp+1212,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_0),16);
            tracep->chgSData(oldp+1213,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_1),16);
            tracep->chgSData(oldp+1214,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_2),16);
            tracep->chgSData(oldp+1215,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_3),16);
            tracep->chgSData(oldp+1216,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_0),16);
            tracep->chgSData(oldp+1217,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_1),16);
            tracep->chgSData(oldp+1218,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_2),16);
            tracep->chgSData(oldp+1219,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_3),16);
            tracep->chgSData(oldp+1220,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_0),16);
            tracep->chgSData(oldp+1221,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_1),16);
            tracep->chgSData(oldp+1222,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_2),16);
            tracep->chgSData(oldp+1223,(vlTOPp->FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3),16);
            tracep->chgSData(oldp+1224,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_0),16);
            tracep->chgSData(oldp+1225,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_1),16);
            tracep->chgSData(oldp+1226,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_2),16);
            tracep->chgSData(oldp+1227,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_3),16);
            tracep->chgSData(oldp+1228,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_0),16);
            tracep->chgSData(oldp+1229,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_1),16);
            tracep->chgSData(oldp+1230,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_2),16);
            tracep->chgSData(oldp+1231,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_3),16);
            tracep->chgSData(oldp+1232,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_0),16);
            tracep->chgSData(oldp+1233,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_1),16);
            tracep->chgSData(oldp+1234,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_2),16);
            tracep->chgSData(oldp+1235,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_3),16);
            tracep->chgSData(oldp+1236,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_0),16);
            tracep->chgSData(oldp+1237,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_1),16);
            tracep->chgSData(oldp+1238,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_2),16);
            tracep->chgSData(oldp+1239,(vlTOPp->FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3),16);
            tracep->chgSData(oldp+1240,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_0),16);
            tracep->chgSData(oldp+1241,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_1),16);
            tracep->chgSData(oldp+1242,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_2),16);
            tracep->chgSData(oldp+1243,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_3),16);
            tracep->chgSData(oldp+1244,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_0),16);
            tracep->chgSData(oldp+1245,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_1),16);
            tracep->chgSData(oldp+1246,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_2),16);
            tracep->chgSData(oldp+1247,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_3),16);
            tracep->chgSData(oldp+1248,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_0),16);
            tracep->chgSData(oldp+1249,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_1),16);
            tracep->chgSData(oldp+1250,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_2),16);
            tracep->chgSData(oldp+1251,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_3),16);
            tracep->chgSData(oldp+1252,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_0),16);
            tracep->chgSData(oldp+1253,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_1),16);
            tracep->chgSData(oldp+1254,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_2),16);
            tracep->chgSData(oldp+1255,(vlTOPp->FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3),16);
            tracep->chgSData(oldp+1256,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_0),16);
            tracep->chgSData(oldp+1257,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_1),16);
            tracep->chgSData(oldp+1258,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_2),16);
            tracep->chgSData(oldp+1259,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_3),16);
            tracep->chgSData(oldp+1260,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_0),16);
            tracep->chgSData(oldp+1261,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_1),16);
            tracep->chgSData(oldp+1262,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_2),16);
            tracep->chgSData(oldp+1263,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_3),16);
            tracep->chgSData(oldp+1264,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_0),16);
            tracep->chgSData(oldp+1265,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_1),16);
            tracep->chgSData(oldp+1266,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_2),16);
            tracep->chgSData(oldp+1267,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_3),16);
            tracep->chgSData(oldp+1268,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_0),16);
            tracep->chgSData(oldp+1269,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_1),16);
            tracep->chgSData(oldp+1270,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_2),16);
            tracep->chgSData(oldp+1271,(vlTOPp->FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3),16);
            tracep->chgSData(oldp+1272,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+1273,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+1274,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_0_2),16);
            tracep->chgSData(oldp+1275,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_0_3),16);
            tracep->chgSData(oldp+1276,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+1277,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_1_1),16);
            tracep->chgSData(oldp+1278,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_1_2),16);
            tracep->chgSData(oldp+1279,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_1_3),16);
            tracep->chgSData(oldp+1280,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_2_0),16);
            tracep->chgSData(oldp+1281,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_2_1),16);
            tracep->chgSData(oldp+1282,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_2_2),16);
            tracep->chgSData(oldp+1283,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_2_3),16);
            tracep->chgSData(oldp+1284,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_3_0),16);
            tracep->chgSData(oldp+1285,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_3_1),16);
            tracep->chgSData(oldp+1286,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_3_2),16);
            tracep->chgSData(oldp+1287,(vlSymsp->TOP__FlexDPU__DOT__PathFinder.__PVT__myMuxes_io_mat1_3_3),16);
            tracep->chgSData(oldp+1288,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+1289,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+1290,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_0_2),16);
            tracep->chgSData(oldp+1291,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_0_3),16);
            tracep->chgSData(oldp+1292,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+1293,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_1_1),16);
            tracep->chgSData(oldp+1294,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_1_2),16);
            tracep->chgSData(oldp+1295,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_1_3),16);
            tracep->chgSData(oldp+1296,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_2_0),16);
            tracep->chgSData(oldp+1297,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_2_1),16);
            tracep->chgSData(oldp+1298,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_2_2),16);
            tracep->chgSData(oldp+1299,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_2_3),16);
            tracep->chgSData(oldp+1300,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_3_0),16);
            tracep->chgSData(oldp+1301,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_3_1),16);
            tracep->chgSData(oldp+1302,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_3_2),16);
            tracep->chgSData(oldp+1303,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_1.__PVT__myMuxes_io_mat1_3_3),16);
            tracep->chgSData(oldp+1304,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+1305,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+1306,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_0_2),16);
            tracep->chgSData(oldp+1307,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_0_3),16);
            tracep->chgSData(oldp+1308,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+1309,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_1_1),16);
            tracep->chgSData(oldp+1310,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_1_2),16);
            tracep->chgSData(oldp+1311,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_1_3),16);
            tracep->chgSData(oldp+1312,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_2_0),16);
            tracep->chgSData(oldp+1313,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_2_1),16);
            tracep->chgSData(oldp+1314,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_2_2),16);
            tracep->chgSData(oldp+1315,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_2_3),16);
            tracep->chgSData(oldp+1316,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_3_0),16);
            tracep->chgSData(oldp+1317,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_3_1),16);
            tracep->chgSData(oldp+1318,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_3_2),16);
            tracep->chgSData(oldp+1319,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_2.__PVT__myMuxes_io_mat1_3_3),16);
            tracep->chgSData(oldp+1320,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_0_0),16);
            tracep->chgSData(oldp+1321,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_0_1),16);
            tracep->chgSData(oldp+1322,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_0_2),16);
            tracep->chgSData(oldp+1323,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_0_3),16);
            tracep->chgSData(oldp+1324,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_1_0),16);
            tracep->chgSData(oldp+1325,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_1_1),16);
            tracep->chgSData(oldp+1326,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_1_2),16);
            tracep->chgSData(oldp+1327,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_1_3),16);
            tracep->chgSData(oldp+1328,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_2_0),16);
            tracep->chgSData(oldp+1329,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_2_1),16);
            tracep->chgSData(oldp+1330,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_2_2),16);
            tracep->chgSData(oldp+1331,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_2_3),16);
            tracep->chgSData(oldp+1332,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_3_0),16);
            tracep->chgSData(oldp+1333,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_3_1),16);
            tracep->chgSData(oldp+1334,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_3_2),16);
            tracep->chgSData(oldp+1335,(vlSymsp->TOP__FlexDPU__DOT__PathFinder_3.__PVT__myMuxes_io_mat1_3_3),16);
        }
        tracep->chgBit(oldp+1336,(vlTOPp->clock));
        tracep->chgBit(oldp+1337,(vlTOPp->reset));
        tracep->chgIData(oldp+1338,(vlTOPp->io_CalFDE),32);
        tracep->chgCData(oldp+1339,(vlTOPp->io_i_vn_0),5);
        tracep->chgCData(oldp+1340,(vlTOPp->io_i_vn_1),5);
        tracep->chgCData(oldp+1341,(vlTOPp->io_i_vn_2),5);
        tracep->chgCData(oldp+1342,(vlTOPp->io_i_vn_3),5);
        tracep->chgBit(oldp+1343,(vlTOPp->io_i_stationary));
        tracep->chgBit(oldp+1344,(vlTOPp->io_i_data_valid));
        tracep->chgSData(oldp+1345,(vlTOPp->io_Stationary_matrix_0_0),16);
        tracep->chgSData(oldp+1346,(vlTOPp->io_Stationary_matrix_0_1),16);
        tracep->chgSData(oldp+1347,(vlTOPp->io_Stationary_matrix_0_2),16);
        tracep->chgSData(oldp+1348,(vlTOPp->io_Stationary_matrix_0_3),16);
        tracep->chgSData(oldp+1349,(vlTOPp->io_Stationary_matrix_1_0),16);
        tracep->chgSData(oldp+1350,(vlTOPp->io_Stationary_matrix_1_1),16);
        tracep->chgSData(oldp+1351,(vlTOPp->io_Stationary_matrix_1_2),16);
        tracep->chgSData(oldp+1352,(vlTOPp->io_Stationary_matrix_1_3),16);
        tracep->chgSData(oldp+1353,(vlTOPp->io_Stationary_matrix_2_0),16);
        tracep->chgSData(oldp+1354,(vlTOPp->io_Stationary_matrix_2_1),16);
        tracep->chgSData(oldp+1355,(vlTOPp->io_Stationary_matrix_2_2),16);
        tracep->chgSData(oldp+1356,(vlTOPp->io_Stationary_matrix_2_3),16);
        tracep->chgSData(oldp+1357,(vlTOPp->io_Stationary_matrix_3_0),16);
        tracep->chgSData(oldp+1358,(vlTOPp->io_Stationary_matrix_3_1),16);
        tracep->chgSData(oldp+1359,(vlTOPp->io_Stationary_matrix_3_2),16);
        tracep->chgSData(oldp+1360,(vlTOPp->io_Stationary_matrix_3_3),16);
        tracep->chgSData(oldp+1361,(vlTOPp->io_Streaming_matrix_0_0),16);
        tracep->chgSData(oldp+1362,(vlTOPp->io_Streaming_matrix_0_1),16);
        tracep->chgSData(oldp+1363,(vlTOPp->io_Streaming_matrix_0_2),16);
        tracep->chgSData(oldp+1364,(vlTOPp->io_Streaming_matrix_0_3),16);
        tracep->chgSData(oldp+1365,(vlTOPp->io_Streaming_matrix_1_0),16);
        tracep->chgSData(oldp+1366,(vlTOPp->io_Streaming_matrix_1_1),16);
        tracep->chgSData(oldp+1367,(vlTOPp->io_Streaming_matrix_1_2),16);
        tracep->chgSData(oldp+1368,(vlTOPp->io_Streaming_matrix_1_3),16);
        tracep->chgSData(oldp+1369,(vlTOPp->io_Streaming_matrix_2_0),16);
        tracep->chgSData(oldp+1370,(vlTOPp->io_Streaming_matrix_2_1),16);
        tracep->chgSData(oldp+1371,(vlTOPp->io_Streaming_matrix_2_2),16);
        tracep->chgSData(oldp+1372,(vlTOPp->io_Streaming_matrix_2_3),16);
        tracep->chgSData(oldp+1373,(vlTOPp->io_Streaming_matrix_3_0),16);
        tracep->chgSData(oldp+1374,(vlTOPp->io_Streaming_matrix_3_1),16);
        tracep->chgSData(oldp+1375,(vlTOPp->io_Streaming_matrix_3_2),16);
        tracep->chgSData(oldp+1376,(vlTOPp->io_Streaming_matrix_3_3),16);
        tracep->chgIData(oldp+1377,((vlTOPp->io_CalFDE 
                                     >> 1U)),32);
        tracep->chgCData(oldp+1378,((1U & vlTOPp->io_CalFDE)),2);
    }
}

void VFlexDPU::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFlexDPU__Syms* __restrict vlSymsp = static_cast<VFlexDPU__Syms*>(userp);
    VFlexDPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}

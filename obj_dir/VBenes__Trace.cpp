// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBenes__Syms.h"


void VBenes::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBenes__Syms* __restrict vlSymsp = static_cast<VBenes__Syms*>(userp);
    VBenes* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBenes::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBenes__Syms* __restrict vlSymsp = static_cast<VBenes__Syms*>(userp);
    VBenes* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->Benes__DOT__r_data_bus_ff_0),16);
            tracep->chgSData(oldp+1,(vlTOPp->Benes__DOT__r_data_bus_ff_1),16);
            tracep->chgSData(oldp+2,(vlTOPp->Benes__DOT__r_data_bus_ff_2),16);
            tracep->chgSData(oldp+3,(vlTOPp->Benes__DOT__r_data_bus_ff_3),16);
            tracep->chgSData(oldp+4,(vlTOPp->Benes__DOT__r_data_bus_ff_4),16);
            tracep->chgSData(oldp+5,(vlTOPp->Benes__DOT__r_data_bus_ff_5),16);
            tracep->chgSData(oldp+6,(vlTOPp->Benes__DOT__r_data_bus_ff_6),16);
            tracep->chgSData(oldp+7,(vlTOPp->Benes__DOT__r_data_bus_ff_7),16);
            tracep->chgSData(oldp+8,(vlTOPp->Benes__DOT__r_data_bus_ff_8),16);
            tracep->chgSData(oldp+9,(vlTOPp->Benes__DOT__r_data_bus_ff_9),16);
            tracep->chgSData(oldp+10,(vlTOPp->Benes__DOT__r_data_bus_ff_10),16);
            tracep->chgSData(oldp+11,(vlTOPp->Benes__DOT__r_data_bus_ff_11),16);
            tracep->chgSData(oldp+12,(vlTOPp->Benes__DOT__r_data_bus_ff_12),16);
            tracep->chgSData(oldp+13,(vlTOPp->Benes__DOT__r_data_bus_ff_13),16);
            tracep->chgSData(oldp+14,(vlTOPp->Benes__DOT__r_data_bus_ff_14),16);
            tracep->chgSData(oldp+15,(vlTOPp->Benes__DOT__r_data_bus_ff_15),16);
            tracep->chgSData(oldp+16,(vlTOPp->Benes__DOT__r_data_bus_ff_16),16);
            tracep->chgSData(oldp+17,(vlTOPp->Benes__DOT__r_data_bus_ff_17),16);
            tracep->chgSData(oldp+18,(vlTOPp->Benes__DOT__r_data_bus_ff_18),16);
            tracep->chgSData(oldp+19,(vlTOPp->Benes__DOT__r_data_bus_ff_19),16);
            tracep->chgSData(oldp+20,(vlTOPp->Benes__DOT__r_data_bus_ff_20),16);
            tracep->chgSData(oldp+21,(vlTOPp->Benes__DOT__r_data_bus_ff_21),16);
            tracep->chgSData(oldp+22,(vlTOPp->Benes__DOT__r_data_bus_ff_22),16);
            tracep->chgSData(oldp+23,(vlTOPp->Benes__DOT__r_data_bus_ff_23),16);
            tracep->chgSData(oldp+24,(vlTOPp->Benes__DOT__r_data_bus_ff_24),16);
            tracep->chgSData(oldp+25,(vlTOPp->Benes__DOT__r_data_bus_ff_25),16);
            tracep->chgSData(oldp+26,(vlTOPp->Benes__DOT__r_data_bus_ff_26),16);
            tracep->chgSData(oldp+27,(vlTOPp->Benes__DOT__r_data_bus_ff_27),16);
            tracep->chgSData(oldp+28,(vlTOPp->Benes__DOT__r_data_bus_ff_28),16);
            tracep->chgSData(oldp+29,(vlTOPp->Benes__DOT__r_data_bus_ff_29),16);
            tracep->chgSData(oldp+30,(vlTOPp->Benes__DOT__r_data_bus_ff_30),16);
            tracep->chgSData(oldp+31,(vlTOPp->Benes__DOT__r_data_bus_ff_31),16);
            tracep->chgSData(oldp+32,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_576)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_35)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_16)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+33,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_16)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+34,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_35)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+35,(vlTOPp->Benes__DOT__r_mux_bus_ff_576));
            tracep->chgSData(oldp+36,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_577)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_17)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_34)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+37,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_34)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+38,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_17)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+39,(vlTOPp->Benes__DOT__r_mux_bus_ff_577));
            tracep->chgSData(oldp+40,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_578)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_71)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_52)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+41,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_52)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+42,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_71)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+43,(vlTOPp->Benes__DOT__r_mux_bus_ff_578));
            tracep->chgSData(oldp+44,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_579)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_53)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_70)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+45,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_70)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+46,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_53)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+47,(vlTOPp->Benes__DOT__r_mux_bus_ff_579));
            tracep->chgSData(oldp+48,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_580)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_107)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_88)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+49,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_88)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+50,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_107)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+51,(vlTOPp->Benes__DOT__r_mux_bus_ff_580));
            tracep->chgSData(oldp+52,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_581)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_89)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_106)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+53,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_106)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+54,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_89)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+55,(vlTOPp->Benes__DOT__r_mux_bus_ff_581));
            tracep->chgSData(oldp+56,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_582)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_143)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_124)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+57,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_124)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+58,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_143)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+59,(vlTOPp->Benes__DOT__r_mux_bus_ff_582));
            tracep->chgSData(oldp+60,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_583)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_125)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_142)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+61,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_142)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+62,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_125)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+63,(vlTOPp->Benes__DOT__r_mux_bus_ff_583));
            tracep->chgSData(oldp+64,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_584)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_179)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_160)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+65,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_160)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+66,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_179)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+67,(vlTOPp->Benes__DOT__r_mux_bus_ff_584));
            tracep->chgSData(oldp+68,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_585)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_161)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_178)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+69,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_178)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+70,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_161)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+71,(vlTOPp->Benes__DOT__r_mux_bus_ff_585));
            tracep->chgSData(oldp+72,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_586)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_215)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_196)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+73,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_196)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+74,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_215)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+75,(vlTOPp->Benes__DOT__r_mux_bus_ff_586));
            tracep->chgSData(oldp+76,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_587)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_197)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_214)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+77,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_214)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+78,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_197)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+79,(vlTOPp->Benes__DOT__r_mux_bus_ff_587));
            tracep->chgSData(oldp+80,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_588)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_251)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_232)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+81,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_232)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+82,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_251)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+83,(vlTOPp->Benes__DOT__r_mux_bus_ff_588));
            tracep->chgSData(oldp+84,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_589)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_233)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_250)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+85,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_250)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+86,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_233)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+87,(vlTOPp->Benes__DOT__r_mux_bus_ff_589));
            tracep->chgSData(oldp+88,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_590)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_287)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_268)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+89,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_268)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+90,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_287)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+91,(vlTOPp->Benes__DOT__r_mux_bus_ff_590));
            tracep->chgSData(oldp+92,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_591)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_269)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_286)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+93,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_286)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+94,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_269)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+95,(vlTOPp->Benes__DOT__r_mux_bus_ff_591));
            tracep->chgSData(oldp+96,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_592)
                                        ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_323)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux0_io_o))
                                        : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_304)
                                            ? (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux1_io_o)
                                            : (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+97,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_304)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+98,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_323)
                                        ? (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux1_io_o)
                                        : (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+99,(vlTOPp->Benes__DOT__r_mux_bus_ff_592));
            tracep->chgSData(oldp+100,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_593)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_305)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_322)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+101,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_322)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+102,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_305)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+103,(vlTOPp->Benes__DOT__r_mux_bus_ff_593));
            tracep->chgSData(oldp+104,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_594)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_359)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_340)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+105,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_340)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+106,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_359)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+107,(vlTOPp->Benes__DOT__r_mux_bus_ff_594));
            tracep->chgSData(oldp+108,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_595)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_341)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_358)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+109,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_358)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+110,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_341)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+111,(vlTOPp->Benes__DOT__r_mux_bus_ff_595));
            tracep->chgSData(oldp+112,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_596)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_395)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_376)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+113,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_376)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+114,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_395)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+115,(vlTOPp->Benes__DOT__r_mux_bus_ff_596));
            tracep->chgSData(oldp+116,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_597)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_377)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_394)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+117,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_394)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+118,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_377)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+119,(vlTOPp->Benes__DOT__r_mux_bus_ff_597));
            tracep->chgSData(oldp+120,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_598)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_431)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_412)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+121,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_412)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+122,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_431)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+123,(vlTOPp->Benes__DOT__r_mux_bus_ff_598));
            tracep->chgSData(oldp+124,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_599)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_413)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_430)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+125,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_430)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+126,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_413)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+127,(vlTOPp->Benes__DOT__r_mux_bus_ff_599));
            tracep->chgSData(oldp+128,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_600)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_467)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_448)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+129,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_448)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+130,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_467)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+131,(vlTOPp->Benes__DOT__r_mux_bus_ff_600));
            tracep->chgSData(oldp+132,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_601)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_449)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_466)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+133,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_466)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+134,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_449)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+135,(vlTOPp->Benes__DOT__r_mux_bus_ff_601));
            tracep->chgSData(oldp+136,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_602)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_503)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_484)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+137,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_484)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+138,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_503)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+139,(vlTOPp->Benes__DOT__r_mux_bus_ff_602));
            tracep->chgSData(oldp+140,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_603)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_485)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_502)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+141,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_502)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+142,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_485)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+143,(vlTOPp->Benes__DOT__r_mux_bus_ff_603));
            tracep->chgSData(oldp+144,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_604)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_539)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_520)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+145,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_520)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+146,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_539)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+147,(vlTOPp->Benes__DOT__r_mux_bus_ff_604));
            tracep->chgSData(oldp+148,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_605)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_521)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_538)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+149,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_538)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+150,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_521)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+151,(vlTOPp->Benes__DOT__r_mux_bus_ff_605));
            tracep->chgSData(oldp+152,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_606)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_575)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_556)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+153,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_556)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+154,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_575)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+155,(vlTOPp->Benes__DOT__r_mux_bus_ff_606));
            tracep->chgSData(oldp+156,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_607)
                                         ? ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_557)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux0_io_o))
                                         : ((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_574)
                                             ? (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux1_io_o)
                                             : (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux0_io_o)))),16);
            tracep->chgSData(oldp+157,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_574)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux0_io_o))),16);
            tracep->chgSData(oldp+158,(((IData)(vlTOPp->Benes__DOT__r_mux_bus_ff_557)
                                         ? (IData)(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux1_io_o)
                                         : (IData)(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux0_io_o))),16);
            tracep->chgBit(oldp+159,(vlTOPp->Benes__DOT__r_mux_bus_ff_607));
            tracep->chgSData(oldp+160,(vlTOPp->Benes__DOT__imm_switch__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+161,(vlTOPp->Benes__DOT__imm_switch__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+162,(vlTOPp->Benes__DOT__r_mux_bus_ff_0));
            tracep->chgBit(oldp+163,(vlTOPp->Benes__DOT__r_mux_bus_ff_1));
            tracep->chgSData(oldp+164,(vlTOPp->Benes__DOT__imm_switch_1__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+165,(vlTOPp->Benes__DOT__imm_switch_1__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+166,(vlTOPp->Benes__DOT__imm_switch_18__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+167,(vlTOPp->Benes__DOT__r_mux_bus_ff_2));
            tracep->chgBit(oldp+168,(vlTOPp->Benes__DOT__r_mux_bus_ff_3));
            tracep->chgSData(oldp+169,(vlTOPp->Benes__DOT__imm_switch_2__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+170,(vlTOPp->Benes__DOT__imm_switch_2__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+171,(vlTOPp->Benes__DOT__imm_switch_37__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+172,(vlTOPp->Benes__DOT__r_mux_bus_ff_4));
            tracep->chgBit(oldp+173,(vlTOPp->Benes__DOT__r_mux_bus_ff_5));
            tracep->chgSData(oldp+174,(vlTOPp->Benes__DOT__imm_switch_3__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+175,(vlTOPp->Benes__DOT__imm_switch_3__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+176,(vlTOPp->Benes__DOT__imm_switch_74__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+177,(vlTOPp->Benes__DOT__r_mux_bus_ff_6));
            tracep->chgBit(oldp+178,(vlTOPp->Benes__DOT__r_mux_bus_ff_7));
            tracep->chgSData(oldp+179,(vlTOPp->Benes__DOT__imm_switch_4__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+180,(vlTOPp->Benes__DOT__imm_switch_4__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+181,(vlTOPp->Benes__DOT__imm_switch_147__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+182,(vlTOPp->Benes__DOT__r_mux_bus_ff_8));
            tracep->chgBit(oldp+183,(vlTOPp->Benes__DOT__r_mux_bus_ff_9));
            tracep->chgSData(oldp+184,(vlTOPp->Benes__DOT__imm_switch_5__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+185,(vlTOPp->Benes__DOT__imm_switch_5__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+186,(vlTOPp->Benes__DOT__imm_switch_148__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+187,(vlTOPp->Benes__DOT__r_mux_bus_ff_10));
            tracep->chgBit(oldp+188,(vlTOPp->Benes__DOT__r_mux_bus_ff_11));
            tracep->chgSData(oldp+189,(vlTOPp->Benes__DOT__imm_switch_6__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+190,(vlTOPp->Benes__DOT__imm_switch_6__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+191,(vlTOPp->Benes__DOT__imm_switch_77__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+192,(vlTOPp->Benes__DOT__r_mux_bus_ff_12));
            tracep->chgBit(oldp+193,(vlTOPp->Benes__DOT__r_mux_bus_ff_13));
            tracep->chgSData(oldp+194,(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+195,(vlTOPp->Benes__DOT__imm_switch_7__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+196,(vlTOPp->Benes__DOT__imm_switch_42__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+197,(vlTOPp->Benes__DOT__r_mux_bus_ff_14));
            tracep->chgBit(oldp+198,(vlTOPp->Benes__DOT__r_mux_bus_ff_15));
            tracep->chgSData(oldp+199,(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+200,(vlTOPp->Benes__DOT__r_mux_bus_ff_16));
            tracep->chgBit(oldp+201,(vlTOPp->Benes__DOT__r_mux_bus_ff_17));
            tracep->chgSData(oldp+202,(vlTOPp->Benes__DOT__imm_switch_9__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+203,(vlTOPp->Benes__DOT__imm_switch_9__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+204,(vlTOPp->Benes__DOT__r_mux_bus_ff_18));
            tracep->chgBit(oldp+205,(vlTOPp->Benes__DOT__r_mux_bus_ff_19));
            tracep->chgSData(oldp+206,(vlTOPp->Benes__DOT__imm_switch_10__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+207,(vlTOPp->Benes__DOT__imm_switch_10__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+208,(vlTOPp->Benes__DOT__imm_switch_27__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+209,(vlTOPp->Benes__DOT__r_mux_bus_ff_20));
            tracep->chgBit(oldp+210,(vlTOPp->Benes__DOT__r_mux_bus_ff_21));
            tracep->chgSData(oldp+211,(vlTOPp->Benes__DOT__imm_switch_11__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+212,(vlTOPp->Benes__DOT__imm_switch_11__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+213,(vlTOPp->Benes__DOT__imm_switch_46__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+214,(vlTOPp->Benes__DOT__r_mux_bus_ff_22));
            tracep->chgBit(oldp+215,(vlTOPp->Benes__DOT__r_mux_bus_ff_23));
            tracep->chgSData(oldp+216,(vlTOPp->Benes__DOT__imm_switch_12__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+217,(vlTOPp->Benes__DOT__imm_switch_12__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+218,(vlTOPp->Benes__DOT__imm_switch_83__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+219,(vlTOPp->Benes__DOT__r_mux_bus_ff_24));
            tracep->chgBit(oldp+220,(vlTOPp->Benes__DOT__r_mux_bus_ff_25));
            tracep->chgSData(oldp+221,(vlTOPp->Benes__DOT__imm_switch_13__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+222,(vlTOPp->Benes__DOT__imm_switch_13__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+223,(vlTOPp->Benes__DOT__imm_switch_156__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+224,(vlTOPp->Benes__DOT__r_mux_bus_ff_26));
            tracep->chgBit(oldp+225,(vlTOPp->Benes__DOT__r_mux_bus_ff_27));
            tracep->chgSData(oldp+226,(vlTOPp->Benes__DOT__imm_switch_14__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+227,(vlTOPp->Benes__DOT__imm_switch_14__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+228,(vlTOPp->Benes__DOT__imm_switch_157__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+229,(vlTOPp->Benes__DOT__r_mux_bus_ff_28));
            tracep->chgBit(oldp+230,(vlTOPp->Benes__DOT__r_mux_bus_ff_29));
            tracep->chgSData(oldp+231,(vlTOPp->Benes__DOT__imm_switch_15__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+232,(vlTOPp->Benes__DOT__imm_switch_15__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+233,(vlTOPp->Benes__DOT__imm_switch_86__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+234,(vlTOPp->Benes__DOT__r_mux_bus_ff_30));
            tracep->chgBit(oldp+235,(vlTOPp->Benes__DOT__r_mux_bus_ff_31));
            tracep->chgSData(oldp+236,(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+237,(vlTOPp->Benes__DOT__imm_switch_16__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+238,(vlTOPp->Benes__DOT__imm_switch_51__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+239,(vlTOPp->Benes__DOT__r_mux_bus_ff_32));
            tracep->chgBit(oldp+240,(vlTOPp->Benes__DOT__r_mux_bus_ff_33));
            tracep->chgSData(oldp+241,(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+242,(vlTOPp->Benes__DOT__r_mux_bus_ff_34));
            tracep->chgBit(oldp+243,(vlTOPp->Benes__DOT__r_mux_bus_ff_35));
            tracep->chgSData(oldp+244,(vlTOPp->Benes__DOT__imm_switch_18__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+245,(vlTOPp->Benes__DOT__r_mux_bus_ff_36));
            tracep->chgBit(oldp+246,(vlTOPp->Benes__DOT__r_mux_bus_ff_37));
            tracep->chgSData(oldp+247,(vlTOPp->Benes__DOT__imm_switch_19__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+248,(vlTOPp->Benes__DOT__imm_switch_19__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+249,(vlTOPp->Benes__DOT__r_mux_bus_ff_38));
            tracep->chgBit(oldp+250,(vlTOPp->Benes__DOT__r_mux_bus_ff_39));
            tracep->chgSData(oldp+251,(vlTOPp->Benes__DOT__imm_switch_20__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+252,(vlTOPp->Benes__DOT__imm_switch_20__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+253,(vlTOPp->Benes__DOT__imm_switch_55__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+254,(vlTOPp->Benes__DOT__r_mux_bus_ff_40));
            tracep->chgBit(oldp+255,(vlTOPp->Benes__DOT__r_mux_bus_ff_41));
            tracep->chgSData(oldp+256,(vlTOPp->Benes__DOT__imm_switch_21__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+257,(vlTOPp->Benes__DOT__imm_switch_21__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+258,(vlTOPp->Benes__DOT__imm_switch_92__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+259,(vlTOPp->Benes__DOT__r_mux_bus_ff_42));
            tracep->chgBit(oldp+260,(vlTOPp->Benes__DOT__r_mux_bus_ff_43));
            tracep->chgSData(oldp+261,(vlTOPp->Benes__DOT__imm_switch_22__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+262,(vlTOPp->Benes__DOT__imm_switch_22__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+263,(vlTOPp->Benes__DOT__imm_switch_165__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+264,(vlTOPp->Benes__DOT__r_mux_bus_ff_44));
            tracep->chgBit(oldp+265,(vlTOPp->Benes__DOT__r_mux_bus_ff_45));
            tracep->chgSData(oldp+266,(vlTOPp->Benes__DOT__imm_switch_23__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+267,(vlTOPp->Benes__DOT__imm_switch_23__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+268,(vlTOPp->Benes__DOT__imm_switch_166__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+269,(vlTOPp->Benes__DOT__r_mux_bus_ff_46));
            tracep->chgBit(oldp+270,(vlTOPp->Benes__DOT__r_mux_bus_ff_47));
            tracep->chgSData(oldp+271,(vlTOPp->Benes__DOT__imm_switch_24__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+272,(vlTOPp->Benes__DOT__imm_switch_24__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+273,(vlTOPp->Benes__DOT__imm_switch_95__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+274,(vlTOPp->Benes__DOT__r_mux_bus_ff_48));
            tracep->chgBit(oldp+275,(vlTOPp->Benes__DOT__r_mux_bus_ff_49));
            tracep->chgSData(oldp+276,(vlTOPp->Benes__DOT__imm_switch_25__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+277,(vlTOPp->Benes__DOT__imm_switch_60__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+278,(vlTOPp->Benes__DOT__r_mux_bus_ff_50));
            tracep->chgBit(oldp+279,(vlTOPp->Benes__DOT__r_mux_bus_ff_51));
            tracep->chgBit(oldp+280,(vlTOPp->Benes__DOT__r_mux_bus_ff_52));
            tracep->chgBit(oldp+281,(vlTOPp->Benes__DOT__r_mux_bus_ff_53));
            tracep->chgSData(oldp+282,(vlTOPp->Benes__DOT__imm_switch_27__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+283,(vlTOPp->Benes__DOT__r_mux_bus_ff_54));
            tracep->chgBit(oldp+284,(vlTOPp->Benes__DOT__r_mux_bus_ff_55));
            tracep->chgSData(oldp+285,(vlTOPp->Benes__DOT__imm_switch_28__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+286,(vlTOPp->Benes__DOT__imm_switch_28__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+287,(vlTOPp->Benes__DOT__r_mux_bus_ff_56));
            tracep->chgBit(oldp+288,(vlTOPp->Benes__DOT__r_mux_bus_ff_57));
            tracep->chgSData(oldp+289,(vlTOPp->Benes__DOT__imm_switch_29__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+290,(vlTOPp->Benes__DOT__imm_switch_29__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+291,(vlTOPp->Benes__DOT__imm_switch_64__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+292,(vlTOPp->Benes__DOT__r_mux_bus_ff_58));
            tracep->chgBit(oldp+293,(vlTOPp->Benes__DOT__r_mux_bus_ff_59));
            tracep->chgSData(oldp+294,(vlTOPp->Benes__DOT__imm_switch_30__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+295,(vlTOPp->Benes__DOT__imm_switch_30__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+296,(vlTOPp->Benes__DOT__imm_switch_101__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+297,(vlTOPp->Benes__DOT__r_mux_bus_ff_60));
            tracep->chgBit(oldp+298,(vlTOPp->Benes__DOT__r_mux_bus_ff_61));
            tracep->chgSData(oldp+299,(vlTOPp->Benes__DOT__imm_switch_31__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+300,(vlTOPp->Benes__DOT__imm_switch_31__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+301,(vlTOPp->Benes__DOT__imm_switch_174__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+302,(vlTOPp->Benes__DOT__r_mux_bus_ff_62));
            tracep->chgBit(oldp+303,(vlTOPp->Benes__DOT__r_mux_bus_ff_63));
            tracep->chgSData(oldp+304,(vlTOPp->Benes__DOT__imm_switch_32__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+305,(vlTOPp->Benes__DOT__imm_switch_32__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+306,(vlTOPp->Benes__DOT__imm_switch_175__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+307,(vlTOPp->Benes__DOT__r_mux_bus_ff_64));
            tracep->chgBit(oldp+308,(vlTOPp->Benes__DOT__r_mux_bus_ff_65));
            tracep->chgSData(oldp+309,(vlTOPp->Benes__DOT__imm_switch_33__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+310,(vlTOPp->Benes__DOT__imm_switch_33__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+311,(vlTOPp->Benes__DOT__imm_switch_104__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+312,(vlTOPp->Benes__DOT__r_mux_bus_ff_66));
            tracep->chgBit(oldp+313,(vlTOPp->Benes__DOT__r_mux_bus_ff_67));
            tracep->chgSData(oldp+314,(vlTOPp->Benes__DOT__imm_switch_34__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+315,(vlTOPp->Benes__DOT__imm_switch_69__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+316,(vlTOPp->Benes__DOT__r_mux_bus_ff_68));
            tracep->chgBit(oldp+317,(vlTOPp->Benes__DOT__r_mux_bus_ff_69));
            tracep->chgBit(oldp+318,(vlTOPp->Benes__DOT__r_mux_bus_ff_70));
            tracep->chgBit(oldp+319,(vlTOPp->Benes__DOT__r_mux_bus_ff_71));
            tracep->chgSData(oldp+320,(vlTOPp->Benes__DOT__imm_switch_36__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+321,(vlTOPp->Benes__DOT__imm_switch_36__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+322,(vlTOPp->Benes__DOT__r_mux_bus_ff_72));
            tracep->chgBit(oldp+323,(vlTOPp->Benes__DOT__r_mux_bus_ff_73));
            tracep->chgSData(oldp+324,(vlTOPp->Benes__DOT__imm_switch_37__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+325,(vlTOPp->Benes__DOT__imm_switch_54__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+326,(vlTOPp->Benes__DOT__r_mux_bus_ff_74));
            tracep->chgBit(oldp+327,(vlTOPp->Benes__DOT__r_mux_bus_ff_75));
            tracep->chgSData(oldp+328,(vlTOPp->Benes__DOT__imm_switch_38__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+329,(vlTOPp->Benes__DOT__imm_switch_38__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+330,(vlTOPp->Benes__DOT__r_mux_bus_ff_76));
            tracep->chgBit(oldp+331,(vlTOPp->Benes__DOT__r_mux_bus_ff_77));
            tracep->chgSData(oldp+332,(vlTOPp->Benes__DOT__imm_switch_39__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+333,(vlTOPp->Benes__DOT__imm_switch_39__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+334,(vlTOPp->Benes__DOT__imm_switch_110__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+335,(vlTOPp->Benes__DOT__r_mux_bus_ff_78));
            tracep->chgBit(oldp+336,(vlTOPp->Benes__DOT__r_mux_bus_ff_79));
            tracep->chgSData(oldp+337,(vlTOPp->Benes__DOT__imm_switch_40__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+338,(vlTOPp->Benes__DOT__imm_switch_40__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+339,(vlTOPp->Benes__DOT__imm_switch_183__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+340,(vlTOPp->Benes__DOT__r_mux_bus_ff_80));
            tracep->chgBit(oldp+341,(vlTOPp->Benes__DOT__r_mux_bus_ff_81));
            tracep->chgSData(oldp+342,(vlTOPp->Benes__DOT__imm_switch_41__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+343,(vlTOPp->Benes__DOT__imm_switch_41__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+344,(vlTOPp->Benes__DOT__imm_switch_184__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+345,(vlTOPp->Benes__DOT__r_mux_bus_ff_82));
            tracep->chgBit(oldp+346,(vlTOPp->Benes__DOT__r_mux_bus_ff_83));
            tracep->chgSData(oldp+347,(vlTOPp->Benes__DOT__imm_switch_42__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+348,(vlTOPp->Benes__DOT__imm_switch_113__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+349,(vlTOPp->Benes__DOT__r_mux_bus_ff_84));
            tracep->chgBit(oldp+350,(vlTOPp->Benes__DOT__r_mux_bus_ff_85));
            tracep->chgSData(oldp+351,(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+352,(vlTOPp->Benes__DOT__imm_switch_43__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+353,(vlTOPp->Benes__DOT__r_mux_bus_ff_86));
            tracep->chgBit(oldp+354,(vlTOPp->Benes__DOT__r_mux_bus_ff_87));
            tracep->chgSData(oldp+355,(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+356,(vlTOPp->Benes__DOT__r_mux_bus_ff_88));
            tracep->chgBit(oldp+357,(vlTOPp->Benes__DOT__r_mux_bus_ff_89));
            tracep->chgSData(oldp+358,(vlTOPp->Benes__DOT__imm_switch_45__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+359,(vlTOPp->Benes__DOT__imm_switch_45__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+360,(vlTOPp->Benes__DOT__r_mux_bus_ff_90));
            tracep->chgBit(oldp+361,(vlTOPp->Benes__DOT__r_mux_bus_ff_91));
            tracep->chgSData(oldp+362,(vlTOPp->Benes__DOT__imm_switch_46__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+363,(vlTOPp->Benes__DOT__imm_switch_63__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+364,(vlTOPp->Benes__DOT__r_mux_bus_ff_92));
            tracep->chgBit(oldp+365,(vlTOPp->Benes__DOT__r_mux_bus_ff_93));
            tracep->chgSData(oldp+366,(vlTOPp->Benes__DOT__imm_switch_47__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+367,(vlTOPp->Benes__DOT__imm_switch_47__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+368,(vlTOPp->Benes__DOT__r_mux_bus_ff_94));
            tracep->chgBit(oldp+369,(vlTOPp->Benes__DOT__r_mux_bus_ff_95));
            tracep->chgSData(oldp+370,(vlTOPp->Benes__DOT__imm_switch_48__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+371,(vlTOPp->Benes__DOT__imm_switch_48__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+372,(vlTOPp->Benes__DOT__imm_switch_119__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+373,(vlTOPp->Benes__DOT__r_mux_bus_ff_96));
            tracep->chgBit(oldp+374,(vlTOPp->Benes__DOT__r_mux_bus_ff_97));
            tracep->chgSData(oldp+375,(vlTOPp->Benes__DOT__imm_switch_49__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+376,(vlTOPp->Benes__DOT__imm_switch_49__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+377,(vlTOPp->Benes__DOT__imm_switch_192__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+378,(vlTOPp->Benes__DOT__r_mux_bus_ff_98));
            tracep->chgBit(oldp+379,(vlTOPp->Benes__DOT__r_mux_bus_ff_99));
            tracep->chgSData(oldp+380,(vlTOPp->Benes__DOT__imm_switch_50__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+381,(vlTOPp->Benes__DOT__imm_switch_50__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+382,(vlTOPp->Benes__DOT__imm_switch_193__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+383,(vlTOPp->Benes__DOT__r_mux_bus_ff_100));
            tracep->chgBit(oldp+384,(vlTOPp->Benes__DOT__r_mux_bus_ff_101));
            tracep->chgSData(oldp+385,(vlTOPp->Benes__DOT__imm_switch_51__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+386,(vlTOPp->Benes__DOT__imm_switch_122__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+387,(vlTOPp->Benes__DOT__r_mux_bus_ff_102));
            tracep->chgBit(oldp+388,(vlTOPp->Benes__DOT__r_mux_bus_ff_103));
            tracep->chgSData(oldp+389,(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+390,(vlTOPp->Benes__DOT__imm_switch_52__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+391,(vlTOPp->Benes__DOT__r_mux_bus_ff_104));
            tracep->chgBit(oldp+392,(vlTOPp->Benes__DOT__r_mux_bus_ff_105));
            tracep->chgSData(oldp+393,(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+394,(vlTOPp->Benes__DOT__r_mux_bus_ff_106));
            tracep->chgBit(oldp+395,(vlTOPp->Benes__DOT__r_mux_bus_ff_107));
            tracep->chgSData(oldp+396,(vlTOPp->Benes__DOT__imm_switch_54__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+397,(vlTOPp->Benes__DOT__r_mux_bus_ff_108));
            tracep->chgBit(oldp+398,(vlTOPp->Benes__DOT__r_mux_bus_ff_109));
            tracep->chgSData(oldp+399,(vlTOPp->Benes__DOT__imm_switch_55__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+400,(vlTOPp->Benes__DOT__r_mux_bus_ff_110));
            tracep->chgBit(oldp+401,(vlTOPp->Benes__DOT__r_mux_bus_ff_111));
            tracep->chgSData(oldp+402,(vlTOPp->Benes__DOT__imm_switch_56__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+403,(vlTOPp->Benes__DOT__imm_switch_56__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+404,(vlTOPp->Benes__DOT__r_mux_bus_ff_112));
            tracep->chgBit(oldp+405,(vlTOPp->Benes__DOT__r_mux_bus_ff_113));
            tracep->chgSData(oldp+406,(vlTOPp->Benes__DOT__imm_switch_57__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+407,(vlTOPp->Benes__DOT__imm_switch_57__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+408,(vlTOPp->Benes__DOT__imm_switch_128__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+409,(vlTOPp->Benes__DOT__r_mux_bus_ff_114));
            tracep->chgBit(oldp+410,(vlTOPp->Benes__DOT__r_mux_bus_ff_115));
            tracep->chgSData(oldp+411,(vlTOPp->Benes__DOT__imm_switch_58__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+412,(vlTOPp->Benes__DOT__imm_switch_58__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+413,(vlTOPp->Benes__DOT__imm_switch_201__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+414,(vlTOPp->Benes__DOT__r_mux_bus_ff_116));
            tracep->chgBit(oldp+415,(vlTOPp->Benes__DOT__r_mux_bus_ff_117));
            tracep->chgSData(oldp+416,(vlTOPp->Benes__DOT__imm_switch_59__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+417,(vlTOPp->Benes__DOT__imm_switch_59__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+418,(vlTOPp->Benes__DOT__imm_switch_202__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+419,(vlTOPp->Benes__DOT__r_mux_bus_ff_118));
            tracep->chgBit(oldp+420,(vlTOPp->Benes__DOT__r_mux_bus_ff_119));
            tracep->chgSData(oldp+421,(vlTOPp->Benes__DOT__imm_switch_60__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+422,(vlTOPp->Benes__DOT__imm_switch_131__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+423,(vlTOPp->Benes__DOT__r_mux_bus_ff_120));
            tracep->chgBit(oldp+424,(vlTOPp->Benes__DOT__r_mux_bus_ff_121));
            tracep->chgSData(oldp+425,(vlTOPp->Benes__DOT__imm_switch_61__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+426,(vlTOPp->Benes__DOT__r_mux_bus_ff_122));
            tracep->chgBit(oldp+427,(vlTOPp->Benes__DOT__r_mux_bus_ff_123));
            tracep->chgBit(oldp+428,(vlTOPp->Benes__DOT__r_mux_bus_ff_124));
            tracep->chgBit(oldp+429,(vlTOPp->Benes__DOT__r_mux_bus_ff_125));
            tracep->chgSData(oldp+430,(vlTOPp->Benes__DOT__imm_switch_63__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+431,(vlTOPp->Benes__DOT__r_mux_bus_ff_126));
            tracep->chgBit(oldp+432,(vlTOPp->Benes__DOT__r_mux_bus_ff_127));
            tracep->chgSData(oldp+433,(vlTOPp->Benes__DOT__imm_switch_64__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+434,(vlTOPp->Benes__DOT__r_mux_bus_ff_128));
            tracep->chgBit(oldp+435,(vlTOPp->Benes__DOT__r_mux_bus_ff_129));
            tracep->chgSData(oldp+436,(vlTOPp->Benes__DOT__imm_switch_65__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+437,(vlTOPp->Benes__DOT__imm_switch_65__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+438,(vlTOPp->Benes__DOT__r_mux_bus_ff_130));
            tracep->chgBit(oldp+439,(vlTOPp->Benes__DOT__r_mux_bus_ff_131));
            tracep->chgSData(oldp+440,(vlTOPp->Benes__DOT__imm_switch_66__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+441,(vlTOPp->Benes__DOT__imm_switch_66__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+442,(vlTOPp->Benes__DOT__imm_switch_137__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+443,(vlTOPp->Benes__DOT__r_mux_bus_ff_132));
            tracep->chgBit(oldp+444,(vlTOPp->Benes__DOT__r_mux_bus_ff_133));
            tracep->chgSData(oldp+445,(vlTOPp->Benes__DOT__imm_switch_67__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+446,(vlTOPp->Benes__DOT__imm_switch_67__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+447,(vlTOPp->Benes__DOT__imm_switch_210__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+448,(vlTOPp->Benes__DOT__r_mux_bus_ff_134));
            tracep->chgBit(oldp+449,(vlTOPp->Benes__DOT__r_mux_bus_ff_135));
            tracep->chgSData(oldp+450,(vlTOPp->Benes__DOT__imm_switch_68__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+451,(vlTOPp->Benes__DOT__imm_switch_68__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+452,(vlTOPp->Benes__DOT__imm_switch_211__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+453,(vlTOPp->Benes__DOT__r_mux_bus_ff_136));
            tracep->chgBit(oldp+454,(vlTOPp->Benes__DOT__r_mux_bus_ff_137));
            tracep->chgSData(oldp+455,(vlTOPp->Benes__DOT__imm_switch_69__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+456,(vlTOPp->Benes__DOT__imm_switch_140__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+457,(vlTOPp->Benes__DOT__r_mux_bus_ff_138));
            tracep->chgBit(oldp+458,(vlTOPp->Benes__DOT__r_mux_bus_ff_139));
            tracep->chgSData(oldp+459,(vlTOPp->Benes__DOT__imm_switch_70__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+460,(vlTOPp->Benes__DOT__r_mux_bus_ff_140));
            tracep->chgBit(oldp+461,(vlTOPp->Benes__DOT__r_mux_bus_ff_141));
            tracep->chgBit(oldp+462,(vlTOPp->Benes__DOT__r_mux_bus_ff_142));
            tracep->chgBit(oldp+463,(vlTOPp->Benes__DOT__r_mux_bus_ff_143));
            tracep->chgSData(oldp+464,(vlTOPp->Benes__DOT__imm_switch_72__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+465,(vlTOPp->Benes__DOT__imm_switch_72__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+466,(vlTOPp->Benes__DOT__r_mux_bus_ff_144));
            tracep->chgBit(oldp+467,(vlTOPp->Benes__DOT__r_mux_bus_ff_145));
            tracep->chgSData(oldp+468,(vlTOPp->Benes__DOT__imm_switch_73__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+469,(vlTOPp->Benes__DOT__imm_switch_73__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+470,(vlTOPp->Benes__DOT__imm_switch_90__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+471,(vlTOPp->Benes__DOT__r_mux_bus_ff_146));
            tracep->chgBit(oldp+472,(vlTOPp->Benes__DOT__r_mux_bus_ff_147));
            tracep->chgSData(oldp+473,(vlTOPp->Benes__DOT__imm_switch_74__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+474,(vlTOPp->Benes__DOT__imm_switch_109__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+475,(vlTOPp->Benes__DOT__r_mux_bus_ff_148));
            tracep->chgBit(oldp+476,(vlTOPp->Benes__DOT__r_mux_bus_ff_149));
            tracep->chgSData(oldp+477,(vlTOPp->Benes__DOT__imm_switch_75__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+478,(vlTOPp->Benes__DOT__imm_switch_75__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+479,(vlTOPp->Benes__DOT__r_mux_bus_ff_150));
            tracep->chgBit(oldp+480,(vlTOPp->Benes__DOT__r_mux_bus_ff_151));
            tracep->chgSData(oldp+481,(vlTOPp->Benes__DOT__imm_switch_76__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+482,(vlTOPp->Benes__DOT__imm_switch_76__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+483,(vlTOPp->Benes__DOT__imm_switch_219__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+484,(vlTOPp->Benes__DOT__r_mux_bus_ff_152));
            tracep->chgBit(oldp+485,(vlTOPp->Benes__DOT__r_mux_bus_ff_153));
            tracep->chgSData(oldp+486,(vlTOPp->Benes__DOT__imm_switch_77__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+487,(vlTOPp->Benes__DOT__imm_switch_220__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+488,(vlTOPp->Benes__DOT__r_mux_bus_ff_154));
            tracep->chgBit(oldp+489,(vlTOPp->Benes__DOT__r_mux_bus_ff_155));
            tracep->chgSData(oldp+490,(vlTOPp->Benes__DOT__imm_switch_78__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+491,(vlTOPp->Benes__DOT__imm_switch_78__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+492,(vlTOPp->Benes__DOT__r_mux_bus_ff_156));
            tracep->chgBit(oldp+493,(vlTOPp->Benes__DOT__r_mux_bus_ff_157));
            tracep->chgSData(oldp+494,(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+495,(vlTOPp->Benes__DOT__imm_switch_79__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+496,(vlTOPp->Benes__DOT__imm_switch_114__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+497,(vlTOPp->Benes__DOT__r_mux_bus_ff_158));
            tracep->chgBit(oldp+498,(vlTOPp->Benes__DOT__r_mux_bus_ff_159));
            tracep->chgSData(oldp+499,(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+500,(vlTOPp->Benes__DOT__r_mux_bus_ff_160));
            tracep->chgBit(oldp+501,(vlTOPp->Benes__DOT__r_mux_bus_ff_161));
            tracep->chgSData(oldp+502,(vlTOPp->Benes__DOT__imm_switch_81__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+503,(vlTOPp->Benes__DOT__imm_switch_81__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+504,(vlTOPp->Benes__DOT__r_mux_bus_ff_162));
            tracep->chgBit(oldp+505,(vlTOPp->Benes__DOT__r_mux_bus_ff_163));
            tracep->chgSData(oldp+506,(vlTOPp->Benes__DOT__imm_switch_82__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+507,(vlTOPp->Benes__DOT__imm_switch_82__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+508,(vlTOPp->Benes__DOT__imm_switch_99__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+509,(vlTOPp->Benes__DOT__r_mux_bus_ff_164));
            tracep->chgBit(oldp+510,(vlTOPp->Benes__DOT__r_mux_bus_ff_165));
            tracep->chgSData(oldp+511,(vlTOPp->Benes__DOT__imm_switch_83__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+512,(vlTOPp->Benes__DOT__imm_switch_118__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+513,(vlTOPp->Benes__DOT__r_mux_bus_ff_166));
            tracep->chgBit(oldp+514,(vlTOPp->Benes__DOT__r_mux_bus_ff_167));
            tracep->chgSData(oldp+515,(vlTOPp->Benes__DOT__imm_switch_84__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+516,(vlTOPp->Benes__DOT__imm_switch_84__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+517,(vlTOPp->Benes__DOT__r_mux_bus_ff_168));
            tracep->chgBit(oldp+518,(vlTOPp->Benes__DOT__r_mux_bus_ff_169));
            tracep->chgSData(oldp+519,(vlTOPp->Benes__DOT__imm_switch_85__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+520,(vlTOPp->Benes__DOT__imm_switch_85__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+521,(vlTOPp->Benes__DOT__imm_switch_228__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+522,(vlTOPp->Benes__DOT__r_mux_bus_ff_170));
            tracep->chgBit(oldp+523,(vlTOPp->Benes__DOT__r_mux_bus_ff_171));
            tracep->chgSData(oldp+524,(vlTOPp->Benes__DOT__imm_switch_86__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+525,(vlTOPp->Benes__DOT__imm_switch_229__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+526,(vlTOPp->Benes__DOT__r_mux_bus_ff_172));
            tracep->chgBit(oldp+527,(vlTOPp->Benes__DOT__r_mux_bus_ff_173));
            tracep->chgSData(oldp+528,(vlTOPp->Benes__DOT__imm_switch_87__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+529,(vlTOPp->Benes__DOT__imm_switch_87__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+530,(vlTOPp->Benes__DOT__r_mux_bus_ff_174));
            tracep->chgBit(oldp+531,(vlTOPp->Benes__DOT__r_mux_bus_ff_175));
            tracep->chgSData(oldp+532,(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+533,(vlTOPp->Benes__DOT__imm_switch_88__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+534,(vlTOPp->Benes__DOT__imm_switch_123__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+535,(vlTOPp->Benes__DOT__r_mux_bus_ff_176));
            tracep->chgBit(oldp+536,(vlTOPp->Benes__DOT__r_mux_bus_ff_177));
            tracep->chgSData(oldp+537,(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+538,(vlTOPp->Benes__DOT__r_mux_bus_ff_178));
            tracep->chgBit(oldp+539,(vlTOPp->Benes__DOT__r_mux_bus_ff_179));
            tracep->chgSData(oldp+540,(vlTOPp->Benes__DOT__imm_switch_90__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+541,(vlTOPp->Benes__DOT__r_mux_bus_ff_180));
            tracep->chgBit(oldp+542,(vlTOPp->Benes__DOT__r_mux_bus_ff_181));
            tracep->chgSData(oldp+543,(vlTOPp->Benes__DOT__imm_switch_91__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+544,(vlTOPp->Benes__DOT__imm_switch_91__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+545,(vlTOPp->Benes__DOT__r_mux_bus_ff_182));
            tracep->chgBit(oldp+546,(vlTOPp->Benes__DOT__r_mux_bus_ff_183));
            tracep->chgSData(oldp+547,(vlTOPp->Benes__DOT__imm_switch_92__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+548,(vlTOPp->Benes__DOT__imm_switch_127__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+549,(vlTOPp->Benes__DOT__r_mux_bus_ff_184));
            tracep->chgBit(oldp+550,(vlTOPp->Benes__DOT__r_mux_bus_ff_185));
            tracep->chgSData(oldp+551,(vlTOPp->Benes__DOT__imm_switch_93__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+552,(vlTOPp->Benes__DOT__imm_switch_93__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+553,(vlTOPp->Benes__DOT__r_mux_bus_ff_186));
            tracep->chgBit(oldp+554,(vlTOPp->Benes__DOT__r_mux_bus_ff_187));
            tracep->chgSData(oldp+555,(vlTOPp->Benes__DOT__imm_switch_94__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+556,(vlTOPp->Benes__DOT__imm_switch_94__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+557,(vlTOPp->Benes__DOT__imm_switch_237__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+558,(vlTOPp->Benes__DOT__r_mux_bus_ff_188));
            tracep->chgBit(oldp+559,(vlTOPp->Benes__DOT__r_mux_bus_ff_189));
            tracep->chgSData(oldp+560,(vlTOPp->Benes__DOT__imm_switch_95__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+561,(vlTOPp->Benes__DOT__imm_switch_238__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+562,(vlTOPp->Benes__DOT__r_mux_bus_ff_190));
            tracep->chgBit(oldp+563,(vlTOPp->Benes__DOT__r_mux_bus_ff_191));
            tracep->chgSData(oldp+564,(vlTOPp->Benes__DOT__imm_switch_96__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+565,(vlTOPp->Benes__DOT__imm_switch_96__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+566,(vlTOPp->Benes__DOT__r_mux_bus_ff_192));
            tracep->chgBit(oldp+567,(vlTOPp->Benes__DOT__r_mux_bus_ff_193));
            tracep->chgSData(oldp+568,(vlTOPp->Benes__DOT__imm_switch_97__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+569,(vlTOPp->Benes__DOT__imm_switch_132__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+570,(vlTOPp->Benes__DOT__r_mux_bus_ff_194));
            tracep->chgBit(oldp+571,(vlTOPp->Benes__DOT__r_mux_bus_ff_195));
            tracep->chgBit(oldp+572,(vlTOPp->Benes__DOT__r_mux_bus_ff_196));
            tracep->chgBit(oldp+573,(vlTOPp->Benes__DOT__r_mux_bus_ff_197));
            tracep->chgSData(oldp+574,(vlTOPp->Benes__DOT__imm_switch_99__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+575,(vlTOPp->Benes__DOT__r_mux_bus_ff_198));
            tracep->chgBit(oldp+576,(vlTOPp->Benes__DOT__r_mux_bus_ff_199));
            tracep->chgSData(oldp+577,(vlTOPp->Benes__DOT__imm_switch_100__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+578,(vlTOPp->Benes__DOT__imm_switch_100__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+579,(vlTOPp->Benes__DOT__r_mux_bus_ff_200));
            tracep->chgBit(oldp+580,(vlTOPp->Benes__DOT__r_mux_bus_ff_201));
            tracep->chgSData(oldp+581,(vlTOPp->Benes__DOT__imm_switch_101__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+582,(vlTOPp->Benes__DOT__imm_switch_136__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+583,(vlTOPp->Benes__DOT__r_mux_bus_ff_202));
            tracep->chgBit(oldp+584,(vlTOPp->Benes__DOT__r_mux_bus_ff_203));
            tracep->chgSData(oldp+585,(vlTOPp->Benes__DOT__imm_switch_102__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+586,(vlTOPp->Benes__DOT__imm_switch_102__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+587,(vlTOPp->Benes__DOT__r_mux_bus_ff_204));
            tracep->chgBit(oldp+588,(vlTOPp->Benes__DOT__r_mux_bus_ff_205));
            tracep->chgSData(oldp+589,(vlTOPp->Benes__DOT__imm_switch_103__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+590,(vlTOPp->Benes__DOT__imm_switch_103__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+591,(vlTOPp->Benes__DOT__imm_switch_246__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+592,(vlTOPp->Benes__DOT__r_mux_bus_ff_206));
            tracep->chgBit(oldp+593,(vlTOPp->Benes__DOT__r_mux_bus_ff_207));
            tracep->chgSData(oldp+594,(vlTOPp->Benes__DOT__imm_switch_104__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+595,(vlTOPp->Benes__DOT__imm_switch_247__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+596,(vlTOPp->Benes__DOT__r_mux_bus_ff_208));
            tracep->chgBit(oldp+597,(vlTOPp->Benes__DOT__r_mux_bus_ff_209));
            tracep->chgSData(oldp+598,(vlTOPp->Benes__DOT__imm_switch_105__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+599,(vlTOPp->Benes__DOT__imm_switch_105__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+600,(vlTOPp->Benes__DOT__r_mux_bus_ff_210));
            tracep->chgBit(oldp+601,(vlTOPp->Benes__DOT__r_mux_bus_ff_211));
            tracep->chgSData(oldp+602,(vlTOPp->Benes__DOT__imm_switch_106__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+603,(vlTOPp->Benes__DOT__imm_switch_141__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+604,(vlTOPp->Benes__DOT__r_mux_bus_ff_212));
            tracep->chgBit(oldp+605,(vlTOPp->Benes__DOT__r_mux_bus_ff_213));
            tracep->chgBit(oldp+606,(vlTOPp->Benes__DOT__r_mux_bus_ff_214));
            tracep->chgBit(oldp+607,(vlTOPp->Benes__DOT__r_mux_bus_ff_215));
            tracep->chgSData(oldp+608,(vlTOPp->Benes__DOT__imm_switch_108__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+609,(vlTOPp->Benes__DOT__imm_switch_108__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+610,(vlTOPp->Benes__DOT__r_mux_bus_ff_216));
            tracep->chgBit(oldp+611,(vlTOPp->Benes__DOT__r_mux_bus_ff_217));
            tracep->chgSData(oldp+612,(vlTOPp->Benes__DOT__imm_switch_109__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+613,(vlTOPp->Benes__DOT__imm_switch_126__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+614,(vlTOPp->Benes__DOT__r_mux_bus_ff_218));
            tracep->chgBit(oldp+615,(vlTOPp->Benes__DOT__r_mux_bus_ff_219));
            tracep->chgSData(oldp+616,(vlTOPp->Benes__DOT__imm_switch_110__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+617,(vlTOPp->Benes__DOT__r_mux_bus_ff_220));
            tracep->chgBit(oldp+618,(vlTOPp->Benes__DOT__r_mux_bus_ff_221));
            tracep->chgSData(oldp+619,(vlTOPp->Benes__DOT__imm_switch_111__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+620,(vlTOPp->Benes__DOT__imm_switch_111__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+621,(vlTOPp->Benes__DOT__r_mux_bus_ff_222));
            tracep->chgBit(oldp+622,(vlTOPp->Benes__DOT__r_mux_bus_ff_223));
            tracep->chgSData(oldp+623,(vlTOPp->Benes__DOT__imm_switch_112__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+624,(vlTOPp->Benes__DOT__imm_switch_112__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+625,(vlTOPp->Benes__DOT__imm_switch_255__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+626,(vlTOPp->Benes__DOT__r_mux_bus_ff_224));
            tracep->chgBit(oldp+627,(vlTOPp->Benes__DOT__r_mux_bus_ff_225));
            tracep->chgSData(oldp+628,(vlTOPp->Benes__DOT__imm_switch_113__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+629,(vlTOPp->Benes__DOT__imm_switch_256__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+630,(vlTOPp->Benes__DOT__r_mux_bus_ff_226));
            tracep->chgBit(oldp+631,(vlTOPp->Benes__DOT__r_mux_bus_ff_227));
            tracep->chgSData(oldp+632,(vlTOPp->Benes__DOT__imm_switch_114__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+633,(vlTOPp->Benes__DOT__r_mux_bus_ff_228));
            tracep->chgBit(oldp+634,(vlTOPp->Benes__DOT__r_mux_bus_ff_229));
            tracep->chgSData(oldp+635,(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+636,(vlTOPp->Benes__DOT__imm_switch_115__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+637,(vlTOPp->Benes__DOT__r_mux_bus_ff_230));
            tracep->chgBit(oldp+638,(vlTOPp->Benes__DOT__r_mux_bus_ff_231));
            tracep->chgSData(oldp+639,(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+640,(vlTOPp->Benes__DOT__r_mux_bus_ff_232));
            tracep->chgBit(oldp+641,(vlTOPp->Benes__DOT__r_mux_bus_ff_233));
            tracep->chgSData(oldp+642,(vlTOPp->Benes__DOT__imm_switch_117__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+643,(vlTOPp->Benes__DOT__imm_switch_117__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+644,(vlTOPp->Benes__DOT__r_mux_bus_ff_234));
            tracep->chgBit(oldp+645,(vlTOPp->Benes__DOT__r_mux_bus_ff_235));
            tracep->chgSData(oldp+646,(vlTOPp->Benes__DOT__imm_switch_118__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+647,(vlTOPp->Benes__DOT__imm_switch_135__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+648,(vlTOPp->Benes__DOT__r_mux_bus_ff_236));
            tracep->chgBit(oldp+649,(vlTOPp->Benes__DOT__r_mux_bus_ff_237));
            tracep->chgSData(oldp+650,(vlTOPp->Benes__DOT__imm_switch_119__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+651,(vlTOPp->Benes__DOT__r_mux_bus_ff_238));
            tracep->chgBit(oldp+652,(vlTOPp->Benes__DOT__r_mux_bus_ff_239));
            tracep->chgSData(oldp+653,(vlTOPp->Benes__DOT__imm_switch_120__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+654,(vlTOPp->Benes__DOT__imm_switch_120__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+655,(vlTOPp->Benes__DOT__r_mux_bus_ff_240));
            tracep->chgBit(oldp+656,(vlTOPp->Benes__DOT__r_mux_bus_ff_241));
            tracep->chgSData(oldp+657,(vlTOPp->Benes__DOT__imm_switch_121__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+658,(vlTOPp->Benes__DOT__imm_switch_121__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+659,(vlTOPp->Benes__DOT__imm_switch_264__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+660,(vlTOPp->Benes__DOT__r_mux_bus_ff_242));
            tracep->chgBit(oldp+661,(vlTOPp->Benes__DOT__r_mux_bus_ff_243));
            tracep->chgSData(oldp+662,(vlTOPp->Benes__DOT__imm_switch_122__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+663,(vlTOPp->Benes__DOT__imm_switch_265__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+664,(vlTOPp->Benes__DOT__r_mux_bus_ff_244));
            tracep->chgBit(oldp+665,(vlTOPp->Benes__DOT__r_mux_bus_ff_245));
            tracep->chgSData(oldp+666,(vlTOPp->Benes__DOT__imm_switch_123__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+667,(vlTOPp->Benes__DOT__r_mux_bus_ff_246));
            tracep->chgBit(oldp+668,(vlTOPp->Benes__DOT__r_mux_bus_ff_247));
            tracep->chgSData(oldp+669,(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+670,(vlTOPp->Benes__DOT__imm_switch_124__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+671,(vlTOPp->Benes__DOT__r_mux_bus_ff_248));
            tracep->chgBit(oldp+672,(vlTOPp->Benes__DOT__r_mux_bus_ff_249));
            tracep->chgSData(oldp+673,(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+674,(vlTOPp->Benes__DOT__r_mux_bus_ff_250));
            tracep->chgBit(oldp+675,(vlTOPp->Benes__DOT__r_mux_bus_ff_251));
            tracep->chgSData(oldp+676,(vlTOPp->Benes__DOT__imm_switch_126__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+677,(vlTOPp->Benes__DOT__r_mux_bus_ff_252));
            tracep->chgBit(oldp+678,(vlTOPp->Benes__DOT__r_mux_bus_ff_253));
            tracep->chgSData(oldp+679,(vlTOPp->Benes__DOT__imm_switch_127__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+680,(vlTOPp->Benes__DOT__r_mux_bus_ff_254));
            tracep->chgBit(oldp+681,(vlTOPp->Benes__DOT__r_mux_bus_ff_255));
            tracep->chgSData(oldp+682,(vlTOPp->Benes__DOT__imm_switch_128__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+683,(vlTOPp->Benes__DOT__r_mux_bus_ff_256));
            tracep->chgBit(oldp+684,(vlTOPp->Benes__DOT__r_mux_bus_ff_257));
            tracep->chgSData(oldp+685,(vlTOPp->Benes__DOT__imm_switch_129__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+686,(vlTOPp->Benes__DOT__imm_switch_129__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+687,(vlTOPp->Benes__DOT__r_mux_bus_ff_258));
            tracep->chgBit(oldp+688,(vlTOPp->Benes__DOT__r_mux_bus_ff_259));
            tracep->chgSData(oldp+689,(vlTOPp->Benes__DOT__imm_switch_130__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+690,(vlTOPp->Benes__DOT__imm_switch_130__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+691,(vlTOPp->Benes__DOT__imm_switch_273__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+692,(vlTOPp->Benes__DOT__r_mux_bus_ff_260));
            tracep->chgBit(oldp+693,(vlTOPp->Benes__DOT__r_mux_bus_ff_261));
            tracep->chgSData(oldp+694,(vlTOPp->Benes__DOT__imm_switch_131__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+695,(vlTOPp->Benes__DOT__imm_switch_274__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+696,(vlTOPp->Benes__DOT__r_mux_bus_ff_262));
            tracep->chgBit(oldp+697,(vlTOPp->Benes__DOT__r_mux_bus_ff_263));
            tracep->chgSData(oldp+698,(vlTOPp->Benes__DOT__imm_switch_132__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+699,(vlTOPp->Benes__DOT__r_mux_bus_ff_264));
            tracep->chgBit(oldp+700,(vlTOPp->Benes__DOT__r_mux_bus_ff_265));
            tracep->chgSData(oldp+701,(vlTOPp->Benes__DOT__imm_switch_133__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+702,(vlTOPp->Benes__DOT__r_mux_bus_ff_266));
            tracep->chgBit(oldp+703,(vlTOPp->Benes__DOT__r_mux_bus_ff_267));
            tracep->chgBit(oldp+704,(vlTOPp->Benes__DOT__r_mux_bus_ff_268));
            tracep->chgBit(oldp+705,(vlTOPp->Benes__DOT__r_mux_bus_ff_269));
            tracep->chgSData(oldp+706,(vlTOPp->Benes__DOT__imm_switch_135__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+707,(vlTOPp->Benes__DOT__r_mux_bus_ff_270));
            tracep->chgBit(oldp+708,(vlTOPp->Benes__DOT__r_mux_bus_ff_271));
            tracep->chgSData(oldp+709,(vlTOPp->Benes__DOT__imm_switch_136__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+710,(vlTOPp->Benes__DOT__r_mux_bus_ff_272));
            tracep->chgBit(oldp+711,(vlTOPp->Benes__DOT__r_mux_bus_ff_273));
            tracep->chgSData(oldp+712,(vlTOPp->Benes__DOT__imm_switch_137__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+713,(vlTOPp->Benes__DOT__r_mux_bus_ff_274));
            tracep->chgBit(oldp+714,(vlTOPp->Benes__DOT__r_mux_bus_ff_275));
            tracep->chgSData(oldp+715,(vlTOPp->Benes__DOT__imm_switch_138__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+716,(vlTOPp->Benes__DOT__imm_switch_138__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+717,(vlTOPp->Benes__DOT__r_mux_bus_ff_276));
            tracep->chgBit(oldp+718,(vlTOPp->Benes__DOT__r_mux_bus_ff_277));
            tracep->chgSData(oldp+719,(vlTOPp->Benes__DOT__imm_switch_139__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+720,(vlTOPp->Benes__DOT__imm_switch_139__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+721,(vlTOPp->Benes__DOT__imm_switch_282__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+722,(vlTOPp->Benes__DOT__r_mux_bus_ff_278));
            tracep->chgBit(oldp+723,(vlTOPp->Benes__DOT__r_mux_bus_ff_279));
            tracep->chgSData(oldp+724,(vlTOPp->Benes__DOT__imm_switch_140__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+725,(vlTOPp->Benes__DOT__imm_switch_283__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+726,(vlTOPp->Benes__DOT__r_mux_bus_ff_280));
            tracep->chgBit(oldp+727,(vlTOPp->Benes__DOT__r_mux_bus_ff_281));
            tracep->chgSData(oldp+728,(vlTOPp->Benes__DOT__imm_switch_141__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+729,(vlTOPp->Benes__DOT__r_mux_bus_ff_282));
            tracep->chgBit(oldp+730,(vlTOPp->Benes__DOT__r_mux_bus_ff_283));
            tracep->chgSData(oldp+731,(vlTOPp->Benes__DOT__imm_switch_142__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+732,(vlTOPp->Benes__DOT__r_mux_bus_ff_284));
            tracep->chgBit(oldp+733,(vlTOPp->Benes__DOT__r_mux_bus_ff_285));
            tracep->chgBit(oldp+734,(vlTOPp->Benes__DOT__r_mux_bus_ff_286));
            tracep->chgBit(oldp+735,(vlTOPp->Benes__DOT__r_mux_bus_ff_287));
            tracep->chgSData(oldp+736,(vlTOPp->Benes__DOT__imm_switch_144__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+737,(vlTOPp->Benes__DOT__imm_switch_144__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+738,(vlTOPp->Benes__DOT__r_mux_bus_ff_288));
            tracep->chgBit(oldp+739,(vlTOPp->Benes__DOT__r_mux_bus_ff_289));
            tracep->chgSData(oldp+740,(vlTOPp->Benes__DOT__imm_switch_145__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+741,(vlTOPp->Benes__DOT__imm_switch_145__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+742,(vlTOPp->Benes__DOT__imm_switch_162__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+743,(vlTOPp->Benes__DOT__r_mux_bus_ff_290));
            tracep->chgBit(oldp+744,(vlTOPp->Benes__DOT__r_mux_bus_ff_291));
            tracep->chgSData(oldp+745,(vlTOPp->Benes__DOT__imm_switch_146__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+746,(vlTOPp->Benes__DOT__imm_switch_146__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+747,(vlTOPp->Benes__DOT__imm_switch_181__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+748,(vlTOPp->Benes__DOT__r_mux_bus_ff_292));
            tracep->chgBit(oldp+749,(vlTOPp->Benes__DOT__r_mux_bus_ff_293));
            tracep->chgSData(oldp+750,(vlTOPp->Benes__DOT__imm_switch_147__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+751,(vlTOPp->Benes__DOT__imm_switch_218__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+752,(vlTOPp->Benes__DOT__r_mux_bus_ff_294));
            tracep->chgBit(oldp+753,(vlTOPp->Benes__DOT__r_mux_bus_ff_295));
            tracep->chgSData(oldp+754,(vlTOPp->Benes__DOT__imm_switch_148__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+755,(vlTOPp->Benes__DOT__r_mux_bus_ff_296));
            tracep->chgBit(oldp+756,(vlTOPp->Benes__DOT__r_mux_bus_ff_297));
            tracep->chgSData(oldp+757,(vlTOPp->Benes__DOT__imm_switch_149__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+758,(vlTOPp->Benes__DOT__imm_switch_149__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+759,(vlTOPp->Benes__DOT__r_mux_bus_ff_298));
            tracep->chgBit(oldp+760,(vlTOPp->Benes__DOT__r_mux_bus_ff_299));
            tracep->chgSData(oldp+761,(vlTOPp->Benes__DOT__imm_switch_150__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+762,(vlTOPp->Benes__DOT__imm_switch_150__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+763,(vlTOPp->Benes__DOT__imm_switch_221__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+764,(vlTOPp->Benes__DOT__r_mux_bus_ff_300));
            tracep->chgBit(oldp+765,(vlTOPp->Benes__DOT__r_mux_bus_ff_301));
            tracep->chgSData(oldp+766,(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+767,(vlTOPp->Benes__DOT__imm_switch_151__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+768,(vlTOPp->Benes__DOT__imm_switch_186__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+769,(vlTOPp->Benes__DOT__r_mux_bus_ff_302));
            tracep->chgBit(oldp+770,(vlTOPp->Benes__DOT__r_mux_bus_ff_303));
            tracep->chgSData(oldp+771,(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+772,(vlTOPp->Benes__DOT__r_mux_bus_ff_304));
            tracep->chgBit(oldp+773,(vlTOPp->Benes__DOT__r_mux_bus_ff_305));
            tracep->chgSData(oldp+774,(vlTOPp->Benes__DOT__imm_switch_153__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+775,(vlTOPp->Benes__DOT__imm_switch_153__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+776,(vlTOPp->Benes__DOT__r_mux_bus_ff_306));
            tracep->chgBit(oldp+777,(vlTOPp->Benes__DOT__r_mux_bus_ff_307));
            tracep->chgSData(oldp+778,(vlTOPp->Benes__DOT__imm_switch_154__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+779,(vlTOPp->Benes__DOT__imm_switch_154__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+780,(vlTOPp->Benes__DOT__imm_switch_171__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+781,(vlTOPp->Benes__DOT__r_mux_bus_ff_308));
            tracep->chgBit(oldp+782,(vlTOPp->Benes__DOT__r_mux_bus_ff_309));
            tracep->chgSData(oldp+783,(vlTOPp->Benes__DOT__imm_switch_155__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+784,(vlTOPp->Benes__DOT__imm_switch_155__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+785,(vlTOPp->Benes__DOT__imm_switch_190__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+786,(vlTOPp->Benes__DOT__r_mux_bus_ff_310));
            tracep->chgBit(oldp+787,(vlTOPp->Benes__DOT__r_mux_bus_ff_311));
            tracep->chgSData(oldp+788,(vlTOPp->Benes__DOT__imm_switch_156__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+789,(vlTOPp->Benes__DOT__imm_switch_227__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+790,(vlTOPp->Benes__DOT__r_mux_bus_ff_312));
            tracep->chgBit(oldp+791,(vlTOPp->Benes__DOT__r_mux_bus_ff_313));
            tracep->chgSData(oldp+792,(vlTOPp->Benes__DOT__imm_switch_157__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+793,(vlTOPp->Benes__DOT__r_mux_bus_ff_314));
            tracep->chgBit(oldp+794,(vlTOPp->Benes__DOT__r_mux_bus_ff_315));
            tracep->chgSData(oldp+795,(vlTOPp->Benes__DOT__imm_switch_158__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+796,(vlTOPp->Benes__DOT__imm_switch_158__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+797,(vlTOPp->Benes__DOT__r_mux_bus_ff_316));
            tracep->chgBit(oldp+798,(vlTOPp->Benes__DOT__r_mux_bus_ff_317));
            tracep->chgSData(oldp+799,(vlTOPp->Benes__DOT__imm_switch_159__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+800,(vlTOPp->Benes__DOT__imm_switch_159__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+801,(vlTOPp->Benes__DOT__imm_switch_230__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+802,(vlTOPp->Benes__DOT__r_mux_bus_ff_318));
            tracep->chgBit(oldp+803,(vlTOPp->Benes__DOT__r_mux_bus_ff_319));
            tracep->chgSData(oldp+804,(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+805,(vlTOPp->Benes__DOT__imm_switch_160__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+806,(vlTOPp->Benes__DOT__imm_switch_195__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+807,(vlTOPp->Benes__DOT__r_mux_bus_ff_320));
            tracep->chgBit(oldp+808,(vlTOPp->Benes__DOT__r_mux_bus_ff_321));
            tracep->chgSData(oldp+809,(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+810,(vlTOPp->Benes__DOT__r_mux_bus_ff_322));
            tracep->chgBit(oldp+811,(vlTOPp->Benes__DOT__r_mux_bus_ff_323));
            tracep->chgSData(oldp+812,(vlTOPp->Benes__DOT__imm_switch_162__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+813,(vlTOPp->Benes__DOT__r_mux_bus_ff_324));
            tracep->chgBit(oldp+814,(vlTOPp->Benes__DOT__r_mux_bus_ff_325));
            tracep->chgSData(oldp+815,(vlTOPp->Benes__DOT__imm_switch_163__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+816,(vlTOPp->Benes__DOT__imm_switch_163__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+817,(vlTOPp->Benes__DOT__r_mux_bus_ff_326));
            tracep->chgBit(oldp+818,(vlTOPp->Benes__DOT__r_mux_bus_ff_327));
            tracep->chgSData(oldp+819,(vlTOPp->Benes__DOT__imm_switch_164__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+820,(vlTOPp->Benes__DOT__imm_switch_164__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+821,(vlTOPp->Benes__DOT__imm_switch_199__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+822,(vlTOPp->Benes__DOT__r_mux_bus_ff_328));
            tracep->chgBit(oldp+823,(vlTOPp->Benes__DOT__r_mux_bus_ff_329));
            tracep->chgSData(oldp+824,(vlTOPp->Benes__DOT__imm_switch_165__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+825,(vlTOPp->Benes__DOT__imm_switch_236__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+826,(vlTOPp->Benes__DOT__r_mux_bus_ff_330));
            tracep->chgBit(oldp+827,(vlTOPp->Benes__DOT__r_mux_bus_ff_331));
            tracep->chgSData(oldp+828,(vlTOPp->Benes__DOT__imm_switch_166__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+829,(vlTOPp->Benes__DOT__r_mux_bus_ff_332));
            tracep->chgBit(oldp+830,(vlTOPp->Benes__DOT__r_mux_bus_ff_333));
            tracep->chgSData(oldp+831,(vlTOPp->Benes__DOT__imm_switch_167__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+832,(vlTOPp->Benes__DOT__imm_switch_167__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+833,(vlTOPp->Benes__DOT__r_mux_bus_ff_334));
            tracep->chgBit(oldp+834,(vlTOPp->Benes__DOT__r_mux_bus_ff_335));
            tracep->chgSData(oldp+835,(vlTOPp->Benes__DOT__imm_switch_168__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+836,(vlTOPp->Benes__DOT__imm_switch_168__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+837,(vlTOPp->Benes__DOT__imm_switch_239__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+838,(vlTOPp->Benes__DOT__r_mux_bus_ff_336));
            tracep->chgBit(oldp+839,(vlTOPp->Benes__DOT__r_mux_bus_ff_337));
            tracep->chgSData(oldp+840,(vlTOPp->Benes__DOT__imm_switch_169__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+841,(vlTOPp->Benes__DOT__imm_switch_204__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+842,(vlTOPp->Benes__DOT__r_mux_bus_ff_338));
            tracep->chgBit(oldp+843,(vlTOPp->Benes__DOT__r_mux_bus_ff_339));
            tracep->chgBit(oldp+844,(vlTOPp->Benes__DOT__r_mux_bus_ff_340));
            tracep->chgBit(oldp+845,(vlTOPp->Benes__DOT__r_mux_bus_ff_341));
            tracep->chgSData(oldp+846,(vlTOPp->Benes__DOT__imm_switch_171__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+847,(vlTOPp->Benes__DOT__r_mux_bus_ff_342));
            tracep->chgBit(oldp+848,(vlTOPp->Benes__DOT__r_mux_bus_ff_343));
            tracep->chgSData(oldp+849,(vlTOPp->Benes__DOT__imm_switch_172__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+850,(vlTOPp->Benes__DOT__imm_switch_172__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+851,(vlTOPp->Benes__DOT__r_mux_bus_ff_344));
            tracep->chgBit(oldp+852,(vlTOPp->Benes__DOT__r_mux_bus_ff_345));
            tracep->chgSData(oldp+853,(vlTOPp->Benes__DOT__imm_switch_173__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+854,(vlTOPp->Benes__DOT__imm_switch_173__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+855,(vlTOPp->Benes__DOT__imm_switch_208__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+856,(vlTOPp->Benes__DOT__r_mux_bus_ff_346));
            tracep->chgBit(oldp+857,(vlTOPp->Benes__DOT__r_mux_bus_ff_347));
            tracep->chgSData(oldp+858,(vlTOPp->Benes__DOT__imm_switch_174__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+859,(vlTOPp->Benes__DOT__imm_switch_245__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+860,(vlTOPp->Benes__DOT__r_mux_bus_ff_348));
            tracep->chgBit(oldp+861,(vlTOPp->Benes__DOT__r_mux_bus_ff_349));
            tracep->chgSData(oldp+862,(vlTOPp->Benes__DOT__imm_switch_175__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+863,(vlTOPp->Benes__DOT__r_mux_bus_ff_350));
            tracep->chgBit(oldp+864,(vlTOPp->Benes__DOT__r_mux_bus_ff_351));
            tracep->chgSData(oldp+865,(vlTOPp->Benes__DOT__imm_switch_176__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+866,(vlTOPp->Benes__DOT__imm_switch_176__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+867,(vlTOPp->Benes__DOT__r_mux_bus_ff_352));
            tracep->chgBit(oldp+868,(vlTOPp->Benes__DOT__r_mux_bus_ff_353));
            tracep->chgSData(oldp+869,(vlTOPp->Benes__DOT__imm_switch_177__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+870,(vlTOPp->Benes__DOT__imm_switch_177__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+871,(vlTOPp->Benes__DOT__imm_switch_248__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+872,(vlTOPp->Benes__DOT__r_mux_bus_ff_354));
            tracep->chgBit(oldp+873,(vlTOPp->Benes__DOT__r_mux_bus_ff_355));
            tracep->chgSData(oldp+874,(vlTOPp->Benes__DOT__imm_switch_178__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+875,(vlTOPp->Benes__DOT__imm_switch_213__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+876,(vlTOPp->Benes__DOT__r_mux_bus_ff_356));
            tracep->chgBit(oldp+877,(vlTOPp->Benes__DOT__r_mux_bus_ff_357));
            tracep->chgBit(oldp+878,(vlTOPp->Benes__DOT__r_mux_bus_ff_358));
            tracep->chgBit(oldp+879,(vlTOPp->Benes__DOT__r_mux_bus_ff_359));
            tracep->chgSData(oldp+880,(vlTOPp->Benes__DOT__imm_switch_180__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+881,(vlTOPp->Benes__DOT__imm_switch_180__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+882,(vlTOPp->Benes__DOT__r_mux_bus_ff_360));
            tracep->chgBit(oldp+883,(vlTOPp->Benes__DOT__r_mux_bus_ff_361));
            tracep->chgSData(oldp+884,(vlTOPp->Benes__DOT__imm_switch_181__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+885,(vlTOPp->Benes__DOT__imm_switch_198__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+886,(vlTOPp->Benes__DOT__r_mux_bus_ff_362));
            tracep->chgBit(oldp+887,(vlTOPp->Benes__DOT__r_mux_bus_ff_363));
            tracep->chgSData(oldp+888,(vlTOPp->Benes__DOT__imm_switch_182__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+889,(vlTOPp->Benes__DOT__imm_switch_182__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+890,(vlTOPp->Benes__DOT__r_mux_bus_ff_364));
            tracep->chgBit(oldp+891,(vlTOPp->Benes__DOT__r_mux_bus_ff_365));
            tracep->chgSData(oldp+892,(vlTOPp->Benes__DOT__imm_switch_183__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+893,(vlTOPp->Benes__DOT__imm_switch_254__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+894,(vlTOPp->Benes__DOT__r_mux_bus_ff_366));
            tracep->chgBit(oldp+895,(vlTOPp->Benes__DOT__r_mux_bus_ff_367));
            tracep->chgSData(oldp+896,(vlTOPp->Benes__DOT__imm_switch_184__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+897,(vlTOPp->Benes__DOT__r_mux_bus_ff_368));
            tracep->chgBit(oldp+898,(vlTOPp->Benes__DOT__r_mux_bus_ff_369));
            tracep->chgSData(oldp+899,(vlTOPp->Benes__DOT__imm_switch_185__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+900,(vlTOPp->Benes__DOT__imm_switch_185__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+901,(vlTOPp->Benes__DOT__r_mux_bus_ff_370));
            tracep->chgBit(oldp+902,(vlTOPp->Benes__DOT__r_mux_bus_ff_371));
            tracep->chgSData(oldp+903,(vlTOPp->Benes__DOT__imm_switch_186__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+904,(vlTOPp->Benes__DOT__imm_switch_257__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+905,(vlTOPp->Benes__DOT__r_mux_bus_ff_372));
            tracep->chgBit(oldp+906,(vlTOPp->Benes__DOT__r_mux_bus_ff_373));
            tracep->chgSData(oldp+907,(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+908,(vlTOPp->Benes__DOT__imm_switch_187__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+909,(vlTOPp->Benes__DOT__r_mux_bus_ff_374));
            tracep->chgBit(oldp+910,(vlTOPp->Benes__DOT__r_mux_bus_ff_375));
            tracep->chgSData(oldp+911,(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+912,(vlTOPp->Benes__DOT__r_mux_bus_ff_376));
            tracep->chgBit(oldp+913,(vlTOPp->Benes__DOT__r_mux_bus_ff_377));
            tracep->chgSData(oldp+914,(vlTOPp->Benes__DOT__imm_switch_189__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+915,(vlTOPp->Benes__DOT__imm_switch_189__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+916,(vlTOPp->Benes__DOT__r_mux_bus_ff_378));
            tracep->chgBit(oldp+917,(vlTOPp->Benes__DOT__r_mux_bus_ff_379));
            tracep->chgSData(oldp+918,(vlTOPp->Benes__DOT__imm_switch_190__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+919,(vlTOPp->Benes__DOT__imm_switch_207__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+920,(vlTOPp->Benes__DOT__r_mux_bus_ff_380));
            tracep->chgBit(oldp+921,(vlTOPp->Benes__DOT__r_mux_bus_ff_381));
            tracep->chgSData(oldp+922,(vlTOPp->Benes__DOT__imm_switch_191__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+923,(vlTOPp->Benes__DOT__imm_switch_191__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+924,(vlTOPp->Benes__DOT__r_mux_bus_ff_382));
            tracep->chgBit(oldp+925,(vlTOPp->Benes__DOT__r_mux_bus_ff_383));
            tracep->chgSData(oldp+926,(vlTOPp->Benes__DOT__imm_switch_192__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+927,(vlTOPp->Benes__DOT__imm_switch_263__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+928,(vlTOPp->Benes__DOT__r_mux_bus_ff_384));
            tracep->chgBit(oldp+929,(vlTOPp->Benes__DOT__r_mux_bus_ff_385));
            tracep->chgSData(oldp+930,(vlTOPp->Benes__DOT__imm_switch_193__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+931,(vlTOPp->Benes__DOT__r_mux_bus_ff_386));
            tracep->chgBit(oldp+932,(vlTOPp->Benes__DOT__r_mux_bus_ff_387));
            tracep->chgSData(oldp+933,(vlTOPp->Benes__DOT__imm_switch_194__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+934,(vlTOPp->Benes__DOT__imm_switch_194__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+935,(vlTOPp->Benes__DOT__r_mux_bus_ff_388));
            tracep->chgBit(oldp+936,(vlTOPp->Benes__DOT__r_mux_bus_ff_389));
            tracep->chgSData(oldp+937,(vlTOPp->Benes__DOT__imm_switch_195__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+938,(vlTOPp->Benes__DOT__imm_switch_266__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+939,(vlTOPp->Benes__DOT__r_mux_bus_ff_390));
            tracep->chgBit(oldp+940,(vlTOPp->Benes__DOT__r_mux_bus_ff_391));
            tracep->chgSData(oldp+941,(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+942,(vlTOPp->Benes__DOT__imm_switch_196__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+943,(vlTOPp->Benes__DOT__r_mux_bus_ff_392));
            tracep->chgBit(oldp+944,(vlTOPp->Benes__DOT__r_mux_bus_ff_393));
            tracep->chgSData(oldp+945,(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+946,(vlTOPp->Benes__DOT__r_mux_bus_ff_394));
            tracep->chgBit(oldp+947,(vlTOPp->Benes__DOT__r_mux_bus_ff_395));
            tracep->chgSData(oldp+948,(vlTOPp->Benes__DOT__imm_switch_198__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+949,(vlTOPp->Benes__DOT__r_mux_bus_ff_396));
            tracep->chgBit(oldp+950,(vlTOPp->Benes__DOT__r_mux_bus_ff_397));
            tracep->chgSData(oldp+951,(vlTOPp->Benes__DOT__imm_switch_199__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+952,(vlTOPp->Benes__DOT__r_mux_bus_ff_398));
            tracep->chgBit(oldp+953,(vlTOPp->Benes__DOT__r_mux_bus_ff_399));
            tracep->chgSData(oldp+954,(vlTOPp->Benes__DOT__imm_switch_200__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+955,(vlTOPp->Benes__DOT__imm_switch_200__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+956,(vlTOPp->Benes__DOT__r_mux_bus_ff_400));
            tracep->chgBit(oldp+957,(vlTOPp->Benes__DOT__r_mux_bus_ff_401));
            tracep->chgSData(oldp+958,(vlTOPp->Benes__DOT__imm_switch_201__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+959,(vlTOPp->Benes__DOT__imm_switch_272__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+960,(vlTOPp->Benes__DOT__r_mux_bus_ff_402));
            tracep->chgBit(oldp+961,(vlTOPp->Benes__DOT__r_mux_bus_ff_403));
            tracep->chgSData(oldp+962,(vlTOPp->Benes__DOT__imm_switch_202__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+963,(vlTOPp->Benes__DOT__r_mux_bus_ff_404));
            tracep->chgBit(oldp+964,(vlTOPp->Benes__DOT__r_mux_bus_ff_405));
            tracep->chgSData(oldp+965,(vlTOPp->Benes__DOT__imm_switch_203__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+966,(vlTOPp->Benes__DOT__imm_switch_203__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+967,(vlTOPp->Benes__DOT__r_mux_bus_ff_406));
            tracep->chgBit(oldp+968,(vlTOPp->Benes__DOT__r_mux_bus_ff_407));
            tracep->chgSData(oldp+969,(vlTOPp->Benes__DOT__imm_switch_204__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+970,(vlTOPp->Benes__DOT__imm_switch_275__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+971,(vlTOPp->Benes__DOT__r_mux_bus_ff_408));
            tracep->chgBit(oldp+972,(vlTOPp->Benes__DOT__r_mux_bus_ff_409));
            tracep->chgSData(oldp+973,(vlTOPp->Benes__DOT__imm_switch_205__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+974,(vlTOPp->Benes__DOT__r_mux_bus_ff_410));
            tracep->chgBit(oldp+975,(vlTOPp->Benes__DOT__r_mux_bus_ff_411));
            tracep->chgBit(oldp+976,(vlTOPp->Benes__DOT__r_mux_bus_ff_412));
            tracep->chgBit(oldp+977,(vlTOPp->Benes__DOT__r_mux_bus_ff_413));
            tracep->chgSData(oldp+978,(vlTOPp->Benes__DOT__imm_switch_207__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+979,(vlTOPp->Benes__DOT__r_mux_bus_ff_414));
            tracep->chgBit(oldp+980,(vlTOPp->Benes__DOT__r_mux_bus_ff_415));
            tracep->chgSData(oldp+981,(vlTOPp->Benes__DOT__imm_switch_208__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+982,(vlTOPp->Benes__DOT__r_mux_bus_ff_416));
            tracep->chgBit(oldp+983,(vlTOPp->Benes__DOT__r_mux_bus_ff_417));
            tracep->chgSData(oldp+984,(vlTOPp->Benes__DOT__imm_switch_209__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+985,(vlTOPp->Benes__DOT__imm_switch_209__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+986,(vlTOPp->Benes__DOT__r_mux_bus_ff_418));
            tracep->chgBit(oldp+987,(vlTOPp->Benes__DOT__r_mux_bus_ff_419));
            tracep->chgSData(oldp+988,(vlTOPp->Benes__DOT__imm_switch_210__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+989,(vlTOPp->Benes__DOT__imm_switch_281__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+990,(vlTOPp->Benes__DOT__r_mux_bus_ff_420));
            tracep->chgBit(oldp+991,(vlTOPp->Benes__DOT__r_mux_bus_ff_421));
            tracep->chgSData(oldp+992,(vlTOPp->Benes__DOT__imm_switch_211__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+993,(vlTOPp->Benes__DOT__r_mux_bus_ff_422));
            tracep->chgBit(oldp+994,(vlTOPp->Benes__DOT__r_mux_bus_ff_423));
            tracep->chgSData(oldp+995,(vlTOPp->Benes__DOT__imm_switch_212__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+996,(vlTOPp->Benes__DOT__imm_switch_212__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+997,(vlTOPp->Benes__DOT__r_mux_bus_ff_424));
            tracep->chgBit(oldp+998,(vlTOPp->Benes__DOT__r_mux_bus_ff_425));
            tracep->chgSData(oldp+999,(vlTOPp->Benes__DOT__imm_switch_213__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1000,(vlTOPp->Benes__DOT__imm_switch_284__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1001,(vlTOPp->Benes__DOT__r_mux_bus_ff_426));
            tracep->chgBit(oldp+1002,(vlTOPp->Benes__DOT__r_mux_bus_ff_427));
            tracep->chgSData(oldp+1003,(vlTOPp->Benes__DOT__imm_switch_214__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1004,(vlTOPp->Benes__DOT__r_mux_bus_ff_428));
            tracep->chgBit(oldp+1005,(vlTOPp->Benes__DOT__r_mux_bus_ff_429));
            tracep->chgBit(oldp+1006,(vlTOPp->Benes__DOT__r_mux_bus_ff_430));
            tracep->chgBit(oldp+1007,(vlTOPp->Benes__DOT__r_mux_bus_ff_431));
            tracep->chgSData(oldp+1008,(vlTOPp->Benes__DOT__imm_switch_216__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1009,(vlTOPp->Benes__DOT__imm_switch_216__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1010,(vlTOPp->Benes__DOT__r_mux_bus_ff_432));
            tracep->chgBit(oldp+1011,(vlTOPp->Benes__DOT__r_mux_bus_ff_433));
            tracep->chgSData(oldp+1012,(vlTOPp->Benes__DOT__imm_switch_217__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1013,(vlTOPp->Benes__DOT__imm_switch_217__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+1014,(vlTOPp->Benes__DOT__imm_switch_234__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1015,(vlTOPp->Benes__DOT__r_mux_bus_ff_434));
            tracep->chgBit(oldp+1016,(vlTOPp->Benes__DOT__r_mux_bus_ff_435));
            tracep->chgSData(oldp+1017,(vlTOPp->Benes__DOT__imm_switch_218__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1018,(vlTOPp->Benes__DOT__imm_switch_253__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1019,(vlTOPp->Benes__DOT__r_mux_bus_ff_436));
            tracep->chgBit(oldp+1020,(vlTOPp->Benes__DOT__r_mux_bus_ff_437));
            tracep->chgSData(oldp+1021,(vlTOPp->Benes__DOT__imm_switch_219__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1022,(vlTOPp->Benes__DOT__r_mux_bus_ff_438));
            tracep->chgBit(oldp+1023,(vlTOPp->Benes__DOT__r_mux_bus_ff_439));
            tracep->chgSData(oldp+1024,(vlTOPp->Benes__DOT__imm_switch_220__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1025,(vlTOPp->Benes__DOT__r_mux_bus_ff_440));
            tracep->chgBit(oldp+1026,(vlTOPp->Benes__DOT__r_mux_bus_ff_441));
            tracep->chgSData(oldp+1027,(vlTOPp->Benes__DOT__imm_switch_221__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1028,(vlTOPp->Benes__DOT__r_mux_bus_ff_442));
            tracep->chgBit(oldp+1029,(vlTOPp->Benes__DOT__r_mux_bus_ff_443));
            tracep->chgSData(oldp+1030,(vlTOPp->Benes__DOT__imm_switch_222__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1031,(vlTOPp->Benes__DOT__imm_switch_222__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1032,(vlTOPp->Benes__DOT__r_mux_bus_ff_444));
            tracep->chgBit(oldp+1033,(vlTOPp->Benes__DOT__r_mux_bus_ff_445));
            tracep->chgSData(oldp+1034,(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1035,(vlTOPp->Benes__DOT__imm_switch_223__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+1036,(vlTOPp->Benes__DOT__imm_switch_258__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1037,(vlTOPp->Benes__DOT__r_mux_bus_ff_446));
            tracep->chgBit(oldp+1038,(vlTOPp->Benes__DOT__r_mux_bus_ff_447));
            tracep->chgSData(oldp+1039,(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1040,(vlTOPp->Benes__DOT__r_mux_bus_ff_448));
            tracep->chgBit(oldp+1041,(vlTOPp->Benes__DOT__r_mux_bus_ff_449));
            tracep->chgSData(oldp+1042,(vlTOPp->Benes__DOT__imm_switch_225__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1043,(vlTOPp->Benes__DOT__imm_switch_225__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1044,(vlTOPp->Benes__DOT__r_mux_bus_ff_450));
            tracep->chgBit(oldp+1045,(vlTOPp->Benes__DOT__r_mux_bus_ff_451));
            tracep->chgSData(oldp+1046,(vlTOPp->Benes__DOT__imm_switch_226__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1047,(vlTOPp->Benes__DOT__imm_switch_226__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+1048,(vlTOPp->Benes__DOT__imm_switch_243__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1049,(vlTOPp->Benes__DOT__r_mux_bus_ff_452));
            tracep->chgBit(oldp+1050,(vlTOPp->Benes__DOT__r_mux_bus_ff_453));
            tracep->chgSData(oldp+1051,(vlTOPp->Benes__DOT__imm_switch_227__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1052,(vlTOPp->Benes__DOT__imm_switch_262__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1053,(vlTOPp->Benes__DOT__r_mux_bus_ff_454));
            tracep->chgBit(oldp+1054,(vlTOPp->Benes__DOT__r_mux_bus_ff_455));
            tracep->chgSData(oldp+1055,(vlTOPp->Benes__DOT__imm_switch_228__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1056,(vlTOPp->Benes__DOT__r_mux_bus_ff_456));
            tracep->chgBit(oldp+1057,(vlTOPp->Benes__DOT__r_mux_bus_ff_457));
            tracep->chgSData(oldp+1058,(vlTOPp->Benes__DOT__imm_switch_229__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1059,(vlTOPp->Benes__DOT__r_mux_bus_ff_458));
            tracep->chgBit(oldp+1060,(vlTOPp->Benes__DOT__r_mux_bus_ff_459));
            tracep->chgSData(oldp+1061,(vlTOPp->Benes__DOT__imm_switch_230__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1062,(vlTOPp->Benes__DOT__r_mux_bus_ff_460));
            tracep->chgBit(oldp+1063,(vlTOPp->Benes__DOT__r_mux_bus_ff_461));
            tracep->chgSData(oldp+1064,(vlTOPp->Benes__DOT__imm_switch_231__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1065,(vlTOPp->Benes__DOT__imm_switch_231__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1066,(vlTOPp->Benes__DOT__r_mux_bus_ff_462));
            tracep->chgBit(oldp+1067,(vlTOPp->Benes__DOT__r_mux_bus_ff_463));
            tracep->chgSData(oldp+1068,(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1069,(vlTOPp->Benes__DOT__imm_switch_232__DOT__mux1_io_o),16);
            tracep->chgSData(oldp+1070,(vlTOPp->Benes__DOT__imm_switch_267__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1071,(vlTOPp->Benes__DOT__r_mux_bus_ff_464));
            tracep->chgBit(oldp+1072,(vlTOPp->Benes__DOT__r_mux_bus_ff_465));
            tracep->chgSData(oldp+1073,(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1074,(vlTOPp->Benes__DOT__r_mux_bus_ff_466));
            tracep->chgBit(oldp+1075,(vlTOPp->Benes__DOT__r_mux_bus_ff_467));
            tracep->chgSData(oldp+1076,(vlTOPp->Benes__DOT__imm_switch_234__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1077,(vlTOPp->Benes__DOT__r_mux_bus_ff_468));
            tracep->chgBit(oldp+1078,(vlTOPp->Benes__DOT__r_mux_bus_ff_469));
            tracep->chgSData(oldp+1079,(vlTOPp->Benes__DOT__imm_switch_235__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1080,(vlTOPp->Benes__DOT__imm_switch_235__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1081,(vlTOPp->Benes__DOT__r_mux_bus_ff_470));
            tracep->chgBit(oldp+1082,(vlTOPp->Benes__DOT__r_mux_bus_ff_471));
            tracep->chgSData(oldp+1083,(vlTOPp->Benes__DOT__imm_switch_236__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1084,(vlTOPp->Benes__DOT__imm_switch_271__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1085,(vlTOPp->Benes__DOT__r_mux_bus_ff_472));
            tracep->chgBit(oldp+1086,(vlTOPp->Benes__DOT__r_mux_bus_ff_473));
            tracep->chgSData(oldp+1087,(vlTOPp->Benes__DOT__imm_switch_237__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1088,(vlTOPp->Benes__DOT__r_mux_bus_ff_474));
            tracep->chgBit(oldp+1089,(vlTOPp->Benes__DOT__r_mux_bus_ff_475));
            tracep->chgSData(oldp+1090,(vlTOPp->Benes__DOT__imm_switch_238__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1091,(vlTOPp->Benes__DOT__r_mux_bus_ff_476));
            tracep->chgBit(oldp+1092,(vlTOPp->Benes__DOT__r_mux_bus_ff_477));
            tracep->chgSData(oldp+1093,(vlTOPp->Benes__DOT__imm_switch_239__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1094,(vlTOPp->Benes__DOT__r_mux_bus_ff_478));
            tracep->chgBit(oldp+1095,(vlTOPp->Benes__DOT__r_mux_bus_ff_479));
            tracep->chgSData(oldp+1096,(vlTOPp->Benes__DOT__imm_switch_240__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1097,(vlTOPp->Benes__DOT__imm_switch_240__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1098,(vlTOPp->Benes__DOT__r_mux_bus_ff_480));
            tracep->chgBit(oldp+1099,(vlTOPp->Benes__DOT__r_mux_bus_ff_481));
            tracep->chgSData(oldp+1100,(vlTOPp->Benes__DOT__imm_switch_241__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1101,(vlTOPp->Benes__DOT__imm_switch_276__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1102,(vlTOPp->Benes__DOT__r_mux_bus_ff_482));
            tracep->chgBit(oldp+1103,(vlTOPp->Benes__DOT__r_mux_bus_ff_483));
            tracep->chgBit(oldp+1104,(vlTOPp->Benes__DOT__r_mux_bus_ff_484));
            tracep->chgBit(oldp+1105,(vlTOPp->Benes__DOT__r_mux_bus_ff_485));
            tracep->chgSData(oldp+1106,(vlTOPp->Benes__DOT__imm_switch_243__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1107,(vlTOPp->Benes__DOT__r_mux_bus_ff_486));
            tracep->chgBit(oldp+1108,(vlTOPp->Benes__DOT__r_mux_bus_ff_487));
            tracep->chgSData(oldp+1109,(vlTOPp->Benes__DOT__imm_switch_244__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1110,(vlTOPp->Benes__DOT__imm_switch_244__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1111,(vlTOPp->Benes__DOT__r_mux_bus_ff_488));
            tracep->chgBit(oldp+1112,(vlTOPp->Benes__DOT__r_mux_bus_ff_489));
            tracep->chgSData(oldp+1113,(vlTOPp->Benes__DOT__imm_switch_245__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1114,(vlTOPp->Benes__DOT__imm_switch_280__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1115,(vlTOPp->Benes__DOT__r_mux_bus_ff_490));
            tracep->chgBit(oldp+1116,(vlTOPp->Benes__DOT__r_mux_bus_ff_491));
            tracep->chgSData(oldp+1117,(vlTOPp->Benes__DOT__imm_switch_246__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1118,(vlTOPp->Benes__DOT__r_mux_bus_ff_492));
            tracep->chgBit(oldp+1119,(vlTOPp->Benes__DOT__r_mux_bus_ff_493));
            tracep->chgSData(oldp+1120,(vlTOPp->Benes__DOT__imm_switch_247__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1121,(vlTOPp->Benes__DOT__r_mux_bus_ff_494));
            tracep->chgBit(oldp+1122,(vlTOPp->Benes__DOT__r_mux_bus_ff_495));
            tracep->chgSData(oldp+1123,(vlTOPp->Benes__DOT__imm_switch_248__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1124,(vlTOPp->Benes__DOT__r_mux_bus_ff_496));
            tracep->chgBit(oldp+1125,(vlTOPp->Benes__DOT__r_mux_bus_ff_497));
            tracep->chgSData(oldp+1126,(vlTOPp->Benes__DOT__imm_switch_249__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1127,(vlTOPp->Benes__DOT__imm_switch_249__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1128,(vlTOPp->Benes__DOT__r_mux_bus_ff_498));
            tracep->chgBit(oldp+1129,(vlTOPp->Benes__DOT__r_mux_bus_ff_499));
            tracep->chgSData(oldp+1130,(vlTOPp->Benes__DOT__imm_switch_250__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1131,(vlTOPp->Benes__DOT__imm_switch_285__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1132,(vlTOPp->Benes__DOT__r_mux_bus_ff_500));
            tracep->chgBit(oldp+1133,(vlTOPp->Benes__DOT__r_mux_bus_ff_501));
            tracep->chgBit(oldp+1134,(vlTOPp->Benes__DOT__r_mux_bus_ff_502));
            tracep->chgBit(oldp+1135,(vlTOPp->Benes__DOT__r_mux_bus_ff_503));
            tracep->chgSData(oldp+1136,(vlTOPp->Benes__DOT__imm_switch_252__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1137,(vlTOPp->Benes__DOT__imm_switch_252__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1138,(vlTOPp->Benes__DOT__r_mux_bus_ff_504));
            tracep->chgBit(oldp+1139,(vlTOPp->Benes__DOT__r_mux_bus_ff_505));
            tracep->chgSData(oldp+1140,(vlTOPp->Benes__DOT__imm_switch_253__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1141,(vlTOPp->Benes__DOT__imm_switch_270__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1142,(vlTOPp->Benes__DOT__r_mux_bus_ff_506));
            tracep->chgBit(oldp+1143,(vlTOPp->Benes__DOT__r_mux_bus_ff_507));
            tracep->chgSData(oldp+1144,(vlTOPp->Benes__DOT__imm_switch_254__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1145,(vlTOPp->Benes__DOT__r_mux_bus_ff_508));
            tracep->chgBit(oldp+1146,(vlTOPp->Benes__DOT__r_mux_bus_ff_509));
            tracep->chgSData(oldp+1147,(vlTOPp->Benes__DOT__imm_switch_255__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1148,(vlTOPp->Benes__DOT__r_mux_bus_ff_510));
            tracep->chgBit(oldp+1149,(vlTOPp->Benes__DOT__r_mux_bus_ff_511));
            tracep->chgSData(oldp+1150,(vlTOPp->Benes__DOT__imm_switch_256__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1151,(vlTOPp->Benes__DOT__r_mux_bus_ff_512));
            tracep->chgBit(oldp+1152,(vlTOPp->Benes__DOT__r_mux_bus_ff_513));
            tracep->chgSData(oldp+1153,(vlTOPp->Benes__DOT__imm_switch_257__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1154,(vlTOPp->Benes__DOT__r_mux_bus_ff_514));
            tracep->chgBit(oldp+1155,(vlTOPp->Benes__DOT__r_mux_bus_ff_515));
            tracep->chgSData(oldp+1156,(vlTOPp->Benes__DOT__imm_switch_258__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1157,(vlTOPp->Benes__DOT__r_mux_bus_ff_516));
            tracep->chgBit(oldp+1158,(vlTOPp->Benes__DOT__r_mux_bus_ff_517));
            tracep->chgSData(oldp+1159,(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1160,(vlTOPp->Benes__DOT__imm_switch_259__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1161,(vlTOPp->Benes__DOT__r_mux_bus_ff_518));
            tracep->chgBit(oldp+1162,(vlTOPp->Benes__DOT__r_mux_bus_ff_519));
            tracep->chgSData(oldp+1163,(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1164,(vlTOPp->Benes__DOT__r_mux_bus_ff_520));
            tracep->chgBit(oldp+1165,(vlTOPp->Benes__DOT__r_mux_bus_ff_521));
            tracep->chgSData(oldp+1166,(vlTOPp->Benes__DOT__imm_switch_261__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1167,(vlTOPp->Benes__DOT__imm_switch_261__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1168,(vlTOPp->Benes__DOT__r_mux_bus_ff_522));
            tracep->chgBit(oldp+1169,(vlTOPp->Benes__DOT__r_mux_bus_ff_523));
            tracep->chgSData(oldp+1170,(vlTOPp->Benes__DOT__imm_switch_262__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1171,(vlTOPp->Benes__DOT__imm_switch_279__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1172,(vlTOPp->Benes__DOT__r_mux_bus_ff_524));
            tracep->chgBit(oldp+1173,(vlTOPp->Benes__DOT__r_mux_bus_ff_525));
            tracep->chgSData(oldp+1174,(vlTOPp->Benes__DOT__imm_switch_263__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1175,(vlTOPp->Benes__DOT__r_mux_bus_ff_526));
            tracep->chgBit(oldp+1176,(vlTOPp->Benes__DOT__r_mux_bus_ff_527));
            tracep->chgSData(oldp+1177,(vlTOPp->Benes__DOT__imm_switch_264__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1178,(vlTOPp->Benes__DOT__r_mux_bus_ff_528));
            tracep->chgBit(oldp+1179,(vlTOPp->Benes__DOT__r_mux_bus_ff_529));
            tracep->chgSData(oldp+1180,(vlTOPp->Benes__DOT__imm_switch_265__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1181,(vlTOPp->Benes__DOT__r_mux_bus_ff_530));
            tracep->chgBit(oldp+1182,(vlTOPp->Benes__DOT__r_mux_bus_ff_531));
            tracep->chgSData(oldp+1183,(vlTOPp->Benes__DOT__imm_switch_266__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1184,(vlTOPp->Benes__DOT__r_mux_bus_ff_532));
            tracep->chgBit(oldp+1185,(vlTOPp->Benes__DOT__r_mux_bus_ff_533));
            tracep->chgSData(oldp+1186,(vlTOPp->Benes__DOT__imm_switch_267__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1187,(vlTOPp->Benes__DOT__r_mux_bus_ff_534));
            tracep->chgBit(oldp+1188,(vlTOPp->Benes__DOT__r_mux_bus_ff_535));
            tracep->chgSData(oldp+1189,(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux0_io_o),16);
            tracep->chgSData(oldp+1190,(vlTOPp->Benes__DOT__imm_switch_268__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1191,(vlTOPp->Benes__DOT__r_mux_bus_ff_536));
            tracep->chgBit(oldp+1192,(vlTOPp->Benes__DOT__r_mux_bus_ff_537));
            tracep->chgSData(oldp+1193,(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux1_io_o),16);
            tracep->chgBit(oldp+1194,(vlTOPp->Benes__DOT__r_mux_bus_ff_538));
            tracep->chgBit(oldp+1195,(vlTOPp->Benes__DOT__r_mux_bus_ff_539));
            tracep->chgSData(oldp+1196,(vlTOPp->Benes__DOT__imm_switch_270__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1197,(vlTOPp->Benes__DOT__r_mux_bus_ff_540));
            tracep->chgBit(oldp+1198,(vlTOPp->Benes__DOT__r_mux_bus_ff_541));
            tracep->chgSData(oldp+1199,(vlTOPp->Benes__DOT__imm_switch_271__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1200,(vlTOPp->Benes__DOT__r_mux_bus_ff_542));
            tracep->chgBit(oldp+1201,(vlTOPp->Benes__DOT__r_mux_bus_ff_543));
            tracep->chgSData(oldp+1202,(vlTOPp->Benes__DOT__imm_switch_272__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1203,(vlTOPp->Benes__DOT__r_mux_bus_ff_544));
            tracep->chgBit(oldp+1204,(vlTOPp->Benes__DOT__r_mux_bus_ff_545));
            tracep->chgSData(oldp+1205,(vlTOPp->Benes__DOT__imm_switch_273__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1206,(vlTOPp->Benes__DOT__r_mux_bus_ff_546));
            tracep->chgBit(oldp+1207,(vlTOPp->Benes__DOT__r_mux_bus_ff_547));
            tracep->chgSData(oldp+1208,(vlTOPp->Benes__DOT__imm_switch_274__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1209,(vlTOPp->Benes__DOT__r_mux_bus_ff_548));
            tracep->chgBit(oldp+1210,(vlTOPp->Benes__DOT__r_mux_bus_ff_549));
            tracep->chgSData(oldp+1211,(vlTOPp->Benes__DOT__imm_switch_275__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1212,(vlTOPp->Benes__DOT__r_mux_bus_ff_550));
            tracep->chgBit(oldp+1213,(vlTOPp->Benes__DOT__r_mux_bus_ff_551));
            tracep->chgSData(oldp+1214,(vlTOPp->Benes__DOT__imm_switch_276__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1215,(vlTOPp->Benes__DOT__r_mux_bus_ff_552));
            tracep->chgBit(oldp+1216,(vlTOPp->Benes__DOT__r_mux_bus_ff_553));
            tracep->chgSData(oldp+1217,(vlTOPp->Benes__DOT__imm_switch_277__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1218,(vlTOPp->Benes__DOT__r_mux_bus_ff_554));
            tracep->chgBit(oldp+1219,(vlTOPp->Benes__DOT__r_mux_bus_ff_555));
            tracep->chgBit(oldp+1220,(vlTOPp->Benes__DOT__r_mux_bus_ff_556));
            tracep->chgBit(oldp+1221,(vlTOPp->Benes__DOT__r_mux_bus_ff_557));
            tracep->chgSData(oldp+1222,(vlTOPp->Benes__DOT__imm_switch_279__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1223,(vlTOPp->Benes__DOT__r_mux_bus_ff_558));
            tracep->chgBit(oldp+1224,(vlTOPp->Benes__DOT__r_mux_bus_ff_559));
            tracep->chgSData(oldp+1225,(vlTOPp->Benes__DOT__imm_switch_280__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1226,(vlTOPp->Benes__DOT__r_mux_bus_ff_560));
            tracep->chgBit(oldp+1227,(vlTOPp->Benes__DOT__r_mux_bus_ff_561));
            tracep->chgSData(oldp+1228,(vlTOPp->Benes__DOT__imm_switch_281__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1229,(vlTOPp->Benes__DOT__r_mux_bus_ff_562));
            tracep->chgBit(oldp+1230,(vlTOPp->Benes__DOT__r_mux_bus_ff_563));
            tracep->chgSData(oldp+1231,(vlTOPp->Benes__DOT__imm_switch_282__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1232,(vlTOPp->Benes__DOT__r_mux_bus_ff_564));
            tracep->chgBit(oldp+1233,(vlTOPp->Benes__DOT__r_mux_bus_ff_565));
            tracep->chgSData(oldp+1234,(vlTOPp->Benes__DOT__imm_switch_283__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1235,(vlTOPp->Benes__DOT__r_mux_bus_ff_566));
            tracep->chgBit(oldp+1236,(vlTOPp->Benes__DOT__r_mux_bus_ff_567));
            tracep->chgSData(oldp+1237,(vlTOPp->Benes__DOT__imm_switch_284__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1238,(vlTOPp->Benes__DOT__r_mux_bus_ff_568));
            tracep->chgBit(oldp+1239,(vlTOPp->Benes__DOT__r_mux_bus_ff_569));
            tracep->chgSData(oldp+1240,(vlTOPp->Benes__DOT__imm_switch_285__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1241,(vlTOPp->Benes__DOT__r_mux_bus_ff_570));
            tracep->chgBit(oldp+1242,(vlTOPp->Benes__DOT__r_mux_bus_ff_571));
            tracep->chgSData(oldp+1243,(vlTOPp->Benes__DOT__imm_switch_286__DOT__mux0_io_o),16);
            tracep->chgBit(oldp+1244,(vlTOPp->Benes__DOT__r_mux_bus_ff_572));
            tracep->chgBit(oldp+1245,(vlTOPp->Benes__DOT__r_mux_bus_ff_573));
            tracep->chgBit(oldp+1246,(vlTOPp->Benes__DOT__r_mux_bus_ff_574));
            tracep->chgBit(oldp+1247,(vlTOPp->Benes__DOT__r_mux_bus_ff_575));
        }
        tracep->chgBit(oldp+1248,(vlTOPp->clock));
        tracep->chgBit(oldp+1249,(vlTOPp->reset));
        tracep->chgSData(oldp+1250,(vlTOPp->io_i_data_bus_0),16);
        tracep->chgSData(oldp+1251,(vlTOPp->io_i_data_bus_1),16);
        tracep->chgSData(oldp+1252,(vlTOPp->io_i_data_bus_2),16);
        tracep->chgSData(oldp+1253,(vlTOPp->io_i_data_bus_3),16);
        tracep->chgSData(oldp+1254,(vlTOPp->io_i_data_bus_4),16);
        tracep->chgSData(oldp+1255,(vlTOPp->io_i_data_bus_5),16);
        tracep->chgSData(oldp+1256,(vlTOPp->io_i_data_bus_6),16);
        tracep->chgSData(oldp+1257,(vlTOPp->io_i_data_bus_7),16);
        tracep->chgSData(oldp+1258,(vlTOPp->io_i_data_bus_8),16);
        tracep->chgSData(oldp+1259,(vlTOPp->io_i_data_bus_9),16);
        tracep->chgSData(oldp+1260,(vlTOPp->io_i_data_bus_10),16);
        tracep->chgSData(oldp+1261,(vlTOPp->io_i_data_bus_11),16);
        tracep->chgSData(oldp+1262,(vlTOPp->io_i_data_bus_12),16);
        tracep->chgSData(oldp+1263,(vlTOPp->io_i_data_bus_13),16);
        tracep->chgSData(oldp+1264,(vlTOPp->io_i_data_bus_14),16);
        tracep->chgSData(oldp+1265,(vlTOPp->io_i_data_bus_15),16);
        tracep->chgSData(oldp+1266,(vlTOPp->io_i_data_bus_16),16);
        tracep->chgSData(oldp+1267,(vlTOPp->io_i_data_bus_17),16);
        tracep->chgSData(oldp+1268,(vlTOPp->io_i_data_bus_18),16);
        tracep->chgSData(oldp+1269,(vlTOPp->io_i_data_bus_19),16);
        tracep->chgSData(oldp+1270,(vlTOPp->io_i_data_bus_20),16);
        tracep->chgSData(oldp+1271,(vlTOPp->io_i_data_bus_21),16);
        tracep->chgSData(oldp+1272,(vlTOPp->io_i_data_bus_22),16);
        tracep->chgSData(oldp+1273,(vlTOPp->io_i_data_bus_23),16);
        tracep->chgSData(oldp+1274,(vlTOPp->io_i_data_bus_24),16);
        tracep->chgSData(oldp+1275,(vlTOPp->io_i_data_bus_25),16);
        tracep->chgSData(oldp+1276,(vlTOPp->io_i_data_bus_26),16);
        tracep->chgSData(oldp+1277,(vlTOPp->io_i_data_bus_27),16);
        tracep->chgSData(oldp+1278,(vlTOPp->io_i_data_bus_28),16);
        tracep->chgSData(oldp+1279,(vlTOPp->io_i_data_bus_29),16);
        tracep->chgSData(oldp+1280,(vlTOPp->io_i_data_bus_30),16);
        tracep->chgSData(oldp+1281,(vlTOPp->io_i_data_bus_31),16);
        tracep->chgBit(oldp+1282,(vlTOPp->io_i_mux_bus_0));
        tracep->chgBit(oldp+1283,(vlTOPp->io_i_mux_bus_1));
        tracep->chgBit(oldp+1284,(vlTOPp->io_i_mux_bus_2));
        tracep->chgBit(oldp+1285,(vlTOPp->io_i_mux_bus_3));
        tracep->chgBit(oldp+1286,(vlTOPp->io_i_mux_bus_4));
        tracep->chgBit(oldp+1287,(vlTOPp->io_i_mux_bus_5));
        tracep->chgBit(oldp+1288,(vlTOPp->io_i_mux_bus_6));
        tracep->chgBit(oldp+1289,(vlTOPp->io_i_mux_bus_7));
        tracep->chgBit(oldp+1290,(vlTOPp->io_i_mux_bus_8));
        tracep->chgBit(oldp+1291,(vlTOPp->io_i_mux_bus_9));
        tracep->chgBit(oldp+1292,(vlTOPp->io_i_mux_bus_10));
        tracep->chgBit(oldp+1293,(vlTOPp->io_i_mux_bus_11));
        tracep->chgBit(oldp+1294,(vlTOPp->io_i_mux_bus_12));
        tracep->chgBit(oldp+1295,(vlTOPp->io_i_mux_bus_13));
        tracep->chgBit(oldp+1296,(vlTOPp->io_i_mux_bus_14));
        tracep->chgBit(oldp+1297,(vlTOPp->io_i_mux_bus_15));
        tracep->chgBit(oldp+1298,(vlTOPp->io_i_mux_bus_16));
        tracep->chgBit(oldp+1299,(vlTOPp->io_i_mux_bus_17));
        tracep->chgBit(oldp+1300,(vlTOPp->io_i_mux_bus_18));
        tracep->chgBit(oldp+1301,(vlTOPp->io_i_mux_bus_19));
        tracep->chgBit(oldp+1302,(vlTOPp->io_i_mux_bus_20));
        tracep->chgBit(oldp+1303,(vlTOPp->io_i_mux_bus_21));
        tracep->chgBit(oldp+1304,(vlTOPp->io_i_mux_bus_22));
        tracep->chgBit(oldp+1305,(vlTOPp->io_i_mux_bus_23));
        tracep->chgBit(oldp+1306,(vlTOPp->io_i_mux_bus_24));
        tracep->chgBit(oldp+1307,(vlTOPp->io_i_mux_bus_25));
        tracep->chgBit(oldp+1308,(vlTOPp->io_i_mux_bus_26));
        tracep->chgBit(oldp+1309,(vlTOPp->io_i_mux_bus_27));
        tracep->chgBit(oldp+1310,(vlTOPp->io_i_mux_bus_28));
        tracep->chgBit(oldp+1311,(vlTOPp->io_i_mux_bus_29));
        tracep->chgBit(oldp+1312,(vlTOPp->io_i_mux_bus_30));
        tracep->chgBit(oldp+1313,(vlTOPp->io_i_mux_bus_31));
        tracep->chgBit(oldp+1314,(vlTOPp->io_i_mux_bus_32));
        tracep->chgBit(oldp+1315,(vlTOPp->io_i_mux_bus_33));
        tracep->chgBit(oldp+1316,(vlTOPp->io_i_mux_bus_34));
        tracep->chgBit(oldp+1317,(vlTOPp->io_i_mux_bus_35));
        tracep->chgBit(oldp+1318,(vlTOPp->io_i_mux_bus_36));
        tracep->chgBit(oldp+1319,(vlTOPp->io_i_mux_bus_37));
        tracep->chgBit(oldp+1320,(vlTOPp->io_i_mux_bus_38));
        tracep->chgBit(oldp+1321,(vlTOPp->io_i_mux_bus_39));
        tracep->chgBit(oldp+1322,(vlTOPp->io_i_mux_bus_40));
        tracep->chgBit(oldp+1323,(vlTOPp->io_i_mux_bus_41));
        tracep->chgBit(oldp+1324,(vlTOPp->io_i_mux_bus_42));
        tracep->chgBit(oldp+1325,(vlTOPp->io_i_mux_bus_43));
        tracep->chgBit(oldp+1326,(vlTOPp->io_i_mux_bus_44));
        tracep->chgBit(oldp+1327,(vlTOPp->io_i_mux_bus_45));
        tracep->chgBit(oldp+1328,(vlTOPp->io_i_mux_bus_46));
        tracep->chgBit(oldp+1329,(vlTOPp->io_i_mux_bus_47));
        tracep->chgBit(oldp+1330,(vlTOPp->io_i_mux_bus_48));
        tracep->chgBit(oldp+1331,(vlTOPp->io_i_mux_bus_49));
        tracep->chgBit(oldp+1332,(vlTOPp->io_i_mux_bus_50));
        tracep->chgBit(oldp+1333,(vlTOPp->io_i_mux_bus_51));
        tracep->chgBit(oldp+1334,(vlTOPp->io_i_mux_bus_52));
        tracep->chgBit(oldp+1335,(vlTOPp->io_i_mux_bus_53));
        tracep->chgBit(oldp+1336,(vlTOPp->io_i_mux_bus_54));
        tracep->chgBit(oldp+1337,(vlTOPp->io_i_mux_bus_55));
        tracep->chgBit(oldp+1338,(vlTOPp->io_i_mux_bus_56));
        tracep->chgBit(oldp+1339,(vlTOPp->io_i_mux_bus_57));
        tracep->chgBit(oldp+1340,(vlTOPp->io_i_mux_bus_58));
        tracep->chgBit(oldp+1341,(vlTOPp->io_i_mux_bus_59));
        tracep->chgBit(oldp+1342,(vlTOPp->io_i_mux_bus_60));
        tracep->chgBit(oldp+1343,(vlTOPp->io_i_mux_bus_61));
        tracep->chgBit(oldp+1344,(vlTOPp->io_i_mux_bus_62));
        tracep->chgBit(oldp+1345,(vlTOPp->io_i_mux_bus_63));
        tracep->chgBit(oldp+1346,(vlTOPp->io_i_mux_bus_64));
        tracep->chgBit(oldp+1347,(vlTOPp->io_i_mux_bus_65));
        tracep->chgBit(oldp+1348,(vlTOPp->io_i_mux_bus_66));
        tracep->chgBit(oldp+1349,(vlTOPp->io_i_mux_bus_67));
        tracep->chgBit(oldp+1350,(vlTOPp->io_i_mux_bus_68));
        tracep->chgBit(oldp+1351,(vlTOPp->io_i_mux_bus_69));
        tracep->chgBit(oldp+1352,(vlTOPp->io_i_mux_bus_70));
        tracep->chgBit(oldp+1353,(vlTOPp->io_i_mux_bus_71));
        tracep->chgBit(oldp+1354,(vlTOPp->io_i_mux_bus_72));
        tracep->chgBit(oldp+1355,(vlTOPp->io_i_mux_bus_73));
        tracep->chgBit(oldp+1356,(vlTOPp->io_i_mux_bus_74));
        tracep->chgBit(oldp+1357,(vlTOPp->io_i_mux_bus_75));
        tracep->chgBit(oldp+1358,(vlTOPp->io_i_mux_bus_76));
        tracep->chgBit(oldp+1359,(vlTOPp->io_i_mux_bus_77));
        tracep->chgBit(oldp+1360,(vlTOPp->io_i_mux_bus_78));
        tracep->chgBit(oldp+1361,(vlTOPp->io_i_mux_bus_79));
        tracep->chgBit(oldp+1362,(vlTOPp->io_i_mux_bus_80));
        tracep->chgBit(oldp+1363,(vlTOPp->io_i_mux_bus_81));
        tracep->chgBit(oldp+1364,(vlTOPp->io_i_mux_bus_82));
        tracep->chgBit(oldp+1365,(vlTOPp->io_i_mux_bus_83));
        tracep->chgBit(oldp+1366,(vlTOPp->io_i_mux_bus_84));
        tracep->chgBit(oldp+1367,(vlTOPp->io_i_mux_bus_85));
        tracep->chgBit(oldp+1368,(vlTOPp->io_i_mux_bus_86));
        tracep->chgBit(oldp+1369,(vlTOPp->io_i_mux_bus_87));
        tracep->chgBit(oldp+1370,(vlTOPp->io_i_mux_bus_88));
        tracep->chgBit(oldp+1371,(vlTOPp->io_i_mux_bus_89));
        tracep->chgBit(oldp+1372,(vlTOPp->io_i_mux_bus_90));
        tracep->chgBit(oldp+1373,(vlTOPp->io_i_mux_bus_91));
        tracep->chgBit(oldp+1374,(vlTOPp->io_i_mux_bus_92));
        tracep->chgBit(oldp+1375,(vlTOPp->io_i_mux_bus_93));
        tracep->chgBit(oldp+1376,(vlTOPp->io_i_mux_bus_94));
        tracep->chgBit(oldp+1377,(vlTOPp->io_i_mux_bus_95));
        tracep->chgBit(oldp+1378,(vlTOPp->io_i_mux_bus_96));
        tracep->chgBit(oldp+1379,(vlTOPp->io_i_mux_bus_97));
        tracep->chgBit(oldp+1380,(vlTOPp->io_i_mux_bus_98));
        tracep->chgBit(oldp+1381,(vlTOPp->io_i_mux_bus_99));
        tracep->chgBit(oldp+1382,(vlTOPp->io_i_mux_bus_100));
        tracep->chgBit(oldp+1383,(vlTOPp->io_i_mux_bus_101));
        tracep->chgBit(oldp+1384,(vlTOPp->io_i_mux_bus_102));
        tracep->chgBit(oldp+1385,(vlTOPp->io_i_mux_bus_103));
        tracep->chgBit(oldp+1386,(vlTOPp->io_i_mux_bus_104));
        tracep->chgBit(oldp+1387,(vlTOPp->io_i_mux_bus_105));
        tracep->chgBit(oldp+1388,(vlTOPp->io_i_mux_bus_106));
        tracep->chgBit(oldp+1389,(vlTOPp->io_i_mux_bus_107));
        tracep->chgBit(oldp+1390,(vlTOPp->io_i_mux_bus_108));
        tracep->chgBit(oldp+1391,(vlTOPp->io_i_mux_bus_109));
        tracep->chgBit(oldp+1392,(vlTOPp->io_i_mux_bus_110));
        tracep->chgBit(oldp+1393,(vlTOPp->io_i_mux_bus_111));
        tracep->chgBit(oldp+1394,(vlTOPp->io_i_mux_bus_112));
        tracep->chgBit(oldp+1395,(vlTOPp->io_i_mux_bus_113));
        tracep->chgBit(oldp+1396,(vlTOPp->io_i_mux_bus_114));
        tracep->chgBit(oldp+1397,(vlTOPp->io_i_mux_bus_115));
        tracep->chgBit(oldp+1398,(vlTOPp->io_i_mux_bus_116));
        tracep->chgBit(oldp+1399,(vlTOPp->io_i_mux_bus_117));
        tracep->chgBit(oldp+1400,(vlTOPp->io_i_mux_bus_118));
        tracep->chgBit(oldp+1401,(vlTOPp->io_i_mux_bus_119));
        tracep->chgBit(oldp+1402,(vlTOPp->io_i_mux_bus_120));
        tracep->chgBit(oldp+1403,(vlTOPp->io_i_mux_bus_121));
        tracep->chgBit(oldp+1404,(vlTOPp->io_i_mux_bus_122));
        tracep->chgBit(oldp+1405,(vlTOPp->io_i_mux_bus_123));
        tracep->chgBit(oldp+1406,(vlTOPp->io_i_mux_bus_124));
        tracep->chgBit(oldp+1407,(vlTOPp->io_i_mux_bus_125));
        tracep->chgBit(oldp+1408,(vlTOPp->io_i_mux_bus_126));
        tracep->chgBit(oldp+1409,(vlTOPp->io_i_mux_bus_127));
        tracep->chgBit(oldp+1410,(vlTOPp->io_i_mux_bus_128));
        tracep->chgBit(oldp+1411,(vlTOPp->io_i_mux_bus_129));
        tracep->chgBit(oldp+1412,(vlTOPp->io_i_mux_bus_130));
        tracep->chgBit(oldp+1413,(vlTOPp->io_i_mux_bus_131));
        tracep->chgBit(oldp+1414,(vlTOPp->io_i_mux_bus_132));
        tracep->chgBit(oldp+1415,(vlTOPp->io_i_mux_bus_133));
        tracep->chgBit(oldp+1416,(vlTOPp->io_i_mux_bus_134));
        tracep->chgBit(oldp+1417,(vlTOPp->io_i_mux_bus_135));
        tracep->chgBit(oldp+1418,(vlTOPp->io_i_mux_bus_136));
        tracep->chgBit(oldp+1419,(vlTOPp->io_i_mux_bus_137));
        tracep->chgBit(oldp+1420,(vlTOPp->io_i_mux_bus_138));
        tracep->chgBit(oldp+1421,(vlTOPp->io_i_mux_bus_139));
        tracep->chgBit(oldp+1422,(vlTOPp->io_i_mux_bus_140));
        tracep->chgBit(oldp+1423,(vlTOPp->io_i_mux_bus_141));
        tracep->chgBit(oldp+1424,(vlTOPp->io_i_mux_bus_142));
        tracep->chgBit(oldp+1425,(vlTOPp->io_i_mux_bus_143));
        tracep->chgBit(oldp+1426,(vlTOPp->io_i_mux_bus_144));
        tracep->chgBit(oldp+1427,(vlTOPp->io_i_mux_bus_145));
        tracep->chgBit(oldp+1428,(vlTOPp->io_i_mux_bus_146));
        tracep->chgBit(oldp+1429,(vlTOPp->io_i_mux_bus_147));
        tracep->chgBit(oldp+1430,(vlTOPp->io_i_mux_bus_148));
        tracep->chgBit(oldp+1431,(vlTOPp->io_i_mux_bus_149));
        tracep->chgBit(oldp+1432,(vlTOPp->io_i_mux_bus_150));
        tracep->chgBit(oldp+1433,(vlTOPp->io_i_mux_bus_151));
        tracep->chgBit(oldp+1434,(vlTOPp->io_i_mux_bus_152));
        tracep->chgBit(oldp+1435,(vlTOPp->io_i_mux_bus_153));
        tracep->chgBit(oldp+1436,(vlTOPp->io_i_mux_bus_154));
        tracep->chgBit(oldp+1437,(vlTOPp->io_i_mux_bus_155));
        tracep->chgBit(oldp+1438,(vlTOPp->io_i_mux_bus_156));
        tracep->chgBit(oldp+1439,(vlTOPp->io_i_mux_bus_157));
        tracep->chgBit(oldp+1440,(vlTOPp->io_i_mux_bus_158));
        tracep->chgBit(oldp+1441,(vlTOPp->io_i_mux_bus_159));
        tracep->chgBit(oldp+1442,(vlTOPp->io_i_mux_bus_160));
        tracep->chgBit(oldp+1443,(vlTOPp->io_i_mux_bus_161));
        tracep->chgBit(oldp+1444,(vlTOPp->io_i_mux_bus_162));
        tracep->chgBit(oldp+1445,(vlTOPp->io_i_mux_bus_163));
        tracep->chgBit(oldp+1446,(vlTOPp->io_i_mux_bus_164));
        tracep->chgBit(oldp+1447,(vlTOPp->io_i_mux_bus_165));
        tracep->chgBit(oldp+1448,(vlTOPp->io_i_mux_bus_166));
        tracep->chgBit(oldp+1449,(vlTOPp->io_i_mux_bus_167));
        tracep->chgBit(oldp+1450,(vlTOPp->io_i_mux_bus_168));
        tracep->chgBit(oldp+1451,(vlTOPp->io_i_mux_bus_169));
        tracep->chgBit(oldp+1452,(vlTOPp->io_i_mux_bus_170));
        tracep->chgBit(oldp+1453,(vlTOPp->io_i_mux_bus_171));
        tracep->chgBit(oldp+1454,(vlTOPp->io_i_mux_bus_172));
        tracep->chgBit(oldp+1455,(vlTOPp->io_i_mux_bus_173));
        tracep->chgBit(oldp+1456,(vlTOPp->io_i_mux_bus_174));
        tracep->chgBit(oldp+1457,(vlTOPp->io_i_mux_bus_175));
        tracep->chgBit(oldp+1458,(vlTOPp->io_i_mux_bus_176));
        tracep->chgBit(oldp+1459,(vlTOPp->io_i_mux_bus_177));
        tracep->chgBit(oldp+1460,(vlTOPp->io_i_mux_bus_178));
        tracep->chgBit(oldp+1461,(vlTOPp->io_i_mux_bus_179));
        tracep->chgBit(oldp+1462,(vlTOPp->io_i_mux_bus_180));
        tracep->chgBit(oldp+1463,(vlTOPp->io_i_mux_bus_181));
        tracep->chgBit(oldp+1464,(vlTOPp->io_i_mux_bus_182));
        tracep->chgBit(oldp+1465,(vlTOPp->io_i_mux_bus_183));
        tracep->chgBit(oldp+1466,(vlTOPp->io_i_mux_bus_184));
        tracep->chgBit(oldp+1467,(vlTOPp->io_i_mux_bus_185));
        tracep->chgBit(oldp+1468,(vlTOPp->io_i_mux_bus_186));
        tracep->chgBit(oldp+1469,(vlTOPp->io_i_mux_bus_187));
        tracep->chgBit(oldp+1470,(vlTOPp->io_i_mux_bus_188));
        tracep->chgBit(oldp+1471,(vlTOPp->io_i_mux_bus_189));
        tracep->chgBit(oldp+1472,(vlTOPp->io_i_mux_bus_190));
        tracep->chgBit(oldp+1473,(vlTOPp->io_i_mux_bus_191));
        tracep->chgBit(oldp+1474,(vlTOPp->io_i_mux_bus_192));
        tracep->chgBit(oldp+1475,(vlTOPp->io_i_mux_bus_193));
        tracep->chgBit(oldp+1476,(vlTOPp->io_i_mux_bus_194));
        tracep->chgBit(oldp+1477,(vlTOPp->io_i_mux_bus_195));
        tracep->chgBit(oldp+1478,(vlTOPp->io_i_mux_bus_196));
        tracep->chgBit(oldp+1479,(vlTOPp->io_i_mux_bus_197));
        tracep->chgBit(oldp+1480,(vlTOPp->io_i_mux_bus_198));
        tracep->chgBit(oldp+1481,(vlTOPp->io_i_mux_bus_199));
        tracep->chgBit(oldp+1482,(vlTOPp->io_i_mux_bus_200));
        tracep->chgBit(oldp+1483,(vlTOPp->io_i_mux_bus_201));
        tracep->chgBit(oldp+1484,(vlTOPp->io_i_mux_bus_202));
        tracep->chgBit(oldp+1485,(vlTOPp->io_i_mux_bus_203));
        tracep->chgBit(oldp+1486,(vlTOPp->io_i_mux_bus_204));
        tracep->chgBit(oldp+1487,(vlTOPp->io_i_mux_bus_205));
        tracep->chgBit(oldp+1488,(vlTOPp->io_i_mux_bus_206));
        tracep->chgBit(oldp+1489,(vlTOPp->io_i_mux_bus_207));
        tracep->chgBit(oldp+1490,(vlTOPp->io_i_mux_bus_208));
        tracep->chgBit(oldp+1491,(vlTOPp->io_i_mux_bus_209));
        tracep->chgBit(oldp+1492,(vlTOPp->io_i_mux_bus_210));
        tracep->chgBit(oldp+1493,(vlTOPp->io_i_mux_bus_211));
        tracep->chgBit(oldp+1494,(vlTOPp->io_i_mux_bus_212));
        tracep->chgBit(oldp+1495,(vlTOPp->io_i_mux_bus_213));
        tracep->chgBit(oldp+1496,(vlTOPp->io_i_mux_bus_214));
        tracep->chgBit(oldp+1497,(vlTOPp->io_i_mux_bus_215));
        tracep->chgBit(oldp+1498,(vlTOPp->io_i_mux_bus_216));
        tracep->chgBit(oldp+1499,(vlTOPp->io_i_mux_bus_217));
        tracep->chgBit(oldp+1500,(vlTOPp->io_i_mux_bus_218));
        tracep->chgBit(oldp+1501,(vlTOPp->io_i_mux_bus_219));
        tracep->chgBit(oldp+1502,(vlTOPp->io_i_mux_bus_220));
        tracep->chgBit(oldp+1503,(vlTOPp->io_i_mux_bus_221));
        tracep->chgBit(oldp+1504,(vlTOPp->io_i_mux_bus_222));
        tracep->chgBit(oldp+1505,(vlTOPp->io_i_mux_bus_223));
        tracep->chgBit(oldp+1506,(vlTOPp->io_i_mux_bus_224));
        tracep->chgBit(oldp+1507,(vlTOPp->io_i_mux_bus_225));
        tracep->chgBit(oldp+1508,(vlTOPp->io_i_mux_bus_226));
        tracep->chgBit(oldp+1509,(vlTOPp->io_i_mux_bus_227));
        tracep->chgBit(oldp+1510,(vlTOPp->io_i_mux_bus_228));
        tracep->chgBit(oldp+1511,(vlTOPp->io_i_mux_bus_229));
        tracep->chgBit(oldp+1512,(vlTOPp->io_i_mux_bus_230));
        tracep->chgBit(oldp+1513,(vlTOPp->io_i_mux_bus_231));
        tracep->chgBit(oldp+1514,(vlTOPp->io_i_mux_bus_232));
        tracep->chgBit(oldp+1515,(vlTOPp->io_i_mux_bus_233));
        tracep->chgBit(oldp+1516,(vlTOPp->io_i_mux_bus_234));
        tracep->chgBit(oldp+1517,(vlTOPp->io_i_mux_bus_235));
        tracep->chgBit(oldp+1518,(vlTOPp->io_i_mux_bus_236));
        tracep->chgBit(oldp+1519,(vlTOPp->io_i_mux_bus_237));
        tracep->chgBit(oldp+1520,(vlTOPp->io_i_mux_bus_238));
        tracep->chgBit(oldp+1521,(vlTOPp->io_i_mux_bus_239));
        tracep->chgBit(oldp+1522,(vlTOPp->io_i_mux_bus_240));
        tracep->chgBit(oldp+1523,(vlTOPp->io_i_mux_bus_241));
        tracep->chgBit(oldp+1524,(vlTOPp->io_i_mux_bus_242));
        tracep->chgBit(oldp+1525,(vlTOPp->io_i_mux_bus_243));
        tracep->chgBit(oldp+1526,(vlTOPp->io_i_mux_bus_244));
        tracep->chgBit(oldp+1527,(vlTOPp->io_i_mux_bus_245));
        tracep->chgBit(oldp+1528,(vlTOPp->io_i_mux_bus_246));
        tracep->chgBit(oldp+1529,(vlTOPp->io_i_mux_bus_247));
        tracep->chgBit(oldp+1530,(vlTOPp->io_i_mux_bus_248));
        tracep->chgBit(oldp+1531,(vlTOPp->io_i_mux_bus_249));
        tracep->chgBit(oldp+1532,(vlTOPp->io_i_mux_bus_250));
        tracep->chgBit(oldp+1533,(vlTOPp->io_i_mux_bus_251));
        tracep->chgBit(oldp+1534,(vlTOPp->io_i_mux_bus_252));
        tracep->chgBit(oldp+1535,(vlTOPp->io_i_mux_bus_253));
        tracep->chgBit(oldp+1536,(vlTOPp->io_i_mux_bus_254));
        tracep->chgBit(oldp+1537,(vlTOPp->io_i_mux_bus_255));
        tracep->chgBit(oldp+1538,(vlTOPp->io_i_mux_bus_256));
        tracep->chgBit(oldp+1539,(vlTOPp->io_i_mux_bus_257));
        tracep->chgBit(oldp+1540,(vlTOPp->io_i_mux_bus_258));
        tracep->chgBit(oldp+1541,(vlTOPp->io_i_mux_bus_259));
        tracep->chgBit(oldp+1542,(vlTOPp->io_i_mux_bus_260));
        tracep->chgBit(oldp+1543,(vlTOPp->io_i_mux_bus_261));
        tracep->chgBit(oldp+1544,(vlTOPp->io_i_mux_bus_262));
        tracep->chgBit(oldp+1545,(vlTOPp->io_i_mux_bus_263));
        tracep->chgBit(oldp+1546,(vlTOPp->io_i_mux_bus_264));
        tracep->chgBit(oldp+1547,(vlTOPp->io_i_mux_bus_265));
        tracep->chgBit(oldp+1548,(vlTOPp->io_i_mux_bus_266));
        tracep->chgBit(oldp+1549,(vlTOPp->io_i_mux_bus_267));
        tracep->chgBit(oldp+1550,(vlTOPp->io_i_mux_bus_268));
        tracep->chgBit(oldp+1551,(vlTOPp->io_i_mux_bus_269));
        tracep->chgBit(oldp+1552,(vlTOPp->io_i_mux_bus_270));
        tracep->chgBit(oldp+1553,(vlTOPp->io_i_mux_bus_271));
        tracep->chgBit(oldp+1554,(vlTOPp->io_i_mux_bus_272));
        tracep->chgBit(oldp+1555,(vlTOPp->io_i_mux_bus_273));
        tracep->chgBit(oldp+1556,(vlTOPp->io_i_mux_bus_274));
        tracep->chgBit(oldp+1557,(vlTOPp->io_i_mux_bus_275));
        tracep->chgBit(oldp+1558,(vlTOPp->io_i_mux_bus_276));
        tracep->chgBit(oldp+1559,(vlTOPp->io_i_mux_bus_277));
        tracep->chgBit(oldp+1560,(vlTOPp->io_i_mux_bus_278));
        tracep->chgBit(oldp+1561,(vlTOPp->io_i_mux_bus_279));
        tracep->chgBit(oldp+1562,(vlTOPp->io_i_mux_bus_280));
        tracep->chgBit(oldp+1563,(vlTOPp->io_i_mux_bus_281));
        tracep->chgBit(oldp+1564,(vlTOPp->io_i_mux_bus_282));
        tracep->chgBit(oldp+1565,(vlTOPp->io_i_mux_bus_283));
        tracep->chgBit(oldp+1566,(vlTOPp->io_i_mux_bus_284));
        tracep->chgBit(oldp+1567,(vlTOPp->io_i_mux_bus_285));
        tracep->chgBit(oldp+1568,(vlTOPp->io_i_mux_bus_286));
        tracep->chgBit(oldp+1569,(vlTOPp->io_i_mux_bus_287));
        tracep->chgBit(oldp+1570,(vlTOPp->io_i_mux_bus_288));
        tracep->chgBit(oldp+1571,(vlTOPp->io_i_mux_bus_289));
        tracep->chgBit(oldp+1572,(vlTOPp->io_i_mux_bus_290));
        tracep->chgBit(oldp+1573,(vlTOPp->io_i_mux_bus_291));
        tracep->chgBit(oldp+1574,(vlTOPp->io_i_mux_bus_292));
        tracep->chgBit(oldp+1575,(vlTOPp->io_i_mux_bus_293));
        tracep->chgBit(oldp+1576,(vlTOPp->io_i_mux_bus_294));
        tracep->chgBit(oldp+1577,(vlTOPp->io_i_mux_bus_295));
        tracep->chgBit(oldp+1578,(vlTOPp->io_i_mux_bus_296));
        tracep->chgBit(oldp+1579,(vlTOPp->io_i_mux_bus_297));
        tracep->chgBit(oldp+1580,(vlTOPp->io_i_mux_bus_298));
        tracep->chgBit(oldp+1581,(vlTOPp->io_i_mux_bus_299));
        tracep->chgBit(oldp+1582,(vlTOPp->io_i_mux_bus_300));
        tracep->chgBit(oldp+1583,(vlTOPp->io_i_mux_bus_301));
        tracep->chgBit(oldp+1584,(vlTOPp->io_i_mux_bus_302));
        tracep->chgBit(oldp+1585,(vlTOPp->io_i_mux_bus_303));
        tracep->chgBit(oldp+1586,(vlTOPp->io_i_mux_bus_304));
        tracep->chgBit(oldp+1587,(vlTOPp->io_i_mux_bus_305));
        tracep->chgBit(oldp+1588,(vlTOPp->io_i_mux_bus_306));
        tracep->chgBit(oldp+1589,(vlTOPp->io_i_mux_bus_307));
        tracep->chgBit(oldp+1590,(vlTOPp->io_i_mux_bus_308));
        tracep->chgBit(oldp+1591,(vlTOPp->io_i_mux_bus_309));
        tracep->chgBit(oldp+1592,(vlTOPp->io_i_mux_bus_310));
        tracep->chgBit(oldp+1593,(vlTOPp->io_i_mux_bus_311));
        tracep->chgBit(oldp+1594,(vlTOPp->io_i_mux_bus_312));
        tracep->chgBit(oldp+1595,(vlTOPp->io_i_mux_bus_313));
        tracep->chgBit(oldp+1596,(vlTOPp->io_i_mux_bus_314));
        tracep->chgBit(oldp+1597,(vlTOPp->io_i_mux_bus_315));
        tracep->chgBit(oldp+1598,(vlTOPp->io_i_mux_bus_316));
        tracep->chgBit(oldp+1599,(vlTOPp->io_i_mux_bus_317));
        tracep->chgBit(oldp+1600,(vlTOPp->io_i_mux_bus_318));
        tracep->chgBit(oldp+1601,(vlTOPp->io_i_mux_bus_319));
        tracep->chgBit(oldp+1602,(vlTOPp->io_i_mux_bus_320));
        tracep->chgBit(oldp+1603,(vlTOPp->io_i_mux_bus_321));
        tracep->chgBit(oldp+1604,(vlTOPp->io_i_mux_bus_322));
        tracep->chgBit(oldp+1605,(vlTOPp->io_i_mux_bus_323));
        tracep->chgBit(oldp+1606,(vlTOPp->io_i_mux_bus_324));
        tracep->chgBit(oldp+1607,(vlTOPp->io_i_mux_bus_325));
        tracep->chgBit(oldp+1608,(vlTOPp->io_i_mux_bus_326));
        tracep->chgBit(oldp+1609,(vlTOPp->io_i_mux_bus_327));
        tracep->chgBit(oldp+1610,(vlTOPp->io_i_mux_bus_328));
        tracep->chgBit(oldp+1611,(vlTOPp->io_i_mux_bus_329));
        tracep->chgBit(oldp+1612,(vlTOPp->io_i_mux_bus_330));
        tracep->chgBit(oldp+1613,(vlTOPp->io_i_mux_bus_331));
        tracep->chgBit(oldp+1614,(vlTOPp->io_i_mux_bus_332));
        tracep->chgBit(oldp+1615,(vlTOPp->io_i_mux_bus_333));
        tracep->chgBit(oldp+1616,(vlTOPp->io_i_mux_bus_334));
        tracep->chgBit(oldp+1617,(vlTOPp->io_i_mux_bus_335));
        tracep->chgBit(oldp+1618,(vlTOPp->io_i_mux_bus_336));
        tracep->chgBit(oldp+1619,(vlTOPp->io_i_mux_bus_337));
        tracep->chgBit(oldp+1620,(vlTOPp->io_i_mux_bus_338));
        tracep->chgBit(oldp+1621,(vlTOPp->io_i_mux_bus_339));
        tracep->chgBit(oldp+1622,(vlTOPp->io_i_mux_bus_340));
        tracep->chgBit(oldp+1623,(vlTOPp->io_i_mux_bus_341));
        tracep->chgBit(oldp+1624,(vlTOPp->io_i_mux_bus_342));
        tracep->chgBit(oldp+1625,(vlTOPp->io_i_mux_bus_343));
        tracep->chgBit(oldp+1626,(vlTOPp->io_i_mux_bus_344));
        tracep->chgBit(oldp+1627,(vlTOPp->io_i_mux_bus_345));
        tracep->chgBit(oldp+1628,(vlTOPp->io_i_mux_bus_346));
        tracep->chgBit(oldp+1629,(vlTOPp->io_i_mux_bus_347));
        tracep->chgBit(oldp+1630,(vlTOPp->io_i_mux_bus_348));
        tracep->chgBit(oldp+1631,(vlTOPp->io_i_mux_bus_349));
        tracep->chgBit(oldp+1632,(vlTOPp->io_i_mux_bus_350));
        tracep->chgBit(oldp+1633,(vlTOPp->io_i_mux_bus_351));
        tracep->chgBit(oldp+1634,(vlTOPp->io_i_mux_bus_352));
        tracep->chgBit(oldp+1635,(vlTOPp->io_i_mux_bus_353));
        tracep->chgBit(oldp+1636,(vlTOPp->io_i_mux_bus_354));
        tracep->chgBit(oldp+1637,(vlTOPp->io_i_mux_bus_355));
        tracep->chgBit(oldp+1638,(vlTOPp->io_i_mux_bus_356));
        tracep->chgBit(oldp+1639,(vlTOPp->io_i_mux_bus_357));
        tracep->chgBit(oldp+1640,(vlTOPp->io_i_mux_bus_358));
        tracep->chgBit(oldp+1641,(vlTOPp->io_i_mux_bus_359));
        tracep->chgBit(oldp+1642,(vlTOPp->io_i_mux_bus_360));
        tracep->chgBit(oldp+1643,(vlTOPp->io_i_mux_bus_361));
        tracep->chgBit(oldp+1644,(vlTOPp->io_i_mux_bus_362));
        tracep->chgBit(oldp+1645,(vlTOPp->io_i_mux_bus_363));
        tracep->chgBit(oldp+1646,(vlTOPp->io_i_mux_bus_364));
        tracep->chgBit(oldp+1647,(vlTOPp->io_i_mux_bus_365));
        tracep->chgBit(oldp+1648,(vlTOPp->io_i_mux_bus_366));
        tracep->chgBit(oldp+1649,(vlTOPp->io_i_mux_bus_367));
        tracep->chgBit(oldp+1650,(vlTOPp->io_i_mux_bus_368));
        tracep->chgBit(oldp+1651,(vlTOPp->io_i_mux_bus_369));
        tracep->chgBit(oldp+1652,(vlTOPp->io_i_mux_bus_370));
        tracep->chgBit(oldp+1653,(vlTOPp->io_i_mux_bus_371));
        tracep->chgBit(oldp+1654,(vlTOPp->io_i_mux_bus_372));
        tracep->chgBit(oldp+1655,(vlTOPp->io_i_mux_bus_373));
        tracep->chgBit(oldp+1656,(vlTOPp->io_i_mux_bus_374));
        tracep->chgBit(oldp+1657,(vlTOPp->io_i_mux_bus_375));
        tracep->chgBit(oldp+1658,(vlTOPp->io_i_mux_bus_376));
        tracep->chgBit(oldp+1659,(vlTOPp->io_i_mux_bus_377));
        tracep->chgBit(oldp+1660,(vlTOPp->io_i_mux_bus_378));
        tracep->chgBit(oldp+1661,(vlTOPp->io_i_mux_bus_379));
        tracep->chgBit(oldp+1662,(vlTOPp->io_i_mux_bus_380));
        tracep->chgBit(oldp+1663,(vlTOPp->io_i_mux_bus_381));
        tracep->chgBit(oldp+1664,(vlTOPp->io_i_mux_bus_382));
        tracep->chgBit(oldp+1665,(vlTOPp->io_i_mux_bus_383));
        tracep->chgBit(oldp+1666,(vlTOPp->io_i_mux_bus_384));
        tracep->chgBit(oldp+1667,(vlTOPp->io_i_mux_bus_385));
        tracep->chgBit(oldp+1668,(vlTOPp->io_i_mux_bus_386));
        tracep->chgBit(oldp+1669,(vlTOPp->io_i_mux_bus_387));
        tracep->chgBit(oldp+1670,(vlTOPp->io_i_mux_bus_388));
        tracep->chgBit(oldp+1671,(vlTOPp->io_i_mux_bus_389));
        tracep->chgBit(oldp+1672,(vlTOPp->io_i_mux_bus_390));
        tracep->chgBit(oldp+1673,(vlTOPp->io_i_mux_bus_391));
        tracep->chgBit(oldp+1674,(vlTOPp->io_i_mux_bus_392));
        tracep->chgBit(oldp+1675,(vlTOPp->io_i_mux_bus_393));
        tracep->chgBit(oldp+1676,(vlTOPp->io_i_mux_bus_394));
        tracep->chgBit(oldp+1677,(vlTOPp->io_i_mux_bus_395));
        tracep->chgBit(oldp+1678,(vlTOPp->io_i_mux_bus_396));
        tracep->chgBit(oldp+1679,(vlTOPp->io_i_mux_bus_397));
        tracep->chgBit(oldp+1680,(vlTOPp->io_i_mux_bus_398));
        tracep->chgBit(oldp+1681,(vlTOPp->io_i_mux_bus_399));
        tracep->chgBit(oldp+1682,(vlTOPp->io_i_mux_bus_400));
        tracep->chgBit(oldp+1683,(vlTOPp->io_i_mux_bus_401));
        tracep->chgBit(oldp+1684,(vlTOPp->io_i_mux_bus_402));
        tracep->chgBit(oldp+1685,(vlTOPp->io_i_mux_bus_403));
        tracep->chgBit(oldp+1686,(vlTOPp->io_i_mux_bus_404));
        tracep->chgBit(oldp+1687,(vlTOPp->io_i_mux_bus_405));
        tracep->chgBit(oldp+1688,(vlTOPp->io_i_mux_bus_406));
        tracep->chgBit(oldp+1689,(vlTOPp->io_i_mux_bus_407));
        tracep->chgBit(oldp+1690,(vlTOPp->io_i_mux_bus_408));
        tracep->chgBit(oldp+1691,(vlTOPp->io_i_mux_bus_409));
        tracep->chgBit(oldp+1692,(vlTOPp->io_i_mux_bus_410));
        tracep->chgBit(oldp+1693,(vlTOPp->io_i_mux_bus_411));
        tracep->chgBit(oldp+1694,(vlTOPp->io_i_mux_bus_412));
        tracep->chgBit(oldp+1695,(vlTOPp->io_i_mux_bus_413));
        tracep->chgBit(oldp+1696,(vlTOPp->io_i_mux_bus_414));
        tracep->chgBit(oldp+1697,(vlTOPp->io_i_mux_bus_415));
        tracep->chgBit(oldp+1698,(vlTOPp->io_i_mux_bus_416));
        tracep->chgBit(oldp+1699,(vlTOPp->io_i_mux_bus_417));
        tracep->chgBit(oldp+1700,(vlTOPp->io_i_mux_bus_418));
        tracep->chgBit(oldp+1701,(vlTOPp->io_i_mux_bus_419));
        tracep->chgBit(oldp+1702,(vlTOPp->io_i_mux_bus_420));
        tracep->chgBit(oldp+1703,(vlTOPp->io_i_mux_bus_421));
        tracep->chgBit(oldp+1704,(vlTOPp->io_i_mux_bus_422));
        tracep->chgBit(oldp+1705,(vlTOPp->io_i_mux_bus_423));
        tracep->chgBit(oldp+1706,(vlTOPp->io_i_mux_bus_424));
        tracep->chgBit(oldp+1707,(vlTOPp->io_i_mux_bus_425));
        tracep->chgBit(oldp+1708,(vlTOPp->io_i_mux_bus_426));
        tracep->chgBit(oldp+1709,(vlTOPp->io_i_mux_bus_427));
        tracep->chgBit(oldp+1710,(vlTOPp->io_i_mux_bus_428));
        tracep->chgBit(oldp+1711,(vlTOPp->io_i_mux_bus_429));
        tracep->chgBit(oldp+1712,(vlTOPp->io_i_mux_bus_430));
        tracep->chgBit(oldp+1713,(vlTOPp->io_i_mux_bus_431));
        tracep->chgBit(oldp+1714,(vlTOPp->io_i_mux_bus_432));
        tracep->chgBit(oldp+1715,(vlTOPp->io_i_mux_bus_433));
        tracep->chgBit(oldp+1716,(vlTOPp->io_i_mux_bus_434));
        tracep->chgBit(oldp+1717,(vlTOPp->io_i_mux_bus_435));
        tracep->chgBit(oldp+1718,(vlTOPp->io_i_mux_bus_436));
        tracep->chgBit(oldp+1719,(vlTOPp->io_i_mux_bus_437));
        tracep->chgBit(oldp+1720,(vlTOPp->io_i_mux_bus_438));
        tracep->chgBit(oldp+1721,(vlTOPp->io_i_mux_bus_439));
        tracep->chgBit(oldp+1722,(vlTOPp->io_i_mux_bus_440));
        tracep->chgBit(oldp+1723,(vlTOPp->io_i_mux_bus_441));
        tracep->chgBit(oldp+1724,(vlTOPp->io_i_mux_bus_442));
        tracep->chgBit(oldp+1725,(vlTOPp->io_i_mux_bus_443));
        tracep->chgBit(oldp+1726,(vlTOPp->io_i_mux_bus_444));
        tracep->chgBit(oldp+1727,(vlTOPp->io_i_mux_bus_445));
        tracep->chgBit(oldp+1728,(vlTOPp->io_i_mux_bus_446));
        tracep->chgBit(oldp+1729,(vlTOPp->io_i_mux_bus_447));
        tracep->chgBit(oldp+1730,(vlTOPp->io_i_mux_bus_448));
        tracep->chgBit(oldp+1731,(vlTOPp->io_i_mux_bus_449));
        tracep->chgBit(oldp+1732,(vlTOPp->io_i_mux_bus_450));
        tracep->chgBit(oldp+1733,(vlTOPp->io_i_mux_bus_451));
        tracep->chgBit(oldp+1734,(vlTOPp->io_i_mux_bus_452));
        tracep->chgBit(oldp+1735,(vlTOPp->io_i_mux_bus_453));
        tracep->chgBit(oldp+1736,(vlTOPp->io_i_mux_bus_454));
        tracep->chgBit(oldp+1737,(vlTOPp->io_i_mux_bus_455));
        tracep->chgBit(oldp+1738,(vlTOPp->io_i_mux_bus_456));
        tracep->chgBit(oldp+1739,(vlTOPp->io_i_mux_bus_457));
        tracep->chgBit(oldp+1740,(vlTOPp->io_i_mux_bus_458));
        tracep->chgBit(oldp+1741,(vlTOPp->io_i_mux_bus_459));
        tracep->chgBit(oldp+1742,(vlTOPp->io_i_mux_bus_460));
        tracep->chgBit(oldp+1743,(vlTOPp->io_i_mux_bus_461));
        tracep->chgBit(oldp+1744,(vlTOPp->io_i_mux_bus_462));
        tracep->chgBit(oldp+1745,(vlTOPp->io_i_mux_bus_463));
        tracep->chgBit(oldp+1746,(vlTOPp->io_i_mux_bus_464));
        tracep->chgBit(oldp+1747,(vlTOPp->io_i_mux_bus_465));
        tracep->chgBit(oldp+1748,(vlTOPp->io_i_mux_bus_466));
        tracep->chgBit(oldp+1749,(vlTOPp->io_i_mux_bus_467));
        tracep->chgBit(oldp+1750,(vlTOPp->io_i_mux_bus_468));
        tracep->chgBit(oldp+1751,(vlTOPp->io_i_mux_bus_469));
        tracep->chgBit(oldp+1752,(vlTOPp->io_i_mux_bus_470));
        tracep->chgBit(oldp+1753,(vlTOPp->io_i_mux_bus_471));
        tracep->chgBit(oldp+1754,(vlTOPp->io_i_mux_bus_472));
        tracep->chgBit(oldp+1755,(vlTOPp->io_i_mux_bus_473));
        tracep->chgBit(oldp+1756,(vlTOPp->io_i_mux_bus_474));
        tracep->chgBit(oldp+1757,(vlTOPp->io_i_mux_bus_475));
        tracep->chgBit(oldp+1758,(vlTOPp->io_i_mux_bus_476));
        tracep->chgBit(oldp+1759,(vlTOPp->io_i_mux_bus_477));
        tracep->chgBit(oldp+1760,(vlTOPp->io_i_mux_bus_478));
        tracep->chgBit(oldp+1761,(vlTOPp->io_i_mux_bus_479));
        tracep->chgBit(oldp+1762,(vlTOPp->io_i_mux_bus_480));
        tracep->chgBit(oldp+1763,(vlTOPp->io_i_mux_bus_481));
        tracep->chgBit(oldp+1764,(vlTOPp->io_i_mux_bus_482));
        tracep->chgBit(oldp+1765,(vlTOPp->io_i_mux_bus_483));
        tracep->chgBit(oldp+1766,(vlTOPp->io_i_mux_bus_484));
        tracep->chgBit(oldp+1767,(vlTOPp->io_i_mux_bus_485));
        tracep->chgBit(oldp+1768,(vlTOPp->io_i_mux_bus_486));
        tracep->chgBit(oldp+1769,(vlTOPp->io_i_mux_bus_487));
        tracep->chgBit(oldp+1770,(vlTOPp->io_i_mux_bus_488));
        tracep->chgBit(oldp+1771,(vlTOPp->io_i_mux_bus_489));
        tracep->chgBit(oldp+1772,(vlTOPp->io_i_mux_bus_490));
        tracep->chgBit(oldp+1773,(vlTOPp->io_i_mux_bus_491));
        tracep->chgBit(oldp+1774,(vlTOPp->io_i_mux_bus_492));
        tracep->chgBit(oldp+1775,(vlTOPp->io_i_mux_bus_493));
        tracep->chgBit(oldp+1776,(vlTOPp->io_i_mux_bus_494));
        tracep->chgBit(oldp+1777,(vlTOPp->io_i_mux_bus_495));
        tracep->chgBit(oldp+1778,(vlTOPp->io_i_mux_bus_496));
        tracep->chgBit(oldp+1779,(vlTOPp->io_i_mux_bus_497));
        tracep->chgBit(oldp+1780,(vlTOPp->io_i_mux_bus_498));
        tracep->chgBit(oldp+1781,(vlTOPp->io_i_mux_bus_499));
        tracep->chgBit(oldp+1782,(vlTOPp->io_i_mux_bus_500));
        tracep->chgBit(oldp+1783,(vlTOPp->io_i_mux_bus_501));
        tracep->chgBit(oldp+1784,(vlTOPp->io_i_mux_bus_502));
        tracep->chgBit(oldp+1785,(vlTOPp->io_i_mux_bus_503));
        tracep->chgBit(oldp+1786,(vlTOPp->io_i_mux_bus_504));
        tracep->chgBit(oldp+1787,(vlTOPp->io_i_mux_bus_505));
        tracep->chgBit(oldp+1788,(vlTOPp->io_i_mux_bus_506));
        tracep->chgBit(oldp+1789,(vlTOPp->io_i_mux_bus_507));
        tracep->chgBit(oldp+1790,(vlTOPp->io_i_mux_bus_508));
        tracep->chgBit(oldp+1791,(vlTOPp->io_i_mux_bus_509));
        tracep->chgBit(oldp+1792,(vlTOPp->io_i_mux_bus_510));
        tracep->chgBit(oldp+1793,(vlTOPp->io_i_mux_bus_511));
        tracep->chgBit(oldp+1794,(vlTOPp->io_i_mux_bus_512));
        tracep->chgBit(oldp+1795,(vlTOPp->io_i_mux_bus_513));
        tracep->chgBit(oldp+1796,(vlTOPp->io_i_mux_bus_514));
        tracep->chgBit(oldp+1797,(vlTOPp->io_i_mux_bus_515));
        tracep->chgBit(oldp+1798,(vlTOPp->io_i_mux_bus_516));
        tracep->chgBit(oldp+1799,(vlTOPp->io_i_mux_bus_517));
        tracep->chgBit(oldp+1800,(vlTOPp->io_i_mux_bus_518));
        tracep->chgBit(oldp+1801,(vlTOPp->io_i_mux_bus_519));
        tracep->chgBit(oldp+1802,(vlTOPp->io_i_mux_bus_520));
        tracep->chgBit(oldp+1803,(vlTOPp->io_i_mux_bus_521));
        tracep->chgBit(oldp+1804,(vlTOPp->io_i_mux_bus_522));
        tracep->chgBit(oldp+1805,(vlTOPp->io_i_mux_bus_523));
        tracep->chgBit(oldp+1806,(vlTOPp->io_i_mux_bus_524));
        tracep->chgBit(oldp+1807,(vlTOPp->io_i_mux_bus_525));
        tracep->chgBit(oldp+1808,(vlTOPp->io_i_mux_bus_526));
        tracep->chgBit(oldp+1809,(vlTOPp->io_i_mux_bus_527));
        tracep->chgBit(oldp+1810,(vlTOPp->io_i_mux_bus_528));
        tracep->chgBit(oldp+1811,(vlTOPp->io_i_mux_bus_529));
        tracep->chgBit(oldp+1812,(vlTOPp->io_i_mux_bus_530));
        tracep->chgBit(oldp+1813,(vlTOPp->io_i_mux_bus_531));
        tracep->chgBit(oldp+1814,(vlTOPp->io_i_mux_bus_532));
        tracep->chgBit(oldp+1815,(vlTOPp->io_i_mux_bus_533));
        tracep->chgBit(oldp+1816,(vlTOPp->io_i_mux_bus_534));
        tracep->chgBit(oldp+1817,(vlTOPp->io_i_mux_bus_535));
        tracep->chgBit(oldp+1818,(vlTOPp->io_i_mux_bus_536));
        tracep->chgBit(oldp+1819,(vlTOPp->io_i_mux_bus_537));
        tracep->chgBit(oldp+1820,(vlTOPp->io_i_mux_bus_538));
        tracep->chgBit(oldp+1821,(vlTOPp->io_i_mux_bus_539));
        tracep->chgBit(oldp+1822,(vlTOPp->io_i_mux_bus_540));
        tracep->chgBit(oldp+1823,(vlTOPp->io_i_mux_bus_541));
        tracep->chgBit(oldp+1824,(vlTOPp->io_i_mux_bus_542));
        tracep->chgBit(oldp+1825,(vlTOPp->io_i_mux_bus_543));
        tracep->chgBit(oldp+1826,(vlTOPp->io_i_mux_bus_544));
        tracep->chgBit(oldp+1827,(vlTOPp->io_i_mux_bus_545));
        tracep->chgBit(oldp+1828,(vlTOPp->io_i_mux_bus_546));
        tracep->chgBit(oldp+1829,(vlTOPp->io_i_mux_bus_547));
        tracep->chgBit(oldp+1830,(vlTOPp->io_i_mux_bus_548));
        tracep->chgBit(oldp+1831,(vlTOPp->io_i_mux_bus_549));
        tracep->chgBit(oldp+1832,(vlTOPp->io_i_mux_bus_550));
        tracep->chgBit(oldp+1833,(vlTOPp->io_i_mux_bus_551));
        tracep->chgBit(oldp+1834,(vlTOPp->io_i_mux_bus_552));
        tracep->chgBit(oldp+1835,(vlTOPp->io_i_mux_bus_553));
        tracep->chgBit(oldp+1836,(vlTOPp->io_i_mux_bus_554));
        tracep->chgBit(oldp+1837,(vlTOPp->io_i_mux_bus_555));
        tracep->chgBit(oldp+1838,(vlTOPp->io_i_mux_bus_556));
        tracep->chgBit(oldp+1839,(vlTOPp->io_i_mux_bus_557));
        tracep->chgBit(oldp+1840,(vlTOPp->io_i_mux_bus_558));
        tracep->chgBit(oldp+1841,(vlTOPp->io_i_mux_bus_559));
        tracep->chgBit(oldp+1842,(vlTOPp->io_i_mux_bus_560));
        tracep->chgBit(oldp+1843,(vlTOPp->io_i_mux_bus_561));
        tracep->chgBit(oldp+1844,(vlTOPp->io_i_mux_bus_562));
        tracep->chgBit(oldp+1845,(vlTOPp->io_i_mux_bus_563));
        tracep->chgBit(oldp+1846,(vlTOPp->io_i_mux_bus_564));
        tracep->chgBit(oldp+1847,(vlTOPp->io_i_mux_bus_565));
        tracep->chgBit(oldp+1848,(vlTOPp->io_i_mux_bus_566));
        tracep->chgBit(oldp+1849,(vlTOPp->io_i_mux_bus_567));
        tracep->chgBit(oldp+1850,(vlTOPp->io_i_mux_bus_568));
        tracep->chgBit(oldp+1851,(vlTOPp->io_i_mux_bus_569));
        tracep->chgBit(oldp+1852,(vlTOPp->io_i_mux_bus_570));
        tracep->chgBit(oldp+1853,(vlTOPp->io_i_mux_bus_571));
        tracep->chgBit(oldp+1854,(vlTOPp->io_i_mux_bus_572));
        tracep->chgBit(oldp+1855,(vlTOPp->io_i_mux_bus_573));
        tracep->chgBit(oldp+1856,(vlTOPp->io_i_mux_bus_574));
        tracep->chgBit(oldp+1857,(vlTOPp->io_i_mux_bus_575));
        tracep->chgBit(oldp+1858,(vlTOPp->io_i_mux_bus_576));
        tracep->chgBit(oldp+1859,(vlTOPp->io_i_mux_bus_577));
        tracep->chgBit(oldp+1860,(vlTOPp->io_i_mux_bus_578));
        tracep->chgBit(oldp+1861,(vlTOPp->io_i_mux_bus_579));
        tracep->chgBit(oldp+1862,(vlTOPp->io_i_mux_bus_580));
        tracep->chgBit(oldp+1863,(vlTOPp->io_i_mux_bus_581));
        tracep->chgBit(oldp+1864,(vlTOPp->io_i_mux_bus_582));
        tracep->chgBit(oldp+1865,(vlTOPp->io_i_mux_bus_583));
        tracep->chgBit(oldp+1866,(vlTOPp->io_i_mux_bus_584));
        tracep->chgBit(oldp+1867,(vlTOPp->io_i_mux_bus_585));
        tracep->chgBit(oldp+1868,(vlTOPp->io_i_mux_bus_586));
        tracep->chgBit(oldp+1869,(vlTOPp->io_i_mux_bus_587));
        tracep->chgBit(oldp+1870,(vlTOPp->io_i_mux_bus_588));
        tracep->chgBit(oldp+1871,(vlTOPp->io_i_mux_bus_589));
        tracep->chgBit(oldp+1872,(vlTOPp->io_i_mux_bus_590));
        tracep->chgBit(oldp+1873,(vlTOPp->io_i_mux_bus_591));
        tracep->chgBit(oldp+1874,(vlTOPp->io_i_mux_bus_592));
        tracep->chgBit(oldp+1875,(vlTOPp->io_i_mux_bus_593));
        tracep->chgBit(oldp+1876,(vlTOPp->io_i_mux_bus_594));
        tracep->chgBit(oldp+1877,(vlTOPp->io_i_mux_bus_595));
        tracep->chgBit(oldp+1878,(vlTOPp->io_i_mux_bus_596));
        tracep->chgBit(oldp+1879,(vlTOPp->io_i_mux_bus_597));
        tracep->chgBit(oldp+1880,(vlTOPp->io_i_mux_bus_598));
        tracep->chgBit(oldp+1881,(vlTOPp->io_i_mux_bus_599));
        tracep->chgBit(oldp+1882,(vlTOPp->io_i_mux_bus_600));
        tracep->chgBit(oldp+1883,(vlTOPp->io_i_mux_bus_601));
        tracep->chgBit(oldp+1884,(vlTOPp->io_i_mux_bus_602));
        tracep->chgBit(oldp+1885,(vlTOPp->io_i_mux_bus_603));
        tracep->chgBit(oldp+1886,(vlTOPp->io_i_mux_bus_604));
        tracep->chgBit(oldp+1887,(vlTOPp->io_i_mux_bus_605));
        tracep->chgBit(oldp+1888,(vlTOPp->io_i_mux_bus_606));
        tracep->chgBit(oldp+1889,(vlTOPp->io_i_mux_bus_607));
        tracep->chgSData(oldp+1890,(vlTOPp->io_o_dist_bus_0),16);
        tracep->chgSData(oldp+1891,(vlTOPp->io_o_dist_bus_1),16);
        tracep->chgSData(oldp+1892,(vlTOPp->io_o_dist_bus_2),16);
        tracep->chgSData(oldp+1893,(vlTOPp->io_o_dist_bus_3),16);
        tracep->chgSData(oldp+1894,(vlTOPp->io_o_dist_bus_4),16);
        tracep->chgSData(oldp+1895,(vlTOPp->io_o_dist_bus_5),16);
        tracep->chgSData(oldp+1896,(vlTOPp->io_o_dist_bus_6),16);
        tracep->chgSData(oldp+1897,(vlTOPp->io_o_dist_bus_7),16);
        tracep->chgSData(oldp+1898,(vlTOPp->io_o_dist_bus_8),16);
        tracep->chgSData(oldp+1899,(vlTOPp->io_o_dist_bus_9),16);
        tracep->chgSData(oldp+1900,(vlTOPp->io_o_dist_bus_10),16);
        tracep->chgSData(oldp+1901,(vlTOPp->io_o_dist_bus_11),16);
        tracep->chgSData(oldp+1902,(vlTOPp->io_o_dist_bus_12),16);
        tracep->chgSData(oldp+1903,(vlTOPp->io_o_dist_bus_13),16);
        tracep->chgSData(oldp+1904,(vlTOPp->io_o_dist_bus_14),16);
        tracep->chgSData(oldp+1905,(vlTOPp->io_o_dist_bus_15),16);
        tracep->chgSData(oldp+1906,(vlTOPp->io_o_dist_bus_16),16);
        tracep->chgSData(oldp+1907,(vlTOPp->io_o_dist_bus_17),16);
        tracep->chgSData(oldp+1908,(vlTOPp->io_o_dist_bus_18),16);
        tracep->chgSData(oldp+1909,(vlTOPp->io_o_dist_bus_19),16);
        tracep->chgSData(oldp+1910,(vlTOPp->io_o_dist_bus_20),16);
        tracep->chgSData(oldp+1911,(vlTOPp->io_o_dist_bus_21),16);
        tracep->chgSData(oldp+1912,(vlTOPp->io_o_dist_bus_22),16);
        tracep->chgSData(oldp+1913,(vlTOPp->io_o_dist_bus_23),16);
        tracep->chgSData(oldp+1914,(vlTOPp->io_o_dist_bus_24),16);
        tracep->chgSData(oldp+1915,(vlTOPp->io_o_dist_bus_25),16);
        tracep->chgSData(oldp+1916,(vlTOPp->io_o_dist_bus_26),16);
        tracep->chgSData(oldp+1917,(vlTOPp->io_o_dist_bus_27),16);
        tracep->chgSData(oldp+1918,(vlTOPp->io_o_dist_bus_28),16);
        tracep->chgSData(oldp+1919,(vlTOPp->io_o_dist_bus_29),16);
        tracep->chgSData(oldp+1920,(vlTOPp->io_o_dist_bus_30),16);
        tracep->chgSData(oldp+1921,(vlTOPp->io_o_dist_bus_31),16);
    }
}

void VBenes::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBenes__Syms* __restrict vlSymsp = static_cast<VBenes__Syms*>(userp);
    VBenes* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}

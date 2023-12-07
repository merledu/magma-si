// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFlexDPU.h for the primary calling header

#ifndef _VFLEXDPU_PATHFINDER_H_
#define _VFLEXDPU_PATHFINDER_H_  // guard

#include "verilated.h"

//==========

class VFlexDPU__Syms;
class VFlexDPU_VerilatedVcd;


//----------

VL_MODULE(VFlexDPU_PathFinder) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_PF_Valid,0,0);
    VL_IN8(io_DataValid,0,0);
    VL_IN16(io_Stationary_matrix_0_0,15,0);
    VL_IN16(io_Stationary_matrix_0_1,15,0);
    VL_IN16(io_Stationary_matrix_0_2,15,0);
    VL_IN16(io_Stationary_matrix_0_3,15,0);
    VL_IN16(io_Stationary_matrix_1_0,15,0);
    VL_IN16(io_Stationary_matrix_1_1,15,0);
    VL_IN16(io_Stationary_matrix_1_2,15,0);
    VL_IN16(io_Stationary_matrix_1_3,15,0);
    VL_IN16(io_Stationary_matrix_2_0,15,0);
    VL_IN16(io_Stationary_matrix_2_1,15,0);
    VL_IN16(io_Stationary_matrix_2_2,15,0);
    VL_IN16(io_Stationary_matrix_2_3,15,0);
    VL_IN16(io_Stationary_matrix_3_0,15,0);
    VL_IN16(io_Stationary_matrix_3_1,15,0);
    VL_IN16(io_Stationary_matrix_3_2,15,0);
    VL_IN16(io_Stationary_matrix_3_3,15,0);
    VL_IN16(io_Streaming_matrix_0,15,0);
    VL_IN16(io_Streaming_matrix_1,15,0);
    VL_IN16(io_Streaming_matrix_2,15,0);
    VL_IN16(io_Streaming_matrix_3,15,0);
    VL_IN(io_NoDPE,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__myCounter_io_valid;
        CData/*0:0*/ __PVT__Distribution_io_ProcessValid;
        CData/*0:0*/ __PVT__myCounter_io_start_REG;
        CData/*0:0*/ __PVT__myMuxes__DOT__matricesAreEqual;
        CData/*0:0*/ __PVT__myMuxes__DOT__jValid;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_0;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_1;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_2;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_3;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_4;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_5;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_6;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_7;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_8;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_9;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_10;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_11;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_12;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_13;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_14;
        CData/*3:0*/ __PVT__myMuxes__DOT__mux_15;
        CData/*0:0*/ __PVT__myMuxes__DOT___T_36;
        CData/*0:0*/ __PVT__myMuxes__DOT___T_39;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_286;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_287;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_288;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_289;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_290;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_291;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_292;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_293;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_294;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_295;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_296;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_297;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_298;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_299;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_300;
        CData/*3:0*/ __PVT__myMuxes__DOT___GEN_301;
        CData/*0:0*/ __PVT__myMuxes__DOT___GEN_336;
        CData/*0:0*/ __PVT__myCounter__DOT__matricesAreEqual;
        CData/*0:0*/ __PVT__myCounter__DOT__jValid;
        CData/*0:0*/ __PVT__myCounter__DOT___reg_i_T_2;
        CData/*0:0*/ __PVT__myCounter__DOT___GEN_164;
        CData/*0:0*/ __PVT__Distribution__DOT__part2_io_Ovalid;
        CData/*0:0*/ __PVT__Distribution__DOT__part3_io_i_valid;
        CData/*0:0*/ __PVT__Distribution__DOT__part3_io_merge;
        CData/*0:0*/ __PVT__Distribution__DOT___io_validIteration_T_2;
        CData/*0:0*/ __PVT__Distribution__DOT__c;
        CData/*0:0*/ __PVT__Distribution__DOT__e;
        CData/*0:0*/ __PVT__Distribution__DOT__part3_io_merge_REG;
        CData/*0:0*/ __PVT__Distribution__DOT__ab;
        CData/*0:0*/ __PVT__Distribution__DOT__part2__DOT___T_4;
        CData/*0:0*/ __PVT__Distribution__DOT__part2__DOT__io_Ovalid_REG;
        CData/*0:0*/ __PVT__Distribution__DOT__part3__DOT___io_valid_T_1;
        CData/*0:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_58;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_0_0;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_0_1;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_0_2;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_0_3;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_1_0;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_1_1;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_1_2;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_1_3;
    };
    struct {
        SData/*15:0*/ __PVT__myMuxes_io_mat1_2_0;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_2_1;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_2_2;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_2_3;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_3_0;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_3_1;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_3_2;
        SData/*15:0*/ __PVT__myMuxes_io_mat1_3_3;
        SData/*15:0*/ __PVT__myMuxes_io_mat2_0;
        SData/*15:0*/ __PVT__myMuxes_io_mat2_1;
        SData/*15:0*/ __PVT__myMuxes_io_mat2_2;
        SData/*15:0*/ __PVT__myMuxes_io_mat2_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_0_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_0_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_0_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_0_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_1_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_1_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_1_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_1_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_2_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_2_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_2_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_2_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_3_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_3_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_3_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStationary_matrix_3_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStreaming_matrix_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStreaming_matrix_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStreaming_matrix_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__prevStreaming_matrix_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_4;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_5;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_6;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_7;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_8;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_9;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_10;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_11;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_12;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_13;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_14;
        SData/*15:0*/ __PVT__myMuxes__DOT__src_15;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_0;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_1;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_2;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_3;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_4;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_5;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_6;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_7;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_8;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_9;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_10;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_11;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_12;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_13;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_14;
        SData/*15:0*/ __PVT__myMuxes__DOT__dest_15;
    };
    struct {
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_24;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_29;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_34;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_35;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_39;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_59;
        SData/*15:0*/ __PVT__myMuxes__DOT___mux_T_8;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_139;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_146;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_147;
        SData/*15:0*/ __PVT__myMuxes__DOT___mux_T_17;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_302;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_303;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_304;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_305;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_306;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_307;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_308;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_309;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_310;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_311;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_312;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_313;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_314;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_315;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_316;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_317;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_318;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_319;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_320;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_321;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_322;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_323;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_324;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_325;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_326;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_327;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_328;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_329;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_330;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_331;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_332;
        SData/*15:0*/ __PVT__myMuxes__DOT___GEN_333;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_0_0;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_0_1;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_0_2;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_0_3;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_1_0;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_1_1;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_1_2;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_1_3;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_2_0;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_2_1;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_2_2;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_2_3;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_3_0;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_3_1;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_3_2;
        SData/*15:0*/ __PVT__myCounter__DOT__prevStationary_matrix_3_3;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_0_0;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_0_1;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_0_2;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_0_3;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_1_0;
    };
    struct {
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_1_1;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_1_2;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_1_3;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_2_0;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_2_1;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_2_2;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_2_3;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_3_0;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_3_1;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_3_2;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs1_3_3;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs2_0;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs2_1;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs2_2;
        SData/*15:0*/ __PVT__myCounter__DOT__counterRegs2_3;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_23;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_30;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_31;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_98;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_99;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_100;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_101;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_102;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_103;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_104;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_105;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_106;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_107;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_108;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_109;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_110;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_111;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_112;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_113;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_118;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_123;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_124;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_125;
        SData/*15:0*/ __PVT__myCounter__DOT___GEN_126;
        IData/*31:0*/ __PVT__myMuxes__DOT__i;
        IData/*31:0*/ __PVT__myMuxes__DOT__j;
        IData/*31:0*/ __PVT__myMuxes__DOT__k;
        IData/*31:0*/ __PVT__myMuxes__DOT__counter;
        IData/*31:0*/ __PVT__myMuxes__DOT___GEN_334;
        IData/*31:0*/ __PVT__myMuxes__DOT___j_T_1;
        IData/*31:0*/ __PVT__myMuxes__DOT___GEN_335;
        IData/*31:0*/ __PVT__myMuxes__DOT__jNext;
        IData/*31:0*/ __PVT__myMuxes__DOT___k_T_1;
        IData/*31:0*/ __PVT__myCounter__DOT__i;
        IData/*31:0*/ __PVT__myCounter__DOT__j;
        IData/*31:0*/ __PVT__myCounter__DOT__k;
        IData/*31:0*/ __PVT__myCounter__DOT__counter1;
        IData/*31:0*/ __PVT__myCounter__DOT__counter2;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_114;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_129;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_130;
        IData/*31:0*/ __PVT__myCounter__DOT___j_T_1;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_133;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_134;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_220;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_221;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_222;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_223;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_224;
    };
    struct {
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_225;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_226;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_227;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_228;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_229;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_230;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_231;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_232;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_233;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_234;
        IData/*31:0*/ __PVT__myCounter__DOT___GEN_235;
        IData/*31:0*/ __PVT__Distribution__DOT__part2_io_IDex;
        IData/*31:0*/ __PVT__Distribution__DOT__part3_io_IDex;
        IData/*31:0*/ __PVT__Distribution__DOT__part3_io_mat_3_3;
        IData/*31:0*/ __PVT__Distribution__DOT__i;
        IData/*31:0*/ __PVT__Distribution__DOT__j;
        IData/*31:0*/ __PVT__Distribution__DOT__count;
        IData/*31:0*/ __PVT__Distribution__DOT__Idex_0;
        IData/*31:0*/ __PVT__Distribution__DOT__Idex_1;
        IData/*31:0*/ __PVT__Distribution__DOT__Idex_2;
        IData/*31:0*/ __PVT__Distribution__DOT__Idex_3;
        IData/*31:0*/ __PVT__Distribution__DOT__Jdex_0;
        IData/*31:0*/ __PVT__Distribution__DOT__Jdex_1;
        IData/*31:0*/ __PVT__Distribution__DOT__Jdex_2;
        IData/*31:0*/ __PVT__Distribution__DOT__Jdex_3;
        IData/*31:0*/ __PVT__Distribution__DOT__iterationNo;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_6;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_12;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_15;
        IData/*31:0*/ __PVT__Distribution__DOT___iterationNo_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT___count_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_33;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_34;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_35;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_36;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_37;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_38;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_39;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_40;
        IData/*31:0*/ __PVT__Distribution__DOT___GEN_85;
        IData/*31:0*/ __PVT__Distribution__DOT___i_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT___j_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_0_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_0_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_0_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_0_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_1_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_1_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_1_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_1_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_2_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_2_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_2_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_2_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_3_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_3_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_3_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__b_3_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__j;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT__a;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT___GEN_22;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT___GEN_28;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT___GEN_30;
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT___a_T_1;
    };
    struct {
        IData/*31:0*/ __PVT__Distribution__DOT__part2__DOT___j_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_0_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_0_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_0_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_0_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_1_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_1_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_1_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_1_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_2_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_2_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_2_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_2_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_3_0;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_3_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_3_2;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__b_3_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__check;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__i;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__j;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__k;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__l;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT__delay;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___delay_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___k_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___l_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_25;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_30;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_35;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_36;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_39;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_40;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_41;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_42;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_43;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_44;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_45;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_46;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_47;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_48;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_49;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_50;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_51;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_52;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_53;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_54;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___check_T_1;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_55;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_80;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_84;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_88;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_90;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_91;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___i_T_3;
        IData/*31:0*/ __PVT__Distribution__DOT__part3__DOT___GEN_125;
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__myMuxes__DOT__jValid;
    IData/*31:0*/ __Vdly__myMuxes__DOT__j;
    IData/*31:0*/ __Vdly__myCounter__DOT__j;
    IData/*31:0*/ __Vdly__Distribution__DOT__i;
    IData/*31:0*/ __Vdly__Distribution__DOT__part3__DOT__check;
    IData/*31:0*/ __Vdly__Distribution__DOT__part3__DOT__i;
    IData/*31:0*/ __Vdly__Distribution__DOT__part3__DOT__j;
    IData/*31:0*/ __Vdly__Distribution__DOT__part3__DOT__k;
    IData/*31:0*/ __Vdly__Distribution__DOT__part3__DOT__l;
    IData/*31:0*/ __Vdly__Distribution__DOT__part3__DOT__delay;
    
    // INTERNAL VARIABLES
  private:
    VFlexDPU__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFlexDPU_PathFinder);  ///< Copying not allowed
  public:
    VFlexDPU_PathFinder(const char* name = "TOP");
    ~VFlexDPU_PathFinder();
    
    // INTERNAL METHODS
    void __Vconfigure(VFlexDPU__Syms* symsp, bool first);
    void _combo__TOP__FlexDPU__DOT__PathFinder_1__14(VFlexDPU__Syms* __restrict vlSymsp);
    void _combo__TOP__FlexDPU__DOT__PathFinder_2__15(VFlexDPU__Syms* __restrict vlSymsp);
    void _combo__TOP__FlexDPU__DOT__PathFinder_3__16(VFlexDPU__Syms* __restrict vlSymsp);
    void _combo__TOP__FlexDPU__DOT__PathFinder__13(VFlexDPU__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__FlexDPU__DOT__PathFinder_1__2(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder_1__5(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder_2__3(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder_2__6(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder_3__4(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder_3__7(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder__1(VFlexDPU__Syms* __restrict vlSymsp);
    void _sequent__TOP__FlexDPU__DOT__PathFinder__8(VFlexDPU__Syms* __restrict vlSymsp);
    void _settle__TOP__FlexDPU__DOT__PathFinder_1__10(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__FlexDPU__DOT__PathFinder_2__11(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__FlexDPU__DOT__PathFinder_3__12(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__FlexDPU__DOT__PathFinder__9(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

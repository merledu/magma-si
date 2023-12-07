// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFLEXDPU_H_
#define _VFLEXDPU_H_  // guard

#include "verilated.h"

//==========

class VFlexDPU__Syms;
class VFlexDPU_VerilatedVcd;
class VFlexDPU_PathFinder;


//----------

VL_MODULE(VFlexDPU) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VFlexDPU_PathFinder* __PVT__FlexDPU__DOT__PathFinder;
    VFlexDPU_PathFinder* __PVT__FlexDPU__DOT__PathFinder_1;
    VFlexDPU_PathFinder* __PVT__FlexDPU__DOT__PathFinder_2;
    VFlexDPU_PathFinder* __PVT__FlexDPU__DOT__PathFinder_3;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_i_vn_0,4,0);
    VL_IN8(io_i_vn_1,4,0);
    VL_IN8(io_i_vn_2,4,0);
    VL_IN8(io_i_vn_3,4,0);
    VL_IN8(io_i_stationary,0,0);
    VL_IN8(io_i_data_valid,0,0);
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
    VL_IN16(io_Streaming_matrix_0_0,15,0);
    VL_IN16(io_Streaming_matrix_0_1,15,0);
    VL_IN16(io_Streaming_matrix_0_2,15,0);
    VL_IN16(io_Streaming_matrix_0_3,15,0);
    VL_IN16(io_Streaming_matrix_1_0,15,0);
    VL_IN16(io_Streaming_matrix_1_1,15,0);
    VL_IN16(io_Streaming_matrix_1_2,15,0);
    VL_IN16(io_Streaming_matrix_1_3,15,0);
    VL_IN16(io_Streaming_matrix_2_0,15,0);
    VL_IN16(io_Streaming_matrix_2_1,15,0);
    VL_IN16(io_Streaming_matrix_2_2,15,0);
    VL_IN16(io_Streaming_matrix_2_3,15,0);
    VL_IN16(io_Streaming_matrix_3_0,15,0);
    VL_IN16(io_Streaming_matrix_3_1,15,0);
    VL_IN16(io_Streaming_matrix_3_2,15,0);
    VL_IN16(io_Streaming_matrix_3_3,15,0);
    VL_IN(io_CalFDE,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ FlexDPU__DOT__Statvalid;
        CData/*0:0*/ FlexDPU__DOT___Statvalid_T_1;
        CData/*0:0*/ FlexDPU__DOT___Statvalid_T_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_0_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_1_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_2_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_io_Stationary_matrix_3_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_0_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_1_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_2_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_1_io_Stationary_matrix_3_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_0_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_1_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_2_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_2_io_Stationary_matrix_3_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_0_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_1_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_0;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_2_3;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_0;
    };
    struct {
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_1;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_2;
        SData/*15:0*/ FlexDPU__DOT__PathFinder_3_io_Stationary_matrix_3_3;
        SData/*15:0*/ FlexDPU__DOT___GEN_73;
        SData/*15:0*/ FlexDPU__DOT___GEN_77;
        SData/*15:0*/ FlexDPU__DOT___GEN_81;
        SData/*15:0*/ FlexDPU__DOT___GEN_85;
        IData/*31:0*/ FlexDPU__DOT__used_FlexDPE_0;
        IData/*31:0*/ FlexDPU__DOT__used_FlexDPE_1;
        IData/*31:0*/ FlexDPU__DOT__iloop;
        IData/*31:0*/ FlexDPU__DOT__jloop;
        IData/*31:0*/ FlexDPU__DOT___iloop_T_1;
        IData/*31:0*/ FlexDPU__DOT___jloop_T_1;
        IData/*31:0*/ FlexDPU__DOT__PF1_Stream_Col_0;
        IData/*31:0*/ FlexDPU__DOT__PF1_Stream_Col_1;
        IData/*31:0*/ FlexDPU__DOT__PF1_Stream_Col_2;
        IData/*31:0*/ FlexDPU__DOT__PF1_Stream_Col_3;
        IData/*31:0*/ FlexDPU__DOT__ModuleIndex;
        IData/*31:0*/ FlexDPU__DOT___ModuleIndex_T_1;
        IData/*31:0*/ FlexDPU__DOT___GEN_104;
        IData/*31:0*/ FlexDPU__DOT___GEN_105;
        IData/*31:0*/ FlexDPU__DOT___GEN_106;
        IData/*31:0*/ FlexDPU__DOT___GEN_107;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__iloop;
    IData/*31:0*/ __Vdly__FlexDPU__DOT__jloop;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VFlexDPU__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFlexDPU);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VFlexDPU(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VFlexDPU();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VFlexDPU__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VFlexDPU__Syms* symsp, bool first);
  private:
    static QData _change_request(VFlexDPU__Syms* __restrict vlSymsp);
    static QData _change_request_1(VFlexDPU__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VFlexDPU__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VFlexDPU__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VFlexDPU__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VFlexDPU__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VFlexDPU__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

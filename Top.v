module Bitmap(
  input         clock,
  input         reset,
  input  [15:0] io_mat1_0_0,
  input  [15:0] io_mat1_0_1,
  input  [15:0] io_mat1_1_0,
  input  [15:0] io_mat1_1_1,
  output [15:0] io_bitmap1_0_0,
  output [15:0] io_bitmap1_0_1,
  output [15:0] io_bitmap1_1_0,
  output [15:0] io_bitmap1_1_1
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] matReg1_0_0; // @[Bitmap.scala 14:26]
  reg [15:0] matReg1_0_1; // @[Bitmap.scala 14:26]
  reg [15:0] matReg1_1_0; // @[Bitmap.scala 14:26]
  reg [15:0] matReg1_1_1; // @[Bitmap.scala 14:26]
  reg  i; // @[Bitmap.scala 19:20]
  reg  j; // @[Bitmap.scala 20:20]
  wire  _GEN_42 = ~i; // @[Bitmap.scala 23:{41,41}]
  wire [15:0] _GEN_1 = ~i & j ? io_mat1_0_1 : io_mat1_0_0; // @[Bitmap.scala 23:{41,41}]
  wire  _GEN_43 = ~j; // @[Bitmap.scala 23:{41,41}]
  wire [15:0] _GEN_2 = i & ~j ? io_mat1_1_0 : _GEN_1; // @[Bitmap.scala 23:{41,41}]
  wire [15:0] _GEN_3 = i & j ? io_mat1_1_1 : _GEN_2; // @[Bitmap.scala 23:{41,41}]
  wire  _j_T_1 = j + 1'h1; // @[Bitmap.scala 33:17]
  assign io_bitmap1_0_0 = matReg1_0_0; // @[Bitmap.scala 16:16]
  assign io_bitmap1_0_1 = matReg1_0_1; // @[Bitmap.scala 16:16]
  assign io_bitmap1_1_0 = matReg1_1_0; // @[Bitmap.scala 16:16]
  assign io_bitmap1_1_1 = matReg1_1_1; // @[Bitmap.scala 16:16]
  always @(posedge clock) begin
    if (reset) begin // @[Bitmap.scala 14:26]
      matReg1_0_0 <= 16'h0; // @[Bitmap.scala 14:26]
    end else if (_GEN_3 != 16'h0) begin // @[Bitmap.scala 23:49]
      if (_GEN_42 & _GEN_43) begin // @[Bitmap.scala 24:31]
        matReg1_0_0 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (_GEN_42 & _GEN_43) begin // @[Bitmap.scala 26:31]
      matReg1_0_0 <= 16'h0; // @[Bitmap.scala 26:31]
    end
    if (reset) begin // @[Bitmap.scala 14:26]
      matReg1_0_1 <= 16'h0; // @[Bitmap.scala 14:26]
    end else if (_GEN_3 != 16'h0) begin // @[Bitmap.scala 23:49]
      if (_GEN_42 & j) begin // @[Bitmap.scala 24:31]
        matReg1_0_1 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (_GEN_42 & j) begin // @[Bitmap.scala 26:31]
      matReg1_0_1 <= 16'h0; // @[Bitmap.scala 26:31]
    end
    if (reset) begin // @[Bitmap.scala 14:26]
      matReg1_1_0 <= 16'h0; // @[Bitmap.scala 14:26]
    end else if (_GEN_3 != 16'h0) begin // @[Bitmap.scala 23:49]
      if (i & _GEN_43) begin // @[Bitmap.scala 24:31]
        matReg1_1_0 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (i & _GEN_43) begin // @[Bitmap.scala 26:31]
      matReg1_1_0 <= 16'h0; // @[Bitmap.scala 26:31]
    end
    if (reset) begin // @[Bitmap.scala 14:26]
      matReg1_1_1 <= 16'h0; // @[Bitmap.scala 14:26]
    end else if (_GEN_3 != 16'h0) begin // @[Bitmap.scala 23:49]
      if (i & j) begin // @[Bitmap.scala 24:31]
        matReg1_1_1 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (i & j) begin // @[Bitmap.scala 26:31]
      matReg1_1_1 <= 16'h0; // @[Bitmap.scala 26:31]
    end
    if (reset) begin // @[Bitmap.scala 19:20]
      i <= 1'h0; // @[Bitmap.scala 19:20]
    end else if (j) begin // @[Bitmap.scala 35:36]
      i <= i + 1'h1; // @[Bitmap.scala 36:7]
    end
    if (reset) begin // @[Bitmap.scala 20:20]
      j <= 1'h0; // @[Bitmap.scala 20:20]
    end else begin
      j <= _j_T_1;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  matReg1_0_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  matReg1_0_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  matReg1_1_0 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  matReg1_1_1 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  i = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  j = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Regor(
  input         clock,
  input         reset,
  input  [15:0] io_mat1_0_0,
  input  [15:0] io_mat1_0_1,
  input  [15:0] io_mat1_1_0,
  input  [15:0] io_mat1_1_1,
  input  [15:0] io_mat2_0_0,
  input  [15:0] io_mat2_0_1,
  input  [15:0] io_mat2_1_0,
  input  [15:0] io_mat2_1_1,
  output [15:0] io_compressedBitmap_0_0,
  output [15:0] io_compressedBitmap_0_1,
  output [15:0] io_compressedBitmap_1_0,
  output [15:0] io_compressedBitmap_1_1,
  output        io_End
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  wire  bitmap_clock; // @[MatrixPRE-Processor.scala 18:24]
  wire  bitmap_reset; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_mat1_0_0; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_mat1_0_1; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_mat1_1_0; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_mat1_1_1; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_bitmap1_0_0; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_bitmap1_0_1; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_bitmap1_1_0; // @[MatrixPRE-Processor.scala 18:24]
  wire [15:0] bitmap_io_bitmap1_1_1; // @[MatrixPRE-Processor.scala 18:24]
  reg [15:0] matReg1_0_0; // @[MatrixPRE-Processor.scala 15:26]
  reg [15:0] matReg1_0_1; // @[MatrixPRE-Processor.scala 15:26]
  reg [15:0] matReg1_1_0; // @[MatrixPRE-Processor.scala 15:26]
  reg [15:0] matReg1_1_1; // @[MatrixPRE-Processor.scala 15:26]
  reg  reg_0; // @[MatrixPRE-Processor.scala 22:22]
  reg  reg_1; // @[MatrixPRE-Processor.scala 22:22]
  reg  i; // @[MatrixPRE-Processor.scala 29:20]
  reg  j; // @[MatrixPRE-Processor.scala 30:20]
  wire  _io_End_T_2 = i & j; // @[MatrixPRE-Processor.scala 34:45]
  wire  _GEN_1 = j ? reg_1 : reg_0; // @[MatrixPRE-Processor.scala 40:{23,23}]
  wire [15:0] _GEN_2 = bitmap_io_bitmap1_0_0; // @[MatrixPRE-Processor.scala 40:{60,60}]
  wire  _GEN_30 = ~i; // @[MatrixPRE-Processor.scala 40:{60,60}]
  wire [15:0] _GEN_3 = ~i & j ? bitmap_io_bitmap1_0_1 : _GEN_2; // @[MatrixPRE-Processor.scala 40:{60,60}]
  wire  _GEN_31 = ~j; // @[MatrixPRE-Processor.scala 40:{60,60}]
  wire [15:0] _GEN_4 = i & ~j ? bitmap_io_bitmap1_1_0 : _GEN_3; // @[MatrixPRE-Processor.scala 40:{60,60}]
  wire [15:0] _GEN_5 = i & j ? bitmap_io_bitmap1_1_1 : _GEN_4; // @[MatrixPRE-Processor.scala 40:{60,60}]
  wire [15:0] _GEN_15 = _GEN_30 & j ? io_mat1_0_1 : io_mat1_0_0; // @[MatrixPRE-Processor.scala 43:{27,27}]
  wire [15:0] _GEN_16 = i & _GEN_31 ? io_mat1_1_0 : _GEN_15; // @[MatrixPRE-Processor.scala 43:{27,27}]
  wire  _i_T_1 = i + 1'h1; // @[MatrixPRE-Processor.scala 45:16]
  Bitmap bitmap ( // @[MatrixPRE-Processor.scala 18:24]
    .clock(bitmap_clock),
    .reset(bitmap_reset),
    .io_mat1_0_0(bitmap_io_mat1_0_0),
    .io_mat1_0_1(bitmap_io_mat1_0_1),
    .io_mat1_1_0(bitmap_io_mat1_1_0),
    .io_mat1_1_1(bitmap_io_mat1_1_1),
    .io_bitmap1_0_0(bitmap_io_bitmap1_0_0),
    .io_bitmap1_0_1(bitmap_io_bitmap1_0_1),
    .io_bitmap1_1_0(bitmap_io_bitmap1_1_0),
    .io_bitmap1_1_1(bitmap_io_bitmap1_1_1)
  );
  assign io_compressedBitmap_0_0 = matReg1_0_0; // @[MatrixPRE-Processor.scala 16:25]
  assign io_compressedBitmap_0_1 = matReg1_0_1; // @[MatrixPRE-Processor.scala 16:25]
  assign io_compressedBitmap_1_0 = matReg1_1_0; // @[MatrixPRE-Processor.scala 16:25]
  assign io_compressedBitmap_1_1 = matReg1_1_1; // @[MatrixPRE-Processor.scala 16:25]
  assign io_End = i & j; // @[MatrixPRE-Processor.scala 34:45]
  assign bitmap_clock = clock;
  assign bitmap_reset = reset;
  assign bitmap_io_mat1_0_0 = io_mat1_0_0; // @[MatrixPRE-Processor.scala 19:20]
  assign bitmap_io_mat1_0_1 = io_mat1_0_1; // @[MatrixPRE-Processor.scala 19:20]
  assign bitmap_io_mat1_1_0 = io_mat1_1_0; // @[MatrixPRE-Processor.scala 19:20]
  assign bitmap_io_mat1_1_1 = io_mat1_1_1; // @[MatrixPRE-Processor.scala 19:20]
  always @(posedge clock) begin
    if (reset) begin // @[MatrixPRE-Processor.scala 15:26]
      matReg1_0_0 <= 16'h0; // @[MatrixPRE-Processor.scala 15:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 40:69]
      if (_GEN_30 & _GEN_31) begin // @[MatrixPRE-Processor.scala 41:27]
        matReg1_0_0 <= 16'h0; // @[MatrixPRE-Processor.scala 41:27]
      end
    end else if (_GEN_30 & _GEN_31) begin // @[MatrixPRE-Processor.scala 43:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 43:27]
        matReg1_0_0 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 43:27]
      end else begin
        matReg1_0_0 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 15:26]
      matReg1_0_1 <= 16'h0; // @[MatrixPRE-Processor.scala 15:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 40:69]
      if (_GEN_30 & j) begin // @[MatrixPRE-Processor.scala 41:27]
        matReg1_0_1 <= 16'h0; // @[MatrixPRE-Processor.scala 41:27]
      end
    end else if (_GEN_30 & j) begin // @[MatrixPRE-Processor.scala 43:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 43:27]
        matReg1_0_1 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 43:27]
      end else begin
        matReg1_0_1 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 15:26]
      matReg1_1_0 <= 16'h0; // @[MatrixPRE-Processor.scala 15:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 40:69]
      if (i & _GEN_31) begin // @[MatrixPRE-Processor.scala 41:27]
        matReg1_1_0 <= 16'h0; // @[MatrixPRE-Processor.scala 41:27]
      end
    end else if (i & _GEN_31) begin // @[MatrixPRE-Processor.scala 43:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 43:27]
        matReg1_1_0 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 43:27]
      end else begin
        matReg1_1_0 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 15:26]
      matReg1_1_1 <= 16'h0; // @[MatrixPRE-Processor.scala 15:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 40:69]
      if (i & j) begin // @[MatrixPRE-Processor.scala 41:27]
        matReg1_1_1 <= 16'h0; // @[MatrixPRE-Processor.scala 41:27]
      end
    end else if (i & j) begin // @[MatrixPRE-Processor.scala 43:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 43:27]
        matReg1_1_1 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 43:27]
      end else begin
        matReg1_1_1 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 22:22]
      reg_0 <= 1'h0; // @[MatrixPRE-Processor.scala 22:22]
    end else begin
      reg_0 <= io_mat2_0_0 != 16'h0 | io_mat2_0_1 != 16'h0; // @[MatrixPRE-Processor.scala 24:16]
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 22:22]
      reg_1 <= 1'h0; // @[MatrixPRE-Processor.scala 22:22]
    end else begin
      reg_1 <= io_mat2_1_0 != 16'h0 | io_mat2_1_1 != 16'h0; // @[MatrixPRE-Processor.scala 24:16]
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 29:20]
      i <= 1'h0; // @[MatrixPRE-Processor.scala 29:20]
    end else if (!(_io_End_T_2)) begin // @[MatrixPRE-Processor.scala 47:74]
      i <= _i_T_1;
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 30:20]
      j <= 1'h0; // @[MatrixPRE-Processor.scala 30:20]
    end else if (!(_io_End_T_2)) begin // @[MatrixPRE-Processor.scala 47:74]
      if (i) begin // @[MatrixPRE-Processor.scala 50:34]
        j <= j + 1'h1; // @[MatrixPRE-Processor.scala 51:11]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  matReg1_0_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  matReg1_0_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  matReg1_1_0 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  matReg1_1_1 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  reg_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  reg_1 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  i = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  j = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Muxes(
  input         clock,
  input         reset,
  input  [15:0] io_mat1_0_0,
  input  [15:0] io_mat1_0_1,
  input  [15:0] io_mat1_1_0,
  input  [15:0] io_mat1_1_1,
  input  [15:0] io_mat2_0,
  input  [15:0] io_mat2_1,
  input  [15:0] io_counterMatrix1_0_0,
  input  [15:0] io_counterMatrix1_0_1,
  input  [15:0] io_counterMatrix1_1_0,
  input  [15:0] io_counterMatrix1_1_1,
  input  [15:0] io_counterMatrix2_0,
  input  [15:0] io_counterMatrix2_1,
  output [3:0]  io_i_mux_bus_0,
  output [3:0]  io_i_mux_bus_1,
  output [3:0]  io_i_mux_bus_2,
  output [3:0]  io_i_mux_bus_3,
  output [15:0] io_Source_0,
  output [15:0] io_Source_1,
  output [15:0] io_Source_2,
  output [15:0] io_Source_3,
  input         io_valid,
  output        io_End
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_0_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStreaming_matrix_0; // @[Muxes.scala 20:39]
  reg [15:0] prevStreaming_matrix_1; // @[Muxes.scala 20:39]
  reg  matricesAreEqual; // @[Muxes.scala 21:31]
  wire  _GEN_0 = io_mat1_0_0 != prevStationary_matrix_0_0 ? 1'h0 : 1'h1; // @[Muxes.scala 22:22 26:61 27:28]
  wire  _GEN_1 = io_mat1_0_1 != prevStationary_matrix_0_1 ? 1'h0 : _GEN_0; // @[Muxes.scala 26:61 27:28]
  reg  jValid; // @[Muxes.scala 36:25]
  reg [31:0] i; // @[Muxes.scala 37:20]
  reg [31:0] j; // @[Muxes.scala 38:20]
  reg [31:0] counter; // @[Muxes.scala 39:26]
  reg [3:0] mux_0; // @[Muxes.scala 40:22]
  reg [3:0] mux_1; // @[Muxes.scala 40:22]
  reg [3:0] mux_2; // @[Muxes.scala 40:22]
  reg [3:0] mux_3; // @[Muxes.scala 40:22]
  reg [15:0] src_0; // @[Muxes.scala 41:22]
  reg [15:0] src_1; // @[Muxes.scala 41:22]
  reg [15:0] src_2; // @[Muxes.scala 41:22]
  reg [15:0] src_3; // @[Muxes.scala 41:22]
  reg [15:0] dest_0; // @[Muxes.scala 42:23]
  reg [15:0] dest_1; // @[Muxes.scala 42:23]
  reg [15:0] dest_2; // @[Muxes.scala 42:23]
  reg [15:0] dest_3; // @[Muxes.scala 42:23]
  wire  _GEN_212 = ~j[0]; // @[Muxes.scala 58:{26,26}]
  wire [15:0] _GEN_7 = ~j[0] & i[0] ? io_mat1_0_1 : io_mat1_0_0; // @[Muxes.scala 58:{26,26}]
  wire  _GEN_213 = ~i[0]; // @[Muxes.scala 58:{26,26}]
  wire [15:0] _GEN_8 = j[0] & ~i[0] ? io_mat1_1_0 : _GEN_7; // @[Muxes.scala 58:{26,26}]
  wire [15:0] _GEN_9 = j[0] & i[0] ? io_mat1_1_1 : _GEN_8; // @[Muxes.scala 58:{26,26}]
  wire [15:0] _GEN_11 = i[0] ? io_mat2_1 : io_mat2_0; // @[Muxes.scala 58:{50,50}]
  wire [15:0] _GEN_13 = _GEN_212 & i[0] ? io_counterMatrix1_0_1 : io_counterMatrix1_0_0; // @[Muxes.scala 59:{38,38}]
  wire [15:0] _GEN_14 = j[0] & _GEN_213 ? io_counterMatrix1_1_0 : _GEN_13; // @[Muxes.scala 59:{38,38}]
  wire [15:0] _GEN_15 = j[0] & i[0] ? io_counterMatrix1_1_1 : _GEN_14; // @[Muxes.scala 59:{38,38}]
  wire [15:0] _GEN_17 = i[0] ? io_counterMatrix2_1 : io_counterMatrix2_0; // @[Muxes.scala 59:{38,38}]
  wire [15:0] _mux_T_2 = _GEN_17 - 16'h1; // @[Muxes.scala 60:51]
  wire [15:0] _mux_T_6 = _GEN_15 - 16'h1; // @[Muxes.scala 60:85]
  wire [15:0] _mux_T_8 = _mux_T_2 - _mux_T_6; // @[Muxes.scala 60:58]
  wire [3:0] _GEN_24 = 2'h0 == counter[1:0] ? _mux_T_8[3:0] : mux_0; // @[Muxes.scala 40:22 60:{24,24}]
  wire [3:0] _GEN_25 = 2'h1 == counter[1:0] ? _mux_T_8[3:0] : mux_1; // @[Muxes.scala 40:22 60:{24,24}]
  wire [3:0] _GEN_26 = 2'h2 == counter[1:0] ? _mux_T_8[3:0] : mux_2; // @[Muxes.scala 40:22 60:{24,24}]
  wire [3:0] _GEN_27 = 2'h3 == counter[1:0] ? _mux_T_8[3:0] : mux_3; // @[Muxes.scala 40:22 60:{24,24}]
  wire [15:0] _GEN_28 = 2'h0 == counter[1:0] ? _GEN_11 : src_0; // @[Muxes.scala 41:22 61:{24,24}]
  wire [15:0] _GEN_29 = 2'h1 == counter[1:0] ? _GEN_11 : src_1; // @[Muxes.scala 41:22 61:{24,24}]
  wire [15:0] _GEN_30 = 2'h2 == counter[1:0] ? _GEN_11 : src_2; // @[Muxes.scala 41:22 61:{24,24}]
  wire [15:0] _GEN_31 = 2'h3 == counter[1:0] ? _GEN_11 : src_3; // @[Muxes.scala 41:22 61:{24,24}]
  wire [15:0] _GEN_34 = 2'h0 == counter[1:0] ? _GEN_9 : dest_0; // @[Muxes.scala 42:23 62:{25,25}]
  wire [15:0] _GEN_35 = 2'h1 == counter[1:0] ? _GEN_9 : dest_1; // @[Muxes.scala 42:23 62:{25,25}]
  wire [15:0] _GEN_36 = 2'h2 == counter[1:0] ? _GEN_9 : dest_2; // @[Muxes.scala 42:23 62:{25,25}]
  wire [15:0] _GEN_37 = 2'h3 == counter[1:0] ? _GEN_9 : dest_3; // @[Muxes.scala 42:23 62:{25,25}]
  wire [15:0] _mux_T_17 = _mux_T_6 - _mux_T_2; // @[Muxes.scala 64:61]
  wire [3:0] _GEN_48 = 2'h0 == counter[1:0] ? _mux_T_17[3:0] : mux_0; // @[Muxes.scala 40:22 64:{24,24}]
  wire [3:0] _GEN_49 = 2'h1 == counter[1:0] ? _mux_T_17[3:0] : mux_1; // @[Muxes.scala 40:22 64:{24,24}]
  wire [3:0] _GEN_50 = 2'h2 == counter[1:0] ? _mux_T_17[3:0] : mux_2; // @[Muxes.scala 40:22 64:{24,24}]
  wire [3:0] _GEN_51 = 2'h3 == counter[1:0] ? _mux_T_17[3:0] : mux_3; // @[Muxes.scala 40:22 64:{24,24}]
  wire [3:0] _GEN_66 = _GEN_15 < _GEN_17 ? _GEN_24 : _GEN_48; // @[Muxes.scala 59:61]
  wire [3:0] _GEN_67 = _GEN_15 < _GEN_17 ? _GEN_25 : _GEN_49; // @[Muxes.scala 59:61]
  wire [3:0] _GEN_68 = _GEN_15 < _GEN_17 ? _GEN_26 : _GEN_50; // @[Muxes.scala 59:61]
  wire [3:0] _GEN_69 = _GEN_15 < _GEN_17 ? _GEN_27 : _GEN_51; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_70 = _GEN_15 < _GEN_17 ? _GEN_28 : _GEN_28; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_71 = _GEN_15 < _GEN_17 ? _GEN_29 : _GEN_29; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_72 = _GEN_15 < _GEN_17 ? _GEN_30 : _GEN_30; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_73 = _GEN_15 < _GEN_17 ? _GEN_31 : _GEN_31; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_74 = _GEN_15 < _GEN_17 ? _GEN_34 : _GEN_34; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_75 = _GEN_15 < _GEN_17 ? _GEN_35 : _GEN_35; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_76 = _GEN_15 < _GEN_17 ? _GEN_36 : _GEN_36; // @[Muxes.scala 59:61]
  wire [15:0] _GEN_77 = _GEN_15 < _GEN_17 ? _GEN_37 : _GEN_37; // @[Muxes.scala 59:61]
  wire  _T_23 = ~jValid; // @[Muxes.scala 69:15]
  wire  _T_24 = j == 32'h1; // @[Muxes.scala 71:22]
  wire  _T_25 = i == 32'h1; // @[Muxes.scala 71:56]
  wire  _T_26 = j == 32'h1 & i == 32'h1; // @[Muxes.scala 71:50]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[Muxes.scala 72:30]
  wire [31:0] _GEN_78 = ~(j == 32'h1 & i == 32'h1) ? _counter_T_1 : counter; // @[Muxes.scala 71:85 72:19 39:26]
  wire [31:0] _GEN_79 = ~jValid ? _GEN_78 : counter; // @[Muxes.scala 69:24 39:26]
  wire [3:0] _GEN_80 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_66 : mux_0; // @[Muxes.scala 40:22 58:60]
  wire [3:0] _GEN_81 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_67 : mux_1; // @[Muxes.scala 40:22 58:60]
  wire [3:0] _GEN_82 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_68 : mux_2; // @[Muxes.scala 40:22 58:60]
  wire [3:0] _GEN_83 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_69 : mux_3; // @[Muxes.scala 40:22 58:60]
  wire [15:0] _GEN_84 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_70 : src_0; // @[Muxes.scala 41:22 58:60]
  wire [15:0] _GEN_85 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_71 : src_1; // @[Muxes.scala 41:22 58:60]
  wire [15:0] _GEN_86 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_72 : src_2; // @[Muxes.scala 41:22 58:60]
  wire [15:0] _GEN_87 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_73 : src_3; // @[Muxes.scala 41:22 58:60]
  wire [15:0] _GEN_88 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_74 : dest_0; // @[Muxes.scala 42:23 58:60]
  wire [15:0] _GEN_89 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_75 : dest_1; // @[Muxes.scala 42:23 58:60]
  wire [15:0] _GEN_90 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_76 : dest_2; // @[Muxes.scala 42:23 58:60]
  wire [15:0] _GEN_91 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_77 : dest_3; // @[Muxes.scala 42:23 58:60]
  wire [31:0] _GEN_92 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_79 : counter; // @[Muxes.scala 39:26 58:60]
  wire [31:0] _j_T_1 = j + 32'h1; // @[Muxes.scala 98:12]
  wire [3:0] _GEN_142 = _T_25 & _T_24 ? mux_0 : _GEN_80; // @[Muxes.scala 103:11 84:36]
  wire [3:0] _GEN_143 = _T_25 & _T_24 ? mux_1 : _GEN_81; // @[Muxes.scala 103:11 84:36]
  wire [3:0] _GEN_144 = _T_25 & _T_24 ? mux_2 : _GEN_82; // @[Muxes.scala 103:11 84:36]
  wire [3:0] _GEN_145 = _T_25 & _T_24 ? mux_3 : _GEN_83; // @[Muxes.scala 103:11 84:36]
  wire [15:0] _GEN_146 = _T_25 & _T_24 ? src_0 : _GEN_84; // @[Muxes.scala 101:11 84:36]
  wire [15:0] _GEN_147 = _T_25 & _T_24 ? src_1 : _GEN_85; // @[Muxes.scala 101:11 84:36]
  wire [15:0] _GEN_148 = _T_25 & _T_24 ? src_2 : _GEN_86; // @[Muxes.scala 101:11 84:36]
  wire [15:0] _GEN_149 = _T_25 & _T_24 ? src_3 : _GEN_87; // @[Muxes.scala 101:11 84:36]
  wire [15:0] _GEN_150 = _T_25 & _T_24 ? dest_0 : _GEN_88; // @[Muxes.scala 102:12 84:36]
  wire [15:0] _GEN_151 = _T_25 & _T_24 ? dest_1 : _GEN_89; // @[Muxes.scala 102:12 84:36]
  wire [15:0] _GEN_152 = _T_25 & _T_24 ? dest_2 : _GEN_90; // @[Muxes.scala 102:12 84:36]
  wire [15:0] _GEN_153 = _T_25 & _T_24 ? dest_3 : _GEN_91; // @[Muxes.scala 102:12 84:36]
  wire [31:0] _GEN_154 = _T_25 & _T_24 ? _j_T_1 : j; // @[Muxes.scala 84:36 98:7]
  wire [31:0] _GEN_155 = _T_25 & _T_24 ? counter : _GEN_92; // @[Muxes.scala 84:36 99:13]
  wire [31:0] _i_T_1 = i + 32'h1; // @[Muxes.scala 116:18]
  wire [31:0] _GEN_157 = i < 32'h1 ? _i_T_1 : i; // @[Muxes.scala 115:42 116:13]
  wire  _GEN_158 = _T_26 | jValid; // @[Muxes.scala 111:82 112:16 36:25]
  wire [31:0] _GEN_159 = _T_26 ? _GEN_154 : 32'h0; // @[Muxes.scala 111:82 114:11]
  wire [31:0] _GEN_160 = _T_26 ? i : _GEN_157; // @[Muxes.scala 111:82]
  reg  io_End_REG; // @[Muxes.scala 134:30]
  reg  io_End_REG_1; // @[Muxes.scala 134:22]
  assign io_i_mux_bus_0 = mux_0; // @[Muxes.scala 46:18]
  assign io_i_mux_bus_1 = mux_1; // @[Muxes.scala 46:18]
  assign io_i_mux_bus_2 = mux_2; // @[Muxes.scala 46:18]
  assign io_i_mux_bus_3 = mux_3; // @[Muxes.scala 46:18]
  assign io_Source_0 = src_0; // @[Muxes.scala 47:15]
  assign io_Source_1 = src_1; // @[Muxes.scala 47:15]
  assign io_Source_2 = src_2; // @[Muxes.scala 47:15]
  assign io_Source_3 = src_3; // @[Muxes.scala 47:15]
  assign io_End = io_End_REG_1; // @[Muxes.scala 134:12]
  always @(posedge clock) begin
    prevStationary_matrix_0_0 <= io_mat1_0_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_0_1 <= io_mat1_0_1; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_0 <= io_mat1_1_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_1 <= io_mat1_1_1; // @[Muxes.scala 19:40]
    prevStreaming_matrix_0 <= io_mat2_0; // @[Muxes.scala 20:39]
    prevStreaming_matrix_1 <= io_mat2_1; // @[Muxes.scala 20:39]
    if (io_mat2_1 != prevStreaming_matrix_1) begin // @[Muxes.scala 30:51]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 31:26]
    end else if (io_mat1_1_1 != prevStationary_matrix_1_1) begin // @[Muxes.scala 26:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 27:28]
    end else if (io_mat1_1_0 != prevStationary_matrix_1_0) begin // @[Muxes.scala 26:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 27:28]
    end else if (io_mat2_0 != prevStreaming_matrix_0) begin // @[Muxes.scala 30:51]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 31:26]
    end else begin
      matricesAreEqual <= _GEN_1;
    end
    if (reset) begin // @[Muxes.scala 36:25]
      jValid <= 1'h0; // @[Muxes.scala 36:25]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        if (!(j < 32'h1)) begin // @[Muxes.scala 109:40]
          jValid <= _GEN_158;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        jValid <= 1'h0; // @[Muxes.scala 124:14]
      end
    end
    if (reset) begin // @[Muxes.scala 37:20]
      i <= 32'h0; // @[Muxes.scala 37:20]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        if (!(j < 32'h1)) begin // @[Muxes.scala 109:40]
          i <= _GEN_160;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        i <= 32'h0; // @[Muxes.scala 122:9]
      end
    end
    if (reset) begin // @[Muxes.scala 38:20]
      j <= 32'h0; // @[Muxes.scala 38:20]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        if (j < 32'h1) begin // @[Muxes.scala 109:40]
          j <= _j_T_1; // @[Muxes.scala 110:11]
        end else begin
          j <= _GEN_159;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        j <= 32'h0; // @[Muxes.scala 123:9]
      end else begin
        j <= _GEN_154;
      end
    end
    if (reset) begin // @[Muxes.scala 39:26]
      counter <= 32'h0; // @[Muxes.scala 39:26]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        counter <= _GEN_155;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        counter <= 32'h0; // @[Muxes.scala 125:15]
      end else begin
        counter <= _GEN_155;
      end
    end else begin
      counter <= _GEN_92;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_0 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        mux_0 <= _GEN_142;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        mux_0 <= 4'h0; // @[Muxes.scala 130:16]
      end else begin
        mux_0 <= _GEN_142;
      end
    end else begin
      mux_0 <= _GEN_80;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_1 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        mux_1 <= _GEN_143;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        mux_1 <= 4'h0; // @[Muxes.scala 130:16]
      end else begin
        mux_1 <= _GEN_143;
      end
    end else begin
      mux_1 <= _GEN_81;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_2 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        mux_2 <= _GEN_144;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        mux_2 <= 4'h0; // @[Muxes.scala 130:16]
      end else begin
        mux_2 <= _GEN_144;
      end
    end else begin
      mux_2 <= _GEN_82;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_3 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        mux_3 <= _GEN_145;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        mux_3 <= 4'h0; // @[Muxes.scala 130:16]
      end else begin
        mux_3 <= _GEN_145;
      end
    end else begin
      mux_3 <= _GEN_83;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_0 <= 16'h0; // @[Muxes.scala 41:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        src_0 <= _GEN_146;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        src_0 <= 16'h0; // @[Muxes.scala 128:16]
      end else begin
        src_0 <= _GEN_146;
      end
    end else begin
      src_0 <= _GEN_84;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_1 <= 16'h0; // @[Muxes.scala 41:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        src_1 <= _GEN_147;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        src_1 <= 16'h0; // @[Muxes.scala 128:16]
      end else begin
        src_1 <= _GEN_147;
      end
    end else begin
      src_1 <= _GEN_85;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_2 <= 16'h0; // @[Muxes.scala 41:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        src_2 <= _GEN_148;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        src_2 <= 16'h0; // @[Muxes.scala 128:16]
      end else begin
        src_2 <= _GEN_148;
      end
    end else begin
      src_2 <= _GEN_86;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_3 <= 16'h0; // @[Muxes.scala 41:22]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        src_3 <= _GEN_149;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        src_3 <= 16'h0; // @[Muxes.scala 128:16]
      end else begin
        src_3 <= _GEN_149;
      end
    end else begin
      src_3 <= _GEN_87;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_0 <= 16'h0; // @[Muxes.scala 42:23]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        dest_0 <= _GEN_150;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        dest_0 <= 16'h0; // @[Muxes.scala 129:17]
      end else begin
        dest_0 <= _GEN_150;
      end
    end else begin
      dest_0 <= _GEN_88;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_1 <= 16'h0; // @[Muxes.scala 42:23]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        dest_1 <= _GEN_151;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        dest_1 <= 16'h0; // @[Muxes.scala 129:17]
      end else begin
        dest_1 <= _GEN_151;
      end
    end else begin
      dest_1 <= _GEN_89;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_2 <= 16'h0; // @[Muxes.scala 42:23]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        dest_2 <= _GEN_152;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        dest_2 <= 16'h0; // @[Muxes.scala 129:17]
      end else begin
        dest_2 <= _GEN_152;
      end
    end else begin
      dest_2 <= _GEN_90;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_3 <= 16'h0; // @[Muxes.scala 42:23]
    end else if (io_valid) begin // @[Muxes.scala 82:16]
      if (_T_23) begin // @[Muxes.scala 107:29]
        dest_3 <= _GEN_153;
      end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 120:64]
        dest_3 <= 16'h0; // @[Muxes.scala 129:17]
      end else begin
        dest_3 <= _GEN_153;
      end
    end else begin
      dest_3 <= _GEN_91;
    end
    io_End_REG <= _T_25 & _T_24; // @[Muxes.scala 134:61]
    io_End_REG_1 <= io_End_REG; // @[Muxes.scala 134:22]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  prevStationary_matrix_0_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  prevStationary_matrix_0_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  prevStationary_matrix_1_0 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  prevStationary_matrix_1_1 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  prevStreaming_matrix_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  prevStreaming_matrix_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  matricesAreEqual = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  jValid = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  i = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  j = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  counter = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  mux_0 = _RAND_11[3:0];
  _RAND_12 = {1{`RANDOM}};
  mux_1 = _RAND_12[3:0];
  _RAND_13 = {1{`RANDOM}};
  mux_2 = _RAND_13[3:0];
  _RAND_14 = {1{`RANDOM}};
  mux_3 = _RAND_14[3:0];
  _RAND_15 = {1{`RANDOM}};
  src_0 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  src_1 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  src_2 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  src_3 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  dest_0 = _RAND_19[15:0];
  _RAND_20 = {1{`RANDOM}};
  dest_1 = _RAND_20[15:0];
  _RAND_21 = {1{`RANDOM}};
  dest_2 = _RAND_21[15:0];
  _RAND_22 = {1{`RANDOM}};
  dest_3 = _RAND_22[15:0];
  _RAND_23 = {1{`RANDOM}};
  io_End_REG = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  io_End_REG_1 = _RAND_24[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SourceDestination(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Streaming_matrix_0,
  input  [15:0] io_Streaming_matrix_1,
  output        io_counterMatrix1_valid,
  output [15:0] io_counterMatrix1_bits_0_0,
  output [15:0] io_counterMatrix1_bits_0_1,
  output [15:0] io_counterMatrix1_bits_1_0,
  output [15:0] io_counterMatrix1_bits_1_1,
  output        io_counterMatrix2_valid,
  output [15:0] io_counterMatrix2_bits_0,
  output [15:0] io_counterMatrix2_bits_1,
  output        io_valid,
  input         io_Ivalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0_0; // @[SourceDestination.scala 16:40]
  reg [15:0] prevStationary_matrix_0_1; // @[SourceDestination.scala 16:40]
  reg [15:0] prevStationary_matrix_1_0; // @[SourceDestination.scala 16:40]
  reg [15:0] prevStationary_matrix_1_1; // @[SourceDestination.scala 16:40]
  reg  matricesAreEqual; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_0_0; // @[SourceDestination.scala 30:31]
  reg [15:0] counterRegs1_0_1; // @[SourceDestination.scala 30:31]
  reg [15:0] counterRegs1_1_0; // @[SourceDestination.scala 30:31]
  reg [15:0] counterRegs1_1_1; // @[SourceDestination.scala 30:31]
  reg [15:0] counterRegs2_0; // @[SourceDestination.scala 31:31]
  reg [15:0] counterRegs2_1; // @[SourceDestination.scala 31:31]
  reg [31:0] i; // @[SourceDestination.scala 33:20]
  reg [31:0] j; // @[SourceDestination.scala 34:20]
  reg  jValid; // @[SourceDestination.scala 37:21]
  reg [31:0] k; // @[SourceDestination.scala 40:20]
  reg [31:0] counter1; // @[SourceDestination.scala 42:27]
  reg [31:0] counter2; // @[SourceDestination.scala 43:27]
  wire  _GEN_101 = ~i[0]; // @[SourceDestination.scala 46:{38,38}]
  wire [15:0] _GEN_5 = ~i[0] & j[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[SourceDestination.scala 46:{38,38}]
  wire  _GEN_102 = ~j[0]; // @[SourceDestination.scala 46:{38,38}]
  wire [15:0] _GEN_6 = i[0] & ~j[0] ? io_Stationary_matrix_1_0 : _GEN_5; // @[SourceDestination.scala 46:{38,38}]
  wire [15:0] _GEN_7 = i[0] & j[0] ? io_Stationary_matrix_1_1 : _GEN_6; // @[SourceDestination.scala 46:{38,38}]
  wire [15:0] _GEN_8 = _GEN_101 & _GEN_102 ? counter1[15:0] : counterRegs1_0_0; // @[SourceDestination.scala 48:{28,28} 30:31]
  wire [15:0] _GEN_9 = _GEN_101 & j[0] ? counter1[15:0] : counterRegs1_0_1; // @[SourceDestination.scala 48:{28,28} 30:31]
  wire [15:0] _GEN_10 = i[0] & _GEN_102 ? counter1[15:0] : counterRegs1_1_0; // @[SourceDestination.scala 48:{28,28} 30:31]
  wire [15:0] _GEN_11 = i[0] & j[0] ? counter1[15:0] : counterRegs1_1_1; // @[SourceDestination.scala 48:{28,28} 30:31]
  wire  _T_10 = j == 32'h1; // @[SourceDestination.scala 49:20]
  wire  _T_11 = i == 32'h1; // @[SourceDestination.scala 49:54]
  wire  _T_12 = j == 32'h1 & i == 32'h1; // @[SourceDestination.scala 49:48]
  wire  _T_13 = ~(j == 32'h1 & i == 32'h1); // @[SourceDestination.scala 49:15]
  wire [31:0] _counter1_T_1 = counter1 + 32'h1; // @[SourceDestination.scala 50:32]
  wire [31:0] _GEN_12 = ~(j == 32'h1 & i == 32'h1) & io_Ivalid ? _counter1_T_1 : counter1; // @[SourceDestination.scala 49:98 50:20 42:27]
  wire [15:0] _GEN_13 = _GEN_101 & _GEN_102 ? 16'h1 : counterRegs1_0_0; // @[SourceDestination.scala 53:{28,28} 30:31]
  wire [15:0] _GEN_14 = _GEN_101 & j[0] ? 16'h1 : counterRegs1_0_1; // @[SourceDestination.scala 53:{28,28} 30:31]
  wire [15:0] _GEN_15 = i[0] & _GEN_102 ? 16'h1 : counterRegs1_1_0; // @[SourceDestination.scala 53:{28,28} 30:31]
  wire [15:0] _GEN_16 = i[0] & j[0] ? 16'h1 : counterRegs1_1_1; // @[SourceDestination.scala 53:{28,28} 30:31]
  wire [15:0] _GEN_17 = counter1 < 32'h5 ? _GEN_8 : _GEN_13; // @[SourceDestination.scala 47:48]
  wire [15:0] _GEN_18 = counter1 < 32'h5 ? _GEN_9 : _GEN_14; // @[SourceDestination.scala 47:48]
  wire [15:0] _GEN_19 = counter1 < 32'h5 ? _GEN_10 : _GEN_15; // @[SourceDestination.scala 47:48]
  wire [15:0] _GEN_20 = counter1 < 32'h5 ? _GEN_11 : _GEN_16; // @[SourceDestination.scala 47:48]
  wire [31:0] _GEN_21 = counter1 < 32'h5 ? _GEN_12 : 32'h2; // @[SourceDestination.scala 47:48 54:18]
  wire [15:0] _GEN_22 = _GEN_101 & _GEN_102 ? 16'h0 : counterRegs1_0_0; // @[SourceDestination.scala 57:{26,26} 30:31]
  wire [15:0] _GEN_23 = _GEN_101 & j[0] ? 16'h0 : counterRegs1_0_1; // @[SourceDestination.scala 57:{26,26} 30:31]
  wire [15:0] _GEN_24 = i[0] & _GEN_102 ? 16'h0 : counterRegs1_1_0; // @[SourceDestination.scala 57:{26,26} 30:31]
  wire [15:0] _GEN_25 = i[0] & j[0] ? 16'h0 : counterRegs1_1_1; // @[SourceDestination.scala 57:{26,26} 30:31]
  wire [15:0] _GEN_26 = _GEN_7 != 16'h0 ? _GEN_17 : _GEN_22; // @[SourceDestination.scala 46:47]
  wire [15:0] _GEN_27 = _GEN_7 != 16'h0 ? _GEN_18 : _GEN_23; // @[SourceDestination.scala 46:47]
  wire [15:0] _GEN_28 = _GEN_7 != 16'h0 ? _GEN_19 : _GEN_24; // @[SourceDestination.scala 46:47]
  wire [15:0] _GEN_29 = _GEN_7 != 16'h0 ? _GEN_20 : _GEN_25; // @[SourceDestination.scala 46:47]
  wire [31:0] _GEN_30 = _GEN_7 != 16'h0 ? _GEN_21 : counter1; // @[SourceDestination.scala 42:27 46:47]
  wire [15:0] _GEN_32 = k[0] ? io_Streaming_matrix_1 : io_Streaming_matrix_0; // @[SourceDestination.scala 60:{34,34}]
  wire [31:0] _T_23 = k - 32'h1; // @[SourceDestination.scala 62:24]
  wire [31:0] _counterRegs2_T_1 = counter2 - 32'h1; // @[SourceDestination.scala 62:43]
  wire [15:0] _GEN_33 = ~_T_23[0] ? _counterRegs2_T_1[15:0] : counterRegs2_0; // @[SourceDestination.scala 31:31 62:{31,31}]
  wire [15:0] _GEN_34 = _T_23[0] ? _counterRegs2_T_1[15:0] : counterRegs2_1; // @[SourceDestination.scala 31:31 62:{31,31}]
  wire [31:0] _counter2_T_1 = counter2 + 32'h1; // @[SourceDestination.scala 64:32]
  wire [31:0] _k_T_1 = k + 32'h1; // @[SourceDestination.scala 65:18]
  wire [31:0] _GEN_35 = _T_13 ? _counter2_T_1 : counter2; // @[SourceDestination.scala 63:83 64:20 43:27]
  wire [31:0] _GEN_36 = _T_13 ? _k_T_1 : k; // @[SourceDestination.scala 63:83 65:13 40:20]
  wire [15:0] _GEN_37 = counter2 < 32'h5 ? _GEN_33 : counterRegs2_0; // @[SourceDestination.scala 31:31 61:48]
  wire [15:0] _GEN_38 = counter2 < 32'h5 ? _GEN_34 : counterRegs2_1; // @[SourceDestination.scala 31:31 61:48]
  wire [31:0] _GEN_39 = counter2 < 32'h5 ? _GEN_35 : counter2; // @[SourceDestination.scala 43:27 61:48]
  wire [31:0] _GEN_40 = counter2 < 32'h5 ? _GEN_36 : k; // @[SourceDestination.scala 40:20 61:48]
  wire [15:0] _GEN_41 = _GEN_32 != 16'h0 ? _GEN_37 : counterRegs2_0; // @[SourceDestination.scala 31:31 60:43]
  wire [15:0] _GEN_42 = _GEN_32 != 16'h0 ? _GEN_38 : counterRegs2_1; // @[SourceDestination.scala 31:31 60:43]
  wire [31:0] _GEN_43 = _GEN_32 != 16'h0 ? _GEN_39 : counter2; // @[SourceDestination.scala 43:27 60:43]
  wire [31:0] _GEN_44 = _GEN_32 != 16'h0 ? _GEN_40 : k; // @[SourceDestination.scala 40:20 60:43]
  wire [15:0] _GEN_45 = io_Ivalid ? _GEN_26 : counterRegs1_0_0; // @[SourceDestination.scala 45:17 30:31]
  wire [15:0] _GEN_46 = io_Ivalid ? _GEN_27 : counterRegs1_0_1; // @[SourceDestination.scala 45:17 30:31]
  wire [15:0] _GEN_47 = io_Ivalid ? _GEN_28 : counterRegs1_1_0; // @[SourceDestination.scala 45:17 30:31]
  wire [15:0] _GEN_48 = io_Ivalid ? _GEN_29 : counterRegs1_1_1; // @[SourceDestination.scala 45:17 30:31]
  wire [31:0] _GEN_49 = io_Ivalid ? _GEN_30 : counter1; // @[SourceDestination.scala 45:17 42:27]
  wire [15:0] _GEN_50 = io_Ivalid ? _GEN_41 : counterRegs2_0; // @[SourceDestination.scala 45:17 31:31]
  wire [15:0] _GEN_51 = io_Ivalid ? _GEN_42 : counterRegs2_1; // @[SourceDestination.scala 45:17 31:31]
  wire [31:0] _GEN_52 = io_Ivalid ? _GEN_43 : counter2; // @[SourceDestination.scala 45:17 43:27]
  wire [31:0] _GEN_53 = io_Ivalid ? _GEN_44 : k; // @[SourceDestination.scala 45:17 40:20]
  wire [31:0] _GEN_54 = k == 32'h2 ? k : _GEN_53; // @[SourceDestination.scala 79:36 80:9]
  wire [31:0] _GEN_55 = k == 32'h2 ? counter2 : _GEN_52; // @[SourceDestination.scala 79:36 81:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[SourceDestination.scala 92:16]
  wire [31:0] _i_T_1 = i + 32'h1; // @[SourceDestination.scala 98:18]
  wire [31:0] _GEN_58 = i < 32'h1 ? _i_T_1 : i; // @[SourceDestination.scala 97:42 98:13]
  wire [31:0] _GEN_60 = _T_12 ? j : 32'h0; // @[SourceDestination.scala 93:79 96:11]
  wire [31:0] _GEN_61 = _T_12 ? i : _GEN_58; // @[SourceDestination.scala 93:79]
  wire  _GEN_63 = j < 32'h1 ? 1'h0 : _T_12; // @[SourceDestination.scala 38:12 91:40]
  wire  _GEN_77 = ~jValid & _GEN_63; // @[SourceDestination.scala 38:12 90:26]
  assign io_counterMatrix1_valid = _T_10 & _T_11; // @[SourceDestination.scala 117:42]
  assign io_counterMatrix1_bits_0_0 = counterRegs1_0_0; // @[SourceDestination.scala 125:28]
  assign io_counterMatrix1_bits_0_1 = counterRegs1_0_1; // @[SourceDestination.scala 125:28]
  assign io_counterMatrix1_bits_1_0 = counterRegs1_1_0; // @[SourceDestination.scala 125:28]
  assign io_counterMatrix1_bits_1_1 = counterRegs1_1_1; // @[SourceDestination.scala 125:28]
  assign io_counterMatrix2_valid = _T_10 & _T_11; // @[SourceDestination.scala 117:42]
  assign io_counterMatrix2_bits_0 = counterRegs2_0; // @[SourceDestination.scala 126:28]
  assign io_counterMatrix2_bits_1 = counterRegs2_1; // @[SourceDestination.scala 126:28]
  assign io_valid = _T_10 & _T_11; // @[SourceDestination.scala 72:47]
  always @(posedge clock) begin
    prevStationary_matrix_0_0 <= io_Stationary_matrix_0_0; // @[SourceDestination.scala 16:40]
    prevStationary_matrix_0_1 <= io_Stationary_matrix_0_1; // @[SourceDestination.scala 16:40]
    prevStationary_matrix_1_0 <= io_Stationary_matrix_1_0; // @[SourceDestination.scala 16:40]
    prevStationary_matrix_1_1 <= io_Stationary_matrix_1_1; // @[SourceDestination.scala 16:40]
    if (io_Stationary_matrix_1_1 != prevStationary_matrix_1_1) begin // @[SourceDestination.scala 22:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 23:28]
    end else if (io_Stationary_matrix_1_0 != prevStationary_matrix_1_0) begin // @[SourceDestination.scala 22:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 23:28]
    end else if (io_Stationary_matrix_0_1 != prevStationary_matrix_0_1) begin // @[SourceDestination.scala 22:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 23:28]
    end else if (io_Stationary_matrix_0_0 != prevStationary_matrix_0_0) begin // @[SourceDestination.scala 22:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 23:28]
    end else begin
      matricesAreEqual <= 1'h1; // @[SourceDestination.scala 18:22]
    end
    if (reset) begin // @[SourceDestination.scala 30:31]
      counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 30:31]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counterRegs1_0_0 <= _GEN_45;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 109:30]
      end else begin
        counterRegs1_0_0 <= _GEN_45;
      end
    end else begin
      counterRegs1_0_0 <= _GEN_45;
    end
    if (reset) begin // @[SourceDestination.scala 30:31]
      counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 30:31]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counterRegs1_0_1 <= _GEN_46;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 109:30]
      end else begin
        counterRegs1_0_1 <= _GEN_46;
      end
    end else begin
      counterRegs1_0_1 <= _GEN_46;
    end
    if (reset) begin // @[SourceDestination.scala 30:31]
      counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 30:31]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counterRegs1_1_0 <= _GEN_47;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 109:30]
      end else begin
        counterRegs1_1_0 <= _GEN_47;
      end
    end else begin
      counterRegs1_1_0 <= _GEN_47;
    end
    if (reset) begin // @[SourceDestination.scala 30:31]
      counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 30:31]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counterRegs1_1_1 <= _GEN_48;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 109:30]
      end else begin
        counterRegs1_1_1 <= _GEN_48;
      end
    end else begin
      counterRegs1_1_1 <= _GEN_48;
    end
    if (reset) begin // @[SourceDestination.scala 31:31]
      counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 31:31]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counterRegs2_0 <= _GEN_50;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 111:25]
      end else begin
        counterRegs2_0 <= _GEN_50;
      end
    end else begin
      counterRegs2_0 <= _GEN_50;
    end
    if (reset) begin // @[SourceDestination.scala 31:31]
      counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 31:31]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counterRegs2_1 <= _GEN_51;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 111:25]
      end else begin
        counterRegs2_1 <= _GEN_51;
      end
    end else begin
      counterRegs2_1 <= _GEN_51;
    end
    if (reset) begin // @[SourceDestination.scala 33:20]
      i <= 32'h0; // @[SourceDestination.scala 33:20]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        if (!(j < 32'h1)) begin // @[SourceDestination.scala 91:40]
          i <= _GEN_61;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        i <= 32'h0; // @[SourceDestination.scala 102:9]
      end
    end
    if (reset) begin // @[SourceDestination.scala 34:20]
      j <= 32'h0; // @[SourceDestination.scala 34:20]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        if (j < 32'h1) begin // @[SourceDestination.scala 91:40]
          j <= _j_T_1; // @[SourceDestination.scala 92:11]
        end else begin
          j <= _GEN_60;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        j <= 32'h0; // @[SourceDestination.scala 103:9]
      end
    end
    jValid <= io_Ivalid & _GEN_77; // @[SourceDestination.scala 38:12 78:16]
    if (reset) begin // @[SourceDestination.scala 40:20]
      k <= 32'h0; // @[SourceDestination.scala 40:20]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        k <= _GEN_54;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        k <= 32'h0; // @[SourceDestination.scala 104:9]
      end else begin
        k <= _GEN_54;
      end
    end else begin
      k <= _GEN_53;
    end
    if (reset) begin // @[SourceDestination.scala 42:27]
      counter1 <= 32'h1; // @[SourceDestination.scala 42:27]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counter1 <= _GEN_49;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counter1 <= 32'h1; // @[SourceDestination.scala 105:16]
      end else begin
        counter1 <= _GEN_49;
      end
    end else begin
      counter1 <= _GEN_49;
    end
    if (reset) begin // @[SourceDestination.scala 43:27]
      counter2 <= 32'h1; // @[SourceDestination.scala 43:27]
    end else if (io_Ivalid) begin // @[SourceDestination.scala 78:16]
      if (~jValid) begin // @[SourceDestination.scala 90:26]
        counter2 <= _GEN_55;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 101:64]
        counter2 <= 32'h1; // @[SourceDestination.scala 106:16]
      end else begin
        counter2 <= _GEN_55;
      end
    end else begin
      counter2 <= _GEN_52;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  prevStationary_matrix_0_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  prevStationary_matrix_0_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  prevStationary_matrix_1_0 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  prevStationary_matrix_1_1 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  matricesAreEqual = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  counterRegs1_0_0 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  counterRegs1_0_1 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  counterRegs1_1_0 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  counterRegs1_1_1 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  counterRegs2_0 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  counterRegs2_1 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  i = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  j = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  jValid = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  k = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  counter1 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  counter2 = _RAND_16[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PathFinder(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Streaming_matrix_0,
  input  [15:0] io_Streaming_matrix_1,
  output [3:0]  io_i_mux_bus_0,
  output [3:0]  io_i_mux_bus_1,
  output [3:0]  io_i_mux_bus_2,
  output [3:0]  io_i_mux_bus_3,
  output [15:0] io_Source_0,
  output [15:0] io_Source_1,
  output [15:0] io_Source_2,
  output [15:0] io_Source_3,
  output        io_PF_Valid,
  input         io_Ivalid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  myMuxes_clock; // @[PathFinder.scala 23:23]
  wire  myMuxes_reset; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_mat1_0_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_mat1_0_1; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_mat1_1_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_mat1_1_1; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_mat2_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_mat2_1; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_1; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_1; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_counterMatrix2_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_counterMatrix2_1; // @[PathFinder.scala 23:23]
  wire [3:0] myMuxes_io_i_mux_bus_0; // @[PathFinder.scala 23:23]
  wire [3:0] myMuxes_io_i_mux_bus_1; // @[PathFinder.scala 23:23]
  wire [3:0] myMuxes_io_i_mux_bus_2; // @[PathFinder.scala 23:23]
  wire [3:0] myMuxes_io_i_mux_bus_3; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_Source_0; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_Source_1; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_Source_2; // @[PathFinder.scala 23:23]
  wire [15:0] myMuxes_io_Source_3; // @[PathFinder.scala 23:23]
  wire  myMuxes_io_valid; // @[PathFinder.scala 23:23]
  wire  myMuxes_io_End; // @[PathFinder.scala 23:23]
  wire  myCounter_clock; // @[PathFinder.scala 29:25]
  wire  myCounter_reset; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_0; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_1; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_0; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_1; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_Streaming_matrix_0; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_Streaming_matrix_1; // @[PathFinder.scala 29:25]
  wire  myCounter_io_counterMatrix1_valid; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_0; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_1; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_0; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_1; // @[PathFinder.scala 29:25]
  wire  myCounter_io_counterMatrix2_valid; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_0; // @[PathFinder.scala 29:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_1; // @[PathFinder.scala 29:25]
  wire  myCounter_io_valid; // @[PathFinder.scala 29:25]
  wire  myCounter_io_Ivalid; // @[PathFinder.scala 29:25]
  reg [31:0] delay; // @[PathFinder.scala 22:22]
  wire [31:0] _delay_T_1 = delay + 32'h1; // @[PathFinder.scala 26:20]
  wire  _GEN_15 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid &
    myMuxes_io_End; // @[PathFinder.scala 35:130 44:17 54:17]
  Muxes myMuxes ( // @[PathFinder.scala 23:23]
    .clock(myMuxes_clock),
    .reset(myMuxes_reset),
    .io_mat1_0_0(myMuxes_io_mat1_0_0),
    .io_mat1_0_1(myMuxes_io_mat1_0_1),
    .io_mat1_1_0(myMuxes_io_mat1_1_0),
    .io_mat1_1_1(myMuxes_io_mat1_1_1),
    .io_mat2_0(myMuxes_io_mat2_0),
    .io_mat2_1(myMuxes_io_mat2_1),
    .io_counterMatrix1_0_0(myMuxes_io_counterMatrix1_0_0),
    .io_counterMatrix1_0_1(myMuxes_io_counterMatrix1_0_1),
    .io_counterMatrix1_1_0(myMuxes_io_counterMatrix1_1_0),
    .io_counterMatrix1_1_1(myMuxes_io_counterMatrix1_1_1),
    .io_counterMatrix2_0(myMuxes_io_counterMatrix2_0),
    .io_counterMatrix2_1(myMuxes_io_counterMatrix2_1),
    .io_i_mux_bus_0(myMuxes_io_i_mux_bus_0),
    .io_i_mux_bus_1(myMuxes_io_i_mux_bus_1),
    .io_i_mux_bus_2(myMuxes_io_i_mux_bus_2),
    .io_i_mux_bus_3(myMuxes_io_i_mux_bus_3),
    .io_Source_0(myMuxes_io_Source_0),
    .io_Source_1(myMuxes_io_Source_1),
    .io_Source_2(myMuxes_io_Source_2),
    .io_Source_3(myMuxes_io_Source_3),
    .io_valid(myMuxes_io_valid),
    .io_End(myMuxes_io_End)
  );
  SourceDestination myCounter ( // @[PathFinder.scala 29:25]
    .clock(myCounter_clock),
    .reset(myCounter_reset),
    .io_Stationary_matrix_0_0(myCounter_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(myCounter_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(myCounter_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(myCounter_io_Stationary_matrix_1_1),
    .io_Streaming_matrix_0(myCounter_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(myCounter_io_Streaming_matrix_1),
    .io_counterMatrix1_valid(myCounter_io_counterMatrix1_valid),
    .io_counterMatrix1_bits_0_0(myCounter_io_counterMatrix1_bits_0_0),
    .io_counterMatrix1_bits_0_1(myCounter_io_counterMatrix1_bits_0_1),
    .io_counterMatrix1_bits_1_0(myCounter_io_counterMatrix1_bits_1_0),
    .io_counterMatrix1_bits_1_1(myCounter_io_counterMatrix1_bits_1_1),
    .io_counterMatrix2_valid(myCounter_io_counterMatrix2_valid),
    .io_counterMatrix2_bits_0(myCounter_io_counterMatrix2_bits_0),
    .io_counterMatrix2_bits_1(myCounter_io_counterMatrix2_bits_1),
    .io_valid(myCounter_io_valid),
    .io_Ivalid(myCounter_io_Ivalid)
  );
  assign io_i_mux_bus_0 = io_Ivalid ? myMuxes_io_i_mux_bus_0 : 4'h0; // @[PathFinder.scala 21:17 58:16 62:16]
  assign io_i_mux_bus_1 = io_Ivalid ? myMuxes_io_i_mux_bus_1 : 4'h0; // @[PathFinder.scala 21:17 58:16 62:16]
  assign io_i_mux_bus_2 = io_Ivalid ? myMuxes_io_i_mux_bus_2 : 4'h0; // @[PathFinder.scala 21:17 58:16 62:16]
  assign io_i_mux_bus_3 = io_Ivalid ? myMuxes_io_i_mux_bus_3 : 4'h0; // @[PathFinder.scala 21:17 58:16 62:16]
  assign io_Source_0 = io_Ivalid ? myMuxes_io_Source_0 : 16'h0; // @[PathFinder.scala 21:17 59:13 63:13]
  assign io_Source_1 = io_Ivalid ? myMuxes_io_Source_1 : 16'h0; // @[PathFinder.scala 21:17 59:13 63:13]
  assign io_Source_2 = io_Ivalid ? myMuxes_io_Source_2 : 16'h0; // @[PathFinder.scala 21:17 59:13 63:13]
  assign io_Source_3 = io_Ivalid ? myMuxes_io_Source_3 : 16'h0; // @[PathFinder.scala 21:17 59:13 63:13]
  assign io_PF_Valid = io_Ivalid & _GEN_15; // @[PathFinder.scala 21:17 65:15]
  assign myMuxes_clock = clock;
  assign myMuxes_reset = reset;
  assign myMuxes_io_mat1_0_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_0_0 : 16'h0; // @[PathFinder.scala 35:130 40:21 49:21]
  assign myMuxes_io_mat1_0_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_0_1 : 16'h0; // @[PathFinder.scala 35:130 40:21 49:21]
  assign myMuxes_io_mat1_1_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_1_0 : 16'h0; // @[PathFinder.scala 35:130 40:21 49:21]
  assign myMuxes_io_mat1_1_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_1_1 : 16'h0; // @[PathFinder.scala 35:130 40:21 49:21]
  assign myMuxes_io_mat2_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Streaming_matrix_0 : 16'h0; // @[PathFinder.scala 35:130 41:21 50:21]
  assign myMuxes_io_mat2_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Streaming_matrix_1 : 16'h0; // @[PathFinder.scala 35:130 41:21 50:21]
  assign myMuxes_io_counterMatrix1_0_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_0_0 : 16'h0; // @[PathFinder.scala 35:130 42:31 51:31]
  assign myMuxes_io_counterMatrix1_0_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_0_1 : 16'h0; // @[PathFinder.scala 35:130 42:31 51:31]
  assign myMuxes_io_counterMatrix1_1_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_1_0 : 16'h0; // @[PathFinder.scala 35:130 42:31 51:31]
  assign myMuxes_io_counterMatrix1_1_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_1_1 : 16'h0; // @[PathFinder.scala 35:130 42:31 51:31]
  assign myMuxes_io_counterMatrix2_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix2_bits_0 : 16'h0; // @[PathFinder.scala 35:130 43:31 52:31]
  assign myMuxes_io_counterMatrix2_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix2_bits_1 : 16'h0; // @[PathFinder.scala 35:130 43:31 52:31]
  assign myMuxes_io_valid = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid &
    myCounter_io_valid; // @[PathFinder.scala 35:130 39:22 53:22]
  assign myCounter_clock = clock;
  assign myCounter_reset = reset;
  assign myCounter_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[PathFinder.scala 31:34]
  assign myCounter_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[PathFinder.scala 31:34]
  assign myCounter_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[PathFinder.scala 31:34]
  assign myCounter_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[PathFinder.scala 31:34]
  assign myCounter_io_Streaming_matrix_0 = io_Streaming_matrix_0; // @[PathFinder.scala 32:33]
  assign myCounter_io_Streaming_matrix_1 = io_Streaming_matrix_1; // @[PathFinder.scala 32:33]
  assign myCounter_io_Ivalid = io_Ivalid; // @[PathFinder.scala 30:23]
  always @(posedge clock) begin
    if (reset) begin // @[PathFinder.scala 22:22]
      delay <= 32'h0; // @[PathFinder.scala 22:22]
    end else if (delay < 32'h8) begin // @[PathFinder.scala 25:83]
      delay <= _delay_T_1; // @[PathFinder.scala 26:11]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  delay = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MuxesWrapper(
  input  [31:0] io_src_0,
  input  [31:0] io_src_1,
  input  [31:0] io_src_2,
  input  [31:0] io_src_3,
  output [31:0] io_Osrc_0,
  output [31:0] io_Osrc_1,
  output [31:0] io_Osrc_2,
  output [31:0] io_Osrc_3
);
  wire  _T = io_src_0 != 32'h0; // @[MuxesWrapper.scala 20:26]
  wire  _T_2 = io_src_0 != 32'h0 & io_src_1 != 32'h0; // @[MuxesWrapper.scala 20:35]
  wire  _T_4 = io_src_0 != 32'h0 & io_src_1 != 32'h0 & io_src_2 != 32'h0; // @[MuxesWrapper.scala 20:58]
  wire  _T_7 = io_src_0 != io_src_1; // @[MuxesWrapper.scala 21:25]
  wire [31:0] _GEN_153 = {{31'd0}, io_src_0 != io_src_1}; // @[MuxesWrapper.scala 21:39]
  wire [31:0] _GEN_154 = {{31'd0}, _GEN_153 != io_src_2}; // @[MuxesWrapper.scala 21:53]
  wire [31:0] _GEN_0 = _GEN_154 != io_src_3 ? io_src_0 : 32'h0; // @[MuxesWrapper.scala 21:67 22:17]
  wire [31:0] _GEN_1 = _GEN_154 != io_src_3 ? io_src_1 : 32'h0; // @[MuxesWrapper.scala 21:67 22:17]
  wire [31:0] _GEN_2 = _GEN_154 != io_src_3 ? io_src_2 : 32'h0; // @[MuxesWrapper.scala 21:67 22:17]
  wire [31:0] _GEN_3 = _GEN_154 != io_src_3 ? io_src_3 : 32'h0; // @[MuxesWrapper.scala 21:67 22:17]
  wire  _T_11 = io_src_1 != io_src_2; // @[MuxesWrapper.scala 28:56]
  wire  _T_13 = io_src_2 == io_src_3; // @[MuxesWrapper.scala 28:85]
  wire [31:0] _GEN_8 = _T_7 & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? 32'h0 : _GEN_3; // @[MuxesWrapper.scala 28:100 29:20]
  wire [31:0] _GEN_9 = _T_7 & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_src_2 : _GEN_2; // @[MuxesWrapper.scala 28:100 30:20]
  wire [31:0] _GEN_10 = _T_7 & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_src_1 : _GEN_1; // @[MuxesWrapper.scala 28:100 31:20]
  wire [31:0] _GEN_11 = _T_7 & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_src_0 : _GEN_0; // @[MuxesWrapper.scala 28:100 32:20]
  wire  _T_15 = io_src_0 == io_src_1; // @[MuxesWrapper.scala 40:30]
  wire  _T_17 = io_src_0 == io_src_1 & _T_11; // @[MuxesWrapper.scala 40:45]
  wire [31:0] _GEN_17 = io_src_0 == io_src_1 & _T_11 & _T_13 ? 32'h0 : _GEN_9; // @[MuxesWrapper.scala 40:104 41:20]
  wire [31:0] _GEN_18 = io_src_0 == io_src_1 & _T_11 & _T_13 ? io_src_0 : _GEN_11; // @[MuxesWrapper.scala 40:104 42:20]
  wire [31:0] _GEN_19 = io_src_0 == io_src_1 & _T_11 & _T_13 ? io_src_2 : _GEN_10; // @[MuxesWrapper.scala 40:104 43:20]
  wire [31:0] _GEN_20 = io_src_0 == io_src_1 & _T_11 & _T_13 ? 32'h0 : _GEN_8; // @[MuxesWrapper.scala 40:104 44:20]
  wire  _T_23 = io_src_2 != io_src_3; // @[MuxesWrapper.scala 51:85]
  wire [31:0] _GEN_25 = _T_17 & io_src_2 != io_src_3 ? 32'h0 : _GEN_20; // @[MuxesWrapper.scala 51:100 52:20]
  wire [31:0] _GEN_26 = _T_17 & io_src_2 != io_src_3 ? io_src_3 : _GEN_17; // @[MuxesWrapper.scala 51:100 53:20]
  wire [31:0] _GEN_27 = _T_17 & io_src_2 != io_src_3 ? io_src_2 : _GEN_19; // @[MuxesWrapper.scala 51:100 54:20]
  wire [31:0] _GEN_28 = _T_17 & io_src_2 != io_src_3 ? io_src_0 : _GEN_18; // @[MuxesWrapper.scala 51:100 55:20]
  wire  _T_26 = io_src_1 == io_src_2; // @[MuxesWrapper.scala 65:60]
  wire  _T_27 = _T_7 & io_src_1 == io_src_2; // @[MuxesWrapper.scala 65:45]
  wire [31:0] _GEN_34 = _T_7 & io_src_1 == io_src_2 & _T_23 ? 32'h0 : _GEN_26; // @[MuxesWrapper.scala 65:104 66:20]
  wire [31:0] _GEN_35 = _T_7 & io_src_1 == io_src_2 & _T_23 ? io_src_3 : _GEN_25; // @[MuxesWrapper.scala 65:104 67:20]
  wire [31:0] _GEN_36 = _T_7 & io_src_1 == io_src_2 & _T_23 ? io_src_1 : _GEN_27; // @[MuxesWrapper.scala 65:104 68:20]
  wire [31:0] _GEN_37 = _T_7 & io_src_1 == io_src_2 & _T_23 ? io_src_0 : _GEN_28; // @[MuxesWrapper.scala 65:104 69:20]
  wire [31:0] _GEN_43 = _T_27 & _T_13 ? 32'h0 : _GEN_34; // @[MuxesWrapper.scala 77:100 78:20]
  wire [31:0] _GEN_44 = _T_27 & _T_13 ? 32'h0 : _GEN_35; // @[MuxesWrapper.scala 77:100 79:20]
  wire [31:0] _GEN_45 = _T_27 & _T_13 ? io_src_1 : _GEN_36; // @[MuxesWrapper.scala 77:100 80:20]
  wire [31:0] _GEN_46 = _T_27 & _T_13 ? io_src_0 : _GEN_37; // @[MuxesWrapper.scala 77:100 81:20]
  wire  _T_37 = _T_15 & _T_26; // @[MuxesWrapper.scala 90:41]
  wire [31:0] _GEN_53 = _T_15 & _T_26 & _T_23 ? 32'h0 : _GEN_43; // @[MuxesWrapper.scala 90:100 91:20]
  wire [31:0] _GEN_54 = _T_15 & _T_26 & _T_23 ? io_src_3 : _GEN_44; // @[MuxesWrapper.scala 90:100 92:20]
  wire [31:0] _GEN_55 = _T_15 & _T_26 & _T_23 ? 32'h0 : _GEN_45; // @[MuxesWrapper.scala 90:100 93:20]
  wire [31:0] _GEN_56 = _T_15 & _T_26 & _T_23 ? io_src_0 : _GEN_46; // @[MuxesWrapper.scala 90:100 94:20]
  wire [31:0] _GEN_63 = _T_37 & _T_13 ? 32'h0 : _GEN_53; // @[MuxesWrapper.scala 105:100 106:20]
  wire [31:0] _GEN_64 = _T_37 & _T_13 ? 32'h0 : _GEN_54; // @[MuxesWrapper.scala 105:100 107:20]
  wire [31:0] _GEN_65 = _T_37 & _T_13 ? 32'h0 : _GEN_55; // @[MuxesWrapper.scala 105:100 108:20]
  wire [31:0] _GEN_66 = _T_37 & _T_13 ? io_src_0 : _GEN_56; // @[MuxesWrapper.scala 105:100 109:20]
  wire  _T_50 = io_src_3 == 32'h0; // @[MuxesWrapper.scala 119:101]
  wire [31:0] _GEN_74 = _T_27 ? io_src_1 : 32'h0; // @[MuxesWrapper.scala 126:80 127:24]
  wire [31:0] _GEN_75 = _T_27 ? io_src_0 : 32'h0; // @[MuxesWrapper.scala 126:80 128:24]
  wire [31:0] _GEN_79 = _T_17 ? io_src_2 : _GEN_74; // @[MuxesWrapper.scala 120:75 121:24]
  wire [31:0] _GEN_80 = _T_17 ? io_src_0 : _GEN_75; // @[MuxesWrapper.scala 120:75 122:24]
  wire  _T_61 = io_src_2 == 32'h0; // @[MuxesWrapper.scala 133:78]
  wire [31:0] _GEN_85 = _T_7 ? io_src_1 : 32'h0; // @[MuxesWrapper.scala 139:50 140:24]
  wire [31:0] _GEN_86 = _T_7 ? io_src_0 : 32'h0; // @[MuxesWrapper.scala 139:50 141:24]
  wire [31:0] _GEN_89 = _T_15 ? io_src_1 : _GEN_85; // @[MuxesWrapper.scala 134:45 135:24]
  wire [31:0] _GEN_90 = _T_15 ? io_src_0 : _GEN_86; // @[MuxesWrapper.scala 134:45 136:24]
  wire [31:0] _GEN_93 = _T & io_src_1 == 32'h0 & _T_61 & _T_50 ? io_src_0 : 32'h0; // @[MuxesWrapper.scala 145:111 146:24]
  wire [31:0] _GEN_95 = _T_2 & io_src_2 == 32'h0 & _T_50 ? _GEN_89 : 32'h0; // @[MuxesWrapper.scala 133:111]
  wire [31:0] _GEN_96 = _T_2 & io_src_2 == 32'h0 & _T_50 ? _GEN_90 : _GEN_93; // @[MuxesWrapper.scala 133:111]
  wire [31:0] _GEN_99 = _T_4 & io_src_3 == 32'h0 ? _GEN_79 : _GEN_95; // @[MuxesWrapper.scala 119:111]
  wire [31:0] _GEN_100 = _T_4 & io_src_3 == 32'h0 ? _GEN_80 : _GEN_96; // @[MuxesWrapper.scala 119:111]
  assign io_Osrc_0 = io_src_0 != 32'h0 & io_src_1 != 32'h0 & io_src_2 != 32'h0 & io_src_3 != 32'h0 ? _GEN_66 : _GEN_100; // @[MuxesWrapper.scala 20:104]
  assign io_Osrc_1 = io_src_0 != 32'h0 & io_src_1 != 32'h0 & io_src_2 != 32'h0 & io_src_3 != 32'h0 ? _GEN_65 : _GEN_99; // @[MuxesWrapper.scala 20:104]
  assign io_Osrc_2 = io_src_0 != 32'h0 & io_src_1 != 32'h0 & io_src_2 != 32'h0 & io_src_3 != 32'h0 ? _GEN_63 : 32'h0; // @[MuxesWrapper.scala 20:104]
  assign io_Osrc_3 = io_src_0 != 32'h0 & io_src_1 != 32'h0 & io_src_2 != 32'h0 & io_src_3 != 32'h0 ? _GEN_64 : 32'h0; // @[MuxesWrapper.scala 20:104]
endmodule
module ivncontrol4(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] rowcount_0; // @[ivncontrol4.scala 19:27]
  reg [31:0] rowcount_1; // @[ivncontrol4.scala 19:27]
  reg [31:0] i; // @[ivncontrol4.scala 24:20]
  reg [31:0] j; // @[ivncontrol4.scala 25:20]
  reg [31:0] mat_0_0; // @[ivncontrol4.scala 30:18]
  reg [31:0] mat_0_1; // @[ivncontrol4.scala 30:18]
  reg [31:0] mat_1_0; // @[ivncontrol4.scala 30:18]
  reg [31:0] mat_1_1; // @[ivncontrol4.scala 30:18]
  reg [31:0] count_0; // @[ivncontrol4.scala 34:20]
  reg [31:0] count_1; // @[ivncontrol4.scala 34:20]
  wire [15:0] _GEN_5 = ~i[0] & j[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[ivncontrol4.scala 39:{14,14}]
  wire [15:0] _GEN_6 = i[0] & ~j[0] ? io_Stationary_matrix_1_0 : _GEN_5; // @[ivncontrol4.scala 39:{14,14}]
  wire [15:0] _GEN_7 = i[0] & j[0] ? io_Stationary_matrix_1_1 : _GEN_6; // @[ivncontrol4.scala 39:{14,14}]
  wire [31:0] _mat_T_T_1 = {{16'd0}, _GEN_7}; // @[ivncontrol4.scala 39:{14,14}]
  wire [31:0] _GEN_13 = i[0] ? count_1 : count_0; // @[ivncontrol4.scala 43:{33,33}]
  wire [31:0] _count_T_2 = _GEN_13 + 32'h1; // @[ivncontrol4.scala 43:33]
  wire  _T_8 = i == 32'h1; // @[ivncontrol4.scala 61:14]
  wire  _T_10 = i == 32'h1 & j == 32'h2; // @[ivncontrol4.scala 61:39]
  wire  _T_12 = j == 32'h1; // @[ivncontrol4.scala 70:44]
  wire [31:0] _i_T_1 = i + 32'h1; // @[ivncontrol4.scala 71:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[ivncontrol4.scala 75:16]
  wire  _T_19 = _T_8 & _T_12; // @[ivncontrol4.scala 77:43]
  wire  valid = _T_19; // @[ivncontrol4.scala 103:71 104:14 106:14]
  wire  valid1 = 1'h0;
  wire [1:0] rowlength = 2'h2;
  wire [1:0] matlength = 2'h2;
  always @(posedge clock) begin
    if (reset) begin // @[ivncontrol4.scala 19:27]
      rowcount_0 <= 32'h0; // @[ivncontrol4.scala 19:27]
    end else if (i == 32'h1 & j == 32'h2) begin // @[ivncontrol4.scala 61:69]
      rowcount_0 <= count_0; // @[ivncontrol4.scala 64:21]
    end
    if (reset) begin // @[ivncontrol4.scala 19:27]
      rowcount_1 <= 32'h0; // @[ivncontrol4.scala 19:27]
    end else if (i == 32'h1 & j == 32'h2) begin // @[ivncontrol4.scala 61:69]
      rowcount_1 <= count_1; // @[ivncontrol4.scala 64:21]
    end
    if (reset) begin // @[ivncontrol4.scala 24:20]
      i <= 32'h0; // @[ivncontrol4.scala 24:20]
    end else if (i < 32'h1 & j == 32'h1) begin // @[ivncontrol4.scala 70:70]
      i <= _i_T_1; // @[ivncontrol4.scala 71:11]
    end
    if (reset) begin // @[ivncontrol4.scala 25:20]
      j <= 32'h0; // @[ivncontrol4.scala 25:20]
    end else if (j < 32'h1 & i <= 32'h1) begin // @[ivncontrol4.scala 74:67]
      j <= _j_T_1; // @[ivncontrol4.scala 75:11]
    end else if (_T_8 & _T_12) begin // @[ivncontrol4.scala 77:75]
      j <= _j_T_1; // @[ivncontrol4.scala 78:11]
    end else if (!(_T_10)) begin // @[ivncontrol4.scala 79:73]
      j <= 32'h0; // @[ivncontrol4.scala 83:11]
    end
    if (~i[0] & ~j[0]) begin // @[ivncontrol4.scala 39:14]
      mat_0_0 <= _mat_T_T_1; // @[ivncontrol4.scala 39:14]
    end
    if (~i[0] & j[0]) begin // @[ivncontrol4.scala 39:14]
      mat_0_1 <= _mat_T_T_1; // @[ivncontrol4.scala 39:14]
    end
    if (i[0] & ~j[0]) begin // @[ivncontrol4.scala 39:14]
      mat_1_0 <= _mat_T_T_1; // @[ivncontrol4.scala 39:14]
    end
    if (i[0] & j[0]) begin // @[ivncontrol4.scala 39:14]
      mat_1_1 <= _mat_T_T_1; // @[ivncontrol4.scala 39:14]
    end
    if (_GEN_7 != 16'h0 & j < 32'h2) begin // @[ivncontrol4.scala 41:79]
      if (~i[0]) begin // @[ivncontrol4.scala 43:22]
        count_0 <= _count_T_2; // @[ivncontrol4.scala 43:22]
      end
    end
    if (_GEN_7 != 16'h0 & j < 32'h2) begin // @[ivncontrol4.scala 41:79]
      if (i[0]) begin // @[ivncontrol4.scala 43:22]
        count_1 <= _count_T_2; // @[ivncontrol4.scala 43:22]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rowcount_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  rowcount_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  i = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  j = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  mat_0_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  mat_0_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  mat_1_0 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  mat_1_1 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  count_0 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  count_1 = _RAND_9[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module fancontrol4(
  input   clock,
  input   reset,
  input   io_i_data_valid,
  output  io_o_reduction_add_0,
  output  io_o_reduction_add_1,
  output  io_o_reduction_add_2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg  r_reduction_add_0; // @[FanCtrl.scala 19:34]
  reg  r_reduction_add_1; // @[FanCtrl.scala 19:34]
  reg  r_reduction_add_2; // @[FanCtrl.scala 19:34]
  reg  r_add_lvl_0Reg_6; // @[FanCtrl.scala 23:33]
  reg  r_add_lvl_0Reg_7; // @[FanCtrl.scala 23:33]
  reg  r_add_lvl_1Reg_4; // @[FanCtrl.scala 24:33]
  reg  r_valid_0; // @[FanCtrl.scala 35:26]
  reg  r_valid_1; // @[FanCtrl.scala 35:26]
  assign io_o_reduction_add_0 = r_add_lvl_0Reg_6; // @[FanCtrl.scala 227:{35,35}]
  assign io_o_reduction_add_1 = r_add_lvl_0Reg_7; // @[FanCtrl.scala 227:{35,35}]
  assign io_o_reduction_add_2 = r_add_lvl_1Reg_4; // @[FanCtrl.scala 227:{35,35}]
  always @(posedge clock) begin
    if (reset) begin // @[FanCtrl.scala 19:34]
      r_reduction_add_0 <= 1'h0; // @[FanCtrl.scala 19:34]
    end else begin
      r_reduction_add_0 <= r_valid_1;
    end
    if (reset) begin // @[FanCtrl.scala 19:34]
      r_reduction_add_1 <= 1'h0; // @[FanCtrl.scala 19:34]
    end else begin
      r_reduction_add_1 <= r_valid_1;
    end
    if (reset) begin // @[FanCtrl.scala 19:34]
      r_reduction_add_2 <= 1'h0; // @[FanCtrl.scala 19:34]
    end else begin
      r_reduction_add_2 <= r_valid_1;
    end
    if (reset) begin // @[FanCtrl.scala 23:33]
      r_add_lvl_0Reg_6 <= 1'h0; // @[FanCtrl.scala 23:33]
    end else begin
      r_add_lvl_0Reg_6 <= r_reduction_add_0; // @[FanCtrl.scala 157:20]
    end
    if (reset) begin // @[FanCtrl.scala 23:33]
      r_add_lvl_0Reg_7 <= 1'h0; // @[FanCtrl.scala 23:33]
    end else begin
      r_add_lvl_0Reg_7 <= r_reduction_add_1; // @[FanCtrl.scala 157:20]
    end
    if (reset) begin // @[FanCtrl.scala 24:33]
      r_add_lvl_1Reg_4 <= 1'h0; // @[FanCtrl.scala 24:33]
    end else begin
      r_add_lvl_1Reg_4 <= r_reduction_add_2; // @[FanCtrl.scala 168:20]
    end
    if (reset) begin // @[FanCtrl.scala 35:26]
      r_valid_0 <= 1'h0; // @[FanCtrl.scala 35:26]
    end else begin
      r_valid_0 <= io_i_data_valid;
    end
    if (reset) begin // @[FanCtrl.scala 35:26]
      r_valid_1 <= 1'h0; // @[FanCtrl.scala 35:26]
    end else begin
      r_valid_1 <= r_valid_0; // @[FanCtrl.scala 222:24]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  r_reduction_add_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  r_reduction_add_1 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  r_reduction_add_2 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  r_add_lvl_0Reg_6 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  r_add_lvl_0Reg_7 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  r_add_lvl_1Reg_4 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  r_valid_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  r_valid_1 = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Benes(
  input  [15:0] io_i_data_bus2_0,
  input  [15:0] io_i_data_bus2_1,
  input  [15:0] io_i_data_bus2_2,
  input  [15:0] io_i_data_bus2_3,
  input  [15:0] io_i_data_bus1_0,
  input  [15:0] io_i_data_bus1_1,
  input  [15:0] io_i_data_bus1_2,
  input  [15:0] io_i_data_bus1_3,
  input  [3:0]  io_i_mux_bus_0,
  input  [3:0]  io_i_mux_bus_1,
  input  [3:0]  io_i_mux_bus_2,
  input  [3:0]  io_i_mux_bus_3,
  output [15:0] io_o_dist_bus1_0,
  output [15:0] io_o_dist_bus1_1,
  output [15:0] io_o_dist_bus1_2,
  output [15:0] io_o_dist_bus1_3,
  output [15:0] io_o_dist_bus2_0,
  output [15:0] io_o_dist_bus2_1,
  output [15:0] io_o_dist_bus2_2,
  output [15:0] io_o_dist_bus2_3
);
  wire [1:0] _GEN_4 = 2'h0 % 2'h2; // @[Benes.scala 24:52]
  wire  parsedindexvalue_first_stage = io_i_mux_bus_0[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray__0 = io_i_mux_bus_0[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray__1 = io_i_mux_bus_0[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_9 = {{2'd0}, parsedindexvalue_first_stage}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_14 = _GEN_9 % 3'h4; // @[Benes.scala 33:40]
  wire  parsedindexvalue_calculation = _GEN_14[0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T = ~parsedindexvalue_calculation; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_1 = ~parsedindexvalue_boolArray__0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_2 = ~parsedindexvalue_calculation & ~parsedindexvalue_boolArray__0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_5 = parsedindexvalue_calculation & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 36:36]
  wire [1:0] _GEN_60 = {{1'd0}, parsedindexvalue_calculation}; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_6 = _GEN_60 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_8 = _GEN_60 == 2'h2 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_9 = _GEN_60 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_11 = _GEN_60 == 2'h3 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_14 = _parsedindexvalue_nextIndex_T & parsedindexvalue_boolArray__0; // @[Benes.scala 39:36]
  wire [1:0] _GEN_62 = {{1'd0}, parsedindexvalue_first_stage}; // @[Benes.scala 39:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_16 = _GEN_62 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_19 = parsedindexvalue_calculation & parsedindexvalue_boolArray__0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_24 = _parsedindexvalue_nextIndex_T_6 & parsedindexvalue_boolArray__0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_26 = _GEN_62 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_29 = _parsedindexvalue_nextIndex_T_9 & parsedindexvalue_boolArray__0; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_32 = _parsedindexvalue_nextIndex_T_29 ? _parsedindexvalue_nextIndex_T_26 : {{
    1'd0}, parsedindexvalue_first_stage}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_33 = _parsedindexvalue_nextIndex_T_24 ? _parsedindexvalue_nextIndex_T_26 :
    _parsedindexvalue_nextIndex_T_32; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_34 = _parsedindexvalue_nextIndex_T_19 ? _parsedindexvalue_nextIndex_T_16 :
    _parsedindexvalue_nextIndex_T_33; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_35 = _parsedindexvalue_nextIndex_T_14 ? _parsedindexvalue_nextIndex_T_16 :
    _parsedindexvalue_nextIndex_T_34; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_36 = _parsedindexvalue_nextIndex_T_11 ? {{1'd0}, parsedindexvalue_first_stage
    } : _parsedindexvalue_nextIndex_T_35; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_37 = _parsedindexvalue_nextIndex_T_8 ? {{1'd0}, parsedindexvalue_first_stage}
     : _parsedindexvalue_nextIndex_T_36; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_38 = _parsedindexvalue_nextIndex_T_5 ? {{1'd0}, parsedindexvalue_first_stage}
     : _parsedindexvalue_nextIndex_T_37; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex = _parsedindexvalue_nextIndex_T_2 ? {{1'd0}, parsedindexvalue_first_stage} :
    _parsedindexvalue_nextIndex_T_38; // @[Mux.scala 101:16]
  wire [2:0] _GEN_19 = {{1'd0}, parsedindexvalue_nextIndex}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_24 = _GEN_19 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_1 = _GEN_24[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_39 = parsedindexvalue_calculation_1 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_40 = ~parsedindexvalue_boolArray__1; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_41 = parsedindexvalue_calculation_1 == 2'h0 & ~parsedindexvalue_boolArray__1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_42 = parsedindexvalue_calculation_1 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_44 = parsedindexvalue_calculation_1 == 2'h1 & _parsedindexvalue_nextIndex_T_40; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_45 = parsedindexvalue_calculation_1 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_47 = parsedindexvalue_calculation_1 == 2'h2 & _parsedindexvalue_nextIndex_T_40; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_48 = parsedindexvalue_calculation_1 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_50 = parsedindexvalue_calculation_1 == 2'h3 & _parsedindexvalue_nextIndex_T_40; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_53 = _parsedindexvalue_nextIndex_T_39 & parsedindexvalue_boolArray__1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_55 = parsedindexvalue_nextIndex + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_58 = _parsedindexvalue_nextIndex_T_42 & parsedindexvalue_boolArray__1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_63 = _parsedindexvalue_nextIndex_T_45 & parsedindexvalue_boolArray__1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_65 = parsedindexvalue_nextIndex - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_68 = _parsedindexvalue_nextIndex_T_48 & parsedindexvalue_boolArray__1; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_71 = _parsedindexvalue_nextIndex_T_68 ? _parsedindexvalue_nextIndex_T_65 :
    parsedindexvalue_nextIndex; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_72 = _parsedindexvalue_nextIndex_T_63 ? _parsedindexvalue_nextIndex_T_65 :
    _parsedindexvalue_nextIndex_T_71; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_73 = _parsedindexvalue_nextIndex_T_58 ? _parsedindexvalue_nextIndex_T_55 :
    _parsedindexvalue_nextIndex_T_72; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_74 = _parsedindexvalue_nextIndex_T_53 ? _parsedindexvalue_nextIndex_T_55 :
    _parsedindexvalue_nextIndex_T_73; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_75 = _parsedindexvalue_nextIndex_T_50 ? parsedindexvalue_nextIndex :
    _parsedindexvalue_nextIndex_T_74; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_76 = _parsedindexvalue_nextIndex_T_47 ? parsedindexvalue_nextIndex :
    _parsedindexvalue_nextIndex_T_75; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_77 = _parsedindexvalue_nextIndex_T_44 ? parsedindexvalue_nextIndex :
    _parsedindexvalue_nextIndex_T_76; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_1 = _parsedindexvalue_nextIndex_T_41 ? parsedindexvalue_nextIndex :
    _parsedindexvalue_nextIndex_T_77; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_1 = parsedindexvalue_nextIndex_1 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_4 = parsedindexvalue_nextIndex_1 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_6 = parsedindexvalue_nextIndex_1 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_7 = _parsedindexvalue_third_stage_T_1 == 2'h0 ?
    _parsedindexvalue_third_stage_T_4 : _parsedindexvalue_third_stage_T_6; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue = io_i_mux_bus_0[3] ? _parsedindexvalue_third_stage_T_7 : parsedindexvalue_nextIndex_1; // @[Benes.scala 48:24]
  wire [2:0] _T_2 = {{1'd0}, parsedindexvalue};
  wire [15:0] _GEN_0 = 3'h0 == _T_2 ? io_i_data_bus2_0 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_1 = 3'h1 == _T_2 ? io_i_data_bus2_0 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_2 = 3'h2 == _T_2 ? io_i_data_bus2_0 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_3 = 3'h3 == _T_2 ? io_i_data_bus2_0 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_5 = |io_i_mux_bus_0 ? _GEN_0 : io_i_data_bus2_0; // @[Benes.scala 58:35 78:28]
  wire [15:0] _GEN_6 = |io_i_mux_bus_0 ? _GEN_1 : 16'h0; // @[Benes.scala 58:35]
  wire [15:0] _GEN_7 = |io_i_mux_bus_0 ? _GEN_2 : 16'h0; // @[Benes.scala 58:35]
  wire [15:0] _GEN_8 = |io_i_mux_bus_0 ? _GEN_3 : 16'h0; // @[Benes.scala 58:35]
  wire [15:0] _GEN_10 = io_i_data_bus2_0 != 16'h0 ? _GEN_5 : 16'h0; // @[Benes.scala 56:39]
  wire [15:0] _GEN_11 = io_i_data_bus2_0 != 16'h0 ? _GEN_6 : 16'h0; // @[Benes.scala 56:39]
  wire [15:0] _GEN_12 = io_i_data_bus2_0 != 16'h0 ? _GEN_7 : 16'h0; // @[Benes.scala 56:39]
  wire [15:0] _GEN_13 = io_i_data_bus2_0 != 16'h0 ? _GEN_8 : 16'h0; // @[Benes.scala 56:39]
  wire  parsedindexvalue_first_stage_1 = io_i_mux_bus_1[0] ? 1'h0 : 1'h1; // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray_1_0 = io_i_mux_bus_1[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray_1_1 = io_i_mux_bus_1[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_29 = {{2'd0}, parsedindexvalue_first_stage_1}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_34 = _GEN_29 % 3'h4; // @[Benes.scala 33:40]
  wire  parsedindexvalue_calculation_2 = _GEN_34[0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_78 = ~parsedindexvalue_calculation_2; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_79 = ~parsedindexvalue_boolArray_1_0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_80 = ~parsedindexvalue_calculation_2 & ~parsedindexvalue_boolArray_1_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_83 = parsedindexvalue_calculation_2 & _parsedindexvalue_nextIndex_T_79; // @[Benes.scala 36:36]
  wire [1:0] _GEN_68 = {{1'd0}, parsedindexvalue_calculation_2}; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_84 = _GEN_68 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_86 = _GEN_68 == 2'h2 & _parsedindexvalue_nextIndex_T_79; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_87 = _GEN_68 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_89 = _GEN_68 == 2'h3 & _parsedindexvalue_nextIndex_T_79; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_92 = _parsedindexvalue_nextIndex_T_78 & parsedindexvalue_boolArray_1_0; // @[Benes.scala 39:36]
  wire [1:0] _GEN_70 = {{1'd0}, parsedindexvalue_first_stage_1}; // @[Benes.scala 39:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_94 = _GEN_70 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_97 = parsedindexvalue_calculation_2 & parsedindexvalue_boolArray_1_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_102 = _parsedindexvalue_nextIndex_T_84 & parsedindexvalue_boolArray_1_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_104 = _GEN_70 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_107 = _parsedindexvalue_nextIndex_T_87 & parsedindexvalue_boolArray_1_0; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_110 = _parsedindexvalue_nextIndex_T_107 ? _parsedindexvalue_nextIndex_T_104
     : {{1'd0}, parsedindexvalue_first_stage_1}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_111 = _parsedindexvalue_nextIndex_T_102 ? _parsedindexvalue_nextIndex_T_104
     : _parsedindexvalue_nextIndex_T_110; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_112 = _parsedindexvalue_nextIndex_T_97 ? _parsedindexvalue_nextIndex_T_94 :
    _parsedindexvalue_nextIndex_T_111; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_113 = _parsedindexvalue_nextIndex_T_92 ? _parsedindexvalue_nextIndex_T_94 :
    _parsedindexvalue_nextIndex_T_112; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_114 = _parsedindexvalue_nextIndex_T_89 ? {{1'd0},
    parsedindexvalue_first_stage_1} : _parsedindexvalue_nextIndex_T_113; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_115 = _parsedindexvalue_nextIndex_T_86 ? {{1'd0},
    parsedindexvalue_first_stage_1} : _parsedindexvalue_nextIndex_T_114; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_116 = _parsedindexvalue_nextIndex_T_83 ? {{1'd0},
    parsedindexvalue_first_stage_1} : _parsedindexvalue_nextIndex_T_115; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_2 = _parsedindexvalue_nextIndex_T_80 ? {{1'd0}, parsedindexvalue_first_stage_1}
     : _parsedindexvalue_nextIndex_T_116; // @[Mux.scala 101:16]
  wire [2:0] _GEN_39 = {{1'd0}, parsedindexvalue_nextIndex_2}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_44 = _GEN_39 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_3 = _GEN_44[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_117 = parsedindexvalue_calculation_3 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_118 = ~parsedindexvalue_boolArray_1_1; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_119 = parsedindexvalue_calculation_3 == 2'h0 & ~parsedindexvalue_boolArray_1_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_120 = parsedindexvalue_calculation_3 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_122 = parsedindexvalue_calculation_3 == 2'h1 & _parsedindexvalue_nextIndex_T_118; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_123 = parsedindexvalue_calculation_3 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_125 = parsedindexvalue_calculation_3 == 2'h2 & _parsedindexvalue_nextIndex_T_118; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_126 = parsedindexvalue_calculation_3 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_128 = parsedindexvalue_calculation_3 == 2'h3 & _parsedindexvalue_nextIndex_T_118; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_131 = _parsedindexvalue_nextIndex_T_117 & parsedindexvalue_boolArray_1_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_133 = parsedindexvalue_nextIndex_2 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_136 = _parsedindexvalue_nextIndex_T_120 & parsedindexvalue_boolArray_1_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_141 = _parsedindexvalue_nextIndex_T_123 & parsedindexvalue_boolArray_1_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_143 = parsedindexvalue_nextIndex_2 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_146 = _parsedindexvalue_nextIndex_T_126 & parsedindexvalue_boolArray_1_1; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_149 = _parsedindexvalue_nextIndex_T_146 ? _parsedindexvalue_nextIndex_T_143
     : parsedindexvalue_nextIndex_2; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_150 = _parsedindexvalue_nextIndex_T_141 ? _parsedindexvalue_nextIndex_T_143
     : _parsedindexvalue_nextIndex_T_149; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_151 = _parsedindexvalue_nextIndex_T_136 ? _parsedindexvalue_nextIndex_T_133
     : _parsedindexvalue_nextIndex_T_150; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_152 = _parsedindexvalue_nextIndex_T_131 ? _parsedindexvalue_nextIndex_T_133
     : _parsedindexvalue_nextIndex_T_151; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_153 = _parsedindexvalue_nextIndex_T_128 ? parsedindexvalue_nextIndex_2 :
    _parsedindexvalue_nextIndex_T_152; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_154 = _parsedindexvalue_nextIndex_T_125 ? parsedindexvalue_nextIndex_2 :
    _parsedindexvalue_nextIndex_T_153; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_155 = _parsedindexvalue_nextIndex_T_122 ? parsedindexvalue_nextIndex_2 :
    _parsedindexvalue_nextIndex_T_154; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_3 = _parsedindexvalue_nextIndex_T_119 ? parsedindexvalue_nextIndex_2 :
    _parsedindexvalue_nextIndex_T_155; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_9 = parsedindexvalue_nextIndex_3 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_12 = parsedindexvalue_nextIndex_3 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_14 = parsedindexvalue_nextIndex_3 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_15 = _parsedindexvalue_third_stage_T_9 == 2'h0 ?
    _parsedindexvalue_third_stage_T_12 : _parsedindexvalue_third_stage_T_14; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue_1 = io_i_mux_bus_1[3] ? _parsedindexvalue_third_stage_T_15 : parsedindexvalue_nextIndex_3; // @[Benes.scala 48:24]
  wire [2:0] _T_6 = {{1'd0}, parsedindexvalue_1};
  wire [15:0] _GEN_15 = 3'h0 == _T_6 ? io_i_data_bus2_1 : _GEN_10; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_16 = 3'h1 == _T_6 ? io_i_data_bus2_1 : _GEN_11; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_17 = 3'h2 == _T_6 ? io_i_data_bus2_1 : _GEN_12; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_18 = 3'h3 == _T_6 ? io_i_data_bus2_1 : _GEN_13; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_20 = |io_i_mux_bus_1 ? _GEN_15 : _GEN_10; // @[Benes.scala 58:35]
  wire [15:0] _GEN_21 = |io_i_mux_bus_1 ? _GEN_16 : io_i_data_bus2_1; // @[Benes.scala 58:35 78:28]
  wire [15:0] _GEN_22 = |io_i_mux_bus_1 ? _GEN_17 : _GEN_12; // @[Benes.scala 58:35]
  wire [15:0] _GEN_23 = |io_i_mux_bus_1 ? _GEN_18 : _GEN_13; // @[Benes.scala 58:35]
  wire [15:0] _GEN_25 = io_i_data_bus2_1 != 16'h0 ? _GEN_20 : _GEN_10; // @[Benes.scala 56:39]
  wire [15:0] _GEN_26 = io_i_data_bus2_1 != 16'h0 ? _GEN_21 : _GEN_11; // @[Benes.scala 56:39]
  wire [15:0] _GEN_27 = io_i_data_bus2_1 != 16'h0 ? _GEN_22 : _GEN_12; // @[Benes.scala 56:39]
  wire [15:0] _GEN_28 = io_i_data_bus2_1 != 16'h0 ? _GEN_23 : _GEN_13; // @[Benes.scala 56:39]
  wire [1:0] parsedindexvalue_first_stage_2 = io_i_mux_bus_2[0] ? 2'h3 : 2'h2; // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray_2_0 = io_i_mux_bus_2[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray_2_1 = io_i_mux_bus_2[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_49 = {{1'd0}, parsedindexvalue_first_stage_2}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_54 = _GEN_49 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_4 = _GEN_54[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_156 = parsedindexvalue_calculation_4 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_157 = ~parsedindexvalue_boolArray_2_0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_158 = parsedindexvalue_calculation_4 == 2'h0 & ~parsedindexvalue_boolArray_2_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_159 = parsedindexvalue_calculation_4 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_161 = parsedindexvalue_calculation_4 == 2'h1 & _parsedindexvalue_nextIndex_T_157; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_162 = parsedindexvalue_calculation_4 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_164 = parsedindexvalue_calculation_4 == 2'h2 & _parsedindexvalue_nextIndex_T_157; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_165 = parsedindexvalue_calculation_4 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_167 = parsedindexvalue_calculation_4 == 2'h3 & _parsedindexvalue_nextIndex_T_157; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_170 = _parsedindexvalue_nextIndex_T_156 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_172 = parsedindexvalue_first_stage_2 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_175 = _parsedindexvalue_nextIndex_T_159 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_180 = _parsedindexvalue_nextIndex_T_162 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_182 = parsedindexvalue_first_stage_2 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_185 = _parsedindexvalue_nextIndex_T_165 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_188 = _parsedindexvalue_nextIndex_T_185 ? _parsedindexvalue_nextIndex_T_182
     : parsedindexvalue_first_stage_2; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_189 = _parsedindexvalue_nextIndex_T_180 ? _parsedindexvalue_nextIndex_T_182
     : _parsedindexvalue_nextIndex_T_188; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_190 = _parsedindexvalue_nextIndex_T_175 ? _parsedindexvalue_nextIndex_T_172
     : _parsedindexvalue_nextIndex_T_189; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_191 = _parsedindexvalue_nextIndex_T_170 ? _parsedindexvalue_nextIndex_T_172
     : _parsedindexvalue_nextIndex_T_190; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_192 = _parsedindexvalue_nextIndex_T_167 ? parsedindexvalue_first_stage_2 :
    _parsedindexvalue_nextIndex_T_191; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_193 = _parsedindexvalue_nextIndex_T_164 ? parsedindexvalue_first_stage_2 :
    _parsedindexvalue_nextIndex_T_192; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_194 = _parsedindexvalue_nextIndex_T_161 ? parsedindexvalue_first_stage_2 :
    _parsedindexvalue_nextIndex_T_193; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_4 = _parsedindexvalue_nextIndex_T_158 ? parsedindexvalue_first_stage_2 :
    _parsedindexvalue_nextIndex_T_194; // @[Mux.scala 101:16]
  wire [2:0] _GEN_55 = {{1'd0}, parsedindexvalue_nextIndex_4}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_56 = _GEN_55 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_5 = _GEN_56[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_195 = parsedindexvalue_calculation_5 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_196 = ~parsedindexvalue_boolArray_2_1; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_197 = parsedindexvalue_calculation_5 == 2'h0 & ~parsedindexvalue_boolArray_2_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_198 = parsedindexvalue_calculation_5 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_200 = parsedindexvalue_calculation_5 == 2'h1 & _parsedindexvalue_nextIndex_T_196; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_201 = parsedindexvalue_calculation_5 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_203 = parsedindexvalue_calculation_5 == 2'h2 & _parsedindexvalue_nextIndex_T_196; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_204 = parsedindexvalue_calculation_5 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_206 = parsedindexvalue_calculation_5 == 2'h3 & _parsedindexvalue_nextIndex_T_196; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_209 = _parsedindexvalue_nextIndex_T_195 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_211 = parsedindexvalue_nextIndex_4 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_214 = _parsedindexvalue_nextIndex_T_198 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_219 = _parsedindexvalue_nextIndex_T_201 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_221 = parsedindexvalue_nextIndex_4 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_224 = _parsedindexvalue_nextIndex_T_204 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_227 = _parsedindexvalue_nextIndex_T_224 ? _parsedindexvalue_nextIndex_T_221
     : parsedindexvalue_nextIndex_4; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_228 = _parsedindexvalue_nextIndex_T_219 ? _parsedindexvalue_nextIndex_T_221
     : _parsedindexvalue_nextIndex_T_227; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_229 = _parsedindexvalue_nextIndex_T_214 ? _parsedindexvalue_nextIndex_T_211
     : _parsedindexvalue_nextIndex_T_228; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_230 = _parsedindexvalue_nextIndex_T_209 ? _parsedindexvalue_nextIndex_T_211
     : _parsedindexvalue_nextIndex_T_229; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_231 = _parsedindexvalue_nextIndex_T_206 ? parsedindexvalue_nextIndex_4 :
    _parsedindexvalue_nextIndex_T_230; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_232 = _parsedindexvalue_nextIndex_T_203 ? parsedindexvalue_nextIndex_4 :
    _parsedindexvalue_nextIndex_T_231; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_233 = _parsedindexvalue_nextIndex_T_200 ? parsedindexvalue_nextIndex_4 :
    _parsedindexvalue_nextIndex_T_232; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_5 = _parsedindexvalue_nextIndex_T_197 ? parsedindexvalue_nextIndex_4 :
    _parsedindexvalue_nextIndex_T_233; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_17 = parsedindexvalue_nextIndex_5 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_20 = parsedindexvalue_nextIndex_5 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_22 = parsedindexvalue_nextIndex_5 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_23 = _parsedindexvalue_third_stage_T_17 == 2'h0 ?
    _parsedindexvalue_third_stage_T_20 : _parsedindexvalue_third_stage_T_22; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue_2 = io_i_mux_bus_2[3] ? _parsedindexvalue_third_stage_T_23 : parsedindexvalue_nextIndex_5; // @[Benes.scala 48:24]
  wire [2:0] _T_10 = {{1'd0}, parsedindexvalue_2};
  wire [15:0] _GEN_30 = 3'h0 == _T_10 ? io_i_data_bus2_2 : _GEN_25; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_31 = 3'h1 == _T_10 ? io_i_data_bus2_2 : _GEN_26; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_32 = 3'h2 == _T_10 ? io_i_data_bus2_2 : _GEN_27; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_33 = 3'h3 == _T_10 ? io_i_data_bus2_2 : _GEN_28; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_35 = |io_i_mux_bus_2 ? _GEN_30 : _GEN_25; // @[Benes.scala 58:35]
  wire [15:0] _GEN_36 = |io_i_mux_bus_2 ? _GEN_31 : _GEN_26; // @[Benes.scala 58:35]
  wire [15:0] _GEN_37 = |io_i_mux_bus_2 ? _GEN_32 : io_i_data_bus2_2; // @[Benes.scala 58:35 78:28]
  wire [15:0] _GEN_38 = |io_i_mux_bus_2 ? _GEN_33 : _GEN_28; // @[Benes.scala 58:35]
  wire [15:0] _GEN_40 = io_i_data_bus2_2 != 16'h0 ? _GEN_35 : _GEN_25; // @[Benes.scala 56:39]
  wire [15:0] _GEN_41 = io_i_data_bus2_2 != 16'h0 ? _GEN_36 : _GEN_26; // @[Benes.scala 56:39]
  wire [15:0] _GEN_42 = io_i_data_bus2_2 != 16'h0 ? _GEN_37 : _GEN_27; // @[Benes.scala 56:39]
  wire [15:0] _GEN_43 = io_i_data_bus2_2 != 16'h0 ? _GEN_38 : _GEN_28; // @[Benes.scala 56:39]
  wire [1:0] _parsedindexvalue_first_stage_T_25 = 2'h3 % 2'h2; // @[Benes.scala 24:52]
  wire [1:0] _parsedindexvalue_first_stage_T_30 = 2'h3 - 2'h1; // @[Benes.scala 24:96]
  wire [1:0] _parsedindexvalue_first_stage_T_31 = _parsedindexvalue_first_stage_T_25 == 2'h0 ? 2'h0 :
    _parsedindexvalue_first_stage_T_30; // @[Benes.scala 24:40]
  wire [1:0] parsedindexvalue_first_stage_3 = io_i_mux_bus_3[0] ? _parsedindexvalue_first_stage_T_31 : 2'h3; // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray_3_0 = io_i_mux_bus_3[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray_3_1 = io_i_mux_bus_3[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_57 = {{1'd0}, parsedindexvalue_first_stage_3}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_58 = _GEN_57 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_6 = _GEN_58[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_234 = parsedindexvalue_calculation_6 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_235 = ~parsedindexvalue_boolArray_3_0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_236 = parsedindexvalue_calculation_6 == 2'h0 & ~parsedindexvalue_boolArray_3_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_237 = parsedindexvalue_calculation_6 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_239 = parsedindexvalue_calculation_6 == 2'h1 & _parsedindexvalue_nextIndex_T_235; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_240 = parsedindexvalue_calculation_6 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_242 = parsedindexvalue_calculation_6 == 2'h2 & _parsedindexvalue_nextIndex_T_235; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_243 = parsedindexvalue_calculation_6 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_245 = parsedindexvalue_calculation_6 == 2'h3 & _parsedindexvalue_nextIndex_T_235; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_248 = _parsedindexvalue_nextIndex_T_234 & parsedindexvalue_boolArray_3_0; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_250 = parsedindexvalue_first_stage_3 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_253 = _parsedindexvalue_nextIndex_T_237 & parsedindexvalue_boolArray_3_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_258 = _parsedindexvalue_nextIndex_T_240 & parsedindexvalue_boolArray_3_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_260 = parsedindexvalue_first_stage_3 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_263 = _parsedindexvalue_nextIndex_T_243 & parsedindexvalue_boolArray_3_0; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_266 = _parsedindexvalue_nextIndex_T_263 ? _parsedindexvalue_nextIndex_T_260
     : parsedindexvalue_first_stage_3; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_267 = _parsedindexvalue_nextIndex_T_258 ? _parsedindexvalue_nextIndex_T_260
     : _parsedindexvalue_nextIndex_T_266; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_268 = _parsedindexvalue_nextIndex_T_253 ? _parsedindexvalue_nextIndex_T_250
     : _parsedindexvalue_nextIndex_T_267; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_269 = _parsedindexvalue_nextIndex_T_248 ? _parsedindexvalue_nextIndex_T_250
     : _parsedindexvalue_nextIndex_T_268; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_270 = _parsedindexvalue_nextIndex_T_245 ? parsedindexvalue_first_stage_3 :
    _parsedindexvalue_nextIndex_T_269; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_271 = _parsedindexvalue_nextIndex_T_242 ? parsedindexvalue_first_stage_3 :
    _parsedindexvalue_nextIndex_T_270; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_272 = _parsedindexvalue_nextIndex_T_239 ? parsedindexvalue_first_stage_3 :
    _parsedindexvalue_nextIndex_T_271; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_6 = _parsedindexvalue_nextIndex_T_236 ? parsedindexvalue_first_stage_3 :
    _parsedindexvalue_nextIndex_T_272; // @[Mux.scala 101:16]
  wire [2:0] _GEN_59 = {{1'd0}, parsedindexvalue_nextIndex_6}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_61 = _GEN_59 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_7 = _GEN_61[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_273 = parsedindexvalue_calculation_7 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_274 = ~parsedindexvalue_boolArray_3_1; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_275 = parsedindexvalue_calculation_7 == 2'h0 & ~parsedindexvalue_boolArray_3_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_276 = parsedindexvalue_calculation_7 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_278 = parsedindexvalue_calculation_7 == 2'h1 & _parsedindexvalue_nextIndex_T_274; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_279 = parsedindexvalue_calculation_7 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_281 = parsedindexvalue_calculation_7 == 2'h2 & _parsedindexvalue_nextIndex_T_274; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_282 = parsedindexvalue_calculation_7 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_284 = parsedindexvalue_calculation_7 == 2'h3 & _parsedindexvalue_nextIndex_T_274; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_287 = _parsedindexvalue_nextIndex_T_273 & parsedindexvalue_boolArray_3_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_289 = parsedindexvalue_nextIndex_6 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_292 = _parsedindexvalue_nextIndex_T_276 & parsedindexvalue_boolArray_3_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_297 = _parsedindexvalue_nextIndex_T_279 & parsedindexvalue_boolArray_3_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_299 = parsedindexvalue_nextIndex_6 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_302 = _parsedindexvalue_nextIndex_T_282 & parsedindexvalue_boolArray_3_1; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_305 = _parsedindexvalue_nextIndex_T_302 ? _parsedindexvalue_nextIndex_T_299
     : parsedindexvalue_nextIndex_6; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_306 = _parsedindexvalue_nextIndex_T_297 ? _parsedindexvalue_nextIndex_T_299
     : _parsedindexvalue_nextIndex_T_305; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_307 = _parsedindexvalue_nextIndex_T_292 ? _parsedindexvalue_nextIndex_T_289
     : _parsedindexvalue_nextIndex_T_306; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_308 = _parsedindexvalue_nextIndex_T_287 ? _parsedindexvalue_nextIndex_T_289
     : _parsedindexvalue_nextIndex_T_307; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_309 = _parsedindexvalue_nextIndex_T_284 ? parsedindexvalue_nextIndex_6 :
    _parsedindexvalue_nextIndex_T_308; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_310 = _parsedindexvalue_nextIndex_T_281 ? parsedindexvalue_nextIndex_6 :
    _parsedindexvalue_nextIndex_T_309; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_311 = _parsedindexvalue_nextIndex_T_278 ? parsedindexvalue_nextIndex_6 :
    _parsedindexvalue_nextIndex_T_310; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_7 = _parsedindexvalue_nextIndex_T_275 ? parsedindexvalue_nextIndex_6 :
    _parsedindexvalue_nextIndex_T_311; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_25 = parsedindexvalue_nextIndex_7 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_28 = parsedindexvalue_nextIndex_7 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_30 = parsedindexvalue_nextIndex_7 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_31 = _parsedindexvalue_third_stage_T_25 == 2'h0 ?
    _parsedindexvalue_third_stage_T_28 : _parsedindexvalue_third_stage_T_30; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue_3 = io_i_mux_bus_3[3] ? _parsedindexvalue_third_stage_T_31 : parsedindexvalue_nextIndex_7; // @[Benes.scala 48:24]
  wire [2:0] _T_14 = {{1'd0}, parsedindexvalue_3};
  wire [15:0] _GEN_45 = 3'h0 == _T_14 ? io_i_data_bus2_3 : _GEN_40; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_46 = 3'h1 == _T_14 ? io_i_data_bus2_3 : _GEN_41; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_47 = 3'h2 == _T_14 ? io_i_data_bus2_3 : _GEN_42; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_48 = 3'h3 == _T_14 ? io_i_data_bus2_3 : _GEN_43; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_50 = |io_i_mux_bus_3 ? _GEN_45 : _GEN_40; // @[Benes.scala 58:35]
  wire [15:0] _GEN_51 = |io_i_mux_bus_3 ? _GEN_46 : _GEN_41; // @[Benes.scala 58:35]
  wire [15:0] _GEN_52 = |io_i_mux_bus_3 ? _GEN_47 : _GEN_42; // @[Benes.scala 58:35]
  wire [15:0] _GEN_53 = |io_i_mux_bus_3 ? _GEN_48 : io_i_data_bus2_3; // @[Benes.scala 58:35 78:28]
  assign io_o_dist_bus1_0 = io_i_data_bus1_0; // @[Benes.scala 16:18]
  assign io_o_dist_bus1_1 = io_i_data_bus1_1; // @[Benes.scala 16:18]
  assign io_o_dist_bus1_2 = io_i_data_bus1_2; // @[Benes.scala 16:18]
  assign io_o_dist_bus1_3 = io_i_data_bus1_3; // @[Benes.scala 16:18]
  assign io_o_dist_bus2_0 = io_i_data_bus2_3 != 16'h0 ? _GEN_50 : _GEN_40; // @[Benes.scala 56:39]
  assign io_o_dist_bus2_1 = io_i_data_bus2_3 != 16'h0 ? _GEN_51 : _GEN_41; // @[Benes.scala 56:39]
  assign io_o_dist_bus2_2 = io_i_data_bus2_3 != 16'h0 ? _GEN_52 : _GEN_42; // @[Benes.scala 56:39]
  assign io_o_dist_bus2_3 = io_i_data_bus2_3 != 16'h0 ? _GEN_53 : _GEN_43; // @[Benes.scala 56:39]
endmodule
module buffer_multiplication(
  input  [15:0] io_buffer1_0,
  input  [15:0] io_buffer1_1,
  input  [15:0] io_buffer1_2,
  input  [15:0] io_buffer1_3,
  input  [15:0] io_buffer2_0,
  input  [15:0] io_buffer2_1,
  input  [15:0] io_buffer2_2,
  input  [15:0] io_buffer2_3,
  output [15:0] io_out_0,
  output [15:0] io_out_1,
  output [15:0] io_out_2,
  output [15:0] io_out_3
);
  wire [31:0] elementMul = io_buffer1_0 * io_buffer2_0; // @[buffer_multiplication.scala 17:42]
  wire [31:0] result_elementMul = io_buffer1_1 * io_buffer2_1; // @[buffer_multiplication.scala 17:42]
  wire [31:0] result_result_elementMul = io_buffer1_2 * io_buffer2_2; // @[buffer_multiplication.scala 17:42]
  wire [31:0] result_result_result_elementMul = io_buffer1_3 * io_buffer2_3; // @[buffer_multiplication.scala 17:42]
  assign io_out_0 = elementMul[15:0]; // @[buffer_multiplication.scala 15:20 19:27]
  assign io_out_1 = result_elementMul[15:0]; // @[buffer_multiplication.scala 15:20 19:27]
  assign io_out_2 = result_result_elementMul[15:0]; // @[buffer_multiplication.scala 15:20 19:27]
  assign io_out_3 = result_result_result_elementMul[15:0]; // @[buffer_multiplication.scala 15:20 19:27]
endmodule
module ReductionMux(
  input  [31:0] io_i_data_0,
  input  [31:0] io_i_data_1,
  output [31:0] io_o_data_0,
  output [31:0] io_o_data_1
);
  assign io_o_data_0 = io_i_data_0; // @[ReductionMux.scala 31:39 33:18 35:18]
  assign io_o_data_1 = io_i_data_1; // @[ReductionMux.scala 37:22]
endmodule
module SimpleAdder(
  input  [31:0] io_A,
  input  [31:0] io_B,
  output [31:0] io_O
);
  assign io_O = io_A + io_B; // @[SimpleAdder.scala 14:18]
endmodule
module EdgeAdderSwitch(
  input         clock,
  input         reset,
  input  [63:0] io_i_data_bus_0,
  input  [63:0] io_i_data_bus_1,
  input  [2:0]  io_i_add_en,
  output [31:0] io_o_adder
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] reductionMux_io_i_data_0; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] reductionMux_io_i_data_1; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] reductionMux_io_o_data_0; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] reductionMux_io_o_data_1; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] adder32_io_A; // @[EdgeAdderSwitch.scala 23:23]
  wire [31:0] adder32_io_B; // @[EdgeAdderSwitch.scala 23:23]
  wire [31:0] adder32_io_O; // @[EdgeAdderSwitch.scala 23:23]
  reg [2:0] r_add_en; // @[EdgeAdderSwitch.scala 31:25]
  wire [31:0] _GEN_15 = r_add_en == 3'h0 ? 32'h0 : adder32_io_O; // @[EdgeAdderSwitch.scala 64:22 65:18 67:18]
  ReductionMux reductionMux ( // @[EdgeAdderSwitch.scala 19:28]
    .io_i_data_0(reductionMux_io_i_data_0),
    .io_i_data_1(reductionMux_io_i_data_1),
    .io_o_data_0(reductionMux_io_o_data_0),
    .io_o_data_1(reductionMux_io_o_data_1)
  );
  SimpleAdder adder32 ( // @[EdgeAdderSwitch.scala 23:23]
    .io_A(adder32_io_A),
    .io_B(adder32_io_B),
    .io_O(adder32_io_O)
  );
  assign io_o_adder = reset ? 32'h0 : _GEN_15; // @[EdgeAdderSwitch.scala 59:14 60:16]
  assign reductionMux_io_i_data_0 = io_i_data_bus_0[31:0]; // @[EdgeAdderSwitch.scala 20:26]
  assign reductionMux_io_i_data_1 = io_i_data_bus_1[31:0]; // @[EdgeAdderSwitch.scala 20:26]
  assign adder32_io_A = reductionMux_io_o_data_1; // @[EdgeAdderSwitch.scala 24:16]
  assign adder32_io_B = reductionMux_io_o_data_0; // @[EdgeAdderSwitch.scala 25:16]
  always @(posedge clock) begin
    if (reset) begin // @[EdgeAdderSwitch.scala 31:25]
      r_add_en <= 3'h0; // @[EdgeAdderSwitch.scala 31:25]
    end else begin
      r_add_en <= io_i_add_en; // @[EdgeAdderSwitch.scala 31:25]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  r_add_en = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Fan4(
  input         clock,
  input         reset,
  input  [31:0] io_i_data_bus_0,
  input  [31:0] io_i_data_bus_1,
  input  [31:0] io_i_data_bus_2,
  input  [31:0] io_i_data_bus_3,
  input         io_i_add_en_bus_0,
  input         io_i_add_en_bus_1,
  input         io_i_add_en_bus_2,
  output [31:0] io_o_adder_0,
  output [31:0] io_o_adder_1,
  output [31:0] io_o_adder_2
);
  wire  my_adder_0_clock; // @[FanNetwork.scala 119:28]
  wire  my_adder_0_reset; // @[FanNetwork.scala 119:28]
  wire [63:0] my_adder_0_io_i_data_bus_0; // @[FanNetwork.scala 119:28]
  wire [63:0] my_adder_0_io_i_data_bus_1; // @[FanNetwork.scala 119:28]
  wire [2:0] my_adder_0_io_i_add_en; // @[FanNetwork.scala 119:28]
  wire [31:0] my_adder_0_io_o_adder; // @[FanNetwork.scala 119:28]
  wire  my_adder_1_clock; // @[FanNetwork.scala 132:28]
  wire  my_adder_1_reset; // @[FanNetwork.scala 132:28]
  wire [63:0] my_adder_1_io_i_data_bus_0; // @[FanNetwork.scala 132:28]
  wire [63:0] my_adder_1_io_i_data_bus_1; // @[FanNetwork.scala 132:28]
  wire [2:0] my_adder_1_io_i_add_en; // @[FanNetwork.scala 132:28]
  wire [31:0] my_adder_1_io_o_adder; // @[FanNetwork.scala 132:28]
  wire  my_adder_2_clock; // @[FanNetwork.scala 145:28]
  wire  my_adder_2_reset; // @[FanNetwork.scala 145:28]
  wire [63:0] my_adder_2_io_i_data_bus_0; // @[FanNetwork.scala 145:28]
  wire [63:0] my_adder_2_io_i_data_bus_1; // @[FanNetwork.scala 145:28]
  wire [2:0] my_adder_2_io_i_add_en; // @[FanNetwork.scala 145:28]
  wire [31:0] my_adder_2_io_o_adder; // @[FanNetwork.scala 145:28]
  wire [63:0] w_fan_lvl_0_0 = {{32'd0}, my_adder_0_io_o_adder};
  wire [63:0] w_fan_lvl_0_1 = {{32'd0}, my_adder_2_io_o_adder};
  EdgeAdderSwitch my_adder_0 ( // @[FanNetwork.scala 119:28]
    .clock(my_adder_0_clock),
    .reset(my_adder_0_reset),
    .io_i_data_bus_0(my_adder_0_io_i_data_bus_0),
    .io_i_data_bus_1(my_adder_0_io_i_data_bus_1),
    .io_i_add_en(my_adder_0_io_i_add_en),
    .io_o_adder(my_adder_0_io_o_adder)
  );
  EdgeAdderSwitch my_adder_1 ( // @[FanNetwork.scala 132:28]
    .clock(my_adder_1_clock),
    .reset(my_adder_1_reset),
    .io_i_data_bus_0(my_adder_1_io_i_data_bus_0),
    .io_i_data_bus_1(my_adder_1_io_i_data_bus_1),
    .io_i_add_en(my_adder_1_io_i_add_en),
    .io_o_adder(my_adder_1_io_o_adder)
  );
  EdgeAdderSwitch my_adder_2 ( // @[FanNetwork.scala 145:28]
    .clock(my_adder_2_clock),
    .reset(my_adder_2_reset),
    .io_i_data_bus_0(my_adder_2_io_i_data_bus_0),
    .io_i_data_bus_1(my_adder_2_io_i_data_bus_1),
    .io_i_add_en(my_adder_2_io_i_add_en),
    .io_o_adder(my_adder_2_io_o_adder)
  );
  assign io_o_adder_0 = w_fan_lvl_0_0[31:0]; // @[FanNetwork.scala 207:19]
  assign io_o_adder_1 = my_adder_1_io_o_adder; // @[FanNetwork.scala 208:19]
  assign io_o_adder_2 = w_fan_lvl_0_1[31:0]; // @[FanNetwork.scala 209:19]
  assign my_adder_0_clock = clock;
  assign my_adder_0_reset = reset;
  assign my_adder_0_io_i_data_bus_0 = {{32'd0}, io_i_data_bus_1}; // @[FanNetwork.scala 122:30]
  assign my_adder_0_io_i_data_bus_1 = {{32'd0}, io_i_data_bus_0}; // @[FanNetwork.scala 122:30]
  assign my_adder_0_io_i_add_en = {{2'd0}, io_i_add_en_bus_0}; // @[FanNetwork.scala 123:28]
  assign my_adder_1_clock = clock;
  assign my_adder_1_reset = reset;
  assign my_adder_1_io_i_data_bus_0 = {{32'd0}, my_adder_2_io_o_adder}; // @[FanNetwork.scala 135:{40,40}]
  assign my_adder_1_io_i_data_bus_1 = {{32'd0}, my_adder_0_io_o_adder}; // @[FanNetwork.scala 135:{40,40}]
  assign my_adder_1_io_i_add_en = {{2'd0}, io_i_add_en_bus_2}; // @[FanNetwork.scala 136:28]
  assign my_adder_2_clock = clock;
  assign my_adder_2_reset = reset;
  assign my_adder_2_io_i_data_bus_0 = {{32'd0}, io_i_data_bus_3}; // @[FanNetwork.scala 148:30]
  assign my_adder_2_io_i_data_bus_1 = {{32'd0}, io_i_data_bus_2}; // @[FanNetwork.scala 148:30]
  assign my_adder_2_io_i_add_en = {{2'd0}, io_i_add_en_bus_1}; // @[FanNetwork.scala 149:28]
endmodule
module flexdpecom4(
  input         clock,
  input         reset,
  input         io_i_data_valid,
  input  [15:0] io_i_data_bus_0,
  input  [15:0] io_i_data_bus_1,
  input  [15:0] io_i_data_bus_2,
  input  [15:0] io_i_data_bus_3,
  input  [15:0] io_i_data_bus2_0,
  input  [15:0] io_i_data_bus2_1,
  input  [15:0] io_i_data_bus2_2,
  input  [15:0] io_i_data_bus2_3,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  output [15:0] io_o_adder_0,
  output [15:0] io_o_adder_1,
  output [15:0] io_o_adder_2,
  input  [3:0]  io_i_mux_bus_0,
  input  [3:0]  io_i_mux_bus_1,
  input  [3:0]  io_i_mux_bus_2,
  input  [3:0]  io_i_mux_bus_3,
  output [15:0] io_matrix_0_0,
  output [15:0] io_matrix_0_1,
  output [15:0] io_matrix_1_0,
  output [15:0] io_matrix_1_1
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire  my_ivn_clock; // @[FlexDPE.scala 58:22]
  wire  my_ivn_reset; // @[FlexDPE.scala 58:22]
  wire [15:0] my_ivn_io_Stationary_matrix_0_0; // @[FlexDPE.scala 58:22]
  wire [15:0] my_ivn_io_Stationary_matrix_0_1; // @[FlexDPE.scala 58:22]
  wire [15:0] my_ivn_io_Stationary_matrix_1_0; // @[FlexDPE.scala 58:22]
  wire [15:0] my_ivn_io_Stationary_matrix_1_1; // @[FlexDPE.scala 58:22]
  wire  my_controller_clock; // @[FlexDPE.scala 66:31]
  wire  my_controller_reset; // @[FlexDPE.scala 66:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPE.scala 66:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 66:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 66:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 66:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPE.scala 75:26]
  wire [3:0] my_Benes_io_i_mux_bus_0; // @[FlexDPE.scala 75:26]
  wire [3:0] my_Benes_io_i_mux_bus_1; // @[FlexDPE.scala 75:26]
  wire [3:0] my_Benes_io_i_mux_bus_2; // @[FlexDPE.scala 75:26]
  wire [3:0] my_Benes_io_i_mux_bus_3; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 75:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 75:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPE.scala 87:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPE.scala 87:30]
  wire  my_fan_network_clock; // @[FlexDPE.scala 99:32]
  wire  my_fan_network_reset; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPE.scala 99:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPE.scala 99:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPE.scala 99:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_o_adder_1; // @[FlexDPE.scala 99:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPE.scala 99:32]
  reg [14:0] r_mult_0; // @[FlexDPE.scala 33:26]
  reg [14:0] r_mult_1; // @[FlexDPE.scala 33:26]
  reg [14:0] r_mult_2; // @[FlexDPE.scala 33:26]
  reg [14:0] r_mult_3; // @[FlexDPE.scala 33:26]
  reg [31:0] counter; // @[FlexDPE.scala 37:26]
  reg [15:0] matrix_0_0; // @[FlexDPE.scala 52:22]
  reg [15:0] matrix_0_1; // @[FlexDPE.scala 52:22]
  reg [15:0] matrix_1_0; // @[FlexDPE.scala 52:22]
  reg [15:0] matrix_1_1; // @[FlexDPE.scala 52:22]
  wire [15:0] _GEN_0 = my_Benes_io_o_dist_bus1_0 == 16'h0 ? {{1'd0}, r_mult_1} : io_o_adder_0; // @[FlexDPE.scala 111:20 120:41 121:23]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[FlexDPE.scala 131:24]
  wire [15:0] _GEN_16 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPE.scala 33:{26,26} 93:14]
  wire [15:0] _GEN_17 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPE.scala 33:{26,26} 93:14]
  wire [15:0] _GEN_18 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPE.scala 33:{26,26} 93:14]
  wire [15:0] _GEN_19 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPE.scala 33:{26,26} 93:14]
  ivncontrol4 my_ivn ( // @[FlexDPE.scala 58:22]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1)
  );
  fancontrol4 my_controller ( // @[FlexDPE.scala 66:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2)
  );
  Benes my_Benes ( // @[FlexDPE.scala 75:26]
    .io_i_data_bus2_0(my_Benes_io_i_data_bus2_0),
    .io_i_data_bus2_1(my_Benes_io_i_data_bus2_1),
    .io_i_data_bus2_2(my_Benes_io_i_data_bus2_2),
    .io_i_data_bus2_3(my_Benes_io_i_data_bus2_3),
    .io_i_data_bus1_0(my_Benes_io_i_data_bus1_0),
    .io_i_data_bus1_1(my_Benes_io_i_data_bus1_1),
    .io_i_data_bus1_2(my_Benes_io_i_data_bus1_2),
    .io_i_data_bus1_3(my_Benes_io_i_data_bus1_3),
    .io_i_mux_bus_0(my_Benes_io_i_mux_bus_0),
    .io_i_mux_bus_1(my_Benes_io_i_mux_bus_1),
    .io_i_mux_bus_2(my_Benes_io_i_mux_bus_2),
    .io_i_mux_bus_3(my_Benes_io_i_mux_bus_3),
    .io_o_dist_bus1_0(my_Benes_io_o_dist_bus1_0),
    .io_o_dist_bus1_1(my_Benes_io_o_dist_bus1_1),
    .io_o_dist_bus1_2(my_Benes_io_o_dist_bus1_2),
    .io_o_dist_bus1_3(my_Benes_io_o_dist_bus1_3),
    .io_o_dist_bus2_0(my_Benes_io_o_dist_bus2_0),
    .io_o_dist_bus2_1(my_Benes_io_o_dist_bus2_1),
    .io_o_dist_bus2_2(my_Benes_io_o_dist_bus2_2),
    .io_o_dist_bus2_3(my_Benes_io_o_dist_bus2_3)
  );
  buffer_multiplication buffer_mult ( // @[FlexDPE.scala 87:30]
    .io_buffer1_0(buffer_mult_io_buffer1_0),
    .io_buffer1_1(buffer_mult_io_buffer1_1),
    .io_buffer1_2(buffer_mult_io_buffer1_2),
    .io_buffer1_3(buffer_mult_io_buffer1_3),
    .io_buffer2_0(buffer_mult_io_buffer2_0),
    .io_buffer2_1(buffer_mult_io_buffer2_1),
    .io_buffer2_2(buffer_mult_io_buffer2_2),
    .io_buffer2_3(buffer_mult_io_buffer2_3),
    .io_out_0(buffer_mult_io_out_0),
    .io_out_1(buffer_mult_io_out_1),
    .io_out_2(buffer_mult_io_out_2),
    .io_out_3(buffer_mult_io_out_3)
  );
  Fan4 my_fan_network ( // @[FlexDPE.scala 99:32]
    .clock(my_fan_network_clock),
    .reset(my_fan_network_reset),
    .io_i_data_bus_0(my_fan_network_io_i_data_bus_0),
    .io_i_data_bus_1(my_fan_network_io_i_data_bus_1),
    .io_i_data_bus_2(my_fan_network_io_i_data_bus_2),
    .io_i_data_bus_3(my_fan_network_io_i_data_bus_3),
    .io_i_add_en_bus_0(my_fan_network_io_i_add_en_bus_0),
    .io_i_add_en_bus_1(my_fan_network_io_i_add_en_bus_1),
    .io_i_add_en_bus_2(my_fan_network_io_i_add_en_bus_2),
    .io_o_adder_0(my_fan_network_io_o_adder_0),
    .io_o_adder_1(my_fan_network_io_o_adder_1),
    .io_o_adder_2(my_fan_network_io_o_adder_2)
  );
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPE.scala 108:16]
  assign io_o_adder_1 = my_fan_network_io_o_adder_1[15:0]; // @[FlexDPE.scala 108:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPE.scala 108:16]
  assign io_matrix_0_0 = matrix_0_0; // @[FlexDPE.scala 56:13]
  assign io_matrix_0_1 = matrix_0_1; // @[FlexDPE.scala 56:13]
  assign io_matrix_1_0 = matrix_1_0; // @[FlexDPE.scala 56:13]
  assign io_matrix_1_1 = matrix_1_1; // @[FlexDPE.scala 56:13]
  assign my_ivn_clock = clock;
  assign my_ivn_reset = reset;
  assign my_ivn_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPE.scala 59:33]
  assign my_ivn_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPE.scala 59:33]
  assign my_ivn_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPE.scala 59:33]
  assign my_ivn_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPE.scala 59:33]
  assign my_controller_clock = clock;
  assign my_controller_reset = reset;
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPE.scala 70:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPE.scala 78:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPE.scala 78:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPE.scala 78:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPE.scala 78:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPE.scala 77:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPE.scala 77:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPE.scala 77:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPE.scala 77:29]
  assign my_Benes_io_i_mux_bus_0 = io_i_mux_bus_0; // @[FlexDPE.scala 79:27]
  assign my_Benes_io_i_mux_bus_1 = io_i_mux_bus_1; // @[FlexDPE.scala 79:27]
  assign my_Benes_io_i_mux_bus_2 = io_i_mux_bus_2; // @[FlexDPE.scala 79:27]
  assign my_Benes_io_i_mux_bus_3 = io_i_mux_bus_3; // @[FlexDPE.scala 79:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 90:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 90:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 90:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 90:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 91:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 91:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 91:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 91:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPE.scala 102:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPE.scala 102:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPE.scala 102:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPE.scala 102:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 103:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 103:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 103:36]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_16[14:0]; // @[FlexDPE.scala 33:{26,26} 93:14]
    r_mult_1 <= _GEN_17[14:0]; // @[FlexDPE.scala 33:{26,26} 93:14]
    r_mult_2 <= _GEN_18[14:0]; // @[FlexDPE.scala 33:{26,26} 93:14]
    r_mult_3 <= _GEN_19[14:0]; // @[FlexDPE.scala 33:{26,26} 93:14]
    if (reset) begin // @[FlexDPE.scala 37:26]
      counter <= 32'h0; // @[FlexDPE.scala 37:26]
    end else begin
      counter <= _counter_T_1; // @[FlexDPE.scala 131:13]
    end
    if (counter < 32'h3c) begin // @[FlexDPE.scala 110:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPE.scala 113:36]
        matrix_0_0 <= io_o_adder_0; // @[FlexDPE.scala 111:20]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPE.scala 116:41]
        matrix_0_0 <= io_o_adder_0; // @[FlexDPE.scala 111:20]
      end else if (my_Benes_io_o_dist_bus1_1 == 16'h0) begin // @[FlexDPE.scala 118:41]
        matrix_0_0 <= {{1'd0}, r_mult_0}; // @[FlexDPE.scala 119:23]
      end else begin
        matrix_0_0 <= _GEN_0;
      end
    end
    if (counter > 32'h64) begin // @[FlexDPE.scala 134:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPE.scala 113:36]
        matrix_0_1 <= io_o_adder_0; // @[FlexDPE.scala 111:20]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPE.scala 116:41]
        matrix_0_1 <= io_o_adder_0; // @[FlexDPE.scala 111:20]
      end else if (my_Benes_io_o_dist_bus1_1 == 16'h0) begin // @[FlexDPE.scala 118:41]
        matrix_0_1 <= {{1'd0}, r_mult_0}; // @[FlexDPE.scala 119:23]
      end else begin
        matrix_0_1 <= _GEN_0;
      end
    end
    if (counter < 32'h3c) begin // @[FlexDPE.scala 110:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPE.scala 113:36]
        matrix_1_0 <= {{1'd0}, r_mult_2}; // @[FlexDPE.scala 114:22]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPE.scala 116:41]
        matrix_1_0 <= {{1'd0}, r_mult_3}; // @[FlexDPE.scala 117:23]
      end else begin
        matrix_1_0 <= io_o_adder_2; // @[FlexDPE.scala 112:20]
      end
    end
    if (counter > 32'h64) begin // @[FlexDPE.scala 134:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPE.scala 113:36]
        matrix_1_1 <= {{1'd0}, r_mult_2}; // @[FlexDPE.scala 114:22]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPE.scala 116:41]
        matrix_1_1 <= {{1'd0}, r_mult_3}; // @[FlexDPE.scala 117:23]
      end else begin
        matrix_1_1 <= io_o_adder_2; // @[FlexDPE.scala 112:20]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  r_mult_0 = _RAND_0[14:0];
  _RAND_1 = {1{`RANDOM}};
  r_mult_1 = _RAND_1[14:0];
  _RAND_2 = {1{`RANDOM}};
  r_mult_2 = _RAND_2[14:0];
  _RAND_3 = {1{`RANDOM}};
  r_mult_3 = _RAND_3[14:0];
  _RAND_4 = {1{`RANDOM}};
  counter = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  matrix_0_0 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  matrix_0_1 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  matrix_1_0 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  matrix_1_1 = _RAND_8[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module FlexDPU(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Streaming_matrix_0_0,
  input  [15:0] io_Streaming_matrix_0_1,
  input  [15:0] io_Streaming_matrix_1_0,
  input  [15:0] io_Streaming_matrix_1_1,
  output [15:0] io_output_0_0,
  output [15:0] io_output_0_1,
  output [15:0] io_output_1_0,
  output [15:0] io_output_1_1,
  input         io_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_REG_INIT
  wire  PathFinder_clock; // @[FlexDPU.scala 106:44]
  wire  PathFinder_reset; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Stationary_matrix_0_0; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Stationary_matrix_0_1; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Stationary_matrix_1_0; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Stationary_matrix_1_1; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Streaming_matrix_0; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Streaming_matrix_1; // @[FlexDPU.scala 106:44]
  wire [3:0] PathFinder_io_i_mux_bus_0; // @[FlexDPU.scala 106:44]
  wire [3:0] PathFinder_io_i_mux_bus_1; // @[FlexDPU.scala 106:44]
  wire [3:0] PathFinder_io_i_mux_bus_2; // @[FlexDPU.scala 106:44]
  wire [3:0] PathFinder_io_i_mux_bus_3; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Source_0; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Source_1; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Source_2; // @[FlexDPU.scala 106:44]
  wire [15:0] PathFinder_io_Source_3; // @[FlexDPU.scala 106:44]
  wire  PathFinder_io_PF_Valid; // @[FlexDPU.scala 106:44]
  wire  PathFinder_io_Ivalid; // @[FlexDPU.scala 106:44]
  wire [31:0] MuxesWrapper_io_src_0; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_src_1; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_src_2; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_src_3; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_Osrc_0; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_Osrc_1; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_Osrc_2; // @[FlexDPU.scala 130:52]
  wire [31:0] MuxesWrapper_io_Osrc_3; // @[FlexDPU.scala 130:52]
  wire  flexdpecom4_clock; // @[FlexDPU.scala 138:46]
  wire  flexdpecom4_reset; // @[FlexDPU.scala 138:46]
  wire  flexdpecom4_io_i_data_valid; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus_1; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus_2; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus_3; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_1; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_2; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_3; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_1; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_1; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_o_adder_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_o_adder_1; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_o_adder_2; // @[FlexDPU.scala 138:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_0; // @[FlexDPU.scala 138:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_1; // @[FlexDPU.scala 138:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_2; // @[FlexDPU.scala 138:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_3; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_matrix_0_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_matrix_0_1; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_matrix_1_0; // @[FlexDPU.scala 138:46]
  wire [15:0] flexdpecom4_io_matrix_1_1; // @[FlexDPU.scala 138:46]
  reg [31:0] nonZeroValues_0; // @[FlexDPU.scala 28:32]
  reg [31:0] nonZeroValues_1; // @[FlexDPU.scala 28:32]
  reg [31:0] nonZeroValues_2; // @[FlexDPU.scala 28:32]
  reg [31:0] nonZeroValues_3; // @[FlexDPU.scala 28:32]
  reg [31:0] index; // @[FlexDPU.scala 29:24]
  reg [31:0] iloop; // @[FlexDPU.scala 30:24]
  reg [31:0] jloop; // @[FlexDPU.scala 31:24]
  reg  Statvalid; // @[FlexDPU.scala 32:28]
  reg  high3; // @[FlexDPU.scala 34:24]
  wire  _T = iloop < 32'h1; // @[FlexDPU.scala 37:30]
  wire  _T_2 = jloop < 32'h1; // @[FlexDPU.scala 37:64]
  wire  _T_5 = jloop == 32'h1; // @[FlexDPU.scala 39:60]
  wire  _T_6 = iloop == 32'h1 & jloop == 32'h1; // @[FlexDPU.scala 39:50]
  wire  _GEN_0 = iloop == 32'h1 & jloop == 32'h1 ? 1'h0 : high3; // @[FlexDPU.scala 39:86 40:15 34:24]
  wire  _GEN_1 = io_valid & iloop < 32'h1 & jloop < 32'h1 | _GEN_0; // @[FlexDPU.scala 37:88 38:15]
  wire [15:0] _GEN_3 = ~iloop[0] & jloop[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[FlexDPU.scala 45:{46,46}]
  wire [15:0] _GEN_4 = iloop[0] & ~jloop[0] ? io_Stationary_matrix_1_0 : _GEN_3; // @[FlexDPU.scala 45:{46,46}]
  wire [15:0] _GEN_5 = iloop[0] & jloop[0] ? io_Stationary_matrix_1_1 : _GEN_4; // @[FlexDPU.scala 45:{46,46}]
  wire [31:0] _nonZeroValues_T_10 = {{16'd0}, _GEN_5}; // @[FlexDPU.scala 46:{30,30}]
  wire [31:0] _index_T_1 = index + 32'h1; // @[FlexDPU.scala 47:24]
  wire [31:0] _iloop_T_1 = iloop + 32'h1; // @[FlexDPU.scala 51:24]
  wire [31:0] _jloop_T_1 = jloop + 32'h1; // @[FlexDPU.scala 55:24]
  reg [31:0] PF1_Stream_Col_0; // @[FlexDPU.scala 68:33]
  reg [31:0] PF1_Stream_Col_1; // @[FlexDPU.scala 68:33]
  reg [31:0] ModuleIndex; // @[FlexDPU.scala 69:30]
  reg  PF_0_Ivalid_REG; // @[FlexDPU.scala 109:32]
  reg [31:0] delay2; // @[FlexDPU.scala 119:33]
  wire  _T_20 = delay2 < 32'h4; // @[FlexDPU.scala 124:32]
  wire [31:0] _delay2_T_1 = delay2 + 32'h1; // @[FlexDPU.scala 125:34]
  wire  PF_0_PF_Valid = PathFinder_io_PF_Valid; // @[FlexDPU.scala 106:{25,25}]
  wire [3:0] PF_0_i_mux_bus_0 = PathFinder_io_i_mux_bus_0; // @[FlexDPU.scala 106:{25,25}]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_2 = {PF_0_i_mux_bus_0[0], 3'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_4 = {{1'd0}, PF_0_i_mux_bus_0[3:1]}; // @[FlexDPU.scala 75:24]
  wire [2:0] _GEN_73 = {_FDPE_0_i_mux_bus_0_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_6 = {{1'd0}, _GEN_73}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_7 = _FDPE_0_i_mux_bus_0_rev_T_2 | _FDPE_0_i_mux_bus_0_rev_T_6; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_8 = {{2'd0}, PF_0_i_mux_bus_0[3:2]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_rev_T_10 = {_FDPE_0_i_mux_bus_0_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_75 = {{2'd0}, _FDPE_0_i_mux_bus_0_rev_T_10}; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_11 = _FDPE_0_i_mux_bus_0_rev_T_7 | _GEN_75; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_rev_T_12 = {{3'd0}, PF_0_i_mux_bus_0[3]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_0_rev_T_12[0]}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_77 = {{2'd0}, _FDPE_0_i_mux_bus_0_rev_T_14}; // @[FlexDPU.scala 75:17]
  wire [3:0] PF_0_i_mux_bus_1 = PathFinder_io_i_mux_bus_1; // @[FlexDPU.scala 106:{25,25}]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_2 = {PF_0_i_mux_bus_1[0], 3'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_4 = {{1'd0}, PF_0_i_mux_bus_1[3:1]}; // @[FlexDPU.scala 75:24]
  wire [2:0] _GEN_79 = {_FDPE_0_i_mux_bus_1_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_6 = {{1'd0}, _GEN_79}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_7 = _FDPE_0_i_mux_bus_1_rev_T_2 | _FDPE_0_i_mux_bus_1_rev_T_6; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_8 = {{2'd0}, PF_0_i_mux_bus_1[3:2]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_rev_T_10 = {_FDPE_0_i_mux_bus_1_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_81 = {{2'd0}, _FDPE_0_i_mux_bus_1_rev_T_10}; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_11 = _FDPE_0_i_mux_bus_1_rev_T_7 | _GEN_81; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_1_rev_T_12 = {{3'd0}, PF_0_i_mux_bus_1[3]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_1_rev_T_12[0]}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_83 = {{2'd0}, _FDPE_0_i_mux_bus_1_rev_T_14}; // @[FlexDPU.scala 75:17]
  wire [3:0] PF_0_i_mux_bus_2 = PathFinder_io_i_mux_bus_2; // @[FlexDPU.scala 106:{25,25}]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_2 = {PF_0_i_mux_bus_2[0], 3'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_4 = {{1'd0}, PF_0_i_mux_bus_2[3:1]}; // @[FlexDPU.scala 75:24]
  wire [2:0] _GEN_85 = {_FDPE_0_i_mux_bus_2_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_6 = {{1'd0}, _GEN_85}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_7 = _FDPE_0_i_mux_bus_2_rev_T_2 | _FDPE_0_i_mux_bus_2_rev_T_6; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_8 = {{2'd0}, PF_0_i_mux_bus_2[3:2]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_2_rev_T_10 = {_FDPE_0_i_mux_bus_2_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_87 = {{2'd0}, _FDPE_0_i_mux_bus_2_rev_T_10}; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_11 = _FDPE_0_i_mux_bus_2_rev_T_7 | _GEN_87; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_2_rev_T_12 = {{3'd0}, PF_0_i_mux_bus_2[3]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_2_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_2_rev_T_12[0]}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_89 = {{2'd0}, _FDPE_0_i_mux_bus_2_rev_T_14}; // @[FlexDPU.scala 75:17]
  wire [3:0] PF_0_i_mux_bus_3 = PathFinder_io_i_mux_bus_3; // @[FlexDPU.scala 106:{25,25}]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_2 = {PF_0_i_mux_bus_3[0], 3'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_4 = {{1'd0}, PF_0_i_mux_bus_3[3:1]}; // @[FlexDPU.scala 75:24]
  wire [2:0] _GEN_91 = {_FDPE_0_i_mux_bus_3_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_6 = {{1'd0}, _GEN_91}; // @[FlexDPU.scala 75:35]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_7 = _FDPE_0_i_mux_bus_3_rev_T_2 | _FDPE_0_i_mux_bus_3_rev_T_6; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_8 = {{2'd0}, PF_0_i_mux_bus_3[3:2]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_3_rev_T_10 = {_FDPE_0_i_mux_bus_3_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_93 = {{2'd0}, _FDPE_0_i_mux_bus_3_rev_T_10}; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_11 = _FDPE_0_i_mux_bus_3_rev_T_7 | _GEN_93; // @[FlexDPU.scala 75:17]
  wire [3:0] _FDPE_0_i_mux_bus_3_rev_T_12 = {{3'd0}, PF_0_i_mux_bus_3[3]}; // @[FlexDPU.scala 75:24]
  wire [1:0] _FDPE_0_i_mux_bus_3_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_3_rev_T_12[0]}; // @[FlexDPU.scala 75:35]
  wire [3:0] _GEN_95 = {{2'd0}, _FDPE_0_i_mux_bus_3_rev_T_14}; // @[FlexDPU.scala 75:17]
  wire [15:0] FDPE_0_matrix_0_0 = flexdpecom4_io_matrix_0_0; // @[FlexDPU.scala 138:{27,27}]
  wire [15:0] _GEN_33 = PF_0_PF_Valid ? FDPE_0_matrix_0_0 : 16'h0; // @[FlexDPU.scala 129:29 160:19 163:19]
  wire [15:0] FDPE_0_matrix_0_1 = flexdpecom4_io_matrix_0_1; // @[FlexDPU.scala 138:{27,27}]
  wire [15:0] _GEN_34 = PF_0_PF_Valid ? FDPE_0_matrix_0_1 : 16'h0; // @[FlexDPU.scala 129:29 160:19 163:19]
  wire [15:0] FDPE_0_matrix_1_0 = flexdpecom4_io_matrix_1_0; // @[FlexDPU.scala 138:{27,27}]
  wire [15:0] _GEN_35 = PF_0_PF_Valid ? FDPE_0_matrix_1_0 : 16'h0; // @[FlexDPU.scala 129:29 160:19 163:19]
  wire [15:0] FDPE_0_matrix_1_1 = flexdpecom4_io_matrix_1_1; // @[FlexDPU.scala 138:{27,27}]
  wire [15:0] _GEN_36 = PF_0_PF_Valid ? FDPE_0_matrix_1_1 : 16'h0; // @[FlexDPU.scala 129:29 160:19 163:19]
  reg [15:0] delay4; // @[FlexDPU.scala 186:29]
  reg  high4; // @[FlexDPU.scala 187:28]
  wire [15:0] _delay4_T_1 = delay4 + 16'h1; // @[FlexDPU.scala 191:30]
  wire  _GEN_38 = high4 & delay4 > 16'h0 | high4; // @[FlexDPU.scala 192:42 194:19 187:28]
  wire  _GEN_39 = PF_0_PF_Valid | _GEN_38; // @[FlexDPU.scala 189:29 190:19]
  wire [31:0] _ModuleIndex_T_1 = ModuleIndex + 32'h1; // @[FlexDPU.scala 204:40]
  wire [15:0] _GEN_46 = ModuleIndex[0] ? io_Streaming_matrix_0_1 : io_Streaming_matrix_0_0; // @[FlexDPU.scala 212:{31,31}]
  wire [15:0] _GEN_48 = ModuleIndex[0] ? io_Streaming_matrix_1_1 : io_Streaming_matrix_1_0; // @[FlexDPU.scala 212:{31,31}]
  wire [15:0] PF_0_Source_0 = PathFinder_io_Source_0; // @[FlexDPU.scala 106:{25,25}]
  wire [15:0] PF_0_Source_1 = PathFinder_io_Source_1; // @[FlexDPU.scala 106:{25,25}]
  wire [15:0] PF_0_Source_2 = PathFinder_io_Source_2; // @[FlexDPU.scala 106:{25,25}]
  wire [15:0] PF_0_Source_3 = PathFinder_io_Source_3; // @[FlexDPU.scala 106:{25,25}]
  wire  check2 = PF_0_PF_Valid | _T_20; // @[FlexDPU.scala 122:34 123:24]
  wire [31:0] MuxWrapper_0_Osrc_0 = MuxesWrapper_io_Osrc_0; // @[FlexDPU.scala 130:{33,33}]
  wire [31:0] MuxWrapper_0_Osrc_1 = MuxesWrapper_io_Osrc_1; // @[FlexDPU.scala 130:{33,33}]
  wire [31:0] MuxWrapper_0_Osrc_2 = MuxesWrapper_io_Osrc_2; // @[FlexDPU.scala 130:{33,33}]
  wire [31:0] MuxWrapper_0_Osrc_3 = MuxesWrapper_io_Osrc_3; // @[FlexDPU.scala 130:{33,33}]
  wire [15:0] FDPE_0_o_adder_0 = flexdpecom4_io_o_adder_0; // @[FlexDPU.scala 138:{27,27}]
  wire [15:0] FDPE_0_o_adder_1 = flexdpecom4_io_o_adder_1; // @[FlexDPU.scala 138:{27,27}]
  wire [15:0] FDPE_0_o_adder_2 = flexdpecom4_io_o_adder_2; // @[FlexDPU.scala 138:{27,27}]
  PathFinder PathFinder ( // @[FlexDPU.scala 106:44]
    .clock(PathFinder_clock),
    .reset(PathFinder_reset),
    .io_Stationary_matrix_0_0(PathFinder_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(PathFinder_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_io_Stationary_matrix_1_1),
    .io_Streaming_matrix_0(PathFinder_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_io_Streaming_matrix_1),
    .io_i_mux_bus_0(PathFinder_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_io_i_mux_bus_3),
    .io_Source_0(PathFinder_io_Source_0),
    .io_Source_1(PathFinder_io_Source_1),
    .io_Source_2(PathFinder_io_Source_2),
    .io_Source_3(PathFinder_io_Source_3),
    .io_PF_Valid(PathFinder_io_PF_Valid),
    .io_Ivalid(PathFinder_io_Ivalid)
  );
  MuxesWrapper MuxesWrapper ( // @[FlexDPU.scala 130:52]
    .io_src_0(MuxesWrapper_io_src_0),
    .io_src_1(MuxesWrapper_io_src_1),
    .io_src_2(MuxesWrapper_io_src_2),
    .io_src_3(MuxesWrapper_io_src_3),
    .io_Osrc_0(MuxesWrapper_io_Osrc_0),
    .io_Osrc_1(MuxesWrapper_io_Osrc_1),
    .io_Osrc_2(MuxesWrapper_io_Osrc_2),
    .io_Osrc_3(MuxesWrapper_io_Osrc_3)
  );
  flexdpecom4 flexdpecom4 ( // @[FlexDPU.scala 138:46]
    .clock(flexdpecom4_clock),
    .reset(flexdpecom4_reset),
    .io_i_data_valid(flexdpecom4_io_i_data_valid),
    .io_i_data_bus_0(flexdpecom4_io_i_data_bus_0),
    .io_i_data_bus_1(flexdpecom4_io_i_data_bus_1),
    .io_i_data_bus_2(flexdpecom4_io_i_data_bus_2),
    .io_i_data_bus_3(flexdpecom4_io_i_data_bus_3),
    .io_i_data_bus2_0(flexdpecom4_io_i_data_bus2_0),
    .io_i_data_bus2_1(flexdpecom4_io_i_data_bus2_1),
    .io_i_data_bus2_2(flexdpecom4_io_i_data_bus2_2),
    .io_i_data_bus2_3(flexdpecom4_io_i_data_bus2_3),
    .io_Stationary_matrix_0_0(flexdpecom4_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(flexdpecom4_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(flexdpecom4_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(flexdpecom4_io_Stationary_matrix_1_1),
    .io_o_adder_0(flexdpecom4_io_o_adder_0),
    .io_o_adder_1(flexdpecom4_io_o_adder_1),
    .io_o_adder_2(flexdpecom4_io_o_adder_2),
    .io_i_mux_bus_0(flexdpecom4_io_i_mux_bus_0),
    .io_i_mux_bus_1(flexdpecom4_io_i_mux_bus_1),
    .io_i_mux_bus_2(flexdpecom4_io_i_mux_bus_2),
    .io_i_mux_bus_3(flexdpecom4_io_i_mux_bus_3),
    .io_matrix_0_0(flexdpecom4_io_matrix_0_0),
    .io_matrix_0_1(flexdpecom4_io_matrix_0_1),
    .io_matrix_1_0(flexdpecom4_io_matrix_1_0),
    .io_matrix_1_1(flexdpecom4_io_matrix_1_1)
  );
  assign io_output_0_0 = Statvalid ? _GEN_33 : 16'h0; // @[FlexDPU.scala 104:20 299:19]
  assign io_output_0_1 = Statvalid ? _GEN_34 : 16'h0; // @[FlexDPU.scala 104:20 299:19]
  assign io_output_1_0 = Statvalid ? _GEN_35 : 16'h0; // @[FlexDPU.scala 104:20 299:19]
  assign io_output_1_1 = Statvalid ? _GEN_36 : 16'h0; // @[FlexDPU.scala 104:20 299:19]
  assign PathFinder_clock = clock;
  assign PathFinder_reset = reset;
  assign PathFinder_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 106:25 110:33]
  assign PathFinder_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 106:25 110:33]
  assign PathFinder_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 106:25 110:33]
  assign PathFinder_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 106:25 110:33]
  assign PathFinder_io_Streaming_matrix_0 = PF1_Stream_Col_0[15:0]; // @[FlexDPU.scala 106:25 111:32]
  assign PathFinder_io_Streaming_matrix_1 = PF1_Stream_Col_1[15:0]; // @[FlexDPU.scala 106:25 111:32]
  assign PathFinder_io_Ivalid = PF_0_Ivalid_REG; // @[FlexDPU.scala 106:25 109:22]
  assign MuxesWrapper_io_src_0 = {{16'd0}, PF_0_Source_0}; // @[FlexDPU.scala 130:33 133:31]
  assign MuxesWrapper_io_src_1 = {{16'd0}, PF_0_Source_1}; // @[FlexDPU.scala 130:33 133:31]
  assign MuxesWrapper_io_src_2 = {{16'd0}, PF_0_Source_2}; // @[FlexDPU.scala 130:33 133:31]
  assign MuxesWrapper_io_src_3 = {{16'd0}, PF_0_Source_3}; // @[FlexDPU.scala 130:33 133:31]
  assign flexdpecom4_clock = clock;
  assign flexdpecom4_reset = reset;
  assign flexdpecom4_io_i_data_valid = 1'h1; // @[FlexDPU.scala 138:27 142:34]
  assign flexdpecom4_io_i_data_bus_0 = nonZeroValues_0[15:0]; // @[FlexDPU.scala 138:27 154:37]
  assign flexdpecom4_io_i_data_bus_1 = nonZeroValues_1[15:0]; // @[FlexDPU.scala 138:27 155:37]
  assign flexdpecom4_io_i_data_bus_2 = nonZeroValues_2[15:0]; // @[FlexDPU.scala 138:27 156:37]
  assign flexdpecom4_io_i_data_bus_3 = nonZeroValues_3[15:0]; // @[FlexDPU.scala 138:27 157:37]
  assign flexdpecom4_io_i_data_bus2_0 = MuxWrapper_0_Osrc_0[15:0]; // @[FlexDPU.scala 138:27 148:33]
  assign flexdpecom4_io_i_data_bus2_1 = MuxWrapper_0_Osrc_1[15:0]; // @[FlexDPU.scala 138:27 148:33]
  assign flexdpecom4_io_i_data_bus2_2 = MuxWrapper_0_Osrc_2[15:0]; // @[FlexDPU.scala 138:27 148:33]
  assign flexdpecom4_io_i_data_bus2_3 = MuxWrapper_0_Osrc_3[15:0]; // @[FlexDPU.scala 138:27 148:33]
  assign flexdpecom4_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 138:27 143:39]
  assign flexdpecom4_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 138:27 143:39]
  assign flexdpecom4_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 138:27 143:39]
  assign flexdpecom4_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 138:27 143:39]
  assign flexdpecom4_io_i_mux_bus_0 = _FDPE_0_i_mux_bus_0_rev_T_11 | _GEN_77; // @[FlexDPU.scala 75:17]
  assign flexdpecom4_io_i_mux_bus_1 = _FDPE_0_i_mux_bus_1_rev_T_11 | _GEN_83; // @[FlexDPU.scala 75:17]
  assign flexdpecom4_io_i_mux_bus_2 = _FDPE_0_i_mux_bus_2_rev_T_11 | _GEN_89; // @[FlexDPU.scala 75:17]
  assign flexdpecom4_io_i_mux_bus_3 = _FDPE_0_i_mux_bus_3_rev_T_11 | _GEN_95; // @[FlexDPU.scala 75:17]
  always @(posedge clock) begin
    if (reset) begin // @[FlexDPU.scala 28:32]
      nonZeroValues_0 <= 32'h0; // @[FlexDPU.scala 28:32]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (_GEN_5 != 16'h0) begin // @[FlexDPU.scala 45:54]
        if (2'h0 == index[1:0]) begin // @[FlexDPU.scala 46:30]
          nonZeroValues_0 <= _nonZeroValues_T_10; // @[FlexDPU.scala 46:30]
        end
      end
    end
    if (reset) begin // @[FlexDPU.scala 28:32]
      nonZeroValues_1 <= 32'h0; // @[FlexDPU.scala 28:32]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (_GEN_5 != 16'h0) begin // @[FlexDPU.scala 45:54]
        if (2'h1 == index[1:0]) begin // @[FlexDPU.scala 46:30]
          nonZeroValues_1 <= _nonZeroValues_T_10; // @[FlexDPU.scala 46:30]
        end
      end
    end
    if (reset) begin // @[FlexDPU.scala 28:32]
      nonZeroValues_2 <= 32'h0; // @[FlexDPU.scala 28:32]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (_GEN_5 != 16'h0) begin // @[FlexDPU.scala 45:54]
        if (2'h2 == index[1:0]) begin // @[FlexDPU.scala 46:30]
          nonZeroValues_2 <= _nonZeroValues_T_10; // @[FlexDPU.scala 46:30]
        end
      end
    end
    if (reset) begin // @[FlexDPU.scala 28:32]
      nonZeroValues_3 <= 32'h0; // @[FlexDPU.scala 28:32]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (_GEN_5 != 16'h0) begin // @[FlexDPU.scala 45:54]
        if (2'h3 == index[1:0]) begin // @[FlexDPU.scala 46:30]
          nonZeroValues_3 <= _nonZeroValues_T_10; // @[FlexDPU.scala 46:30]
        end
      end
    end
    if (reset) begin // @[FlexDPU.scala 29:24]
      index <= 32'h0; // @[FlexDPU.scala 29:24]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (_GEN_5 != 16'h0) begin // @[FlexDPU.scala 45:54]
        index <= _index_T_1; // @[FlexDPU.scala 47:15]
      end
    end
    if (reset) begin // @[FlexDPU.scala 30:24]
      iloop <= 32'h0; // @[FlexDPU.scala 30:24]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (_T & _T_5) begin // @[FlexDPU.scala 50:77]
        iloop <= _iloop_T_1; // @[FlexDPU.scala 51:15]
      end
    end
    if (reset) begin // @[FlexDPU.scala 31:24]
      jloop <= 32'h0; // @[FlexDPU.scala 31:24]
    end else if (high3) begin // @[FlexDPU.scala 44:17]
      if (iloop <= 32'h1 & _T_2) begin // @[FlexDPU.scala 54:76]
        jloop <= _jloop_T_1; // @[FlexDPU.scala 55:15]
      end else if (!(_T_6)) begin // @[FlexDPU.scala 56:83]
        jloop <= 32'h0; // @[FlexDPU.scala 59:15]
      end
    end
    if (reset) begin // @[FlexDPU.scala 32:28]
      Statvalid <= 1'h0; // @[FlexDPU.scala 32:28]
    end else begin
      Statvalid <= _T_6; // @[FlexDPU.scala 43:15]
    end
    if (reset) begin // @[FlexDPU.scala 34:24]
      high3 <= 1'h0; // @[FlexDPU.scala 34:24]
    end else begin
      high3 <= _GEN_1;
    end
    if (reset) begin // @[FlexDPU.scala 68:33]
      PF1_Stream_Col_0 <= 32'h0; // @[FlexDPU.scala 68:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 104:20]
      PF1_Stream_Col_0 <= {{16'd0}, _GEN_46}; // @[FlexDPU.scala 212:31]
    end
    if (reset) begin // @[FlexDPU.scala 68:33]
      PF1_Stream_Col_1 <= 32'h0; // @[FlexDPU.scala 68:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 104:20]
      PF1_Stream_Col_1 <= {{16'd0}, _GEN_48}; // @[FlexDPU.scala 212:31]
    end
    if (reset) begin // @[FlexDPU.scala 69:30]
      ModuleIndex <= 32'h0; // @[FlexDPU.scala 69:30]
    end else if (Statvalid) begin // @[FlexDPU.scala 104:20]
      if (high4 & delay4 == 16'h14 & ModuleIndex < 32'h1) begin // @[FlexDPU.scala 201:84]
        ModuleIndex <= _ModuleIndex_T_1; // @[FlexDPU.scala 204:25]
      end
    end
    PF_0_Ivalid_REG <= Statvalid; // @[FlexDPU.scala 109:32]
    if (reset) begin // @[FlexDPU.scala 119:33]
      delay2 <= 32'h0; // @[FlexDPU.scala 119:33]
    end else if (!(PF_0_PF_Valid)) begin // @[FlexDPU.scala 122:34]
      if (delay2 < 32'h4) begin // @[FlexDPU.scala 124:71]
        delay2 <= _delay2_T_1; // @[FlexDPU.scala 125:24]
      end
    end
    if (reset) begin // @[FlexDPU.scala 186:29]
      delay4 <= 16'h0; // @[FlexDPU.scala 186:29]
    end else if (high4 & delay4 == 16'h14 & ModuleIndex < 32'h1) begin // @[FlexDPU.scala 201:84]
      delay4 <= 16'h0; // @[FlexDPU.scala 203:20]
    end else if (PF_0_PF_Valid) begin // @[FlexDPU.scala 189:29]
      delay4 <= _delay4_T_1; // @[FlexDPU.scala 191:20]
    end else if (high4 & delay4 > 16'h0) begin // @[FlexDPU.scala 192:42]
      delay4 <= _delay4_T_1; // @[FlexDPU.scala 193:20]
    end
    if (reset) begin // @[FlexDPU.scala 187:28]
      high4 <= 1'h0; // @[FlexDPU.scala 187:28]
    end else if (high4 & delay4 == 16'h14 & ModuleIndex < 32'h1) begin // @[FlexDPU.scala 201:84]
      high4 <= 1'h0; // @[FlexDPU.scala 202:19]
    end else begin
      high4 <= _GEN_39;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  nonZeroValues_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  nonZeroValues_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  nonZeroValues_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  nonZeroValues_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  index = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  iloop = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  jloop = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  Statvalid = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  high3 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  PF1_Stream_Col_0 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  PF1_Stream_Col_1 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  ModuleIndex = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  PF_0_Ivalid_REG = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  delay2 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  delay4 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  high4 = _RAND_15[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Top(
  input         clock,
  input         reset,
  input  [31:0] io_Stationary_matrix_0_0,
  input  [31:0] io_Stationary_matrix_0_1,
  input  [31:0] io_Stationary_matrix_1_0,
  input  [31:0] io_Stationary_matrix_1_1,
  input  [31:0] io_Streaming_matrix_0_0,
  input  [31:0] io_Streaming_matrix_0_1,
  input  [31:0] io_Streaming_matrix_1_0,
  input  [31:0] io_Streaming_matrix_1_1,
  output [31:0] io_Third_Matrix_0_0,
  output [31:0] io_Third_Matrix_0_1,
  output [31:0] io_Third_Matrix_1_0,
  output [31:0] io_Third_Matrix_1_1
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  PreProcessor_clock; // @[TOP.scala 14:30]
  wire  PreProcessor_reset; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat1_0_0; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat1_0_1; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat1_1_0; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat1_1_1; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat2_0_0; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat2_0_1; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat2_1_0; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_mat2_1_1; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_compressedBitmap_0_0; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_compressedBitmap_0_1; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_compressedBitmap_1_0; // @[TOP.scala 14:30]
  wire [15:0] PreProcessor_io_compressedBitmap_1_1; // @[TOP.scala 14:30]
  wire  PreProcessor_io_End; // @[TOP.scala 14:30]
  wire  FDPU_clock; // @[TOP.scala 29:26]
  wire  FDPU_reset; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Stationary_matrix_0_0; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Stationary_matrix_0_1; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Stationary_matrix_1_0; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Stationary_matrix_1_1; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Streaming_matrix_0_0; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Streaming_matrix_0_1; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Streaming_matrix_1_0; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_Streaming_matrix_1_1; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_output_0_0; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_output_0_1; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_output_1_0; // @[TOP.scala 29:26]
  wire [15:0] FDPU_io_output_1_1; // @[TOP.scala 29:26]
  wire  FDPU_io_valid; // @[TOP.scala 29:26]
  reg  high; // @[TOP.scala 17:23]
  reg  delay; // @[TOP.scala 18:24]
  wire  _delay_T_1 = delay + 1'h1; // @[TOP.scala 21:24]
  wire  _GEN_0 = PreProcessor_io_End | high; // @[TOP.scala 19:30 20:14 17:23]
  wire  _GEN_3 = delay >= 1'h1 | _GEN_0; // @[TOP.scala 23:25 25:14]
  Regor PreProcessor ( // @[TOP.scala 14:30]
    .clock(PreProcessor_clock),
    .reset(PreProcessor_reset),
    .io_mat1_0_0(PreProcessor_io_mat1_0_0),
    .io_mat1_0_1(PreProcessor_io_mat1_0_1),
    .io_mat1_1_0(PreProcessor_io_mat1_1_0),
    .io_mat1_1_1(PreProcessor_io_mat1_1_1),
    .io_mat2_0_0(PreProcessor_io_mat2_0_0),
    .io_mat2_0_1(PreProcessor_io_mat2_0_1),
    .io_mat2_1_0(PreProcessor_io_mat2_1_0),
    .io_mat2_1_1(PreProcessor_io_mat2_1_1),
    .io_compressedBitmap_0_0(PreProcessor_io_compressedBitmap_0_0),
    .io_compressedBitmap_0_1(PreProcessor_io_compressedBitmap_0_1),
    .io_compressedBitmap_1_0(PreProcessor_io_compressedBitmap_1_0),
    .io_compressedBitmap_1_1(PreProcessor_io_compressedBitmap_1_1),
    .io_End(PreProcessor_io_End)
  );
  FlexDPU FDPU ( // @[TOP.scala 29:26]
    .clock(FDPU_clock),
    .reset(FDPU_reset),
    .io_Stationary_matrix_0_0(FDPU_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(FDPU_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(FDPU_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(FDPU_io_Stationary_matrix_1_1),
    .io_Streaming_matrix_0_0(FDPU_io_Streaming_matrix_0_0),
    .io_Streaming_matrix_0_1(FDPU_io_Streaming_matrix_0_1),
    .io_Streaming_matrix_1_0(FDPU_io_Streaming_matrix_1_0),
    .io_Streaming_matrix_1_1(FDPU_io_Streaming_matrix_1_1),
    .io_output_0_0(FDPU_io_output_0_0),
    .io_output_0_1(FDPU_io_output_0_1),
    .io_output_1_0(FDPU_io_output_1_0),
    .io_output_1_1(FDPU_io_output_1_1),
    .io_valid(FDPU_io_valid)
  );
  assign io_Third_Matrix_0_0 = delay ? {{16'd0}, FDPU_io_output_0_0} : 32'h0; // @[TOP.scala 28:25 33:25 35:25]
  assign io_Third_Matrix_0_1 = delay ? {{16'd0}, FDPU_io_output_0_1} : 32'h0; // @[TOP.scala 28:25 33:25 35:25]
  assign io_Third_Matrix_1_0 = delay ? {{16'd0}, FDPU_io_output_1_0} : 32'h0; // @[TOP.scala 28:25 33:25 35:25]
  assign io_Third_Matrix_1_1 = delay ? {{16'd0}, FDPU_io_output_1_1} : 32'h0; // @[TOP.scala 28:25 33:25 35:25]
  assign PreProcessor_clock = clock;
  assign PreProcessor_reset = reset;
  assign PreProcessor_io_mat1_0_0 = io_Stationary_matrix_0_0[15:0]; // @[TOP.scala 15:26]
  assign PreProcessor_io_mat1_0_1 = io_Stationary_matrix_0_1[15:0]; // @[TOP.scala 15:26]
  assign PreProcessor_io_mat1_1_0 = io_Stationary_matrix_1_0[15:0]; // @[TOP.scala 15:26]
  assign PreProcessor_io_mat1_1_1 = io_Stationary_matrix_1_1[15:0]; // @[TOP.scala 15:26]
  assign PreProcessor_io_mat2_0_0 = io_Streaming_matrix_0_0[15:0]; // @[TOP.scala 16:26]
  assign PreProcessor_io_mat2_0_1 = io_Streaming_matrix_0_1[15:0]; // @[TOP.scala 16:26]
  assign PreProcessor_io_mat2_1_0 = io_Streaming_matrix_1_0[15:0]; // @[TOP.scala 16:26]
  assign PreProcessor_io_mat2_1_1 = io_Streaming_matrix_1_1[15:0]; // @[TOP.scala 16:26]
  assign FDPU_clock = clock;
  assign FDPU_reset = reset;
  assign FDPU_io_Stationary_matrix_0_0 = PreProcessor_io_compressedBitmap_0_0; // @[TOP.scala 30:35]
  assign FDPU_io_Stationary_matrix_0_1 = PreProcessor_io_compressedBitmap_0_1; // @[TOP.scala 30:35]
  assign FDPU_io_Stationary_matrix_1_0 = PreProcessor_io_compressedBitmap_1_0; // @[TOP.scala 30:35]
  assign FDPU_io_Stationary_matrix_1_1 = PreProcessor_io_compressedBitmap_1_1; // @[TOP.scala 30:35]
  assign FDPU_io_Streaming_matrix_0_0 = io_Streaming_matrix_0_0[15:0]; // @[TOP.scala 31:34]
  assign FDPU_io_Streaming_matrix_0_1 = io_Streaming_matrix_0_1[15:0]; // @[TOP.scala 31:34]
  assign FDPU_io_Streaming_matrix_1_0 = io_Streaming_matrix_1_0[15:0]; // @[TOP.scala 31:34]
  assign FDPU_io_Streaming_matrix_1_1 = io_Streaming_matrix_1_1[15:0]; // @[TOP.scala 31:34]
  assign FDPU_io_valid = high; // @[TOP.scala 32:23]
  always @(posedge clock) begin
    if (reset) begin // @[TOP.scala 17:23]
      high <= 1'h0; // @[TOP.scala 17:23]
    end else begin
      high <= _GEN_3;
    end
    if (reset) begin // @[TOP.scala 18:24]
      delay <= 1'h0; // @[TOP.scala 18:24]
    end else if (delay >= 1'h1) begin // @[TOP.scala 23:25]
      delay <= _delay_T_1; // @[TOP.scala 24:15]
    end else if (PreProcessor_io_End) begin // @[TOP.scala 19:30]
      delay <= delay + 1'h1; // @[TOP.scala 21:15]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  high = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  delay = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

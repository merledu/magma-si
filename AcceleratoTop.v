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
  wire  _GEN_16 = ~i; // @[Bitmap.scala 23:{41,41}]
  wire [15:0] _GEN_1 = ~i & j ? io_mat1_0_1 : io_mat1_0_0; // @[Bitmap.scala 23:{41,41}]
  wire  _GEN_17 = ~j; // @[Bitmap.scala 23:{41,41}]
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
      if (_GEN_16 & _GEN_17) begin // @[Bitmap.scala 24:31]
        matReg1_0_0 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (_GEN_16 & _GEN_17) begin // @[Bitmap.scala 26:31]
      matReg1_0_0 <= 16'h0; // @[Bitmap.scala 26:31]
    end
    if (reset) begin // @[Bitmap.scala 14:26]
      matReg1_0_1 <= 16'h0; // @[Bitmap.scala 14:26]
    end else if (_GEN_3 != 16'h0) begin // @[Bitmap.scala 23:49]
      if (_GEN_16 & j) begin // @[Bitmap.scala 24:31]
        matReg1_0_1 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (_GEN_16 & j) begin // @[Bitmap.scala 26:31]
      matReg1_0_1 <= 16'h0; // @[Bitmap.scala 26:31]
    end
    if (reset) begin // @[Bitmap.scala 14:26]
      matReg1_1_0 <= 16'h0; // @[Bitmap.scala 14:26]
    end else if (_GEN_3 != 16'h0) begin // @[Bitmap.scala 23:49]
      if (i & _GEN_17) begin // @[Bitmap.scala 24:31]
        matReg1_1_0 <= 16'h1; // @[Bitmap.scala 24:31]
      end
    end else if (i & _GEN_17) begin // @[Bitmap.scala 26:31]
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
  output [15:0] io_compressedBitmap_1_1
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
  wire  bitmap_clock; // @[MatrixPRE-Processor.scala 17:24]
  wire  bitmap_reset; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_mat1_0_0; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_mat1_0_1; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_mat1_1_0; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_mat1_1_1; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_bitmap1_0_0; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_bitmap1_0_1; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_bitmap1_1_0; // @[MatrixPRE-Processor.scala 17:24]
  wire [15:0] bitmap_io_bitmap1_1_1; // @[MatrixPRE-Processor.scala 17:24]
  reg [15:0] matReg1_0_0; // @[MatrixPRE-Processor.scala 14:26]
  reg [15:0] matReg1_0_1; // @[MatrixPRE-Processor.scala 14:26]
  reg [15:0] matReg1_1_0; // @[MatrixPRE-Processor.scala 14:26]
  reg [15:0] matReg1_1_1; // @[MatrixPRE-Processor.scala 14:26]
  reg  reg_0; // @[MatrixPRE-Processor.scala 21:22]
  reg  reg_1; // @[MatrixPRE-Processor.scala 21:22]
  reg  i; // @[MatrixPRE-Processor.scala 28:20]
  reg  j; // @[MatrixPRE-Processor.scala 29:20]
  wire  _GEN_1 = j ? reg_1 : reg_0; // @[MatrixPRE-Processor.scala 35:{23,23}]
  wire [15:0] _GEN_2 = bitmap_io_bitmap1_0_0; // @[MatrixPRE-Processor.scala 35:{60,60}]
  wire  _GEN_28 = ~i; // @[MatrixPRE-Processor.scala 35:{60,60}]
  wire [15:0] _GEN_3 = ~i & j ? bitmap_io_bitmap1_0_1 : _GEN_2; // @[MatrixPRE-Processor.scala 35:{60,60}]
  wire  _GEN_29 = ~j; // @[MatrixPRE-Processor.scala 35:{60,60}]
  wire [15:0] _GEN_4 = i & ~j ? bitmap_io_bitmap1_1_0 : _GEN_3; // @[MatrixPRE-Processor.scala 35:{60,60}]
  wire [15:0] _GEN_5 = i & j ? bitmap_io_bitmap1_1_1 : _GEN_4; // @[MatrixPRE-Processor.scala 35:{60,60}]
  wire [15:0] _GEN_15 = _GEN_28 & j ? io_mat1_0_1 : io_mat1_0_0; // @[MatrixPRE-Processor.scala 38:{27,27}]
  wire [15:0] _GEN_16 = i & _GEN_29 ? io_mat1_1_0 : _GEN_15; // @[MatrixPRE-Processor.scala 38:{27,27}]
  wire  _i_T_1 = i + 1'h1; // @[MatrixPRE-Processor.scala 40:16]
  Bitmap bitmap ( // @[MatrixPRE-Processor.scala 17:24]
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
  assign io_compressedBitmap_0_0 = matReg1_0_0; // @[MatrixPRE-Processor.scala 15:25]
  assign io_compressedBitmap_0_1 = matReg1_0_1; // @[MatrixPRE-Processor.scala 15:25]
  assign io_compressedBitmap_1_0 = matReg1_1_0; // @[MatrixPRE-Processor.scala 15:25]
  assign io_compressedBitmap_1_1 = matReg1_1_1; // @[MatrixPRE-Processor.scala 15:25]
  assign bitmap_clock = clock;
  assign bitmap_reset = reset;
  assign bitmap_io_mat1_0_0 = io_mat1_0_0; // @[MatrixPRE-Processor.scala 18:20]
  assign bitmap_io_mat1_0_1 = io_mat1_0_1; // @[MatrixPRE-Processor.scala 18:20]
  assign bitmap_io_mat1_1_0 = io_mat1_1_0; // @[MatrixPRE-Processor.scala 18:20]
  assign bitmap_io_mat1_1_1 = io_mat1_1_1; // @[MatrixPRE-Processor.scala 18:20]
  always @(posedge clock) begin
    if (reset) begin // @[MatrixPRE-Processor.scala 14:26]
      matReg1_0_0 <= 16'h0; // @[MatrixPRE-Processor.scala 14:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 35:69]
      if (_GEN_28 & _GEN_29) begin // @[MatrixPRE-Processor.scala 36:27]
        matReg1_0_0 <= 16'h0; // @[MatrixPRE-Processor.scala 36:27]
      end
    end else if (_GEN_28 & _GEN_29) begin // @[MatrixPRE-Processor.scala 38:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 38:27]
        matReg1_0_0 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 38:27]
      end else begin
        matReg1_0_0 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 14:26]
      matReg1_0_1 <= 16'h0; // @[MatrixPRE-Processor.scala 14:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 35:69]
      if (_GEN_28 & j) begin // @[MatrixPRE-Processor.scala 36:27]
        matReg1_0_1 <= 16'h0; // @[MatrixPRE-Processor.scala 36:27]
      end
    end else if (_GEN_28 & j) begin // @[MatrixPRE-Processor.scala 38:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 38:27]
        matReg1_0_1 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 38:27]
      end else begin
        matReg1_0_1 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 14:26]
      matReg1_1_0 <= 16'h0; // @[MatrixPRE-Processor.scala 14:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 35:69]
      if (i & _GEN_29) begin // @[MatrixPRE-Processor.scala 36:27]
        matReg1_1_0 <= 16'h0; // @[MatrixPRE-Processor.scala 36:27]
      end
    end else if (i & _GEN_29) begin // @[MatrixPRE-Processor.scala 38:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 38:27]
        matReg1_1_0 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 38:27]
      end else begin
        matReg1_1_0 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 14:26]
      matReg1_1_1 <= 16'h0; // @[MatrixPRE-Processor.scala 14:26]
    end else if (~_GEN_1 & _GEN_5 == 16'h1) begin // @[MatrixPRE-Processor.scala 35:69]
      if (i & j) begin // @[MatrixPRE-Processor.scala 36:27]
        matReg1_1_1 <= 16'h0; // @[MatrixPRE-Processor.scala 36:27]
      end
    end else if (i & j) begin // @[MatrixPRE-Processor.scala 38:27]
      if (i & j) begin // @[MatrixPRE-Processor.scala 38:27]
        matReg1_1_1 <= io_mat1_1_1; // @[MatrixPRE-Processor.scala 38:27]
      end else begin
        matReg1_1_1 <= _GEN_16;
      end
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 21:22]
      reg_0 <= 1'h0; // @[MatrixPRE-Processor.scala 21:22]
    end else begin
      reg_0 <= io_mat2_0_0 != 16'h0 | io_mat2_0_1 != 16'h0; // @[MatrixPRE-Processor.scala 23:16]
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 21:22]
      reg_1 <= 1'h0; // @[MatrixPRE-Processor.scala 21:22]
    end else begin
      reg_1 <= io_mat2_1_0 != 16'h0 | io_mat2_1_1 != 16'h0; // @[MatrixPRE-Processor.scala 23:16]
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 28:20]
      i <= 1'h0; // @[MatrixPRE-Processor.scala 28:20]
    end else begin
      i <= _i_T_1;
    end
    if (reset) begin // @[MatrixPRE-Processor.scala 29:20]
      j <= 1'h0; // @[MatrixPRE-Processor.scala 29:20]
    end else if (i) begin // @[MatrixPRE-Processor.scala 42:28]
      j <= j + 1'h1; // @[MatrixPRE-Processor.scala 43:11]
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
  reg [3:0] src_0; // @[Muxes.scala 41:22]
  reg [3:0] src_1; // @[Muxes.scala 41:22]
  reg [3:0] src_2; // @[Muxes.scala 41:22]
  reg [3:0] src_3; // @[Muxes.scala 41:22]
  reg [3:0] dest_0; // @[Muxes.scala 42:23]
  reg [3:0] dest_1; // @[Muxes.scala 42:23]
  reg [3:0] dest_2; // @[Muxes.scala 42:23]
  reg [3:0] dest_3; // @[Muxes.scala 42:23]
  wire  _GEN_132 = ~j[0]; // @[Muxes.scala 50:{26,26}]
  wire [15:0] _GEN_7 = ~j[0] & i[0] ? io_mat1_0_1 : io_mat1_0_0; // @[Muxes.scala 50:{26,26}]
  wire  _GEN_133 = ~i[0]; // @[Muxes.scala 50:{26,26}]
  wire [15:0] _GEN_8 = j[0] & ~i[0] ? io_mat1_1_0 : _GEN_7; // @[Muxes.scala 50:{26,26}]
  wire [15:0] _GEN_9 = j[0] & i[0] ? io_mat1_1_1 : _GEN_8; // @[Muxes.scala 50:{26,26}]
  wire [15:0] _GEN_11 = i[0] ? io_mat2_1 : io_mat2_0; // @[Muxes.scala 50:{50,50}]
  wire [15:0] _GEN_13 = _GEN_132 & i[0] ? io_counterMatrix1_0_1 : io_counterMatrix1_0_0; // @[Muxes.scala 52:{38,38}]
  wire [15:0] _GEN_14 = j[0] & _GEN_133 ? io_counterMatrix1_1_0 : _GEN_13; // @[Muxes.scala 52:{38,38}]
  wire [15:0] _GEN_15 = j[0] & i[0] ? io_counterMatrix1_1_1 : _GEN_14; // @[Muxes.scala 52:{38,38}]
  wire [15:0] _GEN_17 = i[0] ? io_counterMatrix2_1 : io_counterMatrix2_0; // @[Muxes.scala 52:{38,38}]
  wire [15:0] _mux_T_2 = _GEN_17 - 16'h1; // @[Muxes.scala 53:51]
  wire [15:0] _mux_T_6 = _GEN_15 - 16'h1; // @[Muxes.scala 53:85]
  wire [15:0] _mux_T_8 = _mux_T_2 - _mux_T_6; // @[Muxes.scala 53:58]
  wire [3:0] _GEN_24 = 2'h0 == counter[1:0] ? _mux_T_8[3:0] : mux_0; // @[Muxes.scala 40:22 53:{24,24}]
  wire [3:0] _GEN_25 = 2'h1 == counter[1:0] ? _mux_T_8[3:0] : mux_1; // @[Muxes.scala 40:22 53:{24,24}]
  wire [3:0] _GEN_26 = 2'h2 == counter[1:0] ? _mux_T_8[3:0] : mux_2; // @[Muxes.scala 40:22 53:{24,24}]
  wire [3:0] _GEN_27 = 2'h3 == counter[1:0] ? _mux_T_8[3:0] : mux_3; // @[Muxes.scala 40:22 53:{24,24}]
  wire [3:0] _GEN_28 = 2'h0 == counter[1:0] ? _GEN_11[3:0] : src_0; // @[Muxes.scala 41:22 54:{24,24}]
  wire [3:0] _GEN_29 = 2'h1 == counter[1:0] ? _GEN_11[3:0] : src_1; // @[Muxes.scala 41:22 54:{24,24}]
  wire [3:0] _GEN_30 = 2'h2 == counter[1:0] ? _GEN_11[3:0] : src_2; // @[Muxes.scala 41:22 54:{24,24}]
  wire [3:0] _GEN_31 = 2'h3 == counter[1:0] ? _GEN_11[3:0] : src_3; // @[Muxes.scala 41:22 54:{24,24}]
  wire [3:0] _GEN_34 = 2'h0 == counter[1:0] ? _GEN_9[3:0] : dest_0; // @[Muxes.scala 42:23 55:{25,25}]
  wire [3:0] _GEN_35 = 2'h1 == counter[1:0] ? _GEN_9[3:0] : dest_1; // @[Muxes.scala 42:23 55:{25,25}]
  wire [3:0] _GEN_36 = 2'h2 == counter[1:0] ? _GEN_9[3:0] : dest_2; // @[Muxes.scala 42:23 55:{25,25}]
  wire [3:0] _GEN_37 = 2'h3 == counter[1:0] ? _GEN_9[3:0] : dest_3; // @[Muxes.scala 42:23 55:{25,25}]
  wire [15:0] _mux_T_17 = _mux_T_6 - _mux_T_2; // @[Muxes.scala 57:61]
  wire [3:0] _GEN_48 = 2'h0 == counter[1:0] ? _mux_T_17[3:0] : mux_0; // @[Muxes.scala 40:22 57:{24,24}]
  wire [3:0] _GEN_49 = 2'h1 == counter[1:0] ? _mux_T_17[3:0] : mux_1; // @[Muxes.scala 40:22 57:{24,24}]
  wire [3:0] _GEN_50 = 2'h2 == counter[1:0] ? _mux_T_17[3:0] : mux_2; // @[Muxes.scala 40:22 57:{24,24}]
  wire [3:0] _GEN_51 = 2'h3 == counter[1:0] ? _mux_T_17[3:0] : mux_3; // @[Muxes.scala 40:22 57:{24,24}]
  wire [3:0] _GEN_66 = _GEN_15 < _GEN_17 ? _GEN_24 : _GEN_48; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_67 = _GEN_15 < _GEN_17 ? _GEN_25 : _GEN_49; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_68 = _GEN_15 < _GEN_17 ? _GEN_26 : _GEN_50; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_69 = _GEN_15 < _GEN_17 ? _GEN_27 : _GEN_51; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_70 = _GEN_15 < _GEN_17 ? _GEN_28 : _GEN_28; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_71 = _GEN_15 < _GEN_17 ? _GEN_29 : _GEN_29; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_72 = _GEN_15 < _GEN_17 ? _GEN_30 : _GEN_30; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_73 = _GEN_15 < _GEN_17 ? _GEN_31 : _GEN_31; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_74 = _GEN_15 < _GEN_17 ? _GEN_34 : _GEN_34; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_75 = _GEN_15 < _GEN_17 ? _GEN_35 : _GEN_35; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_76 = _GEN_15 < _GEN_17 ? _GEN_36 : _GEN_36; // @[Muxes.scala 52:61]
  wire [3:0] _GEN_77 = _GEN_15 < _GEN_17 ? _GEN_37 : _GEN_37; // @[Muxes.scala 52:61]
  wire  _T_22 = ~jValid; // @[Muxes.scala 62:15]
  wire  _T_23 = j == 32'h1; // @[Muxes.scala 64:22]
  wire  _T_24 = i == 32'h1; // @[Muxes.scala 64:56]
  wire  _T_25 = j == 32'h1 & i == 32'h1; // @[Muxes.scala 64:50]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[Muxes.scala 65:30]
  wire [31:0] _GEN_78 = ~(j == 32'h1 & i == 32'h1) ? _counter_T_1 : counter; // @[Muxes.scala 64:85 65:19 39:26]
  wire [31:0] _GEN_79 = ~jValid ? _GEN_78 : counter; // @[Muxes.scala 62:24 39:26]
  wire [3:0] _GEN_80 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_66 : mux_0; // @[Muxes.scala 40:22 50:60]
  wire [3:0] _GEN_81 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_67 : mux_1; // @[Muxes.scala 40:22 50:60]
  wire [3:0] _GEN_82 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_68 : mux_2; // @[Muxes.scala 40:22 50:60]
  wire [3:0] _GEN_83 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_69 : mux_3; // @[Muxes.scala 40:22 50:60]
  wire [3:0] _GEN_84 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_70 : src_0; // @[Muxes.scala 41:22 50:60]
  wire [3:0] _GEN_85 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_71 : src_1; // @[Muxes.scala 41:22 50:60]
  wire [3:0] _GEN_86 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_72 : src_2; // @[Muxes.scala 41:22 50:60]
  wire [3:0] _GEN_87 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_73 : src_3; // @[Muxes.scala 41:22 50:60]
  wire [3:0] _GEN_88 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_74 : dest_0; // @[Muxes.scala 42:23 50:60]
  wire [3:0] _GEN_89 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_75 : dest_1; // @[Muxes.scala 42:23 50:60]
  wire [3:0] _GEN_90 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_76 : dest_2; // @[Muxes.scala 42:23 50:60]
  wire [3:0] _GEN_91 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_77 : dest_3; // @[Muxes.scala 42:23 50:60]
  wire [31:0] _GEN_92 = _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_79 : counter; // @[Muxes.scala 39:26 50:60]
  wire [31:0] _j_T_1 = j + 32'h1; // @[Muxes.scala 75:16]
  wire [31:0] _i_T_1 = i + 32'h1; // @[Muxes.scala 81:18]
  wire [31:0] _GEN_93 = i < 32'h1 ? _i_T_1 : i; // @[Muxes.scala 80:42 81:13 37:20]
  wire  _GEN_94 = _T_25 | jValid; // @[Muxes.scala 76:83 77:16 36:25]
  assign io_i_mux_bus_0 = mux_0; // @[Muxes.scala 43:18]
  assign io_i_mux_bus_1 = mux_1; // @[Muxes.scala 43:18]
  assign io_i_mux_bus_2 = mux_2; // @[Muxes.scala 43:18]
  assign io_i_mux_bus_3 = mux_3; // @[Muxes.scala 43:18]
  assign io_Source_0 = {{12'd0}, src_0}; // @[Muxes.scala 44:15]
  assign io_Source_1 = {{12'd0}, src_1}; // @[Muxes.scala 44:15]
  assign io_Source_2 = {{12'd0}, src_2}; // @[Muxes.scala 44:15]
  assign io_Source_3 = {{12'd0}, src_3}; // @[Muxes.scala 44:15]
  assign io_End = ~(_T_24 & _T_23); // @[Muxes.scala 99:15]
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
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      if (!(j < 32'h1)) begin // @[Muxes.scala 74:40]
        jValid <= _GEN_94;
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      jValid <= 1'h0; // @[Muxes.scala 89:14]
    end
    if (reset) begin // @[Muxes.scala 37:20]
      i <= 32'h0; // @[Muxes.scala 37:20]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      if (!(j < 32'h1)) begin // @[Muxes.scala 74:40]
        if (!(_T_25)) begin // @[Muxes.scala 76:83]
          i <= _GEN_93;
        end
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      i <= 32'h0; // @[Muxes.scala 87:9]
    end
    if (reset) begin // @[Muxes.scala 38:20]
      j <= 32'h0; // @[Muxes.scala 38:20]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      if (j < 32'h1) begin // @[Muxes.scala 74:40]
        j <= _j_T_1; // @[Muxes.scala 75:11]
      end else if (!(_T_25)) begin // @[Muxes.scala 76:83]
        j <= 32'h0; // @[Muxes.scala 79:11]
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      j <= 32'h0; // @[Muxes.scala 88:9]
    end
    if (reset) begin // @[Muxes.scala 39:26]
      counter <= 32'h0; // @[Muxes.scala 39:26]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      counter <= _GEN_92;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      counter <= 32'h0; // @[Muxes.scala 90:15]
    end else begin
      counter <= _GEN_92;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_0 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      mux_0 <= _GEN_80;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      mux_0 <= 4'h0; // @[Muxes.scala 95:16]
    end else begin
      mux_0 <= _GEN_80;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_1 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      mux_1 <= _GEN_81;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      mux_1 <= 4'h0; // @[Muxes.scala 95:16]
    end else begin
      mux_1 <= _GEN_81;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_2 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      mux_2 <= _GEN_82;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      mux_2 <= 4'h0; // @[Muxes.scala 95:16]
    end else begin
      mux_2 <= _GEN_82;
    end
    if (reset) begin // @[Muxes.scala 40:22]
      mux_3 <= 4'h0; // @[Muxes.scala 40:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      mux_3 <= _GEN_83;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      mux_3 <= 4'h0; // @[Muxes.scala 95:16]
    end else begin
      mux_3 <= _GEN_83;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_0 <= 4'h0; // @[Muxes.scala 41:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      src_0 <= _GEN_84;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      src_0 <= 4'h0; // @[Muxes.scala 93:16]
    end else begin
      src_0 <= _GEN_84;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_1 <= 4'h0; // @[Muxes.scala 41:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      src_1 <= _GEN_85;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      src_1 <= 4'h0; // @[Muxes.scala 93:16]
    end else begin
      src_1 <= _GEN_85;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_2 <= 4'h0; // @[Muxes.scala 41:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      src_2 <= _GEN_86;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      src_2 <= 4'h0; // @[Muxes.scala 93:16]
    end else begin
      src_2 <= _GEN_86;
    end
    if (reset) begin // @[Muxes.scala 41:22]
      src_3 <= 4'h0; // @[Muxes.scala 41:22]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      src_3 <= _GEN_87;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      src_3 <= 4'h0; // @[Muxes.scala 93:16]
    end else begin
      src_3 <= _GEN_87;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_0 <= 4'h0; // @[Muxes.scala 42:23]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      dest_0 <= _GEN_88;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      dest_0 <= 4'h0; // @[Muxes.scala 94:17]
    end else begin
      dest_0 <= _GEN_88;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_1 <= 4'h0; // @[Muxes.scala 42:23]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      dest_1 <= _GEN_89;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      dest_1 <= 4'h0; // @[Muxes.scala 94:17]
    end else begin
      dest_1 <= _GEN_89;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_2 <= 4'h0; // @[Muxes.scala 42:23]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      dest_2 <= _GEN_90;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      dest_2 <= 4'h0; // @[Muxes.scala 94:17]
    end else begin
      dest_2 <= _GEN_90;
    end
    if (reset) begin // @[Muxes.scala 42:23]
      dest_3 <= 4'h0; // @[Muxes.scala 42:23]
    end else if (_T_22) begin // @[Muxes.scala 72:29]
      dest_3 <= _GEN_91;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 85:64]
      dest_3 <= 4'h0; // @[Muxes.scala 94:17]
    end else begin
      dest_3 <= _GEN_91;
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
  src_0 = _RAND_15[3:0];
  _RAND_16 = {1{`RANDOM}};
  src_1 = _RAND_16[3:0];
  _RAND_17 = {1{`RANDOM}};
  src_2 = _RAND_17[3:0];
  _RAND_18 = {1{`RANDOM}};
  src_3 = _RAND_18[3:0];
  _RAND_19 = {1{`RANDOM}};
  dest_0 = _RAND_19[3:0];
  _RAND_20 = {1{`RANDOM}};
  dest_1 = _RAND_20[3:0];
  _RAND_21 = {1{`RANDOM}};
  dest_2 = _RAND_21[3:0];
  _RAND_22 = {1{`RANDOM}};
  dest_3 = _RAND_22[3:0];
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
  output [15:0] io_counterMatrix2_bits_1
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
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_0_1; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1_1; // @[SourceDestination.scala 15:40]
  reg  matricesAreEqual; // @[SourceDestination.scala 16:31]
  reg [15:0] counterRegs1_0_0; // @[SourceDestination.scala 29:31]
  reg [15:0] counterRegs1_0_1; // @[SourceDestination.scala 29:31]
  reg [15:0] counterRegs1_1_0; // @[SourceDestination.scala 29:31]
  reg [15:0] counterRegs1_1_1; // @[SourceDestination.scala 29:31]
  reg [15:0] counterRegs2_0; // @[SourceDestination.scala 30:31]
  reg [15:0] counterRegs2_1; // @[SourceDestination.scala 30:31]
  reg [31:0] i; // @[SourceDestination.scala 32:20]
  reg [31:0] j; // @[SourceDestination.scala 33:20]
  reg  jValid; // @[SourceDestination.scala 36:21]
  reg  kvalid; // @[SourceDestination.scala 38:21]
  reg [31:0] k; // @[SourceDestination.scala 39:20]
  reg [31:0] counter1; // @[SourceDestination.scala 41:27]
  reg [31:0] counter2; // @[SourceDestination.scala 42:27]
  wire  _GEN_77 = ~i[0]; // @[SourceDestination.scala 45:{38,38}]
  wire [15:0] _GEN_5 = ~i[0] & j[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[SourceDestination.scala 45:{38,38}]
  wire  _GEN_78 = ~j[0]; // @[SourceDestination.scala 45:{38,38}]
  wire [15:0] _GEN_6 = i[0] & ~j[0] ? io_Stationary_matrix_1_0 : _GEN_5; // @[SourceDestination.scala 45:{38,38}]
  wire [15:0] _GEN_7 = i[0] & j[0] ? io_Stationary_matrix_1_1 : _GEN_6; // @[SourceDestination.scala 45:{38,38}]
  wire [15:0] _GEN_8 = _GEN_77 & _GEN_78 ? counter1[15:0] : counterRegs1_0_0; // @[SourceDestination.scala 47:{28,28} 29:31]
  wire [15:0] _GEN_9 = _GEN_77 & j[0] ? counter1[15:0] : counterRegs1_0_1; // @[SourceDestination.scala 47:{28,28} 29:31]
  wire [15:0] _GEN_10 = i[0] & _GEN_78 ? counter1[15:0] : counterRegs1_1_0; // @[SourceDestination.scala 47:{28,28} 29:31]
  wire [15:0] _GEN_11 = i[0] & j[0] ? counter1[15:0] : counterRegs1_1_1; // @[SourceDestination.scala 47:{28,28} 29:31]
  wire  _T_10 = j == 32'h1; // @[SourceDestination.scala 48:20]
  wire  _T_11 = i == 32'h1; // @[SourceDestination.scala 48:54]
  wire  _T_12 = j == 32'h1 & i == 32'h1; // @[SourceDestination.scala 48:48]
  wire  _T_13 = ~(j == 32'h1 & i == 32'h1); // @[SourceDestination.scala 48:15]
  wire [31:0] _counter1_T_1 = counter1 + 32'h1; // @[SourceDestination.scala 49:32]
  wire [31:0] _GEN_12 = ~(j == 32'h1 & i == 32'h1) ? _counter1_T_1 : counter1; // @[SourceDestination.scala 48:83 49:20 41:27]
  wire [15:0] _GEN_13 = _GEN_77 & _GEN_78 ? 16'h1 : counterRegs1_0_0; // @[SourceDestination.scala 52:{28,28} 29:31]
  wire [15:0] _GEN_14 = _GEN_77 & j[0] ? 16'h1 : counterRegs1_0_1; // @[SourceDestination.scala 52:{28,28} 29:31]
  wire [15:0] _GEN_15 = i[0] & _GEN_78 ? 16'h1 : counterRegs1_1_0; // @[SourceDestination.scala 52:{28,28} 29:31]
  wire [15:0] _GEN_16 = i[0] & j[0] ? 16'h1 : counterRegs1_1_1; // @[SourceDestination.scala 52:{28,28} 29:31]
  wire [15:0] _GEN_17 = counter1 < 32'h5 ? _GEN_8 : _GEN_13; // @[SourceDestination.scala 46:48]
  wire [15:0] _GEN_18 = counter1 < 32'h5 ? _GEN_9 : _GEN_14; // @[SourceDestination.scala 46:48]
  wire [15:0] _GEN_19 = counter1 < 32'h5 ? _GEN_10 : _GEN_15; // @[SourceDestination.scala 46:48]
  wire [15:0] _GEN_20 = counter1 < 32'h5 ? _GEN_11 : _GEN_16; // @[SourceDestination.scala 46:48]
  wire [31:0] _GEN_21 = counter1 < 32'h5 ? _GEN_12 : 32'h2; // @[SourceDestination.scala 46:48 53:18]
  wire [15:0] _GEN_22 = _GEN_77 & _GEN_78 ? 16'h0 : counterRegs1_0_0; // @[SourceDestination.scala 56:{26,26} 29:31]
  wire [15:0] _GEN_23 = _GEN_77 & j[0] ? 16'h0 : counterRegs1_0_1; // @[SourceDestination.scala 56:{26,26} 29:31]
  wire [15:0] _GEN_24 = i[0] & _GEN_78 ? 16'h0 : counterRegs1_1_0; // @[SourceDestination.scala 56:{26,26} 29:31]
  wire [15:0] _GEN_25 = i[0] & j[0] ? 16'h0 : counterRegs1_1_1; // @[SourceDestination.scala 56:{26,26} 29:31]
  wire [15:0] _GEN_26 = _GEN_7 != 16'h0 ? _GEN_17 : _GEN_22; // @[SourceDestination.scala 45:47]
  wire [15:0] _GEN_27 = _GEN_7 != 16'h0 ? _GEN_18 : _GEN_23; // @[SourceDestination.scala 45:47]
  wire [15:0] _GEN_28 = _GEN_7 != 16'h0 ? _GEN_19 : _GEN_24; // @[SourceDestination.scala 45:47]
  wire [15:0] _GEN_29 = _GEN_7 != 16'h0 ? _GEN_20 : _GEN_25; // @[SourceDestination.scala 45:47]
  wire [31:0] _GEN_30 = _GEN_7 != 16'h0 ? _GEN_21 : counter1; // @[SourceDestination.scala 41:27 45:47]
  wire [15:0] _GEN_32 = k[0] ? io_Streaming_matrix_1 : io_Streaming_matrix_0; // @[SourceDestination.scala 59:{34,34}]
  wire [15:0] _GEN_33 = ~k[0] ? counter1[15:0] : counterRegs2_0; // @[SourceDestination.scala 61:{25,25} 30:31]
  wire [15:0] _GEN_34 = k[0] ? counter1[15:0] : counterRegs2_1; // @[SourceDestination.scala 61:{25,25} 30:31]
  wire [31:0] _counter2_T_1 = counter2 + 32'h1; // @[SourceDestination.scala 63:32]
  wire [31:0] _GEN_35 = _T_13 ? _counter2_T_1 : counter2; // @[SourceDestination.scala 62:83 63:20 42:27]
  wire [15:0] _GEN_36 = counter2 < 32'h5 ? _GEN_33 : counterRegs2_0; // @[SourceDestination.scala 30:31 60:48]
  wire [15:0] _GEN_37 = counter2 < 32'h5 ? _GEN_34 : counterRegs2_1; // @[SourceDestination.scala 30:31 60:48]
  wire [31:0] _GEN_38 = counter2 < 32'h5 ? _GEN_35 : counter2; // @[SourceDestination.scala 42:27 60:48]
  wire [15:0] _GEN_39 = _GEN_32 != 16'h0 ? _GEN_36 : counterRegs2_0; // @[SourceDestination.scala 30:31 59:43]
  wire [15:0] _GEN_40 = _GEN_32 != 16'h0 ? _GEN_37 : counterRegs2_1; // @[SourceDestination.scala 30:31 59:43]
  wire [31:0] _GEN_41 = _GEN_32 != 16'h0 ? _GEN_38 : counter2; // @[SourceDestination.scala 42:27 59:43]
  wire [31:0] _k_T_1 = k + 32'h1; // @[SourceDestination.scala 79:14]
  wire  _GEN_42 = ~kvalid ? 1'h0 : kvalid; // @[SourceDestination.scala 77:47 78:14 38:21]
  wire [31:0] _GEN_43 = ~kvalid ? _k_T_1 : k; // @[SourceDestination.scala 39:20 77:47 79:9]
  wire [31:0] _GEN_45 = k == 32'h1 ? k : _GEN_43; // @[SourceDestination.scala 39:20 75:39]
  wire [31:0] _j_T_1 = j + 32'h1; // @[SourceDestination.scala 84:16]
  wire [31:0] _i_T_1 = i + 32'h1; // @[SourceDestination.scala 90:18]
  wire [31:0] _GEN_46 = i < 32'h1 ? _i_T_1 : i; // @[SourceDestination.scala 89:42 90:13 32:20]
  wire  _GEN_51 = j < 32'h1 ? 1'h0 : _T_12; // @[SourceDestination.scala 37:12 83:40]
  assign io_counterMatrix1_valid = _T_10 & _T_11; // @[SourceDestination.scala 109:42]
  assign io_counterMatrix1_bits_0_0 = counterRegs1_0_0; // @[SourceDestination.scala 117:28]
  assign io_counterMatrix1_bits_0_1 = counterRegs1_0_1; // @[SourceDestination.scala 117:28]
  assign io_counterMatrix1_bits_1_0 = counterRegs1_1_0; // @[SourceDestination.scala 117:28]
  assign io_counterMatrix1_bits_1_1 = counterRegs1_1_1; // @[SourceDestination.scala 117:28]
  assign io_counterMatrix2_valid = _T_10 & _T_11; // @[SourceDestination.scala 109:42]
  assign io_counterMatrix2_bits_0 = counterRegs2_0; // @[SourceDestination.scala 118:28]
  assign io_counterMatrix2_bits_1 = counterRegs2_1; // @[SourceDestination.scala 118:28]
  always @(posedge clock) begin
    prevStationary_matrix_0_0 <= io_Stationary_matrix_0_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_0_1 <= io_Stationary_matrix_0_1; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1_0 <= io_Stationary_matrix_1_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1_1 <= io_Stationary_matrix_1_1; // @[SourceDestination.scala 15:40]
    if (io_Stationary_matrix_1_1 != prevStationary_matrix_1_1) begin // @[SourceDestination.scala 21:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 22:28]
    end else if (io_Stationary_matrix_1_0 != prevStationary_matrix_1_0) begin // @[SourceDestination.scala 21:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 22:28]
    end else if (io_Stationary_matrix_0_1 != prevStationary_matrix_0_1) begin // @[SourceDestination.scala 21:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 22:28]
    end else if (io_Stationary_matrix_0_0 != prevStationary_matrix_0_0) begin // @[SourceDestination.scala 21:74]
      matricesAreEqual <= 1'h0; // @[SourceDestination.scala 22:28]
    end else begin
      matricesAreEqual <= 1'h1; // @[SourceDestination.scala 17:22]
    end
    if (reset) begin // @[SourceDestination.scala 29:31]
      counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 29:31]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counterRegs1_0_0 <= _GEN_26;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 101:30]
    end else begin
      counterRegs1_0_0 <= _GEN_26;
    end
    if (reset) begin // @[SourceDestination.scala 29:31]
      counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 29:31]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counterRegs1_0_1 <= _GEN_27;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 101:30]
    end else begin
      counterRegs1_0_1 <= _GEN_27;
    end
    if (reset) begin // @[SourceDestination.scala 29:31]
      counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 29:31]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counterRegs1_1_0 <= _GEN_28;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 101:30]
    end else begin
      counterRegs1_1_0 <= _GEN_28;
    end
    if (reset) begin // @[SourceDestination.scala 29:31]
      counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 29:31]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counterRegs1_1_1 <= _GEN_29;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 101:30]
    end else begin
      counterRegs1_1_1 <= _GEN_29;
    end
    if (reset) begin // @[SourceDestination.scala 30:31]
      counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 30:31]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counterRegs2_0 <= _GEN_39;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 103:25]
    end else begin
      counterRegs2_0 <= _GEN_39;
    end
    if (reset) begin // @[SourceDestination.scala 30:31]
      counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 30:31]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counterRegs2_1 <= _GEN_40;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 103:25]
    end else begin
      counterRegs2_1 <= _GEN_40;
    end
    if (reset) begin // @[SourceDestination.scala 32:20]
      i <= 32'h0; // @[SourceDestination.scala 32:20]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      if (!(j < 32'h1)) begin // @[SourceDestination.scala 83:40]
        if (!(_T_12)) begin // @[SourceDestination.scala 85:83]
          i <= _GEN_46;
        end
      end
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      i <= 32'h0; // @[SourceDestination.scala 94:9]
    end
    if (reset) begin // @[SourceDestination.scala 33:20]
      j <= 32'h0; // @[SourceDestination.scala 33:20]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      if (j < 32'h1) begin // @[SourceDestination.scala 83:40]
        j <= _j_T_1; // @[SourceDestination.scala 84:11]
      end else if (!(_T_12)) begin // @[SourceDestination.scala 85:83]
        j <= 32'h0; // @[SourceDestination.scala 88:11]
      end
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      j <= 32'h0; // @[SourceDestination.scala 95:9]
    end
    jValid <= ~jValid & _GEN_51; // @[SourceDestination.scala 37:12 82:26]
    kvalid <= k == 32'h1 | _GEN_42; // @[SourceDestination.scala 75:39 76:16]
    if (reset) begin // @[SourceDestination.scala 39:20]
      k <= 32'h0; // @[SourceDestination.scala 39:20]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      k <= _GEN_45;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      k <= 32'h0; // @[SourceDestination.scala 96:9]
    end else begin
      k <= _GEN_45;
    end
    if (reset) begin // @[SourceDestination.scala 41:27]
      counter1 <= 32'h1; // @[SourceDestination.scala 41:27]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counter1 <= _GEN_30;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counter1 <= 32'h1; // @[SourceDestination.scala 97:16]
    end else begin
      counter1 <= _GEN_30;
    end
    if (reset) begin // @[SourceDestination.scala 42:27]
      counter2 <= 32'h1; // @[SourceDestination.scala 42:27]
    end else if (~jValid) begin // @[SourceDestination.scala 82:26]
      counter2 <= _GEN_41;
    end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 93:64]
      counter2 <= 32'h1; // @[SourceDestination.scala 98:16]
    end else begin
      counter2 <= _GEN_41;
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
  kvalid = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  k = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  counter1 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  counter2 = _RAND_17[31:0];
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
  output        io_PF_Valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  myMuxes_clock; // @[PathFinder.scala 22:23]
  wire  myMuxes_reset; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_mat1_0_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_mat1_0_1; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_mat1_1_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_mat1_1_1; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_mat2_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_mat2_1; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_1; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_1; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_counterMatrix2_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_counterMatrix2_1; // @[PathFinder.scala 22:23]
  wire [3:0] myMuxes_io_i_mux_bus_0; // @[PathFinder.scala 22:23]
  wire [3:0] myMuxes_io_i_mux_bus_1; // @[PathFinder.scala 22:23]
  wire [3:0] myMuxes_io_i_mux_bus_2; // @[PathFinder.scala 22:23]
  wire [3:0] myMuxes_io_i_mux_bus_3; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_Source_0; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_Source_1; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_Source_2; // @[PathFinder.scala 22:23]
  wire [15:0] myMuxes_io_Source_3; // @[PathFinder.scala 22:23]
  wire  myMuxes_io_End; // @[PathFinder.scala 22:23]
  wire  myCounter_clock; // @[PathFinder.scala 28:25]
  wire  myCounter_reset; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_0; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_1; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_0; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_1; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_Streaming_matrix_0; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_Streaming_matrix_1; // @[PathFinder.scala 28:25]
  wire  myCounter_io_counterMatrix1_valid; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_0; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_1; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_0; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_1; // @[PathFinder.scala 28:25]
  wire  myCounter_io_counterMatrix2_valid; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_0; // @[PathFinder.scala 28:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_1; // @[PathFinder.scala 28:25]
  reg [31:0] delay; // @[PathFinder.scala 21:22]
  wire [31:0] _delay_T_1 = delay + 32'h1; // @[PathFinder.scala 25:20]
  Muxes myMuxes ( // @[PathFinder.scala 22:23]
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
    .io_End(myMuxes_io_End)
  );
  SourceDestination myCounter ( // @[PathFinder.scala 28:25]
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
    .io_counterMatrix2_bits_1(myCounter_io_counterMatrix2_bits_1)
  );
  assign io_i_mux_bus_0 = myMuxes_io_i_mux_bus_0; // @[PathFinder.scala 54:16]
  assign io_i_mux_bus_1 = myMuxes_io_i_mux_bus_1; // @[PathFinder.scala 54:16]
  assign io_i_mux_bus_2 = myMuxes_io_i_mux_bus_2; // @[PathFinder.scala 54:16]
  assign io_i_mux_bus_3 = myMuxes_io_i_mux_bus_3; // @[PathFinder.scala 54:16]
  assign io_Source_0 = myMuxes_io_Source_0; // @[PathFinder.scala 55:13]
  assign io_Source_1 = myMuxes_io_Source_1; // @[PathFinder.scala 55:13]
  assign io_Source_2 = myMuxes_io_Source_2; // @[PathFinder.scala 55:13]
  assign io_Source_3 = myMuxes_io_Source_3; // @[PathFinder.scala 55:13]
  assign io_PF_Valid = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid &
    myMuxes_io_End; // @[PathFinder.scala 32:130 41:17 51:17]
  assign myMuxes_clock = clock;
  assign myMuxes_reset = reset;
  assign myMuxes_io_mat1_0_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_0_0 : 16'h0; // @[PathFinder.scala 32:130 37:21 46:21]
  assign myMuxes_io_mat1_0_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_0_1 : 16'h0; // @[PathFinder.scala 32:130 37:21 46:21]
  assign myMuxes_io_mat1_1_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_1_0 : 16'h0; // @[PathFinder.scala 32:130 37:21 46:21]
  assign myMuxes_io_mat1_1_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Stationary_matrix_1_1 : 16'h0; // @[PathFinder.scala 32:130 37:21 46:21]
  assign myMuxes_io_mat2_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Streaming_matrix_0 : 16'h0; // @[PathFinder.scala 32:130 38:21 47:21]
  assign myMuxes_io_mat2_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid & myCounter_io_counterMatrix2_valid ?
    io_Streaming_matrix_1 : 16'h0; // @[PathFinder.scala 32:130 38:21 47:21]
  assign myMuxes_io_counterMatrix1_0_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_0_0 : 16'h0; // @[PathFinder.scala 32:130 39:31 48:31]
  assign myMuxes_io_counterMatrix1_0_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_0_1 : 16'h0; // @[PathFinder.scala 32:130 39:31 48:31]
  assign myMuxes_io_counterMatrix1_1_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_1_0 : 16'h0; // @[PathFinder.scala 32:130 39:31 48:31]
  assign myMuxes_io_counterMatrix1_1_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix1_bits_1_1 : 16'h0; // @[PathFinder.scala 32:130 39:31 48:31]
  assign myMuxes_io_counterMatrix2_0 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix2_bits_0 : 16'h0; // @[PathFinder.scala 32:130 40:31 49:31]
  assign myMuxes_io_counterMatrix2_1 = delay >= 32'h4 & myCounter_io_counterMatrix1_valid &
    myCounter_io_counterMatrix2_valid ? myCounter_io_counterMatrix2_bits_1 : 16'h0; // @[PathFinder.scala 32:130 40:31 49:31]
  assign myCounter_clock = clock;
  assign myCounter_reset = reset;
  assign myCounter_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[PathFinder.scala 29:34]
  assign myCounter_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[PathFinder.scala 29:34]
  assign myCounter_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[PathFinder.scala 29:34]
  assign myCounter_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[PathFinder.scala 29:34]
  assign myCounter_io_Streaming_matrix_0 = io_Streaming_matrix_0; // @[PathFinder.scala 30:33]
  assign myCounter_io_Streaming_matrix_1 = io_Streaming_matrix_1; // @[PathFinder.scala 30:33]
  always @(posedge clock) begin
    if (reset) begin // @[PathFinder.scala 21:22]
      delay <= 32'h0; // @[PathFinder.scala 21:22]
    end else if (delay < 32'h4) begin // @[PathFinder.scala 24:51]
      delay <= _delay_T_1; // @[PathFinder.scala 25:11]
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
  input  [31:0] io_muxes_0,
  input  [31:0] io_muxes_1,
  input  [31:0] io_muxes_2,
  input  [31:0] io_muxes_3,
  output [31:0] io_Osrc_0,
  output [31:0] io_Osrc_1,
  output [31:0] io_Osrc_2,
  output [31:0] io_Osrc_3,
  output [31:0] io_Omuxes_0_0,
  output [31:0] io_Omuxes_0_1,
  output [31:0] io_Omuxes_0_2,
  output [31:0] io_Omuxes_0_3,
  output [31:0] io_Omuxes_1_0,
  output [31:0] io_Omuxes_1_1,
  output [31:0] io_Omuxes_1_2,
  output [31:0] io_Omuxes_2_0,
  output [31:0] io_Omuxes_2_1,
  output [31:0] io_Omuxes_3_0
);
  wire  _T = io_src_0 != io_src_1; // @[MuxesWrapper.scala 24:25]
  wire [31:0] _GEN_108 = {{31'd0}, io_src_0 != io_src_1}; // @[MuxesWrapper.scala 24:39]
  wire [31:0] _GEN_109 = {{31'd0}, _GEN_108 != io_src_2}; // @[MuxesWrapper.scala 24:53]
  wire [31:0] _GEN_0 = _GEN_109 != io_src_3 ? io_src_0 : 32'h0; // @[MuxesWrapper.scala 24:67 25:17]
  wire [31:0] _GEN_1 = _GEN_109 != io_src_3 ? io_src_1 : 32'h0; // @[MuxesWrapper.scala 24:67 25:17]
  wire [31:0] _GEN_2 = _GEN_109 != io_src_3 ? io_src_2 : 32'h0; // @[MuxesWrapper.scala 24:67 25:17]
  wire [31:0] _GEN_3 = _GEN_109 != io_src_3 ? io_src_3 : 32'h0; // @[MuxesWrapper.scala 24:67 25:17]
  wire [31:0] _GEN_4 = _GEN_109 != io_src_3 ? io_muxes_0 : 32'h0; // @[MuxesWrapper.scala 24:67 26:23]
  wire [31:0] _GEN_5 = _GEN_109 != io_src_3 ? io_muxes_1 : 32'h0; // @[MuxesWrapper.scala 24:67 27:23]
  wire [31:0] _GEN_6 = _GEN_109 != io_src_3 ? io_muxes_2 : 32'h0; // @[MuxesWrapper.scala 24:67 28:23]
  wire [31:0] _GEN_7 = _GEN_109 != io_src_3 ? io_muxes_3 : 32'h0; // @[MuxesWrapper.scala 24:67 29:23]
  wire  _T_4 = io_src_1 != io_src_2; // @[MuxesWrapper.scala 31:56]
  wire  _T_6 = io_src_2 == io_src_3; // @[MuxesWrapper.scala 31:85]
  wire [31:0] _GEN_8 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? 32'h0 : _GEN_3; // @[MuxesWrapper.scala 31:100 32:20]
  wire [31:0] _GEN_9 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_src_2 : _GEN_2; // @[MuxesWrapper.scala 31:100 33:20]
  wire [31:0] _GEN_10 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_src_1 : _GEN_1; // @[MuxesWrapper.scala 31:100 34:20]
  wire [31:0] _GEN_11 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_src_0 : _GEN_0; // @[MuxesWrapper.scala 31:100 35:20]
  wire [31:0] _GEN_12 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_muxes_0 : _GEN_4; // @[MuxesWrapper.scala 31:100 36:23]
  wire [31:0] _GEN_13 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_muxes_1 : _GEN_5; // @[MuxesWrapper.scala 31:100 37:23]
  wire [31:0] _GEN_14 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_muxes_2 : _GEN_6; // @[MuxesWrapper.scala 31:100 38:23]
  wire [31:0] _GEN_16 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? 32'h0 : _GEN_7; // @[MuxesWrapper.scala 31:100 40:23]
  wire  _T_8 = io_src_0 == io_src_1; // @[MuxesWrapper.scala 44:30]
  wire  _T_10 = io_src_0 == io_src_1 & _T_4; // @[MuxesWrapper.scala 44:45]
  wire [31:0] _GEN_17 = io_src_0 == io_src_1 & _T_4 & _T_6 ? 32'h0 : _GEN_9; // @[MuxesWrapper.scala 44:104 45:20]
  wire [31:0] _GEN_18 = io_src_0 == io_src_1 & _T_4 & _T_6 ? io_src_0 : _GEN_11; // @[MuxesWrapper.scala 44:104 46:20]
  wire [31:0] _GEN_19 = io_src_0 == io_src_1 & _T_4 & _T_6 ? io_src_2 : _GEN_10; // @[MuxesWrapper.scala 44:104 47:20]
  wire [31:0] _GEN_20 = io_src_0 == io_src_1 & _T_4 & _T_6 ? 32'h0 : _GEN_8; // @[MuxesWrapper.scala 44:104 48:20]
  wire [31:0] _GEN_21 = io_src_0 == io_src_1 & _T_4 & _T_6 ? io_muxes_0 : _GEN_12; // @[MuxesWrapper.scala 44:104 49:23]
  wire [31:0] _GEN_22 = io_src_0 == io_src_1 & _T_4 & _T_6 ? io_muxes_1 : 32'h0; // @[MuxesWrapper.scala 44:104 50:23]
  wire [31:0] _GEN_23 = io_src_0 == io_src_1 & _T_4 & _T_6 ? io_muxes_2 : _GEN_13; // @[MuxesWrapper.scala 44:104 51:23]
  wire [31:0] _GEN_24 = io_src_0 == io_src_1 & _T_4 & _T_6 ? io_muxes_3 : 32'h0; // @[MuxesWrapper.scala 44:104 52:23]
  wire  _T_16 = io_src_2 != io_src_3; // @[MuxesWrapper.scala 55:85]
  wire [31:0] _GEN_25 = _T_10 & io_src_2 != io_src_3 ? 32'h0 : _GEN_20; // @[MuxesWrapper.scala 55:100 56:20]
  wire [31:0] _GEN_26 = _T_10 & io_src_2 != io_src_3 ? io_src_3 : _GEN_17; // @[MuxesWrapper.scala 55:100 57:20]
  wire [31:0] _GEN_27 = _T_10 & io_src_2 != io_src_3 ? io_src_2 : _GEN_19; // @[MuxesWrapper.scala 55:100 58:20]
  wire [31:0] _GEN_28 = _T_10 & io_src_2 != io_src_3 ? io_src_0 : _GEN_18; // @[MuxesWrapper.scala 55:100 59:20]
  wire [31:0] _GEN_29 = _T_10 & io_src_2 != io_src_3 ? io_muxes_0 : _GEN_21; // @[MuxesWrapper.scala 55:100 60:23]
  wire [31:0] _GEN_30 = _T_10 & io_src_2 != io_src_3 ? io_muxes_1 : _GEN_22; // @[MuxesWrapper.scala 55:100 61:23]
  wire [31:0] _GEN_31 = _T_10 & io_src_2 != io_src_3 ? io_muxes_2 : _GEN_23; // @[MuxesWrapper.scala 55:100 62:23]
  wire [31:0] _GEN_32 = _T_10 & io_src_2 != io_src_3 ? io_muxes_3 : _GEN_14; // @[MuxesWrapper.scala 55:100 63:23]
  wire [31:0] _GEN_33 = _T_10 & io_src_2 != io_src_3 ? 32'h0 : _GEN_16; // @[MuxesWrapper.scala 55:100 64:23]
  wire  _T_19 = io_src_1 == io_src_2; // @[MuxesWrapper.scala 75:60]
  wire  _T_20 = _T & io_src_1 == io_src_2; // @[MuxesWrapper.scala 75:45]
  wire [31:0] _GEN_34 = _T & io_src_1 == io_src_2 & _T_16 ? 32'h0 : _GEN_26; // @[MuxesWrapper.scala 75:104 76:20]
  wire [31:0] _GEN_35 = _T & io_src_1 == io_src_2 & _T_16 ? io_src_3 : _GEN_25; // @[MuxesWrapper.scala 75:104 77:20]
  wire [31:0] _GEN_36 = _T & io_src_1 == io_src_2 & _T_16 ? io_src_1 : _GEN_27; // @[MuxesWrapper.scala 75:104 78:20]
  wire [31:0] _GEN_37 = _T & io_src_1 == io_src_2 & _T_16 ? io_src_0 : _GEN_28; // @[MuxesWrapper.scala 75:104 79:20]
  wire [31:0] _GEN_38 = _T & io_src_1 == io_src_2 & _T_16 ? io_muxes_0 : _GEN_29; // @[MuxesWrapper.scala 75:104 80:23]
  wire [31:0] _GEN_39 = _T & io_src_1 == io_src_2 & _T_16 ? io_muxes_1 : _GEN_31; // @[MuxesWrapper.scala 75:104 81:23]
  wire [31:0] _GEN_40 = _T & io_src_1 == io_src_2 & _T_16 ? io_muxes_2 : _GEN_24; // @[MuxesWrapper.scala 75:104 82:23]
  wire [31:0] _GEN_41 = _T & io_src_1 == io_src_2 & _T_16 ? 32'h0 : _GEN_32; // @[MuxesWrapper.scala 75:104 83:23]
  wire [31:0] _GEN_42 = _T & io_src_1 == io_src_2 & _T_16 ? io_muxes_3 : _GEN_33; // @[MuxesWrapper.scala 75:104 84:23]
  wire [31:0] _GEN_43 = _T_20 & _T_6 ? 32'h0 : _GEN_34; // @[MuxesWrapper.scala 94:100 95:20]
  wire [31:0] _GEN_44 = _T_20 & _T_6 ? 32'h0 : _GEN_35; // @[MuxesWrapper.scala 94:100 96:20]
  wire [31:0] _GEN_45 = _T_20 & _T_6 ? io_src_1 : _GEN_36; // @[MuxesWrapper.scala 94:100 97:20]
  wire [31:0] _GEN_46 = _T_20 & _T_6 ? io_src_0 : _GEN_37; // @[MuxesWrapper.scala 94:100 98:20]
  wire [31:0] _GEN_47 = _T_20 & _T_6 ? io_muxes_0 : _GEN_38; // @[MuxesWrapper.scala 94:100 99:23]
  wire [31:0] _GEN_48 = _T_20 & _T_6 ? io_muxes_1 : _GEN_39; // @[MuxesWrapper.scala 94:100 100:23]
  wire [31:0] _GEN_51 = _T_20 & _T_6 ? 32'h0 : _GEN_41; // @[MuxesWrapper.scala 94:100 103:23]
  wire [31:0] _GEN_52 = _T_20 & _T_6 ? 32'h0 : _GEN_42; // @[MuxesWrapper.scala 94:100 104:23]
  wire  _T_30 = _T_8 & _T_19; // @[MuxesWrapper.scala 114:41]
  wire [31:0] _GEN_53 = _T_8 & _T_19 & _T_16 ? 32'h0 : _GEN_43; // @[MuxesWrapper.scala 114:100 115:20]
  wire [31:0] _GEN_54 = _T_8 & _T_19 & _T_16 ? io_src_3 : _GEN_44; // @[MuxesWrapper.scala 114:100 116:20]
  wire [31:0] _GEN_55 = _T_8 & _T_19 & _T_16 ? 32'h0 : _GEN_45; // @[MuxesWrapper.scala 114:100 117:20]
  wire [31:0] _GEN_56 = _T_8 & _T_19 & _T_16 ? io_src_0 : _GEN_46; // @[MuxesWrapper.scala 114:100 118:20]
  wire [31:0] _GEN_57 = _T_8 & _T_19 & _T_16 ? io_muxes_0 : _GEN_47; // @[MuxesWrapper.scala 114:100 119:23]
  wire [31:0] _GEN_58 = _T_8 & _T_19 & _T_16 ? io_muxes_1 : _GEN_30; // @[MuxesWrapper.scala 114:100 120:23]
  wire [31:0] _GEN_59 = _T_8 & _T_19 & _T_16 ? io_muxes_2 : 32'h0; // @[MuxesWrapper.scala 114:100 121:23]
  wire [31:0] _GEN_60 = _T_8 & _T_19 & _T_16 ? 32'h0 : _GEN_48; // @[MuxesWrapper.scala 114:100 122:23]
  wire [31:0] _GEN_61 = _T_8 & _T_19 & _T_16 ? 32'h0 : _GEN_51; // @[MuxesWrapper.scala 114:100 123:23]
  wire [31:0] _GEN_62 = _T_8 & _T_19 & _T_16 ? io_muxes_3 : _GEN_52; // @[MuxesWrapper.scala 114:100 124:23]
  assign io_Osrc_0 = _T_30 & _T_6 ? io_src_0 : _GEN_56; // @[MuxesWrapper.scala 136:100 140:20]
  assign io_Osrc_1 = _T_30 & _T_6 ? 32'h0 : _GEN_55; // @[MuxesWrapper.scala 136:100 139:20]
  assign io_Osrc_2 = _T_30 & _T_6 ? 32'h0 : _GEN_53; // @[MuxesWrapper.scala 136:100 137:20]
  assign io_Osrc_3 = _T_30 & _T_6 ? 32'h0 : _GEN_54; // @[MuxesWrapper.scala 136:100 138:20]
  assign io_Omuxes_0_0 = _T_30 & _T_6 ? io_muxes_0 : _GEN_57; // @[MuxesWrapper.scala 136:100 141:23]
  assign io_Omuxes_0_1 = _T_30 & _T_6 ? io_muxes_1 : _GEN_58; // @[MuxesWrapper.scala 136:100 142:23]
  assign io_Omuxes_0_2 = _T_30 & _T_6 ? io_muxes_2 : _GEN_59; // @[MuxesWrapper.scala 136:100 143:23]
  assign io_Omuxes_0_3 = _T_30 & _T_6 ? io_muxes_3 : 32'h0; // @[MuxesWrapper.scala 136:100 144:23]
  assign io_Omuxes_1_0 = _T_30 & _T_6 ? 32'h0 : _GEN_60; // @[MuxesWrapper.scala 136:100 145:23]
  assign io_Omuxes_1_1 = _T_20 & _T_6 ? io_muxes_2 : _GEN_40; // @[MuxesWrapper.scala 94:100 101:23]
  assign io_Omuxes_1_2 = _T_20 & _T_6 ? io_muxes_3 : 32'h0; // @[MuxesWrapper.scala 94:100 102:23]
  assign io_Omuxes_2_0 = _T_30 & _T_6 ? 32'h0 : _GEN_61; // @[MuxesWrapper.scala 136:100 146:23]
  assign io_Omuxes_2_1 = _T & io_src_1 != io_src_2 & io_src_2 == io_src_3 ? io_muxes_3 : 32'h0; // @[MuxesWrapper.scala 31:100 39:23]
  assign io_Omuxes_3_0 = _T_30 & _T_6 ? 32'h0 : _GEN_62; // @[MuxesWrapper.scala 136:100 147:23]
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
  input        clock,
  input        reset,
  input        io_i_data_valid,
  output       io_o_reduction_add_0,
  output       io_o_reduction_add_1,
  output       io_o_reduction_add_2,
  output [2:0] io_o_reduction_cmd_0,
  output [2:0] io_o_reduction_cmd_1,
  output [2:0] io_o_reduction_cmd_2,
  output       io_o_reduction_valid
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
`endif // RANDOMIZE_REG_INIT
  reg  r_reduction_add_0; // @[FanCtrl.scala 19:34]
  reg  r_reduction_add_1; // @[FanCtrl.scala 19:34]
  reg  r_reduction_add_2; // @[FanCtrl.scala 19:34]
  reg [2:0] r_reduction_cmd_0; // @[FanCtrl.scala 20:34]
  reg [2:0] r_reduction_cmd_1; // @[FanCtrl.scala 20:34]
  reg [2:0] r_reduction_cmd_2; // @[FanCtrl.scala 20:34]
  reg  r_add_lvl_0Reg_6; // @[FanCtrl.scala 23:33]
  reg  r_add_lvl_0Reg_7; // @[FanCtrl.scala 23:33]
  reg  r_add_lvl_1Reg_4; // @[FanCtrl.scala 24:33]
  reg [2:0] r_cmd_lvl_0Reg_6; // @[FanCtrl.scala 27:33]
  reg [2:0] r_cmd_lvl_0Reg_7; // @[FanCtrl.scala 27:33]
  reg [2:0] r_cmd_lvl_1Reg_4; // @[FanCtrl.scala 28:33]
  reg [4:0] w_vn_0; // @[FanCtrl.scala 34:23]
  reg [4:0] w_vn_1; // @[FanCtrl.scala 34:23]
  reg [4:0] w_vn_2; // @[FanCtrl.scala 34:23]
  reg [4:0] w_vn_3; // @[FanCtrl.scala 34:23]
  reg  r_valid_0; // @[FanCtrl.scala 35:26]
  reg  r_valid_1; // @[FanCtrl.scala 35:26]
  reg  r_valid_2; // @[FanCtrl.scala 35:26]
  reg  r_valid_3; // @[FanCtrl.scala 35:26]
  wire [2:0] _T_2 = 2'h2 * 1'h0; // @[FanCtrl.scala 42:25]
  wire [3:0] _T_3 = {{1'd0}, _T_2}; // @[FanCtrl.scala 42:31]
  wire [2:0] _T_8 = _T_2 + 3'h1; // @[FanCtrl.scala 42:58]
  wire [4:0] _GEN_1 = 2'h1 == _T_3[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_2 = 2'h2 == _T_3[1:0] ? w_vn_2 : _GEN_1; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_3 = 2'h3 == _T_3[1:0] ? w_vn_3 : _GEN_2; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_5 = 2'h1 == _T_8[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_6 = 2'h2 == _T_8[1:0] ? w_vn_2 : _GEN_5; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_7 = 2'h3 == _T_8[1:0] ? w_vn_3 : _GEN_6; // @[FanCtrl.scala 42:{39,39}]
  wire  _T_10 = _GEN_3 == _GEN_7; // @[FanCtrl.scala 42:39]
  wire [2:0] _T_21 = _T_2 + 3'h2; // @[FanCtrl.scala 49:32]
  wire [4:0] _GEN_22 = 2'h1 == _T_21[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 48:{41,41}]
  wire [4:0] _GEN_23 = 2'h2 == _T_21[1:0] ? w_vn_2 : _GEN_22; // @[FanCtrl.scala 48:{41,41}]
  wire [4:0] _GEN_24 = 2'h3 == _T_21[1:0] ? w_vn_3 : _GEN_23; // @[FanCtrl.scala 48:{41,41}]
  wire  _T_23 = _GEN_7 != _GEN_24; // @[FanCtrl.scala 48:41]
  wire  _T_32 = _GEN_3 != _GEN_7; // @[FanCtrl.scala 50:41]
  wire  _T_33 = _T_23 & _T_32; // @[FanCtrl.scala 49:41]
  wire  _T_42 = _GEN_7 == _GEN_24; // @[FanCtrl.scala 55:48]
  wire  _T_52 = _T_42 & _T_32; // @[FanCtrl.scala 56:46]
  wire [1:0] _GEN_49 = _T_52 ? 2'h3 : 2'h0; // @[FanCtrl.scala 58:48 60:40 63:38]
  wire  _GEN_54 = r_valid_1 & _T_10; // @[FanCtrl.scala 41:34]
  wire [2:0] _T_113 = 2'h2 * 1'h1; // @[FanCtrl.scala 42:25]
  wire [3:0] _T_114 = {{1'd0}, _T_113}; // @[FanCtrl.scala 42:31]
  wire [2:0] _T_119 = _T_113 + 3'h1; // @[FanCtrl.scala 42:58]
  wire [4:0] _GEN_124 = 2'h1 == _T_114[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_125 = 2'h2 == _T_114[1:0] ? w_vn_2 : _GEN_124; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_126 = 2'h3 == _T_114[1:0] ? w_vn_3 : _GEN_125; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_128 = 2'h1 == _T_119[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_129 = 2'h2 == _T_119[1:0] ? w_vn_2 : _GEN_128; // @[FanCtrl.scala 42:{39,39}]
  wire [4:0] _GEN_130 = 2'h3 == _T_119[1:0] ? w_vn_3 : _GEN_129; // @[FanCtrl.scala 42:{39,39}]
  wire  _T_121 = _GEN_126 == _GEN_130; // @[FanCtrl.scala 42:39]
  wire  _T_143 = _GEN_126 != _GEN_130; // @[FanCtrl.scala 50:41]
  wire  _GEN_178 = r_valid_1 & _T_121; // @[FanCtrl.scala 41:34]
  wire [2:0] _T_188 = _T_113 - 3'h1; // @[FanCtrl.scala 88:58]
  wire [4:0] _GEN_206 = 2'h1 == _T_188[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 88:{39,39}]
  wire [4:0] _GEN_207 = 2'h2 == _T_188[1:0] ? w_vn_2 : _GEN_206; // @[FanCtrl.scala 88:{39,39}]
  wire [4:0] _GEN_208 = 2'h3 == _T_188[1:0] ? w_vn_3 : _GEN_207; // @[FanCtrl.scala 88:{39,39}]
  wire  _T_200 = _GEN_126 != _GEN_208 & _T_143; // @[FanCtrl.scala 88:67]
  wire  _T_219 = _GEN_126 == _GEN_208 & _T_143; // @[FanCtrl.scala 93:73]
  wire [3:0] _T_228 = 3'h4 * 1'h0; // @[FanCtrl.scala 117:23]
  wire [3:0] _T_230 = _T_228 + 4'h1; // @[FanCtrl.scala 117:29]
  wire [3:0] _T_234 = _T_228 + 4'h2; // @[FanCtrl.scala 117:56]
  wire [4:0] _GEN_254 = 2'h1 == _T_230[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 117:{37,37}]
  wire [4:0] _GEN_255 = 2'h2 == _T_230[1:0] ? w_vn_2 : _GEN_254; // @[FanCtrl.scala 117:{37,37}]
  wire [4:0] _GEN_256 = 2'h3 == _T_230[1:0] ? w_vn_3 : _GEN_255; // @[FanCtrl.scala 117:{37,37}]
  wire [4:0] _GEN_258 = 2'h1 == _T_234[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 117:{37,37}]
  wire [4:0] _GEN_259 = 2'h2 == _T_234[1:0] ? w_vn_2 : _GEN_258; // @[FanCtrl.scala 117:{37,37}]
  wire [4:0] _GEN_260 = 2'h3 == _T_234[1:0] ? w_vn_3 : _GEN_259; // @[FanCtrl.scala 117:{37,37}]
  wire  _T_236 = _GEN_256 == _GEN_260; // @[FanCtrl.scala 117:37]
  wire [4:0] _T_242 = {{1'd0}, _T_228}; // @[FanCtrl.scala 123:30]
  wire [4:0] _GEN_271 = 2'h1 == _T_242[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 123:{38,38}]
  wire [4:0] _GEN_272 = 2'h2 == _T_242[1:0] ? w_vn_2 : _GEN_271; // @[FanCtrl.scala 123:{38,38}]
  wire [4:0] _GEN_273 = 2'h3 == _T_242[1:0] ? w_vn_3 : _GEN_272; // @[FanCtrl.scala 123:{38,38}]
  wire  _T_249 = _GEN_273 == _GEN_256; // @[FanCtrl.scala 123:38]
  wire [3:0] _T_256 = _T_228 + 4'h3; // @[FanCtrl.scala 124:55]
  wire [4:0] _GEN_283 = 2'h1 == _T_256[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 124:{36,36}]
  wire [4:0] _GEN_284 = 2'h2 == _T_256[1:0] ? w_vn_2 : _GEN_283; // @[FanCtrl.scala 124:{36,36}]
  wire [4:0] _GEN_285 = 2'h3 == _T_256[1:0] ? w_vn_3 : _GEN_284; // @[FanCtrl.scala 124:{36,36}]
  wire  _T_258 = _GEN_260 == _GEN_285; // @[FanCtrl.scala 124:36]
  wire  _T_259 = _GEN_273 == _GEN_256 & _T_258; // @[FanCtrl.scala 123:65]
  wire [3:0] _T_262 = _T_228 + 4'h4; // @[FanCtrl.scala 125:29]
  wire [4:0] _GEN_287 = 2'h1 == _T_262[1:0] ? w_vn_1 : w_vn_0; // @[FanCtrl.scala 125:{37,37}]
  wire [4:0] _GEN_288 = 2'h2 == _T_262[1:0] ? w_vn_2 : _GEN_287; // @[FanCtrl.scala 125:{37,37}]
  wire [4:0] _GEN_289 = 2'h3 == _T_262[1:0] ? w_vn_3 : _GEN_288; // @[FanCtrl.scala 125:{37,37}]
  wire  _T_268 = _GEN_289 != _GEN_285; // @[FanCtrl.scala 125:37]
  wire  _T_269 = _T_259 & _T_268; // @[FanCtrl.scala 124:64]
  wire  _T_278 = _GEN_256 != _GEN_260; // @[FanCtrl.scala 126:37]
  wire  _T_279 = _T_269 & _T_278; // @[FanCtrl.scala 125:64]
  wire  _T_300 = _T_258 & _T_268; // @[FanCtrl.scala 130:71]
  wire  _T_310 = _T_300 & _T_278; // @[FanCtrl.scala 131:71]
  wire  _T_331 = _T_249 & _T_278; // @[FanCtrl.scala 136:71]
  wire [2:0] _GEN_356 = _T_331 ? 3'h3 : 3'h0; // @[FanCtrl.scala 137:72]
  wire  _GEN_371 = r_valid_1 & _T_236; // @[FanCtrl.scala 116:32]
  assign io_o_reduction_add_0 = r_add_lvl_0Reg_6; // @[FanCtrl.scala 227:{35,35}]
  assign io_o_reduction_add_1 = r_add_lvl_0Reg_7; // @[FanCtrl.scala 227:{35,35}]
  assign io_o_reduction_add_2 = r_add_lvl_1Reg_4; // @[FanCtrl.scala 227:{35,35}]
  assign io_o_reduction_cmd_0 = r_cmd_lvl_0Reg_6; // @[FanCtrl.scala 236:{34,34}]
  assign io_o_reduction_cmd_1 = r_cmd_lvl_0Reg_7; // @[FanCtrl.scala 236:{34,34}]
  assign io_o_reduction_cmd_2 = r_cmd_lvl_1Reg_4; // @[FanCtrl.scala 236:{34,34}]
  assign io_o_reduction_valid = r_valid_3; // @[FanCtrl.scala 226:26]
  always @(posedge clock) begin
    if (reset) begin // @[FanCtrl.scala 19:34]
      r_reduction_add_0 <= 1'h0; // @[FanCtrl.scala 19:34]
    end else begin
      r_reduction_add_0 <= _GEN_54;
    end
    if (reset) begin // @[FanCtrl.scala 19:34]
      r_reduction_add_1 <= 1'h0; // @[FanCtrl.scala 19:34]
    end else begin
      r_reduction_add_1 <= _GEN_178;
    end
    if (reset) begin // @[FanCtrl.scala 19:34]
      r_reduction_add_2 <= 1'h0; // @[FanCtrl.scala 19:34]
    end else begin
      r_reduction_add_2 <= _GEN_371;
    end
    if (reset) begin // @[FanCtrl.scala 20:34]
      r_reduction_cmd_0 <= 3'h0; // @[FanCtrl.scala 20:34]
    end else if (r_valid_1) begin // @[FanCtrl.scala 41:34]
      if (_T_33) begin // @[FanCtrl.scala 51:42]
        r_reduction_cmd_0 <= 3'h5; // @[FanCtrl.scala 53:37]
      end else begin
        r_reduction_cmd_0 <= {{1'd0}, _GEN_49};
      end
    end else begin
      r_reduction_cmd_0 <= 3'h0; // @[FanCtrl.scala 68:33]
    end
    if (reset) begin // @[FanCtrl.scala 20:34]
      r_reduction_cmd_1 <= 3'h0; // @[FanCtrl.scala 20:34]
    end else if (r_valid_1) begin // @[FanCtrl.scala 81:34]
      if (_T_200) begin // @[FanCtrl.scala 89:66]
        r_reduction_cmd_1 <= 3'h5; // @[FanCtrl.scala 91:36]
      end else if (_T_219) begin // @[FanCtrl.scala 94:66]
        r_reduction_cmd_1 <= 3'h4; // @[FanCtrl.scala 96:35]
      end else begin
        r_reduction_cmd_1 <= 3'h0; // @[FanCtrl.scala 99:35]
      end
    end else begin
      r_reduction_cmd_1 <= 3'h0; // @[FanCtrl.scala 103:33]
    end
    if (reset) begin // @[FanCtrl.scala 20:34]
      r_reduction_cmd_2 <= 3'h0; // @[FanCtrl.scala 20:34]
    end else if (r_valid_1) begin // @[FanCtrl.scala 116:32]
      if (_T_279) begin // @[FanCtrl.scala 126:66]
        r_reduction_cmd_2 <= 3'h5;
      end else if (_T_310) begin // @[FanCtrl.scala 132:72]
        r_reduction_cmd_2 <= 3'h4;
      end else begin
        r_reduction_cmd_2 <= _GEN_356;
      end
    end else begin
      r_reduction_cmd_2 <= 3'h0;
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
    if (reset) begin // @[FanCtrl.scala 27:33]
      r_cmd_lvl_0Reg_6 <= 3'h0; // @[FanCtrl.scala 27:33]
    end else begin
      r_cmd_lvl_0Reg_6 <= r_reduction_cmd_0; // @[FanCtrl.scala 185:20]
    end
    if (reset) begin // @[FanCtrl.scala 27:33]
      r_cmd_lvl_0Reg_7 <= 3'h0; // @[FanCtrl.scala 27:33]
    end else begin
      r_cmd_lvl_0Reg_7 <= r_reduction_cmd_1; // @[FanCtrl.scala 185:20]
    end
    if (reset) begin // @[FanCtrl.scala 28:33]
      r_cmd_lvl_1Reg_4 <= 3'h0; // @[FanCtrl.scala 28:33]
    end else begin
      r_cmd_lvl_1Reg_4 <= r_reduction_cmd_2; // @[FanCtrl.scala 199:20]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_0 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_0 <= 5'h1; // @[FanCtrl.scala 37:10]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_1 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_1 <= 5'h1; // @[FanCtrl.scala 37:10]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_2 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_2 <= 5'h1; // @[FanCtrl.scala 37:10]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_3 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_3 <= 5'h1; // @[FanCtrl.scala 37:10]
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
    if (reset) begin // @[FanCtrl.scala 35:26]
      r_valid_2 <= 1'h0; // @[FanCtrl.scala 35:26]
    end else begin
      r_valid_2 <= r_valid_1; // @[FanCtrl.scala 222:24]
    end
    if (reset) begin // @[FanCtrl.scala 35:26]
      r_valid_3 <= 1'h0; // @[FanCtrl.scala 35:26]
    end else begin
      r_valid_3 <= r_valid_2; // @[FanCtrl.scala 222:24]
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
  r_reduction_cmd_0 = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  r_reduction_cmd_1 = _RAND_4[2:0];
  _RAND_5 = {1{`RANDOM}};
  r_reduction_cmd_2 = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  r_add_lvl_0Reg_6 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  r_add_lvl_0Reg_7 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  r_add_lvl_1Reg_4 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  r_cmd_lvl_0Reg_6 = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  r_cmd_lvl_0Reg_7 = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  r_cmd_lvl_1Reg_4 = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  w_vn_0 = _RAND_12[4:0];
  _RAND_13 = {1{`RANDOM}};
  w_vn_1 = _RAND_13[4:0];
  _RAND_14 = {1{`RANDOM}};
  w_vn_2 = _RAND_14[4:0];
  _RAND_15 = {1{`RANDOM}};
  w_vn_3 = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  r_valid_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  r_valid_1 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  r_valid_2 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  r_valid_3 = _RAND_19[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Benes3(
  input  [15:0] io_i_data_bus2_0,
  input  [15:0] io_i_data_bus2_1,
  input  [15:0] io_i_data_bus2_2,
  input  [15:0] io_i_data_bus2_3,
  input  [15:0] io_i_data_bus1_0,
  input  [15:0] io_i_data_bus1_1,
  input  [15:0] io_i_data_bus1_2,
  input  [15:0] io_i_data_bus1_3,
  input  [3:0]  io_i_mux_bus_0_0,
  input  [3:0]  io_i_mux_bus_0_1,
  input  [3:0]  io_i_mux_bus_0_2,
  input  [3:0]  io_i_mux_bus_0_3,
  input  [3:0]  io_i_mux_bus_1_0,
  input  [3:0]  io_i_mux_bus_1_1,
  input  [3:0]  io_i_mux_bus_1_2,
  input  [3:0]  io_i_mux_bus_2_0,
  input  [3:0]  io_i_mux_bus_2_1,
  input  [3:0]  io_i_mux_bus_3_0,
  output [15:0] io_o_dist_bus1_0,
  output [15:0] io_o_dist_bus1_1,
  output [15:0] io_o_dist_bus1_2,
  output [15:0] io_o_dist_bus1_3,
  output [15:0] io_o_dist_bus2_0,
  output [15:0] io_o_dist_bus2_1,
  output [15:0] io_o_dist_bus2_2,
  output [15:0] io_o_dist_bus2_3
);
  wire  _T_1 = |io_i_mux_bus_0_0; // @[Benes3.scala 64:35]
  wire  _T_2 = ~(|io_i_mux_bus_0_0); // @[Benes3.scala 64:39]
  wire [1:0] _GEN_584 = 2'h0 % 2'h2; // @[Benes3.scala 25:52]
  wire  parsedindexvalue_first_stage = io_i_mux_bus_0_0[0] & (~_GEN_584[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray__0 = io_i_mux_bus_0_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray__1 = io_i_mux_bus_0_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_585 = {{2'd0}, parsedindexvalue_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_586 = _GEN_585 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue_calculation = _GEN_586[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T = ~parsedindexvalue_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_1 = ~parsedindexvalue_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_2 = ~parsedindexvalue_calculation & ~parsedindexvalue_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_5 = parsedindexvalue_calculation & _parsedindexvalue_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_4 = {{1'd0}, parsedindexvalue_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_6 = _GEN_4 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_8 = _GEN_4 == 2'h2 & _parsedindexvalue_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_9 = _GEN_4 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_11 = _GEN_4 == 2'h3 & _parsedindexvalue_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_14 = _parsedindexvalue_nextIndex_T & parsedindexvalue_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_14 = {{1'd0}, parsedindexvalue_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_16 = _GEN_14 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_19 = parsedindexvalue_calculation & parsedindexvalue_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_24 = _parsedindexvalue_nextIndex_T_6 & parsedindexvalue_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_26 = _GEN_14 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_29 = _parsedindexvalue_nextIndex_T_9 & parsedindexvalue_boolArray__0; // @[Benes3.scala 43:36]
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
  wire [2:0] _GEN_587 = {{1'd0}, parsedindexvalue_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_588 = _GEN_587 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_1 = _GEN_588[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_39 = parsedindexvalue_calculation_1 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_40 = ~parsedindexvalue_boolArray__1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_41 = parsedindexvalue_calculation_1 == 2'h0 & ~parsedindexvalue_boolArray__1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_42 = parsedindexvalue_calculation_1 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_44 = parsedindexvalue_calculation_1 == 2'h1 & _parsedindexvalue_nextIndex_T_40; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_45 = parsedindexvalue_calculation_1 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_47 = parsedindexvalue_calculation_1 == 2'h2 & _parsedindexvalue_nextIndex_T_40; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_48 = parsedindexvalue_calculation_1 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_50 = parsedindexvalue_calculation_1 == 2'h3 & _parsedindexvalue_nextIndex_T_40; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_53 = _parsedindexvalue_nextIndex_T_39 & parsedindexvalue_boolArray__1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_55 = parsedindexvalue_nextIndex + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_58 = _parsedindexvalue_nextIndex_T_42 & parsedindexvalue_boolArray__1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_63 = _parsedindexvalue_nextIndex_T_45 & parsedindexvalue_boolArray__1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_65 = parsedindexvalue_nextIndex - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_68 = _parsedindexvalue_nextIndex_T_48 & parsedindexvalue_boolArray__1; // @[Benes3.scala 43:36]
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
  wire [1:0] _parsedindexvalue_third_stage_T_1 = parsedindexvalue_nextIndex_1 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_4 = parsedindexvalue_nextIndex_1 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_6 = parsedindexvalue_nextIndex_1 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_7 = _parsedindexvalue_third_stage_T_1 == 2'h0 ?
    _parsedindexvalue_third_stage_T_4 : _parsedindexvalue_third_stage_T_6; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue = io_i_mux_bus_0_0[3] ? _parsedindexvalue_third_stage_T_7 : parsedindexvalue_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_3 = {{1'd0}, parsedindexvalue};
  wire [15:0] _GEN_0 = 3'h0 == _T_3 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_1 = 3'h1 == _T_3 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_2 = 3'h2 == _T_3 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_3 = 3'h3 == _T_3 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_5 = ~(|io_i_mux_bus_0_0) ? _GEN_0 : 16'h0; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_6 = ~(|io_i_mux_bus_0_0) ? _GEN_1 : 16'h0; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_7 = ~(|io_i_mux_bus_0_0) ? _GEN_2 : 16'h0; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_8 = ~(|io_i_mux_bus_0_0) ? _GEN_3 : 16'h0; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_10 = 3'h0 == _T_3 ? io_i_data_bus2_0 : _GEN_5; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_11 = 3'h1 == _T_3 ? io_i_data_bus2_0 : _GEN_6; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_12 = 3'h2 == _T_3 ? io_i_data_bus2_0 : _GEN_7; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_13 = 3'h3 == _T_3 ? io_i_data_bus2_0 : _GEN_8; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_15 = _T_1 ? _GEN_10 : _GEN_5; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_16 = _T_1 ? _GEN_11 : _GEN_6; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_17 = _T_1 ? _GEN_12 : _GEN_7; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_18 = _T_1 ? _GEN_13 : _GEN_8; // @[Benes3.scala 74:48]
  wire  _T_11 = |io_i_mux_bus_0_1; // @[Benes3.scala 92:71]
  wire  _T_13 = _T_1 & |io_i_mux_bus_0_1; // @[Benes3.scala 92:48]
  wire [15:0] _GEN_20 = 3'h0 == _T_3 ? io_i_data_bus2_0 : _GEN_15; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_21 = 3'h1 == _T_3 ? io_i_data_bus2_0 : _GEN_16; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_22 = 3'h2 == _T_3 ? io_i_data_bus2_0 : _GEN_17; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_23 = 3'h3 == _T_3 ? io_i_data_bus2_0 : _GEN_18; // @[Benes3.scala 95:{48,48}]
  wire  parsedindexvalue2_first_stage = io_i_mux_bus_0_1[0] & (~_GEN_584[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray__0 = io_i_mux_bus_0_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray__1 = io_i_mux_bus_0_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_600 = {{2'd0}, parsedindexvalue2_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_601 = _GEN_600 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue2_calculation = _GEN_601[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T = ~parsedindexvalue2_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_1 = ~parsedindexvalue2_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_2 = ~parsedindexvalue2_calculation & ~parsedindexvalue2_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_5 = parsedindexvalue2_calculation & _parsedindexvalue2_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_124 = {{1'd0}, parsedindexvalue2_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_6 = _GEN_124 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_8 = _GEN_124 == 2'h2 & _parsedindexvalue2_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_9 = _GEN_124 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_11 = _GEN_124 == 2'h3 & _parsedindexvalue2_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_14 = _parsedindexvalue2_nextIndex_T & parsedindexvalue2_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_134 = {{1'd0}, parsedindexvalue2_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue2_nextIndex_T_16 = _GEN_134 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_19 = parsedindexvalue2_calculation & parsedindexvalue2_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_24 = _parsedindexvalue2_nextIndex_T_6 & parsedindexvalue2_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_26 = _GEN_134 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_29 = _parsedindexvalue2_nextIndex_T_9 & parsedindexvalue2_boolArray__0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_32 = _parsedindexvalue2_nextIndex_T_29 ? _parsedindexvalue2_nextIndex_T_26
     : {{1'd0}, parsedindexvalue2_first_stage}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_33 = _parsedindexvalue2_nextIndex_T_24 ? _parsedindexvalue2_nextIndex_T_26
     : _parsedindexvalue2_nextIndex_T_32; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_34 = _parsedindexvalue2_nextIndex_T_19 ? _parsedindexvalue2_nextIndex_T_16
     : _parsedindexvalue2_nextIndex_T_33; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_35 = _parsedindexvalue2_nextIndex_T_14 ? _parsedindexvalue2_nextIndex_T_16
     : _parsedindexvalue2_nextIndex_T_34; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_36 = _parsedindexvalue2_nextIndex_T_11 ? {{1'd0},
    parsedindexvalue2_first_stage} : _parsedindexvalue2_nextIndex_T_35; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_37 = _parsedindexvalue2_nextIndex_T_8 ? {{1'd0},
    parsedindexvalue2_first_stage} : _parsedindexvalue2_nextIndex_T_36; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_38 = _parsedindexvalue2_nextIndex_T_5 ? {{1'd0},
    parsedindexvalue2_first_stage} : _parsedindexvalue2_nextIndex_T_37; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex = _parsedindexvalue2_nextIndex_T_2 ? {{1'd0}, parsedindexvalue2_first_stage} :
    _parsedindexvalue2_nextIndex_T_38; // @[Mux.scala 101:16]
  wire [2:0] _GEN_602 = {{1'd0}, parsedindexvalue2_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_603 = _GEN_602 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_1 = _GEN_603[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_39 = parsedindexvalue2_calculation_1 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_40 = ~parsedindexvalue2_boolArray__1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_41 = parsedindexvalue2_calculation_1 == 2'h0 & ~parsedindexvalue2_boolArray__1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_42 = parsedindexvalue2_calculation_1 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_44 = parsedindexvalue2_calculation_1 == 2'h1 & _parsedindexvalue2_nextIndex_T_40; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_45 = parsedindexvalue2_calculation_1 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_47 = parsedindexvalue2_calculation_1 == 2'h2 & _parsedindexvalue2_nextIndex_T_40; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_48 = parsedindexvalue2_calculation_1 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_50 = parsedindexvalue2_calculation_1 == 2'h3 & _parsedindexvalue2_nextIndex_T_40; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_53 = _parsedindexvalue2_nextIndex_T_39 & parsedindexvalue2_boolArray__1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_55 = parsedindexvalue2_nextIndex + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_58 = _parsedindexvalue2_nextIndex_T_42 & parsedindexvalue2_boolArray__1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_63 = _parsedindexvalue2_nextIndex_T_45 & parsedindexvalue2_boolArray__1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_65 = parsedindexvalue2_nextIndex - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_68 = _parsedindexvalue2_nextIndex_T_48 & parsedindexvalue2_boolArray__1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_71 = _parsedindexvalue2_nextIndex_T_68 ? _parsedindexvalue2_nextIndex_T_65
     : parsedindexvalue2_nextIndex; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_72 = _parsedindexvalue2_nextIndex_T_63 ? _parsedindexvalue2_nextIndex_T_65
     : _parsedindexvalue2_nextIndex_T_71; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_73 = _parsedindexvalue2_nextIndex_T_58 ? _parsedindexvalue2_nextIndex_T_55
     : _parsedindexvalue2_nextIndex_T_72; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_74 = _parsedindexvalue2_nextIndex_T_53 ? _parsedindexvalue2_nextIndex_T_55
     : _parsedindexvalue2_nextIndex_T_73; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_75 = _parsedindexvalue2_nextIndex_T_50 ? parsedindexvalue2_nextIndex :
    _parsedindexvalue2_nextIndex_T_74; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_76 = _parsedindexvalue2_nextIndex_T_47 ? parsedindexvalue2_nextIndex :
    _parsedindexvalue2_nextIndex_T_75; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_77 = _parsedindexvalue2_nextIndex_T_44 ? parsedindexvalue2_nextIndex :
    _parsedindexvalue2_nextIndex_T_76; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_1 = _parsedindexvalue2_nextIndex_T_41 ? parsedindexvalue2_nextIndex :
    _parsedindexvalue2_nextIndex_T_77; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_third_stage_T_1 = parsedindexvalue2_nextIndex_1 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue2_third_stage_T_4 = parsedindexvalue2_nextIndex_1 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue2_third_stage_T_6 = parsedindexvalue2_nextIndex_1 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue2_third_stage_T_7 = _parsedindexvalue2_third_stage_T_1 == 2'h0 ?
    _parsedindexvalue2_third_stage_T_4 : _parsedindexvalue2_third_stage_T_6; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue2 = io_i_mux_bus_0_1[3] ? _parsedindexvalue2_third_stage_T_7 :
    parsedindexvalue2_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_16 = {{1'd0}, parsedindexvalue2};
  wire [15:0] _GEN_25 = 3'h0 == _T_16 ? io_i_data_bus2_0 : _GEN_20; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_26 = 3'h1 == _T_16 ? io_i_data_bus2_0 : _GEN_21; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_27 = 3'h2 == _T_16 ? io_i_data_bus2_0 : _GEN_22; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_28 = 3'h3 == _T_16 ? io_i_data_bus2_0 : _GEN_23; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_30 = _T_1 & |io_i_mux_bus_0_1 ? _GEN_25 : _GEN_15; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_31 = _T_1 & |io_i_mux_bus_0_1 ? _GEN_26 : _GEN_16; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_32 = _T_1 & |io_i_mux_bus_0_1 ? _GEN_27 : _GEN_17; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_33 = _T_1 & |io_i_mux_bus_0_1 ? _GEN_28 : _GEN_18; // @[Benes3.scala 92:84]
  wire  _T_23 = |io_i_mux_bus_0_2; // @[Benes3.scala 114:107]
  wire  _T_25 = _T_13 & |io_i_mux_bus_0_2; // @[Benes3.scala 114:84]
  wire [15:0] _GEN_35 = 3'h0 == _T_3 ? io_i_data_bus2_0 : _GEN_30; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_36 = 3'h1 == _T_3 ? io_i_data_bus2_0 : _GEN_31; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_37 = 3'h2 == _T_3 ? io_i_data_bus2_0 : _GEN_32; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_38 = 3'h3 == _T_3 ? io_i_data_bus2_0 : _GEN_33; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_40 = 3'h0 == _T_16 ? io_i_data_bus2_0 : _GEN_35; // @[Benes3.scala 122:{44,44}]
  wire [15:0] _GEN_41 = 3'h1 == _T_16 ? io_i_data_bus2_0 : _GEN_36; // @[Benes3.scala 122:{44,44}]
  wire [15:0] _GEN_42 = 3'h2 == _T_16 ? io_i_data_bus2_0 : _GEN_37; // @[Benes3.scala 122:{44,44}]
  wire [15:0] _GEN_43 = 3'h3 == _T_16 ? io_i_data_bus2_0 : _GEN_38; // @[Benes3.scala 122:{44,44}]
  wire  parsedindexvalue3_first_stage = io_i_mux_bus_0_2[0] & (~_GEN_584[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue3_boolArray__0 = io_i_mux_bus_0_2[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue3_boolArray__1 = io_i_mux_bus_0_2[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_615 = {{2'd0}, parsedindexvalue3_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_616 = _GEN_615 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue3_calculation = _GEN_616[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T = ~parsedindexvalue3_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_1 = ~parsedindexvalue3_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_2 = ~parsedindexvalue3_calculation & ~parsedindexvalue3_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_5 = parsedindexvalue3_calculation & _parsedindexvalue3_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_244 = {{1'd0}, parsedindexvalue3_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_6 = _GEN_244 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_8 = _GEN_244 == 2'h2 & _parsedindexvalue3_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_9 = _GEN_244 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_11 = _GEN_244 == 2'h3 & _parsedindexvalue3_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_14 = _parsedindexvalue3_nextIndex_T & parsedindexvalue3_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_254 = {{1'd0}, parsedindexvalue3_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue3_nextIndex_T_16 = _GEN_254 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_19 = parsedindexvalue3_calculation & parsedindexvalue3_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_24 = _parsedindexvalue3_nextIndex_T_6 & parsedindexvalue3_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_26 = _GEN_254 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_29 = _parsedindexvalue3_nextIndex_T_9 & parsedindexvalue3_boolArray__0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_32 = _parsedindexvalue3_nextIndex_T_29 ? _parsedindexvalue3_nextIndex_T_26
     : {{1'd0}, parsedindexvalue3_first_stage}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_33 = _parsedindexvalue3_nextIndex_T_24 ? _parsedindexvalue3_nextIndex_T_26
     : _parsedindexvalue3_nextIndex_T_32; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_34 = _parsedindexvalue3_nextIndex_T_19 ? _parsedindexvalue3_nextIndex_T_16
     : _parsedindexvalue3_nextIndex_T_33; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_35 = _parsedindexvalue3_nextIndex_T_14 ? _parsedindexvalue3_nextIndex_T_16
     : _parsedindexvalue3_nextIndex_T_34; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_36 = _parsedindexvalue3_nextIndex_T_11 ? {{1'd0},
    parsedindexvalue3_first_stage} : _parsedindexvalue3_nextIndex_T_35; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_37 = _parsedindexvalue3_nextIndex_T_8 ? {{1'd0},
    parsedindexvalue3_first_stage} : _parsedindexvalue3_nextIndex_T_36; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_38 = _parsedindexvalue3_nextIndex_T_5 ? {{1'd0},
    parsedindexvalue3_first_stage} : _parsedindexvalue3_nextIndex_T_37; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex = _parsedindexvalue3_nextIndex_T_2 ? {{1'd0}, parsedindexvalue3_first_stage} :
    _parsedindexvalue3_nextIndex_T_38; // @[Mux.scala 101:16]
  wire [2:0] _GEN_617 = {{1'd0}, parsedindexvalue3_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_618 = _GEN_617 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_1 = _GEN_618[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_39 = parsedindexvalue3_calculation_1 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_40 = ~parsedindexvalue3_boolArray__1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_41 = parsedindexvalue3_calculation_1 == 2'h0 & ~parsedindexvalue3_boolArray__1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_42 = parsedindexvalue3_calculation_1 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_44 = parsedindexvalue3_calculation_1 == 2'h1 & _parsedindexvalue3_nextIndex_T_40; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_45 = parsedindexvalue3_calculation_1 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_47 = parsedindexvalue3_calculation_1 == 2'h2 & _parsedindexvalue3_nextIndex_T_40; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_48 = parsedindexvalue3_calculation_1 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_50 = parsedindexvalue3_calculation_1 == 2'h3 & _parsedindexvalue3_nextIndex_T_40; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_53 = _parsedindexvalue3_nextIndex_T_39 & parsedindexvalue3_boolArray__1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_55 = parsedindexvalue3_nextIndex + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_58 = _parsedindexvalue3_nextIndex_T_42 & parsedindexvalue3_boolArray__1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_63 = _parsedindexvalue3_nextIndex_T_45 & parsedindexvalue3_boolArray__1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_65 = parsedindexvalue3_nextIndex - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_68 = _parsedindexvalue3_nextIndex_T_48 & parsedindexvalue3_boolArray__1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_71 = _parsedindexvalue3_nextIndex_T_68 ? _parsedindexvalue3_nextIndex_T_65
     : parsedindexvalue3_nextIndex; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_72 = _parsedindexvalue3_nextIndex_T_63 ? _parsedindexvalue3_nextIndex_T_65
     : _parsedindexvalue3_nextIndex_T_71; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_73 = _parsedindexvalue3_nextIndex_T_58 ? _parsedindexvalue3_nextIndex_T_55
     : _parsedindexvalue3_nextIndex_T_72; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_74 = _parsedindexvalue3_nextIndex_T_53 ? _parsedindexvalue3_nextIndex_T_55
     : _parsedindexvalue3_nextIndex_T_73; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_75 = _parsedindexvalue3_nextIndex_T_50 ? parsedindexvalue3_nextIndex :
    _parsedindexvalue3_nextIndex_T_74; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_76 = _parsedindexvalue3_nextIndex_T_47 ? parsedindexvalue3_nextIndex :
    _parsedindexvalue3_nextIndex_T_75; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_77 = _parsedindexvalue3_nextIndex_T_44 ? parsedindexvalue3_nextIndex :
    _parsedindexvalue3_nextIndex_T_76; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_1 = _parsedindexvalue3_nextIndex_T_41 ? parsedindexvalue3_nextIndex :
    _parsedindexvalue3_nextIndex_T_77; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_third_stage_T_1 = parsedindexvalue3_nextIndex_1 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue3_third_stage_T_4 = parsedindexvalue3_nextIndex_1 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue3_third_stage_T_6 = parsedindexvalue3_nextIndex_1 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue3_third_stage_T_7 = _parsedindexvalue3_third_stage_T_1 == 2'h0 ?
    _parsedindexvalue3_third_stage_T_4 : _parsedindexvalue3_third_stage_T_6; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue3 = io_i_mux_bus_0_2[3] ? _parsedindexvalue3_third_stage_T_7 :
    parsedindexvalue3_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_30 = {{1'd0}, parsedindexvalue3};
  wire [15:0] _GEN_45 = 3'h0 == _T_30 ? io_i_data_bus2_0 : _GEN_40; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_46 = 3'h1 == _T_30 ? io_i_data_bus2_0 : _GEN_41; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_47 = 3'h2 == _T_30 ? io_i_data_bus2_0 : _GEN_42; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_48 = 3'h3 == _T_30 ? io_i_data_bus2_0 : _GEN_43; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_50 = _T_13 & |io_i_mux_bus_0_2 ? _GEN_45 : _GEN_30; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_51 = _T_13 & |io_i_mux_bus_0_2 ? _GEN_46 : _GEN_31; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_52 = _T_13 & |io_i_mux_bus_0_2 ? _GEN_47 : _GEN_32; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_53 = _T_13 & |io_i_mux_bus_0_2 ? _GEN_48 : _GEN_33; // @[Benes3.scala 114:120]
  wire  _T_40 = |io_i_mux_bus_0_3; // @[Benes3.scala 139:143]
  wire [15:0] _GEN_55 = 3'h0 == _T_3 ? io_i_data_bus2_0 : _GEN_50; // @[Benes3.scala 142:{48,48}]
  wire [15:0] _GEN_56 = 3'h1 == _T_3 ? io_i_data_bus2_0 : _GEN_51; // @[Benes3.scala 142:{48,48}]
  wire [15:0] _GEN_57 = 3'h2 == _T_3 ? io_i_data_bus2_0 : _GEN_52; // @[Benes3.scala 142:{48,48}]
  wire [15:0] _GEN_58 = 3'h3 == _T_3 ? io_i_data_bus2_0 : _GEN_53; // @[Benes3.scala 142:{48,48}]
  wire [15:0] _GEN_60 = 3'h0 == _T_16 ? io_i_data_bus2_0 : _GEN_55; // @[Benes3.scala 147:{44,44}]
  wire [15:0] _GEN_61 = 3'h1 == _T_16 ? io_i_data_bus2_0 : _GEN_56; // @[Benes3.scala 147:{44,44}]
  wire [15:0] _GEN_62 = 3'h2 == _T_16 ? io_i_data_bus2_0 : _GEN_57; // @[Benes3.scala 147:{44,44}]
  wire [15:0] _GEN_63 = 3'h3 == _T_16 ? io_i_data_bus2_0 : _GEN_58; // @[Benes3.scala 147:{44,44}]
  wire [15:0] _GEN_65 = 3'h0 == _T_30 ? io_i_data_bus2_0 : _GEN_60; // @[Benes3.scala 151:{44,44}]
  wire [15:0] _GEN_66 = 3'h1 == _T_30 ? io_i_data_bus2_0 : _GEN_61; // @[Benes3.scala 151:{44,44}]
  wire [15:0] _GEN_67 = 3'h2 == _T_30 ? io_i_data_bus2_0 : _GEN_62; // @[Benes3.scala 151:{44,44}]
  wire [15:0] _GEN_68 = 3'h3 == _T_30 ? io_i_data_bus2_0 : _GEN_63; // @[Benes3.scala 151:{44,44}]
  wire  parsedindexvalue4_first_stage = io_i_mux_bus_0_3[0] & (~_GEN_584[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue4_boolArray__0 = io_i_mux_bus_0_3[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue4_boolArray__1 = io_i_mux_bus_0_3[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_635 = {{2'd0}, parsedindexvalue4_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_636 = _GEN_635 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue4_calculation = _GEN_636[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue4_nextIndex_T = ~parsedindexvalue4_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue4_nextIndex_T_1 = ~parsedindexvalue4_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue4_nextIndex_T_2 = ~parsedindexvalue4_calculation & ~parsedindexvalue4_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue4_nextIndex_T_5 = parsedindexvalue4_calculation & _parsedindexvalue4_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_404 = {{1'd0}, parsedindexvalue4_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue4_nextIndex_T_6 = _GEN_404 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue4_nextIndex_T_8 = _GEN_404 == 2'h2 & _parsedindexvalue4_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue4_nextIndex_T_9 = _GEN_404 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue4_nextIndex_T_11 = _GEN_404 == 2'h3 & _parsedindexvalue4_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue4_nextIndex_T_14 = _parsedindexvalue4_nextIndex_T & parsedindexvalue4_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_414 = {{1'd0}, parsedindexvalue4_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue4_nextIndex_T_16 = _GEN_414 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue4_nextIndex_T_19 = parsedindexvalue4_calculation & parsedindexvalue4_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue4_nextIndex_T_24 = _parsedindexvalue4_nextIndex_T_6 & parsedindexvalue4_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue4_nextIndex_T_26 = _GEN_414 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue4_nextIndex_T_29 = _parsedindexvalue4_nextIndex_T_9 & parsedindexvalue4_boolArray__0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue4_nextIndex_T_32 = _parsedindexvalue4_nextIndex_T_29 ? _parsedindexvalue4_nextIndex_T_26
     : {{1'd0}, parsedindexvalue4_first_stage}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_33 = _parsedindexvalue4_nextIndex_T_24 ? _parsedindexvalue4_nextIndex_T_26
     : _parsedindexvalue4_nextIndex_T_32; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_34 = _parsedindexvalue4_nextIndex_T_19 ? _parsedindexvalue4_nextIndex_T_16
     : _parsedindexvalue4_nextIndex_T_33; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_35 = _parsedindexvalue4_nextIndex_T_14 ? _parsedindexvalue4_nextIndex_T_16
     : _parsedindexvalue4_nextIndex_T_34; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_36 = _parsedindexvalue4_nextIndex_T_11 ? {{1'd0},
    parsedindexvalue4_first_stage} : _parsedindexvalue4_nextIndex_T_35; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_37 = _parsedindexvalue4_nextIndex_T_8 ? {{1'd0},
    parsedindexvalue4_first_stage} : _parsedindexvalue4_nextIndex_T_36; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_38 = _parsedindexvalue4_nextIndex_T_5 ? {{1'd0},
    parsedindexvalue4_first_stage} : _parsedindexvalue4_nextIndex_T_37; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue4_nextIndex = _parsedindexvalue4_nextIndex_T_2 ? {{1'd0}, parsedindexvalue4_first_stage} :
    _parsedindexvalue4_nextIndex_T_38; // @[Mux.scala 101:16]
  wire [2:0] _GEN_637 = {{1'd0}, parsedindexvalue4_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_638 = _GEN_637 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue4_calculation_1 = _GEN_638[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue4_nextIndex_T_39 = parsedindexvalue4_calculation_1 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue4_nextIndex_T_40 = ~parsedindexvalue4_boolArray__1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue4_nextIndex_T_41 = parsedindexvalue4_calculation_1 == 2'h0 & ~parsedindexvalue4_boolArray__1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue4_nextIndex_T_42 = parsedindexvalue4_calculation_1 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue4_nextIndex_T_44 = parsedindexvalue4_calculation_1 == 2'h1 & _parsedindexvalue4_nextIndex_T_40; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue4_nextIndex_T_45 = parsedindexvalue4_calculation_1 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue4_nextIndex_T_47 = parsedindexvalue4_calculation_1 == 2'h2 & _parsedindexvalue4_nextIndex_T_40; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue4_nextIndex_T_48 = parsedindexvalue4_calculation_1 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue4_nextIndex_T_50 = parsedindexvalue4_calculation_1 == 2'h3 & _parsedindexvalue4_nextIndex_T_40; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue4_nextIndex_T_53 = _parsedindexvalue4_nextIndex_T_39 & parsedindexvalue4_boolArray__1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue4_nextIndex_T_55 = parsedindexvalue4_nextIndex + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue4_nextIndex_T_58 = _parsedindexvalue4_nextIndex_T_42 & parsedindexvalue4_boolArray__1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue4_nextIndex_T_63 = _parsedindexvalue4_nextIndex_T_45 & parsedindexvalue4_boolArray__1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue4_nextIndex_T_65 = parsedindexvalue4_nextIndex - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue4_nextIndex_T_68 = _parsedindexvalue4_nextIndex_T_48 & parsedindexvalue4_boolArray__1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue4_nextIndex_T_71 = _parsedindexvalue4_nextIndex_T_68 ? _parsedindexvalue4_nextIndex_T_65
     : parsedindexvalue4_nextIndex; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_72 = _parsedindexvalue4_nextIndex_T_63 ? _parsedindexvalue4_nextIndex_T_65
     : _parsedindexvalue4_nextIndex_T_71; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_73 = _parsedindexvalue4_nextIndex_T_58 ? _parsedindexvalue4_nextIndex_T_55
     : _parsedindexvalue4_nextIndex_T_72; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_74 = _parsedindexvalue4_nextIndex_T_53 ? _parsedindexvalue4_nextIndex_T_55
     : _parsedindexvalue4_nextIndex_T_73; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_75 = _parsedindexvalue4_nextIndex_T_50 ? parsedindexvalue4_nextIndex :
    _parsedindexvalue4_nextIndex_T_74; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_76 = _parsedindexvalue4_nextIndex_T_47 ? parsedindexvalue4_nextIndex :
    _parsedindexvalue4_nextIndex_T_75; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_nextIndex_T_77 = _parsedindexvalue4_nextIndex_T_44 ? parsedindexvalue4_nextIndex :
    _parsedindexvalue4_nextIndex_T_76; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue4_nextIndex_1 = _parsedindexvalue4_nextIndex_T_41 ? parsedindexvalue4_nextIndex :
    _parsedindexvalue4_nextIndex_T_77; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue4_third_stage_T_1 = parsedindexvalue4_nextIndex_1 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue4_third_stage_T_4 = parsedindexvalue4_nextIndex_1 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue4_third_stage_T_6 = parsedindexvalue4_nextIndex_1 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue4_third_stage_T_7 = _parsedindexvalue4_third_stage_T_1 == 2'h0 ?
    _parsedindexvalue4_third_stage_T_4 : _parsedindexvalue4_third_stage_T_6; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue4 = io_i_mux_bus_0_3[3] ? _parsedindexvalue4_third_stage_T_7 :
    parsedindexvalue4_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_49 = {{1'd0}, parsedindexvalue4};
  wire [15:0] _GEN_70 = 3'h0 == _T_49 ? io_i_data_bus2_0 : _GEN_65; // @[Benes3.scala 155:{44,44}]
  wire [15:0] _GEN_71 = 3'h1 == _T_49 ? io_i_data_bus2_0 : _GEN_66; // @[Benes3.scala 155:{44,44}]
  wire [15:0] _GEN_72 = 3'h2 == _T_49 ? io_i_data_bus2_0 : _GEN_67; // @[Benes3.scala 155:{44,44}]
  wire [15:0] _GEN_73 = 3'h3 == _T_49 ? io_i_data_bus2_0 : _GEN_68; // @[Benes3.scala 155:{44,44}]
  wire [15:0] _GEN_75 = _T_25 & |io_i_mux_bus_0_3 ? _GEN_70 : _GEN_50; // @[Benes3.scala 139:156]
  wire [15:0] _GEN_76 = _T_25 & |io_i_mux_bus_0_3 ? _GEN_71 : _GEN_51; // @[Benes3.scala 139:156]
  wire [15:0] _GEN_77 = _T_25 & |io_i_mux_bus_0_3 ? _GEN_72 : _GEN_52; // @[Benes3.scala 139:156]
  wire [15:0] _GEN_78 = _T_25 & |io_i_mux_bus_0_3 ? _GEN_73 : _GEN_53; // @[Benes3.scala 139:156]
  wire [15:0] _GEN_80 = 3'h0 == _T_3 ? io_i_data_bus2_0 : _GEN_75; // @[Benes3.scala 164:{48,48}]
  wire [15:0] _GEN_81 = 3'h1 == _T_3 ? io_i_data_bus2_0 : _GEN_76; // @[Benes3.scala 164:{48,48}]
  wire [15:0] _GEN_82 = 3'h2 == _T_3 ? io_i_data_bus2_0 : _GEN_77; // @[Benes3.scala 164:{48,48}]
  wire [15:0] _GEN_83 = 3'h3 == _T_3 ? io_i_data_bus2_0 : _GEN_78; // @[Benes3.scala 164:{48,48}]
  wire [15:0] _GEN_85 = 3'h0 == _T_16 ? io_i_data_bus2_0 : _GEN_80; // @[Benes3.scala 169:{44,44}]
  wire [15:0] _GEN_86 = 3'h1 == _T_16 ? io_i_data_bus2_0 : _GEN_81; // @[Benes3.scala 169:{44,44}]
  wire [15:0] _GEN_87 = 3'h2 == _T_16 ? io_i_data_bus2_0 : _GEN_82; // @[Benes3.scala 169:{44,44}]
  wire [15:0] _GEN_88 = 3'h3 == _T_16 ? io_i_data_bus2_0 : _GEN_83; // @[Benes3.scala 169:{44,44}]
  wire [15:0] _GEN_90 = 3'h0 == _T_30 ? io_i_data_bus2_0 : _GEN_85; // @[Benes3.scala 173:{44,44}]
  wire [15:0] _GEN_91 = 3'h1 == _T_30 ? io_i_data_bus2_0 : _GEN_86; // @[Benes3.scala 173:{44,44}]
  wire [15:0] _GEN_92 = 3'h2 == _T_30 ? io_i_data_bus2_0 : _GEN_87; // @[Benes3.scala 173:{44,44}]
  wire [15:0] _GEN_93 = 3'h3 == _T_30 ? io_i_data_bus2_0 : _GEN_88; // @[Benes3.scala 173:{44,44}]
  wire [15:0] _GEN_95 = 3'h0 == _T_49 ? io_i_data_bus2_0 : _GEN_90; // @[Benes3.scala 177:{44,44}]
  wire [15:0] _GEN_96 = 3'h1 == _T_49 ? io_i_data_bus2_0 : _GEN_91; // @[Benes3.scala 177:{44,44}]
  wire [15:0] _GEN_97 = 3'h2 == _T_49 ? io_i_data_bus2_0 : _GEN_92; // @[Benes3.scala 177:{44,44}]
  wire [15:0] _GEN_98 = 3'h3 == _T_49 ? io_i_data_bus2_0 : _GEN_93; // @[Benes3.scala 177:{44,44}]
  wire [15:0] _GEN_100 = _T_2 & _T_11 & _T_23 & _T_40 ? _GEN_95 : _GEN_75; // @[Benes3.scala 161:160]
  wire [15:0] _GEN_101 = _T_2 & _T_11 & _T_23 & _T_40 ? _GEN_96 : _GEN_76; // @[Benes3.scala 161:160]
  wire [15:0] _GEN_102 = _T_2 & _T_11 & _T_23 & _T_40 ? _GEN_97 : _GEN_77; // @[Benes3.scala 161:160]
  wire [15:0] _GEN_103 = _T_2 & _T_11 & _T_23 & _T_40 ? _GEN_98 : _GEN_78; // @[Benes3.scala 161:160]
  wire [15:0] _GEN_105 = io_i_data_bus2_0 != 16'h0 ? _GEN_100 : 16'h0; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_106 = io_i_data_bus2_0 != 16'h0 ? _GEN_101 : 16'h0; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_107 = io_i_data_bus2_0 != 16'h0 ? _GEN_102 : 16'h0; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_108 = io_i_data_bus2_0 != 16'h0 ? _GEN_103 : 16'h0; // @[Benes3.scala 62:39]
  wire  _T_71 = |io_i_mux_bus_1_0; // @[Benes3.scala 64:35]
  wire  parsedindexvalue_first_stage_2 = io_i_mux_bus_1_0[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray_2_0 = io_i_mux_bus_1_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray_2_1 = io_i_mux_bus_1_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_660 = {{2'd0}, parsedindexvalue_first_stage_2}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_661 = _GEN_660 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue_calculation_4 = _GEN_661[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_156 = ~parsedindexvalue_calculation_4; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_157 = ~parsedindexvalue_boolArray_2_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_158 = ~parsedindexvalue_calculation_4 & ~parsedindexvalue_boolArray_2_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_161 = parsedindexvalue_calculation_4 & _parsedindexvalue_nextIndex_T_157; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_472 = {{1'd0}, parsedindexvalue_calculation_4}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_162 = _GEN_472 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_164 = _GEN_472 == 2'h2 & _parsedindexvalue_nextIndex_T_157; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_165 = _GEN_472 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_167 = _GEN_472 == 2'h3 & _parsedindexvalue_nextIndex_T_157; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_170 = _parsedindexvalue_nextIndex_T_156 & parsedindexvalue_boolArray_2_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_474 = {{1'd0}, parsedindexvalue_first_stage_2}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_172 = _GEN_474 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_175 = parsedindexvalue_calculation_4 & parsedindexvalue_boolArray_2_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_180 = _parsedindexvalue_nextIndex_T_162 & parsedindexvalue_boolArray_2_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_182 = _GEN_474 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_185 = _parsedindexvalue_nextIndex_T_165 & parsedindexvalue_boolArray_2_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_188 = _parsedindexvalue_nextIndex_T_185 ? _parsedindexvalue_nextIndex_T_182
     : {{1'd0}, parsedindexvalue_first_stage_2}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_189 = _parsedindexvalue_nextIndex_T_180 ? _parsedindexvalue_nextIndex_T_182
     : _parsedindexvalue_nextIndex_T_188; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_190 = _parsedindexvalue_nextIndex_T_175 ? _parsedindexvalue_nextIndex_T_172
     : _parsedindexvalue_nextIndex_T_189; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_191 = _parsedindexvalue_nextIndex_T_170 ? _parsedindexvalue_nextIndex_T_172
     : _parsedindexvalue_nextIndex_T_190; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_192 = _parsedindexvalue_nextIndex_T_167 ? {{1'd0},
    parsedindexvalue_first_stage_2} : _parsedindexvalue_nextIndex_T_191; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_193 = _parsedindexvalue_nextIndex_T_164 ? {{1'd0},
    parsedindexvalue_first_stage_2} : _parsedindexvalue_nextIndex_T_192; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_194 = _parsedindexvalue_nextIndex_T_161 ? {{1'd0},
    parsedindexvalue_first_stage_2} : _parsedindexvalue_nextIndex_T_193; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_4 = _parsedindexvalue_nextIndex_T_158 ? {{1'd0}, parsedindexvalue_first_stage_2}
     : _parsedindexvalue_nextIndex_T_194; // @[Mux.scala 101:16]
  wire [2:0] _GEN_662 = {{1'd0}, parsedindexvalue_nextIndex_4}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_663 = _GEN_662 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_5 = _GEN_663[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_195 = parsedindexvalue_calculation_5 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_196 = ~parsedindexvalue_boolArray_2_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_197 = parsedindexvalue_calculation_5 == 2'h0 & ~parsedindexvalue_boolArray_2_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_198 = parsedindexvalue_calculation_5 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_200 = parsedindexvalue_calculation_5 == 2'h1 & _parsedindexvalue_nextIndex_T_196; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_201 = parsedindexvalue_calculation_5 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_203 = parsedindexvalue_calculation_5 == 2'h2 & _parsedindexvalue_nextIndex_T_196; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_204 = parsedindexvalue_calculation_5 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_206 = parsedindexvalue_calculation_5 == 2'h3 & _parsedindexvalue_nextIndex_T_196; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_209 = _parsedindexvalue_nextIndex_T_195 & parsedindexvalue_boolArray_2_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_211 = parsedindexvalue_nextIndex_4 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_214 = _parsedindexvalue_nextIndex_T_198 & parsedindexvalue_boolArray_2_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_219 = _parsedindexvalue_nextIndex_T_201 & parsedindexvalue_boolArray_2_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_221 = parsedindexvalue_nextIndex_4 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_224 = _parsedindexvalue_nextIndex_T_204 & parsedindexvalue_boolArray_2_1; // @[Benes3.scala 43:36]
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
  wire [1:0] _parsedindexvalue_third_stage_T_17 = parsedindexvalue_nextIndex_5 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_20 = parsedindexvalue_nextIndex_5 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_22 = parsedindexvalue_nextIndex_5 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_23 = _parsedindexvalue_third_stage_T_17 == 2'h0 ?
    _parsedindexvalue_third_stage_T_20 : _parsedindexvalue_third_stage_T_22; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue_2 = io_i_mux_bus_1_0[3] ? _parsedindexvalue_third_stage_T_23 :
    parsedindexvalue_nextIndex_5; // @[Benes3.scala 49:24]
  wire [2:0] _T_73 = {{1'd0}, parsedindexvalue_2};
  wire [15:0] _GEN_110 = 3'h0 == _T_73 ? io_i_data_bus2_1 : _GEN_105; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_111 = 3'h1 == _T_73 ? io_i_data_bus2_1 : _GEN_106; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_112 = 3'h2 == _T_73 ? io_i_data_bus2_1 : _GEN_107; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_113 = 3'h3 == _T_73 ? io_i_data_bus2_1 : _GEN_108; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_115 = ~(|io_i_mux_bus_1_0) ? _GEN_110 : _GEN_105; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_116 = ~(|io_i_mux_bus_1_0) ? _GEN_111 : _GEN_106; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_117 = ~(|io_i_mux_bus_1_0) ? _GEN_112 : _GEN_107; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_118 = ~(|io_i_mux_bus_1_0) ? _GEN_113 : _GEN_108; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_120 = 3'h0 == _T_73 ? io_i_data_bus2_1 : _GEN_115; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_121 = 3'h1 == _T_73 ? io_i_data_bus2_1 : _GEN_116; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_122 = 3'h2 == _T_73 ? io_i_data_bus2_1 : _GEN_117; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_123 = 3'h3 == _T_73 ? io_i_data_bus2_1 : _GEN_118; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_125 = _T_71 ? _GEN_120 : _GEN_115; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_126 = _T_71 ? _GEN_121 : _GEN_116; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_127 = _T_71 ? _GEN_122 : _GEN_117; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_128 = _T_71 ? _GEN_123 : _GEN_118; // @[Benes3.scala 74:48]
  wire  _T_83 = _T_71 & |io_i_mux_bus_1_1; // @[Benes3.scala 92:48]
  wire [15:0] _GEN_130 = 3'h0 == _T_73 ? io_i_data_bus2_1 : _GEN_125; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_131 = 3'h1 == _T_73 ? io_i_data_bus2_1 : _GEN_126; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_132 = 3'h2 == _T_73 ? io_i_data_bus2_1 : _GEN_127; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_133 = 3'h3 == _T_73 ? io_i_data_bus2_1 : _GEN_128; // @[Benes3.scala 95:{48,48}]
  wire  parsedindexvalue2_first_stage_4 = io_i_mux_bus_1_1[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray_4_0 = io_i_mux_bus_1_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray_4_1 = io_i_mux_bus_1_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_675 = {{2'd0}, parsedindexvalue2_first_stage_4}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_676 = _GEN_675 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue2_calculation_8 = _GEN_676[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_312 = ~parsedindexvalue2_calculation_8; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_313 = ~parsedindexvalue2_boolArray_4_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_314 = ~parsedindexvalue2_calculation_8 & ~parsedindexvalue2_boolArray_4_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_317 = parsedindexvalue2_calculation_8 & _parsedindexvalue2_nextIndex_T_313; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_496 = {{1'd0}, parsedindexvalue2_calculation_8}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_318 = _GEN_496 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_320 = _GEN_496 == 2'h2 & _parsedindexvalue2_nextIndex_T_313; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_321 = _GEN_496 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_323 = _GEN_496 == 2'h3 & _parsedindexvalue2_nextIndex_T_313; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_326 = _parsedindexvalue2_nextIndex_T_312 & parsedindexvalue2_boolArray_4_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_498 = {{1'd0}, parsedindexvalue2_first_stage_4}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue2_nextIndex_T_328 = _GEN_498 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_331 = parsedindexvalue2_calculation_8 & parsedindexvalue2_boolArray_4_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_336 = _parsedindexvalue2_nextIndex_T_318 & parsedindexvalue2_boolArray_4_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_338 = _GEN_498 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_341 = _parsedindexvalue2_nextIndex_T_321 & parsedindexvalue2_boolArray_4_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_344 = _parsedindexvalue2_nextIndex_T_341 ?
    _parsedindexvalue2_nextIndex_T_338 : {{1'd0}, parsedindexvalue2_first_stage_4}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_345 = _parsedindexvalue2_nextIndex_T_336 ?
    _parsedindexvalue2_nextIndex_T_338 : _parsedindexvalue2_nextIndex_T_344; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_346 = _parsedindexvalue2_nextIndex_T_331 ?
    _parsedindexvalue2_nextIndex_T_328 : _parsedindexvalue2_nextIndex_T_345; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_347 = _parsedindexvalue2_nextIndex_T_326 ?
    _parsedindexvalue2_nextIndex_T_328 : _parsedindexvalue2_nextIndex_T_346; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_348 = _parsedindexvalue2_nextIndex_T_323 ? {{1'd0},
    parsedindexvalue2_first_stage_4} : _parsedindexvalue2_nextIndex_T_347; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_349 = _parsedindexvalue2_nextIndex_T_320 ? {{1'd0},
    parsedindexvalue2_first_stage_4} : _parsedindexvalue2_nextIndex_T_348; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_350 = _parsedindexvalue2_nextIndex_T_317 ? {{1'd0},
    parsedindexvalue2_first_stage_4} : _parsedindexvalue2_nextIndex_T_349; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_8 = _parsedindexvalue2_nextIndex_T_314 ? {{1'd0},
    parsedindexvalue2_first_stage_4} : _parsedindexvalue2_nextIndex_T_350; // @[Mux.scala 101:16]
  wire [2:0] _GEN_677 = {{1'd0}, parsedindexvalue2_nextIndex_8}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_678 = _GEN_677 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_9 = _GEN_678[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_351 = parsedindexvalue2_calculation_9 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_352 = ~parsedindexvalue2_boolArray_4_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_353 = parsedindexvalue2_calculation_9 == 2'h0 & ~parsedindexvalue2_boolArray_4_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_354 = parsedindexvalue2_calculation_9 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_356 = parsedindexvalue2_calculation_9 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_352; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_357 = parsedindexvalue2_calculation_9 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_359 = parsedindexvalue2_calculation_9 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_352; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_360 = parsedindexvalue2_calculation_9 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_362 = parsedindexvalue2_calculation_9 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_352; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_365 = _parsedindexvalue2_nextIndex_T_351 & parsedindexvalue2_boolArray_4_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_367 = parsedindexvalue2_nextIndex_8 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_370 = _parsedindexvalue2_nextIndex_T_354 & parsedindexvalue2_boolArray_4_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_375 = _parsedindexvalue2_nextIndex_T_357 & parsedindexvalue2_boolArray_4_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_377 = parsedindexvalue2_nextIndex_8 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_380 = _parsedindexvalue2_nextIndex_T_360 & parsedindexvalue2_boolArray_4_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_383 = _parsedindexvalue2_nextIndex_T_380 ?
    _parsedindexvalue2_nextIndex_T_377 : parsedindexvalue2_nextIndex_8; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_384 = _parsedindexvalue2_nextIndex_T_375 ?
    _parsedindexvalue2_nextIndex_T_377 : _parsedindexvalue2_nextIndex_T_383; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_385 = _parsedindexvalue2_nextIndex_T_370 ?
    _parsedindexvalue2_nextIndex_T_367 : _parsedindexvalue2_nextIndex_T_384; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_386 = _parsedindexvalue2_nextIndex_T_365 ?
    _parsedindexvalue2_nextIndex_T_367 : _parsedindexvalue2_nextIndex_T_385; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_387 = _parsedindexvalue2_nextIndex_T_362 ? parsedindexvalue2_nextIndex_8 :
    _parsedindexvalue2_nextIndex_T_386; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_388 = _parsedindexvalue2_nextIndex_T_359 ? parsedindexvalue2_nextIndex_8 :
    _parsedindexvalue2_nextIndex_T_387; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_389 = _parsedindexvalue2_nextIndex_T_356 ? parsedindexvalue2_nextIndex_8 :
    _parsedindexvalue2_nextIndex_T_388; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_9 = _parsedindexvalue2_nextIndex_T_353 ? parsedindexvalue2_nextIndex_8 :
    _parsedindexvalue2_nextIndex_T_389; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_third_stage_T_33 = parsedindexvalue2_nextIndex_9 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue2_third_stage_T_36 = parsedindexvalue2_nextIndex_9 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue2_third_stage_T_38 = parsedindexvalue2_nextIndex_9 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue2_third_stage_T_39 = _parsedindexvalue2_third_stage_T_33 == 2'h0 ?
    _parsedindexvalue2_third_stage_T_36 : _parsedindexvalue2_third_stage_T_38; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue2_4 = io_i_mux_bus_1_1[3] ? _parsedindexvalue2_third_stage_T_39 :
    parsedindexvalue2_nextIndex_9; // @[Benes3.scala 49:24]
  wire [2:0] _T_86 = {{1'd0}, parsedindexvalue2_4};
  wire [15:0] _GEN_135 = 3'h0 == _T_86 ? io_i_data_bus2_1 : _GEN_130; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_136 = 3'h1 == _T_86 ? io_i_data_bus2_1 : _GEN_131; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_137 = 3'h2 == _T_86 ? io_i_data_bus2_1 : _GEN_132; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_138 = 3'h3 == _T_86 ? io_i_data_bus2_1 : _GEN_133; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_140 = _T_71 & |io_i_mux_bus_1_1 ? _GEN_135 : _GEN_125; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_141 = _T_71 & |io_i_mux_bus_1_1 ? _GEN_136 : _GEN_126; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_142 = _T_71 & |io_i_mux_bus_1_1 ? _GEN_137 : _GEN_127; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_143 = _T_71 & |io_i_mux_bus_1_1 ? _GEN_138 : _GEN_128; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_145 = 3'h0 == _T_73 ? io_i_data_bus2_1 : _GEN_140; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_146 = 3'h1 == _T_73 ? io_i_data_bus2_1 : _GEN_141; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_147 = 3'h2 == _T_73 ? io_i_data_bus2_1 : _GEN_142; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_148 = 3'h3 == _T_73 ? io_i_data_bus2_1 : _GEN_143; // @[Benes3.scala 117:{48,48}]
  wire [15:0] _GEN_150 = 3'h0 == _T_86 ? io_i_data_bus2_1 : _GEN_145; // @[Benes3.scala 122:{44,44}]
  wire [15:0] _GEN_151 = 3'h1 == _T_86 ? io_i_data_bus2_1 : _GEN_146; // @[Benes3.scala 122:{44,44}]
  wire [15:0] _GEN_152 = 3'h2 == _T_86 ? io_i_data_bus2_1 : _GEN_147; // @[Benes3.scala 122:{44,44}]
  wire [15:0] _GEN_153 = 3'h3 == _T_86 ? io_i_data_bus2_1 : _GEN_148; // @[Benes3.scala 122:{44,44}]
  wire  parsedindexvalue3_first_stage_3 = io_i_mux_bus_1_2[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue3_boolArray_3_0 = io_i_mux_bus_1_2[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue3_boolArray_3_1 = io_i_mux_bus_1_2[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_690 = {{2'd0}, parsedindexvalue3_first_stage_3}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_691 = _GEN_690 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue3_calculation_6 = _GEN_691[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_234 = ~parsedindexvalue3_calculation_6; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_235 = ~parsedindexvalue3_boolArray_3_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_236 = ~parsedindexvalue3_calculation_6 & ~parsedindexvalue3_boolArray_3_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_239 = parsedindexvalue3_calculation_6 & _parsedindexvalue3_nextIndex_T_235; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_520 = {{1'd0}, parsedindexvalue3_calculation_6}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_240 = _GEN_520 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_242 = _GEN_520 == 2'h2 & _parsedindexvalue3_nextIndex_T_235; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_243 = _GEN_520 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_245 = _GEN_520 == 2'h3 & _parsedindexvalue3_nextIndex_T_235; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_248 = _parsedindexvalue3_nextIndex_T_234 & parsedindexvalue3_boolArray_3_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_522 = {{1'd0}, parsedindexvalue3_first_stage_3}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue3_nextIndex_T_250 = _GEN_522 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_253 = parsedindexvalue3_calculation_6 & parsedindexvalue3_boolArray_3_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_258 = _parsedindexvalue3_nextIndex_T_240 & parsedindexvalue3_boolArray_3_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_260 = _GEN_522 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_263 = _parsedindexvalue3_nextIndex_T_243 & parsedindexvalue3_boolArray_3_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_266 = _parsedindexvalue3_nextIndex_T_263 ?
    _parsedindexvalue3_nextIndex_T_260 : {{1'd0}, parsedindexvalue3_first_stage_3}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_267 = _parsedindexvalue3_nextIndex_T_258 ?
    _parsedindexvalue3_nextIndex_T_260 : _parsedindexvalue3_nextIndex_T_266; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_268 = _parsedindexvalue3_nextIndex_T_253 ?
    _parsedindexvalue3_nextIndex_T_250 : _parsedindexvalue3_nextIndex_T_267; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_269 = _parsedindexvalue3_nextIndex_T_248 ?
    _parsedindexvalue3_nextIndex_T_250 : _parsedindexvalue3_nextIndex_T_268; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_270 = _parsedindexvalue3_nextIndex_T_245 ? {{1'd0},
    parsedindexvalue3_first_stage_3} : _parsedindexvalue3_nextIndex_T_269; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_271 = _parsedindexvalue3_nextIndex_T_242 ? {{1'd0},
    parsedindexvalue3_first_stage_3} : _parsedindexvalue3_nextIndex_T_270; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_272 = _parsedindexvalue3_nextIndex_T_239 ? {{1'd0},
    parsedindexvalue3_first_stage_3} : _parsedindexvalue3_nextIndex_T_271; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_6 = _parsedindexvalue3_nextIndex_T_236 ? {{1'd0},
    parsedindexvalue3_first_stage_3} : _parsedindexvalue3_nextIndex_T_272; // @[Mux.scala 101:16]
  wire [2:0] _GEN_692 = {{1'd0}, parsedindexvalue3_nextIndex_6}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_693 = _GEN_692 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_7 = _GEN_693[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_273 = parsedindexvalue3_calculation_7 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_274 = ~parsedindexvalue3_boolArray_3_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_275 = parsedindexvalue3_calculation_7 == 2'h0 & ~parsedindexvalue3_boolArray_3_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_276 = parsedindexvalue3_calculation_7 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_278 = parsedindexvalue3_calculation_7 == 2'h1 &
    _parsedindexvalue3_nextIndex_T_274; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_279 = parsedindexvalue3_calculation_7 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_281 = parsedindexvalue3_calculation_7 == 2'h2 &
    _parsedindexvalue3_nextIndex_T_274; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_282 = parsedindexvalue3_calculation_7 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_284 = parsedindexvalue3_calculation_7 == 2'h3 &
    _parsedindexvalue3_nextIndex_T_274; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_287 = _parsedindexvalue3_nextIndex_T_273 & parsedindexvalue3_boolArray_3_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_289 = parsedindexvalue3_nextIndex_6 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_292 = _parsedindexvalue3_nextIndex_T_276 & parsedindexvalue3_boolArray_3_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_297 = _parsedindexvalue3_nextIndex_T_279 & parsedindexvalue3_boolArray_3_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_299 = parsedindexvalue3_nextIndex_6 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_302 = _parsedindexvalue3_nextIndex_T_282 & parsedindexvalue3_boolArray_3_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_305 = _parsedindexvalue3_nextIndex_T_302 ?
    _parsedindexvalue3_nextIndex_T_299 : parsedindexvalue3_nextIndex_6; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_306 = _parsedindexvalue3_nextIndex_T_297 ?
    _parsedindexvalue3_nextIndex_T_299 : _parsedindexvalue3_nextIndex_T_305; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_307 = _parsedindexvalue3_nextIndex_T_292 ?
    _parsedindexvalue3_nextIndex_T_289 : _parsedindexvalue3_nextIndex_T_306; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_308 = _parsedindexvalue3_nextIndex_T_287 ?
    _parsedindexvalue3_nextIndex_T_289 : _parsedindexvalue3_nextIndex_T_307; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_309 = _parsedindexvalue3_nextIndex_T_284 ? parsedindexvalue3_nextIndex_6 :
    _parsedindexvalue3_nextIndex_T_308; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_310 = _parsedindexvalue3_nextIndex_T_281 ? parsedindexvalue3_nextIndex_6 :
    _parsedindexvalue3_nextIndex_T_309; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_311 = _parsedindexvalue3_nextIndex_T_278 ? parsedindexvalue3_nextIndex_6 :
    _parsedindexvalue3_nextIndex_T_310; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_7 = _parsedindexvalue3_nextIndex_T_275 ? parsedindexvalue3_nextIndex_6 :
    _parsedindexvalue3_nextIndex_T_311; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_third_stage_T_25 = parsedindexvalue3_nextIndex_7 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue3_third_stage_T_28 = parsedindexvalue3_nextIndex_7 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue3_third_stage_T_30 = parsedindexvalue3_nextIndex_7 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue3_third_stage_T_31 = _parsedindexvalue3_third_stage_T_25 == 2'h0 ?
    _parsedindexvalue3_third_stage_T_28 : _parsedindexvalue3_third_stage_T_30; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue3_3 = io_i_mux_bus_1_2[3] ? _parsedindexvalue3_third_stage_T_31 :
    parsedindexvalue3_nextIndex_7; // @[Benes3.scala 49:24]
  wire [2:0] _T_100 = {{1'd0}, parsedindexvalue3_3};
  wire [15:0] _GEN_155 = 3'h0 == _T_100 ? io_i_data_bus2_1 : _GEN_150; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_156 = 3'h1 == _T_100 ? io_i_data_bus2_1 : _GEN_151; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_157 = 3'h2 == _T_100 ? io_i_data_bus2_1 : _GEN_152; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_158 = 3'h3 == _T_100 ? io_i_data_bus2_1 : _GEN_153; // @[Benes3.scala 126:{44,44}]
  wire [15:0] _GEN_160 = _T_83 & |io_i_mux_bus_1_2 ? _GEN_155 : _GEN_140; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_161 = _T_83 & |io_i_mux_bus_1_2 ? _GEN_156 : _GEN_141; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_162 = _T_83 & |io_i_mux_bus_1_2 ? _GEN_157 : _GEN_142; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_163 = _T_83 & |io_i_mux_bus_1_2 ? _GEN_158 : _GEN_143; // @[Benes3.scala 114:120]
  wire [15:0] _GEN_215 = io_i_data_bus2_1 != 16'h0 ? _GEN_160 : _GEN_105; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_216 = io_i_data_bus2_1 != 16'h0 ? _GEN_161 : _GEN_106; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_217 = io_i_data_bus2_1 != 16'h0 ? _GEN_162 : _GEN_107; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_218 = io_i_data_bus2_1 != 16'h0 ? _GEN_163 : _GEN_108; // @[Benes3.scala 62:39]
  wire  _T_141 = |io_i_mux_bus_2_0; // @[Benes3.scala 64:35]
  wire [1:0] parsedindexvalue_first_stage_4 = io_i_mux_bus_2_0[0] ? 2'h3 : 2'h2; // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray_4_0 = io_i_mux_bus_2_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray_4_1 = io_i_mux_bus_2_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_730 = {{1'd0}, parsedindexvalue_first_stage_4}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_731 = _GEN_730 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_8 = _GEN_731[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_312 = parsedindexvalue_calculation_8 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_313 = ~parsedindexvalue_boolArray_4_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_314 = parsedindexvalue_calculation_8 == 2'h0 & ~parsedindexvalue_boolArray_4_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_315 = parsedindexvalue_calculation_8 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_317 = parsedindexvalue_calculation_8 == 2'h1 & _parsedindexvalue_nextIndex_T_313; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_318 = parsedindexvalue_calculation_8 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_320 = parsedindexvalue_calculation_8 == 2'h2 & _parsedindexvalue_nextIndex_T_313; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_321 = parsedindexvalue_calculation_8 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_323 = parsedindexvalue_calculation_8 == 2'h3 & _parsedindexvalue_nextIndex_T_313; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_326 = _parsedindexvalue_nextIndex_T_312 & parsedindexvalue_boolArray_4_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_328 = parsedindexvalue_first_stage_4 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_331 = _parsedindexvalue_nextIndex_T_315 & parsedindexvalue_boolArray_4_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_336 = _parsedindexvalue_nextIndex_T_318 & parsedindexvalue_boolArray_4_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_338 = parsedindexvalue_first_stage_4 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_341 = _parsedindexvalue_nextIndex_T_321 & parsedindexvalue_boolArray_4_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_344 = _parsedindexvalue_nextIndex_T_341 ? _parsedindexvalue_nextIndex_T_338
     : parsedindexvalue_first_stage_4; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_345 = _parsedindexvalue_nextIndex_T_336 ? _parsedindexvalue_nextIndex_T_338
     : _parsedindexvalue_nextIndex_T_344; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_346 = _parsedindexvalue_nextIndex_T_331 ? _parsedindexvalue_nextIndex_T_328
     : _parsedindexvalue_nextIndex_T_345; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_347 = _parsedindexvalue_nextIndex_T_326 ? _parsedindexvalue_nextIndex_T_328
     : _parsedindexvalue_nextIndex_T_346; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_348 = _parsedindexvalue_nextIndex_T_323 ? parsedindexvalue_first_stage_4 :
    _parsedindexvalue_nextIndex_T_347; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_349 = _parsedindexvalue_nextIndex_T_320 ? parsedindexvalue_first_stage_4 :
    _parsedindexvalue_nextIndex_T_348; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_350 = _parsedindexvalue_nextIndex_T_317 ? parsedindexvalue_first_stage_4 :
    _parsedindexvalue_nextIndex_T_349; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_8 = _parsedindexvalue_nextIndex_T_314 ? parsedindexvalue_first_stage_4 :
    _parsedindexvalue_nextIndex_T_350; // @[Mux.scala 101:16]
  wire [2:0] _GEN_732 = {{1'd0}, parsedindexvalue_nextIndex_8}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_733 = _GEN_732 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_9 = _GEN_733[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_351 = parsedindexvalue_calculation_9 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_352 = ~parsedindexvalue_boolArray_4_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_353 = parsedindexvalue_calculation_9 == 2'h0 & ~parsedindexvalue_boolArray_4_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_354 = parsedindexvalue_calculation_9 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_356 = parsedindexvalue_calculation_9 == 2'h1 & _parsedindexvalue_nextIndex_T_352; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_357 = parsedindexvalue_calculation_9 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_359 = parsedindexvalue_calculation_9 == 2'h2 & _parsedindexvalue_nextIndex_T_352; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_360 = parsedindexvalue_calculation_9 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_362 = parsedindexvalue_calculation_9 == 2'h3 & _parsedindexvalue_nextIndex_T_352; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_365 = _parsedindexvalue_nextIndex_T_351 & parsedindexvalue_boolArray_4_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_367 = parsedindexvalue_nextIndex_8 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_370 = _parsedindexvalue_nextIndex_T_354 & parsedindexvalue_boolArray_4_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_375 = _parsedindexvalue_nextIndex_T_357 & parsedindexvalue_boolArray_4_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_377 = parsedindexvalue_nextIndex_8 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_380 = _parsedindexvalue_nextIndex_T_360 & parsedindexvalue_boolArray_4_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_383 = _parsedindexvalue_nextIndex_T_380 ? _parsedindexvalue_nextIndex_T_377
     : parsedindexvalue_nextIndex_8; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_384 = _parsedindexvalue_nextIndex_T_375 ? _parsedindexvalue_nextIndex_T_377
     : _parsedindexvalue_nextIndex_T_383; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_385 = _parsedindexvalue_nextIndex_T_370 ? _parsedindexvalue_nextIndex_T_367
     : _parsedindexvalue_nextIndex_T_384; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_386 = _parsedindexvalue_nextIndex_T_365 ? _parsedindexvalue_nextIndex_T_367
     : _parsedindexvalue_nextIndex_T_385; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_387 = _parsedindexvalue_nextIndex_T_362 ? parsedindexvalue_nextIndex_8 :
    _parsedindexvalue_nextIndex_T_386; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_388 = _parsedindexvalue_nextIndex_T_359 ? parsedindexvalue_nextIndex_8 :
    _parsedindexvalue_nextIndex_T_387; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_389 = _parsedindexvalue_nextIndex_T_356 ? parsedindexvalue_nextIndex_8 :
    _parsedindexvalue_nextIndex_T_388; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_9 = _parsedindexvalue_nextIndex_T_353 ? parsedindexvalue_nextIndex_8 :
    _parsedindexvalue_nextIndex_T_389; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_33 = parsedindexvalue_nextIndex_9 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_36 = parsedindexvalue_nextIndex_9 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_38 = parsedindexvalue_nextIndex_9 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_39 = _parsedindexvalue_third_stage_T_33 == 2'h0 ?
    _parsedindexvalue_third_stage_T_36 : _parsedindexvalue_third_stage_T_38; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue_4 = io_i_mux_bus_2_0[3] ? _parsedindexvalue_third_stage_T_39 :
    parsedindexvalue_nextIndex_9; // @[Benes3.scala 49:24]
  wire [2:0] _T_143 = {{1'd0}, parsedindexvalue_4};
  wire [15:0] _GEN_220 = 3'h0 == _T_143 ? io_i_data_bus2_2 : _GEN_215; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_221 = 3'h1 == _T_143 ? io_i_data_bus2_2 : _GEN_216; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_222 = 3'h2 == _T_143 ? io_i_data_bus2_2 : _GEN_217; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_223 = 3'h3 == _T_143 ? io_i_data_bus2_2 : _GEN_218; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_225 = ~(|io_i_mux_bus_2_0) ? _GEN_220 : _GEN_215; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_226 = ~(|io_i_mux_bus_2_0) ? _GEN_221 : _GEN_216; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_227 = ~(|io_i_mux_bus_2_0) ? _GEN_222 : _GEN_217; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_228 = ~(|io_i_mux_bus_2_0) ? _GEN_223 : _GEN_218; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_230 = 3'h0 == _T_143 ? io_i_data_bus2_2 : _GEN_225; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_231 = 3'h1 == _T_143 ? io_i_data_bus2_2 : _GEN_226; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_232 = 3'h2 == _T_143 ? io_i_data_bus2_2 : _GEN_227; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_233 = 3'h3 == _T_143 ? io_i_data_bus2_2 : _GEN_228; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_235 = _T_141 ? _GEN_230 : _GEN_225; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_236 = _T_141 ? _GEN_231 : _GEN_226; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_237 = _T_141 ? _GEN_232 : _GEN_227; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_238 = _T_141 ? _GEN_233 : _GEN_228; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_240 = 3'h0 == _T_143 ? io_i_data_bus2_2 : _GEN_235; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_241 = 3'h1 == _T_143 ? io_i_data_bus2_2 : _GEN_236; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_242 = 3'h2 == _T_143 ? io_i_data_bus2_2 : _GEN_237; // @[Benes3.scala 95:{48,48}]
  wire [15:0] _GEN_243 = 3'h3 == _T_143 ? io_i_data_bus2_2 : _GEN_238; // @[Benes3.scala 95:{48,48}]
  wire [1:0] parsedindexvalue2_first_stage_8 = io_i_mux_bus_2_1[0] ? 2'h3 : 2'h2; // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray_8_0 = io_i_mux_bus_2_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray_8_1 = io_i_mux_bus_2_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_742 = {{1'd0}, parsedindexvalue2_first_stage_8}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_743 = _GEN_742 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_16 = _GEN_743[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_624 = parsedindexvalue2_calculation_16 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_625 = ~parsedindexvalue2_boolArray_8_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_626 = parsedindexvalue2_calculation_16 == 2'h0 & ~parsedindexvalue2_boolArray_8_0
    ; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_627 = parsedindexvalue2_calculation_16 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_629 = parsedindexvalue2_calculation_16 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_625; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_630 = parsedindexvalue2_calculation_16 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_632 = parsedindexvalue2_calculation_16 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_625; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_633 = parsedindexvalue2_calculation_16 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_635 = parsedindexvalue2_calculation_16 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_625; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_638 = _parsedindexvalue2_nextIndex_T_624 & parsedindexvalue2_boolArray_8_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_640 = parsedindexvalue2_first_stage_8 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_643 = _parsedindexvalue2_nextIndex_T_627 & parsedindexvalue2_boolArray_8_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_648 = _parsedindexvalue2_nextIndex_T_630 & parsedindexvalue2_boolArray_8_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_650 = parsedindexvalue2_first_stage_8 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_653 = _parsedindexvalue2_nextIndex_T_633 & parsedindexvalue2_boolArray_8_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_656 = _parsedindexvalue2_nextIndex_T_653 ?
    _parsedindexvalue2_nextIndex_T_650 : parsedindexvalue2_first_stage_8; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_657 = _parsedindexvalue2_nextIndex_T_648 ?
    _parsedindexvalue2_nextIndex_T_650 : _parsedindexvalue2_nextIndex_T_656; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_658 = _parsedindexvalue2_nextIndex_T_643 ?
    _parsedindexvalue2_nextIndex_T_640 : _parsedindexvalue2_nextIndex_T_657; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_659 = _parsedindexvalue2_nextIndex_T_638 ?
    _parsedindexvalue2_nextIndex_T_640 : _parsedindexvalue2_nextIndex_T_658; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_660 = _parsedindexvalue2_nextIndex_T_635 ? parsedindexvalue2_first_stage_8
     : _parsedindexvalue2_nextIndex_T_659; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_661 = _parsedindexvalue2_nextIndex_T_632 ? parsedindexvalue2_first_stage_8
     : _parsedindexvalue2_nextIndex_T_660; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_662 = _parsedindexvalue2_nextIndex_T_629 ? parsedindexvalue2_first_stage_8
     : _parsedindexvalue2_nextIndex_T_661; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_16 = _parsedindexvalue2_nextIndex_T_626 ? parsedindexvalue2_first_stage_8 :
    _parsedindexvalue2_nextIndex_T_662; // @[Mux.scala 101:16]
  wire [2:0] _GEN_744 = {{1'd0}, parsedindexvalue2_nextIndex_16}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_745 = _GEN_744 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_17 = _GEN_745[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_663 = parsedindexvalue2_calculation_17 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_664 = ~parsedindexvalue2_boolArray_8_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_665 = parsedindexvalue2_calculation_17 == 2'h0 & ~parsedindexvalue2_boolArray_8_1
    ; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_666 = parsedindexvalue2_calculation_17 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_668 = parsedindexvalue2_calculation_17 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_664; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_669 = parsedindexvalue2_calculation_17 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_671 = parsedindexvalue2_calculation_17 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_664; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_672 = parsedindexvalue2_calculation_17 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_674 = parsedindexvalue2_calculation_17 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_664; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_677 = _parsedindexvalue2_nextIndex_T_663 & parsedindexvalue2_boolArray_8_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_679 = parsedindexvalue2_nextIndex_16 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_682 = _parsedindexvalue2_nextIndex_T_666 & parsedindexvalue2_boolArray_8_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_687 = _parsedindexvalue2_nextIndex_T_669 & parsedindexvalue2_boolArray_8_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_689 = parsedindexvalue2_nextIndex_16 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_692 = _parsedindexvalue2_nextIndex_T_672 & parsedindexvalue2_boolArray_8_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_695 = _parsedindexvalue2_nextIndex_T_692 ?
    _parsedindexvalue2_nextIndex_T_689 : parsedindexvalue2_nextIndex_16; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_696 = _parsedindexvalue2_nextIndex_T_687 ?
    _parsedindexvalue2_nextIndex_T_689 : _parsedindexvalue2_nextIndex_T_695; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_697 = _parsedindexvalue2_nextIndex_T_682 ?
    _parsedindexvalue2_nextIndex_T_679 : _parsedindexvalue2_nextIndex_T_696; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_698 = _parsedindexvalue2_nextIndex_T_677 ?
    _parsedindexvalue2_nextIndex_T_679 : _parsedindexvalue2_nextIndex_T_697; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_699 = _parsedindexvalue2_nextIndex_T_674 ? parsedindexvalue2_nextIndex_16 :
    _parsedindexvalue2_nextIndex_T_698; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_700 = _parsedindexvalue2_nextIndex_T_671 ? parsedindexvalue2_nextIndex_16 :
    _parsedindexvalue2_nextIndex_T_699; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_701 = _parsedindexvalue2_nextIndex_T_668 ? parsedindexvalue2_nextIndex_16 :
    _parsedindexvalue2_nextIndex_T_700; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_17 = _parsedindexvalue2_nextIndex_T_665 ? parsedindexvalue2_nextIndex_16 :
    _parsedindexvalue2_nextIndex_T_701; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_third_stage_T_65 = parsedindexvalue2_nextIndex_17 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue2_third_stage_T_68 = parsedindexvalue2_nextIndex_17 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue2_third_stage_T_70 = parsedindexvalue2_nextIndex_17 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue2_third_stage_T_71 = _parsedindexvalue2_third_stage_T_65 == 2'h0 ?
    _parsedindexvalue2_third_stage_T_68 : _parsedindexvalue2_third_stage_T_70; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue2_8 = io_i_mux_bus_2_1[3] ? _parsedindexvalue2_third_stage_T_71 :
    parsedindexvalue2_nextIndex_17; // @[Benes3.scala 49:24]
  wire [2:0] _T_156 = {{1'd0}, parsedindexvalue2_8};
  wire [15:0] _GEN_245 = 3'h0 == _T_156 ? io_i_data_bus2_2 : _GEN_240; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_246 = 3'h1 == _T_156 ? io_i_data_bus2_2 : _GEN_241; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_247 = 3'h2 == _T_156 ? io_i_data_bus2_2 : _GEN_242; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_248 = 3'h3 == _T_156 ? io_i_data_bus2_2 : _GEN_243; // @[Benes3.scala 100:{44,44}]
  wire [15:0] _GEN_250 = _T_141 & |io_i_mux_bus_2_1 ? _GEN_245 : _GEN_235; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_251 = _T_141 & |io_i_mux_bus_2_1 ? _GEN_246 : _GEN_236; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_252 = _T_141 & |io_i_mux_bus_2_1 ? _GEN_247 : _GEN_237; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_253 = _T_141 & |io_i_mux_bus_2_1 ? _GEN_248 : _GEN_238; // @[Benes3.scala 92:84]
  wire [15:0] _GEN_325 = io_i_data_bus2_2 != 16'h0 ? _GEN_250 : _GEN_215; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_326 = io_i_data_bus2_2 != 16'h0 ? _GEN_251 : _GEN_216; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_327 = io_i_data_bus2_2 != 16'h0 ? _GEN_252 : _GEN_217; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_328 = io_i_data_bus2_2 != 16'h0 ? _GEN_253 : _GEN_218; // @[Benes3.scala 62:39]
  wire  _T_211 = |io_i_mux_bus_3_0; // @[Benes3.scala 64:35]
  wire [1:0] _parsedindexvalue_first_stage_T_49 = 2'h3 % 2'h2; // @[Benes3.scala 25:52]
  wire [1:0] _parsedindexvalue_first_stage_T_54 = 2'h3 - 2'h1; // @[Benes3.scala 25:96]
  wire [1:0] _parsedindexvalue_first_stage_T_55 = _parsedindexvalue_first_stage_T_49 == 2'h0 ? 2'h0 :
    _parsedindexvalue_first_stage_T_54; // @[Benes3.scala 25:40]
  wire [1:0] parsedindexvalue_first_stage_6 = io_i_mux_bus_3_0[0] ? _parsedindexvalue_first_stage_T_55 : 2'h3; // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray_6_0 = io_i_mux_bus_3_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray_6_1 = io_i_mux_bus_3_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_780 = {{1'd0}, parsedindexvalue_first_stage_6}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_781 = _GEN_780 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_12 = _GEN_781[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_468 = parsedindexvalue_calculation_12 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_469 = ~parsedindexvalue_boolArray_6_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_470 = parsedindexvalue_calculation_12 == 2'h0 & ~parsedindexvalue_boolArray_6_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_471 = parsedindexvalue_calculation_12 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_473 = parsedindexvalue_calculation_12 == 2'h1 & _parsedindexvalue_nextIndex_T_469; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_474 = parsedindexvalue_calculation_12 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_476 = parsedindexvalue_calculation_12 == 2'h2 & _parsedindexvalue_nextIndex_T_469; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_477 = parsedindexvalue_calculation_12 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_479 = parsedindexvalue_calculation_12 == 2'h3 & _parsedindexvalue_nextIndex_T_469; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_482 = _parsedindexvalue_nextIndex_T_468 & parsedindexvalue_boolArray_6_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_484 = parsedindexvalue_first_stage_6 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_487 = _parsedindexvalue_nextIndex_T_471 & parsedindexvalue_boolArray_6_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_492 = _parsedindexvalue_nextIndex_T_474 & parsedindexvalue_boolArray_6_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_494 = parsedindexvalue_first_stage_6 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_497 = _parsedindexvalue_nextIndex_T_477 & parsedindexvalue_boolArray_6_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_500 = _parsedindexvalue_nextIndex_T_497 ? _parsedindexvalue_nextIndex_T_494
     : parsedindexvalue_first_stage_6; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_501 = _parsedindexvalue_nextIndex_T_492 ? _parsedindexvalue_nextIndex_T_494
     : _parsedindexvalue_nextIndex_T_500; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_502 = _parsedindexvalue_nextIndex_T_487 ? _parsedindexvalue_nextIndex_T_484
     : _parsedindexvalue_nextIndex_T_501; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_503 = _parsedindexvalue_nextIndex_T_482 ? _parsedindexvalue_nextIndex_T_484
     : _parsedindexvalue_nextIndex_T_502; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_504 = _parsedindexvalue_nextIndex_T_479 ? parsedindexvalue_first_stage_6 :
    _parsedindexvalue_nextIndex_T_503; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_505 = _parsedindexvalue_nextIndex_T_476 ? parsedindexvalue_first_stage_6 :
    _parsedindexvalue_nextIndex_T_504; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_506 = _parsedindexvalue_nextIndex_T_473 ? parsedindexvalue_first_stage_6 :
    _parsedindexvalue_nextIndex_T_505; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_12 = _parsedindexvalue_nextIndex_T_470 ? parsedindexvalue_first_stage_6 :
    _parsedindexvalue_nextIndex_T_506; // @[Mux.scala 101:16]
  wire [2:0] _GEN_782 = {{1'd0}, parsedindexvalue_nextIndex_12}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_783 = _GEN_782 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_13 = _GEN_783[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_507 = parsedindexvalue_calculation_13 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_508 = ~parsedindexvalue_boolArray_6_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_509 = parsedindexvalue_calculation_13 == 2'h0 & ~parsedindexvalue_boolArray_6_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_510 = parsedindexvalue_calculation_13 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_512 = parsedindexvalue_calculation_13 == 2'h1 & _parsedindexvalue_nextIndex_T_508; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_513 = parsedindexvalue_calculation_13 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_515 = parsedindexvalue_calculation_13 == 2'h2 & _parsedindexvalue_nextIndex_T_508; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_516 = parsedindexvalue_calculation_13 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_518 = parsedindexvalue_calculation_13 == 2'h3 & _parsedindexvalue_nextIndex_T_508; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_521 = _parsedindexvalue_nextIndex_T_507 & parsedindexvalue_boolArray_6_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_523 = parsedindexvalue_nextIndex_12 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_526 = _parsedindexvalue_nextIndex_T_510 & parsedindexvalue_boolArray_6_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_531 = _parsedindexvalue_nextIndex_T_513 & parsedindexvalue_boolArray_6_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_533 = parsedindexvalue_nextIndex_12 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_536 = _parsedindexvalue_nextIndex_T_516 & parsedindexvalue_boolArray_6_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_539 = _parsedindexvalue_nextIndex_T_536 ? _parsedindexvalue_nextIndex_T_533
     : parsedindexvalue_nextIndex_12; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_540 = _parsedindexvalue_nextIndex_T_531 ? _parsedindexvalue_nextIndex_T_533
     : _parsedindexvalue_nextIndex_T_539; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_541 = _parsedindexvalue_nextIndex_T_526 ? _parsedindexvalue_nextIndex_T_523
     : _parsedindexvalue_nextIndex_T_540; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_542 = _parsedindexvalue_nextIndex_T_521 ? _parsedindexvalue_nextIndex_T_523
     : _parsedindexvalue_nextIndex_T_541; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_543 = _parsedindexvalue_nextIndex_T_518 ? parsedindexvalue_nextIndex_12 :
    _parsedindexvalue_nextIndex_T_542; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_544 = _parsedindexvalue_nextIndex_T_515 ? parsedindexvalue_nextIndex_12 :
    _parsedindexvalue_nextIndex_T_543; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_545 = _parsedindexvalue_nextIndex_T_512 ? parsedindexvalue_nextIndex_12 :
    _parsedindexvalue_nextIndex_T_544; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_13 = _parsedindexvalue_nextIndex_T_509 ? parsedindexvalue_nextIndex_12 :
    _parsedindexvalue_nextIndex_T_545; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_49 = parsedindexvalue_nextIndex_13 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_52 = parsedindexvalue_nextIndex_13 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_54 = parsedindexvalue_nextIndex_13 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_55 = _parsedindexvalue_third_stage_T_49 == 2'h0 ?
    _parsedindexvalue_third_stage_T_52 : _parsedindexvalue_third_stage_T_54; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue_6 = io_i_mux_bus_3_0[3] ? _parsedindexvalue_third_stage_T_55 :
    parsedindexvalue_nextIndex_13; // @[Benes3.scala 49:24]
  wire [2:0] _T_213 = {{1'd0}, parsedindexvalue_6};
  wire [15:0] _GEN_330 = 3'h0 == _T_213 ? io_i_data_bus2_3 : _GEN_325; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_331 = 3'h1 == _T_213 ? io_i_data_bus2_3 : _GEN_326; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_332 = 3'h2 == _T_213 ? io_i_data_bus2_3 : _GEN_327; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_333 = 3'h3 == _T_213 ? io_i_data_bus2_3 : _GEN_328; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_335 = ~(|io_i_mux_bus_3_0) ? _GEN_330 : _GEN_325; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_336 = ~(|io_i_mux_bus_3_0) ? _GEN_331 : _GEN_326; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_337 = ~(|io_i_mux_bus_3_0) ? _GEN_332 : _GEN_327; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_338 = ~(|io_i_mux_bus_3_0) ? _GEN_333 : _GEN_328; // @[Benes3.scala 64:49]
  wire [15:0] _GEN_340 = 3'h0 == _T_213 ? io_i_data_bus2_3 : _GEN_335; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_341 = 3'h1 == _T_213 ? io_i_data_bus2_3 : _GEN_336; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_342 = 3'h2 == _T_213 ? io_i_data_bus2_3 : _GEN_337; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_343 = 3'h3 == _T_213 ? io_i_data_bus2_3 : _GEN_338; // @[Benes3.scala 77:{47,47}]
  wire [15:0] _GEN_345 = _T_211 ? _GEN_340 : _GEN_335; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_346 = _T_211 ? _GEN_341 : _GEN_336; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_347 = _T_211 ? _GEN_342 : _GEN_337; // @[Benes3.scala 74:48]
  wire [15:0] _GEN_348 = _T_211 ? _GEN_343 : _GEN_338; // @[Benes3.scala 74:48]
  assign io_o_dist_bus1_0 = io_i_data_bus1_0; // @[Benes3.scala 17:18]
  assign io_o_dist_bus1_1 = io_i_data_bus1_1; // @[Benes3.scala 17:18]
  assign io_o_dist_bus1_2 = io_i_data_bus1_2; // @[Benes3.scala 17:18]
  assign io_o_dist_bus1_3 = io_i_data_bus1_3; // @[Benes3.scala 17:18]
  assign io_o_dist_bus2_0 = io_i_data_bus2_3 != 16'h0 ? _GEN_345 : _GEN_325; // @[Benes3.scala 62:39]
  assign io_o_dist_bus2_1 = io_i_data_bus2_3 != 16'h0 ? _GEN_346 : _GEN_326; // @[Benes3.scala 62:39]
  assign io_o_dist_bus2_2 = io_i_data_bus2_3 != 16'h0 ? _GEN_347 : _GEN_327; // @[Benes3.scala 62:39]
  assign io_o_dist_bus2_3 = io_i_data_bus2_3 != 16'h0 ? _GEN_348 : _GEN_328; // @[Benes3.scala 62:39]
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
  input         io_i_valid,
  input  [63:0] io_i_data_bus_0,
  input  [63:0] io_i_data_bus_1,
  input  [2:0]  io_i_add_en,
  input  [4:0]  io_i_cmd,
  output [31:0] io_o_adder
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] reductionMux_io_i_data_0; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] reductionMux_io_i_data_1; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] reductionMux_io_o_data_0; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] reductionMux_io_o_data_1; // @[EdgeAdderSwitch.scala 19:28]
  wire [31:0] adder32_io_A; // @[EdgeAdderSwitch.scala 23:23]
  wire [31:0] adder32_io_B; // @[EdgeAdderSwitch.scala 23:23]
  wire [31:0] adder32_io_O; // @[EdgeAdderSwitch.scala 23:23]
  reg  r_valid; // @[EdgeAdderSwitch.scala 27:24]
  reg [31:0] r_adder; // @[EdgeAdderSwitch.scala 28:24]
  reg [2:0] r_add_en; // @[EdgeAdderSwitch.scala 31:25]
  wire [31:0] _GEN_3 = 5'h4 == io_i_cmd ? reductionMux_io_o_data_0 : r_adder; // @[EdgeAdderSwitch.scala 38:23 45:17 28:24]
  wire [31:0] _GEN_15 = r_add_en == 3'h0 ? r_adder : adder32_io_O; // @[EdgeAdderSwitch.scala 64:22 65:18 67:18]
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
    if (reset) begin // @[EdgeAdderSwitch.scala 27:24]
      r_valid <= 1'h0; // @[EdgeAdderSwitch.scala 27:24]
    end else begin
      r_valid <= io_i_valid; // @[EdgeAdderSwitch.scala 27:24]
    end
    if (reset) begin // @[EdgeAdderSwitch.scala 28:24]
      r_adder <= 32'h0; // @[EdgeAdderSwitch.scala 28:24]
    end else if (reset) begin // @[EdgeAdderSwitch.scala 33:14]
      r_adder <= 32'h0; // @[EdgeAdderSwitch.scala 34:13]
    end else if (r_valid) begin // @[EdgeAdderSwitch.scala 37:25]
      if (5'h3 == io_i_cmd) begin // @[EdgeAdderSwitch.scala 38:23]
        r_adder <= reductionMux_io_o_data_1; // @[EdgeAdderSwitch.scala 40:17]
      end else begin
        r_adder <= _GEN_3;
      end
    end
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
  r_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  r_adder = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  r_add_en = _RAND_2[2:0];
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
  input         io_i_valid,
  input  [31:0] io_i_data_bus_0,
  input  [31:0] io_i_data_bus_1,
  input  [31:0] io_i_data_bus_2,
  input  [31:0] io_i_data_bus_3,
  input         io_i_add_en_bus_0,
  input         io_i_add_en_bus_1,
  input         io_i_add_en_bus_2,
  input  [2:0]  io_i_cmd_bus_0,
  input  [2:0]  io_i_cmd_bus_1,
  input  [2:0]  io_i_cmd_bus_2,
  output [31:0] io_o_adder_0,
  output [31:0] io_o_adder_1,
  output [31:0] io_o_adder_2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  my_adder_0_clock; // @[FanNetwork.scala 119:28]
  wire  my_adder_0_reset; // @[FanNetwork.scala 119:28]
  wire  my_adder_0_io_i_valid; // @[FanNetwork.scala 119:28]
  wire [63:0] my_adder_0_io_i_data_bus_0; // @[FanNetwork.scala 119:28]
  wire [63:0] my_adder_0_io_i_data_bus_1; // @[FanNetwork.scala 119:28]
  wire [2:0] my_adder_0_io_i_add_en; // @[FanNetwork.scala 119:28]
  wire [4:0] my_adder_0_io_i_cmd; // @[FanNetwork.scala 119:28]
  wire [31:0] my_adder_0_io_o_adder; // @[FanNetwork.scala 119:28]
  wire  my_adder_1_clock; // @[FanNetwork.scala 132:28]
  wire  my_adder_1_reset; // @[FanNetwork.scala 132:28]
  wire  my_adder_1_io_i_valid; // @[FanNetwork.scala 132:28]
  wire [63:0] my_adder_1_io_i_data_bus_0; // @[FanNetwork.scala 132:28]
  wire [63:0] my_adder_1_io_i_data_bus_1; // @[FanNetwork.scala 132:28]
  wire [2:0] my_adder_1_io_i_add_en; // @[FanNetwork.scala 132:28]
  wire [4:0] my_adder_1_io_i_cmd; // @[FanNetwork.scala 132:28]
  wire [31:0] my_adder_1_io_o_adder; // @[FanNetwork.scala 132:28]
  wire  my_adder_2_clock; // @[FanNetwork.scala 145:28]
  wire  my_adder_2_reset; // @[FanNetwork.scala 145:28]
  wire  my_adder_2_io_i_valid; // @[FanNetwork.scala 145:28]
  wire [63:0] my_adder_2_io_i_data_bus_0; // @[FanNetwork.scala 145:28]
  wire [63:0] my_adder_2_io_i_data_bus_1; // @[FanNetwork.scala 145:28]
  wire [2:0] my_adder_2_io_i_add_en; // @[FanNetwork.scala 145:28]
  wire [4:0] my_adder_2_io_i_cmd; // @[FanNetwork.scala 145:28]
  wire [31:0] my_adder_2_io_o_adder; // @[FanNetwork.scala 145:28]
  reg  r_valid_0; // @[FanNetwork.scala 30:26]
  reg  r_valid_1; // @[FanNetwork.scala 30:26]
  wire [63:0] w_fan_lvl_0_0 = {{32'd0}, my_adder_0_io_o_adder};
  wire [63:0] w_fan_lvl_0_1 = {{32'd0}, my_adder_2_io_o_adder};
  EdgeAdderSwitch my_adder_0 ( // @[FanNetwork.scala 119:28]
    .clock(my_adder_0_clock),
    .reset(my_adder_0_reset),
    .io_i_valid(my_adder_0_io_i_valid),
    .io_i_data_bus_0(my_adder_0_io_i_data_bus_0),
    .io_i_data_bus_1(my_adder_0_io_i_data_bus_1),
    .io_i_add_en(my_adder_0_io_i_add_en),
    .io_i_cmd(my_adder_0_io_i_cmd),
    .io_o_adder(my_adder_0_io_o_adder)
  );
  EdgeAdderSwitch my_adder_1 ( // @[FanNetwork.scala 132:28]
    .clock(my_adder_1_clock),
    .reset(my_adder_1_reset),
    .io_i_valid(my_adder_1_io_i_valid),
    .io_i_data_bus_0(my_adder_1_io_i_data_bus_0),
    .io_i_data_bus_1(my_adder_1_io_i_data_bus_1),
    .io_i_add_en(my_adder_1_io_i_add_en),
    .io_i_cmd(my_adder_1_io_i_cmd),
    .io_o_adder(my_adder_1_io_o_adder)
  );
  EdgeAdderSwitch my_adder_2 ( // @[FanNetwork.scala 145:28]
    .clock(my_adder_2_clock),
    .reset(my_adder_2_reset),
    .io_i_valid(my_adder_2_io_i_valid),
    .io_i_data_bus_0(my_adder_2_io_i_data_bus_0),
    .io_i_data_bus_1(my_adder_2_io_i_data_bus_1),
    .io_i_add_en(my_adder_2_io_i_add_en),
    .io_i_cmd(my_adder_2_io_i_cmd),
    .io_o_adder(my_adder_2_io_o_adder)
  );
  assign io_o_adder_0 = w_fan_lvl_0_0[31:0]; // @[FanNetwork.scala 207:19]
  assign io_o_adder_1 = my_adder_1_io_o_adder; // @[FanNetwork.scala 208:19]
  assign io_o_adder_2 = w_fan_lvl_0_1[31:0]; // @[FanNetwork.scala 209:19]
  assign my_adder_0_clock = clock;
  assign my_adder_0_reset = reset;
  assign my_adder_0_io_i_valid = r_valid_0; // @[FanNetwork.scala 121:27]
  assign my_adder_0_io_i_data_bus_0 = {{32'd0}, io_i_data_bus_1}; // @[FanNetwork.scala 122:30]
  assign my_adder_0_io_i_data_bus_1 = {{32'd0}, io_i_data_bus_0}; // @[FanNetwork.scala 122:30]
  assign my_adder_0_io_i_add_en = {{2'd0}, io_i_add_en_bus_0}; // @[FanNetwork.scala 123:28]
  assign my_adder_0_io_i_cmd = {{2'd0}, io_i_cmd_bus_0}; // @[FanNetwork.scala 124:25]
  assign my_adder_1_clock = clock;
  assign my_adder_1_reset = reset;
  assign my_adder_1_io_i_valid = r_valid_1; // @[FanNetwork.scala 134:27]
  assign my_adder_1_io_i_data_bus_0 = {{32'd0}, my_adder_2_io_o_adder}; // @[FanNetwork.scala 135:{40,40}]
  assign my_adder_1_io_i_data_bus_1 = {{32'd0}, my_adder_0_io_o_adder}; // @[FanNetwork.scala 135:{40,40}]
  assign my_adder_1_io_i_add_en = {{2'd0}, io_i_add_en_bus_2}; // @[FanNetwork.scala 136:28]
  assign my_adder_1_io_i_cmd = {{2'd0}, io_i_cmd_bus_2}; // @[FanNetwork.scala 137:26]
  assign my_adder_2_clock = clock;
  assign my_adder_2_reset = reset;
  assign my_adder_2_io_i_valid = r_valid_0; // @[FanNetwork.scala 147:27]
  assign my_adder_2_io_i_data_bus_0 = {{32'd0}, io_i_data_bus_3}; // @[FanNetwork.scala 148:30]
  assign my_adder_2_io_i_data_bus_1 = {{32'd0}, io_i_data_bus_2}; // @[FanNetwork.scala 148:30]
  assign my_adder_2_io_i_add_en = {{2'd0}, io_i_add_en_bus_1}; // @[FanNetwork.scala 149:28]
  assign my_adder_2_io_i_cmd = {{2'd0}, io_i_cmd_bus_1}; // @[FanNetwork.scala 150:25]
  always @(posedge clock) begin
    if (reset) begin // @[FanNetwork.scala 30:26]
      r_valid_0 <= 1'h0; // @[FanNetwork.scala 30:26]
    end else begin
      r_valid_0 <= io_i_valid;
    end
    if (reset) begin // @[FanNetwork.scala 30:26]
      r_valid_1 <= 1'h0; // @[FanNetwork.scala 30:26]
    end else begin
      r_valid_1 <= r_valid_0; // @[FanNetwork.scala 114:24]
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
  r_valid_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  r_valid_1 = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
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
  input  [3:0]  io_i_mux_bus_0_0,
  input  [3:0]  io_i_mux_bus_0_1,
  input  [3:0]  io_i_mux_bus_0_2,
  input  [3:0]  io_i_mux_bus_0_3,
  input  [3:0]  io_i_mux_bus_1_0,
  input  [3:0]  io_i_mux_bus_1_1,
  input  [3:0]  io_i_mux_bus_1_2,
  input  [3:0]  io_i_mux_bus_2_0,
  input  [3:0]  io_i_mux_bus_2_1,
  input  [3:0]  io_i_mux_bus_3_0,
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
  wire  my_controller_clock; // @[FlexDPE.scala 64:31]
  wire  my_controller_reset; // @[FlexDPE.scala 64:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPE.scala 64:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 64:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 64:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 64:31]
  wire [2:0] my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 64:31]
  wire [2:0] my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 64:31]
  wire [2:0] my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 64:31]
  wire  my_controller_io_o_reduction_valid; // @[FlexDPE.scala 64:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_0; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_1; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_2; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_3; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_0; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_1; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_2; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_2_0; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_2_1; // @[FlexDPE.scala 73:26]
  wire [3:0] my_Benes_io_i_mux_bus_3_0; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 73:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 73:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPE.scala 84:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPE.scala 84:30]
  wire  my_fan_network_clock; // @[FlexDPE.scala 96:32]
  wire  my_fan_network_reset; // @[FlexDPE.scala 96:32]
  wire  my_fan_network_io_i_valid; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPE.scala 96:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPE.scala 96:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPE.scala 96:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPE.scala 96:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_0; // @[FlexDPE.scala 96:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_1; // @[FlexDPE.scala 96:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_2; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_o_adder_1; // @[FlexDPE.scala 96:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPE.scala 96:32]
  reg [14:0] r_mult_0; // @[FlexDPE.scala 33:26]
  reg [14:0] r_mult_1; // @[FlexDPE.scala 33:26]
  reg [14:0] r_mult_2; // @[FlexDPE.scala 33:26]
  reg [14:0] r_mult_3; // @[FlexDPE.scala 33:26]
  reg [31:0] counter; // @[FlexDPE.scala 37:26]
  reg [15:0] matrix_0_0; // @[FlexDPE.scala 52:22]
  reg [15:0] matrix_0_1; // @[FlexDPE.scala 52:22]
  reg [15:0] matrix_1_0; // @[FlexDPE.scala 52:22]
  reg [15:0] matrix_1_1; // @[FlexDPE.scala 52:22]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[FlexDPE.scala 117:24]
  wire [15:0] _GEN_4 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPE.scala 33:{26,26} 90:14]
  wire [15:0] _GEN_5 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPE.scala 33:{26,26} 90:14]
  wire [15:0] _GEN_6 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPE.scala 33:{26,26} 90:14]
  wire [15:0] _GEN_7 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPE.scala 33:{26,26} 90:14]
  ivncontrol4 my_ivn ( // @[FlexDPE.scala 58:22]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1)
  );
  fancontrol4 my_controller ( // @[FlexDPE.scala 64:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2),
    .io_o_reduction_cmd_0(my_controller_io_o_reduction_cmd_0),
    .io_o_reduction_cmd_1(my_controller_io_o_reduction_cmd_1),
    .io_o_reduction_cmd_2(my_controller_io_o_reduction_cmd_2),
    .io_o_reduction_valid(my_controller_io_o_reduction_valid)
  );
  Benes3 my_Benes ( // @[FlexDPE.scala 73:26]
    .io_i_data_bus2_0(my_Benes_io_i_data_bus2_0),
    .io_i_data_bus2_1(my_Benes_io_i_data_bus2_1),
    .io_i_data_bus2_2(my_Benes_io_i_data_bus2_2),
    .io_i_data_bus2_3(my_Benes_io_i_data_bus2_3),
    .io_i_data_bus1_0(my_Benes_io_i_data_bus1_0),
    .io_i_data_bus1_1(my_Benes_io_i_data_bus1_1),
    .io_i_data_bus1_2(my_Benes_io_i_data_bus1_2),
    .io_i_data_bus1_3(my_Benes_io_i_data_bus1_3),
    .io_i_mux_bus_0_0(my_Benes_io_i_mux_bus_0_0),
    .io_i_mux_bus_0_1(my_Benes_io_i_mux_bus_0_1),
    .io_i_mux_bus_0_2(my_Benes_io_i_mux_bus_0_2),
    .io_i_mux_bus_0_3(my_Benes_io_i_mux_bus_0_3),
    .io_i_mux_bus_1_0(my_Benes_io_i_mux_bus_1_0),
    .io_i_mux_bus_1_1(my_Benes_io_i_mux_bus_1_1),
    .io_i_mux_bus_1_2(my_Benes_io_i_mux_bus_1_2),
    .io_i_mux_bus_2_0(my_Benes_io_i_mux_bus_2_0),
    .io_i_mux_bus_2_1(my_Benes_io_i_mux_bus_2_1),
    .io_i_mux_bus_3_0(my_Benes_io_i_mux_bus_3_0),
    .io_o_dist_bus1_0(my_Benes_io_o_dist_bus1_0),
    .io_o_dist_bus1_1(my_Benes_io_o_dist_bus1_1),
    .io_o_dist_bus1_2(my_Benes_io_o_dist_bus1_2),
    .io_o_dist_bus1_3(my_Benes_io_o_dist_bus1_3),
    .io_o_dist_bus2_0(my_Benes_io_o_dist_bus2_0),
    .io_o_dist_bus2_1(my_Benes_io_o_dist_bus2_1),
    .io_o_dist_bus2_2(my_Benes_io_o_dist_bus2_2),
    .io_o_dist_bus2_3(my_Benes_io_o_dist_bus2_3)
  );
  buffer_multiplication buffer_mult ( // @[FlexDPE.scala 84:30]
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
  Fan4 my_fan_network ( // @[FlexDPE.scala 96:32]
    .clock(my_fan_network_clock),
    .reset(my_fan_network_reset),
    .io_i_valid(my_fan_network_io_i_valid),
    .io_i_data_bus_0(my_fan_network_io_i_data_bus_0),
    .io_i_data_bus_1(my_fan_network_io_i_data_bus_1),
    .io_i_data_bus_2(my_fan_network_io_i_data_bus_2),
    .io_i_data_bus_3(my_fan_network_io_i_data_bus_3),
    .io_i_add_en_bus_0(my_fan_network_io_i_add_en_bus_0),
    .io_i_add_en_bus_1(my_fan_network_io_i_add_en_bus_1),
    .io_i_add_en_bus_2(my_fan_network_io_i_add_en_bus_2),
    .io_i_cmd_bus_0(my_fan_network_io_i_cmd_bus_0),
    .io_i_cmd_bus_1(my_fan_network_io_i_cmd_bus_1),
    .io_i_cmd_bus_2(my_fan_network_io_i_cmd_bus_2),
    .io_o_adder_0(my_fan_network_io_o_adder_0),
    .io_o_adder_1(my_fan_network_io_o_adder_1),
    .io_o_adder_2(my_fan_network_io_o_adder_2)
  );
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPE.scala 105:16]
  assign io_o_adder_1 = my_fan_network_io_o_adder_1[15:0]; // @[FlexDPE.scala 105:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPE.scala 105:16]
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
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPE.scala 68:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPE.scala 76:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPE.scala 76:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPE.scala 76:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPE.scala 76:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPE.scala 75:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPE.scala 75:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPE.scala 75:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPE.scala 75:29]
  assign my_Benes_io_i_mux_bus_0_0 = io_i_mux_bus_0_0; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_0_1 = io_i_mux_bus_0_1; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_0_2 = io_i_mux_bus_0_2; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_0_3 = io_i_mux_bus_0_3; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_1_0 = io_i_mux_bus_1_0; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_1_1 = io_i_mux_bus_1_1; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_1_2 = io_i_mux_bus_1_2; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_2_0 = io_i_mux_bus_2_0; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_2_1 = io_i_mux_bus_2_1; // @[FlexDPE.scala 77:27]
  assign my_Benes_io_i_mux_bus_3_0 = io_i_mux_bus_3_0; // @[FlexDPE.scala 77:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 87:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 87:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 87:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 87:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 88:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 88:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 88:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 88:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_valid = my_controller_io_o_reduction_valid; // @[FlexDPE.scala 98:31]
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPE.scala 99:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPE.scala 99:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPE.scala 99:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPE.scala 99:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 100:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 100:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 100:36]
  assign my_fan_network_io_i_cmd_bus_0 = my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 101:33]
  assign my_fan_network_io_i_cmd_bus_1 = my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 101:33]
  assign my_fan_network_io_i_cmd_bus_2 = my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 101:33]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_4[14:0]; // @[FlexDPE.scala 33:{26,26} 90:14]
    r_mult_1 <= _GEN_5[14:0]; // @[FlexDPE.scala 33:{26,26} 90:14]
    r_mult_2 <= _GEN_6[14:0]; // @[FlexDPE.scala 33:{26,26} 90:14]
    r_mult_3 <= _GEN_7[14:0]; // @[FlexDPE.scala 33:{26,26} 90:14]
    if (reset) begin // @[FlexDPE.scala 37:26]
      counter <= 32'h0; // @[FlexDPE.scala 37:26]
    end else begin
      counter <= _counter_T_1; // @[FlexDPE.scala 117:13]
    end
    if (counter < 32'h3c) begin // @[FlexDPE.scala 107:27]
      matrix_0_0 <= io_o_adder_0; // @[FlexDPE.scala 108:20]
    end
    if (counter > 32'h64) begin // @[FlexDPE.scala 120:27]
      matrix_0_1 <= io_o_adder_0; // @[FlexDPE.scala 121:20]
    end
    if (counter < 32'h3c) begin // @[FlexDPE.scala 107:27]
      matrix_1_0 <= io_o_adder_2; // @[FlexDPE.scala 109:20]
    end
    if (counter > 32'h64) begin // @[FlexDPE.scala 120:27]
      matrix_1_1 <= io_o_adder_2; // @[FlexDPE.scala 122:20]
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
  output [15:0] io_output_1_1
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
`endif // RANDOMIZE_REG_INIT
  wire  PathFinder_clock; // @[FlexDPU.scala 73:40]
  wire  PathFinder_reset; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Stationary_matrix_0_0; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Stationary_matrix_0_1; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Stationary_matrix_1_0; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Stationary_matrix_1_1; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Streaming_matrix_0; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Streaming_matrix_1; // @[FlexDPU.scala 73:40]
  wire [3:0] PathFinder_io_i_mux_bus_0; // @[FlexDPU.scala 73:40]
  wire [3:0] PathFinder_io_i_mux_bus_1; // @[FlexDPU.scala 73:40]
  wire [3:0] PathFinder_io_i_mux_bus_2; // @[FlexDPU.scala 73:40]
  wire [3:0] PathFinder_io_i_mux_bus_3; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Source_0; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Source_1; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Source_2; // @[FlexDPU.scala 73:40]
  wire [15:0] PathFinder_io_Source_3; // @[FlexDPU.scala 73:40]
  wire  PathFinder_io_PF_Valid; // @[FlexDPU.scala 73:40]
  wire [31:0] MuxesWrapper_io_src_0; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_src_1; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_src_2; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_src_3; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_muxes_0; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_muxes_1; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_muxes_2; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_muxes_3; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Osrc_0; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Osrc_1; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Osrc_2; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Osrc_3; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_0_0; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_0_1; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_0_2; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_0_3; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_1_0; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_1_1; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_1_2; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_2_0; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_2_1; // @[FlexDPU.scala 114:52]
  wire [31:0] MuxesWrapper_io_Omuxes_3_0; // @[FlexDPU.scala 114:52]
  wire  flexdpecom4_clock; // @[FlexDPU.scala 122:46]
  wire  flexdpecom4_reset; // @[FlexDPU.scala 122:46]
  wire  flexdpecom4_io_i_data_valid; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus_1; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus_2; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus_3; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_1; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_2; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_3; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_1; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_1; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_o_adder_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_o_adder_1; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_o_adder_2; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_0_0; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_0_1; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_0_2; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_0_3; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_1_0; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_1_1; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_1_2; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_2_0; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_2_1; // @[FlexDPU.scala 122:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_3_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_matrix_0_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_matrix_0_1; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_matrix_1_0; // @[FlexDPU.scala 122:46]
  wire [15:0] flexdpecom4_io_matrix_1_1; // @[FlexDPU.scala 122:46]
  reg [31:0] nonZeroValues_0; // @[FlexDPU.scala 27:32]
  reg [31:0] nonZeroValues_1; // @[FlexDPU.scala 27:32]
  reg [31:0] nonZeroValues_2; // @[FlexDPU.scala 27:32]
  reg [31:0] nonZeroValues_3; // @[FlexDPU.scala 27:32]
  reg [31:0] index; // @[FlexDPU.scala 28:24]
  reg [31:0] iloop; // @[FlexDPU.scala 29:24]
  reg [31:0] jloop; // @[FlexDPU.scala 30:24]
  reg  Statvalid; // @[FlexDPU.scala 31:28]
  wire  _Statvalid_T_1 = jloop == 32'h1; // @[FlexDPU.scala 33:61]
  wire  _Statvalid_T_2 = iloop == 32'h1 & jloop == 32'h1; // @[FlexDPU.scala 33:51]
  wire [15:0] _GEN_1 = ~iloop[0] & jloop[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[FlexDPU.scala 34:{46,46}]
  wire [15:0] _GEN_2 = iloop[0] & ~jloop[0] ? io_Stationary_matrix_1_0 : _GEN_1; // @[FlexDPU.scala 34:{46,46}]
  wire [15:0] _GEN_3 = iloop[0] & jloop[0] ? io_Stationary_matrix_1_1 : _GEN_2; // @[FlexDPU.scala 34:{46,46}]
  wire [31:0] _nonZeroValues_T_3 = {{16'd0}, _GEN_3}; // @[FlexDPU.scala 35:{30,30}]
  wire [31:0] _index_T_1 = index + 32'h1; // @[FlexDPU.scala 36:24]
  wire [31:0] _iloop_T_1 = iloop + 32'h1; // @[FlexDPU.scala 40:24]
  wire [31:0] _jloop_T_1 = jloop + 32'h1; // @[FlexDPU.scala 44:24]
  reg [31:0] PF1_Stream_Col_0; // @[FlexDPU.scala 57:33]
  reg [31:0] PF1_Stream_Col_1; // @[FlexDPU.scala 57:33]
  reg [31:0] ModuleIndex; // @[FlexDPU.scala 58:30]
  reg [31:0] delay2; // @[FlexDPU.scala 103:33]
  wire  _T_13 = delay2 < 32'h4; // @[FlexDPU.scala 108:32]
  wire [31:0] _delay2_T_1 = delay2 + 32'h1; // @[FlexDPU.scala 109:34]
  wire  PF_0_PF_Valid = PathFinder_io_PF_Valid; // @[FlexDPU.scala 73:{21,21}]
  wire [31:0] MuxWrapper_0_Omuxes_0_0 = MuxesWrapper_io_Omuxes_0_0; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_0_0_rev_T_2 = {MuxWrapper_0_Omuxes_0_0[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_0_0_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_0_0[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_41 = {_FDPE_0_i_mux_bus_0_0_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_0_rev_T_6 = {{1'd0}, _GEN_41}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_0_rev_T_7 = _FDPE_0_i_mux_bus_0_0_rev_T_2 | _FDPE_0_i_mux_bus_0_0_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_0_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_0_0[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_0_rev_T_10 = {_FDPE_0_i_mux_bus_0_0_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_43 = {{2'd0}, _FDPE_0_i_mux_bus_0_0_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_0_rev_T_11 = _FDPE_0_i_mux_bus_0_0_rev_T_7 | _GEN_43; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_0_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_0_0[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_0_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_0_0_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_45 = {{2'd0}, _FDPE_0_i_mux_bus_0_0_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_0_1 = MuxesWrapper_io_Omuxes_0_1; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_0_1_rev_T_2 = {MuxWrapper_0_Omuxes_0_1[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_0_1_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_0_1[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_47 = {_FDPE_0_i_mux_bus_0_1_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_1_rev_T_6 = {{1'd0}, _GEN_47}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_1_rev_T_7 = _FDPE_0_i_mux_bus_0_1_rev_T_2 | _FDPE_0_i_mux_bus_0_1_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_1_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_0_1[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_1_rev_T_10 = {_FDPE_0_i_mux_bus_0_1_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_56 = {{2'd0}, _FDPE_0_i_mux_bus_0_1_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_1_rev_T_11 = _FDPE_0_i_mux_bus_0_1_rev_T_7 | _GEN_56; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_1_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_0_1[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_1_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_0_1_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_58 = {{2'd0}, _FDPE_0_i_mux_bus_0_1_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_0_2 = MuxesWrapper_io_Omuxes_0_2; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_0_2_rev_T_2 = {MuxWrapper_0_Omuxes_0_2[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_0_2_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_0_2[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_60 = {_FDPE_0_i_mux_bus_0_2_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_2_rev_T_6 = {{1'd0}, _GEN_60}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_2_rev_T_7 = _FDPE_0_i_mux_bus_0_2_rev_T_2 | _FDPE_0_i_mux_bus_0_2_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_2_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_0_2[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_2_rev_T_10 = {_FDPE_0_i_mux_bus_0_2_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_62 = {{2'd0}, _FDPE_0_i_mux_bus_0_2_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_2_rev_T_11 = _FDPE_0_i_mux_bus_0_2_rev_T_7 | _GEN_62; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_2_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_0_2[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_2_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_0_2_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_64 = {{2'd0}, _FDPE_0_i_mux_bus_0_2_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_0_3 = MuxesWrapper_io_Omuxes_0_3; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_0_3_rev_T_2 = {MuxWrapper_0_Omuxes_0_3[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_0_3_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_0_3[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_66 = {_FDPE_0_i_mux_bus_0_3_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_3_rev_T_6 = {{1'd0}, _GEN_66}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_0_3_rev_T_7 = _FDPE_0_i_mux_bus_0_3_rev_T_2 | _FDPE_0_i_mux_bus_0_3_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_3_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_0_3[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_3_rev_T_10 = {_FDPE_0_i_mux_bus_0_3_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_68 = {{2'd0}, _FDPE_0_i_mux_bus_0_3_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_0_3_rev_T_11 = _FDPE_0_i_mux_bus_0_3_rev_T_7 | _GEN_68; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_0_3_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_0_3[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_0_3_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_0_3_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_70 = {{2'd0}, _FDPE_0_i_mux_bus_0_3_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_1_0 = MuxesWrapper_io_Omuxes_1_0; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_1_0_rev_T_2 = {MuxWrapper_0_Omuxes_1_0[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_1_0_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_1_0[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_72 = {_FDPE_0_i_mux_bus_1_0_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_0_rev_T_6 = {{1'd0}, _GEN_72}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_0_rev_T_7 = _FDPE_0_i_mux_bus_1_0_rev_T_2 | _FDPE_0_i_mux_bus_1_0_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_1_0_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_1_0[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_0_rev_T_10 = {_FDPE_0_i_mux_bus_1_0_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_74 = {{2'd0}, _FDPE_0_i_mux_bus_1_0_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_1_0_rev_T_11 = _FDPE_0_i_mux_bus_1_0_rev_T_7 | _GEN_74; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_1_0_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_1_0[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_0_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_1_0_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_76 = {{2'd0}, _FDPE_0_i_mux_bus_1_0_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_1_1 = MuxesWrapper_io_Omuxes_1_1; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_1_1_rev_T_2 = {MuxWrapper_0_Omuxes_1_1[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_1_1_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_1_1[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_78 = {_FDPE_0_i_mux_bus_1_1_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_1_rev_T_6 = {{1'd0}, _GEN_78}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_1_rev_T_7 = _FDPE_0_i_mux_bus_1_1_rev_T_2 | _FDPE_0_i_mux_bus_1_1_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_1_1_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_1_1[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_1_rev_T_10 = {_FDPE_0_i_mux_bus_1_1_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_80 = {{2'd0}, _FDPE_0_i_mux_bus_1_1_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_1_1_rev_T_11 = _FDPE_0_i_mux_bus_1_1_rev_T_7 | _GEN_80; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_1_1_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_1_1[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_1_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_1_1_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_82 = {{2'd0}, _FDPE_0_i_mux_bus_1_1_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_1_2 = MuxesWrapper_io_Omuxes_1_2; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_1_2_rev_T_2 = {MuxWrapper_0_Omuxes_1_2[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_1_2_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_1_2[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_84 = {_FDPE_0_i_mux_bus_1_2_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_2_rev_T_6 = {{1'd0}, _GEN_84}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_1_2_rev_T_7 = _FDPE_0_i_mux_bus_1_2_rev_T_2 | _FDPE_0_i_mux_bus_1_2_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_1_2_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_1_2[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_2_rev_T_10 = {_FDPE_0_i_mux_bus_1_2_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_86 = {{2'd0}, _FDPE_0_i_mux_bus_1_2_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_1_2_rev_T_11 = _FDPE_0_i_mux_bus_1_2_rev_T_7 | _GEN_86; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_1_2_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_1_2[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_1_2_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_1_2_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_88 = {{2'd0}, _FDPE_0_i_mux_bus_1_2_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_2_0 = MuxesWrapper_io_Omuxes_2_0; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_2_0_rev_T_2 = {MuxWrapper_0_Omuxes_2_0[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_2_0_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_2_0[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_90 = {_FDPE_0_i_mux_bus_2_0_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_0_rev_T_6 = {{1'd0}, _GEN_90}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_0_rev_T_7 = _FDPE_0_i_mux_bus_2_0_rev_T_2 | _FDPE_0_i_mux_bus_2_0_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_2_0_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_2_0[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_2_0_rev_T_10 = {_FDPE_0_i_mux_bus_2_0_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_92 = {{2'd0}, _FDPE_0_i_mux_bus_2_0_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_2_0_rev_T_11 = _FDPE_0_i_mux_bus_2_0_rev_T_7 | _GEN_92; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_2_0_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_2_0[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_2_0_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_2_0_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_94 = {{2'd0}, _FDPE_0_i_mux_bus_2_0_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_2_1 = MuxesWrapper_io_Omuxes_2_1; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_2_1_rev_T_2 = {MuxWrapper_0_Omuxes_2_1[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_2_1_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_2_1[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_96 = {_FDPE_0_i_mux_bus_2_1_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_1_rev_T_6 = {{1'd0}, _GEN_96}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_2_1_rev_T_7 = _FDPE_0_i_mux_bus_2_1_rev_T_2 | _FDPE_0_i_mux_bus_2_1_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_2_1_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_2_1[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_2_1_rev_T_10 = {_FDPE_0_i_mux_bus_2_1_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_98 = {{2'd0}, _FDPE_0_i_mux_bus_2_1_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_2_1_rev_T_11 = _FDPE_0_i_mux_bus_2_1_rev_T_7 | _GEN_98; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_2_1_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_2_1[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_2_1_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_2_1_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_100 = {{2'd0}, _FDPE_0_i_mux_bus_2_1_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] MuxWrapper_0_Omuxes_3_0 = MuxesWrapper_io_Omuxes_3_0; // @[FlexDPU.scala 114:{33,33}]
  wire [3:0] _FDPE_0_i_mux_bus_3_0_rev_T_2 = {MuxWrapper_0_Omuxes_3_0[0], 3'h0}; // @[FlexDPU.scala 64:35]
  wire [31:0] _FDPE_0_i_mux_bus_3_0_rev_T_4 = {{1'd0}, MuxWrapper_0_Omuxes_3_0[31:1]}; // @[FlexDPU.scala 64:24]
  wire [2:0] _GEN_102 = {_FDPE_0_i_mux_bus_3_0_rev_T_4[0], 2'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_3_0_rev_T_6 = {{1'd0}, _GEN_102}; // @[FlexDPU.scala 64:35]
  wire [3:0] _FDPE_0_i_mux_bus_3_0_rev_T_7 = _FDPE_0_i_mux_bus_3_0_rev_T_2 | _FDPE_0_i_mux_bus_3_0_rev_T_6; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_3_0_rev_T_8 = {{2'd0}, MuxWrapper_0_Omuxes_3_0[31:2]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_3_0_rev_T_10 = {_FDPE_0_i_mux_bus_3_0_rev_T_8[0], 1'h0}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_104 = {{2'd0}, _FDPE_0_i_mux_bus_3_0_rev_T_10}; // @[FlexDPU.scala 64:17]
  wire [3:0] _FDPE_0_i_mux_bus_3_0_rev_T_11 = _FDPE_0_i_mux_bus_3_0_rev_T_7 | _GEN_104; // @[FlexDPU.scala 64:17]
  wire [31:0] _FDPE_0_i_mux_bus_3_0_rev_T_12 = {{3'd0}, MuxWrapper_0_Omuxes_3_0[31:3]}; // @[FlexDPU.scala 64:24]
  wire [1:0] _FDPE_0_i_mux_bus_3_0_rev_T_14 = {{1'd0}, _FDPE_0_i_mux_bus_3_0_rev_T_12[0]}; // @[FlexDPU.scala 64:35]
  wire [3:0] _GEN_106 = {{2'd0}, _FDPE_0_i_mux_bus_3_0_rev_T_14}; // @[FlexDPU.scala 64:17]
  wire [31:0] _ModuleIndex_T_1 = ModuleIndex + 32'h1; // @[FlexDPU.scala 171:40]
  wire [15:0] _GEN_27 = ModuleIndex[0] ? io_Streaming_matrix_0_1 : io_Streaming_matrix_0_0; // @[FlexDPU.scala 181:{31,31}]
  wire [15:0] _GEN_29 = ModuleIndex[0] ? io_Streaming_matrix_1_1 : io_Streaming_matrix_1_0; // @[FlexDPU.scala 181:{31,31}]
  wire [31:0] _GEN_34 = Statvalid ? PF1_Stream_Col_0 : 32'h0; // @[FlexDPU.scala 94:20 78:32 98:32]
  wire [31:0] _GEN_35 = Statvalid ? PF1_Stream_Col_1 : 32'h0; // @[FlexDPU.scala 94:20 78:32 98:32]
  wire [3:0] PF_0_i_mux_bus_0 = PathFinder_io_i_mux_bus_0; // @[FlexDPU.scala 73:{21,21}]
  wire [3:0] PF_0_i_mux_bus_1 = PathFinder_io_i_mux_bus_1; // @[FlexDPU.scala 73:{21,21}]
  wire [3:0] PF_0_i_mux_bus_2 = PathFinder_io_i_mux_bus_2; // @[FlexDPU.scala 73:{21,21}]
  wire [3:0] PF_0_i_mux_bus_3 = PathFinder_io_i_mux_bus_3; // @[FlexDPU.scala 73:{21,21}]
  wire [15:0] PF_0_Source_0 = PathFinder_io_Source_0; // @[FlexDPU.scala 73:{21,21}]
  wire [15:0] PF_0_Source_1 = PathFinder_io_Source_1; // @[FlexDPU.scala 73:{21,21}]
  wire [15:0] PF_0_Source_2 = PathFinder_io_Source_2; // @[FlexDPU.scala 73:{21,21}]
  wire [15:0] PF_0_Source_3 = PathFinder_io_Source_3; // @[FlexDPU.scala 73:{21,21}]
  wire [15:0] FDPE_0_matrix_0_0 = flexdpecom4_io_matrix_0_0; // @[FlexDPU.scala 122:{27,27}]
  wire [15:0] FDPE_0_matrix_0_1 = flexdpecom4_io_matrix_0_1; // @[FlexDPU.scala 122:{27,27}]
  wire [15:0] FDPE_0_matrix_1_0 = flexdpecom4_io_matrix_1_0; // @[FlexDPU.scala 122:{27,27}]
  wire [15:0] FDPE_0_matrix_1_1 = flexdpecom4_io_matrix_1_1; // @[FlexDPU.scala 122:{27,27}]
  wire  check2 = PF_0_PF_Valid | _T_13; // @[FlexDPU.scala 106:34 107:24]
  wire [31:0] MuxWrapper_0_Osrc_0 = MuxesWrapper_io_Osrc_0; // @[FlexDPU.scala 114:{33,33}]
  wire [31:0] MuxWrapper_0_Osrc_1 = MuxesWrapper_io_Osrc_1; // @[FlexDPU.scala 114:{33,33}]
  wire [31:0] MuxWrapper_0_Osrc_2 = MuxesWrapper_io_Osrc_2; // @[FlexDPU.scala 114:{33,33}]
  wire [31:0] MuxWrapper_0_Osrc_3 = MuxesWrapper_io_Osrc_3; // @[FlexDPU.scala 114:{33,33}]
  wire [15:0] FDPE_0_o_adder_0 = flexdpecom4_io_o_adder_0; // @[FlexDPU.scala 122:{27,27}]
  wire [15:0] FDPE_0_o_adder_1 = flexdpecom4_io_o_adder_1; // @[FlexDPU.scala 122:{27,27}]
  wire [15:0] FDPE_0_o_adder_2 = flexdpecom4_io_o_adder_2; // @[FlexDPU.scala 122:{27,27}]
  PathFinder PathFinder ( // @[FlexDPU.scala 73:40]
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
    .io_PF_Valid(PathFinder_io_PF_Valid)
  );
  MuxesWrapper MuxesWrapper ( // @[FlexDPU.scala 114:52]
    .io_src_0(MuxesWrapper_io_src_0),
    .io_src_1(MuxesWrapper_io_src_1),
    .io_src_2(MuxesWrapper_io_src_2),
    .io_src_3(MuxesWrapper_io_src_3),
    .io_muxes_0(MuxesWrapper_io_muxes_0),
    .io_muxes_1(MuxesWrapper_io_muxes_1),
    .io_muxes_2(MuxesWrapper_io_muxes_2),
    .io_muxes_3(MuxesWrapper_io_muxes_3),
    .io_Osrc_0(MuxesWrapper_io_Osrc_0),
    .io_Osrc_1(MuxesWrapper_io_Osrc_1),
    .io_Osrc_2(MuxesWrapper_io_Osrc_2),
    .io_Osrc_3(MuxesWrapper_io_Osrc_3),
    .io_Omuxes_0_0(MuxesWrapper_io_Omuxes_0_0),
    .io_Omuxes_0_1(MuxesWrapper_io_Omuxes_0_1),
    .io_Omuxes_0_2(MuxesWrapper_io_Omuxes_0_2),
    .io_Omuxes_0_3(MuxesWrapper_io_Omuxes_0_3),
    .io_Omuxes_1_0(MuxesWrapper_io_Omuxes_1_0),
    .io_Omuxes_1_1(MuxesWrapper_io_Omuxes_1_1),
    .io_Omuxes_1_2(MuxesWrapper_io_Omuxes_1_2),
    .io_Omuxes_2_0(MuxesWrapper_io_Omuxes_2_0),
    .io_Omuxes_2_1(MuxesWrapper_io_Omuxes_2_1),
    .io_Omuxes_3_0(MuxesWrapper_io_Omuxes_3_0)
  );
  flexdpecom4 flexdpecom4 ( // @[FlexDPU.scala 122:46]
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
    .io_i_mux_bus_0_0(flexdpecom4_io_i_mux_bus_0_0),
    .io_i_mux_bus_0_1(flexdpecom4_io_i_mux_bus_0_1),
    .io_i_mux_bus_0_2(flexdpecom4_io_i_mux_bus_0_2),
    .io_i_mux_bus_0_3(flexdpecom4_io_i_mux_bus_0_3),
    .io_i_mux_bus_1_0(flexdpecom4_io_i_mux_bus_1_0),
    .io_i_mux_bus_1_1(flexdpecom4_io_i_mux_bus_1_1),
    .io_i_mux_bus_1_2(flexdpecom4_io_i_mux_bus_1_2),
    .io_i_mux_bus_2_0(flexdpecom4_io_i_mux_bus_2_0),
    .io_i_mux_bus_2_1(flexdpecom4_io_i_mux_bus_2_1),
    .io_i_mux_bus_3_0(flexdpecom4_io_i_mux_bus_3_0),
    .io_matrix_0_0(flexdpecom4_io_matrix_0_0),
    .io_matrix_0_1(flexdpecom4_io_matrix_0_1),
    .io_matrix_1_0(flexdpecom4_io_matrix_1_0),
    .io_matrix_1_1(flexdpecom4_io_matrix_1_1)
  );
  assign io_output_0_0 = Statvalid ? FDPE_0_matrix_0_0 : 16'h0; // @[FlexDPU.scala 146:19 268:19 94:20]
  assign io_output_0_1 = Statvalid ? FDPE_0_matrix_0_1 : 16'h0; // @[FlexDPU.scala 146:19 268:19 94:20]
  assign io_output_1_0 = Statvalid ? FDPE_0_matrix_1_0 : 16'h0; // @[FlexDPU.scala 146:19 268:19 94:20]
  assign io_output_1_1 = Statvalid ? FDPE_0_matrix_1_1 : 16'h0; // @[FlexDPU.scala 146:19 268:19 94:20]
  assign PathFinder_clock = clock;
  assign PathFinder_reset = reset;
  assign PathFinder_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 94:20 77:33 97:33]
  assign PathFinder_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 94:20 77:33 97:33]
  assign PathFinder_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 94:20 77:33 97:33]
  assign PathFinder_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 94:20 77:33 97:33]
  assign PathFinder_io_Streaming_matrix_0 = _GEN_34[15:0]; // @[FlexDPU.scala 73:21]
  assign PathFinder_io_Streaming_matrix_1 = _GEN_35[15:0]; // @[FlexDPU.scala 73:21]
  assign MuxesWrapper_io_src_0 = {{16'd0}, PF_0_Source_0}; // @[FlexDPU.scala 114:33 117:31]
  assign MuxesWrapper_io_src_1 = {{16'd0}, PF_0_Source_1}; // @[FlexDPU.scala 114:33 117:31]
  assign MuxesWrapper_io_src_2 = {{16'd0}, PF_0_Source_2}; // @[FlexDPU.scala 114:33 117:31]
  assign MuxesWrapper_io_src_3 = {{16'd0}, PF_0_Source_3}; // @[FlexDPU.scala 114:33 117:31]
  assign MuxesWrapper_io_muxes_0 = {{28'd0}, PF_0_i_mux_bus_0}; // @[FlexDPU.scala 114:33 118:33]
  assign MuxesWrapper_io_muxes_1 = {{28'd0}, PF_0_i_mux_bus_1}; // @[FlexDPU.scala 114:33 118:33]
  assign MuxesWrapper_io_muxes_2 = {{28'd0}, PF_0_i_mux_bus_2}; // @[FlexDPU.scala 114:33 118:33]
  assign MuxesWrapper_io_muxes_3 = {{28'd0}, PF_0_i_mux_bus_3}; // @[FlexDPU.scala 114:33 118:33]
  assign flexdpecom4_clock = clock;
  assign flexdpecom4_reset = reset;
  assign flexdpecom4_io_i_data_valid = 1'h1; // @[FlexDPU.scala 122:27 126:34]
  assign flexdpecom4_io_i_data_bus_0 = nonZeroValues_0[15:0]; // @[FlexDPU.scala 122:27 140:37]
  assign flexdpecom4_io_i_data_bus_1 = nonZeroValues_1[15:0]; // @[FlexDPU.scala 122:27 141:37]
  assign flexdpecom4_io_i_data_bus_2 = nonZeroValues_2[15:0]; // @[FlexDPU.scala 122:27 142:37]
  assign flexdpecom4_io_i_data_bus_3 = nonZeroValues_3[15:0]; // @[FlexDPU.scala 122:27 143:37]
  assign flexdpecom4_io_i_data_bus2_0 = MuxWrapper_0_Osrc_0[15:0]; // @[FlexDPU.scala 122:27 134:33]
  assign flexdpecom4_io_i_data_bus2_1 = MuxWrapper_0_Osrc_1[15:0]; // @[FlexDPU.scala 122:27 134:33]
  assign flexdpecom4_io_i_data_bus2_2 = MuxWrapper_0_Osrc_2[15:0]; // @[FlexDPU.scala 122:27 134:33]
  assign flexdpecom4_io_i_data_bus2_3 = MuxWrapper_0_Osrc_3[15:0]; // @[FlexDPU.scala 122:27 134:33]
  assign flexdpecom4_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 122:27 127:39]
  assign flexdpecom4_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 122:27 127:39]
  assign flexdpecom4_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 122:27 127:39]
  assign flexdpecom4_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 122:27 127:39]
  assign flexdpecom4_io_i_mux_bus_0_0 = _FDPE_0_i_mux_bus_0_0_rev_T_11 | _GEN_45; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_0_1 = _FDPE_0_i_mux_bus_0_1_rev_T_11 | _GEN_58; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_0_2 = _FDPE_0_i_mux_bus_0_2_rev_T_11 | _GEN_64; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_0_3 = _FDPE_0_i_mux_bus_0_3_rev_T_11 | _GEN_70; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_1_0 = _FDPE_0_i_mux_bus_1_0_rev_T_11 | _GEN_76; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_1_1 = _FDPE_0_i_mux_bus_1_1_rev_T_11 | _GEN_82; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_1_2 = _FDPE_0_i_mux_bus_1_2_rev_T_11 | _GEN_88; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_2_0 = _FDPE_0_i_mux_bus_2_0_rev_T_11 | _GEN_94; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_2_1 = _FDPE_0_i_mux_bus_2_1_rev_T_11 | _GEN_100; // @[FlexDPU.scala 64:17]
  assign flexdpecom4_io_i_mux_bus_3_0 = _FDPE_0_i_mux_bus_3_0_rev_T_11 | _GEN_106; // @[FlexDPU.scala 64:17]
  always @(posedge clock) begin
    if (reset) begin // @[FlexDPU.scala 27:32]
      nonZeroValues_0 <= 32'h0; // @[FlexDPU.scala 27:32]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPU.scala 34:54]
      if (2'h0 == index[1:0]) begin // @[FlexDPU.scala 35:30]
        nonZeroValues_0 <= _nonZeroValues_T_3; // @[FlexDPU.scala 35:30]
      end
    end
    if (reset) begin // @[FlexDPU.scala 27:32]
      nonZeroValues_1 <= 32'h0; // @[FlexDPU.scala 27:32]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPU.scala 34:54]
      if (2'h1 == index[1:0]) begin // @[FlexDPU.scala 35:30]
        nonZeroValues_1 <= _nonZeroValues_T_3; // @[FlexDPU.scala 35:30]
      end
    end
    if (reset) begin // @[FlexDPU.scala 27:32]
      nonZeroValues_2 <= 32'h0; // @[FlexDPU.scala 27:32]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPU.scala 34:54]
      if (2'h2 == index[1:0]) begin // @[FlexDPU.scala 35:30]
        nonZeroValues_2 <= _nonZeroValues_T_3; // @[FlexDPU.scala 35:30]
      end
    end
    if (reset) begin // @[FlexDPU.scala 27:32]
      nonZeroValues_3 <= 32'h0; // @[FlexDPU.scala 27:32]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPU.scala 34:54]
      if (2'h3 == index[1:0]) begin // @[FlexDPU.scala 35:30]
        nonZeroValues_3 <= _nonZeroValues_T_3; // @[FlexDPU.scala 35:30]
      end
    end
    if (reset) begin // @[FlexDPU.scala 28:24]
      index <= 32'h0; // @[FlexDPU.scala 28:24]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPU.scala 34:54]
      index <= _index_T_1; // @[FlexDPU.scala 36:15]
    end
    if (reset) begin // @[FlexDPU.scala 29:24]
      iloop <= 32'h0; // @[FlexDPU.scala 29:24]
    end else if (iloop < 32'h1 & _Statvalid_T_1) begin // @[FlexDPU.scala 39:77]
      iloop <= _iloop_T_1; // @[FlexDPU.scala 40:15]
    end
    if (reset) begin // @[FlexDPU.scala 30:24]
      jloop <= 32'h0; // @[FlexDPU.scala 30:24]
    end else if (iloop <= 32'h1 & jloop < 32'h1) begin // @[FlexDPU.scala 43:76]
      jloop <= _jloop_T_1; // @[FlexDPU.scala 44:15]
    end else if (!(_Statvalid_T_2)) begin // @[FlexDPU.scala 45:83]
      jloop <= 32'h0; // @[FlexDPU.scala 48:15]
    end
    if (reset) begin // @[FlexDPU.scala 31:28]
      Statvalid <= 1'h0; // @[FlexDPU.scala 31:28]
    end else begin
      Statvalid <= iloop == 32'h1 & jloop == 32'h1; // @[FlexDPU.scala 33:15]
    end
    if (reset) begin // @[FlexDPU.scala 57:33]
      PF1_Stream_Col_0 <= 32'h0; // @[FlexDPU.scala 57:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 94:20]
      PF1_Stream_Col_0 <= {{16'd0}, _GEN_27}; // @[FlexDPU.scala 181:31]
    end
    if (reset) begin // @[FlexDPU.scala 57:33]
      PF1_Stream_Col_1 <= 32'h0; // @[FlexDPU.scala 57:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 94:20]
      PF1_Stream_Col_1 <= {{16'd0}, _GEN_29}; // @[FlexDPU.scala 181:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:30]
      ModuleIndex <= 32'h0; // @[FlexDPU.scala 58:30]
    end else if (Statvalid) begin // @[FlexDPU.scala 94:20]
      if (!(ModuleIndex == 32'h1 & PF_0_PF_Valid)) begin // @[FlexDPU.scala 174:71]
        if (PF_0_PF_Valid) begin // @[FlexDPU.scala 169:29]
          ModuleIndex <= _ModuleIndex_T_1; // @[FlexDPU.scala 171:25]
        end
      end
    end
    if (reset) begin // @[FlexDPU.scala 103:33]
      delay2 <= 32'h0; // @[FlexDPU.scala 103:33]
    end else if (!(PF_0_PF_Valid)) begin // @[FlexDPU.scala 106:34]
      if (delay2 < 32'h4) begin // @[FlexDPU.scala 108:71]
        delay2 <= _delay2_T_1; // @[FlexDPU.scala 109:24]
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
  PF1_Stream_Col_0 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  PF1_Stream_Col_1 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  ModuleIndex = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  delay2 = _RAND_11[31:0];
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
  wire  FDPU_clock; // @[TOP.scala 25:26]
  wire  FDPU_reset; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Stationary_matrix_0_0; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Stationary_matrix_0_1; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Stationary_matrix_1_0; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Stationary_matrix_1_1; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Streaming_matrix_0_0; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Streaming_matrix_0_1; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Streaming_matrix_1_0; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_Streaming_matrix_1_1; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_output_0_0; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_output_0_1; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_output_1_0; // @[TOP.scala 25:26]
  wire [15:0] FDPU_io_output_1_1; // @[TOP.scala 25:26]
  reg  delay; // @[TOP.scala 18:24]
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
    .io_compressedBitmap_1_1(PreProcessor_io_compressedBitmap_1_1)
  );
  FlexDPU FDPU ( // @[TOP.scala 25:26]
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
    .io_output_1_1(FDPU_io_output_1_1)
  );
  assign io_Third_Matrix_0_0 = delay ? {{16'd0}, FDPU_io_output_0_0} : 32'h0; // @[TOP.scala 24:25 28:25 30:25]
  assign io_Third_Matrix_0_1 = delay ? {{16'd0}, FDPU_io_output_0_1} : 32'h0; // @[TOP.scala 24:25 28:25 30:25]
  assign io_Third_Matrix_1_0 = delay ? {{16'd0}, FDPU_io_output_1_0} : 32'h0; // @[TOP.scala 24:25 28:25 30:25]
  assign io_Third_Matrix_1_1 = delay ? {{16'd0}, FDPU_io_output_1_1} : 32'h0; // @[TOP.scala 24:25 28:25 30:25]
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
  assign FDPU_io_Stationary_matrix_0_0 = PreProcessor_io_compressedBitmap_0_0; // @[TOP.scala 26:35]
  assign FDPU_io_Stationary_matrix_0_1 = PreProcessor_io_compressedBitmap_0_1; // @[TOP.scala 26:35]
  assign FDPU_io_Stationary_matrix_1_0 = PreProcessor_io_compressedBitmap_1_0; // @[TOP.scala 26:35]
  assign FDPU_io_Stationary_matrix_1_1 = PreProcessor_io_compressedBitmap_1_1; // @[TOP.scala 26:35]
  assign FDPU_io_Streaming_matrix_0_0 = io_Streaming_matrix_0_0[15:0]; // @[TOP.scala 27:34]
  assign FDPU_io_Streaming_matrix_0_1 = io_Streaming_matrix_0_1[15:0]; // @[TOP.scala 27:34]
  assign FDPU_io_Streaming_matrix_1_0 = io_Streaming_matrix_1_0[15:0]; // @[TOP.scala 27:34]
  assign FDPU_io_Streaming_matrix_1_1 = io_Streaming_matrix_1_1[15:0]; // @[TOP.scala 27:34]
  always @(posedge clock) begin
    if (reset) begin // @[TOP.scala 18:24]
      delay <= 1'h0; // @[TOP.scala 18:24]
    end else if (delay <= 1'h0) begin // @[TOP.scala 20:25]
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
  delay = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRAM(
  input         clock,
  input  [31:0] io_dataIn,
  input         io_we,
  input  [9:0]  io_address,
  input         io_valid,
  output [31:0] io_dataOut
);
  wire  sram0_CLK; // @[SRAM.scala 20:23]
  wire  sram0_CEN; // @[SRAM.scala 20:23]
  wire  sram0_GWEN; // @[SRAM.scala 20:23]
  wire [7:0] sram0_WEN; // @[SRAM.scala 20:23]
  wire [8:0] sram0_A; // @[SRAM.scala 20:23]
  wire [7:0] sram0_D; // @[SRAM.scala 20:23]
  wire [7:0] sram0_Q; // @[SRAM.scala 20:23]
  wire  sram0_VDD; // @[SRAM.scala 20:23]
  wire  sram0_VSS; // @[SRAM.scala 20:23]
  wire  sram1_CLK; // @[SRAM.scala 21:23]
  wire  sram1_CEN; // @[SRAM.scala 21:23]
  wire  sram1_GWEN; // @[SRAM.scala 21:23]
  wire [7:0] sram1_WEN; // @[SRAM.scala 21:23]
  wire [8:0] sram1_A; // @[SRAM.scala 21:23]
  wire [7:0] sram1_D; // @[SRAM.scala 21:23]
  wire [7:0] sram1_Q; // @[SRAM.scala 21:23]
  wire  sram1_VDD; // @[SRAM.scala 21:23]
  wire  sram1_VSS; // @[SRAM.scala 21:23]
  wire  sram2_CLK; // @[SRAM.scala 22:23]
  wire  sram2_CEN; // @[SRAM.scala 22:23]
  wire  sram2_GWEN; // @[SRAM.scala 22:23]
  wire [7:0] sram2_WEN; // @[SRAM.scala 22:23]
  wire [8:0] sram2_A; // @[SRAM.scala 22:23]
  wire [7:0] sram2_D; // @[SRAM.scala 22:23]
  wire [7:0] sram2_Q; // @[SRAM.scala 22:23]
  wire  sram2_VDD; // @[SRAM.scala 22:23]
  wire  sram2_VSS; // @[SRAM.scala 22:23]
  wire  sram3_CLK; // @[SRAM.scala 23:23]
  wire  sram3_CEN; // @[SRAM.scala 23:23]
  wire  sram3_GWEN; // @[SRAM.scala 23:23]
  wire [7:0] sram3_WEN; // @[SRAM.scala 23:23]
  wire [8:0] sram3_A; // @[SRAM.scala 23:23]
  wire [7:0] sram3_D; // @[SRAM.scala 23:23]
  wire [7:0] sram3_Q; // @[SRAM.scala 23:23]
  wire  sram3_VDD; // @[SRAM.scala 23:23]
  wire  sram3_VSS; // @[SRAM.scala 23:23]
  wire [15:0] io_dataOut_lo = {sram1_Q,sram0_Q}; // @[Cat.scala 33:92]
  wire [15:0] io_dataOut_hi = {sram3_Q,sram2_Q}; // @[Cat.scala 33:92]
  gf180mcu_fd_ip_sram__sram512x8m8wm1 sram0 ( // @[SRAM.scala 20:23]
    .CLK(sram0_CLK),
    .CEN(sram0_CEN),
    .GWEN(sram0_GWEN),
    .WEN(sram0_WEN),
    .A(sram0_A),
    .D(sram0_D),
    .Q(sram0_Q),
    .VDD(sram0_VDD),
    .VSS(sram0_VSS)
  );
  gf180mcu_fd_ip_sram__sram512x8m8wm1 sram1 ( // @[SRAM.scala 21:23]
    .CLK(sram1_CLK),
    .CEN(sram1_CEN),
    .GWEN(sram1_GWEN),
    .WEN(sram1_WEN),
    .A(sram1_A),
    .D(sram1_D),
    .Q(sram1_Q),
    .VDD(sram1_VDD),
    .VSS(sram1_VSS)
  );
  gf180mcu_fd_ip_sram__sram512x8m8wm1 sram2 ( // @[SRAM.scala 22:23]
    .CLK(sram2_CLK),
    .CEN(sram2_CEN),
    .GWEN(sram2_GWEN),
    .WEN(sram2_WEN),
    .A(sram2_A),
    .D(sram2_D),
    .Q(sram2_Q),
    .VDD(sram2_VDD),
    .VSS(sram2_VSS)
  );
  gf180mcu_fd_ip_sram__sram512x8m8wm1 sram3 ( // @[SRAM.scala 23:23]
    .CLK(sram3_CLK),
    .CEN(sram3_CEN),
    .GWEN(sram3_GWEN),
    .WEN(sram3_WEN),
    .A(sram3_A),
    .D(sram3_D),
    .Q(sram3_Q),
    .VDD(sram3_VDD),
    .VSS(sram3_VSS)
  );
  assign io_dataOut = {io_dataOut_hi,io_dataOut_lo}; // @[Cat.scala 33:92]
  assign sram0_CLK = clock; // @[SRAM.scala 47:36]
  assign sram0_CEN = io_valid ? 1'h0 : 1'h1; // @[SRAM.scala 55:24]
  assign sram0_GWEN = ~io_we; // @[SRAM.scala 60:22]
  assign sram0_WEN = 8'h0; // @[Bitwise.scala 77:12]
  assign sram0_A = io_address[8:0]; // @[SRAM.scala 26:16]
  assign sram0_D = io_dataIn[7:0]; // @[SRAM.scala 32:28]
  assign sram1_CLK = clock; // @[SRAM.scala 47:36]
  assign sram1_CEN = io_valid ? 1'h0 : 1'h1; // @[SRAM.scala 56:24]
  assign sram1_GWEN = ~io_we; // @[SRAM.scala 61:22]
  assign sram1_WEN = 8'h0; // @[Bitwise.scala 77:12]
  assign sram1_A = io_address[8:0]; // @[SRAM.scala 27:16]
  assign sram1_D = io_dataIn[15:8]; // @[SRAM.scala 33:28]
  assign sram2_CLK = clock; // @[SRAM.scala 47:36]
  assign sram2_CEN = io_valid ? 1'h0 : 1'h1; // @[SRAM.scala 57:24]
  assign sram2_GWEN = ~io_we; // @[SRAM.scala 62:22]
  assign sram2_WEN = 8'h0; // @[Bitwise.scala 77:12]
  assign sram2_A = io_address[8:0]; // @[SRAM.scala 28:16]
  assign sram2_D = io_dataIn[23:16]; // @[SRAM.scala 34:28]
  assign sram3_CLK = clock; // @[SRAM.scala 47:36]
  assign sram3_CEN = io_valid ? 1'h0 : 1'h1; // @[SRAM.scala 58:24]
  assign sram3_GWEN = ~io_we; // @[SRAM.scala 63:22]
  assign sram3_WEN = 8'h0; // @[Bitwise.scala 77:12]
  assign sram3_A = io_address[8:0]; // @[SRAM.scala 29:16]
  assign sram3_D = io_dataIn[31:24]; // @[SRAM.scala 35:28]
endmodule
module MMU(
  input         clock,
  input  [9:0]  io_top_adr,
  input         io_top_we,
  input  [31:0] io_top_dat,
  input         io_top_val,
  output        io_top_out_valid,
  output [31:0] io_top_out_bits,
  input  [9:0]  io_acc_adr,
  input         io_acc_we,
  input  [31:0] io_acc_dat,
  input         io_acc_val,
  output [31:0] io_acc_out_bits
);
  wire  SRAM_clock; // @[AcceleratoTop.scala 225:22]
  wire [31:0] SRAM_io_dataIn; // @[AcceleratoTop.scala 225:22]
  wire  SRAM_io_we; // @[AcceleratoTop.scala 225:22]
  wire [9:0] SRAM_io_address; // @[AcceleratoTop.scala 225:22]
  wire  SRAM_io_valid; // @[AcceleratoTop.scala 225:22]
  wire [31:0] SRAM_io_dataOut; // @[AcceleratoTop.scala 225:22]
  wire [9:0] _SRAM_io_address_T_1 = io_top_adr - 10'hc; // @[AcceleratoTop.scala 240:42]
  wire [9:0] _GEN_0 = io_top_we ? _SRAM_io_address_T_1 : _SRAM_io_address_T_1; // @[AcceleratoTop.scala 238:24 240:29 245:29]
  wire [31:0] _GEN_1 = io_top_we ? io_top_dat : 32'h0; // @[AcceleratoTop.scala 226:20 238:24 241:28]
  wire [31:0] _GEN_4 = io_top_we ? 32'h0 : SRAM_io_dataOut; // @[AcceleratoTop.scala 231:21 238:24 248:29]
  wire  _GEN_5 = io_top_we ? 1'h0 : 1'h1; // @[AcceleratoTop.scala 234:22 238:24 249:30]
  wire [9:0] _SRAM_io_address_T_5 = io_acc_adr - 10'hc; // @[AcceleratoTop.scala 254:42]
  wire [9:0] _GEN_6 = io_acc_we ? _SRAM_io_address_T_5 : _SRAM_io_address_T_5; // @[AcceleratoTop.scala 252:24 254:29 259:29]
  wire [31:0] _GEN_7 = io_acc_we ? io_acc_dat : 32'h0; // @[AcceleratoTop.scala 226:20 252:24 255:28]
  wire [31:0] _GEN_10 = io_acc_we ? 32'h0 : SRAM_io_dataOut; // @[AcceleratoTop.scala 232:21 252:24 262:29]
  wire [9:0] _GEN_12 = io_acc_val ? _GEN_6 : 10'h0; // @[AcceleratoTop.scala 227:21 251:27]
  wire [31:0] _GEN_13 = io_acc_val ? _GEN_7 : 32'h0; // @[AcceleratoTop.scala 226:20 251:27]
  wire  _GEN_14 = io_acc_val & io_acc_we; // @[AcceleratoTop.scala 228:16 251:27]
  wire [31:0] _GEN_16 = io_acc_val ? _GEN_10 : 32'h0; // @[AcceleratoTop.scala 232:21 251:27]
  SRAM SRAM ( // @[AcceleratoTop.scala 225:22]
    .clock(SRAM_clock),
    .io_dataIn(SRAM_io_dataIn),
    .io_we(SRAM_io_we),
    .io_address(SRAM_io_address),
    .io_valid(SRAM_io_valid),
    .io_dataOut(SRAM_io_dataOut)
  );
  assign io_top_out_valid = io_top_val & _GEN_5; // @[AcceleratoTop.scala 237:21 234:22]
  assign io_top_out_bits = io_top_val ? _GEN_4 : 32'h0; // @[AcceleratoTop.scala 231:21 237:21]
  assign io_acc_out_bits = io_top_val ? 32'h0 : _GEN_16; // @[AcceleratoTop.scala 232:21 237:21]
  assign SRAM_clock = clock;
  assign SRAM_io_dataIn = io_top_val ? _GEN_1 : _GEN_13; // @[AcceleratoTop.scala 237:21]
  assign SRAM_io_we = io_top_val ? io_top_we : _GEN_14; // @[AcceleratoTop.scala 237:21]
  assign SRAM_io_address = io_top_val ? _GEN_0 : _GEN_12; // @[AcceleratoTop.scala 237:21]
  assign SRAM_io_valid = io_top_val | io_acc_val; // @[AcceleratoTop.scala 237:21]
endmodule
module AcceleratoTop(
  input         clock,
  input         reset,
  input         io_wbs_stb_i,
  input         io_wbs_cyc_i,
  input         io_wbs_we_i,
  input  [2:0]  io_wbs_sel_i,
  input  [31:0] io_wbs_dat_i,
  input  [31:0] io_wbs_adr_i,
  output        io_wbs_ack_o,
  output [31:0] io_wbs_dat_o
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
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
`endif // RANDOMIZE_REG_INIT
  wire  ACCL_clock; // @[AcceleratoTop.scala 25:22]
  wire  ACCL_reset; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Stationary_matrix_0_0; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Stationary_matrix_0_1; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Stationary_matrix_1_0; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Stationary_matrix_1_1; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Streaming_matrix_0_0; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Streaming_matrix_0_1; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Streaming_matrix_1_0; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Streaming_matrix_1_1; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Third_Matrix_0_0; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Third_Matrix_0_1; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Third_Matrix_1_0; // @[AcceleratoTop.scala 25:22]
  wire [31:0] ACCL_io_Third_Matrix_1_1; // @[AcceleratoTop.scala 25:22]
  wire  MMU_clock; // @[AcceleratoTop.scala 28:22]
  wire [9:0] MMU_io_top_adr; // @[AcceleratoTop.scala 28:22]
  wire  MMU_io_top_we; // @[AcceleratoTop.scala 28:22]
  wire [31:0] MMU_io_top_dat; // @[AcceleratoTop.scala 28:22]
  wire  MMU_io_top_val; // @[AcceleratoTop.scala 28:22]
  wire  MMU_io_top_out_valid; // @[AcceleratoTop.scala 28:22]
  wire [31:0] MMU_io_top_out_bits; // @[AcceleratoTop.scala 28:22]
  wire [9:0] MMU_io_acc_adr; // @[AcceleratoTop.scala 28:22]
  wire  MMU_io_acc_we; // @[AcceleratoTop.scala 28:22]
  wire [31:0] MMU_io_acc_dat; // @[AcceleratoTop.scala 28:22]
  wire  MMU_io_acc_val; // @[AcceleratoTop.scala 28:22]
  wire [31:0] MMU_io_acc_out_bits; // @[AcceleratoTop.scala 28:22]
  reg [1:0] stateReg; // @[AcceleratoTop.scala 23:27]
  reg [31:0] MatABaseAdr; // @[AcceleratoTop.scala 58:30]
  reg [31:0] MatARows; // @[AcceleratoTop.scala 59:30]
  reg [31:0] MatACols; // @[AcceleratoTop.scala 60:30]
  reg [31:0] MatBBaseAdr; // @[AcceleratoTop.scala 61:30]
  reg [31:0] MatBRows; // @[AcceleratoTop.scala 62:30]
  reg [31:0] MatBCols; // @[AcceleratoTop.scala 63:30]
  reg [31:0] MatCBaseAdr; // @[AcceleratoTop.scala 64:30]
  reg [31:0] MatCRows; // @[AcceleratoTop.scala 65:30]
  reg [31:0] MatCCols; // @[AcceleratoTop.scala 66:30]
  reg [31:0] StartTrans; // @[AcceleratoTop.scala 67:30]
  reg  MatReadDone; // @[AcceleratoTop.scala 68:30]
  reg  MatCompDone; // @[AcceleratoTop.scala 69:30]
  reg  MatStrDone; // @[AcceleratoTop.scala 70:30]
  reg  MatSel; // @[AcceleratoTop.scala 73:30]
  reg [31:0] MatA_0_0; // @[AcceleratoTop.scala 74:30]
  reg [31:0] MatA_0_1; // @[AcceleratoTop.scala 74:30]
  reg [31:0] MatA_1_0; // @[AcceleratoTop.scala 74:30]
  reg [31:0] MatA_1_1; // @[AcceleratoTop.scala 74:30]
  reg [31:0] MatB_0_0; // @[AcceleratoTop.scala 75:30]
  reg [31:0] MatB_0_1; // @[AcceleratoTop.scala 75:30]
  reg [31:0] MatB_1_0; // @[AcceleratoTop.scala 75:30]
  reg [31:0] MatB_1_1; // @[AcceleratoTop.scala 75:30]
  reg [31:0] MatC_0_0; // @[AcceleratoTop.scala 76:30]
  reg [31:0] MatC_0_1; // @[AcceleratoTop.scala 76:30]
  reg [31:0] MatC_1_0; // @[AcceleratoTop.scala 76:30]
  reg [31:0] MatC_1_1; // @[AcceleratoTop.scala 76:30]
  reg  MatARowCount; // @[AcceleratoTop.scala 77:33]
  reg  MatAColCount; // @[AcceleratoTop.scala 78:33]
  reg  MatACount; // @[AcceleratoTop.scala 79:33]
  reg  MatBRowCount; // @[AcceleratoTop.scala 80:33]
  reg  MatBColCount; // @[AcceleratoTop.scala 81:33]
  reg  MatBCount; // @[AcceleratoTop.scala 82:33]
  reg  MatCRowCount; // @[AcceleratoTop.scala 83:33]
  reg  MatCColCount; // @[AcceleratoTop.scala 84:33]
  reg  MatCCount; // @[AcceleratoTop.scala 85:33]
  reg  CompCount; // @[AcceleratoTop.scala 86:33]
  wire [31:0] _GEN_0 = 32'h9 == io_wbs_adr_i ? io_wbs_dat_i : StartTrans; // @[AcceleratoTop.scala 119:25 90:25 67:30]
  wire [31:0] _GEN_1 = 32'h8 == io_wbs_adr_i ? io_wbs_dat_i : MatCCols; // @[AcceleratoTop.scala 116:25 90:25 66:30]
  wire [31:0] _GEN_2 = 32'h8 == io_wbs_adr_i ? StartTrans : _GEN_0; // @[AcceleratoTop.scala 90:25 67:30]
  wire [31:0] _GEN_3 = 32'h7 == io_wbs_adr_i ? io_wbs_dat_i : MatCRows; // @[AcceleratoTop.scala 113:25 90:25 65:30]
  wire [31:0] _GEN_4 = 32'h7 == io_wbs_adr_i ? MatCCols : _GEN_1; // @[AcceleratoTop.scala 90:25 66:30]
  wire [31:0] _GEN_5 = 32'h7 == io_wbs_adr_i ? StartTrans : _GEN_2; // @[AcceleratoTop.scala 90:25 67:30]
  wire [31:0] _GEN_6 = 32'h6 == io_wbs_adr_i ? io_wbs_dat_i : MatCBaseAdr; // @[AcceleratoTop.scala 110:25 90:25 64:30]
  wire [31:0] _GEN_7 = 32'h6 == io_wbs_adr_i ? MatCRows : _GEN_3; // @[AcceleratoTop.scala 90:25 65:30]
  wire [31:0] _GEN_8 = 32'h6 == io_wbs_adr_i ? MatCCols : _GEN_4; // @[AcceleratoTop.scala 90:25 66:30]
  wire [31:0] _GEN_9 = 32'h6 == io_wbs_adr_i ? StartTrans : _GEN_5; // @[AcceleratoTop.scala 90:25 67:30]
  wire [31:0] _GEN_10 = 32'h5 == io_wbs_adr_i ? io_wbs_dat_i : MatBCols; // @[AcceleratoTop.scala 107:25 90:25 63:30]
  wire [31:0] _GEN_11 = 32'h5 == io_wbs_adr_i ? MatCBaseAdr : _GEN_6; // @[AcceleratoTop.scala 90:25 64:30]
  wire [31:0] _GEN_12 = 32'h5 == io_wbs_adr_i ? MatCRows : _GEN_7; // @[AcceleratoTop.scala 90:25 65:30]
  wire [31:0] _GEN_13 = 32'h5 == io_wbs_adr_i ? MatCCols : _GEN_8; // @[AcceleratoTop.scala 90:25 66:30]
  wire [31:0] _GEN_14 = 32'h5 == io_wbs_adr_i ? StartTrans : _GEN_9; // @[AcceleratoTop.scala 90:25 67:30]
  wire [31:0] _GEN_15 = 32'h4 == io_wbs_adr_i ? io_wbs_dat_i : MatBRows; // @[AcceleratoTop.scala 104:25 90:25 62:30]
  wire [31:0] _GEN_16 = 32'h4 == io_wbs_adr_i ? MatBCols : _GEN_10; // @[AcceleratoTop.scala 90:25 63:30]
  wire [31:0] _GEN_17 = 32'h4 == io_wbs_adr_i ? MatCBaseAdr : _GEN_11; // @[AcceleratoTop.scala 90:25 64:30]
  wire [31:0] _GEN_18 = 32'h4 == io_wbs_adr_i ? MatCRows : _GEN_12; // @[AcceleratoTop.scala 90:25 65:30]
  wire [31:0] _GEN_19 = 32'h4 == io_wbs_adr_i ? MatCCols : _GEN_13; // @[AcceleratoTop.scala 90:25 66:30]
  wire [31:0] _GEN_20 = 32'h4 == io_wbs_adr_i ? StartTrans : _GEN_14; // @[AcceleratoTop.scala 90:25 67:30]
  wire [31:0] _GEN_21 = 32'h3 == io_wbs_adr_i ? io_wbs_dat_i : MatBBaseAdr; // @[AcceleratoTop.scala 101:25 90:25 61:30]
  wire [31:0] _GEN_22 = 32'h3 == io_wbs_adr_i ? MatBRows : _GEN_15; // @[AcceleratoTop.scala 90:25 62:30]
  wire [31:0] _GEN_23 = 32'h3 == io_wbs_adr_i ? MatBCols : _GEN_16; // @[AcceleratoTop.scala 90:25 63:30]
  wire [31:0] _GEN_24 = 32'h3 == io_wbs_adr_i ? MatCBaseAdr : _GEN_17; // @[AcceleratoTop.scala 90:25 64:30]
  wire [31:0] _GEN_25 = 32'h3 == io_wbs_adr_i ? MatCRows : _GEN_18; // @[AcceleratoTop.scala 90:25 65:30]
  wire [31:0] _GEN_26 = 32'h3 == io_wbs_adr_i ? MatCCols : _GEN_19; // @[AcceleratoTop.scala 90:25 66:30]
  wire [31:0] _GEN_27 = 32'h3 == io_wbs_adr_i ? StartTrans : _GEN_20; // @[AcceleratoTop.scala 90:25 67:30]
  wire [31:0] _GEN_35 = 32'h2 == io_wbs_adr_i ? StartTrans : _GEN_27; // @[AcceleratoTop.scala 90:25 67:30]
  wire  _T_10 = stateReg == 2'h1; // @[AcceleratoTop.scala 123:19]
  wire [31:0] _GEN_238 = {{31'd0}, MatARowCount}; // @[AcceleratoTop.scala 129:31]
  wire [31:0] _GEN_239 = {{31'd0}, MatAColCount}; // @[AcceleratoTop.scala 129:60]
  wire  _T_13 = _GEN_239 == MatACols; // @[AcceleratoTop.scala 129:60]
  wire [31:0] _MatA_T_17_T_19 = MMU_io_acc_out_bits; // @[AcceleratoTop.scala 136:{54,54}]
  wire [31:0] _GEN_55 = ~MatARowCount & ~MatAColCount ? _MatA_T_17_T_19 : MatA_0_0; // @[AcceleratoTop.scala 136:{54,54} 74:30]
  wire [31:0] _GEN_56 = ~MatARowCount & MatAColCount ? _MatA_T_17_T_19 : MatA_0_1; // @[AcceleratoTop.scala 136:{54,54} 74:30]
  wire [31:0] _GEN_57 = MatARowCount & ~MatAColCount ? _MatA_T_17_T_19 : MatA_1_0; // @[AcceleratoTop.scala 136:{54,54} 74:30]
  wire [31:0] _GEN_58 = MatARowCount & MatAColCount ? _MatA_T_17_T_19 : MatA_1_1; // @[AcceleratoTop.scala 136:{54,54} 74:30]
  wire [31:0] _GEN_245 = {{31'd0}, MatACount}; // @[AcceleratoTop.scala 137:51]
  wire [31:0] _MMU_io_acc_adr_T_1 = MatABaseAdr + _GEN_245; // @[AcceleratoTop.scala 137:51]
  wire  _GEN_59 = _T_13 ? MatARowCount + 1'h1 : MatARowCount; // @[AcceleratoTop.scala 132:48 133:34 77:33]
  wire  _GEN_60 = _T_13 ? 1'h0 : MatAColCount + 1'h1; // @[AcceleratoTop.scala 132:48 134:34 139:34]
  wire [31:0] _GEN_61 = _T_13 ? MatA_0_0 : _GEN_55; // @[AcceleratoTop.scala 132:48 74:30]
  wire [31:0] _GEN_62 = _T_13 ? MatA_0_1 : _GEN_56; // @[AcceleratoTop.scala 132:48 74:30]
  wire [31:0] _GEN_63 = _T_13 ? MatA_1_0 : _GEN_57; // @[AcceleratoTop.scala 132:48 74:30]
  wire [31:0] _GEN_64 = _T_13 ? MatA_1_1 : _GEN_58; // @[AcceleratoTop.scala 132:48 74:30]
  wire [31:0] _GEN_65 = _T_13 ? 32'h0 : _MMU_io_acc_adr_T_1; // @[AcceleratoTop.scala 132:48 38:20 137:36]
  wire  _GEN_66 = _T_13 ? MatACount : MatACount + 1'h1; // @[AcceleratoTop.scala 132:48 138:31 79:33]
  wire  _GEN_67 = _GEN_238 == MatARows & _GEN_239 == MatACols | MatSel; // @[AcceleratoTop.scala 129:73 130:24 73:30]
  wire [31:0] _GEN_74 = _GEN_238 == MatARows & _GEN_239 == MatACols ? 32'h0 : _GEN_65; // @[AcceleratoTop.scala 129:73 38:20]
  wire [31:0] _GEN_246 = {{31'd0}, MatBRowCount}; // @[AcceleratoTop.scala 144:31]
  wire [31:0] _GEN_248 = {{31'd0}, MatBColCount}; // @[AcceleratoTop.scala 147:35]
  wire [31:0] _GEN_76 = ~MatBRowCount & ~MatBColCount ? _MatA_T_17_T_19 : MatB_0_0; // @[AcceleratoTop.scala 151:{54,54} 75:30]
  wire [31:0] _GEN_77 = ~MatBRowCount & MatBColCount ? _MatA_T_17_T_19 : MatB_0_1; // @[AcceleratoTop.scala 151:{54,54} 75:30]
  wire [31:0] _GEN_78 = MatBRowCount & ~MatBColCount ? _MatA_T_17_T_19 : MatB_1_0; // @[AcceleratoTop.scala 151:{54,54} 75:30]
  wire [31:0] _GEN_79 = MatBRowCount & MatBColCount ? _MatA_T_17_T_19 : MatB_1_1; // @[AcceleratoTop.scala 151:{54,54} 75:30]
  wire [31:0] _GEN_253 = {{31'd0}, MatBCount}; // @[AcceleratoTop.scala 152:51]
  wire [31:0] _MMU_io_acc_adr_T_3 = MatBBaseAdr + _GEN_253; // @[AcceleratoTop.scala 152:51]
  wire  _GEN_80 = _GEN_248 == MatBCols ? MatBRowCount + 1'h1 : MatBRowCount; // @[AcceleratoTop.scala 147:48 148:34 80:33]
  wire  _GEN_81 = _GEN_248 == MatBCols ? 1'h0 : MatBColCount + 1'h1; // @[AcceleratoTop.scala 147:48 149:34 154:34]
  wire [31:0] _GEN_82 = _GEN_248 == MatBCols ? MatB_0_0 : _GEN_76; // @[AcceleratoTop.scala 147:48 75:30]
  wire [31:0] _GEN_83 = _GEN_248 == MatBCols ? MatB_0_1 : _GEN_77; // @[AcceleratoTop.scala 147:48 75:30]
  wire [31:0] _GEN_84 = _GEN_248 == MatBCols ? MatB_1_0 : _GEN_78; // @[AcceleratoTop.scala 147:48 75:30]
  wire [31:0] _GEN_85 = _GEN_248 == MatBCols ? MatB_1_1 : _GEN_79; // @[AcceleratoTop.scala 147:48 75:30]
  wire [31:0] _GEN_86 = _GEN_248 == MatBCols ? 32'h0 : _MMU_io_acc_adr_T_3; // @[AcceleratoTop.scala 147:48 38:20 152:36]
  wire  _GEN_87 = _GEN_248 == MatBCols ? MatBCount : MatBCount + 1'h1; // @[AcceleratoTop.scala 147:48 153:31 82:33]
  wire  _GEN_88 = _GEN_246 == MatBRows & _T_13 | MatReadDone; // @[AcceleratoTop.scala 144:73 145:29 68:30]
  wire  _GEN_89 = _GEN_246 == MatBRows & _T_13 ? MatBRowCount : _GEN_80; // @[AcceleratoTop.scala 144:73 80:33]
  wire  _GEN_90 = _GEN_246 == MatBRows & _T_13 ? MatBColCount : _GEN_81; // @[AcceleratoTop.scala 144:73 81:33]
  wire [31:0] _GEN_91 = _GEN_246 == MatBRows & _T_13 ? MatB_0_0 : _GEN_82; // @[AcceleratoTop.scala 144:73 75:30]
  wire [31:0] _GEN_92 = _GEN_246 == MatBRows & _T_13 ? MatB_0_1 : _GEN_83; // @[AcceleratoTop.scala 144:73 75:30]
  wire [31:0] _GEN_93 = _GEN_246 == MatBRows & _T_13 ? MatB_1_0 : _GEN_84; // @[AcceleratoTop.scala 144:73 75:30]
  wire [31:0] _GEN_94 = _GEN_246 == MatBRows & _T_13 ? MatB_1_1 : _GEN_85; // @[AcceleratoTop.scala 144:73 75:30]
  wire [31:0] _GEN_95 = _GEN_246 == MatBRows & _T_13 ? 32'h0 : _GEN_86; // @[AcceleratoTop.scala 144:73 38:20]
  wire  _GEN_96 = _GEN_246 == MatBRows & _T_13 ? MatBCount : _GEN_87; // @[AcceleratoTop.scala 144:73 82:33]
  wire  _GEN_97 = MatSel ? _GEN_88 : MatReadDone; // @[AcceleratoTop.scala 142:35 68:30]
  wire [31:0] _GEN_104 = MatSel ? _GEN_95 : 32'h0; // @[AcceleratoTop.scala 142:35 38:20]
  wire [31:0] _GEN_113 = ~MatSel ? _GEN_74 : _GEN_104; // @[AcceleratoTop.scala 127:29]
  wire  _GEN_115 = ~MatSel ? MatReadDone : _GEN_97; // @[AcceleratoTop.scala 127:29 68:30]
  wire  _T_29 = stateReg == 2'h2; // @[AcceleratoTop.scala 158:25]
  wire [3:0] _GEN_254 = {{3'd0}, CompCount}; // @[AcceleratoTop.scala 162:30]
  wire [31:0] _GEN_123 = _GEN_254 == 4'hd ? ACCL_io_Third_Matrix_0_0 : MatC_0_0; // @[AcceleratoTop.scala 162:39 163:25 76:30]
  wire [31:0] _GEN_124 = _GEN_254 == 4'hd ? ACCL_io_Third_Matrix_0_1 : MatC_0_1; // @[AcceleratoTop.scala 162:39 163:25 76:30]
  wire [31:0] _GEN_125 = _GEN_254 == 4'hd ? ACCL_io_Third_Matrix_1_0 : MatC_1_0; // @[AcceleratoTop.scala 162:39 163:25 76:30]
  wire [31:0] _GEN_126 = _GEN_254 == 4'hd ? ACCL_io_Third_Matrix_1_1 : MatC_1_1; // @[AcceleratoTop.scala 162:39 163:25 76:30]
  wire  _GEN_127 = _GEN_254 == 4'hd | MatCompDone; // @[AcceleratoTop.scala 162:39 164:25 69:30]
  wire  _GEN_128 = _GEN_254 == 4'hd ? CompCount : CompCount + 1'h1; // @[AcceleratoTop.scala 162:39 166:25 86:33]
  wire [31:0] _GEN_129 = ~CompCount ? MatA_0_0 : 32'h0; // @[AcceleratoTop.scala 159:32 160:39 26:31]
  wire [31:0] _GEN_130 = ~CompCount ? MatA_0_1 : 32'h0; // @[AcceleratoTop.scala 159:32 160:39 26:31]
  wire [31:0] _GEN_131 = ~CompCount ? MatA_1_0 : 32'h0; // @[AcceleratoTop.scala 159:32 160:39 26:31]
  wire [31:0] _GEN_132 = ~CompCount ? MatA_1_1 : 32'h0; // @[AcceleratoTop.scala 159:32 160:39 26:31]
  wire [31:0] _GEN_133 = ~CompCount ? MatB_0_0 : 32'h0; // @[AcceleratoTop.scala 159:32 161:38 27:30]
  wire [31:0] _GEN_134 = ~CompCount ? MatB_0_1 : 32'h0; // @[AcceleratoTop.scala 159:32 161:38 27:30]
  wire [31:0] _GEN_135 = ~CompCount ? MatB_1_0 : 32'h0; // @[AcceleratoTop.scala 159:32 161:38 27:30]
  wire [31:0] _GEN_136 = ~CompCount ? MatB_1_1 : 32'h0; // @[AcceleratoTop.scala 159:32 161:38 27:30]
  wire  _GEN_141 = ~CompCount ? MatCompDone : _GEN_127; // @[AcceleratoTop.scala 159:32 69:30]
  wire  _T_32 = stateReg == 2'h3; // @[AcceleratoTop.scala 168:25]
  wire [31:0] _GEN_255 = {{31'd0}, MatCRowCount}; // @[AcceleratoTop.scala 172:27]
  wire [31:0] _GEN_256 = {{31'd0}, MatCColCount}; // @[AcceleratoTop.scala 172:56]
  wire  _T_34 = _GEN_256 == MatCCols; // @[AcceleratoTop.scala 172:56]
  wire [31:0] _GEN_144 = ~MatCRowCount & MatCColCount ? MatC_0_1 : MatC_0_0; // @[AcceleratoTop.scala 179:{33,33}]
  wire [31:0] _GEN_145 = MatCRowCount & ~MatCColCount ? MatC_1_0 : _GEN_144; // @[AcceleratoTop.scala 179:{33,33}]
  wire [31:0] _GEN_146 = MatCRowCount & MatCColCount ? MatC_1_1 : _GEN_145; // @[AcceleratoTop.scala 179:{33,33}]
  wire [31:0] _GEN_260 = {{31'd0}, MatCCount}; // @[AcceleratoTop.scala 180:48]
  wire [31:0] _MMU_io_acc_adr_T_5 = MatCBaseAdr + _GEN_260; // @[AcceleratoTop.scala 180:48]
  wire  _GEN_147 = _T_34 ? MatCRowCount + 1'h1 : MatCRowCount; // @[AcceleratoTop.scala 175:44 176:30 83:33]
  wire  _GEN_148 = _T_34 ? 1'h0 : MatCColCount + 1'h1; // @[AcceleratoTop.scala 175:44 177:30 182:33]
  wire [31:0] _GEN_149 = _T_34 ? 32'h0 : _GEN_146; // @[AcceleratoTop.scala 175:44 40:20 179:33]
  wire [31:0] _GEN_150 = _T_34 ? 32'h0 : _MMU_io_acc_adr_T_5; // @[AcceleratoTop.scala 175:44 38:20 180:33]
  wire  _GEN_151 = _T_34 ? MatCCount : MatCCount + 1'h1; // @[AcceleratoTop.scala 175:44 181:33 85:33]
  wire  _GEN_152 = _GEN_255 == MatCRows & _GEN_256 == MatCCols | MatStrDone; // @[AcceleratoTop.scala 172:69 173:25 70:30]
  wire  _GEN_153 = _GEN_255 == MatCRows & _GEN_256 == MatCCols ? MatCRowCount : _GEN_147; // @[AcceleratoTop.scala 172:69 83:33]
  wire  _GEN_154 = _GEN_255 == MatCRows & _GEN_256 == MatCCols ? MatCColCount : _GEN_148; // @[AcceleratoTop.scala 172:69 84:33]
  wire [31:0] _GEN_155 = _GEN_255 == MatCRows & _GEN_256 == MatCCols ? 32'h0 : _GEN_149; // @[AcceleratoTop.scala 172:69 40:20]
  wire [31:0] _GEN_156 = _GEN_255 == MatCRows & _GEN_256 == MatCCols ? 32'h0 : _GEN_150; // @[AcceleratoTop.scala 172:69 38:20]
  wire  _GEN_157 = _GEN_255 == MatCRows & _GEN_256 == MatCCols ? MatCCount : _GEN_151; // @[AcceleratoTop.scala 172:69 85:33]
  wire  _GEN_159 = stateReg == 2'h3 ? _GEN_152 : MatStrDone; // @[AcceleratoTop.scala 168:37 70:30]
  wire [31:0] _GEN_162 = stateReg == 2'h3 ? _GEN_155 : 32'h0; // @[AcceleratoTop.scala 168:37 40:20]
  wire [31:0] _GEN_163 = stateReg == 2'h3 ? _GEN_156 : 32'h0; // @[AcceleratoTop.scala 168:37 38:20]
  wire [31:0] _GEN_165 = stateReg == 2'h2 ? _GEN_129 : 32'h0; // @[AcceleratoTop.scala 158:38 26:31]
  wire [31:0] _GEN_166 = stateReg == 2'h2 ? _GEN_130 : 32'h0; // @[AcceleratoTop.scala 158:38 26:31]
  wire [31:0] _GEN_167 = stateReg == 2'h2 ? _GEN_131 : 32'h0; // @[AcceleratoTop.scala 158:38 26:31]
  wire [31:0] _GEN_168 = stateReg == 2'h2 ? _GEN_132 : 32'h0; // @[AcceleratoTop.scala 158:38 26:31]
  wire [31:0] _GEN_169 = stateReg == 2'h2 ? _GEN_133 : 32'h0; // @[AcceleratoTop.scala 158:38 27:30]
  wire [31:0] _GEN_170 = stateReg == 2'h2 ? _GEN_134 : 32'h0; // @[AcceleratoTop.scala 158:38 27:30]
  wire [31:0] _GEN_171 = stateReg == 2'h2 ? _GEN_135 : 32'h0; // @[AcceleratoTop.scala 158:38 27:30]
  wire [31:0] _GEN_172 = stateReg == 2'h2 ? _GEN_136 : 32'h0; // @[AcceleratoTop.scala 158:38 27:30]
  wire  _GEN_177 = stateReg == 2'h2 ? _GEN_141 : MatCompDone; // @[AcceleratoTop.scala 158:38 69:30]
  wire  _GEN_179 = stateReg == 2'h2 ? 1'h0 : _T_32; // @[AcceleratoTop.scala 158:38 39:20]
  wire  _GEN_180 = stateReg == 2'h2 ? MatStrDone : _GEN_159; // @[AcceleratoTop.scala 158:38 70:30]
  wire [31:0] _GEN_183 = stateReg == 2'h2 ? 32'h0 : _GEN_162; // @[AcceleratoTop.scala 158:38 40:20]
  wire [31:0] _GEN_184 = stateReg == 2'h2 ? 32'h0 : _GEN_163; // @[AcceleratoTop.scala 158:38 38:20]
  wire [31:0] _GEN_196 = stateReg == 2'h1 ? _GEN_113 : _GEN_184; // @[AcceleratoTop.scala 123:32]
  wire  _GEN_198 = stateReg == 2'h1 ? _GEN_115 : MatReadDone; // @[AcceleratoTop.scala 123:32 68:30]
  wire  _GEN_218 = stateReg == 2'h1 ? MatCompDone : _GEN_177; // @[AcceleratoTop.scala 123:32 69:30]
  wire  _GEN_220 = stateReg == 2'h1 ? MatStrDone : _GEN_180; // @[AcceleratoTop.scala 123:32 70:30]
  wire [1:0] _GEN_224 = _T_32 & MatStrDone ? 2'h0 : stateReg; // @[AcceleratoTop.scala 199:51 200:18 23:27]
  wire  _GEN_225 = _T_32 & MatStrDone ? 1'h0 : _GEN_220; // @[AcceleratoTop.scala 199:51 201:20]
  Top ACCL ( // @[AcceleratoTop.scala 25:22]
    .clock(ACCL_clock),
    .reset(ACCL_reset),
    .io_Stationary_matrix_0_0(ACCL_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(ACCL_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(ACCL_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(ACCL_io_Stationary_matrix_1_1),
    .io_Streaming_matrix_0_0(ACCL_io_Streaming_matrix_0_0),
    .io_Streaming_matrix_0_1(ACCL_io_Streaming_matrix_0_1),
    .io_Streaming_matrix_1_0(ACCL_io_Streaming_matrix_1_0),
    .io_Streaming_matrix_1_1(ACCL_io_Streaming_matrix_1_1),
    .io_Third_Matrix_0_0(ACCL_io_Third_Matrix_0_0),
    .io_Third_Matrix_0_1(ACCL_io_Third_Matrix_0_1),
    .io_Third_Matrix_1_0(ACCL_io_Third_Matrix_1_0),
    .io_Third_Matrix_1_1(ACCL_io_Third_Matrix_1_1)
  );
  MMU MMU ( // @[AcceleratoTop.scala 28:22]
    .clock(MMU_clock),
    .io_top_adr(MMU_io_top_adr),
    .io_top_we(MMU_io_top_we),
    .io_top_dat(MMU_io_top_dat),
    .io_top_val(MMU_io_top_val),
    .io_top_out_valid(MMU_io_top_out_valid),
    .io_top_out_bits(MMU_io_top_out_bits),
    .io_acc_adr(MMU_io_acc_adr),
    .io_acc_we(MMU_io_acc_we),
    .io_acc_dat(MMU_io_acc_dat),
    .io_acc_val(MMU_io_acc_val),
    .io_acc_out_bits(MMU_io_acc_out_bits)
  );
  assign io_wbs_ack_o = 1'h0; // @[AcceleratoTop.scala 35:18]
  assign io_wbs_dat_o = MMU_io_top_out_valid ? MMU_io_top_out_bits : 32'h0; // @[AcceleratoTop.scala 34:26]
  assign ACCL_clock = clock;
  assign ACCL_reset = reset;
  assign ACCL_io_Stationary_matrix_0_0 = stateReg == 2'h1 ? 32'h0 : _GEN_165; // @[AcceleratoTop.scala 123:32 26:31]
  assign ACCL_io_Stationary_matrix_0_1 = stateReg == 2'h1 ? 32'h0 : _GEN_166; // @[AcceleratoTop.scala 123:32 26:31]
  assign ACCL_io_Stationary_matrix_1_0 = stateReg == 2'h1 ? 32'h0 : _GEN_167; // @[AcceleratoTop.scala 123:32 26:31]
  assign ACCL_io_Stationary_matrix_1_1 = stateReg == 2'h1 ? 32'h0 : _GEN_168; // @[AcceleratoTop.scala 123:32 26:31]
  assign ACCL_io_Streaming_matrix_0_0 = stateReg == 2'h1 ? 32'h0 : _GEN_169; // @[AcceleratoTop.scala 123:32 27:30]
  assign ACCL_io_Streaming_matrix_0_1 = stateReg == 2'h1 ? 32'h0 : _GEN_170; // @[AcceleratoTop.scala 123:32 27:30]
  assign ACCL_io_Streaming_matrix_1_0 = stateReg == 2'h1 ? 32'h0 : _GEN_171; // @[AcceleratoTop.scala 123:32 27:30]
  assign ACCL_io_Streaming_matrix_1_1 = stateReg == 2'h1 ? 32'h0 : _GEN_172; // @[AcceleratoTop.scala 123:32 27:30]
  assign MMU_clock = clock;
  assign MMU_io_top_adr = io_wbs_adr_i[9:0]; // @[AcceleratoTop.scala 30:20]
  assign MMU_io_top_we = io_wbs_we_i; // @[AcceleratoTop.scala 31:20]
  assign MMU_io_top_dat = io_wbs_dat_i; // @[AcceleratoTop.scala 32:20]
  assign MMU_io_top_val = io_wbs_adr_i >= 32'hc; // @[AcceleratoTop.scala 33:36]
  assign MMU_io_acc_adr = _GEN_196[9:0];
  assign MMU_io_acc_we = stateReg == 2'h1 ? 1'h0 : _GEN_179; // @[AcceleratoTop.scala 123:32 124:25]
  assign MMU_io_acc_dat = stateReg == 2'h1 ? 32'h0 : _GEN_183; // @[AcceleratoTop.scala 123:32 125:25]
  assign MMU_io_acc_val = stateReg == 2'h1 | _GEN_179; // @[AcceleratoTop.scala 123:32 126:25]
  always @(posedge clock) begin
    if (reset) begin // @[AcceleratoTop.scala 23:27]
      stateReg <= 2'h0; // @[AcceleratoTop.scala 23:27]
    end else if (stateReg == 2'h0 & StartTrans == 32'h1) begin // @[AcceleratoTop.scala 190:49]
      stateReg <= 2'h1; // @[AcceleratoTop.scala 191:18]
    end else if (_T_10 & MatReadDone) begin // @[AcceleratoTop.scala 193:53]
      stateReg <= 2'h2; // @[AcceleratoTop.scala 194:18]
    end else if (_T_29 & MatCompDone) begin // @[AcceleratoTop.scala 196:53]
      stateReg <= 2'h3; // @[AcceleratoTop.scala 197:18]
    end else begin
      stateReg <= _GEN_224;
    end
    if (reset) begin // @[AcceleratoTop.scala 58:30]
      MatABaseAdr <= 32'h0; // @[AcceleratoTop.scala 58:30]
    end else if (32'h0 == io_wbs_adr_i) begin // @[AcceleratoTop.scala 90:25]
      MatABaseAdr <= io_wbs_dat_i; // @[AcceleratoTop.scala 92:25]
    end
    if (reset) begin // @[AcceleratoTop.scala 59:30]
      MatARows <= 32'h0; // @[AcceleratoTop.scala 59:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (32'h1 == io_wbs_adr_i) begin // @[AcceleratoTop.scala 90:25]
        MatARows <= io_wbs_dat_i; // @[AcceleratoTop.scala 95:25]
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 60:30]
      MatACols <= 32'h0; // @[AcceleratoTop.scala 60:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (32'h2 == io_wbs_adr_i) begin // @[AcceleratoTop.scala 90:25]
          MatACols <= io_wbs_dat_i; // @[AcceleratoTop.scala 98:25]
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 61:30]
      MatBBaseAdr <= 32'h0; // @[AcceleratoTop.scala 61:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (!(32'h2 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
          MatBBaseAdr <= _GEN_21;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 62:30]
      MatBRows <= 32'h0; // @[AcceleratoTop.scala 62:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (!(32'h2 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
          MatBRows <= _GEN_22;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 63:30]
      MatBCols <= 32'h0; // @[AcceleratoTop.scala 63:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (!(32'h2 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
          MatBCols <= _GEN_23;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 64:30]
      MatCBaseAdr <= 32'h0; // @[AcceleratoTop.scala 64:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (!(32'h2 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
          MatCBaseAdr <= _GEN_24;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 65:30]
      MatCRows <= 32'h0; // @[AcceleratoTop.scala 65:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (!(32'h2 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
          MatCRows <= _GEN_25;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 66:30]
      MatCCols <= 32'h0; // @[AcceleratoTop.scala 66:30]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        if (!(32'h2 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
          MatCCols <= _GEN_26;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 67:30]
      StartTrans <= 32'h0; // @[AcceleratoTop.scala 67:30]
    end else if (stateReg == 2'h0 & StartTrans == 32'h1) begin // @[AcceleratoTop.scala 190:49]
      StartTrans <= 32'h0; // @[AcceleratoTop.scala 192:20]
    end else if (!(32'h0 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
      if (!(32'h1 == io_wbs_adr_i)) begin // @[AcceleratoTop.scala 90:25]
        StartTrans <= _GEN_35;
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 68:30]
      MatReadDone <= 1'h0; // @[AcceleratoTop.scala 68:30]
    end else if (stateReg == 2'h0 & StartTrans == 32'h1) begin // @[AcceleratoTop.scala 190:49]
      MatReadDone <= _GEN_198;
    end else if (_T_10 & MatReadDone) begin // @[AcceleratoTop.scala 193:53]
      MatReadDone <= 1'h0; // @[AcceleratoTop.scala 195:21]
    end else begin
      MatReadDone <= _GEN_198;
    end
    if (reset) begin // @[AcceleratoTop.scala 69:30]
      MatCompDone <= 1'h0; // @[AcceleratoTop.scala 69:30]
    end else if (stateReg == 2'h0 & StartTrans == 32'h1) begin // @[AcceleratoTop.scala 190:49]
      MatCompDone <= _GEN_218;
    end else if (_T_10 & MatReadDone) begin // @[AcceleratoTop.scala 193:53]
      MatCompDone <= _GEN_218;
    end else if (_T_29 & MatCompDone) begin // @[AcceleratoTop.scala 196:53]
      MatCompDone <= 1'h0; // @[AcceleratoTop.scala 198:21]
    end else begin
      MatCompDone <= _GEN_218;
    end
    if (reset) begin // @[AcceleratoTop.scala 70:30]
      MatStrDone <= 1'h0; // @[AcceleratoTop.scala 70:30]
    end else if (stateReg == 2'h0 & StartTrans == 32'h1) begin // @[AcceleratoTop.scala 190:49]
      MatStrDone <= _GEN_220;
    end else if (_T_10 & MatReadDone) begin // @[AcceleratoTop.scala 193:53]
      MatStrDone <= _GEN_220;
    end else if (_T_29 & MatCompDone) begin // @[AcceleratoTop.scala 196:53]
      MatStrDone <= _GEN_220;
    end else begin
      MatStrDone <= _GEN_225;
    end
    if (reset) begin // @[AcceleratoTop.scala 73:30]
      MatSel <= 1'h0; // @[AcceleratoTop.scala 73:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        MatSel <= _GEN_67;
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 74:30]
      MatA_0_0 <= 32'h0; // @[AcceleratoTop.scala 74:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatA_0_0 <= _GEN_61;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 74:30]
      MatA_0_1 <= 32'h0; // @[AcceleratoTop.scala 74:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatA_0_1 <= _GEN_62;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 74:30]
      MatA_1_0 <= 32'h0; // @[AcceleratoTop.scala 74:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatA_1_0 <= _GEN_63;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 74:30]
      MatA_1_1 <= 32'h0; // @[AcceleratoTop.scala 74:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatA_1_1 <= _GEN_64;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 75:30]
      MatB_0_0 <= 32'h0; // @[AcceleratoTop.scala 75:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatB_0_0 <= _GEN_91;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 75:30]
      MatB_0_1 <= 32'h0; // @[AcceleratoTop.scala 75:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatB_0_1 <= _GEN_92;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 75:30]
      MatB_1_0 <= 32'h0; // @[AcceleratoTop.scala 75:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatB_1_0 <= _GEN_93;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 75:30]
      MatB_1_1 <= 32'h0; // @[AcceleratoTop.scala 75:30]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatB_1_1 <= _GEN_94;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 76:30]
      MatC_0_0 <= 32'h0; // @[AcceleratoTop.scala 76:30]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (stateReg == 2'h2) begin // @[AcceleratoTop.scala 158:38]
        if (!(~CompCount)) begin // @[AcceleratoTop.scala 159:32]
          MatC_0_0 <= _GEN_123;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 76:30]
      MatC_0_1 <= 32'h0; // @[AcceleratoTop.scala 76:30]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (stateReg == 2'h2) begin // @[AcceleratoTop.scala 158:38]
        if (!(~CompCount)) begin // @[AcceleratoTop.scala 159:32]
          MatC_0_1 <= _GEN_124;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 76:30]
      MatC_1_0 <= 32'h0; // @[AcceleratoTop.scala 76:30]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (stateReg == 2'h2) begin // @[AcceleratoTop.scala 158:38]
        if (!(~CompCount)) begin // @[AcceleratoTop.scala 159:32]
          MatC_1_0 <= _GEN_125;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 76:30]
      MatC_1_1 <= 32'h0; // @[AcceleratoTop.scala 76:30]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (stateReg == 2'h2) begin // @[AcceleratoTop.scala 158:38]
        if (!(~CompCount)) begin // @[AcceleratoTop.scala 159:32]
          MatC_1_1 <= _GEN_126;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 77:33]
      MatARowCount <= 1'h0; // @[AcceleratoTop.scala 77:33]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatARowCount <= _GEN_59;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 78:33]
      MatAColCount <= 1'h0; // @[AcceleratoTop.scala 78:33]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatAColCount <= _GEN_60;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 79:33]
      MatACount <= 1'h0; // @[AcceleratoTop.scala 79:33]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (~MatSel) begin // @[AcceleratoTop.scala 127:29]
        if (!(_GEN_238 == MatARows & _GEN_239 == MatACols)) begin // @[AcceleratoTop.scala 129:73]
          MatACount <= _GEN_66;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 80:33]
      MatBRowCount <= 1'h0; // @[AcceleratoTop.scala 80:33]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatBRowCount <= _GEN_89;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 81:33]
      MatBColCount <= 1'h0; // @[AcceleratoTop.scala 81:33]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatBColCount <= _GEN_90;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 82:33]
      MatBCount <= 1'h0; // @[AcceleratoTop.scala 82:33]
    end else if (stateReg == 2'h1) begin // @[AcceleratoTop.scala 123:32]
      if (!(~MatSel)) begin // @[AcceleratoTop.scala 127:29]
        if (MatSel) begin // @[AcceleratoTop.scala 142:35]
          MatBCount <= _GEN_96;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 83:33]
      MatCRowCount <= 1'h0; // @[AcceleratoTop.scala 83:33]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (!(stateReg == 2'h2)) begin // @[AcceleratoTop.scala 158:38]
        if (stateReg == 2'h3) begin // @[AcceleratoTop.scala 168:37]
          MatCRowCount <= _GEN_153;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 84:33]
      MatCColCount <= 1'h0; // @[AcceleratoTop.scala 84:33]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (!(stateReg == 2'h2)) begin // @[AcceleratoTop.scala 158:38]
        if (stateReg == 2'h3) begin // @[AcceleratoTop.scala 168:37]
          MatCColCount <= _GEN_154;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 85:33]
      MatCCount <= 1'h0; // @[AcceleratoTop.scala 85:33]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (!(stateReg == 2'h2)) begin // @[AcceleratoTop.scala 158:38]
        if (stateReg == 2'h3) begin // @[AcceleratoTop.scala 168:37]
          MatCCount <= _GEN_157;
        end
      end
    end
    if (reset) begin // @[AcceleratoTop.scala 86:33]
      CompCount <= 1'h0; // @[AcceleratoTop.scala 86:33]
    end else if (!(stateReg == 2'h1)) begin // @[AcceleratoTop.scala 123:32]
      if (stateReg == 2'h2) begin // @[AcceleratoTop.scala 158:38]
        if (!(~CompCount)) begin // @[AcceleratoTop.scala 159:32]
          CompCount <= _GEN_128;
        end
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
  stateReg = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  MatABaseAdr = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  MatARows = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  MatACols = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  MatBBaseAdr = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  MatBRows = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  MatBCols = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  MatCBaseAdr = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  MatCRows = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  MatCCols = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  StartTrans = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  MatReadDone = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  MatCompDone = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  MatStrDone = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  MatSel = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  MatA_0_0 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  MatA_0_1 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  MatA_1_0 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  MatA_1_1 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  MatB_0_0 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  MatB_0_1 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  MatB_1_0 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  MatB_1_1 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  MatC_0_0 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  MatC_0_1 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  MatC_1_0 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  MatC_1_1 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  MatARowCount = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  MatAColCount = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  MatACount = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  MatBRowCount = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  MatBColCount = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  MatBCount = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  MatCRowCount = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  MatCColCount = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  MatCCount = _RAND_35[0:0];
  _RAND_36 = {1{`RANDOM}};
  CompCount = _RAND_36[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

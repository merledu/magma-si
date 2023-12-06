/* verilator lint_off WIDTH */

module Muxes(
  input         clock,
  input         reset,
  input  [15:0] io_mat1_0_0,
  input  [15:0] io_mat1_0_1,
  input  [15:0] io_mat1_0_2,
  input  [15:0] io_mat1_0_3,
  input  [15:0] io_mat1_1_0,
  input  [15:0] io_mat1_1_1,
  input  [15:0] io_mat1_1_2,
  input  [15:0] io_mat1_1_3,
  input  [15:0] io_mat1_2_0,
  input  [15:0] io_mat1_2_1,
  input  [15:0] io_mat1_2_2,
  input  [15:0] io_mat1_2_3,
  input  [15:0] io_mat1_3_0,
  input  [15:0] io_mat1_3_1,
  input  [15:0] io_mat1_3_2,
  input  [15:0] io_mat1_3_3,
  input  [15:0] io_mat2_0,
  input  [15:0] io_mat2_1,
  input  [15:0] io_mat2_2,
  input  [15:0] io_mat2_3,
  input  [15:0] io_counterMatrix1_0_0,
  input  [15:0] io_counterMatrix1_0_1,
  input  [15:0] io_counterMatrix1_0_2,
  input  [15:0] io_counterMatrix1_0_3,
  input  [15:0] io_counterMatrix1_1_0,
  input  [15:0] io_counterMatrix1_1_1,
  input  [15:0] io_counterMatrix1_1_2,
  input  [15:0] io_counterMatrix1_1_3,
  input  [15:0] io_counterMatrix1_2_0,
  input  [15:0] io_counterMatrix1_2_1,
  input  [15:0] io_counterMatrix1_2_2,
  input  [15:0] io_counterMatrix1_2_3,
  input  [15:0] io_counterMatrix1_3_0,
  input  [15:0] io_counterMatrix1_3_1,
  input  [15:0] io_counterMatrix1_3_2,
  input  [15:0] io_counterMatrix1_3_3,
  input  [15:0] io_counterMatrix2_0,
  input  [15:0] io_counterMatrix2_1,
  input  [15:0] io_counterMatrix2_2,
  input  [15:0] io_counterMatrix2_3,
  output [3:0]  io_i_mux_bus_0,
  output [3:0]  io_i_mux_bus_1,
  output [3:0]  io_i_mux_bus_2,
  output [3:0]  io_i_mux_bus_3,
  output [15:0] io_Source_0,
  output [15:0] io_Source_1,
  output [15:0] io_Source_2,
  output [15:0] io_Source_3,
  output [15:0] io_destination_0,
  output [15:0] io_destination_1,
  output [15:0] io_destination_2,
  output [15:0] io_destination_3,
  output        io_valid
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
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_0_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_0_2; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_0_3; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_2; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_3; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_2_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_2_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_2_2; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_2_3; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_3_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_3_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_3_2; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_3_3; // @[Muxes.scala 19:40]
  reg [15:0] prevStreaming_matrix_0; // @[Muxes.scala 20:39]
  reg [15:0] prevStreaming_matrix_1; // @[Muxes.scala 20:39]
  reg [15:0] prevStreaming_matrix_2; // @[Muxes.scala 20:39]
  reg [15:0] prevStreaming_matrix_3; // @[Muxes.scala 20:39]
  reg  matricesAreEqual; // @[Muxes.scala 21:31]
  reg  jValid; // @[Muxes.scala 27:25]
  reg [31:0] i; // @[Muxes.scala 28:20]
  reg [31:0] j; // @[Muxes.scala 29:20]
  reg [31:0] k; // @[Muxes.scala 30:20]
  reg [31:0] counter; // @[Muxes.scala 31:26]
  reg [3:0] mux_0; // @[Muxes.scala 32:22]
  reg [3:0] mux_1; // @[Muxes.scala 32:22]
  reg [3:0] mux_2; // @[Muxes.scala 32:22]
  reg [3:0] mux_3; // @[Muxes.scala 32:22]
  reg [3:0] mux_4; // @[Muxes.scala 32:22]
  reg [3:0] mux_5; // @[Muxes.scala 32:22]
  reg [3:0] mux_6; // @[Muxes.scala 32:22]
  reg [3:0] mux_7; // @[Muxes.scala 32:22]
  reg [3:0] mux_8; // @[Muxes.scala 32:22]
  reg [3:0] mux_9; // @[Muxes.scala 32:22]
  reg [3:0] mux_10; // @[Muxes.scala 32:22]
  reg [3:0] mux_11; // @[Muxes.scala 32:22]
  reg [3:0] mux_12; // @[Muxes.scala 32:22]
  reg [3:0] mux_13; // @[Muxes.scala 32:22]
  reg [3:0] mux_14; // @[Muxes.scala 32:22]
  reg [3:0] mux_15; // @[Muxes.scala 32:22]
  reg [15:0] src_0; // @[Muxes.scala 33:22]
  reg [15:0] src_1; // @[Muxes.scala 33:22]
  reg [15:0] src_2; // @[Muxes.scala 33:22]
  reg [15:0] src_3; // @[Muxes.scala 33:22]
  reg [15:0] src_4; // @[Muxes.scala 33:22]
  reg [15:0] src_5; // @[Muxes.scala 33:22]
  reg [15:0] src_6; // @[Muxes.scala 33:22]
  reg [15:0] src_7; // @[Muxes.scala 33:22]
  reg [15:0] src_8; // @[Muxes.scala 33:22]
  reg [15:0] src_9; // @[Muxes.scala 33:22]
  reg [15:0] src_10; // @[Muxes.scala 33:22]
  reg [15:0] src_11; // @[Muxes.scala 33:22]
  reg [15:0] src_12; // @[Muxes.scala 33:22]
  reg [15:0] src_13; // @[Muxes.scala 33:22]
  reg [15:0] src_14; // @[Muxes.scala 33:22]
  reg [15:0] src_15; // @[Muxes.scala 33:22]
  reg [15:0] dest_0; // @[Muxes.scala 34:23]
  reg [15:0] dest_1; // @[Muxes.scala 34:23]
  reg [15:0] dest_2; // @[Muxes.scala 34:23]
  reg [15:0] dest_3; // @[Muxes.scala 34:23]
  reg [15:0] dest_4; // @[Muxes.scala 34:23]
  reg [15:0] dest_5; // @[Muxes.scala 34:23]
  reg [15:0] dest_6; // @[Muxes.scala 34:23]
  reg [15:0] dest_7; // @[Muxes.scala 34:23]
  reg [15:0] dest_8; // @[Muxes.scala 34:23]
  reg [15:0] dest_9; // @[Muxes.scala 34:23]
  reg [15:0] dest_10; // @[Muxes.scala 34:23]
  reg [15:0] dest_11; // @[Muxes.scala 34:23]
  reg [15:0] dest_12; // @[Muxes.scala 34:23]
  reg [15:0] dest_13; // @[Muxes.scala 34:23]
  reg [15:0] dest_14; // @[Muxes.scala 34:23]
  reg [15:0] dest_15; // @[Muxes.scala 34:23]
  wire  _GEN_0 = io_mat1_0_0 != prevStationary_matrix_0_0 ? 1'h0 : 1'h1; // @[Muxes.scala 22:22 45:61 46:28]
  wire  _GEN_1 = io_mat1_0_1 != prevStationary_matrix_0_1 ? 1'h0 : _GEN_0; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_2 = io_mat1_0_2 != prevStationary_matrix_0_2 ? 1'h0 : _GEN_1; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_3 = io_mat1_0_3 != prevStationary_matrix_0_3 ? 1'h0 : _GEN_2; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_4 = io_mat2_0 != prevStreaming_matrix_0 ? 1'h0 : _GEN_3; // @[Muxes.scala 49:51 50:26]
  wire  _GEN_5 = io_mat1_1_0 != prevStationary_matrix_1_0 ? 1'h0 : _GEN_4; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_6 = io_mat1_1_1 != prevStationary_matrix_1_1 ? 1'h0 : _GEN_5; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_7 = io_mat1_1_2 != prevStationary_matrix_1_2 ? 1'h0 : _GEN_6; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_8 = io_mat1_1_3 != prevStationary_matrix_1_3 ? 1'h0 : _GEN_7; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_9 = io_mat2_1 != prevStreaming_matrix_1 ? 1'h0 : _GEN_8; // @[Muxes.scala 49:51 50:26]
  wire  _GEN_10 = io_mat1_2_0 != prevStationary_matrix_2_0 ? 1'h0 : _GEN_9; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_11 = io_mat1_2_1 != prevStationary_matrix_2_1 ? 1'h0 : _GEN_10; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_12 = io_mat1_2_2 != prevStationary_matrix_2_2 ? 1'h0 : _GEN_11; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_13 = io_mat1_2_3 != prevStationary_matrix_2_3 ? 1'h0 : _GEN_12; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_14 = io_mat2_2 != prevStreaming_matrix_2 ? 1'h0 : _GEN_13; // @[Muxes.scala 49:51 50:26]
  wire  _GEN_15 = io_mat1_3_0 != prevStationary_matrix_3_0 ? 1'h0 : _GEN_14; // @[Muxes.scala 45:61 46:28]
  wire  _GEN_448 = 2'h0 == j[1:0]; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_449 = 2'h1 == i[1:0]; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_21 = 2'h0 == j[1:0] & 2'h1 == i[1:0] ? io_counterMatrix1_0_1 : io_counterMatrix1_0_0; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_451 = 2'h2 == i[1:0]; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_22 = 2'h0 == j[1:0] & 2'h2 == i[1:0] ? io_counterMatrix1_0_2 : _GEN_21; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_453 = 2'h3 == i[1:0]; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_23 = 2'h0 == j[1:0] & 2'h3 == i[1:0] ? io_counterMatrix1_0_3 : _GEN_22; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_454 = 2'h1 == j[1:0]; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_455 = 2'h0 == i[1:0]; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_24 = 2'h1 == j[1:0] & 2'h0 == i[1:0] ? io_counterMatrix1_1_0 : _GEN_23; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_25 = 2'h1 == j[1:0] & 2'h1 == i[1:0] ? io_counterMatrix1_1_1 : _GEN_24; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_26 = 2'h1 == j[1:0] & 2'h2 == i[1:0] ? io_counterMatrix1_1_2 : _GEN_25; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_27 = 2'h1 == j[1:0] & 2'h3 == i[1:0] ? io_counterMatrix1_1_3 : _GEN_26; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_462 = 2'h2 == j[1:0]; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_28 = 2'h2 == j[1:0] & 2'h0 == i[1:0] ? io_counterMatrix1_2_0 : _GEN_27; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_29 = 2'h2 == j[1:0] & 2'h1 == i[1:0] ? io_counterMatrix1_2_1 : _GEN_28; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_30 = 2'h2 == j[1:0] & 2'h2 == i[1:0] ? io_counterMatrix1_2_2 : _GEN_29; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_31 = 2'h2 == j[1:0] & 2'h3 == i[1:0] ? io_counterMatrix1_2_3 : _GEN_30; // @[Muxes.scala 54:{36,36}]
  wire  _GEN_470 = 2'h3 == j[1:0]; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_32 = 2'h3 == j[1:0] & 2'h0 == i[1:0] ? io_counterMatrix1_3_0 : _GEN_31; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_33 = 2'h3 == j[1:0] & 2'h1 == i[1:0] ? io_counterMatrix1_3_1 : _GEN_32; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_34 = 2'h3 == j[1:0] & 2'h2 == i[1:0] ? io_counterMatrix1_3_2 : _GEN_33; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_35 = 2'h3 == j[1:0] & 2'h3 == i[1:0] ? io_counterMatrix1_3_3 : _GEN_34; // @[Muxes.scala 54:{36,36}]
  wire [15:0] _GEN_37 = 2'h1 == i[1:0] ? io_mat2_1 : io_mat2_0; // @[Muxes.scala 54:{60,60}]
  wire [15:0] _GEN_38 = 2'h2 == i[1:0] ? io_mat2_2 : _GEN_37; // @[Muxes.scala 54:{60,60}]
  wire [15:0] _GEN_39 = 2'h3 == i[1:0] ? io_mat2_3 : _GEN_38; // @[Muxes.scala 54:{60,60}]
  wire [15:0] _GEN_57 = 2'h1 == i[1:0] ? io_counterMatrix2_1 : io_counterMatrix2_0; // @[Muxes.scala 56:{38,38}]
  wire [15:0] _GEN_58 = 2'h2 == i[1:0] ? io_counterMatrix2_2 : _GEN_57; // @[Muxes.scala 56:{38,38}]
  wire [15:0] _GEN_59 = 2'h3 == i[1:0] ? io_counterMatrix2_3 : _GEN_58; // @[Muxes.scala 56:{38,38}]
  wire [15:0] _mux_T_2 = _GEN_59 - 16'h1; // @[Muxes.scala 57:51]
  wire [15:0] _mux_T_6 = _GEN_35 - 16'h1; // @[Muxes.scala 57:85]
  wire [15:0] _mux_T_8 = _mux_T_2 - _mux_T_6; // @[Muxes.scala 57:58]
  wire [3:0] _GEN_80 = 4'h0 == counter[3:0] ? _mux_T_8[3:0] : mux_0; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_81 = 4'h1 == counter[3:0] ? _mux_T_8[3:0] : mux_1; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_82 = 4'h2 == counter[3:0] ? _mux_T_8[3:0] : mux_2; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_83 = 4'h3 == counter[3:0] ? _mux_T_8[3:0] : mux_3; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_84 = 4'h4 == counter[3:0] ? _mux_T_8[3:0] : mux_4; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_85 = 4'h5 == counter[3:0] ? _mux_T_8[3:0] : mux_5; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_86 = 4'h6 == counter[3:0] ? _mux_T_8[3:0] : mux_6; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_87 = 4'h7 == counter[3:0] ? _mux_T_8[3:0] : mux_7; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_88 = 4'h8 == counter[3:0] ? _mux_T_8[3:0] : mux_8; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_89 = 4'h9 == counter[3:0] ? _mux_T_8[3:0] : mux_9; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_90 = 4'ha == counter[3:0] ? _mux_T_8[3:0] : mux_10; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_91 = 4'hb == counter[3:0] ? _mux_T_8[3:0] : mux_11; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_92 = 4'hc == counter[3:0] ? _mux_T_8[3:0] : mux_12; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_93 = 4'hd == counter[3:0] ? _mux_T_8[3:0] : mux_13; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_94 = 4'he == counter[3:0] ? _mux_T_8[3:0] : mux_14; // @[Muxes.scala 32:22 57:{24,24}]
  wire [3:0] _GEN_95 = 4'hf == counter[3:0] ? _mux_T_8[3:0] : mux_15; // @[Muxes.scala 32:22 57:{24,24}]
  wire [15:0] _GEN_96 = 4'h0 == counter[3:0] ? _GEN_39 : src_0; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_97 = 4'h1 == counter[3:0] ? _GEN_39 : src_1; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_98 = 4'h2 == counter[3:0] ? _GEN_39 : src_2; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_99 = 4'h3 == counter[3:0] ? _GEN_39 : src_3; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_100 = 4'h4 == counter[3:0] ? _GEN_39 : src_4; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_101 = 4'h5 == counter[3:0] ? _GEN_39 : src_5; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_102 = 4'h6 == counter[3:0] ? _GEN_39 : src_6; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_103 = 4'h7 == counter[3:0] ? _GEN_39 : src_7; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_104 = 4'h8 == counter[3:0] ? _GEN_39 : src_8; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_105 = 4'h9 == counter[3:0] ? _GEN_39 : src_9; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_106 = 4'ha == counter[3:0] ? _GEN_39 : src_10; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_107 = 4'hb == counter[3:0] ? _GEN_39 : src_11; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_108 = 4'hc == counter[3:0] ? _GEN_39 : src_12; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_109 = 4'hd == counter[3:0] ? _GEN_39 : src_13; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_110 = 4'he == counter[3:0] ? _GEN_39 : src_14; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_111 = 4'hf == counter[3:0] ? _GEN_39 : src_15; // @[Muxes.scala 33:22 58:{24,24}]
  wire [15:0] _GEN_133 = _GEN_448 & _GEN_449 ? io_mat1_0_1 : io_mat1_0_0; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_134 = _GEN_448 & _GEN_451 ? io_mat1_0_2 : _GEN_133; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_135 = _GEN_448 & _GEN_453 ? io_mat1_0_3 : _GEN_134; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_136 = _GEN_454 & _GEN_455 ? io_mat1_1_0 : _GEN_135; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_137 = _GEN_454 & _GEN_449 ? io_mat1_1_1 : _GEN_136; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_138 = _GEN_454 & _GEN_451 ? io_mat1_1_2 : _GEN_137; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_139 = _GEN_454 & _GEN_453 ? io_mat1_1_3 : _GEN_138; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_140 = _GEN_462 & _GEN_455 ? io_mat1_2_0 : _GEN_139; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_141 = _GEN_462 & _GEN_449 ? io_mat1_2_1 : _GEN_140; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_142 = _GEN_462 & _GEN_451 ? io_mat1_2_2 : _GEN_141; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_143 = _GEN_462 & _GEN_453 ? io_mat1_2_3 : _GEN_142; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_144 = _GEN_470 & _GEN_455 ? io_mat1_3_0 : _GEN_143; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_145 = _GEN_470 & _GEN_449 ? io_mat1_3_1 : _GEN_144; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_146 = _GEN_470 & _GEN_451 ? io_mat1_3_2 : _GEN_145; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_147 = _GEN_470 & _GEN_453 ? io_mat1_3_3 : _GEN_146; // @[Muxes.scala 59:{25,25}]
  wire [15:0] _GEN_116 = 4'h0 == counter[3:0] ? _GEN_147 : dest_0; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_117 = 4'h1 == counter[3:0] ? _GEN_147 : dest_1; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_118 = 4'h2 == counter[3:0] ? _GEN_147 : dest_2; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_119 = 4'h3 == counter[3:0] ? _GEN_147 : dest_3; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_120 = 4'h4 == counter[3:0] ? _GEN_147 : dest_4; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_121 = 4'h5 == counter[3:0] ? _GEN_147 : dest_5; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_122 = 4'h6 == counter[3:0] ? _GEN_147 : dest_6; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_123 = 4'h7 == counter[3:0] ? _GEN_147 : dest_7; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_124 = 4'h8 == counter[3:0] ? _GEN_147 : dest_8; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_125 = 4'h9 == counter[3:0] ? _GEN_147 : dest_9; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_126 = 4'ha == counter[3:0] ? _GEN_147 : dest_10; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_127 = 4'hb == counter[3:0] ? _GEN_147 : dest_11; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_128 = 4'hc == counter[3:0] ? _GEN_147 : dest_12; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_129 = 4'hd == counter[3:0] ? _GEN_147 : dest_13; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_130 = 4'he == counter[3:0] ? _GEN_147 : dest_14; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _GEN_131 = 4'hf == counter[3:0] ? _GEN_147 : dest_15; // @[Muxes.scala 34:23 59:{25,25}]
  wire [15:0] _mux_T_17 = _mux_T_6 - _mux_T_2; // @[Muxes.scala 61:61]
  wire [3:0] _GEN_168 = 4'h0 == counter[3:0] ? _mux_T_17[3:0] : mux_0; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_169 = 4'h1 == counter[3:0] ? _mux_T_17[3:0] : mux_1; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_170 = 4'h2 == counter[3:0] ? _mux_T_17[3:0] : mux_2; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_171 = 4'h3 == counter[3:0] ? _mux_T_17[3:0] : mux_3; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_172 = 4'h4 == counter[3:0] ? _mux_T_17[3:0] : mux_4; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_173 = 4'h5 == counter[3:0] ? _mux_T_17[3:0] : mux_5; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_174 = 4'h6 == counter[3:0] ? _mux_T_17[3:0] : mux_6; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_175 = 4'h7 == counter[3:0] ? _mux_T_17[3:0] : mux_7; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_176 = 4'h8 == counter[3:0] ? _mux_T_17[3:0] : mux_8; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_177 = 4'h9 == counter[3:0] ? _mux_T_17[3:0] : mux_9; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_178 = 4'ha == counter[3:0] ? _mux_T_17[3:0] : mux_10; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_179 = 4'hb == counter[3:0] ? _mux_T_17[3:0] : mux_11; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_180 = 4'hc == counter[3:0] ? _mux_T_17[3:0] : mux_12; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_181 = 4'hd == counter[3:0] ? _mux_T_17[3:0] : mux_13; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_182 = 4'he == counter[3:0] ? _mux_T_17[3:0] : mux_14; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_183 = 4'hf == counter[3:0] ? _mux_T_17[3:0] : mux_15; // @[Muxes.scala 32:22 61:{24,24}]
  wire [3:0] _GEN_236 = _GEN_35 <= _GEN_59 ? _GEN_80 : _GEN_168; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_237 = _GEN_35 <= _GEN_59 ? _GEN_81 : _GEN_169; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_238 = _GEN_35 <= _GEN_59 ? _GEN_82 : _GEN_170; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_239 = _GEN_35 <= _GEN_59 ? _GEN_83 : _GEN_171; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_240 = _GEN_35 <= _GEN_59 ? _GEN_84 : _GEN_172; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_241 = _GEN_35 <= _GEN_59 ? _GEN_85 : _GEN_173; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_242 = _GEN_35 <= _GEN_59 ? _GEN_86 : _GEN_174; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_243 = _GEN_35 <= _GEN_59 ? _GEN_87 : _GEN_175; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_244 = _GEN_35 <= _GEN_59 ? _GEN_88 : _GEN_176; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_245 = _GEN_35 <= _GEN_59 ? _GEN_89 : _GEN_177; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_246 = _GEN_35 <= _GEN_59 ? _GEN_90 : _GEN_178; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_247 = _GEN_35 <= _GEN_59 ? _GEN_91 : _GEN_179; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_248 = _GEN_35 <= _GEN_59 ? _GEN_92 : _GEN_180; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_249 = _GEN_35 <= _GEN_59 ? _GEN_93 : _GEN_181; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_250 = _GEN_35 <= _GEN_59 ? _GEN_94 : _GEN_182; // @[Muxes.scala 56:62]
  wire [3:0] _GEN_251 = _GEN_35 <= _GEN_59 ? _GEN_95 : _GEN_183; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_252 = _GEN_35 <= _GEN_59 ? _GEN_96 : _GEN_96; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_253 = _GEN_35 <= _GEN_59 ? _GEN_97 : _GEN_97; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_254 = _GEN_35 <= _GEN_59 ? _GEN_98 : _GEN_98; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_255 = _GEN_35 <= _GEN_59 ? _GEN_99 : _GEN_99; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_256 = _GEN_35 <= _GEN_59 ? _GEN_100 : _GEN_100; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_257 = _GEN_35 <= _GEN_59 ? _GEN_101 : _GEN_101; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_258 = _GEN_35 <= _GEN_59 ? _GEN_102 : _GEN_102; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_259 = _GEN_35 <= _GEN_59 ? _GEN_103 : _GEN_103; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_260 = _GEN_35 <= _GEN_59 ? _GEN_104 : _GEN_104; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_261 = _GEN_35 <= _GEN_59 ? _GEN_105 : _GEN_105; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_262 = _GEN_35 <= _GEN_59 ? _GEN_106 : _GEN_106; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_263 = _GEN_35 <= _GEN_59 ? _GEN_107 : _GEN_107; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_264 = _GEN_35 <= _GEN_59 ? _GEN_108 : _GEN_108; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_265 = _GEN_35 <= _GEN_59 ? _GEN_109 : _GEN_109; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_266 = _GEN_35 <= _GEN_59 ? _GEN_110 : _GEN_110; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_267 = _GEN_35 <= _GEN_59 ? _GEN_111 : _GEN_111; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_268 = _GEN_35 <= _GEN_59 ? _GEN_116 : _GEN_116; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_269 = _GEN_35 <= _GEN_59 ? _GEN_117 : _GEN_117; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_270 = _GEN_35 <= _GEN_59 ? _GEN_118 : _GEN_118; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_271 = _GEN_35 <= _GEN_59 ? _GEN_119 : _GEN_119; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_272 = _GEN_35 <= _GEN_59 ? _GEN_120 : _GEN_120; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_273 = _GEN_35 <= _GEN_59 ? _GEN_121 : _GEN_121; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_274 = _GEN_35 <= _GEN_59 ? _GEN_122 : _GEN_122; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_275 = _GEN_35 <= _GEN_59 ? _GEN_123 : _GEN_123; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_276 = _GEN_35 <= _GEN_59 ? _GEN_124 : _GEN_124; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_277 = _GEN_35 <= _GEN_59 ? _GEN_125 : _GEN_125; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_278 = _GEN_35 <= _GEN_59 ? _GEN_126 : _GEN_126; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_279 = _GEN_35 <= _GEN_59 ? _GEN_127 : _GEN_127; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_280 = _GEN_35 <= _GEN_59 ? _GEN_128 : _GEN_128; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_281 = _GEN_35 <= _GEN_59 ? _GEN_129 : _GEN_129; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_282 = _GEN_35 <= _GEN_59 ? _GEN_130 : _GEN_130; // @[Muxes.scala 56:62]
  wire [15:0] _GEN_283 = _GEN_35 <= _GEN_59 ? _GEN_131 : _GEN_131; // @[Muxes.scala 56:62]
  wire  _T_36 = ~jValid; // @[Muxes.scala 66:15]
  wire  _T_37 = j == 32'h3; // @[Muxes.scala 68:22]
  wire  _T_38 = i == 32'h3; // @[Muxes.scala 68:56]
  wire  _T_39 = j == 32'h3 & i == 32'h3; // @[Muxes.scala 68:50]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[Muxes.scala 69:30]
  wire [31:0] _GEN_284 = ~(j == 32'h3 & i == 32'h3) ? _counter_T_1 : counter; // @[Muxes.scala 68:85 69:19 31:26]
  wire [31:0] _GEN_285 = ~jValid ? _GEN_284 : counter; // @[Muxes.scala 66:24 31:26]
  wire [3:0] _GEN_286 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_236 : mux_0; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_287 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_237 : mux_1; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_288 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_238 : mux_2; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_289 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_239 : mux_3; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_290 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_240 : mux_4; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_291 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_241 : mux_5; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_292 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_242 : mux_6; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_293 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_243 : mux_7; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_294 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_244 : mux_8; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_295 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_245 : mux_9; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_296 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_246 : mux_10; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_297 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_247 : mux_11; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_298 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_248 : mux_12; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_299 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_249 : mux_13; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_300 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_250 : mux_14; // @[Muxes.scala 32:22 54:70]
  wire [3:0] _GEN_301 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_251 : mux_15; // @[Muxes.scala 32:22 54:70]
  wire [15:0] _GEN_302 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_252 : src_0; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_303 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_253 : src_1; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_304 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_254 : src_2; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_305 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_255 : src_3; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_306 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_256 : src_4; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_307 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_257 : src_5; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_308 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_258 : src_6; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_309 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_259 : src_7; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_310 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_260 : src_8; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_311 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_261 : src_9; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_312 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_262 : src_10; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_313 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_263 : src_11; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_314 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_264 : src_12; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_315 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_265 : src_13; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_316 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_266 : src_14; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_317 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_267 : src_15; // @[Muxes.scala 33:22 54:70]
  wire [15:0] _GEN_318 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_268 : dest_0; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_319 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_269 : dest_1; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_320 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_270 : dest_2; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_321 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_271 : dest_3; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_322 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_272 : dest_4; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_323 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_273 : dest_5; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_324 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_274 : dest_6; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_325 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_275 : dest_7; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_326 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_276 : dest_8; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_327 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_277 : dest_9; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_328 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_278 : dest_10; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_329 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_279 : dest_11; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_330 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_280 : dest_12; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_331 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_281 : dest_13; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_332 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_282 : dest_14; // @[Muxes.scala 34:23 54:70]
  wire [15:0] _GEN_333 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_283 : dest_15; // @[Muxes.scala 34:23 54:70]
  wire [31:0] _GEN_334 = _GEN_35 != 16'h0 & _GEN_39 != 16'h0 ? _GEN_285 : counter; // @[Muxes.scala 31:26 54:70]
  wire [31:0] _j_T_1 = j + 32'h1; // @[Muxes.scala 79:16]
  wire [31:0] _i_T_1 = i + 32'h1; // @[Muxes.scala 85:18]
  wire [31:0] _GEN_335 = i < 32'h3 ? _i_T_1 : i; // @[Muxes.scala 84:42 85:13 28:20]
  wire  _GEN_336 = _T_39 | jValid; // @[Muxes.scala 80:83 81:16 27:25]
  reg [31:0] jNext; // @[Muxes.scala 105:24]
  wire [31:0] _k_T_1 = k + 32'h1; // @[Muxes.scala 114:14]
  assign io_i_mux_bus_0 = mux_0; // @[Muxes.scala 35:18]
  assign io_i_mux_bus_1 = mux_1; // @[Muxes.scala 35:18]
  assign io_i_mux_bus_2 = mux_2; // @[Muxes.scala 35:18]
  assign io_i_mux_bus_3 = mux_3; // @[Muxes.scala 35:18]
  assign io_Source_0 = src_0; // @[Muxes.scala 36:15]
  assign io_Source_1 = src_1; // @[Muxes.scala 36:15]
  assign io_Source_2 = src_2; // @[Muxes.scala 36:15]
  assign io_Source_3 = src_3; // @[Muxes.scala 36:15]
  assign io_destination_0 = dest_0; // @[Muxes.scala 37:20]
  assign io_destination_1 = dest_1; // @[Muxes.scala 37:20]
  assign io_destination_2 = dest_2; // @[Muxes.scala 37:20]
  assign io_destination_3 = dest_3; // @[Muxes.scala 37:20]
  assign io_valid = k != 32'h0 & _T_37 & _T_38 & jNext == 32'h2; // @[Muxes.scala 108:86]
  always @(posedge clock) begin
    prevStationary_matrix_0_0 <= io_mat1_0_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_0_1 <= io_mat1_0_1; // @[Muxes.scala 19:40]
    prevStationary_matrix_0_2 <= io_mat1_0_2; // @[Muxes.scala 19:40]
    prevStationary_matrix_0_3 <= io_mat1_0_3; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_0 <= io_mat1_1_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_1 <= io_mat1_1_1; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_2 <= io_mat1_1_2; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_3 <= io_mat1_1_3; // @[Muxes.scala 19:40]
    prevStationary_matrix_2_0 <= io_mat1_2_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_2_1 <= io_mat1_2_1; // @[Muxes.scala 19:40]
    prevStationary_matrix_2_2 <= io_mat1_2_2; // @[Muxes.scala 19:40]
    prevStationary_matrix_2_3 <= io_mat1_2_3; // @[Muxes.scala 19:40]
    prevStationary_matrix_3_0 <= io_mat1_3_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_3_1 <= io_mat1_3_1; // @[Muxes.scala 19:40]
    prevStationary_matrix_3_2 <= io_mat1_3_2; // @[Muxes.scala 19:40]
    prevStationary_matrix_3_3 <= io_mat1_3_3; // @[Muxes.scala 19:40]
    prevStreaming_matrix_0 <= io_mat2_0; // @[Muxes.scala 20:39]
    prevStreaming_matrix_1 <= io_mat2_1; // @[Muxes.scala 20:39]
    prevStreaming_matrix_2 <= io_mat2_2; // @[Muxes.scala 20:39]
    prevStreaming_matrix_3 <= io_mat2_3; // @[Muxes.scala 20:39]
    if (io_mat2_3 != prevStreaming_matrix_3) begin // @[Muxes.scala 49:51]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 50:26]
    end else if (io_mat1_3_3 != prevStationary_matrix_3_3) begin // @[Muxes.scala 45:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 46:28]
    end else if (io_mat1_3_2 != prevStationary_matrix_3_2) begin // @[Muxes.scala 45:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 46:28]
    end else if (io_mat1_3_1 != prevStationary_matrix_3_1) begin // @[Muxes.scala 45:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 46:28]
    end else begin
      matricesAreEqual <= _GEN_15;
    end
    if (reset) begin // @[Muxes.scala 27:25]
      jValid <= 1'h0; // @[Muxes.scala 27:25]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      if (!(j < 32'h3)) begin // @[Muxes.scala 78:40]
        jValid <= _GEN_336;
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      jValid <= 1'h0; // @[Muxes.scala 93:14]
    end
    if (reset) begin // @[Muxes.scala 28:20]
      i <= 32'h0; // @[Muxes.scala 28:20]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      if (!(j < 32'h3)) begin // @[Muxes.scala 78:40]
        if (!(_T_39)) begin // @[Muxes.scala 80:83]
          i <= _GEN_335;
        end
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      i <= 32'h0; // @[Muxes.scala 91:9]
    end
    if (reset) begin // @[Muxes.scala 29:20]
      j <= 32'h0; // @[Muxes.scala 29:20]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      if (j < 32'h3) begin // @[Muxes.scala 78:40]
        j <= _j_T_1; // @[Muxes.scala 79:11]
      end else if (!(_T_39)) begin // @[Muxes.scala 80:83]
        j <= 32'h0; // @[Muxes.scala 83:11]
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      j <= 32'h0; // @[Muxes.scala 92:9]
    end
    if (reset) begin // @[Muxes.scala 30:20]
      k <= 32'h0; // @[Muxes.scala 30:20]
    end else if (_T_38 & _T_37) begin // @[Muxes.scala 113:76]
      k <= _k_T_1; // @[Muxes.scala 114:9]
    end
    if (reset) begin // @[Muxes.scala 31:26]
      counter <= 32'h0; // @[Muxes.scala 31:26]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      counter <= _GEN_334;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      counter <= 32'h0; // @[Muxes.scala 94:15]
    end else begin
      counter <= _GEN_334;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_0 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_0 <= _GEN_286;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_0 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_0 <= _GEN_286;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_1 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_1 <= _GEN_287;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_1 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_1 <= _GEN_287;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_2 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_2 <= _GEN_288;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_2 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_2 <= _GEN_288;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_3 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_3 <= _GEN_289;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_3 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_3 <= _GEN_289;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_4 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_4 <= _GEN_290;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_4 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_4 <= _GEN_290;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_5 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_5 <= _GEN_291;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_5 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_5 <= _GEN_291;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_6 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_6 <= _GEN_292;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_6 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_6 <= _GEN_292;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_7 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_7 <= _GEN_293;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_7 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_7 <= _GEN_293;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_8 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_8 <= _GEN_294;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_8 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_8 <= _GEN_294;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_9 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_9 <= _GEN_295;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_9 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_9 <= _GEN_295;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_10 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_10 <= _GEN_296;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_10 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_10 <= _GEN_296;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_11 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_11 <= _GEN_297;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_11 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_11 <= _GEN_297;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_12 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_12 <= _GEN_298;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_12 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_12 <= _GEN_298;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_13 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_13 <= _GEN_299;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_13 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_13 <= _GEN_299;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_14 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_14 <= _GEN_300;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_14 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_14 <= _GEN_300;
    end
    if (reset) begin // @[Muxes.scala 32:22]
      mux_15 <= 4'h0; // @[Muxes.scala 32:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      mux_15 <= _GEN_301;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      mux_15 <= 4'h0; // @[Muxes.scala 99:16]
    end else begin
      mux_15 <= _GEN_301;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_0 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_0 <= _GEN_302;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_0 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_0 <= _GEN_302;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_1 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_1 <= _GEN_303;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_1 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_1 <= _GEN_303;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_2 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_2 <= _GEN_304;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_2 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_2 <= _GEN_304;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_3 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_3 <= _GEN_305;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_3 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_3 <= _GEN_305;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_4 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_4 <= _GEN_306;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_4 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_4 <= _GEN_306;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_5 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_5 <= _GEN_307;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_5 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_5 <= _GEN_307;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_6 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_6 <= _GEN_308;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_6 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_6 <= _GEN_308;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_7 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_7 <= _GEN_309;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_7 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_7 <= _GEN_309;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_8 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_8 <= _GEN_310;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_8 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_8 <= _GEN_310;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_9 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_9 <= _GEN_311;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_9 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_9 <= _GEN_311;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_10 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_10 <= _GEN_312;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_10 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_10 <= _GEN_312;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_11 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_11 <= _GEN_313;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_11 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_11 <= _GEN_313;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_12 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_12 <= _GEN_314;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_12 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_12 <= _GEN_314;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_13 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_13 <= _GEN_315;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_13 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_13 <= _GEN_315;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_14 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_14 <= _GEN_316;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_14 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_14 <= _GEN_316;
    end
    if (reset) begin // @[Muxes.scala 33:22]
      src_15 <= 16'h0; // @[Muxes.scala 33:22]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      src_15 <= _GEN_317;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      src_15 <= 16'h0; // @[Muxes.scala 97:16]
    end else begin
      src_15 <= _GEN_317;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_0 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_0 <= _GEN_318;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_0 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_0 <= _GEN_318;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_1 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_1 <= _GEN_319;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_1 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_1 <= _GEN_319;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_2 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_2 <= _GEN_320;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_2 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_2 <= _GEN_320;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_3 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_3 <= _GEN_321;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_3 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_3 <= _GEN_321;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_4 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_4 <= _GEN_322;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_4 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_4 <= _GEN_322;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_5 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_5 <= _GEN_323;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_5 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_5 <= _GEN_323;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_6 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_6 <= _GEN_324;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_6 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_6 <= _GEN_324;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_7 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_7 <= _GEN_325;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_7 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_7 <= _GEN_325;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_8 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_8 <= _GEN_326;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_8 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_8 <= _GEN_326;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_9 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_9 <= _GEN_327;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_9 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_9 <= _GEN_327;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_10 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_10 <= _GEN_328;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_10 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_10 <= _GEN_328;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_11 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_11 <= _GEN_329;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_11 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_11 <= _GEN_329;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_12 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_12 <= _GEN_330;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_12 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_12 <= _GEN_330;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_13 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_13 <= _GEN_331;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_13 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_13 <= _GEN_331;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_14 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_14 <= _GEN_332;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_14 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_14 <= _GEN_332;
    end
    if (reset) begin // @[Muxes.scala 34:23]
      dest_15 <= 16'h0; // @[Muxes.scala 34:23]
    end else if (_T_36) begin // @[Muxes.scala 76:29]
      dest_15 <= _GEN_333;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 89:64]
      dest_15 <= 16'h0; // @[Muxes.scala 98:17]
    end else begin
      dest_15 <= _GEN_333;
    end
    if (reset) begin // @[Muxes.scala 105:24]
      jNext <= 32'h0; // @[Muxes.scala 105:24]
    end else begin
      jNext <= j; // @[Muxes.scala 106:11]
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
  prevStationary_matrix_0_2 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  prevStationary_matrix_0_3 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  prevStationary_matrix_1_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  prevStationary_matrix_1_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  prevStationary_matrix_1_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  prevStationary_matrix_1_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  prevStationary_matrix_2_0 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  prevStationary_matrix_2_1 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  prevStationary_matrix_2_2 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  prevStationary_matrix_2_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  prevStationary_matrix_3_0 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  prevStationary_matrix_3_1 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  prevStationary_matrix_3_2 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  prevStationary_matrix_3_3 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  prevStreaming_matrix_0 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  prevStreaming_matrix_1 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  prevStreaming_matrix_2 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  prevStreaming_matrix_3 = _RAND_19[15:0];
  _RAND_20 = {1{`RANDOM}};
  matricesAreEqual = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  jValid = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  i = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  j = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  k = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  counter = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  mux_0 = _RAND_26[3:0];
  _RAND_27 = {1{`RANDOM}};
  mux_1 = _RAND_27[3:0];
  _RAND_28 = {1{`RANDOM}};
  mux_2 = _RAND_28[3:0];
  _RAND_29 = {1{`RANDOM}};
  mux_3 = _RAND_29[3:0];
  _RAND_30 = {1{`RANDOM}};
  mux_4 = _RAND_30[3:0];
  _RAND_31 = {1{`RANDOM}};
  mux_5 = _RAND_31[3:0];
  _RAND_32 = {1{`RANDOM}};
  mux_6 = _RAND_32[3:0];
  _RAND_33 = {1{`RANDOM}};
  mux_7 = _RAND_33[3:0];
  _RAND_34 = {1{`RANDOM}};
  mux_8 = _RAND_34[3:0];
  _RAND_35 = {1{`RANDOM}};
  mux_9 = _RAND_35[3:0];
  _RAND_36 = {1{`RANDOM}};
  mux_10 = _RAND_36[3:0];
  _RAND_37 = {1{`RANDOM}};
  mux_11 = _RAND_37[3:0];
  _RAND_38 = {1{`RANDOM}};
  mux_12 = _RAND_38[3:0];
  _RAND_39 = {1{`RANDOM}};
  mux_13 = _RAND_39[3:0];
  _RAND_40 = {1{`RANDOM}};
  mux_14 = _RAND_40[3:0];
  _RAND_41 = {1{`RANDOM}};
  mux_15 = _RAND_41[3:0];
  _RAND_42 = {1{`RANDOM}};
  src_0 = _RAND_42[15:0];
  _RAND_43 = {1{`RANDOM}};
  src_1 = _RAND_43[15:0];
  _RAND_44 = {1{`RANDOM}};
  src_2 = _RAND_44[15:0];
  _RAND_45 = {1{`RANDOM}};
  src_3 = _RAND_45[15:0];
  _RAND_46 = {1{`RANDOM}};
  src_4 = _RAND_46[15:0];
  _RAND_47 = {1{`RANDOM}};
  src_5 = _RAND_47[15:0];
  _RAND_48 = {1{`RANDOM}};
  src_6 = _RAND_48[15:0];
  _RAND_49 = {1{`RANDOM}};
  src_7 = _RAND_49[15:0];
  _RAND_50 = {1{`RANDOM}};
  src_8 = _RAND_50[15:0];
  _RAND_51 = {1{`RANDOM}};
  src_9 = _RAND_51[15:0];
  _RAND_52 = {1{`RANDOM}};
  src_10 = _RAND_52[15:0];
  _RAND_53 = {1{`RANDOM}};
  src_11 = _RAND_53[15:0];
  _RAND_54 = {1{`RANDOM}};
  src_12 = _RAND_54[15:0];
  _RAND_55 = {1{`RANDOM}};
  src_13 = _RAND_55[15:0];
  _RAND_56 = {1{`RANDOM}};
  src_14 = _RAND_56[15:0];
  _RAND_57 = {1{`RANDOM}};
  src_15 = _RAND_57[15:0];
  _RAND_58 = {1{`RANDOM}};
  dest_0 = _RAND_58[15:0];
  _RAND_59 = {1{`RANDOM}};
  dest_1 = _RAND_59[15:0];
  _RAND_60 = {1{`RANDOM}};
  dest_2 = _RAND_60[15:0];
  _RAND_61 = {1{`RANDOM}};
  dest_3 = _RAND_61[15:0];
  _RAND_62 = {1{`RANDOM}};
  dest_4 = _RAND_62[15:0];
  _RAND_63 = {1{`RANDOM}};
  dest_5 = _RAND_63[15:0];
  _RAND_64 = {1{`RANDOM}};
  dest_6 = _RAND_64[15:0];
  _RAND_65 = {1{`RANDOM}};
  dest_7 = _RAND_65[15:0];
  _RAND_66 = {1{`RANDOM}};
  dest_8 = _RAND_66[15:0];
  _RAND_67 = {1{`RANDOM}};
  dest_9 = _RAND_67[15:0];
  _RAND_68 = {1{`RANDOM}};
  dest_10 = _RAND_68[15:0];
  _RAND_69 = {1{`RANDOM}};
  dest_11 = _RAND_69[15:0];
  _RAND_70 = {1{`RANDOM}};
  dest_12 = _RAND_70[15:0];
  _RAND_71 = {1{`RANDOM}};
  dest_13 = _RAND_71[15:0];
  _RAND_72 = {1{`RANDOM}};
  dest_14 = _RAND_72[15:0];
  _RAND_73 = {1{`RANDOM}};
  dest_15 = _RAND_73[15:0];
  _RAND_74 = {1{`RANDOM}};
  jNext = _RAND_74[31:0];
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
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  input  [15:0] io_Streaming_matrix_0,
  input  [15:0] io_Streaming_matrix_1,
  input  [15:0] io_Streaming_matrix_2,
  input  [15:0] io_Streaming_matrix_3,
  output [15:0] io_counterMatrix1_bits_0_0,
  output [15:0] io_counterMatrix1_bits_0_1,
  output [15:0] io_counterMatrix1_bits_0_2,
  output [15:0] io_counterMatrix1_bits_0_3,
  output [15:0] io_counterMatrix1_bits_1_0,
  output [15:0] io_counterMatrix1_bits_1_1,
  output [15:0] io_counterMatrix1_bits_1_2,
  output [15:0] io_counterMatrix1_bits_1_3,
  output [15:0] io_counterMatrix1_bits_2_0,
  output [15:0] io_counterMatrix1_bits_2_1,
  output [15:0] io_counterMatrix1_bits_2_2,
  output [15:0] io_counterMatrix1_bits_2_3,
  output [15:0] io_counterMatrix1_bits_3_0,
  output [15:0] io_counterMatrix1_bits_3_1,
  output [15:0] io_counterMatrix1_bits_3_2,
  output [15:0] io_counterMatrix1_bits_3_3,
  output [15:0] io_counterMatrix2_bits_0,
  output [15:0] io_counterMatrix2_bits_1,
  output [15:0] io_counterMatrix2_bits_2,
  output [15:0] io_counterMatrix2_bits_3,
  output        io_valid,
  input         io_start
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
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_0_1; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_0_2; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_0_3; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1_1; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1_2; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1_3; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_2_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_2_1; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_2_2; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_2_3; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_3_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_3_1; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_3_2; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_3_3; // @[SourceDestination.scala 15:40]
  reg  matricesAreEqual; // @[SourceDestination.scala 16:31]
  reg [15:0] counterRegs1_0_0; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_0_1; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_0_2; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_0_3; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_1_0; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_1_1; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_1_2; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_1_3; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_2_0; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_2_1; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_2_2; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_2_3; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_3_0; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_3_1; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_3_2; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_3_3; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs2_0; // @[SourceDestination.scala 18:31]
  reg [15:0] counterRegs2_1; // @[SourceDestination.scala 18:31]
  reg [15:0] counterRegs2_2; // @[SourceDestination.scala 18:31]
  reg [15:0] counterRegs2_3; // @[SourceDestination.scala 18:31]
  reg [31:0] i; // @[SourceDestination.scala 20:20]
  reg [31:0] j; // @[SourceDestination.scala 21:20]
  reg  jValid; // @[SourceDestination.scala 25:21]
  reg [31:0] k; // @[SourceDestination.scala 26:20]
  reg [31:0] counter1; // @[SourceDestination.scala 28:27]
  reg [31:0] counter2; // @[SourceDestination.scala 29:27]
  wire  _reg_i_T = j == 32'h3; // @[SourceDestination.scala 31:29]
  wire  _reg_i_T_1 = i == 32'h3; // @[SourceDestination.scala 31:63]
  wire  _reg_i_T_2 = j == 32'h3 & i == 32'h3; // @[SourceDestination.scala 31:57]
  wire  _GEN_0 = io_Stationary_matrix_0_0 != prevStationary_matrix_0_0 ? 1'h0 : 1'h1; // @[SourceDestination.scala 36:22 40:74 41:28]
  wire  _GEN_1 = io_Stationary_matrix_0_1 != prevStationary_matrix_0_1 ? 1'h0 : _GEN_0; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_2 = io_Stationary_matrix_0_2 != prevStationary_matrix_0_2 ? 1'h0 : _GEN_1; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_3 = io_Stationary_matrix_0_3 != prevStationary_matrix_0_3 ? 1'h0 : _GEN_2; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_4 = io_Stationary_matrix_1_0 != prevStationary_matrix_1_0 ? 1'h0 : _GEN_3; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_5 = io_Stationary_matrix_1_1 != prevStationary_matrix_1_1 ? 1'h0 : _GEN_4; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_6 = io_Stationary_matrix_1_2 != prevStationary_matrix_1_2 ? 1'h0 : _GEN_5; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_7 = io_Stationary_matrix_1_3 != prevStationary_matrix_1_3 ? 1'h0 : _GEN_6; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_8 = io_Stationary_matrix_2_0 != prevStationary_matrix_2_0 ? 1'h0 : _GEN_7; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_9 = io_Stationary_matrix_2_1 != prevStationary_matrix_2_1 ? 1'h0 : _GEN_8; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_10 = io_Stationary_matrix_2_2 != prevStationary_matrix_2_2 ? 1'h0 : _GEN_9; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_11 = io_Stationary_matrix_2_3 != prevStationary_matrix_2_3 ? 1'h0 : _GEN_10; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_12 = io_Stationary_matrix_3_0 != prevStationary_matrix_3_0 ? 1'h0 : _GEN_11; // @[SourceDestination.scala 40:74 41:28]
  wire  _GEN_240 = 2'h0 == i[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_241 = 2'h1 == j[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_17 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_243 = 2'h2 == j[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_18 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_0_2 : _GEN_17; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_245 = 2'h3 == j[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_19 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_0_3 : _GEN_18; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_246 = 2'h1 == i[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_247 = 2'h0 == j[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_20 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_1_0 : _GEN_19; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_21 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_1_1 : _GEN_20; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_22 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_1_2 : _GEN_21; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_23 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_1_3 : _GEN_22; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_254 = 2'h2 == i[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_24 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_2_0 : _GEN_23; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_25 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_2_1 : _GEN_24; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_26 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_2_2 : _GEN_25; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_27 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_2_3 : _GEN_26; // @[SourceDestination.scala 53:{38,38}]
  wire  _GEN_262 = 2'h3 == i[1:0]; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_28 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_3_0 : _GEN_27; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_29 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_3_1 : _GEN_28; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_30 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_3_2 : _GEN_29; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_31 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_3_3 : _GEN_30; // @[SourceDestination.scala 53:{38,38}]
  wire [15:0] _GEN_32 = _GEN_240 & _GEN_247 ? counter1[15:0] : counterRegs1_0_0; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_33 = _GEN_240 & _GEN_241 ? counter1[15:0] : counterRegs1_0_1; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_34 = _GEN_240 & _GEN_243 ? counter1[15:0] : counterRegs1_0_2; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_35 = _GEN_240 & _GEN_245 ? counter1[15:0] : counterRegs1_0_3; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_36 = _GEN_246 & _GEN_247 ? counter1[15:0] : counterRegs1_1_0; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_37 = _GEN_246 & _GEN_241 ? counter1[15:0] : counterRegs1_1_1; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_38 = _GEN_246 & _GEN_243 ? counter1[15:0] : counterRegs1_1_2; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_39 = _GEN_246 & _GEN_245 ? counter1[15:0] : counterRegs1_1_3; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_40 = _GEN_254 & _GEN_247 ? counter1[15:0] : counterRegs1_2_0; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_41 = _GEN_254 & _GEN_241 ? counter1[15:0] : counterRegs1_2_1; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_42 = _GEN_254 & _GEN_243 ? counter1[15:0] : counterRegs1_2_2; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_43 = _GEN_254 & _GEN_245 ? counter1[15:0] : counterRegs1_2_3; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_44 = _GEN_262 & _GEN_247 ? counter1[15:0] : counterRegs1_3_0; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_45 = _GEN_262 & _GEN_241 ? counter1[15:0] : counterRegs1_3_1; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_46 = _GEN_262 & _GEN_243 ? counter1[15:0] : counterRegs1_3_2; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [15:0] _GEN_47 = _GEN_262 & _GEN_245 ? counter1[15:0] : counterRegs1_3_3; // @[SourceDestination.scala 55:{28,28} 17:31]
  wire [31:0] _counter1_T_1 = counter1 + 32'h1; // @[SourceDestination.scala 57:32]
  wire [31:0] _GEN_48 = ~_reg_i_T_2 ? _counter1_T_1 : counter1; // @[SourceDestination.scala 56:83 57:20 28:27]
  wire [15:0] _GEN_49 = _GEN_240 & _GEN_247 ? 16'h1 : counterRegs1_0_0; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_50 = _GEN_240 & _GEN_241 ? 16'h1 : counterRegs1_0_1; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_51 = _GEN_240 & _GEN_243 ? 16'h1 : counterRegs1_0_2; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_52 = _GEN_240 & _GEN_245 ? 16'h1 : counterRegs1_0_3; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_53 = _GEN_246 & _GEN_247 ? 16'h1 : counterRegs1_1_0; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_54 = _GEN_246 & _GEN_241 ? 16'h1 : counterRegs1_1_1; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_55 = _GEN_246 & _GEN_243 ? 16'h1 : counterRegs1_1_2; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_56 = _GEN_246 & _GEN_245 ? 16'h1 : counterRegs1_1_3; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_57 = _GEN_254 & _GEN_247 ? 16'h1 : counterRegs1_2_0; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_58 = _GEN_254 & _GEN_241 ? 16'h1 : counterRegs1_2_1; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_59 = _GEN_254 & _GEN_243 ? 16'h1 : counterRegs1_2_2; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_60 = _GEN_254 & _GEN_245 ? 16'h1 : counterRegs1_2_3; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_61 = _GEN_262 & _GEN_247 ? 16'h1 : counterRegs1_3_0; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_62 = _GEN_262 & _GEN_241 ? 16'h1 : counterRegs1_3_1; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_63 = _GEN_262 & _GEN_243 ? 16'h1 : counterRegs1_3_2; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_64 = _GEN_262 & _GEN_245 ? 16'h1 : counterRegs1_3_3; // @[SourceDestination.scala 60:{28,28} 17:31]
  wire [15:0] _GEN_65 = counter1 < 32'h5 ? _GEN_32 : _GEN_49; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_66 = counter1 < 32'h5 ? _GEN_33 : _GEN_50; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_67 = counter1 < 32'h5 ? _GEN_34 : _GEN_51; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_68 = counter1 < 32'h5 ? _GEN_35 : _GEN_52; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_69 = counter1 < 32'h5 ? _GEN_36 : _GEN_53; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_70 = counter1 < 32'h5 ? _GEN_37 : _GEN_54; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_71 = counter1 < 32'h5 ? _GEN_38 : _GEN_55; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_72 = counter1 < 32'h5 ? _GEN_39 : _GEN_56; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_73 = counter1 < 32'h5 ? _GEN_40 : _GEN_57; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_74 = counter1 < 32'h5 ? _GEN_41 : _GEN_58; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_75 = counter1 < 32'h5 ? _GEN_42 : _GEN_59; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_76 = counter1 < 32'h5 ? _GEN_43 : _GEN_60; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_77 = counter1 < 32'h5 ? _GEN_44 : _GEN_61; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_78 = counter1 < 32'h5 ? _GEN_45 : _GEN_62; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_79 = counter1 < 32'h5 ? _GEN_46 : _GEN_63; // @[SourceDestination.scala 54:48]
  wire [15:0] _GEN_80 = counter1 < 32'h5 ? _GEN_47 : _GEN_64; // @[SourceDestination.scala 54:48]
  wire [31:0] _GEN_81 = counter1 < 32'h5 ? _GEN_48 : 32'h2; // @[SourceDestination.scala 54:48 61:18]
  wire [15:0] _GEN_82 = _GEN_240 & _GEN_247 ? 16'h0 : counterRegs1_0_0; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_83 = _GEN_240 & _GEN_241 ? 16'h0 : counterRegs1_0_1; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_84 = _GEN_240 & _GEN_243 ? 16'h0 : counterRegs1_0_2; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_85 = _GEN_240 & _GEN_245 ? 16'h0 : counterRegs1_0_3; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_86 = _GEN_246 & _GEN_247 ? 16'h0 : counterRegs1_1_0; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_87 = _GEN_246 & _GEN_241 ? 16'h0 : counterRegs1_1_1; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_88 = _GEN_246 & _GEN_243 ? 16'h0 : counterRegs1_1_2; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_89 = _GEN_246 & _GEN_245 ? 16'h0 : counterRegs1_1_3; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_90 = _GEN_254 & _GEN_247 ? 16'h0 : counterRegs1_2_0; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_91 = _GEN_254 & _GEN_241 ? 16'h0 : counterRegs1_2_1; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_92 = _GEN_254 & _GEN_243 ? 16'h0 : counterRegs1_2_2; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_93 = _GEN_254 & _GEN_245 ? 16'h0 : counterRegs1_2_3; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_94 = _GEN_262 & _GEN_247 ? 16'h0 : counterRegs1_3_0; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_95 = _GEN_262 & _GEN_241 ? 16'h0 : counterRegs1_3_1; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_96 = _GEN_262 & _GEN_243 ? 16'h0 : counterRegs1_3_2; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_97 = _GEN_262 & _GEN_245 ? 16'h0 : counterRegs1_3_3; // @[SourceDestination.scala 64:{26,26} 17:31]
  wire [15:0] _GEN_98 = _GEN_31 != 16'h0 ? _GEN_65 : _GEN_82; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_99 = _GEN_31 != 16'h0 ? _GEN_66 : _GEN_83; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_100 = _GEN_31 != 16'h0 ? _GEN_67 : _GEN_84; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_101 = _GEN_31 != 16'h0 ? _GEN_68 : _GEN_85; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_102 = _GEN_31 != 16'h0 ? _GEN_69 : _GEN_86; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_103 = _GEN_31 != 16'h0 ? _GEN_70 : _GEN_87; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_104 = _GEN_31 != 16'h0 ? _GEN_71 : _GEN_88; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_105 = _GEN_31 != 16'h0 ? _GEN_72 : _GEN_89; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_106 = _GEN_31 != 16'h0 ? _GEN_73 : _GEN_90; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_107 = _GEN_31 != 16'h0 ? _GEN_74 : _GEN_91; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_108 = _GEN_31 != 16'h0 ? _GEN_75 : _GEN_92; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_109 = _GEN_31 != 16'h0 ? _GEN_76 : _GEN_93; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_110 = _GEN_31 != 16'h0 ? _GEN_77 : _GEN_94; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_111 = _GEN_31 != 16'h0 ? _GEN_78 : _GEN_95; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_112 = _GEN_31 != 16'h0 ? _GEN_79 : _GEN_96; // @[SourceDestination.scala 53:47]
  wire [15:0] _GEN_113 = _GEN_31 != 16'h0 ? _GEN_80 : _GEN_97; // @[SourceDestination.scala 53:47]
  wire [31:0] _GEN_114 = _GEN_31 != 16'h0 ? _GEN_81 : counter1; // @[SourceDestination.scala 28:27 53:47]
  wire [15:0] _GEN_116 = 2'h1 == k[1:0] ? io_Streaming_matrix_1 : io_Streaming_matrix_0; // @[SourceDestination.scala 67:{34,34}]
  wire [15:0] _GEN_117 = 2'h2 == k[1:0] ? io_Streaming_matrix_2 : _GEN_116; // @[SourceDestination.scala 67:{34,34}]
  wire [15:0] _GEN_118 = 2'h3 == k[1:0] ? io_Streaming_matrix_3 : _GEN_117; // @[SourceDestination.scala 67:{34,34}]
  wire [15:0] _GEN_119 = 2'h0 == k[1:0] ? counter2[15:0] : counterRegs2_0; // @[SourceDestination.scala 68:{23,23} 18:31]
  wire [15:0] _GEN_120 = 2'h1 == k[1:0] ? counter2[15:0] : counterRegs2_1; // @[SourceDestination.scala 68:{23,23} 18:31]
  wire [15:0] _GEN_121 = 2'h2 == k[1:0] ? counter2[15:0] : counterRegs2_2; // @[SourceDestination.scala 68:{23,23} 18:31]
  wire [15:0] _GEN_122 = 2'h3 == k[1:0] ? counter2[15:0] : counterRegs2_3; // @[SourceDestination.scala 68:{23,23} 18:31]
  wire [31:0] _counter2_T_1 = counter2 + 32'h1; // @[SourceDestination.scala 69:28]
  wire [15:0] _GEN_123 = _GEN_118 != 16'h0 ? _GEN_119 : counterRegs2_0; // @[SourceDestination.scala 18:31 67:43]
  wire [15:0] _GEN_124 = _GEN_118 != 16'h0 ? _GEN_120 : counterRegs2_1; // @[SourceDestination.scala 18:31 67:43]
  wire [15:0] _GEN_125 = _GEN_118 != 16'h0 ? _GEN_121 : counterRegs2_2; // @[SourceDestination.scala 18:31 67:43]
  wire [15:0] _GEN_126 = _GEN_118 != 16'h0 ? _GEN_122 : counterRegs2_3; // @[SourceDestination.scala 18:31 67:43]
  wire [31:0] _GEN_127 = _GEN_118 != 16'h0 ? _counter2_T_1 : counter2; // @[SourceDestination.scala 67:43 69:16 29:27]
  wire [31:0] _k_T_1 = k + 32'h1; // @[SourceDestination.scala 77:16]
  wire [31:0] _GEN_129 = k == 32'h3 ? k : _k_T_1; // @[SourceDestination.scala 73:37 74:9]
  wire [31:0] _GEN_130 = k == 32'h3 ? counter2 : _GEN_127; // @[SourceDestination.scala 73:37 75:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[SourceDestination.scala 81:16]
  wire [31:0] _i_T_1 = i + 32'h1; // @[SourceDestination.scala 87:18]
  wire [31:0] _GEN_131 = i < 32'h3 ? _i_T_1 : i; // @[SourceDestination.scala 86:42 87:13 20:20]
  wire [31:0] _GEN_133 = _reg_i_T_2 ? j : 32'h0; // @[SourceDestination.scala 21:20 82:83 85:11]
  wire [31:0] _GEN_134 = _reg_i_T_2 ? i : _GEN_131; // @[SourceDestination.scala 20:20 82:83]
  wire  _GEN_136 = j < 32'h3 ? 1'h0 : _reg_i_T_2; // @[SourceDestination.scala 49:12 80:40]
  wire  _GEN_164 = ~jValid & _GEN_136; // @[SourceDestination.scala 49:12 79:26]
  wire [31:0] _GEN_220 = io_start ? {{16'd0}, counterRegs1_0_0} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_221 = io_start ? {{16'd0}, counterRegs1_0_1} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_222 = io_start ? {{16'd0}, counterRegs1_0_2} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_223 = io_start ? {{16'd0}, counterRegs1_0_3} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_224 = io_start ? {{16'd0}, counterRegs1_1_0} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_225 = io_start ? {{16'd0}, counterRegs1_1_1} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_226 = io_start ? {{16'd0}, counterRegs1_1_2} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_227 = io_start ? {{16'd0}, counterRegs1_1_3} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_228 = io_start ? {{16'd0}, counterRegs1_2_0} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_229 = io_start ? {{16'd0}, counterRegs1_2_1} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_230 = io_start ? {{16'd0}, counterRegs1_2_2} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_231 = io_start ? {{16'd0}, counterRegs1_2_3} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_232 = io_start ? {{16'd0}, counterRegs1_3_0} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_233 = io_start ? {{16'd0}, counterRegs1_3_1} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_234 = io_start ? {{16'd0}, counterRegs1_3_2} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_235 = io_start ? {{16'd0}, counterRegs1_3_3} : 32'h0; // @[SourceDestination.scala 34:17 114:28 118:26]
  wire [31:0] _GEN_236 = io_start ? {{16'd0}, counterRegs2_0} : 32'h0; // @[SourceDestination.scala 34:17 115:28 119:26]
  wire [31:0] _GEN_237 = io_start ? {{16'd0}, counterRegs2_1} : 32'h0; // @[SourceDestination.scala 34:17 115:28 119:26]
  wire [31:0] _GEN_238 = io_start ? {{16'd0}, counterRegs2_2} : 32'h0; // @[SourceDestination.scala 34:17 115:28 119:26]
  wire [31:0] _GEN_239 = io_start ? {{16'd0}, counterRegs2_3} : 32'h0; // @[SourceDestination.scala 34:17 115:28 119:26]
  assign io_counterMatrix1_bits_0_0 = _GEN_220[15:0];
  assign io_counterMatrix1_bits_0_1 = _GEN_221[15:0];
  assign io_counterMatrix1_bits_0_2 = _GEN_222[15:0];
  assign io_counterMatrix1_bits_0_3 = _GEN_223[15:0];
  assign io_counterMatrix1_bits_1_0 = _GEN_224[15:0];
  assign io_counterMatrix1_bits_1_1 = _GEN_225[15:0];
  assign io_counterMatrix1_bits_1_2 = _GEN_226[15:0];
  assign io_counterMatrix1_bits_1_3 = _GEN_227[15:0];
  assign io_counterMatrix1_bits_2_0 = _GEN_228[15:0];
  assign io_counterMatrix1_bits_2_1 = _GEN_229[15:0];
  assign io_counterMatrix1_bits_2_2 = _GEN_230[15:0];
  assign io_counterMatrix1_bits_2_3 = _GEN_231[15:0];
  assign io_counterMatrix1_bits_3_0 = _GEN_232[15:0];
  assign io_counterMatrix1_bits_3_1 = _GEN_233[15:0];
  assign io_counterMatrix1_bits_3_2 = _GEN_234[15:0];
  assign io_counterMatrix1_bits_3_3 = _GEN_235[15:0];
  assign io_counterMatrix2_bits_0 = _GEN_236[15:0];
  assign io_counterMatrix2_bits_1 = _GEN_237[15:0];
  assign io_counterMatrix2_bits_2 = _GEN_238[15:0];
  assign io_counterMatrix2_bits_3 = _GEN_239[15:0];
  assign io_valid = io_start & (_reg_i_T_1 & _reg_i_T); // @[SourceDestination.scala 104:14 122:12 34:17]
  always @(posedge clock) begin
    prevStationary_matrix_0_0 <= io_Stationary_matrix_0_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_0_1 <= io_Stationary_matrix_0_1; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_0_2 <= io_Stationary_matrix_0_2; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_0_3 <= io_Stationary_matrix_0_3; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1_0 <= io_Stationary_matrix_1_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1_1 <= io_Stationary_matrix_1_1; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1_2 <= io_Stationary_matrix_1_2; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1_3 <= io_Stationary_matrix_1_3; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_2_0 <= io_Stationary_matrix_2_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_2_1 <= io_Stationary_matrix_2_1; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_2_2 <= io_Stationary_matrix_2_2; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_2_3 <= io_Stationary_matrix_2_3; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_3_0 <= io_Stationary_matrix_3_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_3_1 <= io_Stationary_matrix_3_1; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_3_2 <= io_Stationary_matrix_3_2; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_3_3 <= io_Stationary_matrix_3_3; // @[SourceDestination.scala 15:40]
    if (io_start) begin // @[SourceDestination.scala 34:17]
      if (io_Stationary_matrix_3_3 != prevStationary_matrix_3_3) begin // @[SourceDestination.scala 40:74]
        matricesAreEqual <= 1'h0; // @[SourceDestination.scala 41:28]
      end else if (io_Stationary_matrix_3_2 != prevStationary_matrix_3_2) begin // @[SourceDestination.scala 40:74]
        matricesAreEqual <= 1'h0; // @[SourceDestination.scala 41:28]
      end else if (io_Stationary_matrix_3_1 != prevStationary_matrix_3_1) begin // @[SourceDestination.scala 40:74]
        matricesAreEqual <= 1'h0; // @[SourceDestination.scala 41:28]
      end else begin
        matricesAreEqual <= _GEN_12;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_0_0 <= _GEN_98;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_0_0 <= _GEN_98;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_0_1 <= _GEN_99;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_0_1 <= _GEN_99;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_0_2 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_0_2 <= _GEN_100;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_0_2 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_0_2 <= _GEN_100;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_0_3 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_0_3 <= _GEN_101;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_0_3 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_0_3 <= _GEN_101;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_1_0 <= _GEN_102;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_1_0 <= _GEN_102;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_1_1 <= _GEN_103;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_1_1 <= _GEN_103;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_1_2 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_1_2 <= _GEN_104;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_1_2 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_1_2 <= _GEN_104;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_1_3 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_1_3 <= _GEN_105;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_1_3 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_1_3 <= _GEN_105;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_2_0 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_2_0 <= _GEN_106;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_2_0 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_2_0 <= _GEN_106;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_2_1 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_2_1 <= _GEN_107;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_2_1 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_2_1 <= _GEN_107;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_2_2 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_2_2 <= _GEN_108;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_2_2 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_2_2 <= _GEN_108;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_2_3 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_2_3 <= _GEN_109;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_2_3 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_2_3 <= _GEN_109;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_3_0 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_3_0 <= _GEN_110;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_3_0 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_3_0 <= _GEN_110;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_3_1 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_3_1 <= _GEN_111;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_3_1 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_3_1 <= _GEN_111;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_3_2 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_3_2 <= _GEN_112;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_3_2 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_3_2 <= _GEN_112;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_3_3 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs1_3_3 <= _GEN_113;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs1_3_3 <= 16'h0; // @[SourceDestination.scala 98:30]
      end else begin
        counterRegs1_3_3 <= _GEN_113;
      end
    end
    if (reset) begin // @[SourceDestination.scala 18:31]
      counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 18:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs2_0 <= _GEN_123;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 100:25]
      end else begin
        counterRegs2_0 <= _GEN_123;
      end
    end
    if (reset) begin // @[SourceDestination.scala 18:31]
      counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 18:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs2_1 <= _GEN_124;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 100:25]
      end else begin
        counterRegs2_1 <= _GEN_124;
      end
    end
    if (reset) begin // @[SourceDestination.scala 18:31]
      counterRegs2_2 <= 16'h0; // @[SourceDestination.scala 18:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs2_2 <= _GEN_125;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs2_2 <= 16'h0; // @[SourceDestination.scala 100:25]
      end else begin
        counterRegs2_2 <= _GEN_125;
      end
    end
    if (reset) begin // @[SourceDestination.scala 18:31]
      counterRegs2_3 <= 16'h0; // @[SourceDestination.scala 18:31]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counterRegs2_3 <= _GEN_126;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counterRegs2_3 <= 16'h0; // @[SourceDestination.scala 100:25]
      end else begin
        counterRegs2_3 <= _GEN_126;
      end
    end
    if (reset) begin // @[SourceDestination.scala 20:20]
      i <= 32'h0; // @[SourceDestination.scala 20:20]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        if (!(j < 32'h3)) begin // @[SourceDestination.scala 80:40]
          i <= _GEN_134;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        i <= 32'h0; // @[SourceDestination.scala 91:9]
      end
    end
    if (reset) begin // @[SourceDestination.scala 21:20]
      j <= 32'h0; // @[SourceDestination.scala 21:20]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        if (j < 32'h3) begin // @[SourceDestination.scala 80:40]
          j <= _j_T_1; // @[SourceDestination.scala 81:11]
        end else begin
          j <= _GEN_133;
        end
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        j <= 32'h0; // @[SourceDestination.scala 92:9]
      end
    end
    if (io_start) begin // @[SourceDestination.scala 34:17]
      jValid <= _GEN_164;
    end
    if (reset) begin // @[SourceDestination.scala 26:20]
      k <= 32'h0; // @[SourceDestination.scala 26:20]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        k <= _GEN_129;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        k <= 32'h0; // @[SourceDestination.scala 93:9]
      end else begin
        k <= _GEN_129;
      end
    end
    if (reset) begin // @[SourceDestination.scala 28:27]
      counter1 <= 32'h1; // @[SourceDestination.scala 28:27]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counter1 <= _GEN_114;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counter1 <= 32'h1; // @[SourceDestination.scala 94:16]
      end else begin
        counter1 <= _GEN_114;
      end
    end
    if (reset) begin // @[SourceDestination.scala 29:27]
      counter2 <= 32'h1; // @[SourceDestination.scala 29:27]
    end else if (io_start) begin // @[SourceDestination.scala 34:17]
      if (~jValid) begin // @[SourceDestination.scala 79:26]
        counter2 <= _GEN_130;
      end else if (jValid & ~matricesAreEqual) begin // @[SourceDestination.scala 90:64]
        counter2 <= 32'h1; // @[SourceDestination.scala 95:16]
      end else begin
        counter2 <= _GEN_130;
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
  prevStationary_matrix_0_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  prevStationary_matrix_0_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  prevStationary_matrix_0_2 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  prevStationary_matrix_0_3 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  prevStationary_matrix_1_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  prevStationary_matrix_1_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  prevStationary_matrix_1_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  prevStationary_matrix_1_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  prevStationary_matrix_2_0 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  prevStationary_matrix_2_1 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  prevStationary_matrix_2_2 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  prevStationary_matrix_2_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  prevStationary_matrix_3_0 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  prevStationary_matrix_3_1 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  prevStationary_matrix_3_2 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  prevStationary_matrix_3_3 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  matricesAreEqual = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  counterRegs1_0_0 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  counterRegs1_0_1 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  counterRegs1_0_2 = _RAND_19[15:0];
  _RAND_20 = {1{`RANDOM}};
  counterRegs1_0_3 = _RAND_20[15:0];
  _RAND_21 = {1{`RANDOM}};
  counterRegs1_1_0 = _RAND_21[15:0];
  _RAND_22 = {1{`RANDOM}};
  counterRegs1_1_1 = _RAND_22[15:0];
  _RAND_23 = {1{`RANDOM}};
  counterRegs1_1_2 = _RAND_23[15:0];
  _RAND_24 = {1{`RANDOM}};
  counterRegs1_1_3 = _RAND_24[15:0];
  _RAND_25 = {1{`RANDOM}};
  counterRegs1_2_0 = _RAND_25[15:0];
  _RAND_26 = {1{`RANDOM}};
  counterRegs1_2_1 = _RAND_26[15:0];
  _RAND_27 = {1{`RANDOM}};
  counterRegs1_2_2 = _RAND_27[15:0];
  _RAND_28 = {1{`RANDOM}};
  counterRegs1_2_3 = _RAND_28[15:0];
  _RAND_29 = {1{`RANDOM}};
  counterRegs1_3_0 = _RAND_29[15:0];
  _RAND_30 = {1{`RANDOM}};
  counterRegs1_3_1 = _RAND_30[15:0];
  _RAND_31 = {1{`RANDOM}};
  counterRegs1_3_2 = _RAND_31[15:0];
  _RAND_32 = {1{`RANDOM}};
  counterRegs1_3_3 = _RAND_32[15:0];
  _RAND_33 = {1{`RANDOM}};
  counterRegs2_0 = _RAND_33[15:0];
  _RAND_34 = {1{`RANDOM}};
  counterRegs2_1 = _RAND_34[15:0];
  _RAND_35 = {1{`RANDOM}};
  counterRegs2_2 = _RAND_35[15:0];
  _RAND_36 = {1{`RANDOM}};
  counterRegs2_3 = _RAND_36[15:0];
  _RAND_37 = {1{`RANDOM}};
  i = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  j = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  jValid = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  k = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  counter1 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  counter2 = _RAND_42[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module abc2(
  input         clock,
  input         reset,
  input  [31:0] io_IDex,
  input  [31:0] io_JDex,
  input         io_valid,
  input  [31:0] io_mat_0_0,
  input  [31:0] io_mat_0_1,
  input  [31:0] io_mat_0_2,
  input  [31:0] io_mat_0_3,
  input  [31:0] io_mat_1_0,
  input  [31:0] io_mat_1_1,
  input  [31:0] io_mat_1_2,
  input  [31:0] io_mat_1_3,
  input  [31:0] io_mat_2_0,
  input  [31:0] io_mat_2_1,
  input  [31:0] io_mat_2_2,
  input  [31:0] io_mat_2_3,
  input  [31:0] io_mat_3_0,
  input  [31:0] io_mat_3_1,
  input  [31:0] io_mat_3_2,
  input  [31:0] io_mat_3_3,
  output [31:0] io_OutMat_0_0,
  output [31:0] io_OutMat_0_1,
  output [31:0] io_OutMat_0_2,
  output [31:0] io_OutMat_0_3,
  output [31:0] io_OutMat_1_0,
  output [31:0] io_OutMat_1_1,
  output [31:0] io_OutMat_1_2,
  output [31:0] io_OutMat_1_3,
  output [31:0] io_OutMat_2_0,
  output [31:0] io_OutMat_2_1,
  output [31:0] io_OutMat_2_2,
  output [31:0] io_OutMat_2_3,
  output [31:0] io_OutMat_3_0,
  output [31:0] io_OutMat_3_1,
  output [31:0] io_OutMat_3_2,
  output [31:0] io_OutMat_3_3,
  output        io_Ovalid,
  output        io_ProcessValid
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
`endif // RANDOMIZE_REG_INIT
  reg [31:0] b_0_0; // @[singleLoop.scala 19:20]
  reg [31:0] b_0_1; // @[singleLoop.scala 19:20]
  reg [31:0] b_0_2; // @[singleLoop.scala 19:20]
  reg [31:0] b_0_3; // @[singleLoop.scala 19:20]
  reg [31:0] b_1_0; // @[singleLoop.scala 19:20]
  reg [31:0] b_1_1; // @[singleLoop.scala 19:20]
  reg [31:0] b_1_2; // @[singleLoop.scala 19:20]
  reg [31:0] b_1_3; // @[singleLoop.scala 19:20]
  reg [31:0] b_2_0; // @[singleLoop.scala 19:20]
  reg [31:0] b_2_1; // @[singleLoop.scala 19:20]
  reg [31:0] b_2_2; // @[singleLoop.scala 19:20]
  reg [31:0] b_2_3; // @[singleLoop.scala 19:20]
  reg [31:0] b_3_0; // @[singleLoop.scala 19:20]
  reg [31:0] b_3_1; // @[singleLoop.scala 19:20]
  reg [31:0] b_3_2; // @[singleLoop.scala 19:20]
  reg [31:0] b_3_3; // @[singleLoop.scala 19:20]
  reg [31:0] j; // @[singleLoop.scala 21:16]
  reg [31:0] a; // @[singleLoop.scala 23:20]
  wire  _T_1 = io_valid & a != 32'h0; // @[singleLoop.scala 24:19]
  wire [31:0] _GEN_17 = 2'h0 == io_IDex[1:0] & 2'h1 == j[1:0] ? io_mat_0_1 : io_mat_0_0; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_18 = 2'h0 == io_IDex[1:0] & 2'h2 == j[1:0] ? io_mat_0_2 : _GEN_17; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_19 = 2'h0 == io_IDex[1:0] & 2'h3 == j[1:0] ? io_mat_0_3 : _GEN_18; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_20 = 2'h1 == io_IDex[1:0] & 2'h0 == j[1:0] ? io_mat_1_0 : _GEN_19; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_21 = 2'h1 == io_IDex[1:0] & 2'h1 == j[1:0] ? io_mat_1_1 : _GEN_20; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_22 = 2'h1 == io_IDex[1:0] & 2'h2 == j[1:0] ? io_mat_1_2 : _GEN_21; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_23 = 2'h1 == io_IDex[1:0] & 2'h3 == j[1:0] ? io_mat_1_3 : _GEN_22; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_24 = 2'h2 == io_IDex[1:0] & 2'h0 == j[1:0] ? io_mat_2_0 : _GEN_23; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_25 = 2'h2 == io_IDex[1:0] & 2'h1 == j[1:0] ? io_mat_2_1 : _GEN_24; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_26 = 2'h2 == io_IDex[1:0] & 2'h2 == j[1:0] ? io_mat_2_2 : _GEN_25; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_27 = 2'h2 == io_IDex[1:0] & 2'h3 == j[1:0] ? io_mat_2_3 : _GEN_26; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_28 = 2'h3 == io_IDex[1:0] & 2'h0 == j[1:0] ? io_mat_3_0 : _GEN_27; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_29 = 2'h3 == io_IDex[1:0] & 2'h1 == j[1:0] ? io_mat_3_1 : _GEN_28; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_30 = 2'h3 == io_IDex[1:0] & 2'h2 == j[1:0] ? io_mat_3_2 : _GEN_29; // @[singleLoop.scala 25:{19,19}]
  wire  _T_4 = j == 32'h3; // @[singleLoop.scala 26:13]
  wire [31:0] _GEN_49 = 2'h1 == io_IDex[1:0] ? io_mat_1_3 : io_mat_0_3; // @[singleLoop.scala 27:{45,45}]
  wire [31:0] _GEN_50 = 2'h2 == io_IDex[1:0] ? io_mat_2_3 : _GEN_49; // @[singleLoop.scala 27:{45,45}]
  wire [31:0] _GEN_51 = 2'h3 == io_IDex[1:0] ? io_mat_3_3 : _GEN_50; // @[singleLoop.scala 27:{45,45}]
  reg  io_Ovalid_REG; // @[singleLoop.scala 27:25]
  wire [31:0] _a_T_1 = a + 32'h1; // @[singleLoop.scala 46:12]
  wire [31:0] _j_T_1 = j + 32'h1; // @[singleLoop.scala 49:16]
  assign io_OutMat_0_0 = b_0_0; // @[singleLoop.scala 20:15]
  assign io_OutMat_0_1 = b_0_1; // @[singleLoop.scala 20:15]
  assign io_OutMat_0_2 = b_0_2; // @[singleLoop.scala 20:15]
  assign io_OutMat_0_3 = b_0_3; // @[singleLoop.scala 20:15]
  assign io_OutMat_1_0 = b_1_0; // @[singleLoop.scala 20:15]
  assign io_OutMat_1_1 = b_1_1; // @[singleLoop.scala 20:15]
  assign io_OutMat_1_2 = b_1_2; // @[singleLoop.scala 20:15]
  assign io_OutMat_1_3 = b_1_3; // @[singleLoop.scala 20:15]
  assign io_OutMat_2_0 = b_2_0; // @[singleLoop.scala 20:15]
  assign io_OutMat_2_1 = b_2_1; // @[singleLoop.scala 20:15]
  assign io_OutMat_2_2 = b_2_2; // @[singleLoop.scala 20:15]
  assign io_OutMat_2_3 = b_2_3; // @[singleLoop.scala 20:15]
  assign io_OutMat_3_0 = b_3_0; // @[singleLoop.scala 20:15]
  assign io_OutMat_3_1 = b_3_1; // @[singleLoop.scala 20:15]
  assign io_OutMat_3_2 = b_3_2; // @[singleLoop.scala 20:15]
  assign io_OutMat_3_3 = b_3_3; // @[singleLoop.scala 20:15]
  assign io_Ovalid = j == 32'h3 & io_Ovalid_REG; // @[singleLoop.scala 26:21 27:15 29:19]
  assign io_ProcessValid = j == 32'h3; // @[singleLoop.scala 31:35]
  always @(posedge clock) begin
    if (reset) begin // @[singleLoop.scala 19:20]
      b_0_0 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h0 == io_IDex[1:0] & 2'h0 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_0_0 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_0_0 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_0_1 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h0 == io_IDex[1:0] & 2'h1 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_0_1 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_0_1 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_0_2 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h0 == io_IDex[1:0] & 2'h2 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_0_2 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_0_2 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_0_3 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h0 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_0_3 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_0_3 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_1_0 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h1 == io_IDex[1:0] & 2'h0 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_1_0 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_1_0 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_1_1 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h1 == io_IDex[1:0] & 2'h1 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_1_1 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_1_1 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_1_2 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h1 == io_IDex[1:0] & 2'h2 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_1_2 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_1_2 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_1_3 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h1 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_1_3 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_1_3 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_2_0 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h2 == io_IDex[1:0] & 2'h0 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_2_0 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_2_0 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_2_1 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h2 == io_IDex[1:0] & 2'h1 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_2_1 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_2_1 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_2_2 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h2 == io_IDex[1:0] & 2'h2 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_2_2 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_2_2 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_2_3 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h2 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_2_3 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_2_3 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_3_0 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h3 == io_IDex[1:0] & 2'h0 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_3_0 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_3_0 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_3_1 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h3 == io_IDex[1:0] & 2'h1 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_3_1 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_3_1 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_3_2 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h3 == io_IDex[1:0] & 2'h2 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_3_2 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_3_2 <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_3_3 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
        if (2'h3 == io_IDex[1:0] & 2'h3 == j[1:0]) begin // @[singleLoop.scala 25:19]
          b_3_3 <= io_mat_3_3; // @[singleLoop.scala 25:19]
        end else begin
          b_3_3 <= _GEN_30;
        end
      end
    end
    if (_T_1 & j < 32'h3) begin // @[singleLoop.scala 48:65]
      j <= _j_T_1; // @[singleLoop.scala 49:11]
    end else if (!(_T_4)) begin // @[singleLoop.scala 50:43]
      j <= io_JDex; // @[singleLoop.scala 22:7]
    end
    if (reset) begin // @[singleLoop.scala 23:20]
      a <= 32'h0; // @[singleLoop.scala 23:20]
    end else if (io_valid) begin // @[singleLoop.scala 45:20]
      a <= _a_T_1; // @[singleLoop.scala 46:7]
    end
    io_Ovalid_REG <= _GEN_51 == 32'h4; // @[singleLoop.scala 27:45]
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
  b_0_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  b_0_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  b_0_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  b_0_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  b_1_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  b_1_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  b_1_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  b_1_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  b_2_0 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  b_2_1 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  b_2_2 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  b_2_3 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  b_3_0 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  b_3_1 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  b_3_2 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  b_3_3 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  j = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  a = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  io_Ovalid_REG = _RAND_18[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module abc3(
  input         clock,
  input         reset,
  input  [31:0] io_PreMat_0_0,
  input  [31:0] io_PreMat_0_1,
  input  [31:0] io_PreMat_0_2,
  input  [31:0] io_PreMat_0_3,
  input  [31:0] io_PreMat_1_0,
  input  [31:0] io_PreMat_1_1,
  input  [31:0] io_PreMat_1_2,
  input  [31:0] io_PreMat_1_3,
  input  [31:0] io_PreMat_2_0,
  input  [31:0] io_PreMat_2_1,
  input  [31:0] io_PreMat_2_2,
  input  [31:0] io_PreMat_2_3,
  input  [31:0] io_PreMat_3_0,
  input  [31:0] io_PreMat_3_1,
  input  [31:0] io_PreMat_3_2,
  input  [31:0] io_PreMat_3_3,
  input  [31:0] io_IDex,
  input  [31:0] io_mat_0_0,
  input  [31:0] io_mat_0_1,
  input  [31:0] io_mat_0_2,
  input  [31:0] io_mat_0_3,
  input  [31:0] io_mat_1_0,
  input  [31:0] io_mat_1_1,
  input  [31:0] io_mat_1_2,
  input  [31:0] io_mat_1_3,
  input  [31:0] io_mat_2_0,
  input  [31:0] io_mat_2_1,
  input  [31:0] io_mat_2_2,
  input  [31:0] io_mat_2_3,
  input  [31:0] io_mat_3_0,
  input  [31:0] io_mat_3_1,
  input  [31:0] io_mat_3_2,
  input  [31:0] io_mat_3_3,
  input         io_i_valid,
  output        io_valid,
  output [31:0] io_Omat_0_0,
  output [31:0] io_Omat_0_1,
  output [31:0] io_Omat_0_2,
  output [31:0] io_Omat_0_3,
  output [31:0] io_Omat_1_0,
  output [31:0] io_Omat_1_1,
  output [31:0] io_Omat_1_2,
  output [31:0] io_Omat_1_3,
  output [31:0] io_Omat_2_0,
  output [31:0] io_Omat_2_1,
  output [31:0] io_Omat_2_2,
  output [31:0] io_Omat_2_3,
  output [31:0] io_Omat_3_0,
  output [31:0] io_Omat_3_1,
  output [31:0] io_Omat_3_2,
  output [31:0] io_Omat_3_3,
  input         io_merge
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
`endif // RANDOMIZE_REG_INIT
  reg [31:0] b_0_0; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_0_1; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_0_2; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_0_3; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_1_0; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_1_1; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_1_2; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_1_3; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_2_0; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_2_1; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_2_2; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_2_3; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_3_0; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_3_1; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_3_2; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_3_3; // @[MergeDIstribution.scala 18:20]
  reg [31:0] check; // @[MergeDIstribution.scala 20:24]
  reg [31:0] i; // @[MergeDIstribution.scala 22:20]
  reg [31:0] j; // @[MergeDIstribution.scala 23:20]
  wire  _io_valid_T_1 = j == 32'h3; // @[MergeDIstribution.scala 24:35]
  wire  _io_valid_T_2 = i == 32'h3 & j == 32'h3; // @[MergeDIstribution.scala 24:29]
  reg [31:0] k; // @[MergeDIstribution.scala 26:20]
  reg [31:0] l; // @[MergeDIstribution.scala 27:20]
  reg [31:0] delay; // @[MergeDIstribution.scala 29:24]
  wire [31:0] _delay_T_1 = delay + 32'h1; // @[MergeDIstribution.scala 32:24]
  wire [31:0] _k_T_1 = k + 32'h1; // @[MergeDIstribution.scala 44:16]
  wire [31:0] _l_T_1 = l + 32'h1; // @[MergeDIstribution.scala 47:16]
  wire [31:0] _GEN_22 = 2'h0 == k[1:0] & 2'h1 == l[1:0] ? io_PreMat_0_1 : io_PreMat_0_0; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_23 = 2'h0 == k[1:0] & 2'h2 == l[1:0] ? io_PreMat_0_2 : _GEN_22; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_24 = 2'h0 == k[1:0] & 2'h3 == l[1:0] ? io_PreMat_0_3 : _GEN_23; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_25 = 2'h1 == k[1:0] & 2'h0 == l[1:0] ? io_PreMat_1_0 : _GEN_24; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_26 = 2'h1 == k[1:0] & 2'h1 == l[1:0] ? io_PreMat_1_1 : _GEN_25; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_27 = 2'h1 == k[1:0] & 2'h2 == l[1:0] ? io_PreMat_1_2 : _GEN_26; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_28 = 2'h1 == k[1:0] & 2'h3 == l[1:0] ? io_PreMat_1_3 : _GEN_27; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_29 = 2'h2 == k[1:0] & 2'h0 == l[1:0] ? io_PreMat_2_0 : _GEN_28; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_30 = 2'h2 == k[1:0] & 2'h1 == l[1:0] ? io_PreMat_2_1 : _GEN_29; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_31 = 2'h2 == k[1:0] & 2'h2 == l[1:0] ? io_PreMat_2_2 : _GEN_30; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_32 = 2'h2 == k[1:0] & 2'h3 == l[1:0] ? io_PreMat_2_3 : _GEN_31; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_33 = 2'h3 == k[1:0] & 2'h0 == l[1:0] ? io_PreMat_3_0 : _GEN_32; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_34 = 2'h3 == k[1:0] & 2'h1 == l[1:0] ? io_PreMat_3_1 : _GEN_33; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_35 = 2'h3 == k[1:0] & 2'h2 == l[1:0] ? io_PreMat_3_2 : _GEN_34; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_36 = 2'h3 == k[1:0] & 2'h3 == l[1:0] ? io_PreMat_3_3 : _GEN_35; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_5 = 2'h0 == k[1:0] & 2'h0 == l[1:0] ? _GEN_36 : b_0_0; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_6 = 2'h0 == k[1:0] & 2'h1 == l[1:0] ? _GEN_36 : b_0_1; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_7 = 2'h0 == k[1:0] & 2'h2 == l[1:0] ? _GEN_36 : b_0_2; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_8 = 2'h0 == k[1:0] & 2'h3 == l[1:0] ? _GEN_36 : b_0_3; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_9 = 2'h1 == k[1:0] & 2'h0 == l[1:0] ? _GEN_36 : b_1_0; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_10 = 2'h1 == k[1:0] & 2'h1 == l[1:0] ? _GEN_36 : b_1_1; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_11 = 2'h1 == k[1:0] & 2'h2 == l[1:0] ? _GEN_36 : b_1_2; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_12 = 2'h1 == k[1:0] & 2'h3 == l[1:0] ? _GEN_36 : b_1_3; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_13 = 2'h2 == k[1:0] & 2'h0 == l[1:0] ? _GEN_36 : b_2_0; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_14 = 2'h2 == k[1:0] & 2'h1 == l[1:0] ? _GEN_36 : b_2_1; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_15 = 2'h2 == k[1:0] & 2'h2 == l[1:0] ? _GEN_36 : b_2_2; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_16 = 2'h2 == k[1:0] & 2'h3 == l[1:0] ? _GEN_36 : b_2_3; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_17 = 2'h3 == k[1:0] & 2'h0 == l[1:0] ? _GEN_36 : b_3_0; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_18 = 2'h3 == k[1:0] & 2'h1 == l[1:0] ? _GEN_36 : b_3_1; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_19 = 2'h3 == k[1:0] & 2'h2 == l[1:0] ? _GEN_36 : b_3_2; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_20 = 2'h3 == k[1:0] & 2'h3 == l[1:0] ? _GEN_36 : b_3_3; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_39 = io_merge & delay == 32'h4 ? _GEN_5 : b_0_0; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_40 = io_merge & delay == 32'h4 ? _GEN_6 : b_0_1; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_41 = io_merge & delay == 32'h4 ? _GEN_7 : b_0_2; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_42 = io_merge & delay == 32'h4 ? _GEN_8 : b_0_3; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_43 = io_merge & delay == 32'h4 ? _GEN_9 : b_1_0; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_44 = io_merge & delay == 32'h4 ? _GEN_10 : b_1_1; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_45 = io_merge & delay == 32'h4 ? _GEN_11 : b_1_2; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_46 = io_merge & delay == 32'h4 ? _GEN_12 : b_1_3; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_47 = io_merge & delay == 32'h4 ? _GEN_13 : b_2_0; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_48 = io_merge & delay == 32'h4 ? _GEN_14 : b_2_1; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_49 = io_merge & delay == 32'h4 ? _GEN_15 : b_2_2; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_50 = io_merge & delay == 32'h4 ? _GEN_16 : b_2_3; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_51 = io_merge & delay == 32'h4 ? _GEN_17 : b_3_0; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_52 = io_merge & delay == 32'h4 ? _GEN_18 : b_3_1; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_53 = io_merge & delay == 32'h4 ? _GEN_19 : b_3_2; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_54 = io_merge & delay == 32'h4 ? _GEN_20 : b_3_3; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _i_T_1 = io_IDex + 32'h1; // @[MergeDIstribution.scala 55:22]
  wire [31:0] _check_T_1 = check + 32'h1; // @[MergeDIstribution.scala 57:24]
  wire [31:0] _GEN_55 = io_i_valid & i == 32'h0 & j == 32'h0 ? _i_T_1 : i; // @[MergeDIstribution.scala 54:53 55:11 22:20]
  wire [31:0] _GEN_56 = io_i_valid & i == 32'h0 & j == 32'h0 ? 32'h0 : j; // @[MergeDIstribution.scala 54:53 56:11 23:20]
  wire  _GEN_58 = check >= 32'h1; // @[MergeDIstribution.scala 60:17]
  wire [31:0] _GEN_77 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_mat_0_1 : io_mat_0_0; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_78 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_mat_0_2 : _GEN_77; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_79 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_mat_0_3 : _GEN_78; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_80 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_mat_1_0 : _GEN_79; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_81 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_mat_1_1 : _GEN_80; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_82 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_mat_1_2 : _GEN_81; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_83 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_mat_1_3 : _GEN_82; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_84 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_mat_2_0 : _GEN_83; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_85 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_mat_2_1 : _GEN_84; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_86 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_mat_2_2 : _GEN_85; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_87 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_mat_2_3 : _GEN_86; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_88 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_mat_3_0 : _GEN_87; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_89 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_mat_3_1 : _GEN_88; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_90 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_mat_3_2 : _GEN_89; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_91 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_mat_3_3 : _GEN_90; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _i_T_3 = i + 32'h1; // @[MergeDIstribution.scala 105:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[MergeDIstribution.scala 108:16]
  wire [31:0] _GEN_124 = _io_valid_T_2 ? j : _GEN_56; // @[MergeDIstribution.scala 109:75 110:11]
  wire [31:0] _GEN_125 = i <= 32'h3 & j < 32'h3 ? _j_T_1 : _GEN_124; // @[MergeDIstribution.scala 107:74 108:11]
  wire  _GEN_130 = _GEN_91 == 32'h4 | i == 32'h3 & j == 32'h3; // @[MergeDIstribution.scala 100:44 103:18 24:14]
  wire  counter = check >= 32'h1; // @[MergeDIstribution.scala 60:17]
  assign io_valid = _GEN_58 ? _GEN_130 : i == 32'h3 & j == 32'h3; // @[MergeDIstribution.scala 24:14 97:14]
  assign io_Omat_0_0 = b_0_0; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_0_1 = b_0_1; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_0_2 = b_0_2; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_0_3 = b_0_3; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_1_0 = b_1_0; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_1_1 = b_1_1; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_1_2 = b_1_2; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_1_3 = b_1_3; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_2_0 = b_2_0; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_2_1 = b_2_1; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_2_2 = b_2_2; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_2_3 = b_2_3; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_3_0 = b_3_0; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_3_1 = b_3_1; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_3_2 = b_3_2; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_3_3 = b_3_3; // @[MergeDIstribution.scala 19:13]
  always @(posedge clock) begin
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_0_0 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h0 == i[1:0] & 2'h0 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_0_0 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_0_0 <= _GEN_90;
        end
      end else begin
        b_0_0 <= _GEN_39;
      end
    end else begin
      b_0_0 <= _GEN_39;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_0_1 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h0 == i[1:0] & 2'h1 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_0_1 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_0_1 <= _GEN_90;
        end
      end else begin
        b_0_1 <= _GEN_40;
      end
    end else begin
      b_0_1 <= _GEN_40;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_0_2 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h0 == i[1:0] & 2'h2 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_0_2 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_0_2 <= _GEN_90;
        end
      end else begin
        b_0_2 <= _GEN_41;
      end
    end else begin
      b_0_2 <= _GEN_41;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_0_3 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h0 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_0_3 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_0_3 <= _GEN_90;
        end
      end else begin
        b_0_3 <= _GEN_42;
      end
    end else begin
      b_0_3 <= _GEN_42;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_1_0 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h1 == i[1:0] & 2'h0 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_1_0 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_1_0 <= _GEN_90;
        end
      end else begin
        b_1_0 <= _GEN_43;
      end
    end else begin
      b_1_0 <= _GEN_43;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_1_1 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h1 == i[1:0] & 2'h1 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_1_1 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_1_1 <= _GEN_90;
        end
      end else begin
        b_1_1 <= _GEN_44;
      end
    end else begin
      b_1_1 <= _GEN_44;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_1_2 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h1 == i[1:0] & 2'h2 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_1_2 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_1_2 <= _GEN_90;
        end
      end else begin
        b_1_2 <= _GEN_45;
      end
    end else begin
      b_1_2 <= _GEN_45;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_1_3 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h1 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_1_3 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_1_3 <= _GEN_90;
        end
      end else begin
        b_1_3 <= _GEN_46;
      end
    end else begin
      b_1_3 <= _GEN_46;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_2_0 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h2 == i[1:0] & 2'h0 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_2_0 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_2_0 <= _GEN_90;
        end
      end else begin
        b_2_0 <= _GEN_47;
      end
    end else begin
      b_2_0 <= _GEN_47;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_2_1 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h2 == i[1:0] & 2'h1 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_2_1 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_2_1 <= _GEN_90;
        end
      end else begin
        b_2_1 <= _GEN_48;
      end
    end else begin
      b_2_1 <= _GEN_48;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_2_2 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h2 == i[1:0] & 2'h2 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_2_2 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_2_2 <= _GEN_90;
        end
      end else begin
        b_2_2 <= _GEN_49;
      end
    end else begin
      b_2_2 <= _GEN_49;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_2_3 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h2 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_2_3 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_2_3 <= _GEN_90;
        end
      end else begin
        b_2_3 <= _GEN_50;
      end
    end else begin
      b_2_3 <= _GEN_50;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_3_0 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h3 == i[1:0] & 2'h0 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_3_0 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_3_0 <= _GEN_90;
        end
      end else begin
        b_3_0 <= _GEN_51;
      end
    end else begin
      b_3_0 <= _GEN_51;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_3_1 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h3 == i[1:0] & 2'h1 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_3_1 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_3_1 <= _GEN_90;
        end
      end else begin
        b_3_1 <= _GEN_52;
      end
    end else begin
      b_3_1 <= _GEN_52;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_3_2 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h3 == i[1:0] & 2'h2 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_3_2 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_3_2 <= _GEN_90;
        end
      end else begin
        b_3_2 <= _GEN_53;
      end
    end else begin
      b_3_2 <= _GEN_53;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_3_3 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
        if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[MergeDIstribution.scala 68:13]
          b_3_3 <= io_mat_3_3; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_3_3 <= _GEN_90;
        end
      end else begin
        b_3_3 <= _GEN_54;
      end
    end else begin
      b_3_3 <= _GEN_54;
    end
    if (reset) begin // @[MergeDIstribution.scala 20:24]
      check <= 32'h0; // @[MergeDIstribution.scala 20:24]
    end else if (check >= 32'h1) begin // @[MergeDIstribution.scala 60:24]
      check <= _check_T_1; // @[MergeDIstribution.scala 62:15]
    end else if (io_i_valid & i == 32'h0 & j == 32'h0) begin // @[MergeDIstribution.scala 54:53]
      check <= _check_T_1; // @[MergeDIstribution.scala 57:15]
    end
    if (reset) begin // @[MergeDIstribution.scala 22:20]
      i <= 32'h0; // @[MergeDIstribution.scala 22:20]
    end else if (_GEN_58) begin // @[MergeDIstribution.scala 97:14]
      if (!(_GEN_91 == 32'h4)) begin // @[MergeDIstribution.scala 100:44]
        if (i < 32'h3 & _io_valid_T_1) begin // @[MergeDIstribution.scala 104:75]
          i <= _i_T_3; // @[MergeDIstribution.scala 105:11]
        end else begin
          i <= _GEN_55;
        end
      end
    end else begin
      i <= _GEN_55;
    end
    if (reset) begin // @[MergeDIstribution.scala 23:20]
      j <= 32'h0; // @[MergeDIstribution.scala 23:20]
    end else if (_GEN_58) begin // @[MergeDIstribution.scala 97:14]
      if (!(_GEN_91 == 32'h4)) begin // @[MergeDIstribution.scala 100:44]
        if (i < 32'h3 & _io_valid_T_1) begin // @[MergeDIstribution.scala 104:75]
          j <= 32'h0; // @[MergeDIstribution.scala 106:11]
        end else begin
          j <= _GEN_125;
        end
      end
    end else if (io_i_valid & i == 32'h0 & j == 32'h0) begin // @[MergeDIstribution.scala 54:53]
      j <= 32'h0; // @[MergeDIstribution.scala 56:11]
    end
    if (reset) begin // @[MergeDIstribution.scala 26:20]
      k <= 32'h0; // @[MergeDIstribution.scala 26:20]
    end else if (io_merge & delay == 32'h4) begin // @[MergeDIstribution.scala 41:53]
      if (k < io_IDex & l == 32'h3) begin // @[MergeDIstribution.scala 43:56]
        k <= _k_T_1; // @[MergeDIstribution.scala 44:11]
      end
    end
    if (reset) begin // @[MergeDIstribution.scala 27:20]
      l <= 32'h0; // @[MergeDIstribution.scala 27:20]
    end else if (io_merge & delay == 32'h4) begin // @[MergeDIstribution.scala 41:53]
      if (k < io_IDex & l == 32'h3) begin // @[MergeDIstribution.scala 43:56]
        l <= 32'h0; // @[MergeDIstribution.scala 45:11]
      end else if (k <= io_IDex & l < 32'h3) begin // @[MergeDIstribution.scala 46:61]
        l <= _l_T_1; // @[MergeDIstribution.scala 47:11]
      end
    end
    if (reset) begin // @[MergeDIstribution.scala 29:24]
      delay <= 32'h0; // @[MergeDIstribution.scala 29:24]
    end else if (delay <= 32'h3 & io_merge) begin // @[MergeDIstribution.scala 31:53]
      delay <= _delay_T_1; // @[MergeDIstribution.scala 32:15]
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
  b_0_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  b_0_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  b_0_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  b_0_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  b_1_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  b_1_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  b_1_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  b_1_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  b_2_0 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  b_2_1 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  b_2_2 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  b_2_3 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  b_3_0 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  b_3_1 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  b_3_2 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  b_3_3 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  check = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  i = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  j = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  k = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  l = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  delay = _RAND_21[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Distribution(
  input         clock,
  input         reset,
  input  [31:0] io_matrix_0_0,
  input  [31:0] io_matrix_0_1,
  input  [31:0] io_matrix_0_2,
  input  [31:0] io_matrix_0_3,
  input  [31:0] io_matrix_1_0,
  input  [31:0] io_matrix_1_1,
  input  [31:0] io_matrix_1_2,
  input  [31:0] io_matrix_1_3,
  input  [31:0] io_matrix_2_0,
  input  [31:0] io_matrix_2_1,
  input  [31:0] io_matrix_2_2,
  input  [31:0] io_matrix_2_3,
  input  [31:0] io_matrix_3_0,
  input  [31:0] io_matrix_3_1,
  input  [31:0] io_matrix_3_2,
  input  [31:0] io_matrix_3_3,
  input  [31:0] io_s,
  output [31:0] io_out_0_0,
  output [31:0] io_out_0_1,
  output [31:0] io_out_0_2,
  output [31:0] io_out_0_3,
  output [31:0] io_out_1_0,
  output [31:0] io_out_1_1,
  output [31:0] io_out_1_2,
  output [31:0] io_out_1_3,
  output [31:0] io_out_2_0,
  output [31:0] io_out_2_1,
  output [31:0] io_out_2_2,
  output [31:0] io_out_2_3,
  output [31:0] io_out_3_0,
  output [31:0] io_out_3_1,
  output [31:0] io_out_3_2,
  output [31:0] io_out_3_3,
  output        io_ProcessValid,
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
`endif // RANDOMIZE_REG_INIT
  wire  part2_clock; // @[DIstribution.scala 55:19]
  wire  part2_reset; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_IDex; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_JDex; // @[DIstribution.scala 55:19]
  wire  part2_io_valid; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_0_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_0_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_0_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_0_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_1_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_1_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_1_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_1_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_2_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_2_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_2_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_2_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_3_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_3_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_3_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_mat_3_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_0_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_0_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_0_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_0_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_1_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_1_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_1_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_1_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_2_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_2_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_2_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_2_3; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_3_0; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_3_1; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_3_2; // @[DIstribution.scala 55:19]
  wire [31:0] part2_io_OutMat_3_3; // @[DIstribution.scala 55:19]
  wire  part2_io_Ovalid; // @[DIstribution.scala 55:19]
  wire  part2_io_ProcessValid; // @[DIstribution.scala 55:19]
  wire  part3_clock; // @[DIstribution.scala 69:23]
  wire  part3_reset; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_0_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_0_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_0_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_0_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_1_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_1_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_1_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_1_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_2_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_2_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_2_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_2_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_3_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_3_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_3_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_PreMat_3_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_IDex; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_0_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_0_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_0_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_0_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_1_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_1_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_1_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_1_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_2_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_2_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_2_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_2_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_3_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_3_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_3_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_mat_3_3; // @[DIstribution.scala 69:23]
  wire  part3_io_i_valid; // @[DIstribution.scala 69:23]
  wire  part3_io_valid; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_0_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_0_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_0_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_0_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_1_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_1_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_1_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_1_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_2_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_2_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_2_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_2_3; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_3_0; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_3_1; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_3_2; // @[DIstribution.scala 69:23]
  wire [31:0] part3_io_Omat_3_3; // @[DIstribution.scala 69:23]
  wire  part3_io_merge; // @[DIstribution.scala 69:23]
  reg [31:0] i; // @[DIstribution.scala 19:20]
  reg [31:0] j; // @[DIstribution.scala 20:20]
  reg [31:0] count; // @[DIstribution.scala 21:24]
  reg [31:0] Idex_0; // @[DIstribution.scala 22:23]
  reg [31:0] Idex_1; // @[DIstribution.scala 22:23]
  reg [31:0] Idex_2; // @[DIstribution.scala 22:23]
  reg [31:0] Idex_3; // @[DIstribution.scala 22:23]
  reg [31:0] Jdex_0; // @[DIstribution.scala 23:23]
  reg [31:0] Jdex_1; // @[DIstribution.scala 23:23]
  reg [31:0] Jdex_2; // @[DIstribution.scala 23:23]
  reg [31:0] Jdex_3; // @[DIstribution.scala 23:23]
  reg [31:0] iterationNo; // @[DIstribution.scala 25:30]
  wire  _io_validIteration_T = i == 32'h3; // @[DIstribution.scala 30:29]
  wire  _io_validIteration_T_1 = j == 32'h3; // @[DIstribution.scala 30:62]
  wire  _io_validIteration_T_2 = i == 32'h3 & j == 32'h3; // @[DIstribution.scala 30:56]
  wire [31:0] _GEN_1 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_matrix_0_1 : io_matrix_0_0; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_2 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_matrix_0_2 : _GEN_1; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_3 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_matrix_0_3 : _GEN_2; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_4 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_matrix_1_0 : _GEN_3; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_5 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_matrix_1_1 : _GEN_4; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_6 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_matrix_1_2 : _GEN_5; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_7 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_matrix_1_3 : _GEN_6; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_8 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_matrix_2_0 : _GEN_7; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_9 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_matrix_2_1 : _GEN_8; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_10 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_matrix_2_2 : _GEN_9; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_11 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_matrix_2_3 : _GEN_10; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_12 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_matrix_3_0 : _GEN_11; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_13 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_matrix_3_1 : _GEN_12; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_14 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_matrix_3_2 : _GEN_13; // @[DIstribution.scala 34:{27,27}]
  wire [31:0] _GEN_15 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_matrix_3_3 : _GEN_14; // @[DIstribution.scala 34:{27,27}]
  wire  _T_2 = _GEN_15 == 32'h1; // @[DIstribution.scala 34:27]
  wire [31:0] _iterationNo_T_1 = iterationNo + 32'h1; // @[DIstribution.scala 35:34]
  wire [31:0] _count_T_1 = count + 32'h1; // @[DIstribution.scala 48:24]
  wire [31:0] _GEN_33 = 2'h0 == count[1:0] ? i : Idex_0; // @[DIstribution.scala 49:{21,21} 22:23]
  wire [31:0] _GEN_34 = 2'h1 == count[1:0] ? i : Idex_1; // @[DIstribution.scala 49:{21,21} 22:23]
  wire [31:0] _GEN_35 = 2'h2 == count[1:0] ? i : Idex_2; // @[DIstribution.scala 49:{21,21} 22:23]
  wire [31:0] _GEN_36 = 2'h3 == count[1:0] ? i : Idex_3; // @[DIstribution.scala 49:{21,21} 22:23]
  wire [31:0] _GEN_37 = 2'h0 == count[1:0] ? j : Jdex_0; // @[DIstribution.scala 50:{21,21} 23:23]
  wire [31:0] _GEN_38 = 2'h1 == count[1:0] ? j : Jdex_1; // @[DIstribution.scala 50:{21,21} 23:23]
  wire [31:0] _GEN_39 = 2'h2 == count[1:0] ? j : Jdex_2; // @[DIstribution.scala 50:{21,21} 23:23]
  wire [31:0] _GEN_40 = 2'h3 == count[1:0] ? j : Jdex_3; // @[DIstribution.scala 50:{21,21} 23:23]
  reg  c; // @[DIstribution.scala 57:20]
  wire [31:0] _GEN_83 = 2'h1 == io_s[1:0] ? Idex_1 : Idex_0; // @[DIstribution.scala 60:{19,19}]
  wire [31:0] _GEN_84 = 2'h2 == io_s[1:0] ? Idex_2 : _GEN_83; // @[DIstribution.scala 60:{19,19}]
  wire [31:0] _GEN_85 = 2'h3 == io_s[1:0] ? Idex_3 : _GEN_84; // @[DIstribution.scala 60:{19,19}]
  wire [31:0] _GEN_87 = 2'h1 == io_s[1:0] ? Jdex_1 : Jdex_0; // @[DIstribution.scala 61:{19,19}]
  wire [31:0] _GEN_88 = 2'h2 == io_s[1:0] ? Jdex_2 : _GEN_87; // @[DIstribution.scala 61:{19,19}]
  wire [31:0] _GEN_89 = 2'h3 == io_s[1:0] ? Jdex_3 : _GEN_88; // @[DIstribution.scala 61:{19,19}]
  wire  check = part2_io_Ovalid ? 1'h0 : 1'h1; // @[DIstribution.scala 75:26 76:15 78:15]
  wire [31:0] _e_T_4 = count - 32'h1; // @[DIstribution.scala 80:85]
  wire  e = _io_validIteration_T_2 & _e_T_4 < io_s; // @[DIstribution.scala 80:75]
  reg  part3_io_merge_REG; // @[DIstribution.scala 83:30]
  wire [31:0] _GEN_101 = e ? 32'h0 : part3_io_Omat_0_0; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_102 = e ? 32'h0 : part3_io_Omat_0_1; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_103 = e ? 32'h0 : part3_io_Omat_0_2; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_104 = e ? 32'h0 : part3_io_Omat_0_3; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_105 = e ? 32'h0 : part3_io_Omat_1_0; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_106 = e ? 32'h0 : part3_io_Omat_1_1; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_107 = e ? 32'h0 : part3_io_Omat_1_2; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_108 = e ? 32'h0 : part3_io_Omat_1_3; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_109 = e ? 32'h0 : part3_io_Omat_2_0; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_110 = e ? 32'h0 : part3_io_Omat_2_1; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_111 = e ? 32'h0 : part3_io_Omat_2_2; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_112 = e ? 32'h0 : part3_io_Omat_2_3; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_113 = e ? 32'h0 : part3_io_Omat_3_0; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_114 = e ? 32'h0 : part3_io_Omat_3_1; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_115 = e ? 32'h0 : part3_io_Omat_3_2; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_116 = e ? 32'h0 : part3_io_Omat_3_3; // @[DIstribution.scala 90:96 91:16 93:12]
  wire [31:0] _GEN_117 = e ? 32'h0 : part2_io_OutMat_0_0; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_118 = e ? 32'h0 : part2_io_OutMat_0_1; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_119 = e ? 32'h0 : part2_io_OutMat_0_2; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_120 = e ? 32'h0 : part2_io_OutMat_0_3; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_121 = e ? 32'h0 : part2_io_OutMat_1_0; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_122 = e ? 32'h0 : part2_io_OutMat_1_1; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_123 = e ? 32'h0 : part2_io_OutMat_1_2; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_124 = e ? 32'h0 : part2_io_OutMat_1_3; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_125 = e ? 32'h0 : part2_io_OutMat_2_0; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_126 = e ? 32'h0 : part2_io_OutMat_2_1; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_127 = e ? 32'h0 : part2_io_OutMat_2_2; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_128 = e ? 32'h0 : part2_io_OutMat_2_3; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_129 = e ? 32'h0 : part2_io_OutMat_3_0; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_130 = e ? 32'h0 : part2_io_OutMat_3_1; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_131 = e ? 32'h0 : part2_io_OutMat_3_2; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_132 = e ? 32'h0 : part2_io_OutMat_3_3; // @[DIstribution.scala 102:96 103:16 105:12]
  wire [31:0] _GEN_169 = part2_io_ProcessValid & check ? _GEN_101 : _GEN_117; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_170 = part2_io_ProcessValid & check ? _GEN_102 : _GEN_118; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_171 = part2_io_ProcessValid & check ? _GEN_103 : _GEN_119; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_172 = part2_io_ProcessValid & check ? _GEN_104 : _GEN_120; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_173 = part2_io_ProcessValid & check ? _GEN_105 : _GEN_121; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_174 = part2_io_ProcessValid & check ? _GEN_106 : _GEN_122; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_175 = part2_io_ProcessValid & check ? _GEN_107 : _GEN_123; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_176 = part2_io_ProcessValid & check ? _GEN_108 : _GEN_124; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_177 = part2_io_ProcessValid & check ? _GEN_109 : _GEN_125; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_178 = part2_io_ProcessValid & check ? _GEN_110 : _GEN_126; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_179 = part2_io_ProcessValid & check ? _GEN_111 : _GEN_127; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_180 = part2_io_ProcessValid & check ? _GEN_112 : _GEN_128; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_181 = part2_io_ProcessValid & check ? _GEN_113 : _GEN_129; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_182 = part2_io_ProcessValid & check ? _GEN_114 : _GEN_130; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_183 = part2_io_ProcessValid & check ? _GEN_115 : _GEN_131; // @[DIstribution.scala 82:42]
  wire [31:0] _GEN_184 = part2_io_ProcessValid & check ? _GEN_116 : _GEN_132; // @[DIstribution.scala 82:42]
  wire  _GEN_185 = part2_io_ProcessValid & check ? part3_io_valid : part2_io_Ovalid; // @[DIstribution.scala 106:21 82:42 94:21]
  wire [31:0] _i_T_1 = i + 32'h1; // @[DIstribution.scala 114:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[DIstribution.scala 118:16]
  abc2 part2 ( // @[DIstribution.scala 55:19]
    .clock(part2_clock),
    .reset(part2_reset),
    .io_IDex(part2_io_IDex),
    .io_JDex(part2_io_JDex),
    .io_valid(part2_io_valid),
    .io_mat_0_0(part2_io_mat_0_0),
    .io_mat_0_1(part2_io_mat_0_1),
    .io_mat_0_2(part2_io_mat_0_2),
    .io_mat_0_3(part2_io_mat_0_3),
    .io_mat_1_0(part2_io_mat_1_0),
    .io_mat_1_1(part2_io_mat_1_1),
    .io_mat_1_2(part2_io_mat_1_2),
    .io_mat_1_3(part2_io_mat_1_3),
    .io_mat_2_0(part2_io_mat_2_0),
    .io_mat_2_1(part2_io_mat_2_1),
    .io_mat_2_2(part2_io_mat_2_2),
    .io_mat_2_3(part2_io_mat_2_3),
    .io_mat_3_0(part2_io_mat_3_0),
    .io_mat_3_1(part2_io_mat_3_1),
    .io_mat_3_2(part2_io_mat_3_2),
    .io_mat_3_3(part2_io_mat_3_3),
    .io_OutMat_0_0(part2_io_OutMat_0_0),
    .io_OutMat_0_1(part2_io_OutMat_0_1),
    .io_OutMat_0_2(part2_io_OutMat_0_2),
    .io_OutMat_0_3(part2_io_OutMat_0_3),
    .io_OutMat_1_0(part2_io_OutMat_1_0),
    .io_OutMat_1_1(part2_io_OutMat_1_1),
    .io_OutMat_1_2(part2_io_OutMat_1_2),
    .io_OutMat_1_3(part2_io_OutMat_1_3),
    .io_OutMat_2_0(part2_io_OutMat_2_0),
    .io_OutMat_2_1(part2_io_OutMat_2_1),
    .io_OutMat_2_2(part2_io_OutMat_2_2),
    .io_OutMat_2_3(part2_io_OutMat_2_3),
    .io_OutMat_3_0(part2_io_OutMat_3_0),
    .io_OutMat_3_1(part2_io_OutMat_3_1),
    .io_OutMat_3_2(part2_io_OutMat_3_2),
    .io_OutMat_3_3(part2_io_OutMat_3_3),
    .io_Ovalid(part2_io_Ovalid),
    .io_ProcessValid(part2_io_ProcessValid)
  );
  abc3 part3 ( // @[DIstribution.scala 69:23]
    .clock(part3_clock),
    .reset(part3_reset),
    .io_PreMat_0_0(part3_io_PreMat_0_0),
    .io_PreMat_0_1(part3_io_PreMat_0_1),
    .io_PreMat_0_2(part3_io_PreMat_0_2),
    .io_PreMat_0_3(part3_io_PreMat_0_3),
    .io_PreMat_1_0(part3_io_PreMat_1_0),
    .io_PreMat_1_1(part3_io_PreMat_1_1),
    .io_PreMat_1_2(part3_io_PreMat_1_2),
    .io_PreMat_1_3(part3_io_PreMat_1_3),
    .io_PreMat_2_0(part3_io_PreMat_2_0),
    .io_PreMat_2_1(part3_io_PreMat_2_1),
    .io_PreMat_2_2(part3_io_PreMat_2_2),
    .io_PreMat_2_3(part3_io_PreMat_2_3),
    .io_PreMat_3_0(part3_io_PreMat_3_0),
    .io_PreMat_3_1(part3_io_PreMat_3_1),
    .io_PreMat_3_2(part3_io_PreMat_3_2),
    .io_PreMat_3_3(part3_io_PreMat_3_3),
    .io_IDex(part3_io_IDex),
    .io_mat_0_0(part3_io_mat_0_0),
    .io_mat_0_1(part3_io_mat_0_1),
    .io_mat_0_2(part3_io_mat_0_2),
    .io_mat_0_3(part3_io_mat_0_3),
    .io_mat_1_0(part3_io_mat_1_0),
    .io_mat_1_1(part3_io_mat_1_1),
    .io_mat_1_2(part3_io_mat_1_2),
    .io_mat_1_3(part3_io_mat_1_3),
    .io_mat_2_0(part3_io_mat_2_0),
    .io_mat_2_1(part3_io_mat_2_1),
    .io_mat_2_2(part3_io_mat_2_2),
    .io_mat_2_3(part3_io_mat_2_3),
    .io_mat_3_0(part3_io_mat_3_0),
    .io_mat_3_1(part3_io_mat_3_1),
    .io_mat_3_2(part3_io_mat_3_2),
    .io_mat_3_3(part3_io_mat_3_3),
    .io_i_valid(part3_io_i_valid),
    .io_valid(part3_io_valid),
    .io_Omat_0_0(part3_io_Omat_0_0),
    .io_Omat_0_1(part3_io_Omat_0_1),
    .io_Omat_0_2(part3_io_Omat_0_2),
    .io_Omat_0_3(part3_io_Omat_0_3),
    .io_Omat_1_0(part3_io_Omat_1_0),
    .io_Omat_1_1(part3_io_Omat_1_1),
    .io_Omat_1_2(part3_io_Omat_1_2),
    .io_Omat_1_3(part3_io_Omat_1_3),
    .io_Omat_2_0(part3_io_Omat_2_0),
    .io_Omat_2_1(part3_io_Omat_2_1),
    .io_Omat_2_2(part3_io_Omat_2_2),
    .io_Omat_2_3(part3_io_Omat_2_3),
    .io_Omat_3_0(part3_io_Omat_3_0),
    .io_Omat_3_1(part3_io_Omat_3_1),
    .io_Omat_3_2(part3_io_Omat_3_2),
    .io_Omat_3_3(part3_io_Omat_3_3),
    .io_merge(part3_io_merge)
  );
  assign io_out_0_0 = io_valid ? _GEN_169 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_0_1 = io_valid ? _GEN_170 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_0_2 = io_valid ? _GEN_171 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_0_3 = io_valid ? _GEN_172 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_1_0 = io_valid ? _GEN_173 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_1_1 = io_valid ? _GEN_174 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_1_2 = io_valid ? _GEN_175 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_1_3 = io_valid ? _GEN_176 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_2_0 = io_valid ? _GEN_177 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_2_1 = io_valid ? _GEN_178 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_2_2 = io_valid ? _GEN_179 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_2_3 = io_valid ? _GEN_180 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_3_0 = io_valid ? _GEN_181 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_3_1 = io_valid ? _GEN_182 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_3_2 = io_valid ? _GEN_183 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_out_3_3 = io_valid ? _GEN_184 : 32'h0; // @[DIstribution.scala 129:16 27:21]
  assign io_ProcessValid = io_valid & _GEN_185; // @[DIstribution.scala 27:21 130:25]
  assign part2_clock = clock;
  assign part2_reset = reset;
  assign part2_io_IDex = c ? _GEN_85 : 32'h0; // @[DIstribution.scala 59:13 60:19 63:19]
  assign part2_io_JDex = c ? _GEN_89 : 32'h0; // @[DIstribution.scala 59:13 61:19 64:19]
  assign part2_io_valid = c; // @[DIstribution.scala 58:20]
  assign part2_io_mat_0_0 = io_matrix_0_0; // @[DIstribution.scala 56:14]
  assign part2_io_mat_0_1 = io_matrix_0_1; // @[DIstribution.scala 56:14]
  assign part2_io_mat_0_2 = io_matrix_0_2; // @[DIstribution.scala 56:14]
  assign part2_io_mat_0_3 = io_matrix_0_3; // @[DIstribution.scala 56:14]
  assign part2_io_mat_1_0 = io_matrix_1_0; // @[DIstribution.scala 56:14]
  assign part2_io_mat_1_1 = io_matrix_1_1; // @[DIstribution.scala 56:14]
  assign part2_io_mat_1_2 = io_matrix_1_2; // @[DIstribution.scala 56:14]
  assign part2_io_mat_1_3 = io_matrix_1_3; // @[DIstribution.scala 56:14]
  assign part2_io_mat_2_0 = io_matrix_2_0; // @[DIstribution.scala 56:14]
  assign part2_io_mat_2_1 = io_matrix_2_1; // @[DIstribution.scala 56:14]
  assign part2_io_mat_2_2 = io_matrix_2_2; // @[DIstribution.scala 56:14]
  assign part2_io_mat_2_3 = io_matrix_2_3; // @[DIstribution.scala 56:14]
  assign part2_io_mat_3_0 = io_matrix_3_0; // @[DIstribution.scala 56:14]
  assign part2_io_mat_3_1 = io_matrix_3_1; // @[DIstribution.scala 56:14]
  assign part2_io_mat_3_2 = io_matrix_3_2; // @[DIstribution.scala 56:14]
  assign part2_io_mat_3_3 = io_matrix_3_3; // @[DIstribution.scala 56:14]
  assign part3_clock = clock;
  assign part3_reset = reset;
  assign part3_io_PreMat_0_0 = part2_io_ProcessValid & check ? part2_io_OutMat_0_0 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_0_1 = part2_io_ProcessValid & check ? part2_io_OutMat_0_1 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_0_2 = part2_io_ProcessValid & check ? part2_io_OutMat_0_2 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_0_3 = part2_io_ProcessValid & check ? part2_io_OutMat_0_3 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_1_0 = part2_io_ProcessValid & check ? part2_io_OutMat_1_0 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_1_1 = part2_io_ProcessValid & check ? part2_io_OutMat_1_1 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_1_2 = part2_io_ProcessValid & check ? part2_io_OutMat_1_2 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_1_3 = part2_io_ProcessValid & check ? part2_io_OutMat_1_3 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_2_0 = part2_io_ProcessValid & check ? part2_io_OutMat_2_0 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_2_1 = part2_io_ProcessValid & check ? part2_io_OutMat_2_1 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_2_2 = part2_io_ProcessValid & check ? part2_io_OutMat_2_2 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_2_3 = part2_io_ProcessValid & check ? part2_io_OutMat_2_3 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_3_0 = part2_io_ProcessValid & check ? part2_io_OutMat_3_0 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_3_1 = part2_io_ProcessValid & check ? part2_io_OutMat_3_1 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_3_2 = part2_io_ProcessValid & check ? part2_io_OutMat_3_2 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_PreMat_3_3 = part2_io_ProcessValid & check ? part2_io_OutMat_3_3 : 32'h0; // @[DIstribution.scala 82:42 86:21 99:21]
  assign part3_io_IDex = part2_io_ProcessValid & check ? _GEN_85 : 32'h0; // @[DIstribution.scala 100:19 82:42 88:19]
  assign part3_io_mat_0_0 = part2_io_ProcessValid & check ? io_matrix_0_0 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_0_1 = part2_io_ProcessValid & check ? io_matrix_0_1 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_0_2 = part2_io_ProcessValid & check ? io_matrix_0_2 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_0_3 = part2_io_ProcessValid & check ? io_matrix_0_3 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_1_0 = part2_io_ProcessValid & check ? io_matrix_1_0 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_1_1 = part2_io_ProcessValid & check ? io_matrix_1_1 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_1_2 = part2_io_ProcessValid & check ? io_matrix_1_2 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_1_3 = part2_io_ProcessValid & check ? io_matrix_1_3 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_2_0 = part2_io_ProcessValid & check ? io_matrix_2_0 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_2_1 = part2_io_ProcessValid & check ? io_matrix_2_1 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_2_2 = part2_io_ProcessValid & check ? io_matrix_2_2 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_2_3 = part2_io_ProcessValid & check ? io_matrix_2_3 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_3_0 = part2_io_ProcessValid & check ? io_matrix_3_0 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_3_1 = part2_io_ProcessValid & check ? io_matrix_3_1 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_3_2 = part2_io_ProcessValid & check ? io_matrix_3_2 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_mat_3_3 = part2_io_ProcessValid & check ? io_matrix_3_3 : 32'h0; // @[DIstribution.scala 82:42 87:18 97:22]
  assign part3_io_i_valid = part2_io_ProcessValid & check & part2_io_ProcessValid; // @[DIstribution.scala 82:42 85:22 98:26]
  assign part3_io_merge = part2_io_ProcessValid & check & part3_io_merge_REG; // @[DIstribution.scala 82:42 83:20 96:24]
  always @(posedge clock) begin
    if (reset) begin // @[DIstribution.scala 19:20]
      i <= 32'h0; // @[DIstribution.scala 19:20]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (i < 32'h3 & _io_validIteration_T_1) begin // @[DIstribution.scala 113:69]
        i <= _i_T_1; // @[DIstribution.scala 114:11]
      end
    end
    if (reset) begin // @[DIstribution.scala 20:20]
      j <= 32'h0; // @[DIstribution.scala 20:20]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (i <= 32'h3 & j < 32'h3) begin // @[DIstribution.scala 117:68]
        j <= _j_T_1; // @[DIstribution.scala 118:11]
      end else if (!(_io_validIteration_T_2)) begin // @[DIstribution.scala 119:75]
        j <= 32'h0; // @[DIstribution.scala 122:11]
      end
    end
    if (reset) begin // @[DIstribution.scala 21:24]
      count <= 32'h0; // @[DIstribution.scala 21:24]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        count <= _count_T_1; // @[DIstribution.scala 48:15]
      end
    end
    if (reset) begin // @[DIstribution.scala 22:23]
      Idex_0 <= 32'h0; // @[DIstribution.scala 22:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Idex_0 <= _GEN_33;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Idex_0 <= _GEN_33;
      end
    end
    if (reset) begin // @[DIstribution.scala 22:23]
      Idex_1 <= 32'h0; // @[DIstribution.scala 22:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Idex_1 <= _GEN_34;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Idex_1 <= _GEN_34;
      end
    end
    if (reset) begin // @[DIstribution.scala 22:23]
      Idex_2 <= 32'h0; // @[DIstribution.scala 22:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Idex_2 <= _GEN_35;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Idex_2 <= _GEN_35;
      end
    end
    if (reset) begin // @[DIstribution.scala 22:23]
      Idex_3 <= 32'h0; // @[DIstribution.scala 22:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Idex_3 <= _GEN_36;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Idex_3 <= _GEN_36;
      end
    end
    if (reset) begin // @[DIstribution.scala 23:23]
      Jdex_0 <= 32'h0; // @[DIstribution.scala 23:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Jdex_0 <= _GEN_37;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Jdex_0 <= _GEN_37;
      end
    end
    if (reset) begin // @[DIstribution.scala 23:23]
      Jdex_1 <= 32'h0; // @[DIstribution.scala 23:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Jdex_1 <= _GEN_38;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Jdex_1 <= _GEN_38;
      end
    end
    if (reset) begin // @[DIstribution.scala 23:23]
      Jdex_2 <= 32'h0; // @[DIstribution.scala 23:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Jdex_2 <= _GEN_39;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Jdex_2 <= _GEN_39;
      end
    end
    if (reset) begin // @[DIstribution.scala 23:23]
      Jdex_3 <= 32'h0; // @[DIstribution.scala 23:23]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_T_2) begin // @[DIstribution.scala 47:38]
        Jdex_3 <= _GEN_40;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 51:106]
        Jdex_3 <= _GEN_40;
      end
    end
    if (reset) begin // @[DIstribution.scala 25:30]
      iterationNo <= 32'h0; // @[DIstribution.scala 25:30]
    end else if (io_valid) begin // @[DIstribution.scala 27:21]
      if (_GEN_15 == 32'h1) begin // @[DIstribution.scala 34:35]
        iterationNo <= _iterationNo_T_1; // @[DIstribution.scala 35:19]
      end
    end
    c <= _io_validIteration_T & _io_validIteration_T_1; // @[DIstribution.scala 57:48]
    part3_io_merge_REG <= c; // @[DIstribution.scala 83:30]
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
  i = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  j = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  count = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  Idex_0 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  Idex_1 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  Idex_2 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  Idex_3 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  Jdex_0 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  Jdex_1 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  Jdex_2 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  Jdex_3 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  iterationNo = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  c = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  part3_io_merge_REG = _RAND_13[0:0];
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
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  input  [15:0] io_Streaming_matrix_0,
  input  [15:0] io_Streaming_matrix_1,
  input  [15:0] io_Streaming_matrix_2,
  input  [15:0] io_Streaming_matrix_3,
  output [3:0]  io_i_mux_bus_0,
  output [3:0]  io_i_mux_bus_1,
  output [3:0]  io_i_mux_bus_2,
  output [3:0]  io_i_mux_bus_3,
  output [15:0] io_Source_0,
  output [15:0] io_Source_1,
  output [15:0] io_Source_2,
  output [15:0] io_Source_3,
  output [15:0] io_destination_0,
  output [15:0] io_destination_1,
  output [15:0] io_destination_2,
  output [15:0] io_destination_3,
  output        io_PF_Valid,
  input  [31:0] io_NoDPE,
  input         io_DataValid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  myMuxes_clock; // @[PathFinder.scala 26:23]
  wire  myMuxes_reset; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_0_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_0_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_0_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_0_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_1_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_1_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_1_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_1_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_2_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_2_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_2_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_2_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_3_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_3_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_3_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_3_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat2_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat2_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat2_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat2_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_2_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_2_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_2_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_2_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_3_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_3_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_3_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_3_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix2_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix2_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix2_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix2_3; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_0; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_1; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_2; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_destination_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_destination_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_destination_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_destination_3; // @[PathFinder.scala 26:23]
  wire  myMuxes_io_valid; // @[PathFinder.scala 26:23]
  wire  myCounter_clock; // @[PathFinder.scala 32:25]
  wire  myCounter_reset; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_2_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_2_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_2_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_2_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_3_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_3_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_3_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_3_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Streaming_matrix_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Streaming_matrix_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Streaming_matrix_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Streaming_matrix_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_2_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_2_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_2_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_2_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_3_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_3_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_3_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_3_3; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_2; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_3; // @[PathFinder.scala 32:25]
  wire  myCounter_io_valid; // @[PathFinder.scala 32:25]
  wire  myCounter_io_start; // @[PathFinder.scala 32:25]
  wire  Distribution_clock; // @[PathFinder.scala 37:28]
  wire  Distribution_reset; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_0_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_0_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_0_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_0_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_1_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_1_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_1_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_1_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_2_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_2_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_2_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_2_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_3_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_3_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_3_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_3_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_s; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_0_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_0_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_0_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_0_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_1_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_1_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_1_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_1_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_2_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_2_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_2_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_2_3; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_3_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_3_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_3_2; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_3_3; // @[PathFinder.scala 37:28]
  wire  Distribution_io_ProcessValid; // @[PathFinder.scala 37:28]
  wire  Distribution_io_valid; // @[PathFinder.scala 37:28]
  reg  myCounter_io_start_REG; // @[PathFinder.scala 33:32]
  wire [31:0] _GEN_21 = Distribution_io_ProcessValid ? Distribution_io_out_0_0 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_22 = Distribution_io_ProcessValid ? Distribution_io_out_0_1 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_23 = Distribution_io_ProcessValid ? Distribution_io_out_0_2 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_24 = Distribution_io_ProcessValid ? Distribution_io_out_0_3 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_25 = Distribution_io_ProcessValid ? Distribution_io_out_1_0 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_26 = Distribution_io_ProcessValid ? Distribution_io_out_1_1 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_27 = Distribution_io_ProcessValid ? Distribution_io_out_1_2 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_28 = Distribution_io_ProcessValid ? Distribution_io_out_1_3 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_29 = Distribution_io_ProcessValid ? Distribution_io_out_2_0 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_30 = Distribution_io_ProcessValid ? Distribution_io_out_2_1 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_31 = Distribution_io_ProcessValid ? Distribution_io_out_2_2 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_32 = Distribution_io_ProcessValid ? Distribution_io_out_2_3 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_33 = Distribution_io_ProcessValid ? Distribution_io_out_3_0 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_34 = Distribution_io_ProcessValid ? Distribution_io_out_3_1 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_35 = Distribution_io_ProcessValid ? Distribution_io_out_3_2 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_36 = Distribution_io_ProcessValid ? Distribution_io_out_3_3 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_44 = io_DataValid ? {{28'd0}, myMuxes_io_i_mux_bus_0} : 32'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  wire [31:0] _GEN_45 = io_DataValid ? {{28'd0}, myMuxes_io_i_mux_bus_1} : 32'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  wire [31:0] _GEN_46 = io_DataValid ? {{28'd0}, myMuxes_io_i_mux_bus_2} : 32'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  wire [31:0] _GEN_47 = io_DataValid ? {{28'd0}, myMuxes_io_i_mux_bus_3} : 32'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  wire [31:0] _GEN_60 = io_DataValid ? {{16'd0}, myMuxes_io_Source_0} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_61 = io_DataValid ? {{16'd0}, myMuxes_io_Source_1} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_62 = io_DataValid ? {{16'd0}, myMuxes_io_Source_2} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_63 = io_DataValid ? {{16'd0}, myMuxes_io_Source_3} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_76 = io_DataValid ? {{16'd0}, myMuxes_io_destination_0} : 32'h0; // @[PathFinder.scala 20:20 77:18 84:18]
  wire [31:0] _GEN_77 = io_DataValid ? {{16'd0}, myMuxes_io_destination_1} : 32'h0; // @[PathFinder.scala 20:20 77:18 84:18]
  wire [31:0] _GEN_78 = io_DataValid ? {{16'd0}, myMuxes_io_destination_2} : 32'h0; // @[PathFinder.scala 20:20 77:18 84:18]
  wire [31:0] _GEN_79 = io_DataValid ? {{16'd0}, myMuxes_io_destination_3} : 32'h0; // @[PathFinder.scala 20:20 77:18 84:18]
  Muxes myMuxes ( // @[PathFinder.scala 26:23]
    .clock(myMuxes_clock),
    .reset(myMuxes_reset),
    .io_mat1_0_0(myMuxes_io_mat1_0_0),
    .io_mat1_0_1(myMuxes_io_mat1_0_1),
    .io_mat1_0_2(myMuxes_io_mat1_0_2),
    .io_mat1_0_3(myMuxes_io_mat1_0_3),
    .io_mat1_1_0(myMuxes_io_mat1_1_0),
    .io_mat1_1_1(myMuxes_io_mat1_1_1),
    .io_mat1_1_2(myMuxes_io_mat1_1_2),
    .io_mat1_1_3(myMuxes_io_mat1_1_3),
    .io_mat1_2_0(myMuxes_io_mat1_2_0),
    .io_mat1_2_1(myMuxes_io_mat1_2_1),
    .io_mat1_2_2(myMuxes_io_mat1_2_2),
    .io_mat1_2_3(myMuxes_io_mat1_2_3),
    .io_mat1_3_0(myMuxes_io_mat1_3_0),
    .io_mat1_3_1(myMuxes_io_mat1_3_1),
    .io_mat1_3_2(myMuxes_io_mat1_3_2),
    .io_mat1_3_3(myMuxes_io_mat1_3_3),
    .io_mat2_0(myMuxes_io_mat2_0),
    .io_mat2_1(myMuxes_io_mat2_1),
    .io_mat2_2(myMuxes_io_mat2_2),
    .io_mat2_3(myMuxes_io_mat2_3),
    .io_counterMatrix1_0_0(myMuxes_io_counterMatrix1_0_0),
    .io_counterMatrix1_0_1(myMuxes_io_counterMatrix1_0_1),
    .io_counterMatrix1_0_2(myMuxes_io_counterMatrix1_0_2),
    .io_counterMatrix1_0_3(myMuxes_io_counterMatrix1_0_3),
    .io_counterMatrix1_1_0(myMuxes_io_counterMatrix1_1_0),
    .io_counterMatrix1_1_1(myMuxes_io_counterMatrix1_1_1),
    .io_counterMatrix1_1_2(myMuxes_io_counterMatrix1_1_2),
    .io_counterMatrix1_1_3(myMuxes_io_counterMatrix1_1_3),
    .io_counterMatrix1_2_0(myMuxes_io_counterMatrix1_2_0),
    .io_counterMatrix1_2_1(myMuxes_io_counterMatrix1_2_1),
    .io_counterMatrix1_2_2(myMuxes_io_counterMatrix1_2_2),
    .io_counterMatrix1_2_3(myMuxes_io_counterMatrix1_2_3),
    .io_counterMatrix1_3_0(myMuxes_io_counterMatrix1_3_0),
    .io_counterMatrix1_3_1(myMuxes_io_counterMatrix1_3_1),
    .io_counterMatrix1_3_2(myMuxes_io_counterMatrix1_3_2),
    .io_counterMatrix1_3_3(myMuxes_io_counterMatrix1_3_3),
    .io_counterMatrix2_0(myMuxes_io_counterMatrix2_0),
    .io_counterMatrix2_1(myMuxes_io_counterMatrix2_1),
    .io_counterMatrix2_2(myMuxes_io_counterMatrix2_2),
    .io_counterMatrix2_3(myMuxes_io_counterMatrix2_3),
    .io_i_mux_bus_0(myMuxes_io_i_mux_bus_0),
    .io_i_mux_bus_1(myMuxes_io_i_mux_bus_1),
    .io_i_mux_bus_2(myMuxes_io_i_mux_bus_2),
    .io_i_mux_bus_3(myMuxes_io_i_mux_bus_3),
    .io_Source_0(myMuxes_io_Source_0),
    .io_Source_1(myMuxes_io_Source_1),
    .io_Source_2(myMuxes_io_Source_2),
    .io_Source_3(myMuxes_io_Source_3),
    .io_destination_0(myMuxes_io_destination_0),
    .io_destination_1(myMuxes_io_destination_1),
    .io_destination_2(myMuxes_io_destination_2),
    .io_destination_3(myMuxes_io_destination_3),
    .io_valid(myMuxes_io_valid)
  );
  SourceDestination myCounter ( // @[PathFinder.scala 32:25]
    .clock(myCounter_clock),
    .reset(myCounter_reset),
    .io_Stationary_matrix_0_0(myCounter_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(myCounter_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(myCounter_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(myCounter_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(myCounter_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(myCounter_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(myCounter_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(myCounter_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(myCounter_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(myCounter_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(myCounter_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(myCounter_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(myCounter_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(myCounter_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(myCounter_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(myCounter_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(myCounter_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(myCounter_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(myCounter_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(myCounter_io_Streaming_matrix_3),
    .io_counterMatrix1_bits_0_0(myCounter_io_counterMatrix1_bits_0_0),
    .io_counterMatrix1_bits_0_1(myCounter_io_counterMatrix1_bits_0_1),
    .io_counterMatrix1_bits_0_2(myCounter_io_counterMatrix1_bits_0_2),
    .io_counterMatrix1_bits_0_3(myCounter_io_counterMatrix1_bits_0_3),
    .io_counterMatrix1_bits_1_0(myCounter_io_counterMatrix1_bits_1_0),
    .io_counterMatrix1_bits_1_1(myCounter_io_counterMatrix1_bits_1_1),
    .io_counterMatrix1_bits_1_2(myCounter_io_counterMatrix1_bits_1_2),
    .io_counterMatrix1_bits_1_3(myCounter_io_counterMatrix1_bits_1_3),
    .io_counterMatrix1_bits_2_0(myCounter_io_counterMatrix1_bits_2_0),
    .io_counterMatrix1_bits_2_1(myCounter_io_counterMatrix1_bits_2_1),
    .io_counterMatrix1_bits_2_2(myCounter_io_counterMatrix1_bits_2_2),
    .io_counterMatrix1_bits_2_3(myCounter_io_counterMatrix1_bits_2_3),
    .io_counterMatrix1_bits_3_0(myCounter_io_counterMatrix1_bits_3_0),
    .io_counterMatrix1_bits_3_1(myCounter_io_counterMatrix1_bits_3_1),
    .io_counterMatrix1_bits_3_2(myCounter_io_counterMatrix1_bits_3_2),
    .io_counterMatrix1_bits_3_3(myCounter_io_counterMatrix1_bits_3_3),
    .io_counterMatrix2_bits_0(myCounter_io_counterMatrix2_bits_0),
    .io_counterMatrix2_bits_1(myCounter_io_counterMatrix2_bits_1),
    .io_counterMatrix2_bits_2(myCounter_io_counterMatrix2_bits_2),
    .io_counterMatrix2_bits_3(myCounter_io_counterMatrix2_bits_3),
    .io_valid(myCounter_io_valid),
    .io_start(myCounter_io_start)
  );
  Distribution Distribution ( // @[PathFinder.scala 37:28]
    .clock(Distribution_clock),
    .reset(Distribution_reset),
    .io_matrix_0_0(Distribution_io_matrix_0_0),
    .io_matrix_0_1(Distribution_io_matrix_0_1),
    .io_matrix_0_2(Distribution_io_matrix_0_2),
    .io_matrix_0_3(Distribution_io_matrix_0_3),
    .io_matrix_1_0(Distribution_io_matrix_1_0),
    .io_matrix_1_1(Distribution_io_matrix_1_1),
    .io_matrix_1_2(Distribution_io_matrix_1_2),
    .io_matrix_1_3(Distribution_io_matrix_1_3),
    .io_matrix_2_0(Distribution_io_matrix_2_0),
    .io_matrix_2_1(Distribution_io_matrix_2_1),
    .io_matrix_2_2(Distribution_io_matrix_2_2),
    .io_matrix_2_3(Distribution_io_matrix_2_3),
    .io_matrix_3_0(Distribution_io_matrix_3_0),
    .io_matrix_3_1(Distribution_io_matrix_3_1),
    .io_matrix_3_2(Distribution_io_matrix_3_2),
    .io_matrix_3_3(Distribution_io_matrix_3_3),
    .io_s(Distribution_io_s),
    .io_out_0_0(Distribution_io_out_0_0),
    .io_out_0_1(Distribution_io_out_0_1),
    .io_out_0_2(Distribution_io_out_0_2),
    .io_out_0_3(Distribution_io_out_0_3),
    .io_out_1_0(Distribution_io_out_1_0),
    .io_out_1_1(Distribution_io_out_1_1),
    .io_out_1_2(Distribution_io_out_1_2),
    .io_out_1_3(Distribution_io_out_1_3),
    .io_out_2_0(Distribution_io_out_2_0),
    .io_out_2_1(Distribution_io_out_2_1),
    .io_out_2_2(Distribution_io_out_2_2),
    .io_out_2_3(Distribution_io_out_2_3),
    .io_out_3_0(Distribution_io_out_3_0),
    .io_out_3_1(Distribution_io_out_3_1),
    .io_out_3_2(Distribution_io_out_3_2),
    .io_out_3_3(Distribution_io_out_3_3),
    .io_ProcessValid(Distribution_io_ProcessValid),
    .io_valid(Distribution_io_valid)
  );
  assign io_i_mux_bus_0 = _GEN_44[3:0];
  assign io_i_mux_bus_1 = _GEN_45[3:0];
  assign io_i_mux_bus_2 = _GEN_46[3:0];
  assign io_i_mux_bus_3 = _GEN_47[3:0];
  assign io_Source_0 = _GEN_60[15:0];
  assign io_Source_1 = _GEN_61[15:0];
  assign io_Source_2 = _GEN_62[15:0];
  assign io_Source_3 = _GEN_63[15:0];
  assign io_destination_0 = _GEN_76[15:0];
  assign io_destination_1 = _GEN_77[15:0];
  assign io_destination_2 = _GEN_78[15:0];
  assign io_destination_3 = _GEN_79[15:0];
  assign io_PF_Valid = io_DataValid & myMuxes_io_valid; // @[PathFinder.scala 20:20 74:15 81:15]
  assign myMuxes_clock = clock;
  assign myMuxes_reset = reset;
  assign myMuxes_io_mat1_0_0 = Distribution_io_ProcessValid ? io_Stationary_matrix_0_0 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_0_1 = Distribution_io_ProcessValid ? io_Stationary_matrix_0_1 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_0_2 = Distribution_io_ProcessValid ? io_Stationary_matrix_0_2 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_0_3 = Distribution_io_ProcessValid ? io_Stationary_matrix_0_3 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_1_0 = Distribution_io_ProcessValid ? io_Stationary_matrix_1_0 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_1_1 = Distribution_io_ProcessValid ? io_Stationary_matrix_1_1 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_1_2 = Distribution_io_ProcessValid ? io_Stationary_matrix_1_2 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_1_3 = Distribution_io_ProcessValid ? io_Stationary_matrix_1_3 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_2_0 = Distribution_io_ProcessValid ? io_Stationary_matrix_2_0 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_2_1 = Distribution_io_ProcessValid ? io_Stationary_matrix_2_1 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_2_2 = Distribution_io_ProcessValid ? io_Stationary_matrix_2_2 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_2_3 = Distribution_io_ProcessValid ? io_Stationary_matrix_2_3 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_3_0 = Distribution_io_ProcessValid ? io_Stationary_matrix_3_0 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_3_1 = Distribution_io_ProcessValid ? io_Stationary_matrix_3_1 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_3_2 = Distribution_io_ProcessValid ? io_Stationary_matrix_3_2 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_3_3 = Distribution_io_ProcessValid ? io_Stationary_matrix_3_3 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat2_0 = Distribution_io_ProcessValid ? io_Streaming_matrix_0 : 16'h0; // @[PathFinder.scala 52:40 57:21 66:21]
  assign myMuxes_io_mat2_1 = Distribution_io_ProcessValid ? io_Streaming_matrix_1 : 16'h0; // @[PathFinder.scala 52:40 57:21 66:21]
  assign myMuxes_io_mat2_2 = Distribution_io_ProcessValid ? io_Streaming_matrix_2 : 16'h0; // @[PathFinder.scala 52:40 57:21 66:21]
  assign myMuxes_io_mat2_3 = Distribution_io_ProcessValid ? io_Streaming_matrix_3 : 16'h0; // @[PathFinder.scala 52:40 57:21 66:21]
  assign myMuxes_io_counterMatrix1_0_0 = _GEN_21[15:0];
  assign myMuxes_io_counterMatrix1_0_1 = _GEN_22[15:0];
  assign myMuxes_io_counterMatrix1_0_2 = _GEN_23[15:0];
  assign myMuxes_io_counterMatrix1_0_3 = _GEN_24[15:0];
  assign myMuxes_io_counterMatrix1_1_0 = _GEN_25[15:0];
  assign myMuxes_io_counterMatrix1_1_1 = _GEN_26[15:0];
  assign myMuxes_io_counterMatrix1_1_2 = _GEN_27[15:0];
  assign myMuxes_io_counterMatrix1_1_3 = _GEN_28[15:0];
  assign myMuxes_io_counterMatrix1_2_0 = _GEN_29[15:0];
  assign myMuxes_io_counterMatrix1_2_1 = _GEN_30[15:0];
  assign myMuxes_io_counterMatrix1_2_2 = _GEN_31[15:0];
  assign myMuxes_io_counterMatrix1_2_3 = _GEN_32[15:0];
  assign myMuxes_io_counterMatrix1_3_0 = _GEN_33[15:0];
  assign myMuxes_io_counterMatrix1_3_1 = _GEN_34[15:0];
  assign myMuxes_io_counterMatrix1_3_2 = _GEN_35[15:0];
  assign myMuxes_io_counterMatrix1_3_3 = _GEN_36[15:0];
  assign myMuxes_io_counterMatrix2_0 = Distribution_io_ProcessValid ? myCounter_io_counterMatrix2_bits_0 : 16'h0; // @[PathFinder.scala 52:40 59:31 68:31]
  assign myMuxes_io_counterMatrix2_1 = Distribution_io_ProcessValid ? myCounter_io_counterMatrix2_bits_1 : 16'h0; // @[PathFinder.scala 52:40 59:31 68:31]
  assign myMuxes_io_counterMatrix2_2 = Distribution_io_ProcessValid ? myCounter_io_counterMatrix2_bits_2 : 16'h0; // @[PathFinder.scala 52:40 59:31 68:31]
  assign myMuxes_io_counterMatrix2_3 = Distribution_io_ProcessValid ? myCounter_io_counterMatrix2_bits_3 : 16'h0; // @[PathFinder.scala 52:40 59:31 68:31]
  assign myCounter_clock = clock;
  assign myCounter_reset = reset;
  assign myCounter_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[PathFinder.scala 34:34]
  assign myCounter_io_Streaming_matrix_0 = io_Streaming_matrix_0; // @[PathFinder.scala 35:33]
  assign myCounter_io_Streaming_matrix_1 = io_Streaming_matrix_1; // @[PathFinder.scala 35:33]
  assign myCounter_io_Streaming_matrix_2 = io_Streaming_matrix_2; // @[PathFinder.scala 35:33]
  assign myCounter_io_Streaming_matrix_3 = io_Streaming_matrix_3; // @[PathFinder.scala 35:33]
  assign myCounter_io_start = myCounter_io_start_REG; // @[PathFinder.scala 33:22]
  assign Distribution_clock = clock;
  assign Distribution_reset = reset;
  assign Distribution_io_matrix_0_0 = {{16'd0}, myCounter_io_counterMatrix1_bits_0_0}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_0_1 = {{16'd0}, myCounter_io_counterMatrix1_bits_0_1}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_0_2 = {{16'd0}, myCounter_io_counterMatrix1_bits_0_2}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_0_3 = {{16'd0}, myCounter_io_counterMatrix1_bits_0_3}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_1_0 = {{16'd0}, myCounter_io_counterMatrix1_bits_1_0}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_1_1 = {{16'd0}, myCounter_io_counterMatrix1_bits_1_1}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_1_2 = {{16'd0}, myCounter_io_counterMatrix1_bits_1_2}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_1_3 = {{16'd0}, myCounter_io_counterMatrix1_bits_1_3}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_2_0 = {{16'd0}, myCounter_io_counterMatrix1_bits_2_0}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_2_1 = {{16'd0}, myCounter_io_counterMatrix1_bits_2_1}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_2_2 = {{16'd0}, myCounter_io_counterMatrix1_bits_2_2}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_2_3 = {{16'd0}, myCounter_io_counterMatrix1_bits_2_3}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_3_0 = {{16'd0}, myCounter_io_counterMatrix1_bits_3_0}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_3_1 = {{16'd0}, myCounter_io_counterMatrix1_bits_3_1}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_3_2 = {{16'd0}, myCounter_io_counterMatrix1_bits_3_2}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_3_3 = {{16'd0}, myCounter_io_counterMatrix1_bits_3_3}; // @[PathFinder.scala 43:26]
  assign Distribution_io_s = io_NoDPE; // @[PathFinder.scala 40:21]
  assign Distribution_io_valid = myCounter_io_valid; // @[PathFinder.scala 39:25]
  always @(posedge clock) begin
    myCounter_io_start_REG <= io_DataValid; // @[PathFinder.scala 33:32]
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
  myCounter_io_start_REG = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ivncontrol4(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [4:0]  io_o_vn_0,
  output [4:0]  io_o_vn_1,
  output [4:0]  io_o_vn_2,
  output [4:0]  io_o_vn_3
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
`endif // RANDOMIZE_REG_INIT
  reg [4:0] i_vn_0; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_1; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_2; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_3; // @[ivncontrol(4).scala 15:23]
  reg [31:0] rowcount_0; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_1; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_2; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_3; // @[ivncontrol(4).scala 19:27]
  reg [31:0] i; // @[ivncontrol(4).scala 31:20]
  reg [31:0] j; // @[ivncontrol(4).scala 32:20]
  reg [31:0] mat_0_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] count_0; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_1; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_2; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_3; // @[ivncontrol(4).scala 39:20]
  wire [15:0] _GEN_17 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_18 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_0_2 : _GEN_17; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_19 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_0_3 : _GEN_18; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_20 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_1_0 : _GEN_19; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_21 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_1_1 : _GEN_20; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_22 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_1_2 : _GEN_21; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_23 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_1_3 : _GEN_22; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_24 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_2_0 : _GEN_23; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_25 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_2_1 : _GEN_24; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_26 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_2_2 : _GEN_25; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_27 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_2_3 : _GEN_26; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_28 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_3_0 : _GEN_27; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_29 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_3_1 : _GEN_28; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_30 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_3_2 : _GEN_29; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_31 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_3_3 : _GEN_30; // @[ivncontrol(4).scala 44:{15,15}]
  wire [31:0] _mat_T_T_1 = {{16'd0}, _GEN_31}; // @[ivncontrol(4).scala 44:{15,15}]
  wire  _GEN_64 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire  valid1 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire [31:0] _GEN_49 = 2'h1 == i[1:0] ? count_1 : count_0; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_50 = 2'h2 == i[1:0] ? count_2 : _GEN_49; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_51 = 2'h3 == i[1:0] ? count_3 : _GEN_50; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _count_T_2 = _GEN_51 + 32'h1; // @[ivncontrol(4).scala 47:33]
  wire  _T_9 = j == 32'h3; // @[ivncontrol(4).scala 59:47]
  wire  _T_10 = i == 32'h3 & j == 32'h3; // @[ivncontrol(4).scala 59:41]
  wire  _T_12 = io_Stationary_matrix_1_0 != 16'h0; // @[ivncontrol(4).scala 71:46]
  wire  _T_14 = io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0; // @[ivncontrol(4).scala 71:54]
  wire  _T_15 = io_Stationary_matrix_1_2 == 16'h0; // @[ivncontrol(4).scala 71:122]
  wire  _T_17 = io_Stationary_matrix_1_1 != 16'h0; // @[ivncontrol(4).scala 71:162]
  wire  _T_18 = io_Stationary_matrix_1_0 == 16'h0; // @[ivncontrol(4).scala 71:200]
  wire  _T_23 = io_Stationary_matrix_1_2 != 16'h0; // @[ivncontrol(4).scala 71:276]
  wire [31:0] _rowcount_1_T_1 = count_1 - 32'h2; // @[ivncontrol(4).scala 72:41]
  wire  _T_31 = _T_12 & _T_17; // @[ivncontrol(4).scala 73:60]
  wire [31:0] _rowcount_1_T_3 = count_1 - 32'h1; // @[ivncontrol(4).scala 74:41]
  wire [31:0] _rowcount_1_T_5 = count_1 - 32'h3; // @[ivncontrol(4).scala 76:41]
  wire [31:0] _GEN_69 = _T_31 & _T_15 | _T_14 & _T_23 | _T_18 & _T_17 & _T_23 ? _rowcount_1_T_5 : count_1; // @[ivncontrol(4).scala 66:21 75:371 76:29]
  wire [31:0] _GEN_70 = _T_12 & _T_17 | _T_12 & _T_23 | _T_17 & _T_23 ? _rowcount_1_T_3 : _GEN_69; // @[ivncontrol(4).scala 73:256 74:29]
  wire [31:0] _i_T_1 = i + 32'h1; // @[ivncontrol(4).scala 88:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[ivncontrol(4).scala 92:16]
  wire  _GEN_78 = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  valid = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  _T_118 = rowcount_1 == 32'h2; // @[ivncontrol(4).scala 134:34]
  wire  _T_119 = rowcount_1 == 32'h1; // @[ivncontrol(4).scala 137:39]
  wire [4:0] _GEN_79 = rowcount_1 > 32'h2 ? 5'h1 : 5'h5; // @[ivncontrol(4).scala 108:17 139:46 140:29]
  wire [4:0] _GEN_80 = rowcount_1 > 32'h2 ? 5'h1 : 5'h16; // @[ivncontrol(4).scala 108:17 139:46 141:29]
  wire [4:0] _GEN_81 = rowcount_1 == 32'h1 ? 5'h1 : _GEN_79; // @[ivncontrol(4).scala 137:46 138:29]
  wire [4:0] _GEN_82 = rowcount_1 == 32'h1 ? 5'h16 : _GEN_80; // @[ivncontrol(4).scala 108:17 137:46]
  wire  _T_122 = rowcount_1 == 32'h3; // @[ivncontrol(4).scala 147:33]
  wire [4:0] _GEN_85 = rowcount_1 > 32'h3 ? 5'h1 : 5'ha; // @[ivncontrol(4).scala 108:17 158:44 159:30]
  wire [4:0] _GEN_86 = rowcount_1 > 32'h3 ? 5'h1 : 5'h5; // @[ivncontrol(4).scala 108:17 158:44 160:29]
  wire [4:0] _GEN_87 = rowcount_1 > 32'h3 ? 5'h1 : 5'h16; // @[ivncontrol(4).scala 108:17 158:44 161:29]
  wire [4:0] _GEN_88 = _T_119 ? 5'h1 : _GEN_85; // @[ivncontrol(4).scala 155:46 156:31]
  wire [4:0] _GEN_89 = _T_119 ? 5'h5 : _GEN_86; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_90 = _T_119 ? 5'h16 : _GEN_87; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_91 = _T_118 ? 5'h1 : _GEN_88; // @[ivncontrol(4).scala 151:46 152:29]
  wire [4:0] _GEN_92 = _T_118 ? 5'h1 : _GEN_89; // @[ivncontrol(4).scala 151:46 153:29]
  wire [4:0] _GEN_93 = _T_118 ? 5'h16 : _GEN_90; // @[ivncontrol(4).scala 108:17 151:46]
  wire [4:0] _GEN_94 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_91; // @[ivncontrol(4).scala 147:40 148:29]
  wire [4:0] _GEN_95 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_92; // @[ivncontrol(4).scala 147:40 149:29]
  wire [4:0] _GEN_96 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_93; // @[ivncontrol(4).scala 147:40 150:29]
  wire [4:0] _GEN_97 = _T_119 ? 5'h1 : 5'h16; // @[ivncontrol(4).scala 108:17 171:42 172:29]
  wire [4:0] _GEN_98 = _T_119 ? 5'h1 : 5'h9; // @[ivncontrol(4).scala 108:17 188:46 189:29]
  wire [4:0] _GEN_99 = _T_118 ? 5'h1 : _GEN_98; // @[ivncontrol(4).scala 185:46 186:29]
  wire [4:0] _GEN_100 = _T_118 ? 5'h1 : 5'ha; // @[ivncontrol(4).scala 108:17 185:46 187:29]
  wire [4:0] _GEN_101 = _T_122 ? 5'h1 : _GEN_99; // @[ivncontrol(4).scala 181:46 182:29]
  wire [4:0] _GEN_102 = _T_122 ? 5'h1 : _GEN_100; // @[ivncontrol(4).scala 181:46 183:29]
  wire [4:0] _GEN_103 = _T_122 ? 5'h1 : 5'h5; // @[ivncontrol(4).scala 108:17 181:46 184:29]
  wire [4:0] _GEN_104 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_101; // @[ivncontrol(4).scala 176:41 177:29]
  wire [4:0] _GEN_105 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_102; // @[ivncontrol(4).scala 176:41 178:29]
  wire [4:0] _GEN_106 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_103; // @[ivncontrol(4).scala 176:41 179:29]
  wire [4:0] _GEN_107 = rowcount_1 == 32'h4 ? 5'h1 : 5'h16; // @[ivncontrol(4).scala 108:17 176:41 180:29]
  wire [4:0] _GEN_108 = rowcount_0 == 32'h4 ? 5'h0 : 5'h9; // @[ivncontrol(4).scala 108:17 191:42 192:25]
  wire [4:0] _GEN_109 = rowcount_0 == 32'h4 ? 5'h0 : 5'ha; // @[ivncontrol(4).scala 108:17 191:42 193:25]
  wire [4:0] _GEN_110 = rowcount_0 == 32'h4 ? 5'h0 : 5'h5; // @[ivncontrol(4).scala 108:17 191:42 194:25]
  wire [4:0] _GEN_111 = rowcount_0 == 32'h4 ? 5'h0 : 5'h16; // @[ivncontrol(4).scala 108:17 191:42 195:25]
  wire [4:0] _GEN_112 = rowcount_0 == 32'h0 ? _GEN_104 : _GEN_108; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_113 = rowcount_0 == 32'h0 ? _GEN_105 : _GEN_109; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_114 = rowcount_0 == 32'h0 ? _GEN_106 : _GEN_110; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_115 = rowcount_0 == 32'h0 ? _GEN_107 : _GEN_111; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_116 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_112; // @[ivncontrol(4).scala 167:43 168:25]
  wire [4:0] _GEN_117 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_113; // @[ivncontrol(4).scala 167:43 169:25]
  wire [4:0] _GEN_118 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_114; // @[ivncontrol(4).scala 167:43 170:25]
  wire [4:0] _GEN_119 = rowcount_0 == 32'h3 ? _GEN_97 : _GEN_115; // @[ivncontrol(4).scala 167:43]
  assign io_o_vn_0 = i_vn_0; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_1 = i_vn_1; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_2 = i_vn_2; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_3 = i_vn_3; // @[ivncontrol(4).scala 105:13]
  always @(posedge clock) begin
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 132:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 146:25]
      end else begin
        i_vn_0 <= _GEN_116;
      end
    end else begin
      i_vn_0 <= 5'h9; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 133:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_1 <= _GEN_94;
      end else begin
        i_vn_1 <= _GEN_117;
      end
    end else begin
      i_vn_1 <= 5'ha; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_2 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_2 <= 5'h1; // @[ivncontrol(4).scala 135:29]
        end else begin
          i_vn_2 <= _GEN_81;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_2 <= _GEN_95;
      end else begin
        i_vn_2 <= _GEN_118;
      end
    end else begin
      i_vn_2 <= 5'h5; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_3 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_3 <= 5'h1; // @[ivncontrol(4).scala 136:29]
        end else begin
          i_vn_3 <= _GEN_82;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_3 <= _GEN_96;
      end else begin
        i_vn_3 <= _GEN_119;
      end
    end else begin
      i_vn_3 <= 5'h16; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_0 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      rowcount_0 <= count_0; // @[ivncontrol(4).scala 66:21]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_1 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      if (io_Stationary_matrix_1_3 != 16'h0) begin // @[ivncontrol(4).scala 67:49]
        if (io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_1 != 16'h0 & io_Stationary_matrix_1_0 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_2 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_0 == 16'h0
          ) begin // @[ivncontrol(4).scala 71:361]
          rowcount_1 <= _rowcount_1_T_1; // @[ivncontrol(4).scala 72:29]
        end else begin
          rowcount_1 <= _GEN_70;
        end
      end else begin
        rowcount_1 <= count_1; // @[ivncontrol(4).scala 66:21]
      end
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_2 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_3 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 31:20]
      i <= 32'h0; // @[ivncontrol(4).scala 31:20]
    end else if (i < 32'h3 & _T_9) begin // @[ivncontrol(4).scala 87:74]
      i <= _i_T_1; // @[ivncontrol(4).scala 88:11]
    end
    if (reset) begin // @[ivncontrol(4).scala 32:20]
      j <= 32'h0; // @[ivncontrol(4).scala 32:20]
    end else if (j < 32'h3 & i <= 32'h3) begin // @[ivncontrol(4).scala 91:71]
      j <= _j_T_1; // @[ivncontrol(4).scala 92:11]
    end else if (!(_T_10)) begin // @[ivncontrol(4).scala 94:81]
      j <= 32'h0; // @[ivncontrol(4).scala 98:11]
    end
    if (2'h0 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h0 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_0 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h1 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_1 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h2 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_2 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h3 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_3 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
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
  i_vn_0 = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  i_vn_1 = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  i_vn_2 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  i_vn_3 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  rowcount_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  rowcount_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  rowcount_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  rowcount_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  i = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  j = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  mat_0_0 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  mat_0_1 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  mat_0_2 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  mat_0_3 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  mat_1_0 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  mat_1_1 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  mat_1_2 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  mat_1_3 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  mat_2_0 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  mat_2_1 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  mat_2_2 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  mat_2_3 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  mat_3_0 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  mat_3_1 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  mat_3_2 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  mat_3_3 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  count_0 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  count_1 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  count_2 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  count_3 = _RAND_29[31:0];
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
  input  [4:0] io_i_vn_0,
  input  [4:0] io_i_vn_1,
  input  [4:0] io_i_vn_2,
  input  [4:0] io_i_vn_3,
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
      w_vn_0 <= io_i_vn_0; // @[FanCtrl.scala 37:10]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_1 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_1 <= io_i_vn_1; // @[FanCtrl.scala 37:10]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_2 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_2 <= io_i_vn_2; // @[FanCtrl.scala 37:10]
    end
    if (reset) begin // @[FanCtrl.scala 34:23]
      w_vn_3 <= 5'h0; // @[FanCtrl.scala 34:23]
    end else begin
      w_vn_3 <= io_i_vn_3; // @[FanCtrl.scala 37:10]
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
  wire  _T_2 = io_i_data_bus2_1 == io_i_data_bus2_0; // @[Benes.scala 60:36]
  wire [1:0] _GEN_4 = 2'h0 % 2'h2; // @[Benes.scala 24:52]
  wire  parsedindexvalue_first_stage = io_i_mux_bus_1[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray__0 = io_i_mux_bus_1[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray__1 = io_i_mux_bus_1[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_9 = {{2'd0}, parsedindexvalue_first_stage}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_14 = _GEN_9 % 3'h4; // @[Benes.scala 33:40]
  wire  parsedindexvalue_calculation = _GEN_14[0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T = ~parsedindexvalue_calculation; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_1 = ~parsedindexvalue_boolArray__0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_2 = ~parsedindexvalue_calculation & ~parsedindexvalue_boolArray__0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_5 = parsedindexvalue_calculation & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 36:36]
  wire [1:0] _GEN_88 = {{1'd0}, parsedindexvalue_calculation}; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_6 = _GEN_88 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_8 = _GEN_88 == 2'h2 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_9 = _GEN_88 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_11 = _GEN_88 == 2'h3 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_14 = _parsedindexvalue_nextIndex_T & parsedindexvalue_boolArray__0; // @[Benes.scala 39:36]
  wire [1:0] _GEN_90 = {{1'd0}, parsedindexvalue_first_stage}; // @[Benes.scala 39:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_16 = _GEN_90 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_19 = parsedindexvalue_calculation & parsedindexvalue_boolArray__0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_24 = _parsedindexvalue_nextIndex_T_6 & parsedindexvalue_boolArray__0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_26 = _GEN_90 - 2'h2; // @[Benes.scala 41:76]
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
  wire [2:0] _GEN_20 = {{1'd0}, parsedindexvalue_nextIndex}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_25 = _GEN_20 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_1 = _GEN_25[1:0]; // @[Benes.scala 33:40]
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
  wire [1:0] parsedindexvalue = io_i_mux_bus_1[3] ? _parsedindexvalue_third_stage_T_7 : parsedindexvalue_nextIndex_1; // @[Benes.scala 48:24]
  wire [2:0] _T_3 = {{1'd0}, parsedindexvalue};
  wire [15:0] _GEN_0 = 3'h0 == _T_3 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_1 = 3'h1 == _T_3 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_2 = 3'h2 == _T_3 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_3 = 3'h3 == _T_3 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 63:{47,47}]
  wire  parsedindexvalue_first_stage_1 = io_i_mux_bus_1[0] ? 1'h0 : 1'h1; // @[Benes.scala 24:26]
  wire [2:0] _GEN_30 = {{2'd0}, parsedindexvalue_first_stage_1}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_35 = _GEN_30 % 3'h4; // @[Benes.scala 33:40]
  wire  parsedindexvalue_calculation_2 = _GEN_35[0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_78 = ~parsedindexvalue_calculation_2; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_80 = ~parsedindexvalue_calculation_2 & ~parsedindexvalue_boolArray__0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_83 = parsedindexvalue_calculation_2 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 36:36]
  wire [1:0] _GEN_96 = {{1'd0}, parsedindexvalue_calculation_2}; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_84 = _GEN_96 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_86 = _GEN_96 == 2'h2 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_87 = _GEN_96 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_89 = _GEN_96 == 2'h3 & _parsedindexvalue_nextIndex_T_1; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_92 = _parsedindexvalue_nextIndex_T_78 & parsedindexvalue_boolArray__0; // @[Benes.scala 39:36]
  wire [1:0] _GEN_98 = {{1'd0}, parsedindexvalue_first_stage_1}; // @[Benes.scala 39:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_94 = _GEN_98 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_97 = parsedindexvalue_calculation_2 & parsedindexvalue_boolArray__0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_102 = _parsedindexvalue_nextIndex_T_84 & parsedindexvalue_boolArray__0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_104 = _GEN_98 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_107 = _parsedindexvalue_nextIndex_T_87 & parsedindexvalue_boolArray__0; // @[Benes.scala 42:36]
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
  wire [2:0] _GEN_40 = {{1'd0}, parsedindexvalue_nextIndex_2}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_46 = _GEN_40 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_3 = _GEN_46[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_117 = parsedindexvalue_calculation_3 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_119 = parsedindexvalue_calculation_3 == 2'h0 & ~parsedindexvalue_boolArray__1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_120 = parsedindexvalue_calculation_3 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_122 = parsedindexvalue_calculation_3 == 2'h1 & _parsedindexvalue_nextIndex_T_40; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_123 = parsedindexvalue_calculation_3 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_125 = parsedindexvalue_calculation_3 == 2'h2 & _parsedindexvalue_nextIndex_T_40; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_126 = parsedindexvalue_calculation_3 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_128 = parsedindexvalue_calculation_3 == 2'h3 & _parsedindexvalue_nextIndex_T_40; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_131 = _parsedindexvalue_nextIndex_T_117 & parsedindexvalue_boolArray__1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_133 = parsedindexvalue_nextIndex_2 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_136 = _parsedindexvalue_nextIndex_T_120 & parsedindexvalue_boolArray__1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_141 = _parsedindexvalue_nextIndex_T_123 & parsedindexvalue_boolArray__1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_143 = parsedindexvalue_nextIndex_2 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_146 = _parsedindexvalue_nextIndex_T_126 & parsedindexvalue_boolArray__1; // @[Benes.scala 42:36]
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
  wire [2:0] _T_5 = {{1'd0}, parsedindexvalue_1};
  wire [15:0] _GEN_5 = 3'h0 == _T_5 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_6 = 3'h1 == _T_5 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_7 = 3'h2 == _T_5 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_8 = 3'h3 == _T_5 ? io_i_data_bus2_1 : 16'h0; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_10 = io_i_data_bus2_1 == io_i_data_bus2_0 ? _GEN_0 : _GEN_5; // @[Benes.scala 60:61]
  wire [15:0] _GEN_11 = io_i_data_bus2_1 == io_i_data_bus2_0 ? _GEN_1 : _GEN_6; // @[Benes.scala 60:61]
  wire [15:0] _GEN_12 = io_i_data_bus2_1 == io_i_data_bus2_0 ? _GEN_2 : _GEN_7; // @[Benes.scala 60:61]
  wire [15:0] _GEN_13 = io_i_data_bus2_1 == io_i_data_bus2_0 ? _GEN_3 : _GEN_8; // @[Benes.scala 60:61]
  wire [15:0] _GEN_15 = _T_2 ? 16'h0 : io_i_data_bus2_1; // @[Benes.scala 72:60 74:28 78:28]
  wire [15:0] _GEN_16 = |io_i_mux_bus_1 ? _GEN_10 : 16'h0; // @[Benes.scala 58:35]
  wire [15:0] _GEN_17 = |io_i_mux_bus_1 ? _GEN_11 : _GEN_15; // @[Benes.scala 58:35]
  wire [15:0] _GEN_18 = |io_i_mux_bus_1 ? _GEN_12 : 16'h0; // @[Benes.scala 58:35]
  wire [15:0] _GEN_19 = |io_i_mux_bus_1 ? _GEN_13 : 16'h0; // @[Benes.scala 58:35]
  wire [15:0] _GEN_21 = io_i_data_bus2_1 != 16'h0 ? _GEN_16 : 16'h0; // @[Benes.scala 56:39]
  wire [15:0] _GEN_22 = io_i_data_bus2_1 != 16'h0 ? _GEN_17 : 16'h0; // @[Benes.scala 56:39]
  wire [15:0] _GEN_23 = io_i_data_bus2_1 != 16'h0 ? _GEN_18 : 16'h0; // @[Benes.scala 56:39]
  wire [15:0] _GEN_24 = io_i_data_bus2_1 != 16'h0 ? _GEN_19 : 16'h0; // @[Benes.scala 56:39]
  wire  _T_10 = io_i_data_bus2_2 == io_i_data_bus2_1; // @[Benes.scala 60:36]
  wire [1:0] _parsedindexvalue_T_5 = 2'h2 - 2'h1; // @[Benes.scala 62:97]
  wire [1:0] _parsedindexvalue_first_stage_T_17 = _parsedindexvalue_T_5 % 2'h2; // @[Benes.scala 24:52]
  wire [1:0] _parsedindexvalue_first_stage_T_20 = _parsedindexvalue_T_5 + 2'h1; // @[Benes.scala 24:78]
  wire [1:0] _parsedindexvalue_first_stage_T_22 = _parsedindexvalue_T_5 - 2'h1; // @[Benes.scala 24:96]
  wire [1:0] _parsedindexvalue_first_stage_T_23 = _parsedindexvalue_first_stage_T_17 == 2'h0 ?
    _parsedindexvalue_first_stage_T_20 : _parsedindexvalue_first_stage_T_22; // @[Benes.scala 24:40]
  wire [1:0] parsedindexvalue_first_stage_2 = io_i_mux_bus_2[0] ? _parsedindexvalue_first_stage_T_23 :
    _parsedindexvalue_T_5; // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray_2_0 = io_i_mux_bus_2[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray_2_1 = io_i_mux_bus_2[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_51 = {{1'd0}, parsedindexvalue_first_stage_2}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_56 = _GEN_51 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_4 = _GEN_56[1:0]; // @[Benes.scala 33:40]
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
  wire [2:0] _GEN_61 = {{1'd0}, parsedindexvalue_nextIndex_4}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_66 = _GEN_61 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_5 = _GEN_66[1:0]; // @[Benes.scala 33:40]
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
  wire [2:0] _T_11 = {{1'd0}, parsedindexvalue_2};
  wire [15:0] _GEN_26 = 3'h0 == _T_11 ? io_i_data_bus2_2 : _GEN_21; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_27 = 3'h1 == _T_11 ? io_i_data_bus2_2 : _GEN_22; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_28 = 3'h2 == _T_11 ? io_i_data_bus2_2 : _GEN_23; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_29 = 3'h3 == _T_11 ? io_i_data_bus2_2 : _GEN_24; // @[Benes.scala 63:{47,47}]
  wire [1:0] parsedindexvalue_first_stage_3 = io_i_mux_bus_2[0] ? 2'h3 : 2'h2; // @[Benes.scala 24:26]
  wire [2:0] _GEN_72 = {{1'd0}, parsedindexvalue_first_stage_3}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_77 = _GEN_72 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_6 = _GEN_77[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_234 = parsedindexvalue_calculation_6 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_236 = parsedindexvalue_calculation_6 == 2'h0 & ~parsedindexvalue_boolArray_2_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_237 = parsedindexvalue_calculation_6 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_239 = parsedindexvalue_calculation_6 == 2'h1 & _parsedindexvalue_nextIndex_T_157; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_240 = parsedindexvalue_calculation_6 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_242 = parsedindexvalue_calculation_6 == 2'h2 & _parsedindexvalue_nextIndex_T_157; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_243 = parsedindexvalue_calculation_6 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_245 = parsedindexvalue_calculation_6 == 2'h3 & _parsedindexvalue_nextIndex_T_157; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_248 = _parsedindexvalue_nextIndex_T_234 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_250 = parsedindexvalue_first_stage_3 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_253 = _parsedindexvalue_nextIndex_T_237 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_258 = _parsedindexvalue_nextIndex_T_240 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_260 = parsedindexvalue_first_stage_3 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_263 = _parsedindexvalue_nextIndex_T_243 & parsedindexvalue_boolArray_2_0; // @[Benes.scala 42:36]
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
  wire [2:0] _GEN_82 = {{1'd0}, parsedindexvalue_nextIndex_6}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_83 = _GEN_82 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_7 = _GEN_83[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_273 = parsedindexvalue_calculation_7 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_275 = parsedindexvalue_calculation_7 == 2'h0 & ~parsedindexvalue_boolArray_2_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_276 = parsedindexvalue_calculation_7 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_278 = parsedindexvalue_calculation_7 == 2'h1 & _parsedindexvalue_nextIndex_T_196; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_279 = parsedindexvalue_calculation_7 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_281 = parsedindexvalue_calculation_7 == 2'h2 & _parsedindexvalue_nextIndex_T_196; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_282 = parsedindexvalue_calculation_7 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_284 = parsedindexvalue_calculation_7 == 2'h3 & _parsedindexvalue_nextIndex_T_196; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_287 = _parsedindexvalue_nextIndex_T_273 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_289 = parsedindexvalue_nextIndex_6 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_292 = _parsedindexvalue_nextIndex_T_276 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_297 = _parsedindexvalue_nextIndex_T_279 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_299 = parsedindexvalue_nextIndex_6 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_302 = _parsedindexvalue_nextIndex_T_282 & parsedindexvalue_boolArray_2_1; // @[Benes.scala 42:36]
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
  wire [1:0] parsedindexvalue_3 = io_i_mux_bus_2[3] ? _parsedindexvalue_third_stage_T_31 : parsedindexvalue_nextIndex_7; // @[Benes.scala 48:24]
  wire [2:0] _T_13 = {{1'd0}, parsedindexvalue_3};
  wire [15:0] _GEN_31 = 3'h0 == _T_13 ? io_i_data_bus2_2 : _GEN_21; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_32 = 3'h1 == _T_13 ? io_i_data_bus2_2 : _GEN_22; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_33 = 3'h2 == _T_13 ? io_i_data_bus2_2 : _GEN_23; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_34 = 3'h3 == _T_13 ? io_i_data_bus2_2 : _GEN_24; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_36 = io_i_data_bus2_2 == io_i_data_bus2_1 ? _GEN_26 : _GEN_31; // @[Benes.scala 60:61]
  wire [15:0] _GEN_37 = io_i_data_bus2_2 == io_i_data_bus2_1 ? _GEN_27 : _GEN_32; // @[Benes.scala 60:61]
  wire [15:0] _GEN_38 = io_i_data_bus2_2 == io_i_data_bus2_1 ? _GEN_28 : _GEN_33; // @[Benes.scala 60:61]
  wire [15:0] _GEN_39 = io_i_data_bus2_2 == io_i_data_bus2_1 ? _GEN_29 : _GEN_34; // @[Benes.scala 60:61]
  wire [15:0] _GEN_41 = _T_10 ? 16'h0 : io_i_data_bus2_2; // @[Benes.scala 72:60 74:28 78:28]
  wire [15:0] _GEN_42 = |io_i_mux_bus_2 ? _GEN_36 : _GEN_21; // @[Benes.scala 58:35]
  wire [15:0] _GEN_43 = |io_i_mux_bus_2 ? _GEN_37 : _GEN_22; // @[Benes.scala 58:35]
  wire [15:0] _GEN_44 = |io_i_mux_bus_2 ? _GEN_38 : _GEN_41; // @[Benes.scala 58:35]
  wire [15:0] _GEN_45 = |io_i_mux_bus_2 ? _GEN_39 : _GEN_24; // @[Benes.scala 58:35]
  wire [15:0] _GEN_47 = io_i_data_bus2_2 != 16'h0 ? _GEN_42 : _GEN_21; // @[Benes.scala 56:39]
  wire [15:0] _GEN_48 = io_i_data_bus2_2 != 16'h0 ? _GEN_43 : _GEN_22; // @[Benes.scala 56:39]
  wire [15:0] _GEN_49 = io_i_data_bus2_2 != 16'h0 ? _GEN_44 : _GEN_23; // @[Benes.scala 56:39]
  wire [15:0] _GEN_50 = io_i_data_bus2_2 != 16'h0 ? _GEN_45 : _GEN_24; // @[Benes.scala 56:39]
  wire  _T_18 = io_i_data_bus2_3 == io_i_data_bus2_2; // @[Benes.scala 60:36]
  wire [1:0] _parsedindexvalue_T_9 = 2'h3 - 2'h1; // @[Benes.scala 62:97]
  wire [1:0] _parsedindexvalue_first_stage_T_33 = _parsedindexvalue_T_9 % 2'h2; // @[Benes.scala 24:52]
  wire [1:0] _parsedindexvalue_first_stage_T_36 = _parsedindexvalue_T_9 + 2'h1; // @[Benes.scala 24:78]
  wire [1:0] _parsedindexvalue_first_stage_T_38 = _parsedindexvalue_T_9 - 2'h1; // @[Benes.scala 24:96]
  wire [1:0] _parsedindexvalue_first_stage_T_39 = _parsedindexvalue_first_stage_T_33 == 2'h0 ?
    _parsedindexvalue_first_stage_T_36 : _parsedindexvalue_first_stage_T_38; // @[Benes.scala 24:40]
  wire [1:0] parsedindexvalue_first_stage_4 = io_i_mux_bus_3[0] ? _parsedindexvalue_first_stage_T_39 :
    _parsedindexvalue_T_9; // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray_4_0 = io_i_mux_bus_3[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray_4_1 = io_i_mux_bus_3[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_84 = {{1'd0}, parsedindexvalue_first_stage_4}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_85 = _GEN_84 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_8 = _GEN_85[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_312 = parsedindexvalue_calculation_8 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_313 = ~parsedindexvalue_boolArray_4_0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_314 = parsedindexvalue_calculation_8 == 2'h0 & ~parsedindexvalue_boolArray_4_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_315 = parsedindexvalue_calculation_8 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_317 = parsedindexvalue_calculation_8 == 2'h1 & _parsedindexvalue_nextIndex_T_313; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_318 = parsedindexvalue_calculation_8 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_320 = parsedindexvalue_calculation_8 == 2'h2 & _parsedindexvalue_nextIndex_T_313; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_321 = parsedindexvalue_calculation_8 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_323 = parsedindexvalue_calculation_8 == 2'h3 & _parsedindexvalue_nextIndex_T_313; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_326 = _parsedindexvalue_nextIndex_T_312 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_328 = parsedindexvalue_first_stage_4 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_331 = _parsedindexvalue_nextIndex_T_315 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_336 = _parsedindexvalue_nextIndex_T_318 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_338 = parsedindexvalue_first_stage_4 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_341 = _parsedindexvalue_nextIndex_T_321 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 42:36]
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
  wire [2:0] _GEN_86 = {{1'd0}, parsedindexvalue_nextIndex_8}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_87 = _GEN_86 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_9 = _GEN_87[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_351 = parsedindexvalue_calculation_9 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_352 = ~parsedindexvalue_boolArray_4_1; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_353 = parsedindexvalue_calculation_9 == 2'h0 & ~parsedindexvalue_boolArray_4_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_354 = parsedindexvalue_calculation_9 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_356 = parsedindexvalue_calculation_9 == 2'h1 & _parsedindexvalue_nextIndex_T_352; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_357 = parsedindexvalue_calculation_9 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_359 = parsedindexvalue_calculation_9 == 2'h2 & _parsedindexvalue_nextIndex_T_352; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_360 = parsedindexvalue_calculation_9 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_362 = parsedindexvalue_calculation_9 == 2'h3 & _parsedindexvalue_nextIndex_T_352; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_365 = _parsedindexvalue_nextIndex_T_351 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_367 = parsedindexvalue_nextIndex_8 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_370 = _parsedindexvalue_nextIndex_T_354 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_375 = _parsedindexvalue_nextIndex_T_357 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_377 = parsedindexvalue_nextIndex_8 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_380 = _parsedindexvalue_nextIndex_T_360 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 42:36]
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
  wire [1:0] _parsedindexvalue_third_stage_T_33 = parsedindexvalue_nextIndex_9 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_36 = parsedindexvalue_nextIndex_9 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_38 = parsedindexvalue_nextIndex_9 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_39 = _parsedindexvalue_third_stage_T_33 == 2'h0 ?
    _parsedindexvalue_third_stage_T_36 : _parsedindexvalue_third_stage_T_38; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue_4 = io_i_mux_bus_3[3] ? _parsedindexvalue_third_stage_T_39 : parsedindexvalue_nextIndex_9; // @[Benes.scala 48:24]
  wire [2:0] _T_19 = {{1'd0}, parsedindexvalue_4};
  wire [15:0] _GEN_52 = 3'h0 == _T_19 ? io_i_data_bus2_3 : _GEN_47; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_53 = 3'h1 == _T_19 ? io_i_data_bus2_3 : _GEN_48; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_54 = 3'h2 == _T_19 ? io_i_data_bus2_3 : _GEN_49; // @[Benes.scala 63:{47,47}]
  wire [15:0] _GEN_55 = 3'h3 == _T_19 ? io_i_data_bus2_3 : _GEN_50; // @[Benes.scala 63:{47,47}]
  wire [1:0] _parsedindexvalue_first_stage_T_41 = 2'h3 % 2'h2; // @[Benes.scala 24:52]
  wire [1:0] _parsedindexvalue_first_stage_T_47 = _parsedindexvalue_first_stage_T_41 == 2'h0 ? 2'h0 :
    _parsedindexvalue_T_9; // @[Benes.scala 24:40]
  wire [1:0] parsedindexvalue_first_stage_5 = io_i_mux_bus_3[0] ? _parsedindexvalue_first_stage_T_47 : 2'h3; // @[Benes.scala 24:26]
  wire [2:0] _GEN_89 = {{1'd0}, parsedindexvalue_first_stage_5}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_91 = _GEN_89 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_10 = _GEN_91[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_390 = parsedindexvalue_calculation_10 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_392 = parsedindexvalue_calculation_10 == 2'h0 & ~parsedindexvalue_boolArray_4_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_393 = parsedindexvalue_calculation_10 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_395 = parsedindexvalue_calculation_10 == 2'h1 & _parsedindexvalue_nextIndex_T_313; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_396 = parsedindexvalue_calculation_10 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_398 = parsedindexvalue_calculation_10 == 2'h2 & _parsedindexvalue_nextIndex_T_313; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_399 = parsedindexvalue_calculation_10 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_401 = parsedindexvalue_calculation_10 == 2'h3 & _parsedindexvalue_nextIndex_T_313; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_404 = _parsedindexvalue_nextIndex_T_390 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_406 = parsedindexvalue_first_stage_5 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_409 = _parsedindexvalue_nextIndex_T_393 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_414 = _parsedindexvalue_nextIndex_T_396 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_416 = parsedindexvalue_first_stage_5 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_419 = _parsedindexvalue_nextIndex_T_399 & parsedindexvalue_boolArray_4_0; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_422 = _parsedindexvalue_nextIndex_T_419 ? _parsedindexvalue_nextIndex_T_416
     : parsedindexvalue_first_stage_5; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_423 = _parsedindexvalue_nextIndex_T_414 ? _parsedindexvalue_nextIndex_T_416
     : _parsedindexvalue_nextIndex_T_422; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_424 = _parsedindexvalue_nextIndex_T_409 ? _parsedindexvalue_nextIndex_T_406
     : _parsedindexvalue_nextIndex_T_423; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_425 = _parsedindexvalue_nextIndex_T_404 ? _parsedindexvalue_nextIndex_T_406
     : _parsedindexvalue_nextIndex_T_424; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_426 = _parsedindexvalue_nextIndex_T_401 ? parsedindexvalue_first_stage_5 :
    _parsedindexvalue_nextIndex_T_425; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_427 = _parsedindexvalue_nextIndex_T_398 ? parsedindexvalue_first_stage_5 :
    _parsedindexvalue_nextIndex_T_426; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_428 = _parsedindexvalue_nextIndex_T_395 ? parsedindexvalue_first_stage_5 :
    _parsedindexvalue_nextIndex_T_427; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_10 = _parsedindexvalue_nextIndex_T_392 ? parsedindexvalue_first_stage_5 :
    _parsedindexvalue_nextIndex_T_428; // @[Mux.scala 101:16]
  wire [2:0] _GEN_92 = {{1'd0}, parsedindexvalue_nextIndex_10}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_93 = _GEN_92 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_11 = _GEN_93[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_429 = parsedindexvalue_calculation_11 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_431 = parsedindexvalue_calculation_11 == 2'h0 & ~parsedindexvalue_boolArray_4_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_432 = parsedindexvalue_calculation_11 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_434 = parsedindexvalue_calculation_11 == 2'h1 & _parsedindexvalue_nextIndex_T_352; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_435 = parsedindexvalue_calculation_11 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_437 = parsedindexvalue_calculation_11 == 2'h2 & _parsedindexvalue_nextIndex_T_352; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_438 = parsedindexvalue_calculation_11 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_440 = parsedindexvalue_calculation_11 == 2'h3 & _parsedindexvalue_nextIndex_T_352; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_443 = _parsedindexvalue_nextIndex_T_429 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_445 = parsedindexvalue_nextIndex_10 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_448 = _parsedindexvalue_nextIndex_T_432 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_453 = _parsedindexvalue_nextIndex_T_435 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_455 = parsedindexvalue_nextIndex_10 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_458 = _parsedindexvalue_nextIndex_T_438 & parsedindexvalue_boolArray_4_1; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_461 = _parsedindexvalue_nextIndex_T_458 ? _parsedindexvalue_nextIndex_T_455
     : parsedindexvalue_nextIndex_10; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_462 = _parsedindexvalue_nextIndex_T_453 ? _parsedindexvalue_nextIndex_T_455
     : _parsedindexvalue_nextIndex_T_461; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_463 = _parsedindexvalue_nextIndex_T_448 ? _parsedindexvalue_nextIndex_T_445
     : _parsedindexvalue_nextIndex_T_462; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_464 = _parsedindexvalue_nextIndex_T_443 ? _parsedindexvalue_nextIndex_T_445
     : _parsedindexvalue_nextIndex_T_463; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_465 = _parsedindexvalue_nextIndex_T_440 ? parsedindexvalue_nextIndex_10 :
    _parsedindexvalue_nextIndex_T_464; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_466 = _parsedindexvalue_nextIndex_T_437 ? parsedindexvalue_nextIndex_10 :
    _parsedindexvalue_nextIndex_T_465; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_467 = _parsedindexvalue_nextIndex_T_434 ? parsedindexvalue_nextIndex_10 :
    _parsedindexvalue_nextIndex_T_466; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_11 = _parsedindexvalue_nextIndex_T_431 ? parsedindexvalue_nextIndex_10 :
    _parsedindexvalue_nextIndex_T_467; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_41 = parsedindexvalue_nextIndex_11 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_44 = parsedindexvalue_nextIndex_11 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_46 = parsedindexvalue_nextIndex_11 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_47 = _parsedindexvalue_third_stage_T_41 == 2'h0 ?
    _parsedindexvalue_third_stage_T_44 : _parsedindexvalue_third_stage_T_46; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue_5 = io_i_mux_bus_3[3] ? _parsedindexvalue_third_stage_T_47 : parsedindexvalue_nextIndex_11
    ; // @[Benes.scala 48:24]
  wire [2:0] _T_21 = {{1'd0}, parsedindexvalue_5};
  wire [15:0] _GEN_57 = 3'h0 == _T_21 ? io_i_data_bus2_3 : _GEN_47; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_58 = 3'h1 == _T_21 ? io_i_data_bus2_3 : _GEN_48; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_59 = 3'h2 == _T_21 ? io_i_data_bus2_3 : _GEN_49; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_60 = 3'h3 == _T_21 ? io_i_data_bus2_3 : _GEN_50; // @[Benes.scala 67:{47,47}]
  wire [15:0] _GEN_62 = io_i_data_bus2_3 == io_i_data_bus2_2 ? _GEN_52 : _GEN_57; // @[Benes.scala 60:61]
  wire [15:0] _GEN_63 = io_i_data_bus2_3 == io_i_data_bus2_2 ? _GEN_53 : _GEN_58; // @[Benes.scala 60:61]
  wire [15:0] _GEN_64 = io_i_data_bus2_3 == io_i_data_bus2_2 ? _GEN_54 : _GEN_59; // @[Benes.scala 60:61]
  wire [15:0] _GEN_65 = io_i_data_bus2_3 == io_i_data_bus2_2 ? _GEN_55 : _GEN_60; // @[Benes.scala 60:61]
  wire [15:0] _GEN_67 = _T_18 ? 16'h0 : io_i_data_bus2_3; // @[Benes.scala 72:60 74:28 78:28]
  wire [15:0] _GEN_68 = |io_i_mux_bus_3 ? _GEN_62 : _GEN_47; // @[Benes.scala 58:35]
  wire [15:0] _GEN_69 = |io_i_mux_bus_3 ? _GEN_63 : _GEN_48; // @[Benes.scala 58:35]
  wire [15:0] _GEN_70 = |io_i_mux_bus_3 ? _GEN_64 : _GEN_49; // @[Benes.scala 58:35]
  wire [15:0] _GEN_71 = |io_i_mux_bus_3 ? _GEN_65 : _GEN_67; // @[Benes.scala 58:35]
  wire [15:0] _GEN_73 = io_i_data_bus2_3 != 16'h0 ? _GEN_68 : _GEN_47; // @[Benes.scala 56:39]
  wire [15:0] _GEN_74 = io_i_data_bus2_3 != 16'h0 ? _GEN_69 : _GEN_48; // @[Benes.scala 56:39]
  wire [15:0] _GEN_75 = io_i_data_bus2_3 != 16'h0 ? _GEN_70 : _GEN_49; // @[Benes.scala 56:39]
  wire [15:0] _GEN_76 = io_i_data_bus2_3 != 16'h0 ? _GEN_71 : _GEN_50; // @[Benes.scala 56:39]
  wire  parsedindexvalue_first_stage_6 = io_i_mux_bus_0[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes.scala 24:26]
  wire  parsedindexvalue_boolArray_6_0 = io_i_mux_bus_0[1]; // @[Benes.scala 28:92]
  wire  parsedindexvalue_boolArray_6_1 = io_i_mux_bus_0[2]; // @[Benes.scala 28:92]
  wire [2:0] _GEN_94 = {{2'd0}, parsedindexvalue_first_stage_6}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_95 = _GEN_94 % 3'h4; // @[Benes.scala 33:40]
  wire  parsedindexvalue_calculation_12 = _GEN_95[0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_468 = ~parsedindexvalue_calculation_12; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_469 = ~parsedindexvalue_boolArray_6_0; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_470 = ~parsedindexvalue_calculation_12 & ~parsedindexvalue_boolArray_6_0; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_473 = parsedindexvalue_calculation_12 & _parsedindexvalue_nextIndex_T_469; // @[Benes.scala 36:36]
  wire [1:0] _GEN_104 = {{1'd0}, parsedindexvalue_calculation_12}; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_474 = _GEN_104 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_476 = _GEN_104 == 2'h2 & _parsedindexvalue_nextIndex_T_469; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_477 = _GEN_104 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_479 = _GEN_104 == 2'h3 & _parsedindexvalue_nextIndex_T_469; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_482 = _parsedindexvalue_nextIndex_T_468 & parsedindexvalue_boolArray_6_0; // @[Benes.scala 39:36]
  wire [1:0] _GEN_106 = {{1'd0}, parsedindexvalue_first_stage_6}; // @[Benes.scala 39:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_484 = _GEN_106 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_487 = parsedindexvalue_calculation_12 & parsedindexvalue_boolArray_6_0; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_492 = _parsedindexvalue_nextIndex_T_474 & parsedindexvalue_boolArray_6_0; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_494 = _GEN_106 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_497 = _parsedindexvalue_nextIndex_T_477 & parsedindexvalue_boolArray_6_0; // @[Benes.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_500 = _parsedindexvalue_nextIndex_T_497 ? _parsedindexvalue_nextIndex_T_494
     : {{1'd0}, parsedindexvalue_first_stage_6}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_501 = _parsedindexvalue_nextIndex_T_492 ? _parsedindexvalue_nextIndex_T_494
     : _parsedindexvalue_nextIndex_T_500; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_502 = _parsedindexvalue_nextIndex_T_487 ? _parsedindexvalue_nextIndex_T_484
     : _parsedindexvalue_nextIndex_T_501; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_503 = _parsedindexvalue_nextIndex_T_482 ? _parsedindexvalue_nextIndex_T_484
     : _parsedindexvalue_nextIndex_T_502; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_504 = _parsedindexvalue_nextIndex_T_479 ? {{1'd0},
    parsedindexvalue_first_stage_6} : _parsedindexvalue_nextIndex_T_503; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_505 = _parsedindexvalue_nextIndex_T_476 ? {{1'd0},
    parsedindexvalue_first_stage_6} : _parsedindexvalue_nextIndex_T_504; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_506 = _parsedindexvalue_nextIndex_T_473 ? {{1'd0},
    parsedindexvalue_first_stage_6} : _parsedindexvalue_nextIndex_T_505; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_12 = _parsedindexvalue_nextIndex_T_470 ? {{1'd0}, parsedindexvalue_first_stage_6
    } : _parsedindexvalue_nextIndex_T_506; // @[Mux.scala 101:16]
  wire [2:0] _GEN_97 = {{1'd0}, parsedindexvalue_nextIndex_12}; // @[Benes.scala 33:40]
  wire [2:0] _GEN_99 = _GEN_97 % 3'h4; // @[Benes.scala 33:40]
  wire [1:0] parsedindexvalue_calculation_13 = _GEN_99[1:0]; // @[Benes.scala 33:40]
  wire  _parsedindexvalue_nextIndex_T_507 = parsedindexvalue_calculation_13 == 2'h0; // @[Benes.scala 35:27]
  wire  _parsedindexvalue_nextIndex_T_508 = ~parsedindexvalue_boolArray_6_1; // @[Benes.scala 35:53]
  wire  _parsedindexvalue_nextIndex_T_509 = parsedindexvalue_calculation_13 == 2'h0 & ~parsedindexvalue_boolArray_6_1; // @[Benes.scala 35:36]
  wire  _parsedindexvalue_nextIndex_T_510 = parsedindexvalue_calculation_13 == 2'h1; // @[Benes.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_512 = parsedindexvalue_calculation_13 == 2'h1 & _parsedindexvalue_nextIndex_T_508; // @[Benes.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_513 = parsedindexvalue_calculation_13 == 2'h2; // @[Benes.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_515 = parsedindexvalue_calculation_13 == 2'h2 & _parsedindexvalue_nextIndex_T_508; // @[Benes.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_516 = parsedindexvalue_calculation_13 == 2'h3; // @[Benes.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_518 = parsedindexvalue_calculation_13 == 2'h3 & _parsedindexvalue_nextIndex_T_508; // @[Benes.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_521 = _parsedindexvalue_nextIndex_T_507 & parsedindexvalue_boolArray_6_1; // @[Benes.scala 39:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_523 = parsedindexvalue_nextIndex_12 + 2'h2; // @[Benes.scala 39:76]
  wire  _parsedindexvalue_nextIndex_T_526 = _parsedindexvalue_nextIndex_T_510 & parsedindexvalue_boolArray_6_1; // @[Benes.scala 40:36]
  wire  _parsedindexvalue_nextIndex_T_531 = _parsedindexvalue_nextIndex_T_513 & parsedindexvalue_boolArray_6_1; // @[Benes.scala 41:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_533 = parsedindexvalue_nextIndex_12 - 2'h2; // @[Benes.scala 41:76]
  wire  _parsedindexvalue_nextIndex_T_536 = _parsedindexvalue_nextIndex_T_516 & parsedindexvalue_boolArray_6_1; // @[Benes.scala 42:36]
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
  wire [1:0] _parsedindexvalue_third_stage_T_49 = parsedindexvalue_nextIndex_13 % 2'h2; // @[Benes.scala 48:61]
  wire [1:0] _parsedindexvalue_third_stage_T_52 = parsedindexvalue_nextIndex_13 + 2'h1; // @[Benes.scala 48:89]
  wire [1:0] _parsedindexvalue_third_stage_T_54 = parsedindexvalue_nextIndex_13 - 2'h1; // @[Benes.scala 48:109]
  wire [1:0] _parsedindexvalue_third_stage_T_55 = _parsedindexvalue_third_stage_T_49 == 2'h0 ?
    _parsedindexvalue_third_stage_T_52 : _parsedindexvalue_third_stage_T_54; // @[Benes.scala 48:47]
  wire [1:0] parsedindexvalue_6 = io_i_mux_bus_0[3] ? _parsedindexvalue_third_stage_T_55 : parsedindexvalue_nextIndex_13
    ; // @[Benes.scala 48:24]
  wire [2:0] _T_25 = {{1'd0}, parsedindexvalue_6};
  wire [15:0] _GEN_78 = 3'h0 == _T_25 ? io_i_data_bus2_0 : _GEN_73; // @[Benes.scala 94:{35,35}]
  wire [15:0] _GEN_79 = 3'h1 == _T_25 ? io_i_data_bus2_0 : _GEN_74; // @[Benes.scala 94:{35,35}]
  wire [15:0] _GEN_80 = 3'h2 == _T_25 ? io_i_data_bus2_0 : _GEN_75; // @[Benes.scala 94:{35,35}]
  wire [15:0] _GEN_81 = 3'h3 == _T_25 ? io_i_data_bus2_0 : _GEN_76; // @[Benes.scala 94:{35,35}]
  assign io_o_dist_bus1_0 = io_i_data_bus1_0; // @[Benes.scala 16:18]
  assign io_o_dist_bus1_1 = io_i_data_bus1_1; // @[Benes.scala 16:18]
  assign io_o_dist_bus1_2 = io_i_data_bus1_2; // @[Benes.scala 16:18]
  assign io_o_dist_bus1_3 = io_i_data_bus1_3; // @[Benes.scala 16:18]
  assign io_o_dist_bus2_0 = io_i_data_bus2_0 != 16'h0 ? _GEN_78 : _GEN_73; // @[Benes.scala 91:35]
  assign io_o_dist_bus2_1 = io_i_data_bus2_0 != 16'h0 ? _GEN_79 : _GEN_74; // @[Benes.scala 91:35]
  assign io_o_dist_bus2_2 = io_i_data_bus2_0 != 16'h0 ? _GEN_80 : _GEN_75; // @[Benes.scala 91:35]
  assign io_o_dist_bus2_3 = io_i_data_bus2_0 != 16'h0 ? _GEN_81 : _GEN_76; // @[Benes.scala 91:35]
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
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [15:0] io_o_adder_0,
  output [15:0] io_o_adder_1,
  output [15:0] io_o_adder_2,
  input  [3:0]  io_i_mux_bus_0,
  input  [3:0]  io_i_mux_bus_1,
  input  [3:0]  io_i_mux_bus_2,
  input  [3:0]  io_i_mux_bus_3
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
  wire  my_ivn_clock; // @[FlexDPE.scala 53:23]
  wire  my_ivn_reset; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_3; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_0; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_1; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_2; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_3; // @[FlexDPE.scala 53:23]
  wire  my_controller_clock; // @[FlexDPE.scala 57:31]
  wire  my_controller_reset; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_0; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_1; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_2; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_3; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_valid; // @[FlexDPE.scala 57:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_0; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_1; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_2; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPE.scala 77:30]
  wire  my_fan_network_clock; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_reset; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_valid; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_0; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_1; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPE.scala 89:32]
  reg [14:0] r_mult_0; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_1; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_2; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_3; // @[FlexDPE.scala 32:26]
  reg [15:0] matrix_0_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_3; // @[FlexDPE.scala 33:21]
  wire [15:0] _GEN_0 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_1 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_2 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_3 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPE.scala 32:{26,26} 83:14]
  ivncontrol4 my_ivn ( // @[FlexDPE.scala 53:23]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(my_ivn_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(my_ivn_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(my_ivn_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(my_ivn_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(my_ivn_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(my_ivn_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(my_ivn_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(my_ivn_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(my_ivn_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(my_ivn_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(my_ivn_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(my_ivn_io_Stationary_matrix_3_3),
    .io_o_vn_0(my_ivn_io_o_vn_0),
    .io_o_vn_1(my_ivn_io_o_vn_1),
    .io_o_vn_2(my_ivn_io_o_vn_2),
    .io_o_vn_3(my_ivn_io_o_vn_3)
  );
  fancontrol4 my_controller ( // @[FlexDPE.scala 57:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_vn_0(my_controller_io_i_vn_0),
    .io_i_vn_1(my_controller_io_i_vn_1),
    .io_i_vn_2(my_controller_io_i_vn_2),
    .io_i_vn_3(my_controller_io_i_vn_3),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2),
    .io_o_reduction_cmd_0(my_controller_io_o_reduction_cmd_0),
    .io_o_reduction_cmd_1(my_controller_io_o_reduction_cmd_1),
    .io_o_reduction_cmd_2(my_controller_io_o_reduction_cmd_2),
    .io_o_reduction_valid(my_controller_io_o_reduction_valid)
  );
  Benes my_Benes ( // @[FlexDPE.scala 66:26]
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
  buffer_multiplication buffer_mult ( // @[FlexDPE.scala 77:30]
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
  Fan4 my_fan_network ( // @[FlexDPE.scala 89:32]
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
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_1 = my_fan_network_io_o_adder_1[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPE.scala 98:16]
  assign my_ivn_clock = clock;
  assign my_ivn_reset = reset;
  assign my_ivn_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPE.scala 54:33]
  assign my_controller_clock = clock;
  assign my_controller_reset = reset;
  assign my_controller_io_i_vn_0 = my_ivn_io_o_vn_0; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_1 = my_ivn_io_o_vn_1; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_2 = my_ivn_io_o_vn_2; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_3 = my_ivn_io_o_vn_3; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPE.scala 61:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_mux_bus_0 = io_i_mux_bus_0; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_1 = io_i_mux_bus_1; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_2 = io_i_mux_bus_2; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_3 = io_i_mux_bus_3; // @[FlexDPE.scala 70:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 81:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_valid = my_controller_io_o_reduction_valid; // @[FlexDPE.scala 91:31]
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_cmd_bus_0 = my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_1 = my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_2 = my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 94:33]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_0[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_1 <= _GEN_1[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_2 <= _GEN_2[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_3 <= _GEN_3[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    matrix_0_0 <= matrix_0_0; // @[FlexDPE.scala 33:21]
    matrix_0_1 <= matrix_0_1; // @[FlexDPE.scala 33:21]
    matrix_0_2 <= matrix_0_2; // @[FlexDPE.scala 33:21]
    matrix_0_3 <= matrix_0_3; // @[FlexDPE.scala 33:21]
    matrix_1_0 <= matrix_1_0; // @[FlexDPE.scala 33:21]
    matrix_1_1 <= matrix_1_1; // @[FlexDPE.scala 33:21]
    matrix_1_2 <= matrix_1_2; // @[FlexDPE.scala 33:21]
    matrix_1_3 <= matrix_1_3; // @[FlexDPE.scala 33:21]
    matrix_2_0 <= matrix_2_0; // @[FlexDPE.scala 33:21]
    matrix_2_1 <= matrix_2_1; // @[FlexDPE.scala 33:21]
    matrix_2_2 <= matrix_2_2; // @[FlexDPE.scala 33:21]
    matrix_2_3 <= matrix_2_3; // @[FlexDPE.scala 33:21]
    matrix_3_0 <= matrix_3_0; // @[FlexDPE.scala 33:21]
    matrix_3_1 <= matrix_3_1; // @[FlexDPE.scala 33:21]
    matrix_3_2 <= matrix_3_2; // @[FlexDPE.scala 33:21]
    matrix_3_3 <= matrix_3_3; // @[FlexDPE.scala 33:21]
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
  matrix_0_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  matrix_0_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  matrix_0_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  matrix_0_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  matrix_1_0 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  matrix_1_1 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  matrix_1_2 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  matrix_1_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  matrix_2_0 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  matrix_2_1 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  matrix_2_2 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  matrix_2_3 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  matrix_3_0 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  matrix_3_1 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  matrix_3_2 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  matrix_3_3 = _RAND_19[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ivncontrol4_1(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [4:0]  io_o_vn_0,
  output [4:0]  io_o_vn_1,
  output [4:0]  io_o_vn_2,
  output [4:0]  io_o_vn_3
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
`endif // RANDOMIZE_REG_INIT
  reg [4:0] i_vn_0; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_1; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_2; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_3; // @[ivncontrol(4).scala 15:23]
  reg [31:0] rowcount_0; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_1; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_2; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_3; // @[ivncontrol(4).scala 19:27]
  reg [31:0] i; // @[ivncontrol(4).scala 31:20]
  reg [31:0] j; // @[ivncontrol(4).scala 32:20]
  reg [31:0] mat_0_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] count_0; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_1; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_2; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_3; // @[ivncontrol(4).scala 39:20]
  wire [15:0] _GEN_17 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_18 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_0_2 : _GEN_17; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_19 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_0_3 : _GEN_18; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_20 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_1_0 : _GEN_19; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_21 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_1_1 : _GEN_20; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_22 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_1_2 : _GEN_21; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_23 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_1_3 : _GEN_22; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_24 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_2_0 : _GEN_23; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_25 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_2_1 : _GEN_24; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_26 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_2_2 : _GEN_25; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_27 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_2_3 : _GEN_26; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_28 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_3_0 : _GEN_27; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_29 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_3_1 : _GEN_28; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_30 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_3_2 : _GEN_29; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_31 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_3_3 : _GEN_30; // @[ivncontrol(4).scala 44:{15,15}]
  wire [31:0] _mat_T_T_1 = {{16'd0}, _GEN_31}; // @[ivncontrol(4).scala 44:{15,15}]
  wire  _GEN_64 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire  valid1 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire [31:0] _GEN_49 = 2'h1 == i[1:0] ? count_1 : count_0; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_50 = 2'h2 == i[1:0] ? count_2 : _GEN_49; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_51 = 2'h3 == i[1:0] ? count_3 : _GEN_50; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _count_T_2 = _GEN_51 + 32'h1; // @[ivncontrol(4).scala 47:33]
  wire  _T_9 = j == 32'h3; // @[ivncontrol(4).scala 59:47]
  wire  _T_10 = i == 32'h3 & j == 32'h3; // @[ivncontrol(4).scala 59:41]
  wire  _T_12 = io_Stationary_matrix_1_0 != 16'h0; // @[ivncontrol(4).scala 71:46]
  wire  _T_14 = io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0; // @[ivncontrol(4).scala 71:54]
  wire  _T_15 = io_Stationary_matrix_1_2 == 16'h0; // @[ivncontrol(4).scala 71:122]
  wire  _T_17 = io_Stationary_matrix_1_1 != 16'h0; // @[ivncontrol(4).scala 71:162]
  wire  _T_18 = io_Stationary_matrix_1_0 == 16'h0; // @[ivncontrol(4).scala 71:200]
  wire  _T_23 = io_Stationary_matrix_1_2 != 16'h0; // @[ivncontrol(4).scala 71:276]
  wire [31:0] _rowcount_1_T_1 = count_1 - 32'h2; // @[ivncontrol(4).scala 72:41]
  wire  _T_31 = _T_12 & _T_17; // @[ivncontrol(4).scala 73:60]
  wire [31:0] _rowcount_1_T_3 = count_1 - 32'h1; // @[ivncontrol(4).scala 74:41]
  wire [31:0] _rowcount_1_T_5 = count_1 - 32'h3; // @[ivncontrol(4).scala 76:41]
  wire [31:0] _GEN_69 = _T_31 & _T_15 | _T_14 & _T_23 | _T_18 & _T_17 & _T_23 ? _rowcount_1_T_5 : count_1; // @[ivncontrol(4).scala 66:21 75:371 76:29]
  wire [31:0] _GEN_70 = _T_12 & _T_17 | _T_12 & _T_23 | _T_17 & _T_23 ? _rowcount_1_T_3 : _GEN_69; // @[ivncontrol(4).scala 73:256 74:29]
  wire [31:0] _i_T_1 = i + 32'h1; // @[ivncontrol(4).scala 88:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[ivncontrol(4).scala 92:16]
  wire  _GEN_78 = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  valid = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  _T_118 = rowcount_1 == 32'h2; // @[ivncontrol(4).scala 134:34]
  wire  _T_119 = rowcount_1 == 32'h1; // @[ivncontrol(4).scala 137:39]
  wire [4:0] _GEN_79 = rowcount_1 > 32'h2 ? 5'h1 : 5'h1e; // @[ivncontrol(4).scala 108:17 139:46 140:29]
  wire [4:0] _GEN_80 = rowcount_1 > 32'h2 ? 5'h1 : 5'h11; // @[ivncontrol(4).scala 108:17 139:46 141:29]
  wire [4:0] _GEN_81 = rowcount_1 == 32'h1 ? 5'h1 : _GEN_79; // @[ivncontrol(4).scala 137:46 138:29]
  wire [4:0] _GEN_82 = rowcount_1 == 32'h1 ? 5'h11 : _GEN_80; // @[ivncontrol(4).scala 108:17 137:46]
  wire  _T_122 = rowcount_1 == 32'h3; // @[ivncontrol(4).scala 147:33]
  wire [4:0] _GEN_85 = rowcount_1 > 32'h3 ? 5'h1 : 5'h10; // @[ivncontrol(4).scala 108:17 158:44 159:30]
  wire [4:0] _GEN_86 = rowcount_1 > 32'h3 ? 5'h1 : 5'h1e; // @[ivncontrol(4).scala 108:17 158:44 160:29]
  wire [4:0] _GEN_87 = rowcount_1 > 32'h3 ? 5'h1 : 5'h11; // @[ivncontrol(4).scala 108:17 158:44 161:29]
  wire [4:0] _GEN_88 = _T_119 ? 5'h1 : _GEN_85; // @[ivncontrol(4).scala 155:46 156:31]
  wire [4:0] _GEN_89 = _T_119 ? 5'h1e : _GEN_86; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_90 = _T_119 ? 5'h11 : _GEN_87; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_91 = _T_118 ? 5'h1 : _GEN_88; // @[ivncontrol(4).scala 151:46 152:29]
  wire [4:0] _GEN_92 = _T_118 ? 5'h1 : _GEN_89; // @[ivncontrol(4).scala 151:46 153:29]
  wire [4:0] _GEN_93 = _T_118 ? 5'h11 : _GEN_90; // @[ivncontrol(4).scala 108:17 151:46]
  wire [4:0] _GEN_94 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_91; // @[ivncontrol(4).scala 147:40 148:29]
  wire [4:0] _GEN_95 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_92; // @[ivncontrol(4).scala 147:40 149:29]
  wire [4:0] _GEN_96 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_93; // @[ivncontrol(4).scala 147:40 150:29]
  wire [4:0] _GEN_97 = _T_119 ? 5'h1 : 5'h11; // @[ivncontrol(4).scala 108:17 171:42 172:29]
  wire [4:0] _GEN_98 = _T_119 ? 5'h1 : 5'h4; // @[ivncontrol(4).scala 108:17 188:46 189:29]
  wire [4:0] _GEN_99 = _T_118 ? 5'h1 : _GEN_98; // @[ivncontrol(4).scala 185:46 186:29]
  wire [4:0] _GEN_100 = _T_118 ? 5'h1 : 5'h10; // @[ivncontrol(4).scala 108:17 185:46 187:29]
  wire [4:0] _GEN_101 = _T_122 ? 5'h1 : _GEN_99; // @[ivncontrol(4).scala 181:46 182:29]
  wire [4:0] _GEN_102 = _T_122 ? 5'h1 : _GEN_100; // @[ivncontrol(4).scala 181:46 183:29]
  wire [4:0] _GEN_103 = _T_122 ? 5'h1 : 5'h1e; // @[ivncontrol(4).scala 108:17 181:46 184:29]
  wire [4:0] _GEN_104 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_101; // @[ivncontrol(4).scala 176:41 177:29]
  wire [4:0] _GEN_105 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_102; // @[ivncontrol(4).scala 176:41 178:29]
  wire [4:0] _GEN_106 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_103; // @[ivncontrol(4).scala 176:41 179:29]
  wire [4:0] _GEN_107 = rowcount_1 == 32'h4 ? 5'h1 : 5'h11; // @[ivncontrol(4).scala 108:17 176:41 180:29]
  wire [4:0] _GEN_108 = rowcount_0 == 32'h4 ? 5'h0 : 5'h4; // @[ivncontrol(4).scala 108:17 191:42 192:25]
  wire [4:0] _GEN_109 = rowcount_0 == 32'h4 ? 5'h0 : 5'h10; // @[ivncontrol(4).scala 108:17 191:42 193:25]
  wire [4:0] _GEN_110 = rowcount_0 == 32'h4 ? 5'h0 : 5'h1e; // @[ivncontrol(4).scala 108:17 191:42 194:25]
  wire [4:0] _GEN_111 = rowcount_0 == 32'h4 ? 5'h0 : 5'h11; // @[ivncontrol(4).scala 108:17 191:42 195:25]
  wire [4:0] _GEN_112 = rowcount_0 == 32'h0 ? _GEN_104 : _GEN_108; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_113 = rowcount_0 == 32'h0 ? _GEN_105 : _GEN_109; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_114 = rowcount_0 == 32'h0 ? _GEN_106 : _GEN_110; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_115 = rowcount_0 == 32'h0 ? _GEN_107 : _GEN_111; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_116 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_112; // @[ivncontrol(4).scala 167:43 168:25]
  wire [4:0] _GEN_117 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_113; // @[ivncontrol(4).scala 167:43 169:25]
  wire [4:0] _GEN_118 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_114; // @[ivncontrol(4).scala 167:43 170:25]
  wire [4:0] _GEN_119 = rowcount_0 == 32'h3 ? _GEN_97 : _GEN_115; // @[ivncontrol(4).scala 167:43]
  assign io_o_vn_0 = i_vn_0; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_1 = i_vn_1; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_2 = i_vn_2; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_3 = i_vn_3; // @[ivncontrol(4).scala 105:13]
  always @(posedge clock) begin
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 132:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 146:25]
      end else begin
        i_vn_0 <= _GEN_116;
      end
    end else begin
      i_vn_0 <= 5'h4; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 133:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_1 <= _GEN_94;
      end else begin
        i_vn_1 <= _GEN_117;
      end
    end else begin
      i_vn_1 <= 5'h10; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_2 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_2 <= 5'h1; // @[ivncontrol(4).scala 135:29]
        end else begin
          i_vn_2 <= _GEN_81;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_2 <= _GEN_95;
      end else begin
        i_vn_2 <= _GEN_118;
      end
    end else begin
      i_vn_2 <= 5'h1e; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_3 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_3 <= 5'h1; // @[ivncontrol(4).scala 136:29]
        end else begin
          i_vn_3 <= _GEN_82;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_3 <= _GEN_96;
      end else begin
        i_vn_3 <= _GEN_119;
      end
    end else begin
      i_vn_3 <= 5'h11; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_0 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      rowcount_0 <= count_0; // @[ivncontrol(4).scala 66:21]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_1 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      if (io_Stationary_matrix_1_3 != 16'h0) begin // @[ivncontrol(4).scala 67:49]
        if (io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_1 != 16'h0 & io_Stationary_matrix_1_0 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_2 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_0 == 16'h0
          ) begin // @[ivncontrol(4).scala 71:361]
          rowcount_1 <= _rowcount_1_T_1; // @[ivncontrol(4).scala 72:29]
        end else begin
          rowcount_1 <= _GEN_70;
        end
      end else begin
        rowcount_1 <= count_1; // @[ivncontrol(4).scala 66:21]
      end
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_2 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_3 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 31:20]
      i <= 32'h0; // @[ivncontrol(4).scala 31:20]
    end else if (i < 32'h3 & _T_9) begin // @[ivncontrol(4).scala 87:74]
      i <= _i_T_1; // @[ivncontrol(4).scala 88:11]
    end
    if (reset) begin // @[ivncontrol(4).scala 32:20]
      j <= 32'h0; // @[ivncontrol(4).scala 32:20]
    end else if (j < 32'h3 & i <= 32'h3) begin // @[ivncontrol(4).scala 91:71]
      j <= _j_T_1; // @[ivncontrol(4).scala 92:11]
    end else if (!(_T_10)) begin // @[ivncontrol(4).scala 94:81]
      j <= 32'h0; // @[ivncontrol(4).scala 98:11]
    end
    if (2'h0 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h0 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_0 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h1 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_1 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h2 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_2 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h3 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_3 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
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
  i_vn_0 = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  i_vn_1 = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  i_vn_2 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  i_vn_3 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  rowcount_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  rowcount_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  rowcount_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  rowcount_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  i = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  j = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  mat_0_0 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  mat_0_1 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  mat_0_2 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  mat_0_3 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  mat_1_0 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  mat_1_1 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  mat_1_2 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  mat_1_3 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  mat_2_0 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  mat_2_1 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  mat_2_2 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  mat_2_3 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  mat_3_0 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  mat_3_1 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  mat_3_2 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  mat_3_3 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  count_0 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  count_1 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  count_2 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  count_3 = _RAND_29[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module flexdpecom4_1(
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
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [15:0] io_o_adder_0,
  output [15:0] io_o_adder_1,
  output [15:0] io_o_adder_2,
  input  [3:0]  io_i_mux_bus_0,
  input  [3:0]  io_i_mux_bus_1,
  input  [3:0]  io_i_mux_bus_2,
  input  [3:0]  io_i_mux_bus_3
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
  wire  my_ivn_clock; // @[FlexDPE.scala 53:23]
  wire  my_ivn_reset; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_3; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_0; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_1; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_2; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_3; // @[FlexDPE.scala 53:23]
  wire  my_controller_clock; // @[FlexDPE.scala 57:31]
  wire  my_controller_reset; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_0; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_1; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_2; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_3; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_valid; // @[FlexDPE.scala 57:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_0; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_1; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_2; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPE.scala 77:30]
  wire  my_fan_network_clock; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_reset; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_valid; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_0; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_1; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPE.scala 89:32]
  reg [14:0] r_mult_0; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_1; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_2; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_3; // @[FlexDPE.scala 32:26]
  reg [15:0] matrix_0_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_3; // @[FlexDPE.scala 33:21]
  wire [15:0] _GEN_0 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_1 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_2 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_3 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPE.scala 32:{26,26} 83:14]
  ivncontrol4_1 my_ivn ( // @[FlexDPE.scala 53:23]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(my_ivn_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(my_ivn_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(my_ivn_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(my_ivn_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(my_ivn_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(my_ivn_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(my_ivn_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(my_ivn_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(my_ivn_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(my_ivn_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(my_ivn_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(my_ivn_io_Stationary_matrix_3_3),
    .io_o_vn_0(my_ivn_io_o_vn_0),
    .io_o_vn_1(my_ivn_io_o_vn_1),
    .io_o_vn_2(my_ivn_io_o_vn_2),
    .io_o_vn_3(my_ivn_io_o_vn_3)
  );
  fancontrol4 my_controller ( // @[FlexDPE.scala 57:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_vn_0(my_controller_io_i_vn_0),
    .io_i_vn_1(my_controller_io_i_vn_1),
    .io_i_vn_2(my_controller_io_i_vn_2),
    .io_i_vn_3(my_controller_io_i_vn_3),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2),
    .io_o_reduction_cmd_0(my_controller_io_o_reduction_cmd_0),
    .io_o_reduction_cmd_1(my_controller_io_o_reduction_cmd_1),
    .io_o_reduction_cmd_2(my_controller_io_o_reduction_cmd_2),
    .io_o_reduction_valid(my_controller_io_o_reduction_valid)
  );
  Benes my_Benes ( // @[FlexDPE.scala 66:26]
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
  buffer_multiplication buffer_mult ( // @[FlexDPE.scala 77:30]
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
  Fan4 my_fan_network ( // @[FlexDPE.scala 89:32]
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
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_1 = my_fan_network_io_o_adder_1[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPE.scala 98:16]
  assign my_ivn_clock = clock;
  assign my_ivn_reset = reset;
  assign my_ivn_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPE.scala 54:33]
  assign my_controller_clock = clock;
  assign my_controller_reset = reset;
  assign my_controller_io_i_vn_0 = my_ivn_io_o_vn_0; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_1 = my_ivn_io_o_vn_1; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_2 = my_ivn_io_o_vn_2; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_3 = my_ivn_io_o_vn_3; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPE.scala 61:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_mux_bus_0 = io_i_mux_bus_0; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_1 = io_i_mux_bus_1; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_2 = io_i_mux_bus_2; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_3 = io_i_mux_bus_3; // @[FlexDPE.scala 70:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 81:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_valid = my_controller_io_o_reduction_valid; // @[FlexDPE.scala 91:31]
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_cmd_bus_0 = my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_1 = my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_2 = my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 94:33]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_0[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_1 <= _GEN_1[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_2 <= _GEN_2[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_3 <= _GEN_3[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    matrix_0_0 <= matrix_0_0; // @[FlexDPE.scala 33:21]
    matrix_0_1 <= matrix_0_1; // @[FlexDPE.scala 33:21]
    matrix_0_2 <= matrix_0_2; // @[FlexDPE.scala 33:21]
    matrix_0_3 <= matrix_0_3; // @[FlexDPE.scala 33:21]
    matrix_1_0 <= matrix_1_0; // @[FlexDPE.scala 33:21]
    matrix_1_1 <= matrix_1_1; // @[FlexDPE.scala 33:21]
    matrix_1_2 <= matrix_1_2; // @[FlexDPE.scala 33:21]
    matrix_1_3 <= matrix_1_3; // @[FlexDPE.scala 33:21]
    matrix_2_0 <= matrix_2_0; // @[FlexDPE.scala 33:21]
    matrix_2_1 <= matrix_2_1; // @[FlexDPE.scala 33:21]
    matrix_2_2 <= matrix_2_2; // @[FlexDPE.scala 33:21]
    matrix_2_3 <= matrix_2_3; // @[FlexDPE.scala 33:21]
    matrix_3_0 <= matrix_3_0; // @[FlexDPE.scala 33:21]
    matrix_3_1 <= matrix_3_1; // @[FlexDPE.scala 33:21]
    matrix_3_2 <= matrix_3_2; // @[FlexDPE.scala 33:21]
    matrix_3_3 <= matrix_3_3; // @[FlexDPE.scala 33:21]
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
  matrix_0_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  matrix_0_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  matrix_0_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  matrix_0_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  matrix_1_0 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  matrix_1_1 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  matrix_1_2 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  matrix_1_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  matrix_2_0 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  matrix_2_1 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  matrix_2_2 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  matrix_2_3 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  matrix_3_0 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  matrix_3_1 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  matrix_3_2 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  matrix_3_3 = _RAND_19[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ivncontrol4_2(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [4:0]  io_o_vn_0,
  output [4:0]  io_o_vn_1,
  output [4:0]  io_o_vn_2,
  output [4:0]  io_o_vn_3
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
`endif // RANDOMIZE_REG_INIT
  reg [4:0] i_vn_0; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_1; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_2; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_3; // @[ivncontrol(4).scala 15:23]
  reg [31:0] rowcount_0; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_1; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_2; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_3; // @[ivncontrol(4).scala 19:27]
  reg [31:0] i; // @[ivncontrol(4).scala 31:20]
  reg [31:0] j; // @[ivncontrol(4).scala 32:20]
  reg [31:0] mat_0_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] count_0; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_1; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_2; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_3; // @[ivncontrol(4).scala 39:20]
  wire [15:0] _GEN_17 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_18 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_0_2 : _GEN_17; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_19 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_0_3 : _GEN_18; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_20 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_1_0 : _GEN_19; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_21 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_1_1 : _GEN_20; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_22 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_1_2 : _GEN_21; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_23 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_1_3 : _GEN_22; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_24 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_2_0 : _GEN_23; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_25 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_2_1 : _GEN_24; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_26 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_2_2 : _GEN_25; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_27 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_2_3 : _GEN_26; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_28 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_3_0 : _GEN_27; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_29 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_3_1 : _GEN_28; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_30 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_3_2 : _GEN_29; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_31 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_3_3 : _GEN_30; // @[ivncontrol(4).scala 44:{15,15}]
  wire [31:0] _mat_T_T_1 = {{16'd0}, _GEN_31}; // @[ivncontrol(4).scala 44:{15,15}]
  wire  _GEN_64 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire  valid1 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire [31:0] _GEN_49 = 2'h1 == i[1:0] ? count_1 : count_0; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_50 = 2'h2 == i[1:0] ? count_2 : _GEN_49; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_51 = 2'h3 == i[1:0] ? count_3 : _GEN_50; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _count_T_2 = _GEN_51 + 32'h1; // @[ivncontrol(4).scala 47:33]
  wire  _T_9 = j == 32'h3; // @[ivncontrol(4).scala 59:47]
  wire  _T_10 = i == 32'h3 & j == 32'h3; // @[ivncontrol(4).scala 59:41]
  wire  _T_12 = io_Stationary_matrix_1_0 != 16'h0; // @[ivncontrol(4).scala 71:46]
  wire  _T_14 = io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0; // @[ivncontrol(4).scala 71:54]
  wire  _T_15 = io_Stationary_matrix_1_2 == 16'h0; // @[ivncontrol(4).scala 71:122]
  wire  _T_17 = io_Stationary_matrix_1_1 != 16'h0; // @[ivncontrol(4).scala 71:162]
  wire  _T_18 = io_Stationary_matrix_1_0 == 16'h0; // @[ivncontrol(4).scala 71:200]
  wire  _T_23 = io_Stationary_matrix_1_2 != 16'h0; // @[ivncontrol(4).scala 71:276]
  wire [31:0] _rowcount_1_T_1 = count_1 - 32'h2; // @[ivncontrol(4).scala 72:41]
  wire  _T_31 = _T_12 & _T_17; // @[ivncontrol(4).scala 73:60]
  wire [31:0] _rowcount_1_T_3 = count_1 - 32'h1; // @[ivncontrol(4).scala 74:41]
  wire [31:0] _rowcount_1_T_5 = count_1 - 32'h3; // @[ivncontrol(4).scala 76:41]
  wire [31:0] _GEN_69 = _T_31 & _T_15 | _T_14 & _T_23 | _T_18 & _T_17 & _T_23 ? _rowcount_1_T_5 : count_1; // @[ivncontrol(4).scala 66:21 75:371 76:29]
  wire [31:0] _GEN_70 = _T_12 & _T_17 | _T_12 & _T_23 | _T_17 & _T_23 ? _rowcount_1_T_3 : _GEN_69; // @[ivncontrol(4).scala 73:256 74:29]
  wire [31:0] _i_T_1 = i + 32'h1; // @[ivncontrol(4).scala 88:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[ivncontrol(4).scala 92:16]
  wire  _GEN_78 = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  valid = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  _T_118 = rowcount_1 == 32'h2; // @[ivncontrol(4).scala 134:34]
  wire  _T_119 = rowcount_1 == 32'h1; // @[ivncontrol(4).scala 137:39]
  wire [4:0] _GEN_79 = rowcount_1 > 32'h2 ? 5'h1 : 5'h19; // @[ivncontrol(4).scala 108:17 139:46 140:29]
  wire [4:0] _GEN_80 = rowcount_1 > 32'h2 ? 5'h1 : 5'h12; // @[ivncontrol(4).scala 108:17 139:46 141:29]
  wire [4:0] _GEN_81 = rowcount_1 == 32'h1 ? 5'h1 : _GEN_79; // @[ivncontrol(4).scala 137:46 138:29]
  wire [4:0] _GEN_82 = rowcount_1 == 32'h1 ? 5'h12 : _GEN_80; // @[ivncontrol(4).scala 108:17 137:46]
  wire  _T_122 = rowcount_1 == 32'h3; // @[ivncontrol(4).scala 147:33]
  wire [4:0] _GEN_85 = rowcount_1 > 32'h3 ? 5'h1 : 5'h4; // @[ivncontrol(4).scala 108:17 158:44 159:30]
  wire [4:0] _GEN_86 = rowcount_1 > 32'h3 ? 5'h1 : 5'h19; // @[ivncontrol(4).scala 108:17 158:44 160:29]
  wire [4:0] _GEN_87 = rowcount_1 > 32'h3 ? 5'h1 : 5'h12; // @[ivncontrol(4).scala 108:17 158:44 161:29]
  wire [4:0] _GEN_88 = _T_119 ? 5'h1 : _GEN_85; // @[ivncontrol(4).scala 155:46 156:31]
  wire [4:0] _GEN_89 = _T_119 ? 5'h19 : _GEN_86; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_90 = _T_119 ? 5'h12 : _GEN_87; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_91 = _T_118 ? 5'h1 : _GEN_88; // @[ivncontrol(4).scala 151:46 152:29]
  wire [4:0] _GEN_92 = _T_118 ? 5'h1 : _GEN_89; // @[ivncontrol(4).scala 151:46 153:29]
  wire [4:0] _GEN_93 = _T_118 ? 5'h12 : _GEN_90; // @[ivncontrol(4).scala 108:17 151:46]
  wire [4:0] _GEN_94 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_91; // @[ivncontrol(4).scala 147:40 148:29]
  wire [4:0] _GEN_95 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_92; // @[ivncontrol(4).scala 147:40 149:29]
  wire [4:0] _GEN_96 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_93; // @[ivncontrol(4).scala 147:40 150:29]
  wire [4:0] _GEN_97 = _T_119 ? 5'h1 : 5'h12; // @[ivncontrol(4).scala 108:17 171:42 172:29]
  wire [4:0] _GEN_98 = _T_119 ? 5'h1 : 5'h1a; // @[ivncontrol(4).scala 108:17 188:46 189:29]
  wire [4:0] _GEN_99 = _T_118 ? 5'h1 : _GEN_98; // @[ivncontrol(4).scala 185:46 186:29]
  wire [4:0] _GEN_100 = _T_118 ? 5'h1 : 5'h4; // @[ivncontrol(4).scala 108:17 185:46 187:29]
  wire [4:0] _GEN_101 = _T_122 ? 5'h1 : _GEN_99; // @[ivncontrol(4).scala 181:46 182:29]
  wire [4:0] _GEN_102 = _T_122 ? 5'h1 : _GEN_100; // @[ivncontrol(4).scala 181:46 183:29]
  wire [4:0] _GEN_103 = _T_122 ? 5'h1 : 5'h19; // @[ivncontrol(4).scala 108:17 181:46 184:29]
  wire [4:0] _GEN_104 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_101; // @[ivncontrol(4).scala 176:41 177:29]
  wire [4:0] _GEN_105 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_102; // @[ivncontrol(4).scala 176:41 178:29]
  wire [4:0] _GEN_106 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_103; // @[ivncontrol(4).scala 176:41 179:29]
  wire [4:0] _GEN_107 = rowcount_1 == 32'h4 ? 5'h1 : 5'h12; // @[ivncontrol(4).scala 108:17 176:41 180:29]
  wire [4:0] _GEN_108 = rowcount_0 == 32'h4 ? 5'h0 : 5'h1a; // @[ivncontrol(4).scala 108:17 191:42 192:25]
  wire [4:0] _GEN_109 = rowcount_0 == 32'h4 ? 5'h0 : 5'h4; // @[ivncontrol(4).scala 108:17 191:42 193:25]
  wire [4:0] _GEN_110 = rowcount_0 == 32'h4 ? 5'h0 : 5'h19; // @[ivncontrol(4).scala 108:17 191:42 194:25]
  wire [4:0] _GEN_111 = rowcount_0 == 32'h4 ? 5'h0 : 5'h12; // @[ivncontrol(4).scala 108:17 191:42 195:25]
  wire [4:0] _GEN_112 = rowcount_0 == 32'h0 ? _GEN_104 : _GEN_108; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_113 = rowcount_0 == 32'h0 ? _GEN_105 : _GEN_109; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_114 = rowcount_0 == 32'h0 ? _GEN_106 : _GEN_110; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_115 = rowcount_0 == 32'h0 ? _GEN_107 : _GEN_111; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_116 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_112; // @[ivncontrol(4).scala 167:43 168:25]
  wire [4:0] _GEN_117 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_113; // @[ivncontrol(4).scala 167:43 169:25]
  wire [4:0] _GEN_118 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_114; // @[ivncontrol(4).scala 167:43 170:25]
  wire [4:0] _GEN_119 = rowcount_0 == 32'h3 ? _GEN_97 : _GEN_115; // @[ivncontrol(4).scala 167:43]
  assign io_o_vn_0 = i_vn_0; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_1 = i_vn_1; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_2 = i_vn_2; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_3 = i_vn_3; // @[ivncontrol(4).scala 105:13]
  always @(posedge clock) begin
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 132:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 146:25]
      end else begin
        i_vn_0 <= _GEN_116;
      end
    end else begin
      i_vn_0 <= 5'h1a; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 133:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_1 <= _GEN_94;
      end else begin
        i_vn_1 <= _GEN_117;
      end
    end else begin
      i_vn_1 <= 5'h4; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_2 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_2 <= 5'h1; // @[ivncontrol(4).scala 135:29]
        end else begin
          i_vn_2 <= _GEN_81;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_2 <= _GEN_95;
      end else begin
        i_vn_2 <= _GEN_118;
      end
    end else begin
      i_vn_2 <= 5'h19; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_3 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_3 <= 5'h1; // @[ivncontrol(4).scala 136:29]
        end else begin
          i_vn_3 <= _GEN_82;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_3 <= _GEN_96;
      end else begin
        i_vn_3 <= _GEN_119;
      end
    end else begin
      i_vn_3 <= 5'h12; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_0 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      rowcount_0 <= count_0; // @[ivncontrol(4).scala 66:21]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_1 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      if (io_Stationary_matrix_1_3 != 16'h0) begin // @[ivncontrol(4).scala 67:49]
        if (io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_1 != 16'h0 & io_Stationary_matrix_1_0 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_2 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_0 == 16'h0
          ) begin // @[ivncontrol(4).scala 71:361]
          rowcount_1 <= _rowcount_1_T_1; // @[ivncontrol(4).scala 72:29]
        end else begin
          rowcount_1 <= _GEN_70;
        end
      end else begin
        rowcount_1 <= count_1; // @[ivncontrol(4).scala 66:21]
      end
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_2 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_3 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 31:20]
      i <= 32'h0; // @[ivncontrol(4).scala 31:20]
    end else if (i < 32'h3 & _T_9) begin // @[ivncontrol(4).scala 87:74]
      i <= _i_T_1; // @[ivncontrol(4).scala 88:11]
    end
    if (reset) begin // @[ivncontrol(4).scala 32:20]
      j <= 32'h0; // @[ivncontrol(4).scala 32:20]
    end else if (j < 32'h3 & i <= 32'h3) begin // @[ivncontrol(4).scala 91:71]
      j <= _j_T_1; // @[ivncontrol(4).scala 92:11]
    end else if (!(_T_10)) begin // @[ivncontrol(4).scala 94:81]
      j <= 32'h0; // @[ivncontrol(4).scala 98:11]
    end
    if (2'h0 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h0 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_0 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h1 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_1 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h2 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_2 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h3 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_3 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
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
  i_vn_0 = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  i_vn_1 = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  i_vn_2 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  i_vn_3 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  rowcount_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  rowcount_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  rowcount_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  rowcount_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  i = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  j = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  mat_0_0 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  mat_0_1 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  mat_0_2 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  mat_0_3 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  mat_1_0 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  mat_1_1 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  mat_1_2 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  mat_1_3 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  mat_2_0 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  mat_2_1 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  mat_2_2 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  mat_2_3 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  mat_3_0 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  mat_3_1 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  mat_3_2 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  mat_3_3 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  count_0 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  count_1 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  count_2 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  count_3 = _RAND_29[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module flexdpecom4_2(
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
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [15:0] io_o_adder_0,
  output [15:0] io_o_adder_1,
  output [15:0] io_o_adder_2,
  input  [3:0]  io_i_mux_bus_0,
  input  [3:0]  io_i_mux_bus_1,
  input  [3:0]  io_i_mux_bus_2,
  input  [3:0]  io_i_mux_bus_3
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
  wire  my_ivn_clock; // @[FlexDPE.scala 53:23]
  wire  my_ivn_reset; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_3; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_0; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_1; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_2; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_3; // @[FlexDPE.scala 53:23]
  wire  my_controller_clock; // @[FlexDPE.scala 57:31]
  wire  my_controller_reset; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_0; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_1; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_2; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_3; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_valid; // @[FlexDPE.scala 57:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_0; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_1; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_2; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPE.scala 77:30]
  wire  my_fan_network_clock; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_reset; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_valid; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_0; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_1; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPE.scala 89:32]
  reg [14:0] r_mult_0; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_1; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_2; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_3; // @[FlexDPE.scala 32:26]
  reg [15:0] matrix_0_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_3; // @[FlexDPE.scala 33:21]
  wire [15:0] _GEN_0 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_1 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_2 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_3 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPE.scala 32:{26,26} 83:14]
  ivncontrol4_2 my_ivn ( // @[FlexDPE.scala 53:23]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(my_ivn_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(my_ivn_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(my_ivn_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(my_ivn_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(my_ivn_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(my_ivn_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(my_ivn_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(my_ivn_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(my_ivn_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(my_ivn_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(my_ivn_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(my_ivn_io_Stationary_matrix_3_3),
    .io_o_vn_0(my_ivn_io_o_vn_0),
    .io_o_vn_1(my_ivn_io_o_vn_1),
    .io_o_vn_2(my_ivn_io_o_vn_2),
    .io_o_vn_3(my_ivn_io_o_vn_3)
  );
  fancontrol4 my_controller ( // @[FlexDPE.scala 57:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_vn_0(my_controller_io_i_vn_0),
    .io_i_vn_1(my_controller_io_i_vn_1),
    .io_i_vn_2(my_controller_io_i_vn_2),
    .io_i_vn_3(my_controller_io_i_vn_3),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2),
    .io_o_reduction_cmd_0(my_controller_io_o_reduction_cmd_0),
    .io_o_reduction_cmd_1(my_controller_io_o_reduction_cmd_1),
    .io_o_reduction_cmd_2(my_controller_io_o_reduction_cmd_2),
    .io_o_reduction_valid(my_controller_io_o_reduction_valid)
  );
  Benes my_Benes ( // @[FlexDPE.scala 66:26]
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
  buffer_multiplication buffer_mult ( // @[FlexDPE.scala 77:30]
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
  Fan4 my_fan_network ( // @[FlexDPE.scala 89:32]
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
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_1 = my_fan_network_io_o_adder_1[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPE.scala 98:16]
  assign my_ivn_clock = clock;
  assign my_ivn_reset = reset;
  assign my_ivn_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPE.scala 54:33]
  assign my_controller_clock = clock;
  assign my_controller_reset = reset;
  assign my_controller_io_i_vn_0 = my_ivn_io_o_vn_0; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_1 = my_ivn_io_o_vn_1; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_2 = my_ivn_io_o_vn_2; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_3 = my_ivn_io_o_vn_3; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPE.scala 61:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_mux_bus_0 = io_i_mux_bus_0; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_1 = io_i_mux_bus_1; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_2 = io_i_mux_bus_2; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_3 = io_i_mux_bus_3; // @[FlexDPE.scala 70:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 81:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_valid = my_controller_io_o_reduction_valid; // @[FlexDPE.scala 91:31]
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_cmd_bus_0 = my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_1 = my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_2 = my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 94:33]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_0[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_1 <= _GEN_1[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_2 <= _GEN_2[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_3 <= _GEN_3[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    matrix_0_0 <= matrix_0_0; // @[FlexDPE.scala 33:21]
    matrix_0_1 <= matrix_0_1; // @[FlexDPE.scala 33:21]
    matrix_0_2 <= matrix_0_2; // @[FlexDPE.scala 33:21]
    matrix_0_3 <= matrix_0_3; // @[FlexDPE.scala 33:21]
    matrix_1_0 <= matrix_1_0; // @[FlexDPE.scala 33:21]
    matrix_1_1 <= matrix_1_1; // @[FlexDPE.scala 33:21]
    matrix_1_2 <= matrix_1_2; // @[FlexDPE.scala 33:21]
    matrix_1_3 <= matrix_1_3; // @[FlexDPE.scala 33:21]
    matrix_2_0 <= matrix_2_0; // @[FlexDPE.scala 33:21]
    matrix_2_1 <= matrix_2_1; // @[FlexDPE.scala 33:21]
    matrix_2_2 <= matrix_2_2; // @[FlexDPE.scala 33:21]
    matrix_2_3 <= matrix_2_3; // @[FlexDPE.scala 33:21]
    matrix_3_0 <= matrix_3_0; // @[FlexDPE.scala 33:21]
    matrix_3_1 <= matrix_3_1; // @[FlexDPE.scala 33:21]
    matrix_3_2 <= matrix_3_2; // @[FlexDPE.scala 33:21]
    matrix_3_3 <= matrix_3_3; // @[FlexDPE.scala 33:21]
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
  matrix_0_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  matrix_0_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  matrix_0_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  matrix_0_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  matrix_1_0 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  matrix_1_1 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  matrix_1_2 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  matrix_1_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  matrix_2_0 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  matrix_2_1 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  matrix_2_2 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  matrix_2_3 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  matrix_3_0 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  matrix_3_1 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  matrix_3_2 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  matrix_3_3 = _RAND_19[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ivncontrol4_3(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [4:0]  io_o_vn_0,
  output [4:0]  io_o_vn_1,
  output [4:0]  io_o_vn_2,
  output [4:0]  io_o_vn_3
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
`endif // RANDOMIZE_REG_INIT
  reg [4:0] i_vn_0; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_1; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_2; // @[ivncontrol(4).scala 15:23]
  reg [4:0] i_vn_3; // @[ivncontrol(4).scala 15:23]
  reg [31:0] rowcount_0; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_1; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_2; // @[ivncontrol(4).scala 19:27]
  reg [31:0] rowcount_3; // @[ivncontrol(4).scala 19:27]
  reg [31:0] i; // @[ivncontrol(4).scala 31:20]
  reg [31:0] j; // @[ivncontrol(4).scala 32:20]
  reg [31:0] mat_0_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_0_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_1_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_2_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_0; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_1; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_2; // @[ivncontrol(4).scala 35:18]
  reg [31:0] mat_3_3; // @[ivncontrol(4).scala 35:18]
  reg [31:0] count_0; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_1; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_2; // @[ivncontrol(4).scala 39:20]
  reg [31:0] count_3; // @[ivncontrol(4).scala 39:20]
  wire [15:0] _GEN_17 = 2'h0 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_18 = 2'h0 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_0_2 : _GEN_17; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_19 = 2'h0 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_0_3 : _GEN_18; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_20 = 2'h1 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_1_0 : _GEN_19; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_21 = 2'h1 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_1_1 : _GEN_20; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_22 = 2'h1 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_1_2 : _GEN_21; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_23 = 2'h1 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_1_3 : _GEN_22; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_24 = 2'h2 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_2_0 : _GEN_23; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_25 = 2'h2 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_2_1 : _GEN_24; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_26 = 2'h2 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_2_2 : _GEN_25; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_27 = 2'h2 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_2_3 : _GEN_26; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_28 = 2'h3 == i[1:0] & 2'h0 == j[1:0] ? io_Stationary_matrix_3_0 : _GEN_27; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_29 = 2'h3 == i[1:0] & 2'h1 == j[1:0] ? io_Stationary_matrix_3_1 : _GEN_28; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_30 = 2'h3 == i[1:0] & 2'h2 == j[1:0] ? io_Stationary_matrix_3_2 : _GEN_29; // @[ivncontrol(4).scala 44:{15,15}]
  wire [15:0] _GEN_31 = 2'h3 == i[1:0] & 2'h3 == j[1:0] ? io_Stationary_matrix_3_3 : _GEN_30; // @[ivncontrol(4).scala 44:{15,15}]
  wire [31:0] _mat_T_T_1 = {{16'd0}, _GEN_31}; // @[ivncontrol(4).scala 44:{15,15}]
  wire  _GEN_64 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire  valid1 = count_1 >= 32'h4; // @[ivncontrol(4).scala 53:28 54:16]
  wire [31:0] _GEN_49 = 2'h1 == i[1:0] ? count_1 : count_0; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_50 = 2'h2 == i[1:0] ? count_2 : _GEN_49; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _GEN_51 = 2'h3 == i[1:0] ? count_3 : _GEN_50; // @[ivncontrol(4).scala 47:{33,33}]
  wire [31:0] _count_T_2 = _GEN_51 + 32'h1; // @[ivncontrol(4).scala 47:33]
  wire  _T_9 = j == 32'h3; // @[ivncontrol(4).scala 59:47]
  wire  _T_10 = i == 32'h3 & j == 32'h3; // @[ivncontrol(4).scala 59:41]
  wire  _T_12 = io_Stationary_matrix_1_0 != 16'h0; // @[ivncontrol(4).scala 71:46]
  wire  _T_14 = io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0; // @[ivncontrol(4).scala 71:54]
  wire  _T_15 = io_Stationary_matrix_1_2 == 16'h0; // @[ivncontrol(4).scala 71:122]
  wire  _T_17 = io_Stationary_matrix_1_1 != 16'h0; // @[ivncontrol(4).scala 71:162]
  wire  _T_18 = io_Stationary_matrix_1_0 == 16'h0; // @[ivncontrol(4).scala 71:200]
  wire  _T_23 = io_Stationary_matrix_1_2 != 16'h0; // @[ivncontrol(4).scala 71:276]
  wire [31:0] _rowcount_1_T_1 = count_1 - 32'h2; // @[ivncontrol(4).scala 72:41]
  wire  _T_31 = _T_12 & _T_17; // @[ivncontrol(4).scala 73:60]
  wire [31:0] _rowcount_1_T_3 = count_1 - 32'h1; // @[ivncontrol(4).scala 74:41]
  wire [31:0] _rowcount_1_T_5 = count_1 - 32'h3; // @[ivncontrol(4).scala 76:41]
  wire [31:0] _GEN_69 = _T_31 & _T_15 | _T_14 & _T_23 | _T_18 & _T_17 & _T_23 ? _rowcount_1_T_5 : count_1; // @[ivncontrol(4).scala 66:21 75:371 76:29]
  wire [31:0] _GEN_70 = _T_12 & _T_17 | _T_12 & _T_23 | _T_17 & _T_23 ? _rowcount_1_T_3 : _GEN_69; // @[ivncontrol(4).scala 73:256 74:29]
  wire [31:0] _i_T_1 = i + 32'h1; // @[ivncontrol(4).scala 88:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[ivncontrol(4).scala 92:16]
  wire  _GEN_78 = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  valid = _T_10; // @[ivncontrol(4).scala 118:75 119:14 121:14]
  wire  _T_118 = rowcount_1 == 32'h2; // @[ivncontrol(4).scala 134:34]
  wire  _T_119 = rowcount_1 == 32'h1; // @[ivncontrol(4).scala 137:39]
  wire [4:0] _GEN_79 = rowcount_1 > 32'h2 ? 5'h1 : 5'h9; // @[ivncontrol(4).scala 108:17 139:46 140:29]
  wire [4:0] _GEN_80 = rowcount_1 > 32'h2 ? 5'h1 : 5'h18; // @[ivncontrol(4).scala 108:17 139:46 141:29]
  wire [4:0] _GEN_81 = rowcount_1 == 32'h1 ? 5'h1 : _GEN_79; // @[ivncontrol(4).scala 137:46 138:29]
  wire [4:0] _GEN_82 = rowcount_1 == 32'h1 ? 5'h18 : _GEN_80; // @[ivncontrol(4).scala 108:17 137:46]
  wire  _T_122 = rowcount_1 == 32'h3; // @[ivncontrol(4).scala 147:33]
  wire [4:0] _GEN_85 = rowcount_1 > 32'h3 ? 5'h1 : 5'h1d; // @[ivncontrol(4).scala 108:17 158:44 159:30]
  wire [4:0] _GEN_86 = rowcount_1 > 32'h3 ? 5'h1 : 5'h9; // @[ivncontrol(4).scala 108:17 158:44 160:29]
  wire [4:0] _GEN_87 = rowcount_1 > 32'h3 ? 5'h1 : 5'h18; // @[ivncontrol(4).scala 108:17 158:44 161:29]
  wire [4:0] _GEN_88 = _T_119 ? 5'h1 : _GEN_85; // @[ivncontrol(4).scala 155:46 156:31]
  wire [4:0] _GEN_89 = _T_119 ? 5'h9 : _GEN_86; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_90 = _T_119 ? 5'h18 : _GEN_87; // @[ivncontrol(4).scala 108:17 155:46]
  wire [4:0] _GEN_91 = _T_118 ? 5'h1 : _GEN_88; // @[ivncontrol(4).scala 151:46 152:29]
  wire [4:0] _GEN_92 = _T_118 ? 5'h1 : _GEN_89; // @[ivncontrol(4).scala 151:46 153:29]
  wire [4:0] _GEN_93 = _T_118 ? 5'h18 : _GEN_90; // @[ivncontrol(4).scala 108:17 151:46]
  wire [4:0] _GEN_94 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_91; // @[ivncontrol(4).scala 147:40 148:29]
  wire [4:0] _GEN_95 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_92; // @[ivncontrol(4).scala 147:40 149:29]
  wire [4:0] _GEN_96 = rowcount_1 == 32'h3 ? 5'h1 : _GEN_93; // @[ivncontrol(4).scala 147:40 150:29]
  wire [4:0] _GEN_97 = _T_119 ? 5'h1 : 5'h18; // @[ivncontrol(4).scala 108:17 171:42 172:29]
  wire [4:0] _GEN_98 = _T_119 ? 5'h1 : 5'h14; // @[ivncontrol(4).scala 108:17 188:46 189:29]
  wire [4:0] _GEN_99 = _T_118 ? 5'h1 : _GEN_98; // @[ivncontrol(4).scala 185:46 186:29]
  wire [4:0] _GEN_100 = _T_118 ? 5'h1 : 5'h1d; // @[ivncontrol(4).scala 108:17 185:46 187:29]
  wire [4:0] _GEN_101 = _T_122 ? 5'h1 : _GEN_99; // @[ivncontrol(4).scala 181:46 182:29]
  wire [4:0] _GEN_102 = _T_122 ? 5'h1 : _GEN_100; // @[ivncontrol(4).scala 181:46 183:29]
  wire [4:0] _GEN_103 = _T_122 ? 5'h1 : 5'h9; // @[ivncontrol(4).scala 108:17 181:46 184:29]
  wire [4:0] _GEN_104 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_101; // @[ivncontrol(4).scala 176:41 177:29]
  wire [4:0] _GEN_105 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_102; // @[ivncontrol(4).scala 176:41 178:29]
  wire [4:0] _GEN_106 = rowcount_1 == 32'h4 ? 5'h1 : _GEN_103; // @[ivncontrol(4).scala 176:41 179:29]
  wire [4:0] _GEN_107 = rowcount_1 == 32'h4 ? 5'h1 : 5'h18; // @[ivncontrol(4).scala 108:17 176:41 180:29]
  wire [4:0] _GEN_108 = rowcount_0 == 32'h4 ? 5'h0 : 5'h14; // @[ivncontrol(4).scala 108:17 191:42 192:25]
  wire [4:0] _GEN_109 = rowcount_0 == 32'h4 ? 5'h0 : 5'h1d; // @[ivncontrol(4).scala 108:17 191:42 193:25]
  wire [4:0] _GEN_110 = rowcount_0 == 32'h4 ? 5'h0 : 5'h9; // @[ivncontrol(4).scala 108:17 191:42 194:25]
  wire [4:0] _GEN_111 = rowcount_0 == 32'h4 ? 5'h0 : 5'h18; // @[ivncontrol(4).scala 108:17 191:42 195:25]
  wire [4:0] _GEN_112 = rowcount_0 == 32'h0 ? _GEN_104 : _GEN_108; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_113 = rowcount_0 == 32'h0 ? _GEN_105 : _GEN_109; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_114 = rowcount_0 == 32'h0 ? _GEN_106 : _GEN_110; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_115 = rowcount_0 == 32'h0 ? _GEN_107 : _GEN_111; // @[ivncontrol(4).scala 175:43]
  wire [4:0] _GEN_116 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_112; // @[ivncontrol(4).scala 167:43 168:25]
  wire [4:0] _GEN_117 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_113; // @[ivncontrol(4).scala 167:43 169:25]
  wire [4:0] _GEN_118 = rowcount_0 == 32'h3 ? 5'h0 : _GEN_114; // @[ivncontrol(4).scala 167:43 170:25]
  wire [4:0] _GEN_119 = rowcount_0 == 32'h3 ? _GEN_97 : _GEN_115; // @[ivncontrol(4).scala 167:43]
  assign io_o_vn_0 = i_vn_0; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_1 = i_vn_1; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_2 = i_vn_2; // @[ivncontrol(4).scala 105:13]
  assign io_o_vn_3 = i_vn_3; // @[ivncontrol(4).scala 105:13]
  always @(posedge clock) begin
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 132:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_0 <= 5'h0; // @[ivncontrol(4).scala 146:25]
      end else begin
        i_vn_0 <= _GEN_116;
      end
    end else begin
      i_vn_0 <= 5'h14; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        i_vn_1 <= 5'h0; // @[ivncontrol(4).scala 133:25]
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_1 <= _GEN_94;
      end else begin
        i_vn_1 <= _GEN_117;
      end
    end else begin
      i_vn_1 <= 5'h1d; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_2 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_2 <= 5'h1; // @[ivncontrol(4).scala 135:29]
        end else begin
          i_vn_2 <= _GEN_81;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_2 <= _GEN_95;
      end else begin
        i_vn_2 <= _GEN_118;
      end
    end else begin
      i_vn_2 <= 5'h9; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 15:23]
      i_vn_3 <= 5'h0; // @[ivncontrol(4).scala 15:23]
    end else if (_GEN_78) begin // @[ivncontrol(4).scala 129:28]
      if (rowcount_0 == 32'h2) begin // @[ivncontrol(4).scala 131:38]
        if (rowcount_1 == 32'h2) begin // @[ivncontrol(4).scala 134:42]
          i_vn_3 <= 5'h1; // @[ivncontrol(4).scala 136:29]
        end else begin
          i_vn_3 <= _GEN_82;
        end
      end else if (rowcount_0 == 32'h1) begin // @[ivncontrol(4).scala 145:43]
        i_vn_3 <= _GEN_96;
      end else begin
        i_vn_3 <= _GEN_119;
      end
    end else begin
      i_vn_3 <= 5'h18; // @[ivncontrol(4).scala 108:17]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_0 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      rowcount_0 <= count_0; // @[ivncontrol(4).scala 66:21]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_1 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end else if (i == 32'h3 & j == 32'h3) begin // @[ivncontrol(4).scala 59:75]
      if (io_Stationary_matrix_1_3 != 16'h0) begin // @[ivncontrol(4).scala 67:49]
        if (io_Stationary_matrix_1_0 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_1 != 16'h0 & io_Stationary_matrix_1_0 == 16'h0 & io_Stationary_matrix_1_2 == 16'h0 |
          io_Stationary_matrix_1_2 != 16'h0 & io_Stationary_matrix_1_1 == 16'h0 & io_Stationary_matrix_1_0 == 16'h0
          ) begin // @[ivncontrol(4).scala 71:361]
          rowcount_1 <= _rowcount_1_T_1; // @[ivncontrol(4).scala 72:29]
        end else begin
          rowcount_1 <= _GEN_70;
        end
      end else begin
        rowcount_1 <= count_1; // @[ivncontrol(4).scala 66:21]
      end
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_2 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 19:27]
      rowcount_3 <= 32'h0; // @[ivncontrol(4).scala 19:27]
    end
    if (reset) begin // @[ivncontrol(4).scala 31:20]
      i <= 32'h0; // @[ivncontrol(4).scala 31:20]
    end else if (i < 32'h3 & _T_9) begin // @[ivncontrol(4).scala 87:74]
      i <= _i_T_1; // @[ivncontrol(4).scala 88:11]
    end
    if (reset) begin // @[ivncontrol(4).scala 32:20]
      j <= 32'h0; // @[ivncontrol(4).scala 32:20]
    end else if (j < 32'h3 & i <= 32'h3) begin // @[ivncontrol(4).scala 91:71]
      j <= _j_T_1; // @[ivncontrol(4).scala 92:11]
    end else if (!(_T_10)) begin // @[ivncontrol(4).scala 94:81]
      j <= 32'h0; // @[ivncontrol(4).scala 98:11]
    end
    if (2'h0 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h0 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_0_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h1 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_1_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h2 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_2_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h0 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_0 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h1 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_1 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h2 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_2 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (2'h3 == i[1:0] & 2'h3 == j[1:0]) begin // @[ivncontrol(4).scala 44:15]
      mat_3_3 <= _mat_T_T_1; // @[ivncontrol(4).scala 44:15]
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h0 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_0 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h1 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_1 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h2 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_2 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
        end
      end
    end
    if (~_GEN_64) begin // @[ivncontrol(4).scala 45:28]
      if (_GEN_31 != 16'h0) begin // @[ivncontrol(4).scala 46:51]
        if (2'h3 == i[1:0]) begin // @[ivncontrol(4).scala 47:22]
          count_3 <= _count_T_2; // @[ivncontrol(4).scala 47:22]
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
  i_vn_0 = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  i_vn_1 = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  i_vn_2 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  i_vn_3 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  rowcount_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  rowcount_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  rowcount_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  rowcount_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  i = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  j = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  mat_0_0 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  mat_0_1 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  mat_0_2 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  mat_0_3 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  mat_1_0 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  mat_1_1 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  mat_1_2 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  mat_1_3 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  mat_2_0 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  mat_2_1 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  mat_2_2 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  mat_2_3 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  mat_3_0 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  mat_3_1 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  mat_3_2 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  mat_3_3 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  count_0 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  count_1 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  count_2 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  count_3 = _RAND_29[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module flexdpecom4_3(
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
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  output [15:0] io_o_adder_0,
  output [15:0] io_o_adder_1,
  output [15:0] io_o_adder_2,
  input  [3:0]  io_i_mux_bus_0,
  input  [3:0]  io_i_mux_bus_1,
  input  [3:0]  io_i_mux_bus_2,
  input  [3:0]  io_i_mux_bus_3
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
  wire  my_ivn_clock; // @[FlexDPE.scala 53:23]
  wire  my_ivn_reset; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_0_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_1_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_2_3; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_0; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_1; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_2; // @[FlexDPE.scala 53:23]
  wire [15:0] my_ivn_io_Stationary_matrix_3_3; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_0; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_1; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_2; // @[FlexDPE.scala 53:23]
  wire [4:0] my_ivn_io_o_vn_3; // @[FlexDPE.scala 53:23]
  wire  my_controller_clock; // @[FlexDPE.scala 57:31]
  wire  my_controller_reset; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_0; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_1; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_2; // @[FlexDPE.scala 57:31]
  wire [4:0] my_controller_io_i_vn_3; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 57:31]
  wire [2:0] my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 57:31]
  wire  my_controller_io_o_reduction_valid; // @[FlexDPE.scala 57:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_0; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_1; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_2; // @[FlexDPE.scala 66:26]
  wire [3:0] my_Benes_io_i_mux_bus_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 66:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 66:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPE.scala 77:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPE.scala 77:30]
  wire  my_fan_network_clock; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_reset; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_valid; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPE.scala 89:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_0; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_1; // @[FlexDPE.scala 89:32]
  wire [2:0] my_fan_network_io_i_cmd_bus_2; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_1; // @[FlexDPE.scala 89:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPE.scala 89:32]
  reg [14:0] r_mult_0; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_1; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_2; // @[FlexDPE.scala 32:26]
  reg [14:0] r_mult_3; // @[FlexDPE.scala 32:26]
  reg [15:0] matrix_0_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_0_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_1_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_2_3; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_0; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_1; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_2; // @[FlexDPE.scala 33:21]
  reg [15:0] matrix_3_3; // @[FlexDPE.scala 33:21]
  wire [15:0] _GEN_0 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_1 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_2 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPE.scala 32:{26,26} 83:14]
  wire [15:0] _GEN_3 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPE.scala 32:{26,26} 83:14]
  ivncontrol4_3 my_ivn ( // @[FlexDPE.scala 53:23]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(my_ivn_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(my_ivn_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(my_ivn_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(my_ivn_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(my_ivn_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(my_ivn_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(my_ivn_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(my_ivn_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(my_ivn_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(my_ivn_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(my_ivn_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(my_ivn_io_Stationary_matrix_3_3),
    .io_o_vn_0(my_ivn_io_o_vn_0),
    .io_o_vn_1(my_ivn_io_o_vn_1),
    .io_o_vn_2(my_ivn_io_o_vn_2),
    .io_o_vn_3(my_ivn_io_o_vn_3)
  );
  fancontrol4 my_controller ( // @[FlexDPE.scala 57:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_vn_0(my_controller_io_i_vn_0),
    .io_i_vn_1(my_controller_io_i_vn_1),
    .io_i_vn_2(my_controller_io_i_vn_2),
    .io_i_vn_3(my_controller_io_i_vn_3),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2),
    .io_o_reduction_cmd_0(my_controller_io_o_reduction_cmd_0),
    .io_o_reduction_cmd_1(my_controller_io_o_reduction_cmd_1),
    .io_o_reduction_cmd_2(my_controller_io_o_reduction_cmd_2),
    .io_o_reduction_valid(my_controller_io_o_reduction_valid)
  );
  Benes my_Benes ( // @[FlexDPE.scala 66:26]
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
  buffer_multiplication buffer_mult ( // @[FlexDPE.scala 77:30]
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
  Fan4 my_fan_network ( // @[FlexDPE.scala 89:32]
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
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_1 = my_fan_network_io_o_adder_1[15:0]; // @[FlexDPE.scala 98:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPE.scala 98:16]
  assign my_ivn_clock = clock;
  assign my_ivn_reset = reset;
  assign my_ivn_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPE.scala 54:33]
  assign my_ivn_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPE.scala 54:33]
  assign my_controller_clock = clock;
  assign my_controller_reset = reset;
  assign my_controller_io_i_vn_0 = my_ivn_io_o_vn_0; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_1 = my_ivn_io_o_vn_1; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_2 = my_ivn_io_o_vn_2; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_vn_3 = my_ivn_io_o_vn_3; // @[FlexDPE.scala 59:27]
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPE.scala 61:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPE.scala 69:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPE.scala 68:29]
  assign my_Benes_io_i_mux_bus_0 = io_i_mux_bus_0; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_1 = io_i_mux_bus_1; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_2 = io_i_mux_bus_2; // @[FlexDPE.scala 70:27]
  assign my_Benes_io_i_mux_bus_3 = io_i_mux_bus_3; // @[FlexDPE.scala 70:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPE.scala 80:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPE.scala 81:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPE.scala 81:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_valid = my_controller_io_o_reduction_valid; // @[FlexDPE.scala 91:31]
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPE.scala 92:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPE.scala 93:36]
  assign my_fan_network_io_i_cmd_bus_0 = my_controller_io_o_reduction_cmd_0; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_1 = my_controller_io_o_reduction_cmd_1; // @[FlexDPE.scala 94:33]
  assign my_fan_network_io_i_cmd_bus_2 = my_controller_io_o_reduction_cmd_2; // @[FlexDPE.scala 94:33]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_0[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_1 <= _GEN_1[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_2 <= _GEN_2[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    r_mult_3 <= _GEN_3[14:0]; // @[FlexDPE.scala 32:{26,26} 83:14]
    matrix_0_0 <= matrix_0_0; // @[FlexDPE.scala 33:21]
    matrix_0_1 <= matrix_0_1; // @[FlexDPE.scala 33:21]
    matrix_0_2 <= matrix_0_2; // @[FlexDPE.scala 33:21]
    matrix_0_3 <= matrix_0_3; // @[FlexDPE.scala 33:21]
    matrix_1_0 <= matrix_1_0; // @[FlexDPE.scala 33:21]
    matrix_1_1 <= matrix_1_1; // @[FlexDPE.scala 33:21]
    matrix_1_2 <= matrix_1_2; // @[FlexDPE.scala 33:21]
    matrix_1_3 <= matrix_1_3; // @[FlexDPE.scala 33:21]
    matrix_2_0 <= matrix_2_0; // @[FlexDPE.scala 33:21]
    matrix_2_1 <= matrix_2_1; // @[FlexDPE.scala 33:21]
    matrix_2_2 <= matrix_2_2; // @[FlexDPE.scala 33:21]
    matrix_2_3 <= matrix_2_3; // @[FlexDPE.scala 33:21]
    matrix_3_0 <= matrix_3_0; // @[FlexDPE.scala 33:21]
    matrix_3_1 <= matrix_3_1; // @[FlexDPE.scala 33:21]
    matrix_3_2 <= matrix_3_2; // @[FlexDPE.scala 33:21]
    matrix_3_3 <= matrix_3_3; // @[FlexDPE.scala 33:21]
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
  matrix_0_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  matrix_0_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  matrix_0_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  matrix_0_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  matrix_1_0 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  matrix_1_1 = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  matrix_1_2 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  matrix_1_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  matrix_2_0 = _RAND_12[15:0];
  _RAND_13 = {1{`RANDOM}};
  matrix_2_1 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  matrix_2_2 = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  matrix_2_3 = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  matrix_3_0 = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  matrix_3_1 = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  matrix_3_2 = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  matrix_3_3 = _RAND_19[15:0];
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
  input  [31:0] io_CalFDE,
  input  [4:0]  io_i_vn_0,
  input  [4:0]  io_i_vn_1,
  input  [4:0]  io_i_vn_2,
  input  [4:0]  io_i_vn_3,
  input         io_i_stationary,
  input         io_i_data_valid,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_0_2,
  input  [15:0] io_Stationary_matrix_0_3,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Stationary_matrix_1_2,
  input  [15:0] io_Stationary_matrix_1_3,
  input  [15:0] io_Stationary_matrix_2_0,
  input  [15:0] io_Stationary_matrix_2_1,
  input  [15:0] io_Stationary_matrix_2_2,
  input  [15:0] io_Stationary_matrix_2_3,
  input  [15:0] io_Stationary_matrix_3_0,
  input  [15:0] io_Stationary_matrix_3_1,
  input  [15:0] io_Stationary_matrix_3_2,
  input  [15:0] io_Stationary_matrix_3_3,
  input  [15:0] io_Streaming_matrix_0_0,
  input  [15:0] io_Streaming_matrix_0_1,
  input  [15:0] io_Streaming_matrix_0_2,
  input  [15:0] io_Streaming_matrix_0_3,
  input  [15:0] io_Streaming_matrix_1_0,
  input  [15:0] io_Streaming_matrix_1_1,
  input  [15:0] io_Streaming_matrix_1_2,
  input  [15:0] io_Streaming_matrix_1_3,
  input  [15:0] io_Streaming_matrix_2_0,
  input  [15:0] io_Streaming_matrix_2_1,
  input  [15:0] io_Streaming_matrix_2_2,
  input  [15:0] io_Streaming_matrix_2_3,
  input  [15:0] io_Streaming_matrix_3_0,
  input  [15:0] io_Streaming_matrix_3_1,
  input  [15:0] io_Streaming_matrix_3_2,
  input  [15:0] io_Streaming_matrix_3_3
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
  wire  PathFinder_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_1_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_1_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_1_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_1_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_1_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_1_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_1_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_1_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_1_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_1_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_2_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_2_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_2_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_2_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_2_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_2_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_2_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_2_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_2_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_2_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_3_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_3_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_3_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_3_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_3_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_3_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_3_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_3_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_3_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_3_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_4_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_4_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_4_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_4_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_4_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_4_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_4_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_4_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_4_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_4_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_5_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_5_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_5_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_5_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_5_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_5_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_5_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_5_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_5_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_5_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_6_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_6_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_6_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_6_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_6_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_6_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_6_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_6_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_6_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_6_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_7_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_7_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_7_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_7_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_7_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_7_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_7_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_7_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_7_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_7_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_8_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_8_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_8_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_8_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_8_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_8_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_8_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_8_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_8_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_8_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_9_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_9_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_9_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_9_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_9_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_9_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_9_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_9_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_9_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_9_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_10_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_10_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_10_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_10_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_10_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_10_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_10_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_10_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_10_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_10_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_11_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_11_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_11_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_11_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_11_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_11_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_11_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_11_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_11_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_11_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_12_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_12_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_12_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_12_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_12_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_12_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_12_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_12_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_12_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_12_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_13_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_13_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_13_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_13_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_13_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_13_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_13_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_13_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_13_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_13_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_14_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_14_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_14_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_14_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_14_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_14_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_14_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_14_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_14_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_14_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  PathFinder_15_clock; // @[FlexDPU.scala 74:41]
  wire  PathFinder_15_reset; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Streaming_matrix_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Streaming_matrix_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Streaming_matrix_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Streaming_matrix_3; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_15_io_i_mux_bus_0; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_15_io_i_mux_bus_1; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_15_io_i_mux_bus_2; // @[FlexDPU.scala 74:41]
  wire [3:0] PathFinder_15_io_i_mux_bus_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Source_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Source_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Source_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_Source_3; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_destination_0; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_destination_1; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_destination_2; // @[FlexDPU.scala 74:41]
  wire [15:0] PathFinder_15_io_destination_3; // @[FlexDPU.scala 74:41]
  wire  PathFinder_15_io_PF_Valid; // @[FlexDPU.scala 74:41]
  wire [31:0] PathFinder_15_io_NoDPE; // @[FlexDPU.scala 74:41]
  wire  PathFinder_15_io_DataValid; // @[FlexDPU.scala 74:41]
  wire  flexdpecom4_clock; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_reset; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_io_i_data_valid; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_i_data_bus2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_o_adder_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_o_adder_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_io_o_adder_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_0; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_1; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_io_i_mux_bus_3; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_1_clock; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_1_reset; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_1_io_i_data_valid; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_i_data_bus2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_o_adder_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_o_adder_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_1_io_o_adder_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_1_io_i_mux_bus_0; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_1_io_i_mux_bus_1; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_1_io_i_mux_bus_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_1_io_i_mux_bus_3; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_2_clock; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_2_reset; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_2_io_i_data_valid; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_i_data_bus2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_o_adder_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_o_adder_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_2_io_o_adder_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_2_io_i_mux_bus_0; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_2_io_i_mux_bus_1; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_2_io_i_mux_bus_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_2_io_i_mux_bus_3; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_3_clock; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_3_reset; // @[FlexDPU.scala 107:46]
  wire  flexdpecom4_3_io_i_data_valid; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_i_data_bus2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_o_adder_0; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_o_adder_1; // @[FlexDPU.scala 107:46]
  wire [15:0] flexdpecom4_3_io_o_adder_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_3_io_i_mux_bus_0; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_3_io_i_mux_bus_1; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_3_io_i_mux_bus_2; // @[FlexDPU.scala 107:46]
  wire [3:0] flexdpecom4_3_io_i_mux_bus_3; // @[FlexDPU.scala 107:46]
  reg [31:0] used_FlexDPE_0; // @[FlexDPU.scala 16:27]
  reg [31:0] used_FlexDPE_1; // @[FlexDPU.scala 16:27]
  wire [31:0] equalDistribution = io_CalFDE / 2'h2; // @[FlexDPU.scala 18:39]
  wire [31:0] _GEN_0 = io_CalFDE % 32'h2; // @[FlexDPU.scala 19:43]
  wire [1:0] remainingDistribution = _GEN_0[1:0]; // @[FlexDPU.scala 19:43]
  wire [31:0] _used_FlexDPE_0_T_2 = equalDistribution + 32'h1; // @[FlexDPU.scala 22:73]
  reg [31:0] iloop; // @[FlexDPU.scala 30:24]
  reg [31:0] jloop; // @[FlexDPU.scala 31:24]
  reg  Statvalid; // @[FlexDPU.scala 32:28]
  wire  _Statvalid_T_1 = jloop == 32'h3; // @[FlexDPU.scala 34:61]
  wire  _Statvalid_T_2 = iloop == 32'h3 & jloop == 32'h3; // @[FlexDPU.scala 34:51]
  wire [31:0] _iloop_T_1 = iloop + 32'h1; // @[FlexDPU.scala 41:24]
  wire [31:0] _jloop_T_1 = jloop + 32'h1; // @[FlexDPU.scala 45:24]
  reg [31:0] PF1_Stream_Col_0; // @[FlexDPU.scala 58:33]
  reg [31:0] PF1_Stream_Col_1; // @[FlexDPU.scala 58:33]
  reg [31:0] PF1_Stream_Col_2; // @[FlexDPU.scala 58:33]
  reg [31:0] PF1_Stream_Col_3; // @[FlexDPU.scala 58:33]
  reg [31:0] ModuleIndex; // @[FlexDPU.scala 59:30]
  wire [31:0] _ModuleIndex_T_1 = ModuleIndex + 32'h1; // @[FlexDPU.scala 146:40]
  wire  PF_0_PF_Valid = PathFinder_io_PF_Valid; // @[FlexDPU.scala 74:{21,21}]
  wire [15:0] _GEN_71 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_0_1 : io_Streaming_matrix_0_0; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_72 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_0_2 : _GEN_71; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_73 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_0_3 : _GEN_72; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_75 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_1_1 : io_Streaming_matrix_1_0; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_76 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_1_2 : _GEN_75; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_77 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_1_3 : _GEN_76; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_79 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_2_1 : io_Streaming_matrix_2_0; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_80 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_2_2 : _GEN_79; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_81 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_2_3 : _GEN_80; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_83 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_3_1 : io_Streaming_matrix_3_0; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_84 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_3_2 : _GEN_83; // @[FlexDPU.scala 156:{31,31}]
  wire [15:0] _GEN_85 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_3_3 : _GEN_84; // @[FlexDPU.scala 156:{31,31}]
  wire [31:0] _GEN_104 = Statvalid ? PF1_Stream_Col_0 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [31:0] _GEN_105 = Statvalid ? PF1_Stream_Col_1 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [31:0] _GEN_106 = Statvalid ? PF1_Stream_Col_2 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [31:0] _GEN_107 = Statvalid ? PF1_Stream_Col_3 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [1:0] _GEN_193 = Statvalid ? 2'h2 : 2'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [1:0] _GEN_214 = Statvalid ? 2'h3 : 2'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [2:0] _GEN_235 = Statvalid ? 3'h4 : 3'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [2:0] _GEN_256 = Statvalid ? 3'h5 : 3'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [2:0] _GEN_277 = Statvalid ? 3'h6 : 3'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [2:0] _GEN_298 = Statvalid ? 3'h7 : 3'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_319 = Statvalid ? 4'h8 : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_340 = Statvalid ? 4'h9 : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_361 = Statvalid ? 4'ha : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_382 = Statvalid ? 4'hb : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_403 = Statvalid ? 4'hc : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_424 = Statvalid ? 4'hd : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_445 = Statvalid ? 4'he : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [3:0] _GEN_466 = Statvalid ? 4'hf : 4'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [15:0] FDPE_0_o_adder_0 = flexdpecom4_io_o_adder_0; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_0_o_adder_1 = flexdpecom4_io_o_adder_1; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_0_o_adder_2 = flexdpecom4_io_o_adder_2; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_1_o_adder_0 = flexdpecom4_1_io_o_adder_0; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_1_o_adder_1 = flexdpecom4_1_io_o_adder_1; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_1_o_adder_2 = flexdpecom4_1_io_o_adder_2; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_2_o_adder_0 = flexdpecom4_2_io_o_adder_0; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_2_o_adder_1 = flexdpecom4_2_io_o_adder_1; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_2_o_adder_2 = flexdpecom4_2_io_o_adder_2; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_3_o_adder_0 = flexdpecom4_3_io_o_adder_0; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_3_o_adder_1 = flexdpecom4_3_io_o_adder_1; // @[FlexDPU.scala 107:{27,27}]
  wire [15:0] FDPE_3_o_adder_2 = flexdpecom4_3_io_o_adder_2; // @[FlexDPU.scala 107:{27,27}]
  PathFinder PathFinder ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_clock),
    .reset(PathFinder_reset),
    .io_Stationary_matrix_0_0(PathFinder_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_io_i_mux_bus_3),
    .io_Source_0(PathFinder_io_Source_0),
    .io_Source_1(PathFinder_io_Source_1),
    .io_Source_2(PathFinder_io_Source_2),
    .io_Source_3(PathFinder_io_Source_3),
    .io_destination_0(PathFinder_io_destination_0),
    .io_destination_1(PathFinder_io_destination_1),
    .io_destination_2(PathFinder_io_destination_2),
    .io_destination_3(PathFinder_io_destination_3),
    .io_PF_Valid(PathFinder_io_PF_Valid),
    .io_NoDPE(PathFinder_io_NoDPE),
    .io_DataValid(PathFinder_io_DataValid)
  );
  PathFinder PathFinder_1 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_1_clock),
    .reset(PathFinder_1_reset),
    .io_Stationary_matrix_0_0(PathFinder_1_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_1_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_1_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_1_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_1_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_1_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_1_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_1_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_1_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_1_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_1_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_1_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_1_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_1_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_1_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_1_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_1_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_1_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_1_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_1_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_1_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_1_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_1_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_1_io_i_mux_bus_3),
    .io_Source_0(PathFinder_1_io_Source_0),
    .io_Source_1(PathFinder_1_io_Source_1),
    .io_Source_2(PathFinder_1_io_Source_2),
    .io_Source_3(PathFinder_1_io_Source_3),
    .io_destination_0(PathFinder_1_io_destination_0),
    .io_destination_1(PathFinder_1_io_destination_1),
    .io_destination_2(PathFinder_1_io_destination_2),
    .io_destination_3(PathFinder_1_io_destination_3),
    .io_PF_Valid(PathFinder_1_io_PF_Valid),
    .io_NoDPE(PathFinder_1_io_NoDPE),
    .io_DataValid(PathFinder_1_io_DataValid)
  );
  PathFinder PathFinder_2 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_2_clock),
    .reset(PathFinder_2_reset),
    .io_Stationary_matrix_0_0(PathFinder_2_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_2_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_2_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_2_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_2_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_2_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_2_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_2_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_2_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_2_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_2_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_2_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_2_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_2_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_2_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_2_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_2_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_2_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_2_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_2_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_2_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_2_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_2_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_2_io_i_mux_bus_3),
    .io_Source_0(PathFinder_2_io_Source_0),
    .io_Source_1(PathFinder_2_io_Source_1),
    .io_Source_2(PathFinder_2_io_Source_2),
    .io_Source_3(PathFinder_2_io_Source_3),
    .io_destination_0(PathFinder_2_io_destination_0),
    .io_destination_1(PathFinder_2_io_destination_1),
    .io_destination_2(PathFinder_2_io_destination_2),
    .io_destination_3(PathFinder_2_io_destination_3),
    .io_PF_Valid(PathFinder_2_io_PF_Valid),
    .io_NoDPE(PathFinder_2_io_NoDPE),
    .io_DataValid(PathFinder_2_io_DataValid)
  );
  PathFinder PathFinder_3 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_3_clock),
    .reset(PathFinder_3_reset),
    .io_Stationary_matrix_0_0(PathFinder_3_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_3_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_3_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_3_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_3_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_3_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_3_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_3_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_3_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_3_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_3_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_3_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_3_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_3_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_3_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_3_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_3_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_3_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_3_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_3_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_3_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_3_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_3_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_3_io_i_mux_bus_3),
    .io_Source_0(PathFinder_3_io_Source_0),
    .io_Source_1(PathFinder_3_io_Source_1),
    .io_Source_2(PathFinder_3_io_Source_2),
    .io_Source_3(PathFinder_3_io_Source_3),
    .io_destination_0(PathFinder_3_io_destination_0),
    .io_destination_1(PathFinder_3_io_destination_1),
    .io_destination_2(PathFinder_3_io_destination_2),
    .io_destination_3(PathFinder_3_io_destination_3),
    .io_PF_Valid(PathFinder_3_io_PF_Valid),
    .io_NoDPE(PathFinder_3_io_NoDPE),
    .io_DataValid(PathFinder_3_io_DataValid)
  );
  PathFinder PathFinder_4 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_4_clock),
    .reset(PathFinder_4_reset),
    .io_Stationary_matrix_0_0(PathFinder_4_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_4_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_4_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_4_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_4_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_4_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_4_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_4_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_4_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_4_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_4_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_4_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_4_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_4_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_4_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_4_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_4_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_4_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_4_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_4_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_4_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_4_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_4_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_4_io_i_mux_bus_3),
    .io_Source_0(PathFinder_4_io_Source_0),
    .io_Source_1(PathFinder_4_io_Source_1),
    .io_Source_2(PathFinder_4_io_Source_2),
    .io_Source_3(PathFinder_4_io_Source_3),
    .io_destination_0(PathFinder_4_io_destination_0),
    .io_destination_1(PathFinder_4_io_destination_1),
    .io_destination_2(PathFinder_4_io_destination_2),
    .io_destination_3(PathFinder_4_io_destination_3),
    .io_PF_Valid(PathFinder_4_io_PF_Valid),
    .io_NoDPE(PathFinder_4_io_NoDPE),
    .io_DataValid(PathFinder_4_io_DataValid)
  );
  PathFinder PathFinder_5 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_5_clock),
    .reset(PathFinder_5_reset),
    .io_Stationary_matrix_0_0(PathFinder_5_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_5_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_5_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_5_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_5_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_5_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_5_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_5_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_5_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_5_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_5_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_5_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_5_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_5_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_5_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_5_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_5_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_5_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_5_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_5_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_5_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_5_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_5_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_5_io_i_mux_bus_3),
    .io_Source_0(PathFinder_5_io_Source_0),
    .io_Source_1(PathFinder_5_io_Source_1),
    .io_Source_2(PathFinder_5_io_Source_2),
    .io_Source_3(PathFinder_5_io_Source_3),
    .io_destination_0(PathFinder_5_io_destination_0),
    .io_destination_1(PathFinder_5_io_destination_1),
    .io_destination_2(PathFinder_5_io_destination_2),
    .io_destination_3(PathFinder_5_io_destination_3),
    .io_PF_Valid(PathFinder_5_io_PF_Valid),
    .io_NoDPE(PathFinder_5_io_NoDPE),
    .io_DataValid(PathFinder_5_io_DataValid)
  );
  PathFinder PathFinder_6 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_6_clock),
    .reset(PathFinder_6_reset),
    .io_Stationary_matrix_0_0(PathFinder_6_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_6_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_6_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_6_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_6_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_6_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_6_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_6_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_6_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_6_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_6_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_6_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_6_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_6_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_6_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_6_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_6_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_6_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_6_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_6_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_6_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_6_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_6_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_6_io_i_mux_bus_3),
    .io_Source_0(PathFinder_6_io_Source_0),
    .io_Source_1(PathFinder_6_io_Source_1),
    .io_Source_2(PathFinder_6_io_Source_2),
    .io_Source_3(PathFinder_6_io_Source_3),
    .io_destination_0(PathFinder_6_io_destination_0),
    .io_destination_1(PathFinder_6_io_destination_1),
    .io_destination_2(PathFinder_6_io_destination_2),
    .io_destination_3(PathFinder_6_io_destination_3),
    .io_PF_Valid(PathFinder_6_io_PF_Valid),
    .io_NoDPE(PathFinder_6_io_NoDPE),
    .io_DataValid(PathFinder_6_io_DataValid)
  );
  PathFinder PathFinder_7 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_7_clock),
    .reset(PathFinder_7_reset),
    .io_Stationary_matrix_0_0(PathFinder_7_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_7_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_7_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_7_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_7_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_7_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_7_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_7_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_7_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_7_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_7_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_7_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_7_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_7_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_7_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_7_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_7_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_7_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_7_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_7_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_7_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_7_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_7_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_7_io_i_mux_bus_3),
    .io_Source_0(PathFinder_7_io_Source_0),
    .io_Source_1(PathFinder_7_io_Source_1),
    .io_Source_2(PathFinder_7_io_Source_2),
    .io_Source_3(PathFinder_7_io_Source_3),
    .io_destination_0(PathFinder_7_io_destination_0),
    .io_destination_1(PathFinder_7_io_destination_1),
    .io_destination_2(PathFinder_7_io_destination_2),
    .io_destination_3(PathFinder_7_io_destination_3),
    .io_PF_Valid(PathFinder_7_io_PF_Valid),
    .io_NoDPE(PathFinder_7_io_NoDPE),
    .io_DataValid(PathFinder_7_io_DataValid)
  );
  PathFinder PathFinder_8 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_8_clock),
    .reset(PathFinder_8_reset),
    .io_Stationary_matrix_0_0(PathFinder_8_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_8_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_8_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_8_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_8_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_8_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_8_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_8_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_8_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_8_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_8_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_8_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_8_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_8_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_8_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_8_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_8_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_8_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_8_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_8_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_8_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_8_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_8_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_8_io_i_mux_bus_3),
    .io_Source_0(PathFinder_8_io_Source_0),
    .io_Source_1(PathFinder_8_io_Source_1),
    .io_Source_2(PathFinder_8_io_Source_2),
    .io_Source_3(PathFinder_8_io_Source_3),
    .io_destination_0(PathFinder_8_io_destination_0),
    .io_destination_1(PathFinder_8_io_destination_1),
    .io_destination_2(PathFinder_8_io_destination_2),
    .io_destination_3(PathFinder_8_io_destination_3),
    .io_PF_Valid(PathFinder_8_io_PF_Valid),
    .io_NoDPE(PathFinder_8_io_NoDPE),
    .io_DataValid(PathFinder_8_io_DataValid)
  );
  PathFinder PathFinder_9 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_9_clock),
    .reset(PathFinder_9_reset),
    .io_Stationary_matrix_0_0(PathFinder_9_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_9_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_9_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_9_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_9_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_9_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_9_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_9_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_9_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_9_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_9_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_9_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_9_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_9_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_9_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_9_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_9_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_9_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_9_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_9_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_9_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_9_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_9_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_9_io_i_mux_bus_3),
    .io_Source_0(PathFinder_9_io_Source_0),
    .io_Source_1(PathFinder_9_io_Source_1),
    .io_Source_2(PathFinder_9_io_Source_2),
    .io_Source_3(PathFinder_9_io_Source_3),
    .io_destination_0(PathFinder_9_io_destination_0),
    .io_destination_1(PathFinder_9_io_destination_1),
    .io_destination_2(PathFinder_9_io_destination_2),
    .io_destination_3(PathFinder_9_io_destination_3),
    .io_PF_Valid(PathFinder_9_io_PF_Valid),
    .io_NoDPE(PathFinder_9_io_NoDPE),
    .io_DataValid(PathFinder_9_io_DataValid)
  );
  PathFinder PathFinder_10 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_10_clock),
    .reset(PathFinder_10_reset),
    .io_Stationary_matrix_0_0(PathFinder_10_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_10_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_10_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_10_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_10_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_10_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_10_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_10_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_10_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_10_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_10_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_10_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_10_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_10_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_10_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_10_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_10_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_10_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_10_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_10_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_10_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_10_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_10_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_10_io_i_mux_bus_3),
    .io_Source_0(PathFinder_10_io_Source_0),
    .io_Source_1(PathFinder_10_io_Source_1),
    .io_Source_2(PathFinder_10_io_Source_2),
    .io_Source_3(PathFinder_10_io_Source_3),
    .io_destination_0(PathFinder_10_io_destination_0),
    .io_destination_1(PathFinder_10_io_destination_1),
    .io_destination_2(PathFinder_10_io_destination_2),
    .io_destination_3(PathFinder_10_io_destination_3),
    .io_PF_Valid(PathFinder_10_io_PF_Valid),
    .io_NoDPE(PathFinder_10_io_NoDPE),
    .io_DataValid(PathFinder_10_io_DataValid)
  );
  PathFinder PathFinder_11 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_11_clock),
    .reset(PathFinder_11_reset),
    .io_Stationary_matrix_0_0(PathFinder_11_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_11_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_11_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_11_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_11_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_11_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_11_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_11_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_11_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_11_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_11_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_11_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_11_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_11_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_11_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_11_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_11_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_11_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_11_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_11_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_11_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_11_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_11_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_11_io_i_mux_bus_3),
    .io_Source_0(PathFinder_11_io_Source_0),
    .io_Source_1(PathFinder_11_io_Source_1),
    .io_Source_2(PathFinder_11_io_Source_2),
    .io_Source_3(PathFinder_11_io_Source_3),
    .io_destination_0(PathFinder_11_io_destination_0),
    .io_destination_1(PathFinder_11_io_destination_1),
    .io_destination_2(PathFinder_11_io_destination_2),
    .io_destination_3(PathFinder_11_io_destination_3),
    .io_PF_Valid(PathFinder_11_io_PF_Valid),
    .io_NoDPE(PathFinder_11_io_NoDPE),
    .io_DataValid(PathFinder_11_io_DataValid)
  );
  PathFinder PathFinder_12 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_12_clock),
    .reset(PathFinder_12_reset),
    .io_Stationary_matrix_0_0(PathFinder_12_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_12_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_12_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_12_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_12_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_12_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_12_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_12_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_12_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_12_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_12_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_12_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_12_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_12_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_12_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_12_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_12_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_12_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_12_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_12_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_12_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_12_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_12_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_12_io_i_mux_bus_3),
    .io_Source_0(PathFinder_12_io_Source_0),
    .io_Source_1(PathFinder_12_io_Source_1),
    .io_Source_2(PathFinder_12_io_Source_2),
    .io_Source_3(PathFinder_12_io_Source_3),
    .io_destination_0(PathFinder_12_io_destination_0),
    .io_destination_1(PathFinder_12_io_destination_1),
    .io_destination_2(PathFinder_12_io_destination_2),
    .io_destination_3(PathFinder_12_io_destination_3),
    .io_PF_Valid(PathFinder_12_io_PF_Valid),
    .io_NoDPE(PathFinder_12_io_NoDPE),
    .io_DataValid(PathFinder_12_io_DataValid)
  );
  PathFinder PathFinder_13 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_13_clock),
    .reset(PathFinder_13_reset),
    .io_Stationary_matrix_0_0(PathFinder_13_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_13_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_13_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_13_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_13_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_13_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_13_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_13_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_13_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_13_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_13_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_13_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_13_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_13_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_13_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_13_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_13_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_13_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_13_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_13_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_13_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_13_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_13_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_13_io_i_mux_bus_3),
    .io_Source_0(PathFinder_13_io_Source_0),
    .io_Source_1(PathFinder_13_io_Source_1),
    .io_Source_2(PathFinder_13_io_Source_2),
    .io_Source_3(PathFinder_13_io_Source_3),
    .io_destination_0(PathFinder_13_io_destination_0),
    .io_destination_1(PathFinder_13_io_destination_1),
    .io_destination_2(PathFinder_13_io_destination_2),
    .io_destination_3(PathFinder_13_io_destination_3),
    .io_PF_Valid(PathFinder_13_io_PF_Valid),
    .io_NoDPE(PathFinder_13_io_NoDPE),
    .io_DataValid(PathFinder_13_io_DataValid)
  );
  PathFinder PathFinder_14 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_14_clock),
    .reset(PathFinder_14_reset),
    .io_Stationary_matrix_0_0(PathFinder_14_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_14_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_14_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_14_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_14_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_14_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_14_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_14_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_14_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_14_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_14_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_14_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_14_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_14_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_14_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_14_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_14_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_14_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_14_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_14_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_14_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_14_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_14_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_14_io_i_mux_bus_3),
    .io_Source_0(PathFinder_14_io_Source_0),
    .io_Source_1(PathFinder_14_io_Source_1),
    .io_Source_2(PathFinder_14_io_Source_2),
    .io_Source_3(PathFinder_14_io_Source_3),
    .io_destination_0(PathFinder_14_io_destination_0),
    .io_destination_1(PathFinder_14_io_destination_1),
    .io_destination_2(PathFinder_14_io_destination_2),
    .io_destination_3(PathFinder_14_io_destination_3),
    .io_PF_Valid(PathFinder_14_io_PF_Valid),
    .io_NoDPE(PathFinder_14_io_NoDPE),
    .io_DataValid(PathFinder_14_io_DataValid)
  );
  PathFinder PathFinder_15 ( // @[FlexDPU.scala 74:41]
    .clock(PathFinder_15_clock),
    .reset(PathFinder_15_reset),
    .io_Stationary_matrix_0_0(PathFinder_15_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PathFinder_15_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(PathFinder_15_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(PathFinder_15_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(PathFinder_15_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PathFinder_15_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(PathFinder_15_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(PathFinder_15_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(PathFinder_15_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(PathFinder_15_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(PathFinder_15_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(PathFinder_15_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(PathFinder_15_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(PathFinder_15_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(PathFinder_15_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(PathFinder_15_io_Stationary_matrix_3_3),
    .io_Streaming_matrix_0(PathFinder_15_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PathFinder_15_io_Streaming_matrix_1),
    .io_Streaming_matrix_2(PathFinder_15_io_Streaming_matrix_2),
    .io_Streaming_matrix_3(PathFinder_15_io_Streaming_matrix_3),
    .io_i_mux_bus_0(PathFinder_15_io_i_mux_bus_0),
    .io_i_mux_bus_1(PathFinder_15_io_i_mux_bus_1),
    .io_i_mux_bus_2(PathFinder_15_io_i_mux_bus_2),
    .io_i_mux_bus_3(PathFinder_15_io_i_mux_bus_3),
    .io_Source_0(PathFinder_15_io_Source_0),
    .io_Source_1(PathFinder_15_io_Source_1),
    .io_Source_2(PathFinder_15_io_Source_2),
    .io_Source_3(PathFinder_15_io_Source_3),
    .io_destination_0(PathFinder_15_io_destination_0),
    .io_destination_1(PathFinder_15_io_destination_1),
    .io_destination_2(PathFinder_15_io_destination_2),
    .io_destination_3(PathFinder_15_io_destination_3),
    .io_PF_Valid(PathFinder_15_io_PF_Valid),
    .io_NoDPE(PathFinder_15_io_NoDPE),
    .io_DataValid(PathFinder_15_io_DataValid)
  );
  flexdpecom4 flexdpecom4 ( // @[FlexDPU.scala 107:46]
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
    .io_Stationary_matrix_0_2(flexdpecom4_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(flexdpecom4_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(flexdpecom4_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(flexdpecom4_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(flexdpecom4_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(flexdpecom4_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(flexdpecom4_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(flexdpecom4_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(flexdpecom4_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(flexdpecom4_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(flexdpecom4_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(flexdpecom4_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(flexdpecom4_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(flexdpecom4_io_Stationary_matrix_3_3),
    .io_o_adder_0(flexdpecom4_io_o_adder_0),
    .io_o_adder_1(flexdpecom4_io_o_adder_1),
    .io_o_adder_2(flexdpecom4_io_o_adder_2),
    .io_i_mux_bus_0(flexdpecom4_io_i_mux_bus_0),
    .io_i_mux_bus_1(flexdpecom4_io_i_mux_bus_1),
    .io_i_mux_bus_2(flexdpecom4_io_i_mux_bus_2),
    .io_i_mux_bus_3(flexdpecom4_io_i_mux_bus_3)
  );
  flexdpecom4_1 flexdpecom4_1 ( // @[FlexDPU.scala 107:46]
    .clock(flexdpecom4_1_clock),
    .reset(flexdpecom4_1_reset),
    .io_i_data_valid(flexdpecom4_1_io_i_data_valid),
    .io_i_data_bus_0(flexdpecom4_1_io_i_data_bus_0),
    .io_i_data_bus_1(flexdpecom4_1_io_i_data_bus_1),
    .io_i_data_bus_2(flexdpecom4_1_io_i_data_bus_2),
    .io_i_data_bus_3(flexdpecom4_1_io_i_data_bus_3),
    .io_i_data_bus2_0(flexdpecom4_1_io_i_data_bus2_0),
    .io_i_data_bus2_1(flexdpecom4_1_io_i_data_bus2_1),
    .io_i_data_bus2_2(flexdpecom4_1_io_i_data_bus2_2),
    .io_i_data_bus2_3(flexdpecom4_1_io_i_data_bus2_3),
    .io_Stationary_matrix_0_0(flexdpecom4_1_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(flexdpecom4_1_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(flexdpecom4_1_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(flexdpecom4_1_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(flexdpecom4_1_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(flexdpecom4_1_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(flexdpecom4_1_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(flexdpecom4_1_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(flexdpecom4_1_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(flexdpecom4_1_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(flexdpecom4_1_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(flexdpecom4_1_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(flexdpecom4_1_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(flexdpecom4_1_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(flexdpecom4_1_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(flexdpecom4_1_io_Stationary_matrix_3_3),
    .io_o_adder_0(flexdpecom4_1_io_o_adder_0),
    .io_o_adder_1(flexdpecom4_1_io_o_adder_1),
    .io_o_adder_2(flexdpecom4_1_io_o_adder_2),
    .io_i_mux_bus_0(flexdpecom4_1_io_i_mux_bus_0),
    .io_i_mux_bus_1(flexdpecom4_1_io_i_mux_bus_1),
    .io_i_mux_bus_2(flexdpecom4_1_io_i_mux_bus_2),
    .io_i_mux_bus_3(flexdpecom4_1_io_i_mux_bus_3)
  );
  flexdpecom4_2 flexdpecom4_2 ( // @[FlexDPU.scala 107:46]
    .clock(flexdpecom4_2_clock),
    .reset(flexdpecom4_2_reset),
    .io_i_data_valid(flexdpecom4_2_io_i_data_valid),
    .io_i_data_bus_0(flexdpecom4_2_io_i_data_bus_0),
    .io_i_data_bus_1(flexdpecom4_2_io_i_data_bus_1),
    .io_i_data_bus_2(flexdpecom4_2_io_i_data_bus_2),
    .io_i_data_bus_3(flexdpecom4_2_io_i_data_bus_3),
    .io_i_data_bus2_0(flexdpecom4_2_io_i_data_bus2_0),
    .io_i_data_bus2_1(flexdpecom4_2_io_i_data_bus2_1),
    .io_i_data_bus2_2(flexdpecom4_2_io_i_data_bus2_2),
    .io_i_data_bus2_3(flexdpecom4_2_io_i_data_bus2_3),
    .io_Stationary_matrix_0_0(flexdpecom4_2_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(flexdpecom4_2_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(flexdpecom4_2_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(flexdpecom4_2_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(flexdpecom4_2_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(flexdpecom4_2_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(flexdpecom4_2_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(flexdpecom4_2_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(flexdpecom4_2_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(flexdpecom4_2_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(flexdpecom4_2_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(flexdpecom4_2_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(flexdpecom4_2_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(flexdpecom4_2_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(flexdpecom4_2_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(flexdpecom4_2_io_Stationary_matrix_3_3),
    .io_o_adder_0(flexdpecom4_2_io_o_adder_0),
    .io_o_adder_1(flexdpecom4_2_io_o_adder_1),
    .io_o_adder_2(flexdpecom4_2_io_o_adder_2),
    .io_i_mux_bus_0(flexdpecom4_2_io_i_mux_bus_0),
    .io_i_mux_bus_1(flexdpecom4_2_io_i_mux_bus_1),
    .io_i_mux_bus_2(flexdpecom4_2_io_i_mux_bus_2),
    .io_i_mux_bus_3(flexdpecom4_2_io_i_mux_bus_3)
  );
  flexdpecom4_3 flexdpecom4_3 ( // @[FlexDPU.scala 107:46]
    .clock(flexdpecom4_3_clock),
    .reset(flexdpecom4_3_reset),
    .io_i_data_valid(flexdpecom4_3_io_i_data_valid),
    .io_i_data_bus_0(flexdpecom4_3_io_i_data_bus_0),
    .io_i_data_bus_1(flexdpecom4_3_io_i_data_bus_1),
    .io_i_data_bus_2(flexdpecom4_3_io_i_data_bus_2),
    .io_i_data_bus_3(flexdpecom4_3_io_i_data_bus_3),
    .io_i_data_bus2_0(flexdpecom4_3_io_i_data_bus2_0),
    .io_i_data_bus2_1(flexdpecom4_3_io_i_data_bus2_1),
    .io_i_data_bus2_2(flexdpecom4_3_io_i_data_bus2_2),
    .io_i_data_bus2_3(flexdpecom4_3_io_i_data_bus2_3),
    .io_Stationary_matrix_0_0(flexdpecom4_3_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(flexdpecom4_3_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_0_2(flexdpecom4_3_io_Stationary_matrix_0_2),
    .io_Stationary_matrix_0_3(flexdpecom4_3_io_Stationary_matrix_0_3),
    .io_Stationary_matrix_1_0(flexdpecom4_3_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(flexdpecom4_3_io_Stationary_matrix_1_1),
    .io_Stationary_matrix_1_2(flexdpecom4_3_io_Stationary_matrix_1_2),
    .io_Stationary_matrix_1_3(flexdpecom4_3_io_Stationary_matrix_1_3),
    .io_Stationary_matrix_2_0(flexdpecom4_3_io_Stationary_matrix_2_0),
    .io_Stationary_matrix_2_1(flexdpecom4_3_io_Stationary_matrix_2_1),
    .io_Stationary_matrix_2_2(flexdpecom4_3_io_Stationary_matrix_2_2),
    .io_Stationary_matrix_2_3(flexdpecom4_3_io_Stationary_matrix_2_3),
    .io_Stationary_matrix_3_0(flexdpecom4_3_io_Stationary_matrix_3_0),
    .io_Stationary_matrix_3_1(flexdpecom4_3_io_Stationary_matrix_3_1),
    .io_Stationary_matrix_3_2(flexdpecom4_3_io_Stationary_matrix_3_2),
    .io_Stationary_matrix_3_3(flexdpecom4_3_io_Stationary_matrix_3_3),
    .io_o_adder_0(flexdpecom4_3_io_o_adder_0),
    .io_o_adder_1(flexdpecom4_3_io_o_adder_1),
    .io_o_adder_2(flexdpecom4_3_io_o_adder_2),
    .io_i_mux_bus_0(flexdpecom4_3_io_i_mux_bus_0),
    .io_i_mux_bus_1(flexdpecom4_3_io_i_mux_bus_1),
    .io_i_mux_bus_2(flexdpecom4_3_io_i_mux_bus_2),
    .io_i_mux_bus_3(flexdpecom4_3_io_i_mux_bus_3)
  );
  assign PathFinder_clock = clock;
  assign PathFinder_reset = reset;
  assign PathFinder_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_io_NoDPE = 32'h0; // @[FlexDPU.scala 74:21]
  assign PathFinder_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_1_clock = clock;
  assign PathFinder_1_reset = reset;
  assign PathFinder_1_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_1_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_1_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_1_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_1_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_1_io_NoDPE = {{31'd0}, Statvalid}; // @[FlexDPU.scala 74:21]
  assign PathFinder_1_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_2_clock = clock;
  assign PathFinder_2_reset = reset;
  assign PathFinder_2_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_2_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_2_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_2_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_2_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_2_io_NoDPE = {{30'd0}, _GEN_193}; // @[FlexDPU.scala 74:21]
  assign PathFinder_2_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_3_clock = clock;
  assign PathFinder_3_reset = reset;
  assign PathFinder_3_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_3_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_3_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_3_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_3_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_3_io_NoDPE = {{30'd0}, _GEN_214}; // @[FlexDPU.scala 74:21]
  assign PathFinder_3_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_4_clock = clock;
  assign PathFinder_4_reset = reset;
  assign PathFinder_4_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_4_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_4_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_4_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_4_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_4_io_NoDPE = {{29'd0}, _GEN_235}; // @[FlexDPU.scala 74:21]
  assign PathFinder_4_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_5_clock = clock;
  assign PathFinder_5_reset = reset;
  assign PathFinder_5_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_5_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_5_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_5_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_5_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_5_io_NoDPE = {{29'd0}, _GEN_256}; // @[FlexDPU.scala 74:21]
  assign PathFinder_5_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_6_clock = clock;
  assign PathFinder_6_reset = reset;
  assign PathFinder_6_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_6_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_6_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_6_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_6_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_6_io_NoDPE = {{29'd0}, _GEN_277}; // @[FlexDPU.scala 74:21]
  assign PathFinder_6_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_7_clock = clock;
  assign PathFinder_7_reset = reset;
  assign PathFinder_7_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_7_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_7_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_7_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_7_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_7_io_NoDPE = {{29'd0}, _GEN_298}; // @[FlexDPU.scala 74:21]
  assign PathFinder_7_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_8_clock = clock;
  assign PathFinder_8_reset = reset;
  assign PathFinder_8_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_8_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_8_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_8_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_8_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_8_io_NoDPE = {{28'd0}, _GEN_319}; // @[FlexDPU.scala 74:21]
  assign PathFinder_8_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_9_clock = clock;
  assign PathFinder_9_reset = reset;
  assign PathFinder_9_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_9_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_9_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_9_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_9_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_9_io_NoDPE = {{28'd0}, _GEN_340}; // @[FlexDPU.scala 74:21]
  assign PathFinder_9_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_10_clock = clock;
  assign PathFinder_10_reset = reset;
  assign PathFinder_10_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_10_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_10_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_10_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_10_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_10_io_NoDPE = {{28'd0}, _GEN_361}; // @[FlexDPU.scala 74:21]
  assign PathFinder_10_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_11_clock = clock;
  assign PathFinder_11_reset = reset;
  assign PathFinder_11_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_11_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_11_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_11_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_11_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_11_io_NoDPE = {{28'd0}, _GEN_382}; // @[FlexDPU.scala 74:21]
  assign PathFinder_11_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_12_clock = clock;
  assign PathFinder_12_reset = reset;
  assign PathFinder_12_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_12_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_12_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_12_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_12_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_12_io_NoDPE = {{28'd0}, _GEN_403}; // @[FlexDPU.scala 74:21]
  assign PathFinder_12_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_13_clock = clock;
  assign PathFinder_13_reset = reset;
  assign PathFinder_13_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_13_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_13_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_13_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_13_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_13_io_NoDPE = {{28'd0}, _GEN_424}; // @[FlexDPU.scala 74:21]
  assign PathFinder_13_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_14_clock = clock;
  assign PathFinder_14_reset = reset;
  assign PathFinder_14_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_14_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_14_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_14_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_14_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_14_io_NoDPE = {{28'd0}, _GEN_445}; // @[FlexDPU.scala 74:21]
  assign PathFinder_14_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign PathFinder_15_clock = clock;
  assign PathFinder_15_reset = reset;
  assign PathFinder_15_io_Stationary_matrix_0_0 = Statvalid ? io_Stationary_matrix_0_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_0_1 = Statvalid ? io_Stationary_matrix_0_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_0_2 = Statvalid ? io_Stationary_matrix_0_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_0_3 = Statvalid ? io_Stationary_matrix_0_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_1_0 = Statvalid ? io_Stationary_matrix_1_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_1_1 = Statvalid ? io_Stationary_matrix_1_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_1_2 = Statvalid ? io_Stationary_matrix_1_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_1_3 = Statvalid ? io_Stationary_matrix_1_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_2_0 = Statvalid ? io_Stationary_matrix_2_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_2_1 = Statvalid ? io_Stationary_matrix_2_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_2_2 = Statvalid ? io_Stationary_matrix_2_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_2_3 = Statvalid ? io_Stationary_matrix_2_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_3_0 = Statvalid ? io_Stationary_matrix_3_0 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_3_1 = Statvalid ? io_Stationary_matrix_3_1 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_3_2 = Statvalid ? io_Stationary_matrix_3_2 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Stationary_matrix_3_3 = Statvalid ? io_Stationary_matrix_3_3 : 16'h0; // @[FlexDPU.scala 95:20 79:33 99:33]
  assign PathFinder_15_io_Streaming_matrix_0 = _GEN_104[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_15_io_Streaming_matrix_1 = _GEN_105[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_15_io_Streaming_matrix_2 = _GEN_106[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_15_io_Streaming_matrix_3 = _GEN_107[15:0]; // @[FlexDPU.scala 74:21]
  assign PathFinder_15_io_NoDPE = {{28'd0}, _GEN_466}; // @[FlexDPU.scala 74:21]
  assign PathFinder_15_io_DataValid = Statvalid; // @[FlexDPU.scala 95:20 78:25 98:25]
  assign flexdpecom4_clock = clock;
  assign flexdpecom4_reset = reset;
  assign flexdpecom4_io_i_data_valid = 1'h1; // @[FlexDPU.scala 107:27 111:34]
  assign flexdpecom4_io_i_data_bus_0 = PathFinder_io_Source_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus_1 = PathFinder_io_Source_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus_2 = PathFinder_io_Source_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus_3 = PathFinder_io_Source_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus2_0 = PathFinder_io_destination_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus2_1 = PathFinder_io_destination_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus2_2 = PathFinder_io_destination_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_data_bus2_3 = PathFinder_io_destination_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_io_i_mux_bus_0 = PathFinder_io_i_mux_bus_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_mux_bus_1 = PathFinder_io_i_mux_bus_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_mux_bus_2 = PathFinder_io_i_mux_bus_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_io_i_mux_bus_3 = PathFinder_io_i_mux_bus_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_clock = clock;
  assign flexdpecom4_1_reset = reset;
  assign flexdpecom4_1_io_i_data_valid = 1'h1; // @[FlexDPU.scala 107:27 111:34]
  assign flexdpecom4_1_io_i_data_bus_0 = PathFinder_1_io_Source_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus_1 = PathFinder_1_io_Source_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus_2 = PathFinder_1_io_Source_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus_3 = PathFinder_1_io_Source_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus2_0 = PathFinder_1_io_destination_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus2_1 = PathFinder_1_io_destination_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus2_2 = PathFinder_1_io_destination_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_data_bus2_3 = PathFinder_1_io_destination_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_1_io_i_mux_bus_0 = PathFinder_1_io_i_mux_bus_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_mux_bus_1 = PathFinder_1_io_i_mux_bus_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_mux_bus_2 = PathFinder_1_io_i_mux_bus_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_1_io_i_mux_bus_3 = PathFinder_1_io_i_mux_bus_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_clock = clock;
  assign flexdpecom4_2_reset = reset;
  assign flexdpecom4_2_io_i_data_valid = 1'h1; // @[FlexDPU.scala 107:27 111:34]
  assign flexdpecom4_2_io_i_data_bus_0 = PathFinder_2_io_Source_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus_1 = PathFinder_2_io_Source_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus_2 = PathFinder_2_io_Source_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus_3 = PathFinder_2_io_Source_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus2_0 = PathFinder_2_io_destination_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus2_1 = PathFinder_2_io_destination_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus2_2 = PathFinder_2_io_destination_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_data_bus2_3 = PathFinder_2_io_destination_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_2_io_i_mux_bus_0 = PathFinder_2_io_i_mux_bus_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_mux_bus_1 = PathFinder_2_io_i_mux_bus_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_mux_bus_2 = PathFinder_2_io_i_mux_bus_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_2_io_i_mux_bus_3 = PathFinder_2_io_i_mux_bus_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_clock = clock;
  assign flexdpecom4_3_reset = reset;
  assign flexdpecom4_3_io_i_data_valid = 1'h1; // @[FlexDPU.scala 107:27 111:34]
  assign flexdpecom4_3_io_i_data_bus_0 = PathFinder_3_io_Source_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus_1 = PathFinder_3_io_Source_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus_2 = PathFinder_3_io_Source_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus_3 = PathFinder_3_io_Source_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus2_0 = PathFinder_3_io_destination_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus2_1 = PathFinder_3_io_destination_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus2_2 = PathFinder_3_io_destination_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_data_bus2_3 = PathFinder_3_io_destination_3; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_0_2 = io_Stationary_matrix_0_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_0_3 = io_Stationary_matrix_0_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_1_2 = io_Stationary_matrix_1_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_1_3 = io_Stationary_matrix_1_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_2_0 = io_Stationary_matrix_2_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_2_1 = io_Stationary_matrix_2_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_2_2 = io_Stationary_matrix_2_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_2_3 = io_Stationary_matrix_2_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_3_0 = io_Stationary_matrix_3_0; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_3_1 = io_Stationary_matrix_3_1; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_3_2 = io_Stationary_matrix_3_2; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_Stationary_matrix_3_3 = io_Stationary_matrix_3_3; // @[FlexDPU.scala 107:27 112:39]
  assign flexdpecom4_3_io_i_mux_bus_0 = PathFinder_3_io_i_mux_bus_0; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_mux_bus_1 = PathFinder_3_io_i_mux_bus_1; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_mux_bus_2 = PathFinder_3_io_i_mux_bus_2; // @[FlexDPU.scala 74:{21,21}]
  assign flexdpecom4_3_io_i_mux_bus_3 = PathFinder_3_io_i_mux_bus_3; // @[FlexDPU.scala 74:{21,21}]
  always @(posedge clock) begin
    if (2'h0 < remainingDistribution) begin // @[FlexDPU.scala 22:29]
      used_FlexDPE_0 <= _used_FlexDPE_0_T_2;
    end else begin
      used_FlexDPE_0 <= equalDistribution;
    end
    if (2'h1 < remainingDistribution) begin // @[FlexDPU.scala 22:29]
      used_FlexDPE_1 <= _used_FlexDPE_0_T_2;
    end else begin
      used_FlexDPE_1 <= equalDistribution;
    end
    if (reset) begin // @[FlexDPU.scala 30:24]
      iloop <= 32'h0; // @[FlexDPU.scala 30:24]
    end else if (iloop < 32'h3 & _Statvalid_T_1) begin // @[FlexDPU.scala 40:77]
      iloop <= _iloop_T_1; // @[FlexDPU.scala 41:15]
    end
    if (reset) begin // @[FlexDPU.scala 31:24]
      jloop <= 32'h0; // @[FlexDPU.scala 31:24]
    end else if (iloop <= 32'h3 & jloop < 32'h3) begin // @[FlexDPU.scala 44:76]
      jloop <= _jloop_T_1; // @[FlexDPU.scala 45:15]
    end else if (!(_Statvalid_T_2)) begin // @[FlexDPU.scala 46:83]
      jloop <= 32'h0; // @[FlexDPU.scala 49:15]
    end
    if (reset) begin // @[FlexDPU.scala 32:28]
      Statvalid <= 1'h0; // @[FlexDPU.scala 32:28]
    end else begin
      Statvalid <= iloop == 32'h3 & jloop == 32'h3; // @[FlexDPU.scala 34:15]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_0 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_0 <= {{16'd0}, _GEN_73}; // @[FlexDPU.scala 156:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_1 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_1 <= {{16'd0}, _GEN_77}; // @[FlexDPU.scala 156:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_2 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_2 <= {{16'd0}, _GEN_81}; // @[FlexDPU.scala 156:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_3 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_3 <= {{16'd0}, _GEN_85}; // @[FlexDPU.scala 156:31]
    end
    if (reset) begin // @[FlexDPU.scala 59:30]
      ModuleIndex <= 32'h0; // @[FlexDPU.scala 59:30]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      if (!(ModuleIndex == 32'h3 & PF_0_PF_Valid)) begin // @[FlexDPU.scala 149:71]
        if (PF_0_PF_Valid) begin // @[FlexDPU.scala 144:29]
          ModuleIndex <= _ModuleIndex_T_1; // @[FlexDPU.scala 146:25]
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
  used_FlexDPE_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  used_FlexDPE_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  iloop = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  jloop = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  Statvalid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  PF1_Stream_Col_0 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  PF1_Stream_Col_1 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  PF1_Stream_Col_2 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  PF1_Stream_Col_3 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  ModuleIndex = _RAND_9[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

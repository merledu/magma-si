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
  wire  ab = i <= 32'h3 & j < 32'h3; // @[DIstribution.scala 117:42]
  wire [31:0] _j_T_1 = j + 32'h1; // @[DIstribution.scala 120:16]
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
  assign io_out_0_0 = io_valid ? _GEN_169 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_0_1 = io_valid ? _GEN_170 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_0_2 = io_valid ? _GEN_171 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_0_3 = io_valid ? _GEN_172 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_1_0 = io_valid ? _GEN_173 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_1_1 = io_valid ? _GEN_174 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_1_2 = io_valid ? _GEN_175 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_1_3 = io_valid ? _GEN_176 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_2_0 = io_valid ? _GEN_177 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_2_1 = io_valid ? _GEN_178 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_2_2 = io_valid ? _GEN_179 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_2_3 = io_valid ? _GEN_180 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_3_0 = io_valid ? _GEN_181 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_3_1 = io_valid ? _GEN_182 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_3_2 = io_valid ? _GEN_183 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_out_3_3 = io_valid ? _GEN_184 : 32'h0; // @[DIstribution.scala 131:16 27:21]
  assign io_ProcessValid = io_valid & _GEN_185; // @[DIstribution.scala 27:21 132:25]
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
      if (ab) begin // @[DIstribution.scala 119:68]
        j <= _j_T_1; // @[DIstribution.scala 120:11]
      end else if (!(_io_validIteration_T_2)) begin // @[DIstribution.scala 121:75]
        j <= 32'h0; // @[DIstribution.scala 124:11]
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
  wire  PathFinder_clock; // @[FlexDPU.scala 74:40]
  wire  PathFinder_reset; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Streaming_matrix_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Streaming_matrix_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Streaming_matrix_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_io_Streaming_matrix_3; // @[FlexDPU.scala 74:40]
  wire  PathFinder_io_PF_Valid; // @[FlexDPU.scala 74:40]
  wire [31:0] PathFinder_io_NoDPE; // @[FlexDPU.scala 74:40]
  wire  PathFinder_io_DataValid; // @[FlexDPU.scala 74:40]
  wire  PathFinder_1_clock; // @[FlexDPU.scala 74:40]
  wire  PathFinder_1_reset; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Streaming_matrix_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Streaming_matrix_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Streaming_matrix_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_1_io_Streaming_matrix_3; // @[FlexDPU.scala 74:40]
  wire  PathFinder_1_io_PF_Valid; // @[FlexDPU.scala 74:40]
  wire [31:0] PathFinder_1_io_NoDPE; // @[FlexDPU.scala 74:40]
  wire  PathFinder_1_io_DataValid; // @[FlexDPU.scala 74:40]
  wire  PathFinder_2_clock; // @[FlexDPU.scala 74:40]
  wire  PathFinder_2_reset; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Streaming_matrix_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Streaming_matrix_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Streaming_matrix_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_2_io_Streaming_matrix_3; // @[FlexDPU.scala 74:40]
  wire  PathFinder_2_io_PF_Valid; // @[FlexDPU.scala 74:40]
  wire [31:0] PathFinder_2_io_NoDPE; // @[FlexDPU.scala 74:40]
  wire  PathFinder_2_io_DataValid; // @[FlexDPU.scala 74:40]
  wire  PathFinder_3_clock; // @[FlexDPU.scala 74:40]
  wire  PathFinder_3_reset; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_0_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_1_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_2_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Stationary_matrix_3_3; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Streaming_matrix_0; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Streaming_matrix_1; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Streaming_matrix_2; // @[FlexDPU.scala 74:40]
  wire [15:0] PathFinder_3_io_Streaming_matrix_3; // @[FlexDPU.scala 74:40]
  wire  PathFinder_3_io_PF_Valid; // @[FlexDPU.scala 74:40]
  wire [31:0] PathFinder_3_io_NoDPE; // @[FlexDPU.scala 74:40]
  wire  PathFinder_3_io_DataValid; // @[FlexDPU.scala 74:40]
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
  wire [31:0] _ModuleIndex_T_1 = ModuleIndex + 32'h1; // @[FlexDPU.scala 150:40]
  wire  PF_0_PF_Valid = PathFinder_io_PF_Valid; // @[FlexDPU.scala 74:{21,21}]
  wire [15:0] _GEN_71 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_0_1 : io_Streaming_matrix_0_0; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_72 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_0_2 : _GEN_71; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_73 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_0_3 : _GEN_72; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_75 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_1_1 : io_Streaming_matrix_1_0; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_76 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_1_2 : _GEN_75; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_77 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_1_3 : _GEN_76; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_79 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_2_1 : io_Streaming_matrix_2_0; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_80 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_2_2 : _GEN_79; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_81 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_2_3 : _GEN_80; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_83 = 2'h1 == ModuleIndex[1:0] ? io_Streaming_matrix_3_1 : io_Streaming_matrix_3_0; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_84 = 2'h2 == ModuleIndex[1:0] ? io_Streaming_matrix_3_2 : _GEN_83; // @[FlexDPU.scala 160:{31,31}]
  wire [15:0] _GEN_85 = 2'h3 == ModuleIndex[1:0] ? io_Streaming_matrix_3_3 : _GEN_84; // @[FlexDPU.scala 160:{31,31}]
  wire [31:0] _GEN_104 = Statvalid ? PF1_Stream_Col_0 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [31:0] _GEN_105 = Statvalid ? PF1_Stream_Col_1 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [31:0] _GEN_106 = Statvalid ? PF1_Stream_Col_2 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [31:0] _GEN_107 = Statvalid ? PF1_Stream_Col_3 : 32'h0; // @[FlexDPU.scala 95:20 101:32 81:32]
  wire [1:0] _GEN_193 = Statvalid ? 2'h2 : 2'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  wire [1:0] _GEN_214 = Statvalid ? 2'h3 : 2'h0; // @[FlexDPU.scala 95:20 100:21 80:21]
  PathFinder PathFinder ( // @[FlexDPU.scala 74:40]
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
    .io_PF_Valid(PathFinder_io_PF_Valid),
    .io_NoDPE(PathFinder_io_NoDPE),
    .io_DataValid(PathFinder_io_DataValid)
  );
  PathFinder PathFinder_1 ( // @[FlexDPU.scala 74:40]
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
    .io_PF_Valid(PathFinder_1_io_PF_Valid),
    .io_NoDPE(PathFinder_1_io_NoDPE),
    .io_DataValid(PathFinder_1_io_DataValid)
  );
  PathFinder PathFinder_2 ( // @[FlexDPU.scala 74:40]
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
    .io_PF_Valid(PathFinder_2_io_PF_Valid),
    .io_NoDPE(PathFinder_2_io_NoDPE),
    .io_DataValid(PathFinder_2_io_DataValid)
  );
  PathFinder PathFinder_3 ( // @[FlexDPU.scala 74:40]
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
    .io_PF_Valid(PathFinder_3_io_PF_Valid),
    .io_NoDPE(PathFinder_3_io_NoDPE),
    .io_DataValid(PathFinder_3_io_DataValid)
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
      PF1_Stream_Col_0 <= {{16'd0}, _GEN_73}; // @[FlexDPU.scala 160:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_1 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_1 <= {{16'd0}, _GEN_77}; // @[FlexDPU.scala 160:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_2 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_2 <= {{16'd0}, _GEN_81}; // @[FlexDPU.scala 160:31]
    end
    if (reset) begin // @[FlexDPU.scala 58:33]
      PF1_Stream_Col_3 <= 32'h0; // @[FlexDPU.scala 58:33]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      PF1_Stream_Col_3 <= {{16'd0}, _GEN_85}; // @[FlexDPU.scala 160:31]
    end
    if (reset) begin // @[FlexDPU.scala 59:30]
      ModuleIndex <= 32'h0; // @[FlexDPU.scala 59:30]
    end else if (Statvalid) begin // @[FlexDPU.scala 95:20]
      if (!(ModuleIndex == 32'h3 & PF_0_PF_Valid)) begin // @[FlexDPU.scala 153:71]
        if (PF_0_PF_Valid) begin // @[FlexDPU.scala 148:29]
          ModuleIndex <= _ModuleIndex_T_1; // @[FlexDPU.scala 150:25]
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

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
  output [3:0]  io_i_mux_bus_0_0,
  output [3:0]  io_i_mux_bus_0_1,
  output [3:0]  io_i_mux_bus_0_2,
  output [3:0]  io_i_mux_bus_0_3,
  output [3:0]  io_i_mux_bus_1_0,
  output [3:0]  io_i_mux_bus_1_1,
  output [3:0]  io_i_mux_bus_1_2,
  output [3:0]  io_i_mux_bus_1_3,
  output [3:0]  io_i_mux_bus_2_0,
  output [3:0]  io_i_mux_bus_2_1,
  output [3:0]  io_i_mux_bus_2_2,
  output [3:0]  io_i_mux_bus_2_3,
  output [3:0]  io_i_mux_bus_3_0,
  output [3:0]  io_i_mux_bus_3_1,
  output [3:0]  io_i_mux_bus_3_2,
  output [3:0]  io_i_mux_bus_3_3,
  output [15:0] io_Source_0,
  output [15:0] io_Source_1,
  output [15:0] io_Source_2,
  output [15:0] io_Source_3,
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
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_0_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_0; // @[Muxes.scala 19:40]
  reg [15:0] prevStationary_matrix_1_1; // @[Muxes.scala 19:40]
  reg [15:0] prevStreaming_matrix_0; // @[Muxes.scala 20:39]
  reg [15:0] prevStreaming_matrix_1; // @[Muxes.scala 20:39]
  reg  matricesAreEqual; // @[Muxes.scala 21:31]
  reg  jValid; // @[Muxes.scala 27:25]
  reg [31:0] i; // @[Muxes.scala 28:20]
  reg [31:0] j; // @[Muxes.scala 29:20]
  reg [31:0] k; // @[Muxes.scala 30:20]
  reg [31:0] counter; // @[Muxes.scala 31:26]
  reg [31:0] indexcounter; // @[Muxes.scala 32:31]
  reg [3:0] muxes_0_0; // @[Muxes.scala 34:24]
  reg [3:0] muxes_0_1; // @[Muxes.scala 34:24]
  reg [3:0] muxes_0_2; // @[Muxes.scala 34:24]
  reg [3:0] muxes_0_3; // @[Muxes.scala 34:24]
  reg [3:0] muxes_1_0; // @[Muxes.scala 34:24]
  reg [3:0] muxes_1_1; // @[Muxes.scala 34:24]
  reg [3:0] muxes_1_2; // @[Muxes.scala 34:24]
  reg [3:0] muxes_1_3; // @[Muxes.scala 34:24]
  reg [3:0] muxes_2_0; // @[Muxes.scala 34:24]
  reg [3:0] muxes_2_1; // @[Muxes.scala 34:24]
  reg [3:0] muxes_2_2; // @[Muxes.scala 34:24]
  reg [3:0] muxes_2_3; // @[Muxes.scala 34:24]
  reg [3:0] muxes_3_0; // @[Muxes.scala 34:24]
  reg [3:0] muxes_3_1; // @[Muxes.scala 34:24]
  reg [3:0] muxes_3_2; // @[Muxes.scala 34:24]
  reg [3:0] muxes_3_3; // @[Muxes.scala 34:24]
  reg [15:0] src_0; // @[Muxes.scala 35:22]
  reg [15:0] src_1; // @[Muxes.scala 35:22]
  reg [15:0] src_2; // @[Muxes.scala 35:22]
  reg [15:0] src_3; // @[Muxes.scala 35:22]
  reg [15:0] dest_0; // @[Muxes.scala 36:23]
  reg [15:0] dest_1; // @[Muxes.scala 36:23]
  reg [15:0] dest_2; // @[Muxes.scala 36:23]
  reg [15:0] dest_3; // @[Muxes.scala 36:23]
  wire  _GEN_0 = io_mat1_0_0 != prevStationary_matrix_0_0 ? 1'h0 : 1'h1; // @[Muxes.scala 22:22 47:61 48:28]
  wire  _GEN_1 = io_mat1_0_1 != prevStationary_matrix_0_1 ? 1'h0 : _GEN_0; // @[Muxes.scala 47:61 48:28]
  wire  _T_6 = ~jValid; // @[Muxes.scala 56:11]
  wire  _GEN_218 = ~j[0]; // @[Muxes.scala 56:{47,47}]
  wire [15:0] _GEN_7 = ~j[0] & i[0] ? io_counterMatrix1_0_1 : io_counterMatrix1_0_0; // @[Muxes.scala 56:{47,47}]
  wire  _GEN_219 = ~i[0]; // @[Muxes.scala 56:{47,47}]
  wire [15:0] _GEN_8 = j[0] & ~i[0] ? io_counterMatrix1_1_0 : _GEN_7; // @[Muxes.scala 56:{47,47}]
  wire [15:0] _GEN_9 = j[0] & i[0] ? io_counterMatrix1_1_1 : _GEN_8; // @[Muxes.scala 56:{47,47}]
  wire [15:0] _GEN_11 = i[0] ? io_mat2_1 : io_mat2_0; // @[Muxes.scala 56:{71,71}]
  wire  _T_12 = _GEN_11 != 16'h0; // @[Muxes.scala 56:71]
  wire [15:0] _GEN_17 = i[0] ? io_counterMatrix2_1 : io_counterMatrix2_0; // @[Muxes.scala 58:{38,38}]
  wire [15:0] _muxes_T_2 = _GEN_17 - 16'h1; // @[Muxes.scala 59:65]
  wire [15:0] _muxes_T_6 = _GEN_9 - 16'h1; // @[Muxes.scala 59:99]
  wire [15:0] _muxes_T_8 = _muxes_T_2 - _muxes_T_6; // @[Muxes.scala 59:72]
  wire  _GEN_224 = 2'h0 == counter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_225 = 2'h0 == indexcounter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_24 = 2'h0 == counter[1:0] & 2'h0 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_0_0; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_227 = 2'h1 == indexcounter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_25 = 2'h0 == counter[1:0] & 2'h1 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_0_1; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_229 = 2'h2 == indexcounter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_26 = 2'h0 == counter[1:0] & 2'h2 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_0_2; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_231 = 2'h3 == indexcounter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_27 = 2'h0 == counter[1:0] & 2'h3 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_0_3; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_232 = 2'h1 == counter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_28 = 2'h1 == counter[1:0] & 2'h0 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_1_0; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_29 = 2'h1 == counter[1:0] & 2'h1 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_1_1; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_30 = 2'h1 == counter[1:0] & 2'h2 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_1_2; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_31 = 2'h1 == counter[1:0] & 2'h3 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_1_3; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_240 = 2'h2 == counter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_32 = 2'h2 == counter[1:0] & 2'h0 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_2_0; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_33 = 2'h2 == counter[1:0] & 2'h1 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_2_1; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_34 = 2'h2 == counter[1:0] & 2'h2 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_2_2; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_35 = 2'h2 == counter[1:0] & 2'h3 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_2_3; // @[Muxes.scala 34:24 59:{40,40}]
  wire  _GEN_248 = 2'h3 == counter[1:0]; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_36 = 2'h3 == counter[1:0] & 2'h0 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_3_0; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_37 = 2'h3 == counter[1:0] & 2'h1 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_3_1; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_38 = 2'h3 == counter[1:0] & 2'h2 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_3_2; // @[Muxes.scala 34:24 59:{40,40}]
  wire [3:0] _GEN_39 = 2'h3 == counter[1:0] & 2'h3 == indexcounter[1:0] ? _muxes_T_8[3:0] : muxes_3_3; // @[Muxes.scala 34:24 59:{40,40}]
  wire [15:0] _GEN_40 = 2'h0 == counter[1:0] ? _GEN_11 : src_0; // @[Muxes.scala 35:22 60:{24,24}]
  wire [15:0] _GEN_41 = 2'h1 == counter[1:0] ? _GEN_11 : src_1; // @[Muxes.scala 35:22 60:{24,24}]
  wire [15:0] _GEN_42 = 2'h2 == counter[1:0] ? _GEN_11 : src_2; // @[Muxes.scala 35:22 60:{24,24}]
  wire [15:0] _GEN_43 = 2'h3 == counter[1:0] ? _GEN_11 : src_3; // @[Muxes.scala 35:22 60:{24,24}]
  wire [15:0] _GEN_51 = _GEN_218 & i[0] ? io_mat1_0_1 : io_mat1_0_0; // @[Muxes.scala 61:{25,25}]
  wire [15:0] _GEN_52 = j[0] & _GEN_219 ? io_mat1_1_0 : _GEN_51; // @[Muxes.scala 61:{25,25}]
  wire [15:0] _GEN_53 = j[0] & i[0] ? io_mat1_1_1 : _GEN_52; // @[Muxes.scala 61:{25,25}]
  wire [15:0] _GEN_46 = 2'h0 == counter[1:0] ? _GEN_53 : dest_0; // @[Muxes.scala 36:23 61:{25,25}]
  wire [15:0] _GEN_47 = 2'h1 == counter[1:0] ? _GEN_53 : dest_1; // @[Muxes.scala 36:23 61:{25,25}]
  wire [15:0] _GEN_48 = 2'h2 == counter[1:0] ? _GEN_53 : dest_2; // @[Muxes.scala 36:23 61:{25,25}]
  wire [15:0] _GEN_49 = 2'h3 == counter[1:0] ? _GEN_53 : dest_3; // @[Muxes.scala 36:23 61:{25,25}]
  wire [15:0] _muxes_T_17 = _muxes_T_6 - _muxes_T_2; // @[Muxes.scala 63:75]
  wire [3:0] _GEN_60 = _GEN_224 & _GEN_225 ? _muxes_T_17[3:0] : muxes_0_0; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_61 = _GEN_224 & _GEN_227 ? _muxes_T_17[3:0] : muxes_0_1; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_62 = _GEN_224 & _GEN_229 ? _muxes_T_17[3:0] : muxes_0_2; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_63 = _GEN_224 & _GEN_231 ? _muxes_T_17[3:0] : muxes_0_3; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_64 = _GEN_232 & _GEN_225 ? _muxes_T_17[3:0] : muxes_1_0; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_65 = _GEN_232 & _GEN_227 ? _muxes_T_17[3:0] : muxes_1_1; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_66 = _GEN_232 & _GEN_229 ? _muxes_T_17[3:0] : muxes_1_2; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_67 = _GEN_232 & _GEN_231 ? _muxes_T_17[3:0] : muxes_1_3; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_68 = _GEN_240 & _GEN_225 ? _muxes_T_17[3:0] : muxes_2_0; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_69 = _GEN_240 & _GEN_227 ? _muxes_T_17[3:0] : muxes_2_1; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_70 = _GEN_240 & _GEN_229 ? _muxes_T_17[3:0] : muxes_2_2; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_71 = _GEN_240 & _GEN_231 ? _muxes_T_17[3:0] : muxes_2_3; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_72 = _GEN_248 & _GEN_225 ? _muxes_T_17[3:0] : muxes_3_0; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_73 = _GEN_248 & _GEN_227 ? _muxes_T_17[3:0] : muxes_3_1; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_74 = _GEN_248 & _GEN_229 ? _muxes_T_17[3:0] : muxes_3_2; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_75 = _GEN_248 & _GEN_231 ? _muxes_T_17[3:0] : muxes_3_3; // @[Muxes.scala 34:24 63:{40,40}]
  wire [3:0] _GEN_90 = _GEN_9 <= _GEN_17 ? _GEN_24 : _GEN_60; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_91 = _GEN_9 <= _GEN_17 ? _GEN_25 : _GEN_61; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_92 = _GEN_9 <= _GEN_17 ? _GEN_26 : _GEN_62; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_93 = _GEN_9 <= _GEN_17 ? _GEN_27 : _GEN_63; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_94 = _GEN_9 <= _GEN_17 ? _GEN_28 : _GEN_64; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_95 = _GEN_9 <= _GEN_17 ? _GEN_29 : _GEN_65; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_96 = _GEN_9 <= _GEN_17 ? _GEN_30 : _GEN_66; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_97 = _GEN_9 <= _GEN_17 ? _GEN_31 : _GEN_67; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_98 = _GEN_9 <= _GEN_17 ? _GEN_32 : _GEN_68; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_99 = _GEN_9 <= _GEN_17 ? _GEN_33 : _GEN_69; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_100 = _GEN_9 <= _GEN_17 ? _GEN_34 : _GEN_70; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_101 = _GEN_9 <= _GEN_17 ? _GEN_35 : _GEN_71; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_102 = _GEN_9 <= _GEN_17 ? _GEN_36 : _GEN_72; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_103 = _GEN_9 <= _GEN_17 ? _GEN_37 : _GEN_73; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_104 = _GEN_9 <= _GEN_17 ? _GEN_38 : _GEN_74; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_105 = _GEN_9 <= _GEN_17 ? _GEN_39 : _GEN_75; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_106 = _GEN_9 <= _GEN_17 ? _GEN_40 : _GEN_40; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_107 = _GEN_9 <= _GEN_17 ? _GEN_41 : _GEN_41; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_108 = _GEN_9 <= _GEN_17 ? _GEN_42 : _GEN_42; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_109 = _GEN_9 <= _GEN_17 ? _GEN_43 : _GEN_43; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_110 = _GEN_9 <= _GEN_17 ? _GEN_46 : _GEN_46; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_111 = _GEN_9 <= _GEN_17 ? _GEN_47 : _GEN_47; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_112 = _GEN_9 <= _GEN_17 ? _GEN_48 : _GEN_48; // @[Muxes.scala 58:62]
  wire [15:0] _GEN_113 = _GEN_9 <= _GEN_17 ? _GEN_49 : _GEN_49; // @[Muxes.scala 58:62]
  wire [3:0] _GEN_114 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_90 : muxes_0_0; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_115 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_91 : muxes_0_1; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_116 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_92 : muxes_0_2; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_117 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_93 : muxes_0_3; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_118 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_94 : muxes_1_0; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_119 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_95 : muxes_1_1; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_120 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_96 : muxes_1_2; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_121 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_97 : muxes_1_3; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_122 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_98 : muxes_2_0; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_123 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_99 : muxes_2_1; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_124 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_100 : muxes_2_2; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_125 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_101 : muxes_2_3; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_126 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_102 : muxes_3_0; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_127 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_103 : muxes_3_1; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_128 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_104 : muxes_3_2; // @[Muxes.scala 34:24 56:81]
  wire [3:0] _GEN_129 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_105 : muxes_3_3; // @[Muxes.scala 34:24 56:81]
  wire [15:0] _GEN_130 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_106 : src_0; // @[Muxes.scala 35:22 56:81]
  wire [15:0] _GEN_131 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_107 : src_1; // @[Muxes.scala 35:22 56:81]
  wire [15:0] _GEN_132 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_108 : src_2; // @[Muxes.scala 35:22 56:81]
  wire [15:0] _GEN_133 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_109 : src_3; // @[Muxes.scala 35:22 56:81]
  wire [15:0] _GEN_134 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_110 : dest_0; // @[Muxes.scala 36:23 56:81]
  wire [15:0] _GEN_135 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_111 : dest_1; // @[Muxes.scala 36:23 56:81]
  wire [15:0] _GEN_136 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_112 : dest_2; // @[Muxes.scala 36:23 56:81]
  wire [15:0] _GEN_137 = ~jValid & _GEN_9 != 16'h0 & _GEN_11 != 16'h0 ? _GEN_113 : dest_3; // @[Muxes.scala 36:23 56:81]
  wire [31:0] _T_28 = i + 32'h1; // @[Muxes.scala 84:50]
  wire [15:0] _GEN_139 = _T_28[0] ? io_counterMatrix1_0_1 : io_counterMatrix1_0_0; // @[Muxes.scala 84:{56,56}]
  wire [15:0] _GEN_141 = _T_28[0] ? io_mat2_1 : io_mat2_0; // @[Muxes.scala 84:{84,84}]
  wire  _T_37 = j == 32'h1; // @[Muxes.scala 84:99]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[Muxes.scala 85:26]
  wire [31:0] _T_41 = j + 32'h1; // @[Muxes.scala 87:50]
  wire [15:0] _GEN_143 = ~_T_41[0] & i[0] ? io_counterMatrix1_0_1 : io_counterMatrix1_0_0; // @[Muxes.scala 87:{60,60}]
  wire [15:0] _GEN_144 = _T_41[0] & _GEN_219 ? io_counterMatrix1_1_0 : _GEN_143; // @[Muxes.scala 87:{60,60}]
  wire [15:0] _GEN_145 = _T_41[0] & i[0] ? io_counterMatrix1_1_1 : _GEN_144; // @[Muxes.scala 87:{60,60}]
  wire  _T_49 = j < 32'h1; // @[Muxes.scala 87:99]
  wire [31:0] _indexcounter_T_1 = indexcounter + 32'h1; // @[Muxes.scala 88:36]
  wire [31:0] _GEN_148 = _T_6 & _GEN_145 != 16'h0 & _T_12 & j < 32'h1 ? _indexcounter_T_1 : indexcounter; // @[Muxes.scala 87:126 88:20 32:31]
  wire [31:0] _GEN_149 = _T_6 & _GEN_139 != 16'h0 & _GEN_141 != 16'h0 & j == 32'h1 ? _counter_T_1 : counter; // @[Muxes.scala 84:127 85:15 31:26]
  wire [31:0] _GEN_150 = _T_6 & _GEN_139 != 16'h0 & _GEN_141 != 16'h0 & j == 32'h1 ? 32'h0 : _GEN_148; // @[Muxes.scala 84:127 86:20]
  wire  _T_54 = i == 32'h1; // @[Muxes.scala 96:55]
  wire [31:0] _GEN_151 = i < 32'h1 ? _T_28 : i; // @[Muxes.scala 100:42 101:13 28:20]
  wire  _GEN_152 = _T_37 & i == 32'h1 | jValid; // @[Muxes.scala 96:83 97:16 27:25]
  reg [31:0] jNext; // @[Muxes.scala 123:24]
  wire [31:0] _k_T_1 = k + 32'h1; // @[Muxes.scala 132:14]
  assign io_i_mux_bus_0_0 = muxes_0_0; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_0_1 = muxes_0_1; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_0_2 = muxes_0_2; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_0_3 = muxes_0_3; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_1_0 = muxes_1_0; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_1_1 = muxes_1_1; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_1_2 = muxes_1_2; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_1_3 = muxes_1_3; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_2_0 = muxes_2_0; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_2_1 = muxes_2_1; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_2_2 = muxes_2_2; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_2_3 = muxes_2_3; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_3_0 = muxes_3_0; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_3_1 = muxes_3_1; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_3_2 = muxes_3_2; // @[Muxes.scala 38:18]
  assign io_i_mux_bus_3_3 = muxes_3_3; // @[Muxes.scala 38:18]
  assign io_Source_0 = src_0; // @[Muxes.scala 39:15]
  assign io_Source_1 = src_1; // @[Muxes.scala 39:15]
  assign io_Source_2 = src_2; // @[Muxes.scala 39:15]
  assign io_Source_3 = src_3; // @[Muxes.scala 39:15]
  assign io_valid = k != 32'h0 & _T_37 & _T_54 & jNext == 32'h0; // @[Muxes.scala 126:86]
  always @(posedge clock) begin
    prevStationary_matrix_0_0 <= io_mat1_0_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_0_1 <= io_mat1_0_1; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_0 <= io_mat1_1_0; // @[Muxes.scala 19:40]
    prevStationary_matrix_1_1 <= io_mat1_1_1; // @[Muxes.scala 19:40]
    prevStreaming_matrix_0 <= io_mat2_0; // @[Muxes.scala 20:39]
    prevStreaming_matrix_1 <= io_mat2_1; // @[Muxes.scala 20:39]
    if (io_mat2_1 != prevStreaming_matrix_1) begin // @[Muxes.scala 51:51]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 52:26]
    end else if (io_mat1_1_1 != prevStationary_matrix_1_1) begin // @[Muxes.scala 47:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 48:28]
    end else if (io_mat1_1_0 != prevStationary_matrix_1_0) begin // @[Muxes.scala 47:61]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 48:28]
    end else if (io_mat2_0 != prevStreaming_matrix_0) begin // @[Muxes.scala 51:51]
      matricesAreEqual <= 1'h0; // @[Muxes.scala 52:26]
    end else begin
      matricesAreEqual <= _GEN_1;
    end
    if (reset) begin // @[Muxes.scala 27:25]
      jValid <= 1'h0; // @[Muxes.scala 27:25]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      if (!(_T_49)) begin // @[Muxes.scala 94:40]
        jValid <= _GEN_152;
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      jValid <= 1'h0; // @[Muxes.scala 108:14]
    end
    if (reset) begin // @[Muxes.scala 28:20]
      i <= 32'h0; // @[Muxes.scala 28:20]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      if (!(_T_49)) begin // @[Muxes.scala 94:40]
        if (!(_T_37 & i == 32'h1)) begin // @[Muxes.scala 96:83]
          i <= _GEN_151;
        end
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      i <= 32'h0; // @[Muxes.scala 106:9]
    end
    if (reset) begin // @[Muxes.scala 29:20]
      j <= 32'h0; // @[Muxes.scala 29:20]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      if (_T_49) begin // @[Muxes.scala 94:40]
        j <= _T_41; // @[Muxes.scala 95:11]
      end else if (!(_T_37 & i == 32'h1)) begin // @[Muxes.scala 96:83]
        j <= 32'h0; // @[Muxes.scala 99:11]
      end
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      j <= 32'h0; // @[Muxes.scala 107:9]
    end
    if (reset) begin // @[Muxes.scala 30:20]
      k <= 32'h0; // @[Muxes.scala 30:20]
    end else if (_T_54 & _T_37) begin // @[Muxes.scala 131:76]
      k <= _k_T_1; // @[Muxes.scala 132:9]
    end
    if (reset) begin // @[Muxes.scala 31:26]
      counter <= 32'h0; // @[Muxes.scala 31:26]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      counter <= _GEN_149;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      counter <= 32'h0; // @[Muxes.scala 109:15]
    end else begin
      counter <= _GEN_149;
    end
    if (reset) begin // @[Muxes.scala 32:31]
      indexcounter <= 32'h0; // @[Muxes.scala 32:31]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      indexcounter <= _GEN_150;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      indexcounter <= 32'h0; // @[Muxes.scala 110:20]
    end else begin
      indexcounter <= _GEN_150;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_0_0 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_0_0 <= _GEN_114;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_0_0 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_0_0 <= _GEN_114;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_0_1 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_0_1 <= _GEN_115;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_0_1 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_0_1 <= _GEN_115;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_0_2 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_0_2 <= _GEN_116;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_0_2 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_0_2 <= _GEN_116;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_0_3 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_0_3 <= _GEN_117;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_0_3 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_0_3 <= _GEN_117;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_1_0 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_1_0 <= _GEN_118;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_1_0 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_1_0 <= _GEN_118;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_1_1 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_1_1 <= _GEN_119;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_1_1 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_1_1 <= _GEN_119;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_1_2 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_1_2 <= _GEN_120;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_1_2 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_1_2 <= _GEN_120;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_1_3 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_1_3 <= _GEN_121;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_1_3 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_1_3 <= _GEN_121;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_2_0 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_2_0 <= _GEN_122;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_2_0 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_2_0 <= _GEN_122;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_2_1 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_2_1 <= _GEN_123;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_2_1 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_2_1 <= _GEN_123;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_2_2 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_2_2 <= _GEN_124;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_2_2 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_2_2 <= _GEN_124;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_2_3 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_2_3 <= _GEN_125;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_2_3 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_2_3 <= _GEN_125;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_3_0 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_3_0 <= _GEN_126;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_3_0 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_3_0 <= _GEN_126;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_3_1 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_3_1 <= _GEN_127;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_3_1 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_3_1 <= _GEN_127;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_3_2 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_3_2 <= _GEN_128;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_3_2 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_3_2 <= _GEN_128;
    end
    if (reset) begin // @[Muxes.scala 34:24]
      muxes_3_3 <= 4'h0; // @[Muxes.scala 34:24]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      muxes_3_3 <= _GEN_129;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      muxes_3_3 <= 4'h0; // @[Muxes.scala 116:23]
    end else begin
      muxes_3_3 <= _GEN_129;
    end
    if (reset) begin // @[Muxes.scala 35:22]
      src_0 <= 16'h0; // @[Muxes.scala 35:22]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      src_0 <= _GEN_130;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      src_0 <= 16'h0; // @[Muxes.scala 113:16]
    end else begin
      src_0 <= _GEN_130;
    end
    if (reset) begin // @[Muxes.scala 35:22]
      src_1 <= 16'h0; // @[Muxes.scala 35:22]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      src_1 <= _GEN_131;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      src_1 <= 16'h0; // @[Muxes.scala 113:16]
    end else begin
      src_1 <= _GEN_131;
    end
    if (reset) begin // @[Muxes.scala 35:22]
      src_2 <= 16'h0; // @[Muxes.scala 35:22]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      src_2 <= _GEN_132;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      src_2 <= 16'h0; // @[Muxes.scala 113:16]
    end else begin
      src_2 <= _GEN_132;
    end
    if (reset) begin // @[Muxes.scala 35:22]
      src_3 <= 16'h0; // @[Muxes.scala 35:22]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      src_3 <= _GEN_133;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      src_3 <= 16'h0; // @[Muxes.scala 113:16]
    end else begin
      src_3 <= _GEN_133;
    end
    if (reset) begin // @[Muxes.scala 36:23]
      dest_0 <= 16'h0; // @[Muxes.scala 36:23]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      dest_0 <= _GEN_134;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      dest_0 <= 16'h0; // @[Muxes.scala 114:17]
    end else begin
      dest_0 <= _GEN_134;
    end
    if (reset) begin // @[Muxes.scala 36:23]
      dest_1 <= 16'h0; // @[Muxes.scala 36:23]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      dest_1 <= _GEN_135;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      dest_1 <= 16'h0; // @[Muxes.scala 114:17]
    end else begin
      dest_1 <= _GEN_135;
    end
    if (reset) begin // @[Muxes.scala 36:23]
      dest_2 <= 16'h0; // @[Muxes.scala 36:23]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      dest_2 <= _GEN_136;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      dest_2 <= 16'h0; // @[Muxes.scala 114:17]
    end else begin
      dest_2 <= _GEN_136;
    end
    if (reset) begin // @[Muxes.scala 36:23]
      dest_3 <= 16'h0; // @[Muxes.scala 36:23]
    end else if (_T_6) begin // @[Muxes.scala 92:29]
      dest_3 <= _GEN_137;
    end else if (jValid & ~matricesAreEqual) begin // @[Muxes.scala 104:64]
      dest_3 <= 16'h0; // @[Muxes.scala 114:17]
    end else begin
      dest_3 <= _GEN_137;
    end
    if (reset) begin // @[Muxes.scala 123:24]
      jNext <= 32'h0; // @[Muxes.scala 123:24]
    end else begin
      jNext <= j; // @[Muxes.scala 124:11]
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
  k = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  counter = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  indexcounter = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  muxes_0_0 = _RAND_13[3:0];
  _RAND_14 = {1{`RANDOM}};
  muxes_0_1 = _RAND_14[3:0];
  _RAND_15 = {1{`RANDOM}};
  muxes_0_2 = _RAND_15[3:0];
  _RAND_16 = {1{`RANDOM}};
  muxes_0_3 = _RAND_16[3:0];
  _RAND_17 = {1{`RANDOM}};
  muxes_1_0 = _RAND_17[3:0];
  _RAND_18 = {1{`RANDOM}};
  muxes_1_1 = _RAND_18[3:0];
  _RAND_19 = {1{`RANDOM}};
  muxes_1_2 = _RAND_19[3:0];
  _RAND_20 = {1{`RANDOM}};
  muxes_1_3 = _RAND_20[3:0];
  _RAND_21 = {1{`RANDOM}};
  muxes_2_0 = _RAND_21[3:0];
  _RAND_22 = {1{`RANDOM}};
  muxes_2_1 = _RAND_22[3:0];
  _RAND_23 = {1{`RANDOM}};
  muxes_2_2 = _RAND_23[3:0];
  _RAND_24 = {1{`RANDOM}};
  muxes_2_3 = _RAND_24[3:0];
  _RAND_25 = {1{`RANDOM}};
  muxes_3_0 = _RAND_25[3:0];
  _RAND_26 = {1{`RANDOM}};
  muxes_3_1 = _RAND_26[3:0];
  _RAND_27 = {1{`RANDOM}};
  muxes_3_2 = _RAND_27[3:0];
  _RAND_28 = {1{`RANDOM}};
  muxes_3_3 = _RAND_28[3:0];
  _RAND_29 = {1{`RANDOM}};
  src_0 = _RAND_29[15:0];
  _RAND_30 = {1{`RANDOM}};
  src_1 = _RAND_30[15:0];
  _RAND_31 = {1{`RANDOM}};
  src_2 = _RAND_31[15:0];
  _RAND_32 = {1{`RANDOM}};
  src_3 = _RAND_32[15:0];
  _RAND_33 = {1{`RANDOM}};
  dest_0 = _RAND_33[15:0];
  _RAND_34 = {1{`RANDOM}};
  dest_1 = _RAND_34[15:0];
  _RAND_35 = {1{`RANDOM}};
  dest_2 = _RAND_35[15:0];
  _RAND_36 = {1{`RANDOM}};
  dest_3 = _RAND_36[15:0];
  _RAND_37 = {1{`RANDOM}};
  jNext = _RAND_37[31:0];
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
  output [15:0] io_counterMatrix1_bits_0_0,
  output [15:0] io_counterMatrix1_bits_0_1,
  output [15:0] io_counterMatrix1_bits_1_0,
  output [15:0] io_counterMatrix1_bits_1_1,
  output [15:0] io_counterMatrix2_bits_0,
  output [15:0] io_counterMatrix2_bits_1,
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
`endif // RANDOMIZE_REG_INIT
  reg [15:0] prevStationary_matrix_0; // @[SourceDestination.scala 15:40]
  reg [15:0] prevStationary_matrix_1; // @[SourceDestination.scala 15:40]
  reg  matricesAreEqual; // @[SourceDestination.scala 16:35]
  reg [15:0] counterRegs1_0_0; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_0_1; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_1_0; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs1_1_1; // @[SourceDestination.scala 17:31]
  reg [15:0] counterRegs2_0; // @[SourceDestination.scala 18:31]
  reg [15:0] counterRegs2_1; // @[SourceDestination.scala 18:31]
  reg [31:0] i; // @[SourceDestination.scala 20:20]
  reg [31:0] j; // @[SourceDestination.scala 21:20]
  reg  jValid; // @[SourceDestination.scala 25:21]
  reg [31:0] k; // @[SourceDestination.scala 26:20]
  reg [31:0] counter1; // @[SourceDestination.scala 28:27]
  reg [31:0] counter2; // @[SourceDestination.scala 29:27]
  wire  _reg_i_T = j == 32'h1; // @[SourceDestination.scala 31:29]
  wire  _reg_i_T_1 = i == 32'h1; // @[SourceDestination.scala 31:63]
  wire  _reg_i_T_2 = j == 32'h1 & i == 32'h1; // @[SourceDestination.scala 31:57]
  wire  _GEN_0 = io_Streaming_matrix_0[0] != prevStationary_matrix_0[0] ? 1'h0 : matricesAreEqual; // @[SourceDestination.scala 36:73 37:28 16:35]
  wire  _GEN_1 = io_Streaming_matrix_0[1] != prevStationary_matrix_0[1] ? 1'h0 : _GEN_0; // @[SourceDestination.scala 36:73 37:28]
  wire  _GEN_2 = io_Streaming_matrix_1[0] != prevStationary_matrix_1[0] ? 1'h0 : _GEN_1; // @[SourceDestination.scala 36:73 37:28]
  wire  _GEN_3 = io_Streaming_matrix_1[1] != prevStationary_matrix_1[1] ? 1'h0 : _GEN_2; // @[SourceDestination.scala 36:73 37:28]
  wire  high = _reg_i_T_1 & _reg_i_T; // @[SourceDestination.scala 42:28]
  wire  _GEN_4 = ~high | _GEN_3; // @[SourceDestination.scala 43:17 44:24]
  wire  _GEN_97 = ~i[0]; // @[SourceDestination.scala 57:{38,38}]
  wire [15:0] _GEN_6 = ~i[0] & j[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[SourceDestination.scala 57:{38,38}]
  wire  _GEN_98 = ~j[0]; // @[SourceDestination.scala 57:{38,38}]
  wire [15:0] _GEN_7 = i[0] & ~j[0] ? io_Stationary_matrix_1_0 : _GEN_6; // @[SourceDestination.scala 57:{38,38}]
  wire [15:0] _GEN_8 = i[0] & j[0] ? io_Stationary_matrix_1_1 : _GEN_7; // @[SourceDestination.scala 57:{38,38}]
  wire [15:0] _GEN_9 = _GEN_97 & _GEN_98 ? counter1[15:0] : counterRegs1_0_0; // @[SourceDestination.scala 59:{28,28} 17:31]
  wire [15:0] _GEN_10 = _GEN_97 & j[0] ? counter1[15:0] : counterRegs1_0_1; // @[SourceDestination.scala 59:{28,28} 17:31]
  wire [15:0] _GEN_11 = i[0] & _GEN_98 ? counter1[15:0] : counterRegs1_1_0; // @[SourceDestination.scala 59:{28,28} 17:31]
  wire [15:0] _GEN_12 = i[0] & j[0] ? counter1[15:0] : counterRegs1_1_1; // @[SourceDestination.scala 59:{28,28} 17:31]
  wire [31:0] _counter1_T_1 = counter1 + 32'h1; // @[SourceDestination.scala 61:32]
  wire [31:0] _GEN_13 = ~_reg_i_T_2 ? _counter1_T_1 : counter1; // @[SourceDestination.scala 60:83 61:20 28:27]
  wire [15:0] _GEN_14 = _GEN_97 & _GEN_98 ? 16'h1 : counterRegs1_0_0; // @[SourceDestination.scala 64:{28,28} 17:31]
  wire [15:0] _GEN_15 = _GEN_97 & j[0] ? 16'h1 : counterRegs1_0_1; // @[SourceDestination.scala 64:{28,28} 17:31]
  wire [15:0] _GEN_16 = i[0] & _GEN_98 ? 16'h1 : counterRegs1_1_0; // @[SourceDestination.scala 64:{28,28} 17:31]
  wire [15:0] _GEN_17 = i[0] & j[0] ? 16'h1 : counterRegs1_1_1; // @[SourceDestination.scala 64:{28,28} 17:31]
  wire [15:0] _GEN_18 = counter1 < 32'h5 ? _GEN_9 : _GEN_14; // @[SourceDestination.scala 58:48]
  wire [15:0] _GEN_19 = counter1 < 32'h5 ? _GEN_10 : _GEN_15; // @[SourceDestination.scala 58:48]
  wire [15:0] _GEN_20 = counter1 < 32'h5 ? _GEN_11 : _GEN_16; // @[SourceDestination.scala 58:48]
  wire [15:0] _GEN_21 = counter1 < 32'h5 ? _GEN_12 : _GEN_17; // @[SourceDestination.scala 58:48]
  wire [31:0] _GEN_22 = counter1 < 32'h5 ? _GEN_13 : 32'h2; // @[SourceDestination.scala 58:48 65:18]
  wire [15:0] _GEN_23 = _GEN_97 & _GEN_98 ? 16'h0 : counterRegs1_0_0; // @[SourceDestination.scala 68:{26,26} 17:31]
  wire [15:0] _GEN_24 = _GEN_97 & j[0] ? 16'h0 : counterRegs1_0_1; // @[SourceDestination.scala 68:{26,26} 17:31]
  wire [15:0] _GEN_25 = i[0] & _GEN_98 ? 16'h0 : counterRegs1_1_0; // @[SourceDestination.scala 68:{26,26} 17:31]
  wire [15:0] _GEN_26 = i[0] & j[0] ? 16'h0 : counterRegs1_1_1; // @[SourceDestination.scala 68:{26,26} 17:31]
  wire [15:0] _GEN_27 = _GEN_8 != 16'h0 ? _GEN_18 : _GEN_23; // @[SourceDestination.scala 57:47]
  wire [15:0] _GEN_28 = _GEN_8 != 16'h0 ? _GEN_19 : _GEN_24; // @[SourceDestination.scala 57:47]
  wire [15:0] _GEN_29 = _GEN_8 != 16'h0 ? _GEN_20 : _GEN_25; // @[SourceDestination.scala 57:47]
  wire [15:0] _GEN_30 = _GEN_8 != 16'h0 ? _GEN_21 : _GEN_26; // @[SourceDestination.scala 57:47]
  wire [31:0] _GEN_31 = _GEN_8 != 16'h0 ? _GEN_22 : counter1; // @[SourceDestination.scala 28:27 57:47]
  wire [15:0] _GEN_33 = k[0] ? io_Streaming_matrix_1 : io_Streaming_matrix_0; // @[SourceDestination.scala 71:{34,34}]
  wire [15:0] _GEN_34 = ~k[0] ? counter2[15:0] : counterRegs2_0; // @[SourceDestination.scala 72:{23,23} 18:31]
  wire [15:0] _GEN_35 = k[0] ? counter2[15:0] : counterRegs2_1; // @[SourceDestination.scala 72:{23,23} 18:31]
  wire [31:0] _counter2_T_1 = counter2 + 32'h1; // @[SourceDestination.scala 73:28]
  wire [15:0] _GEN_36 = _GEN_33 != 16'h0 ? _GEN_34 : counterRegs2_0; // @[SourceDestination.scala 18:31 71:43]
  wire [15:0] _GEN_37 = _GEN_33 != 16'h0 ? _GEN_35 : counterRegs2_1; // @[SourceDestination.scala 18:31 71:43]
  wire [31:0] _GEN_38 = _GEN_33 != 16'h0 ? _counter2_T_1 : counter2; // @[SourceDestination.scala 71:43 73:16 29:27]
  wire [31:0] _k_T_1 = k + 32'h1; // @[SourceDestination.scala 81:16]
  wire [31:0] _GEN_40 = k == 32'h1 ? k : _k_T_1; // @[SourceDestination.scala 77:37 78:9]
  wire [31:0] _GEN_41 = k == 32'h1 ? counter2 : _GEN_38; // @[SourceDestination.scala 77:37 79:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[SourceDestination.scala 85:16]
  wire [31:0] _i_T_1 = i + 32'h1; // @[SourceDestination.scala 91:18]
  wire [31:0] _GEN_42 = i < 32'h1 ? _i_T_1 : i; // @[SourceDestination.scala 90:42 91:13 20:20]
  wire [31:0] _GEN_44 = _reg_i_T_2 ? j : 32'h0; // @[SourceDestination.scala 21:20 86:83 89:11]
  wire [31:0] _GEN_45 = _reg_i_T_2 ? i : _GEN_42; // @[SourceDestination.scala 20:20 86:83]
  wire  _GEN_47 = j < 32'h1 ? 1'h0 : _reg_i_T_2; // @[SourceDestination.scala 53:12 84:40]
  wire  _GEN_54 = jValid & ~matricesAreEqual & high | _GEN_4; // @[SourceDestination.scala 100:24 94:74]
  wire  _GEN_62 = ~jValid & _GEN_47; // @[SourceDestination.scala 53:12 83:26]
  wire  _GEN_67 = ~jValid ? _GEN_4 : _GEN_54; // @[SourceDestination.scala 83:26]
  reg  io_valid_REG; // @[SourceDestination.scala 109:24]
  wire  _GEN_88 = io_start ? _GEN_67 : _GEN_4; // @[SourceDestination.scala 47:17]
  wire [31:0] _GEN_91 = io_start ? {{16'd0}, counterRegs1_0_0} : 32'h0; // @[SourceDestination.scala 47:17 119:28 123:26]
  wire [31:0] _GEN_92 = io_start ? {{16'd0}, counterRegs1_0_1} : 32'h0; // @[SourceDestination.scala 47:17 119:28 123:26]
  wire [31:0] _GEN_93 = io_start ? {{16'd0}, counterRegs1_1_0} : 32'h0; // @[SourceDestination.scala 47:17 119:28 123:26]
  wire [31:0] _GEN_94 = io_start ? {{16'd0}, counterRegs1_1_1} : 32'h0; // @[SourceDestination.scala 47:17 119:28 123:26]
  wire [31:0] _GEN_95 = io_start ? {{16'd0}, counterRegs2_0} : 32'h0; // @[SourceDestination.scala 47:17 120:28 124:26]
  wire [31:0] _GEN_96 = io_start ? {{16'd0}, counterRegs2_1} : 32'h0; // @[SourceDestination.scala 47:17 120:28 124:26]
  assign io_counterMatrix1_bits_0_0 = _GEN_91[15:0];
  assign io_counterMatrix1_bits_0_1 = _GEN_92[15:0];
  assign io_counterMatrix1_bits_1_0 = _GEN_93[15:0];
  assign io_counterMatrix1_bits_1_1 = _GEN_94[15:0];
  assign io_counterMatrix2_bits_0 = _GEN_95[15:0];
  assign io_counterMatrix2_bits_1 = _GEN_96[15:0];
  assign io_valid = io_start & io_valid_REG; // @[SourceDestination.scala 109:14 127:12 47:17]
  always @(posedge clock) begin
    prevStationary_matrix_0 <= io_Streaming_matrix_0; // @[SourceDestination.scala 15:40]
    prevStationary_matrix_1 <= io_Streaming_matrix_1; // @[SourceDestination.scala 15:40]
    matricesAreEqual <= reset | _GEN_88; // @[SourceDestination.scala 16:{35,35}]
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counterRegs1_0_0 <= _GEN_27;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counterRegs1_0_0 <= 16'h0; // @[SourceDestination.scala 103:30]
      end else begin
        counterRegs1_0_0 <= _GEN_27;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counterRegs1_0_1 <= _GEN_28;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counterRegs1_0_1 <= 16'h0; // @[SourceDestination.scala 103:30]
      end else begin
        counterRegs1_0_1 <= _GEN_28;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counterRegs1_1_0 <= _GEN_29;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counterRegs1_1_0 <= 16'h0; // @[SourceDestination.scala 103:30]
      end else begin
        counterRegs1_1_0 <= _GEN_29;
      end
    end
    if (reset) begin // @[SourceDestination.scala 17:31]
      counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 17:31]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counterRegs1_1_1 <= _GEN_30;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counterRegs1_1_1 <= 16'h0; // @[SourceDestination.scala 103:30]
      end else begin
        counterRegs1_1_1 <= _GEN_30;
      end
    end
    if (reset) begin // @[SourceDestination.scala 18:31]
      counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 18:31]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counterRegs2_0 <= _GEN_36;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counterRegs2_0 <= 16'h0; // @[SourceDestination.scala 105:25]
      end else begin
        counterRegs2_0 <= _GEN_36;
      end
    end
    if (reset) begin // @[SourceDestination.scala 18:31]
      counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 18:31]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counterRegs2_1 <= _GEN_37;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counterRegs2_1 <= 16'h0; // @[SourceDestination.scala 105:25]
      end else begin
        counterRegs2_1 <= _GEN_37;
      end
    end
    if (reset) begin // @[SourceDestination.scala 20:20]
      i <= 32'h0; // @[SourceDestination.scala 20:20]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        if (!(j < 32'h1)) begin // @[SourceDestination.scala 84:40]
          i <= _GEN_45;
        end
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        i <= 32'h0; // @[SourceDestination.scala 95:9]
      end
    end
    if (reset) begin // @[SourceDestination.scala 21:20]
      j <= 32'h0; // @[SourceDestination.scala 21:20]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        if (j < 32'h1) begin // @[SourceDestination.scala 84:40]
          j <= _j_T_1; // @[SourceDestination.scala 85:11]
        end else begin
          j <= _GEN_44;
        end
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        j <= 32'h0; // @[SourceDestination.scala 96:9]
      end
    end
    if (io_start) begin // @[SourceDestination.scala 47:17]
      jValid <= _GEN_62;
    end
    if (reset) begin // @[SourceDestination.scala 26:20]
      k <= 32'h0; // @[SourceDestination.scala 26:20]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        k <= _GEN_40;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        k <= 32'h0; // @[SourceDestination.scala 97:9]
      end else begin
        k <= _GEN_40;
      end
    end
    if (reset) begin // @[SourceDestination.scala 28:27]
      counter1 <= 32'h1; // @[SourceDestination.scala 28:27]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counter1 <= _GEN_31;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counter1 <= 32'h1; // @[SourceDestination.scala 98:16]
      end else begin
        counter1 <= _GEN_31;
      end
    end
    if (reset) begin // @[SourceDestination.scala 29:27]
      counter2 <= 32'h1; // @[SourceDestination.scala 29:27]
    end else if (io_start) begin // @[SourceDestination.scala 47:17]
      if (~jValid) begin // @[SourceDestination.scala 83:26]
        counter2 <= _GEN_41;
      end else if (jValid & ~matricesAreEqual & high) begin // @[SourceDestination.scala 94:74]
        counter2 <= 32'h1; // @[SourceDestination.scala 99:16]
      end else begin
        counter2 <= _GEN_41;
      end
    end
    io_valid_REG <= _reg_i_T_1 & _reg_i_T; // @[SourceDestination.scala 109:54]
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
  prevStationary_matrix_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  prevStationary_matrix_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  matricesAreEqual = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  counterRegs1_0_0 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  counterRegs1_0_1 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  counterRegs1_1_0 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  counterRegs1_1_1 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  counterRegs2_0 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  counterRegs2_1 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  i = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  j = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  jValid = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  k = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  counter1 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  counter2 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  io_valid_REG = _RAND_15[0:0];
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
  input  [31:0] io_mat_1_0,
  input  [31:0] io_mat_1_1,
  output [31:0] io_OutMat_0_0,
  output [31:0] io_OutMat_0_1,
  output [31:0] io_OutMat_1_0,
  output [31:0] io_OutMat_1_1,
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
`endif // RANDOMIZE_REG_INIT
  reg [31:0] b_0_0; // @[singleLoop.scala 19:20]
  reg [31:0] b_0_1; // @[singleLoop.scala 19:20]
  reg [31:0] b_1_0; // @[singleLoop.scala 19:20]
  reg [31:0] b_1_1; // @[singleLoop.scala 19:20]
  reg [31:0] j; // @[singleLoop.scala 21:16]
  reg [31:0] a; // @[singleLoop.scala 23:20]
  wire  _T_1 = io_valid & a != 32'h0; // @[singleLoop.scala 24:19]
  wire [31:0] _GEN_5 = ~io_IDex[0] & j[0] ? io_mat_0_1 : io_mat_0_0; // @[singleLoop.scala 25:{19,19}]
  wire [31:0] _GEN_6 = io_IDex[0] & ~j[0] ? io_mat_1_0 : _GEN_5; // @[singleLoop.scala 25:{19,19}]
  wire  _T_4 = j == 32'h1; // @[singleLoop.scala 26:13]
  wire [31:0] _GEN_13 = io_IDex[0] ? io_mat_1_1 : io_mat_0_1; // @[singleLoop.scala 27:{45,45}]
  reg  io_Ovalid_REG; // @[singleLoop.scala 27:25]
  wire [31:0] _a_T_1 = a + 32'h1; // @[singleLoop.scala 46:12]
  wire [31:0] _j_T_1 = j + 32'h1; // @[singleLoop.scala 49:16]
  assign io_OutMat_0_0 = b_0_0; // @[singleLoop.scala 20:15]
  assign io_OutMat_0_1 = b_0_1; // @[singleLoop.scala 20:15]
  assign io_OutMat_1_0 = b_1_0; // @[singleLoop.scala 20:15]
  assign io_OutMat_1_1 = b_1_1; // @[singleLoop.scala 20:15]
  assign io_Ovalid = j == 32'h1 & io_Ovalid_REG; // @[singleLoop.scala 26:21 27:15 29:19]
  assign io_ProcessValid = j == 32'h1; // @[singleLoop.scala 31:35]
  always @(posedge clock) begin
    if (reset) begin // @[singleLoop.scala 19:20]
      b_0_0 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (~io_IDex[0] & ~j[0]) begin // @[singleLoop.scala 25:19]
        if (io_IDex[0] & j[0]) begin // @[singleLoop.scala 25:19]
          b_0_0 <= io_mat_1_1; // @[singleLoop.scala 25:19]
        end else begin
          b_0_0 <= _GEN_6;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_0_1 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (~io_IDex[0] & j[0]) begin // @[singleLoop.scala 25:19]
        if (io_IDex[0] & j[0]) begin // @[singleLoop.scala 25:19]
          b_0_1 <= io_mat_1_1; // @[singleLoop.scala 25:19]
        end else begin
          b_0_1 <= _GEN_6;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_1_0 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (io_IDex[0] & ~j[0]) begin // @[singleLoop.scala 25:19]
        if (io_IDex[0] & j[0]) begin // @[singleLoop.scala 25:19]
          b_1_0 <= io_mat_1_1; // @[singleLoop.scala 25:19]
        end else begin
          b_1_0 <= _GEN_6;
        end
      end
    end
    if (reset) begin // @[singleLoop.scala 19:20]
      b_1_1 <= 32'h0; // @[singleLoop.scala 19:20]
    end else if (io_valid & a != 32'h0) begin // @[singleLoop.scala 24:34]
      if (io_IDex[0] & j[0]) begin // @[singleLoop.scala 25:19]
        if (io_IDex[0] & j[0]) begin // @[singleLoop.scala 25:19]
          b_1_1 <= io_mat_1_1; // @[singleLoop.scala 25:19]
        end else begin
          b_1_1 <= _GEN_6;
        end
      end
    end
    if (_T_1 & j < 32'h1) begin // @[singleLoop.scala 48:65]
      j <= _j_T_1; // @[singleLoop.scala 49:11]
    end else if (!(_T_4)) begin // @[singleLoop.scala 50:43]
      j <= io_JDex; // @[singleLoop.scala 22:7]
    end
    if (reset) begin // @[singleLoop.scala 23:20]
      a <= 32'h0; // @[singleLoop.scala 23:20]
    end else if (io_valid) begin // @[singleLoop.scala 45:20]
      a <= _a_T_1; // @[singleLoop.scala 46:7]
    end
    io_Ovalid_REG <= _GEN_13 == 32'h4; // @[singleLoop.scala 27:45]
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
  b_1_0 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  b_1_1 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  j = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  a = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  io_Ovalid_REG = _RAND_6[0:0];
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
  input  [31:0] io_PreMat_1_0,
  input  [31:0] io_PreMat_1_1,
  input  [31:0] io_IDex,
  input  [31:0] io_mat_0_0,
  input  [31:0] io_mat_0_1,
  input  [31:0] io_mat_1_0,
  input  [31:0] io_mat_1_1,
  input         io_i_valid,
  output        io_valid,
  output [31:0] io_Omat_0_0,
  output [31:0] io_Omat_0_1,
  output [31:0] io_Omat_1_0,
  output [31:0] io_Omat_1_1,
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
`endif // RANDOMIZE_REG_INIT
  reg [31:0] b_0_0; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_0_1; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_1_0; // @[MergeDIstribution.scala 18:20]
  reg [31:0] b_1_1; // @[MergeDIstribution.scala 18:20]
  reg [31:0] check; // @[MergeDIstribution.scala 20:24]
  reg [31:0] i; // @[MergeDIstribution.scala 22:20]
  reg [31:0] j; // @[MergeDIstribution.scala 23:20]
  wire  _io_valid_T_1 = j == 32'h1; // @[MergeDIstribution.scala 24:52]
  wire  _io_valid_T_2 = i == 32'h1 & j == 32'h1; // @[MergeDIstribution.scala 24:46]
  reg [31:0] k; // @[MergeDIstribution.scala 26:20]
  reg [31:0] l; // @[MergeDIstribution.scala 27:20]
  reg [31:0] delay; // @[MergeDIstribution.scala 29:24]
  wire [31:0] _delay_T_1 = delay + 32'h1; // @[MergeDIstribution.scala 32:24]
  wire [31:0] _k_T_1 = k + 32'h1; // @[MergeDIstribution.scala 44:16]
  wire [31:0] _l_T_1 = l + 32'h1; // @[MergeDIstribution.scala 47:16]
  wire [31:0] _GEN_10 = ~k[0] & l[0] ? io_PreMat_0_1 : io_PreMat_0_0; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_11 = k[0] & ~l[0] ? io_PreMat_1_0 : _GEN_10; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_12 = k[0] & l[0] ? io_PreMat_1_1 : _GEN_11; // @[MergeDIstribution.scala 52:{13,13}]
  wire [31:0] _GEN_5 = ~k[0] & ~l[0] ? _GEN_12 : b_0_0; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_6 = ~k[0] & l[0] ? _GEN_12 : b_0_1; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_7 = k[0] & ~l[0] ? _GEN_12 : b_1_0; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_8 = k[0] & l[0] ? _GEN_12 : b_1_1; // @[MergeDIstribution.scala 52:{13,13} 18:20]
  wire [31:0] _GEN_15 = io_merge & delay == 32'h2 ? _GEN_5 : b_0_0; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_16 = io_merge & delay == 32'h2 ? _GEN_6 : b_0_1; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_17 = io_merge & delay == 32'h2 ? _GEN_7 : b_1_0; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _GEN_18 = io_merge & delay == 32'h2 ? _GEN_8 : b_1_1; // @[MergeDIstribution.scala 18:20 41:53]
  wire [31:0] _i_T_1 = io_IDex + 32'h1; // @[MergeDIstribution.scala 55:22]
  wire [31:0] _check_T_1 = check + 32'h1; // @[MergeDIstribution.scala 57:24]
  wire [31:0] _GEN_19 = io_i_valid & i == 32'h0 & j == 32'h0 ? _i_T_1 : i; // @[MergeDIstribution.scala 54:53 55:11 22:20]
  wire [31:0] _GEN_20 = io_i_valid & i == 32'h0 & j == 32'h0 ? 32'h0 : j; // @[MergeDIstribution.scala 54:53 56:11 23:20]
  wire  _GEN_22 = check >= 32'h1; // @[MergeDIstribution.scala 60:17]
  wire [31:0] _GEN_29 = ~i[0] & j[0] ? io_mat_0_1 : io_mat_0_0; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_30 = i[0] & ~j[0] ? io_mat_1_0 : _GEN_29; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _GEN_31 = i[0] & j[0] ? io_mat_1_1 : _GEN_30; // @[MergeDIstribution.scala 68:{13,13}]
  wire [31:0] _i_T_3 = i + 32'h1; // @[MergeDIstribution.scala 105:16]
  wire [31:0] _j_T_1 = j + 32'h1; // @[MergeDIstribution.scala 108:16]
  wire [31:0] _GEN_40 = _io_valid_T_2 ? j : _GEN_20; // @[MergeDIstribution.scala 109:75 110:11]
  wire [31:0] _GEN_41 = i <= 32'h1 & j < 32'h1 ? _j_T_1 : _GEN_40; // @[MergeDIstribution.scala 107:74 108:11]
  wire  _GEN_46 = _GEN_31 == 32'h4 | i == 32'h1 & j == 32'h1; // @[MergeDIstribution.scala 100:44 103:18 24:14]
  wire  counter = check >= 32'h1; // @[MergeDIstribution.scala 60:17]
  assign io_valid = _GEN_22 ? _GEN_46 : i == 32'h1 & j == 32'h1; // @[MergeDIstribution.scala 24:14 97:14]
  assign io_Omat_0_0 = b_0_0; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_0_1 = b_0_1; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_1_0 = b_1_0; // @[MergeDIstribution.scala 19:13]
  assign io_Omat_1_1 = b_1_1; // @[MergeDIstribution.scala 19:13]
  always @(posedge clock) begin
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_0_0 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (~i[0] & ~j[0]) begin // @[MergeDIstribution.scala 68:13]
        if (i[0] & j[0]) begin // @[MergeDIstribution.scala 68:13]
          b_0_0 <= io_mat_1_1; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_0_0 <= _GEN_30;
        end
      end else begin
        b_0_0 <= _GEN_15;
      end
    end else begin
      b_0_0 <= _GEN_15;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_0_1 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (~i[0] & j[0]) begin // @[MergeDIstribution.scala 68:13]
        if (i[0] & j[0]) begin // @[MergeDIstribution.scala 68:13]
          b_0_1 <= io_mat_1_1; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_0_1 <= _GEN_30;
        end
      end else begin
        b_0_1 <= _GEN_16;
      end
    end else begin
      b_0_1 <= _GEN_16;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_1_0 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (i[0] & ~j[0]) begin // @[MergeDIstribution.scala 68:13]
        if (i[0] & j[0]) begin // @[MergeDIstribution.scala 68:13]
          b_1_0 <= io_mat_1_1; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_1_0 <= _GEN_30;
        end
      end else begin
        b_1_0 <= _GEN_17;
      end
    end else begin
      b_1_0 <= _GEN_17;
    end
    if (reset) begin // @[MergeDIstribution.scala 18:20]
      b_1_1 <= 32'h0; // @[MergeDIstribution.scala 18:20]
    end else if (io_merge) begin // @[MergeDIstribution.scala 67:19]
      if (i[0] & j[0]) begin // @[MergeDIstribution.scala 68:13]
        if (i[0] & j[0]) begin // @[MergeDIstribution.scala 68:13]
          b_1_1 <= io_mat_1_1; // @[MergeDIstribution.scala 68:13]
        end else begin
          b_1_1 <= _GEN_30;
        end
      end else begin
        b_1_1 <= _GEN_18;
      end
    end else begin
      b_1_1 <= _GEN_18;
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
    end else if (_GEN_22) begin // @[MergeDIstribution.scala 97:14]
      if (!(_GEN_31 == 32'h4)) begin // @[MergeDIstribution.scala 100:44]
        if (i < 32'h1 & _io_valid_T_1) begin // @[MergeDIstribution.scala 104:75]
          i <= _i_T_3; // @[MergeDIstribution.scala 105:11]
        end else begin
          i <= _GEN_19;
        end
      end
    end else begin
      i <= _GEN_19;
    end
    if (reset) begin // @[MergeDIstribution.scala 23:20]
      j <= 32'h0; // @[MergeDIstribution.scala 23:20]
    end else if (_GEN_22) begin // @[MergeDIstribution.scala 97:14]
      if (!(_GEN_31 == 32'h4)) begin // @[MergeDIstribution.scala 100:44]
        if (i < 32'h1 & _io_valid_T_1) begin // @[MergeDIstribution.scala 104:75]
          j <= 32'h0; // @[MergeDIstribution.scala 106:11]
        end else begin
          j <= _GEN_41;
        end
      end
    end else if (io_i_valid & i == 32'h0 & j == 32'h0) begin // @[MergeDIstribution.scala 54:53]
      j <= 32'h0; // @[MergeDIstribution.scala 56:11]
    end
    if (reset) begin // @[MergeDIstribution.scala 26:20]
      k <= 32'h0; // @[MergeDIstribution.scala 26:20]
    end else if (io_merge & delay == 32'h2) begin // @[MergeDIstribution.scala 41:53]
      if (k < io_IDex & l == 32'h1) begin // @[MergeDIstribution.scala 43:56]
        k <= _k_T_1; // @[MergeDIstribution.scala 44:11]
      end
    end
    if (reset) begin // @[MergeDIstribution.scala 27:20]
      l <= 32'h0; // @[MergeDIstribution.scala 27:20]
    end else if (io_merge & delay == 32'h2) begin // @[MergeDIstribution.scala 41:53]
      if (k < io_IDex & l == 32'h1) begin // @[MergeDIstribution.scala 43:56]
        l <= 32'h0; // @[MergeDIstribution.scala 45:11]
      end else if (k <= io_IDex & l < 32'h1) begin // @[MergeDIstribution.scala 46:61]
        l <= _l_T_1; // @[MergeDIstribution.scala 47:11]
      end
    end
    if (reset) begin // @[MergeDIstribution.scala 29:24]
      delay <= 32'h0; // @[MergeDIstribution.scala 29:24]
    end else if (delay <= 32'h1 & io_merge) begin // @[MergeDIstribution.scala 31:53]
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
  b_1_0 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  b_1_1 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  check = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  i = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  j = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  k = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  l = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  delay = _RAND_9[31:0];
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
  input  [31:0] io_matrix_1_0,
  input  [31:0] io_matrix_1_1,
  output [31:0] io_out_0_0,
  output [31:0] io_out_0_1,
  output [31:0] io_out_1_0,
  output [31:0] io_out_1_1,
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
`endif // RANDOMIZE_REG_INIT
  wire  part2_clock; // @[DIstribution.scala 53:19]
  wire  part2_reset; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_IDex; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_JDex; // @[DIstribution.scala 53:19]
  wire  part2_io_valid; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_mat_0_0; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_mat_0_1; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_mat_1_0; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_mat_1_1; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_OutMat_0_0; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_OutMat_0_1; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_OutMat_1_0; // @[DIstribution.scala 53:19]
  wire [31:0] part2_io_OutMat_1_1; // @[DIstribution.scala 53:19]
  wire  part2_io_Ovalid; // @[DIstribution.scala 53:19]
  wire  part2_io_ProcessValid; // @[DIstribution.scala 53:19]
  wire  part3_clock; // @[DIstribution.scala 67:23]
  wire  part3_reset; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_PreMat_0_0; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_PreMat_0_1; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_PreMat_1_0; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_PreMat_1_1; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_IDex; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_mat_0_0; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_mat_0_1; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_mat_1_0; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_mat_1_1; // @[DIstribution.scala 67:23]
  wire  part3_io_i_valid; // @[DIstribution.scala 67:23]
  wire  part3_io_valid; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_Omat_0_0; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_Omat_0_1; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_Omat_1_0; // @[DIstribution.scala 67:23]
  wire [31:0] part3_io_Omat_1_1; // @[DIstribution.scala 67:23]
  wire  part3_io_merge; // @[DIstribution.scala 67:23]
  reg [31:0] i; // @[DIstribution.scala 17:20]
  reg [31:0] j; // @[DIstribution.scala 18:20]
  reg [31:0] count; // @[DIstribution.scala 19:24]
  reg [31:0] Idex_0; // @[DIstribution.scala 20:23]
  reg [31:0] Idex_1; // @[DIstribution.scala 20:23]
  reg [31:0] Jdex_0; // @[DIstribution.scala 21:23]
  reg [31:0] Jdex_1; // @[DIstribution.scala 21:23]
  reg [31:0] iterationNo; // @[DIstribution.scala 23:30]
  wire  _io_validIteration_T = i == 32'h1; // @[DIstribution.scala 28:29]
  wire  _io_validIteration_T_1 = j == 32'h1; // @[DIstribution.scala 28:62]
  wire  _io_validIteration_T_2 = i == 32'h1 & j == 32'h1; // @[DIstribution.scala 28:56]
  wire [31:0] _GEN_1 = ~i[0] & j[0] ? io_matrix_0_1 : io_matrix_0_0; // @[DIstribution.scala 32:{27,27}]
  wire [31:0] _GEN_2 = i[0] & ~j[0] ? io_matrix_1_0 : _GEN_1; // @[DIstribution.scala 32:{27,27}]
  wire [31:0] _GEN_3 = i[0] & j[0] ? io_matrix_1_1 : _GEN_2; // @[DIstribution.scala 32:{27,27}]
  wire  _T_2 = _GEN_3 == 32'h1; // @[DIstribution.scala 32:27]
  wire [31:0] _iterationNo_T_1 = iterationNo + 32'h1; // @[DIstribution.scala 33:34]
  wire [31:0] _count_T_1 = count + 32'h1; // @[DIstribution.scala 46:24]
  wire [31:0] _GEN_9 = ~count[0] ? i : Idex_0; // @[DIstribution.scala 47:{21,21} 20:23]
  wire [31:0] _GEN_10 = count[0] ? i : Idex_1; // @[DIstribution.scala 47:{21,21} 20:23]
  wire [31:0] _GEN_11 = ~count[0] ? j : Jdex_0; // @[DIstribution.scala 48:{21,21} 21:23]
  wire [31:0] _GEN_12 = count[0] ? j : Jdex_1; // @[DIstribution.scala 48:{21,21} 21:23]
  reg  c; // @[DIstribution.scala 55:20]
  wire  check = part2_io_Ovalid ? 1'h0 : 1'h1; // @[DIstribution.scala 73:26 74:15 76:15]
  wire  e = 1'h0; // @[DIstribution.scala 78:75]
  reg  part3_io_merge_REG; // @[DIstribution.scala 81:30]
  wire [31:0] _GEN_41 = part3_io_Omat_0_0; // @[DIstribution.scala 88:96 89:16 91:12]
  wire [31:0] _GEN_42 = part3_io_Omat_0_1; // @[DIstribution.scala 88:96 89:16 91:12]
  wire [31:0] _GEN_43 = part3_io_Omat_1_0; // @[DIstribution.scala 88:96 89:16 91:12]
  wire [31:0] _GEN_44 = part3_io_Omat_1_1; // @[DIstribution.scala 88:96 89:16 91:12]
  wire [31:0] _GEN_45 = part2_io_OutMat_0_0; // @[DIstribution.scala 100:96 101:16 103:12]
  wire [31:0] _GEN_46 = part2_io_OutMat_0_1; // @[DIstribution.scala 100:96 101:16 103:12]
  wire [31:0] _GEN_47 = part2_io_OutMat_1_0; // @[DIstribution.scala 100:96 101:16 103:12]
  wire [31:0] _GEN_48 = part2_io_OutMat_1_1; // @[DIstribution.scala 100:96 101:16 103:12]
  wire [31:0] _GEN_61 = part2_io_ProcessValid & check ? _GEN_41 : _GEN_45; // @[DIstribution.scala 80:42]
  wire [31:0] _GEN_62 = part2_io_ProcessValid & check ? _GEN_42 : _GEN_46; // @[DIstribution.scala 80:42]
  wire [31:0] _GEN_63 = part2_io_ProcessValid & check ? _GEN_43 : _GEN_47; // @[DIstribution.scala 80:42]
  wire [31:0] _GEN_64 = part2_io_ProcessValid & check ? _GEN_44 : _GEN_48; // @[DIstribution.scala 80:42]
  wire  _GEN_65 = part2_io_ProcessValid & check ? part3_io_valid : part2_io_Ovalid; // @[DIstribution.scala 104:21 80:42 92:21]
  wire [31:0] _i_T_1 = i + 32'h1; // @[DIstribution.scala 112:16]
  wire  ab = i <= 32'h1 & j < 32'h1; // @[DIstribution.scala 115:42]
  wire [31:0] _j_T_1 = j + 32'h1; // @[DIstribution.scala 118:16]
  abc2 part2 ( // @[DIstribution.scala 53:19]
    .clock(part2_clock),
    .reset(part2_reset),
    .io_IDex(part2_io_IDex),
    .io_JDex(part2_io_JDex),
    .io_valid(part2_io_valid),
    .io_mat_0_0(part2_io_mat_0_0),
    .io_mat_0_1(part2_io_mat_0_1),
    .io_mat_1_0(part2_io_mat_1_0),
    .io_mat_1_1(part2_io_mat_1_1),
    .io_OutMat_0_0(part2_io_OutMat_0_0),
    .io_OutMat_0_1(part2_io_OutMat_0_1),
    .io_OutMat_1_0(part2_io_OutMat_1_0),
    .io_OutMat_1_1(part2_io_OutMat_1_1),
    .io_Ovalid(part2_io_Ovalid),
    .io_ProcessValid(part2_io_ProcessValid)
  );
  abc3 part3 ( // @[DIstribution.scala 67:23]
    .clock(part3_clock),
    .reset(part3_reset),
    .io_PreMat_0_0(part3_io_PreMat_0_0),
    .io_PreMat_0_1(part3_io_PreMat_0_1),
    .io_PreMat_1_0(part3_io_PreMat_1_0),
    .io_PreMat_1_1(part3_io_PreMat_1_1),
    .io_IDex(part3_io_IDex),
    .io_mat_0_0(part3_io_mat_0_0),
    .io_mat_0_1(part3_io_mat_0_1),
    .io_mat_1_0(part3_io_mat_1_0),
    .io_mat_1_1(part3_io_mat_1_1),
    .io_i_valid(part3_io_i_valid),
    .io_valid(part3_io_valid),
    .io_Omat_0_0(part3_io_Omat_0_0),
    .io_Omat_0_1(part3_io_Omat_0_1),
    .io_Omat_1_0(part3_io_Omat_1_0),
    .io_Omat_1_1(part3_io_Omat_1_1),
    .io_merge(part3_io_merge)
  );
  assign io_out_0_0 = io_valid ? _GEN_61 : 32'h0; // @[DIstribution.scala 129:16 25:21]
  assign io_out_0_1 = io_valid ? _GEN_62 : 32'h0; // @[DIstribution.scala 129:16 25:21]
  assign io_out_1_0 = io_valid ? _GEN_63 : 32'h0; // @[DIstribution.scala 129:16 25:21]
  assign io_out_1_1 = io_valid ? _GEN_64 : 32'h0; // @[DIstribution.scala 129:16 25:21]
  assign io_ProcessValid = io_valid & _GEN_65; // @[DIstribution.scala 25:21 130:25]
  assign part2_clock = clock;
  assign part2_reset = reset;
  assign part2_io_IDex = c ? Idex_0 : 32'h0; // @[DIstribution.scala 57:13 58:19 61:19]
  assign part2_io_JDex = c ? Jdex_0 : 32'h0; // @[DIstribution.scala 57:13 59:19 62:19]
  assign part2_io_valid = c; // @[DIstribution.scala 56:20]
  assign part2_io_mat_0_0 = io_matrix_0_0; // @[DIstribution.scala 54:14]
  assign part2_io_mat_0_1 = io_matrix_0_1; // @[DIstribution.scala 54:14]
  assign part2_io_mat_1_0 = io_matrix_1_0; // @[DIstribution.scala 54:14]
  assign part2_io_mat_1_1 = io_matrix_1_1; // @[DIstribution.scala 54:14]
  assign part3_clock = clock;
  assign part3_reset = reset;
  assign part3_io_PreMat_0_0 = part2_io_ProcessValid & check ? part2_io_OutMat_0_0 : 32'h0; // @[DIstribution.scala 80:42 84:21 97:21]
  assign part3_io_PreMat_0_1 = part2_io_ProcessValid & check ? part2_io_OutMat_0_1 : 32'h0; // @[DIstribution.scala 80:42 84:21 97:21]
  assign part3_io_PreMat_1_0 = part2_io_ProcessValid & check ? part2_io_OutMat_1_0 : 32'h0; // @[DIstribution.scala 80:42 84:21 97:21]
  assign part3_io_PreMat_1_1 = part2_io_ProcessValid & check ? part2_io_OutMat_1_1 : 32'h0; // @[DIstribution.scala 80:42 84:21 97:21]
  assign part3_io_IDex = part2_io_ProcessValid & check ? Idex_0 : 32'h0; // @[DIstribution.scala 80:42 86:19 98:19]
  assign part3_io_mat_0_0 = part2_io_ProcessValid & check ? io_matrix_0_0 : 32'h0; // @[DIstribution.scala 80:42 85:18 95:22]
  assign part3_io_mat_0_1 = part2_io_ProcessValid & check ? io_matrix_0_1 : 32'h0; // @[DIstribution.scala 80:42 85:18 95:22]
  assign part3_io_mat_1_0 = part2_io_ProcessValid & check ? io_matrix_1_0 : 32'h0; // @[DIstribution.scala 80:42 85:18 95:22]
  assign part3_io_mat_1_1 = part2_io_ProcessValid & check ? io_matrix_1_1 : 32'h0; // @[DIstribution.scala 80:42 85:18 95:22]
  assign part3_io_i_valid = part2_io_ProcessValid & check & part2_io_ProcessValid; // @[DIstribution.scala 80:42 83:22 96:26]
  assign part3_io_merge = part2_io_ProcessValid & check & part3_io_merge_REG; // @[DIstribution.scala 80:42 81:20 94:24]
  always @(posedge clock) begin
    if (reset) begin // @[DIstribution.scala 17:20]
      i <= 32'h0; // @[DIstribution.scala 17:20]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (i < 32'h1 & _io_validIteration_T_1) begin // @[DIstribution.scala 111:69]
        i <= _i_T_1; // @[DIstribution.scala 112:11]
      end
    end
    if (reset) begin // @[DIstribution.scala 18:20]
      j <= 32'h0; // @[DIstribution.scala 18:20]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (ab) begin // @[DIstribution.scala 117:68]
        j <= _j_T_1; // @[DIstribution.scala 118:11]
      end else if (!(_io_validIteration_T_2)) begin // @[DIstribution.scala 119:75]
        j <= 32'h0; // @[DIstribution.scala 122:11]
      end
    end
    if (reset) begin // @[DIstribution.scala 19:24]
      count <= 32'h0; // @[DIstribution.scala 19:24]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (_T_2) begin // @[DIstribution.scala 45:38]
        count <= _count_T_1; // @[DIstribution.scala 46:15]
      end
    end
    if (reset) begin // @[DIstribution.scala 20:23]
      Idex_0 <= 32'h0; // @[DIstribution.scala 20:23]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (_T_2) begin // @[DIstribution.scala 45:38]
        Idex_0 <= _GEN_9;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 49:106]
        Idex_0 <= _GEN_9;
      end
    end
    if (reset) begin // @[DIstribution.scala 20:23]
      Idex_1 <= 32'h0; // @[DIstribution.scala 20:23]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (_T_2) begin // @[DIstribution.scala 45:38]
        Idex_1 <= _GEN_10;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 49:106]
        Idex_1 <= _GEN_10;
      end
    end
    if (reset) begin // @[DIstribution.scala 21:23]
      Jdex_0 <= 32'h0; // @[DIstribution.scala 21:23]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (_T_2) begin // @[DIstribution.scala 45:38]
        Jdex_0 <= _GEN_11;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 49:106]
        Jdex_0 <= _GEN_11;
      end
    end
    if (reset) begin // @[DIstribution.scala 21:23]
      Jdex_1 <= 32'h0; // @[DIstribution.scala 21:23]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (_T_2) begin // @[DIstribution.scala 45:38]
        Jdex_1 <= _GEN_12;
      end else if (_T_2 & _io_validIteration_T & _io_validIteration_T_1) begin // @[DIstribution.scala 49:106]
        Jdex_1 <= _GEN_12;
      end
    end
    if (reset) begin // @[DIstribution.scala 23:30]
      iterationNo <= 32'h0; // @[DIstribution.scala 23:30]
    end else if (io_valid) begin // @[DIstribution.scala 25:21]
      if (_GEN_3 == 32'h1) begin // @[DIstribution.scala 32:35]
        iterationNo <= _iterationNo_T_1; // @[DIstribution.scala 33:19]
      end
    end
    c <= _io_validIteration_T & _io_validIteration_T_1; // @[DIstribution.scala 55:48]
    part3_io_merge_REG <= c; // @[DIstribution.scala 81:30]
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
  Jdex_0 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  Jdex_1 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  iterationNo = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  c = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  part3_io_merge_REG = _RAND_9[0:0];
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
  output [3:0]  io_i_mux_bus_0_0,
  output [3:0]  io_i_mux_bus_0_1,
  output [3:0]  io_i_mux_bus_0_2,
  output [3:0]  io_i_mux_bus_0_3,
  output [3:0]  io_i_mux_bus_1_0,
  output [3:0]  io_i_mux_bus_1_1,
  output [3:0]  io_i_mux_bus_1_2,
  output [3:0]  io_i_mux_bus_1_3,
  output [3:0]  io_i_mux_bus_2_0,
  output [3:0]  io_i_mux_bus_2_1,
  output [3:0]  io_i_mux_bus_2_2,
  output [3:0]  io_i_mux_bus_2_3,
  output [3:0]  io_i_mux_bus_3_0,
  output [3:0]  io_i_mux_bus_3_1,
  output [3:0]  io_i_mux_bus_3_2,
  output [3:0]  io_i_mux_bus_3_3,
  output [15:0] io_Source_0,
  output [15:0] io_Source_1,
  output [15:0] io_Source_2,
  output [15:0] io_Source_3,
  output        io_PF_Valid,
  input         io_DataValid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  myMuxes_clock; // @[PathFinder.scala 26:23]
  wire  myMuxes_reset; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_0_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_0_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_1_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat1_1_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat2_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_mat2_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_0_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix1_1_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix2_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_counterMatrix2_1; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_0_0; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_0_1; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_0_2; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_0_3; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_1_0; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_1_1; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_1_2; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_1_3; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_2_0; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_2_1; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_2_2; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_2_3; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_3_0; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_3_1; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_3_2; // @[PathFinder.scala 26:23]
  wire [3:0] myMuxes_io_i_mux_bus_3_3; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_0; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_1; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_2; // @[PathFinder.scala 26:23]
  wire [15:0] myMuxes_io_Source_3; // @[PathFinder.scala 26:23]
  wire  myMuxes_io_valid; // @[PathFinder.scala 26:23]
  wire  myCounter_clock; // @[PathFinder.scala 32:25]
  wire  myCounter_reset; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_0_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Stationary_matrix_1_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Streaming_matrix_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_Streaming_matrix_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_0_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix1_bits_1_1; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_0; // @[PathFinder.scala 32:25]
  wire [15:0] myCounter_io_counterMatrix2_bits_1; // @[PathFinder.scala 32:25]
  wire  myCounter_io_valid; // @[PathFinder.scala 32:25]
  wire  myCounter_io_start; // @[PathFinder.scala 32:25]
  wire  Distribution_clock; // @[PathFinder.scala 37:28]
  wire  Distribution_reset; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_0_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_0_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_1_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_matrix_1_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_0_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_0_1; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_1_0; // @[PathFinder.scala 37:28]
  wire [31:0] Distribution_io_out_1_1; // @[PathFinder.scala 37:28]
  wire  Distribution_io_ProcessValid; // @[PathFinder.scala 37:28]
  wire  Distribution_io_valid; // @[PathFinder.scala 37:28]
  reg  myCounter_io_start_REG; // @[PathFinder.scala 33:32]
  wire [31:0] _GEN_7 = Distribution_io_ProcessValid ? Distribution_io_out_0_0 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_8 = Distribution_io_ProcessValid ? Distribution_io_out_0_1 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_9 = Distribution_io_ProcessValid ? Distribution_io_out_1_0 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  wire [31:0] _GEN_10 = Distribution_io_ProcessValid ? Distribution_io_out_1_1 : 32'h0; // @[PathFinder.scala 52:40 58:31 67:31]
  reg  io_PF_Valid_REG; // @[PathFinder.scala 74:25]
  wire [31:0] _GEN_32 = io_DataValid ? {{16'd0}, myMuxes_io_Source_0} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_33 = io_DataValid ? {{16'd0}, myMuxes_io_Source_1} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_34 = io_DataValid ? {{16'd0}, myMuxes_io_Source_2} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  wire [31:0] _GEN_35 = io_DataValid ? {{16'd0}, myMuxes_io_Source_3} : 32'h0; // @[PathFinder.scala 20:20 76:13 83:13]
  Muxes myMuxes ( // @[PathFinder.scala 26:23]
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
    .io_i_mux_bus_0_0(myMuxes_io_i_mux_bus_0_0),
    .io_i_mux_bus_0_1(myMuxes_io_i_mux_bus_0_1),
    .io_i_mux_bus_0_2(myMuxes_io_i_mux_bus_0_2),
    .io_i_mux_bus_0_3(myMuxes_io_i_mux_bus_0_3),
    .io_i_mux_bus_1_0(myMuxes_io_i_mux_bus_1_0),
    .io_i_mux_bus_1_1(myMuxes_io_i_mux_bus_1_1),
    .io_i_mux_bus_1_2(myMuxes_io_i_mux_bus_1_2),
    .io_i_mux_bus_1_3(myMuxes_io_i_mux_bus_1_3),
    .io_i_mux_bus_2_0(myMuxes_io_i_mux_bus_2_0),
    .io_i_mux_bus_2_1(myMuxes_io_i_mux_bus_2_1),
    .io_i_mux_bus_2_2(myMuxes_io_i_mux_bus_2_2),
    .io_i_mux_bus_2_3(myMuxes_io_i_mux_bus_2_3),
    .io_i_mux_bus_3_0(myMuxes_io_i_mux_bus_3_0),
    .io_i_mux_bus_3_1(myMuxes_io_i_mux_bus_3_1),
    .io_i_mux_bus_3_2(myMuxes_io_i_mux_bus_3_2),
    .io_i_mux_bus_3_3(myMuxes_io_i_mux_bus_3_3),
    .io_Source_0(myMuxes_io_Source_0),
    .io_Source_1(myMuxes_io_Source_1),
    .io_Source_2(myMuxes_io_Source_2),
    .io_Source_3(myMuxes_io_Source_3),
    .io_valid(myMuxes_io_valid)
  );
  SourceDestination myCounter ( // @[PathFinder.scala 32:25]
    .clock(myCounter_clock),
    .reset(myCounter_reset),
    .io_Stationary_matrix_0_0(myCounter_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(myCounter_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(myCounter_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(myCounter_io_Stationary_matrix_1_1),
    .io_Streaming_matrix_0(myCounter_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(myCounter_io_Streaming_matrix_1),
    .io_counterMatrix1_bits_0_0(myCounter_io_counterMatrix1_bits_0_0),
    .io_counterMatrix1_bits_0_1(myCounter_io_counterMatrix1_bits_0_1),
    .io_counterMatrix1_bits_1_0(myCounter_io_counterMatrix1_bits_1_0),
    .io_counterMatrix1_bits_1_1(myCounter_io_counterMatrix1_bits_1_1),
    .io_counterMatrix2_bits_0(myCounter_io_counterMatrix2_bits_0),
    .io_counterMatrix2_bits_1(myCounter_io_counterMatrix2_bits_1),
    .io_valid(myCounter_io_valid),
    .io_start(myCounter_io_start)
  );
  Distribution Distribution ( // @[PathFinder.scala 37:28]
    .clock(Distribution_clock),
    .reset(Distribution_reset),
    .io_matrix_0_0(Distribution_io_matrix_0_0),
    .io_matrix_0_1(Distribution_io_matrix_0_1),
    .io_matrix_1_0(Distribution_io_matrix_1_0),
    .io_matrix_1_1(Distribution_io_matrix_1_1),
    .io_out_0_0(Distribution_io_out_0_0),
    .io_out_0_1(Distribution_io_out_0_1),
    .io_out_1_0(Distribution_io_out_1_0),
    .io_out_1_1(Distribution_io_out_1_1),
    .io_ProcessValid(Distribution_io_ProcessValid),
    .io_valid(Distribution_io_valid)
  );
  assign io_i_mux_bus_0_0 = io_DataValid ? myMuxes_io_i_mux_bus_0_0 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_0_1 = io_DataValid ? myMuxes_io_i_mux_bus_0_1 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_0_2 = io_DataValid ? myMuxes_io_i_mux_bus_0_2 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_0_3 = io_DataValid ? myMuxes_io_i_mux_bus_0_3 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_1_0 = io_DataValid ? myMuxes_io_i_mux_bus_1_0 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_1_1 = io_DataValid ? myMuxes_io_i_mux_bus_1_1 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_1_2 = io_DataValid ? myMuxes_io_i_mux_bus_1_2 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_1_3 = io_DataValid ? myMuxes_io_i_mux_bus_1_3 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_2_0 = io_DataValid ? myMuxes_io_i_mux_bus_2_0 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_2_1 = io_DataValid ? myMuxes_io_i_mux_bus_2_1 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_2_2 = io_DataValid ? myMuxes_io_i_mux_bus_2_2 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_2_3 = io_DataValid ? myMuxes_io_i_mux_bus_2_3 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_3_0 = io_DataValid ? myMuxes_io_i_mux_bus_3_0 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_3_1 = io_DataValid ? myMuxes_io_i_mux_bus_3_1 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_3_2 = io_DataValid ? myMuxes_io_i_mux_bus_3_2 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_i_mux_bus_3_3 = io_DataValid ? myMuxes_io_i_mux_bus_3_3 : 4'h0; // @[PathFinder.scala 20:20 75:16 82:16]
  assign io_Source_0 = _GEN_32[15:0];
  assign io_Source_1 = _GEN_33[15:0];
  assign io_Source_2 = _GEN_34[15:0];
  assign io_Source_3 = _GEN_35[15:0];
  assign io_PF_Valid = io_DataValid & io_PF_Valid_REG; // @[PathFinder.scala 20:20 74:15 81:15]
  assign myMuxes_clock = clock;
  assign myMuxes_reset = reset;
  assign myMuxes_io_mat1_0_0 = Distribution_io_ProcessValid ? io_Stationary_matrix_0_0 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_0_1 = Distribution_io_ProcessValid ? io_Stationary_matrix_0_1 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_1_0 = Distribution_io_ProcessValid ? io_Stationary_matrix_1_0 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat1_1_1 = Distribution_io_ProcessValid ? io_Stationary_matrix_1_1 : 16'h0; // @[PathFinder.scala 52:40 55:21 65:21]
  assign myMuxes_io_mat2_0 = Distribution_io_ProcessValid ? io_Streaming_matrix_0 : 16'h0; // @[PathFinder.scala 52:40 57:21 66:21]
  assign myMuxes_io_mat2_1 = Distribution_io_ProcessValid ? io_Streaming_matrix_1 : 16'h0; // @[PathFinder.scala 52:40 57:21 66:21]
  assign myMuxes_io_counterMatrix1_0_0 = _GEN_7[15:0];
  assign myMuxes_io_counterMatrix1_0_1 = _GEN_8[15:0];
  assign myMuxes_io_counterMatrix1_1_0 = _GEN_9[15:0];
  assign myMuxes_io_counterMatrix1_1_1 = _GEN_10[15:0];
  assign myMuxes_io_counterMatrix2_0 = Distribution_io_ProcessValid ? myCounter_io_counterMatrix2_bits_0 : 16'h0; // @[PathFinder.scala 52:40 59:31 68:31]
  assign myMuxes_io_counterMatrix2_1 = Distribution_io_ProcessValid ? myCounter_io_counterMatrix2_bits_1 : 16'h0; // @[PathFinder.scala 52:40 59:31 68:31]
  assign myCounter_clock = clock;
  assign myCounter_reset = reset;
  assign myCounter_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[PathFinder.scala 34:34]
  assign myCounter_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[PathFinder.scala 34:34]
  assign myCounter_io_Streaming_matrix_0 = io_Streaming_matrix_0; // @[PathFinder.scala 35:33]
  assign myCounter_io_Streaming_matrix_1 = io_Streaming_matrix_1; // @[PathFinder.scala 35:33]
  assign myCounter_io_start = myCounter_io_start_REG; // @[PathFinder.scala 33:22]
  assign Distribution_clock = clock;
  assign Distribution_reset = reset;
  assign Distribution_io_matrix_0_0 = {{16'd0}, myCounter_io_counterMatrix1_bits_0_0}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_0_1 = {{16'd0}, myCounter_io_counterMatrix1_bits_0_1}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_1_0 = {{16'd0}, myCounter_io_counterMatrix1_bits_1_0}; // @[PathFinder.scala 43:26]
  assign Distribution_io_matrix_1_1 = {{16'd0}, myCounter_io_counterMatrix1_bits_1_1}; // @[PathFinder.scala 43:26]
  assign Distribution_io_valid = myCounter_io_valid; // @[PathFinder.scala 39:25]
  always @(posedge clock) begin
    myCounter_io_start_REG <= io_DataValid; // @[PathFinder.scala 33:32]
    io_PF_Valid_REG <= myMuxes_io_valid & myCounter_io_valid; // @[PathFinder.scala 74:43]
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
  _RAND_1 = {1{`RANDOM}};
  io_PF_Valid_REG = _RAND_1[0:0];
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
  input  [3:0]  io_i_mux_bus_1_3,
  input  [3:0]  io_i_mux_bus_2_0,
  input  [3:0]  io_i_mux_bus_2_1,
  input  [3:0]  io_i_mux_bus_2_2,
  input  [3:0]  io_i_mux_bus_2_3,
  input  [3:0]  io_i_mux_bus_3_0,
  input  [3:0]  io_i_mux_bus_3_1,
  input  [3:0]  io_i_mux_bus_3_2,
  input  [3:0]  io_i_mux_bus_3_3,
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
  wire  _T_3 = |io_i_mux_bus_0_1; // @[Benes3.scala 64:71]
  wire  _T_6 = |io_i_mux_bus_0_2; // @[Benes3.scala 64:107]
  wire  _T_7 = ~(|io_i_mux_bus_0_2); // @[Benes3.scala 64:111]
  wire  _T_9 = |io_i_mux_bus_0_3; // @[Benes3.scala 64:143]
  wire  _T_10 = ~(|io_i_mux_bus_0_3); // @[Benes3.scala 64:147]
  wire [1:0] _GEN_4 = 2'h0 % 2'h2; // @[Benes3.scala 25:52]
  wire  parsedindexvalue_first_stage = io_i_mux_bus_0_0[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray__0 = io_i_mux_bus_0_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray__1 = io_i_mux_bus_0_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_9 = {{2'd0}, parsedindexvalue_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_14 = _GEN_9 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue_calculation = _GEN_14[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T = ~parsedindexvalue_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_1 = ~parsedindexvalue_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_2 = ~parsedindexvalue_calculation & ~parsedindexvalue_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_5 = parsedindexvalue_calculation & _parsedindexvalue_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_680 = {{1'd0}, parsedindexvalue_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_6 = _GEN_680 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_8 = _GEN_680 == 2'h2 & _parsedindexvalue_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_9 = _GEN_680 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_11 = _GEN_680 == 2'h3 & _parsedindexvalue_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_14 = _parsedindexvalue_nextIndex_T & parsedindexvalue_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_682 = {{1'd0}, parsedindexvalue_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_16 = _GEN_682 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_19 = parsedindexvalue_calculation & parsedindexvalue_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_24 = _parsedindexvalue_nextIndex_T_6 & parsedindexvalue_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_26 = _GEN_682 - 2'h2; // @[Benes3.scala 42:76]
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
  wire [2:0] _GEN_19 = {{1'd0}, parsedindexvalue_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_24 = _GEN_19 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_1 = _GEN_24[1:0]; // @[Benes3.scala 34:40]
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
  wire [2:0] _T_12 = {{1'd0}, parsedindexvalue};
  wire [15:0] _GEN_0 = 3'h0 == _T_12 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_1 = 3'h1 == _T_12 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_2 = 3'h2 == _T_12 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_3 = 3'h3 == _T_12 ? io_i_data_bus2_0 : 16'h0; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_5 = ~(|io_i_mux_bus_0_0) & ~(|io_i_mux_bus_0_1) & ~(|io_i_mux_bus_0_2) & ~(|io_i_mux_bus_0_3) ?
    _GEN_0 : 16'h0; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_6 = ~(|io_i_mux_bus_0_0) & ~(|io_i_mux_bus_0_1) & ~(|io_i_mux_bus_0_2) & ~(|io_i_mux_bus_0_3) ?
    _GEN_1 : 16'h0; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_7 = ~(|io_i_mux_bus_0_0) & ~(|io_i_mux_bus_0_1) & ~(|io_i_mux_bus_0_2) & ~(|io_i_mux_bus_0_3) ?
    _GEN_2 : 16'h0; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_8 = ~(|io_i_mux_bus_0_0) & ~(|io_i_mux_bus_0_1) & ~(|io_i_mux_bus_0_2) & ~(|io_i_mux_bus_0_3) ?
    _GEN_3 : 16'h0; // @[Benes3.scala 64:156]
  wire  _T_18 = _T_2 & _T_3; // @[Benes3.scala 70:48]
  wire  _T_21 = _T_2 & _T_3 & _T_6; // @[Benes3.scala 70:84]
  wire  _T_24 = _T_2 & _T_3 & _T_6 & _T_9; // @[Benes3.scala 70:120]
  wire [15:0] _GEN_10 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_5; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_11 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_6; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_12 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_7; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_13 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_8; // @[Benes3.scala 72:{43,43}]
  wire  parsedindexvalue1_first_stage = io_i_mux_bus_0_1[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue1_boolArray__0 = io_i_mux_bus_0_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue1_boolArray__1 = io_i_mux_bus_0_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_29 = {{2'd0}, parsedindexvalue1_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_34 = _GEN_29 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue1_calculation = _GEN_34[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T = ~parsedindexvalue1_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_1 = ~parsedindexvalue1_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_2 = ~parsedindexvalue1_calculation & ~parsedindexvalue1_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_5 = parsedindexvalue1_calculation & _parsedindexvalue1_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_696 = {{1'd0}, parsedindexvalue1_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_6 = _GEN_696 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_8 = _GEN_696 == 2'h2 & _parsedindexvalue1_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_9 = _GEN_696 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_11 = _GEN_696 == 2'h3 & _parsedindexvalue1_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_14 = _parsedindexvalue1_nextIndex_T & parsedindexvalue1_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_698 = {{1'd0}, parsedindexvalue1_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue1_nextIndex_T_16 = _GEN_698 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_19 = parsedindexvalue1_calculation & parsedindexvalue1_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_24 = _parsedindexvalue1_nextIndex_T_6 & parsedindexvalue1_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_26 = _GEN_698 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_29 = _parsedindexvalue1_nextIndex_T_9 & parsedindexvalue1_boolArray__0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_32 = _parsedindexvalue1_nextIndex_T_29 ? _parsedindexvalue1_nextIndex_T_26
     : {{1'd0}, parsedindexvalue1_first_stage}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_33 = _parsedindexvalue1_nextIndex_T_24 ? _parsedindexvalue1_nextIndex_T_26
     : _parsedindexvalue1_nextIndex_T_32; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_34 = _parsedindexvalue1_nextIndex_T_19 ? _parsedindexvalue1_nextIndex_T_16
     : _parsedindexvalue1_nextIndex_T_33; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_35 = _parsedindexvalue1_nextIndex_T_14 ? _parsedindexvalue1_nextIndex_T_16
     : _parsedindexvalue1_nextIndex_T_34; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_36 = _parsedindexvalue1_nextIndex_T_11 ? {{1'd0},
    parsedindexvalue1_first_stage} : _parsedindexvalue1_nextIndex_T_35; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_37 = _parsedindexvalue1_nextIndex_T_8 ? {{1'd0},
    parsedindexvalue1_first_stage} : _parsedindexvalue1_nextIndex_T_36; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_38 = _parsedindexvalue1_nextIndex_T_5 ? {{1'd0},
    parsedindexvalue1_first_stage} : _parsedindexvalue1_nextIndex_T_37; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex = _parsedindexvalue1_nextIndex_T_2 ? {{1'd0}, parsedindexvalue1_first_stage} :
    _parsedindexvalue1_nextIndex_T_38; // @[Mux.scala 101:16]
  wire [2:0] _GEN_39 = {{1'd0}, parsedindexvalue1_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_44 = _GEN_39 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue1_calculation_1 = _GEN_44[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_39 = parsedindexvalue1_calculation_1 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_40 = ~parsedindexvalue1_boolArray__1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_41 = parsedindexvalue1_calculation_1 == 2'h0 & ~parsedindexvalue1_boolArray__1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_42 = parsedindexvalue1_calculation_1 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue1_nextIndex_T_44 = parsedindexvalue1_calculation_1 == 2'h1 & _parsedindexvalue1_nextIndex_T_40; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue1_nextIndex_T_45 = parsedindexvalue1_calculation_1 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_47 = parsedindexvalue1_calculation_1 == 2'h2 & _parsedindexvalue1_nextIndex_T_40; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_48 = parsedindexvalue1_calculation_1 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_50 = parsedindexvalue1_calculation_1 == 2'h3 & _parsedindexvalue1_nextIndex_T_40; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_53 = _parsedindexvalue1_nextIndex_T_39 & parsedindexvalue1_boolArray__1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_55 = parsedindexvalue1_nextIndex + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_58 = _parsedindexvalue1_nextIndex_T_42 & parsedindexvalue1_boolArray__1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_63 = _parsedindexvalue1_nextIndex_T_45 & parsedindexvalue1_boolArray__1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_65 = parsedindexvalue1_nextIndex - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_68 = _parsedindexvalue1_nextIndex_T_48 & parsedindexvalue1_boolArray__1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_71 = _parsedindexvalue1_nextIndex_T_68 ? _parsedindexvalue1_nextIndex_T_65
     : parsedindexvalue1_nextIndex; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_72 = _parsedindexvalue1_nextIndex_T_63 ? _parsedindexvalue1_nextIndex_T_65
     : _parsedindexvalue1_nextIndex_T_71; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_73 = _parsedindexvalue1_nextIndex_T_58 ? _parsedindexvalue1_nextIndex_T_55
     : _parsedindexvalue1_nextIndex_T_72; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_74 = _parsedindexvalue1_nextIndex_T_53 ? _parsedindexvalue1_nextIndex_T_55
     : _parsedindexvalue1_nextIndex_T_73; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_75 = _parsedindexvalue1_nextIndex_T_50 ? parsedindexvalue1_nextIndex :
    _parsedindexvalue1_nextIndex_T_74; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_76 = _parsedindexvalue1_nextIndex_T_47 ? parsedindexvalue1_nextIndex :
    _parsedindexvalue1_nextIndex_T_75; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_77 = _parsedindexvalue1_nextIndex_T_44 ? parsedindexvalue1_nextIndex :
    _parsedindexvalue1_nextIndex_T_76; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_1 = _parsedindexvalue1_nextIndex_T_41 ? parsedindexvalue1_nextIndex :
    _parsedindexvalue1_nextIndex_T_77; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_third_stage_T_1 = parsedindexvalue1_nextIndex_1 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue1_third_stage_T_4 = parsedindexvalue1_nextIndex_1 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue1_third_stage_T_6 = parsedindexvalue1_nextIndex_1 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue1_third_stage_T_7 = _parsedindexvalue1_third_stage_T_1 == 2'h0 ?
    _parsedindexvalue1_third_stage_T_4 : _parsedindexvalue1_third_stage_T_6; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue1 = io_i_mux_bus_0_1[3] ? _parsedindexvalue1_third_stage_T_7 :
    parsedindexvalue1_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_27 = {{1'd0}, parsedindexvalue1};
  wire [15:0] _GEN_15 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_10; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_16 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_11; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_17 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_12; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_18 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_13; // @[Benes3.scala 74:{44,44}]
  wire  parsedindexvalue2_first_stage = io_i_mux_bus_0_2[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray__0 = io_i_mux_bus_0_2[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray__1 = io_i_mux_bus_0_2[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_49 = {{2'd0}, parsedindexvalue2_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_54 = _GEN_49 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue2_calculation = _GEN_54[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T = ~parsedindexvalue2_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_1 = ~parsedindexvalue2_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_2 = ~parsedindexvalue2_calculation & ~parsedindexvalue2_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_5 = parsedindexvalue2_calculation & _parsedindexvalue2_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_704 = {{1'd0}, parsedindexvalue2_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_6 = _GEN_704 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_8 = _GEN_704 == 2'h2 & _parsedindexvalue2_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_9 = _GEN_704 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_11 = _GEN_704 == 2'h3 & _parsedindexvalue2_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_14 = _parsedindexvalue2_nextIndex_T & parsedindexvalue2_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_706 = {{1'd0}, parsedindexvalue2_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue2_nextIndex_T_16 = _GEN_706 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_19 = parsedindexvalue2_calculation & parsedindexvalue2_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_24 = _parsedindexvalue2_nextIndex_T_6 & parsedindexvalue2_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_26 = _GEN_706 - 2'h2; // @[Benes3.scala 42:76]
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
  wire [2:0] _GEN_59 = {{1'd0}, parsedindexvalue2_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_64 = _GEN_59 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_1 = _GEN_64[1:0]; // @[Benes3.scala 34:40]
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
  wire [1:0] parsedindexvalue2 = io_i_mux_bus_0_2[3] ? _parsedindexvalue2_third_stage_T_7 :
    parsedindexvalue2_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_29 = {{1'd0}, parsedindexvalue2};
  wire [15:0] _GEN_20 = 3'h0 == _T_29 ? io_i_data_bus2_0 : _GEN_15; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_21 = 3'h1 == _T_29 ? io_i_data_bus2_0 : _GEN_16; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_22 = 3'h2 == _T_29 ? io_i_data_bus2_0 : _GEN_17; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_23 = 3'h3 == _T_29 ? io_i_data_bus2_0 : _GEN_18; // @[Benes3.scala 76:{44,44}]
  wire  parsedindexvalue3_first_stage = io_i_mux_bus_0_3[0] & (~_GEN_4[0] | 1'h0 - 1'h1); // @[Benes3.scala 25:26]
  wire  parsedindexvalue3_boolArray__0 = io_i_mux_bus_0_3[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue3_boolArray__1 = io_i_mux_bus_0_3[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_69 = {{2'd0}, parsedindexvalue3_first_stage}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_74 = _GEN_69 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue3_calculation = _GEN_74[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T = ~parsedindexvalue3_calculation; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_1 = ~parsedindexvalue3_boolArray__0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_2 = ~parsedindexvalue3_calculation & ~parsedindexvalue3_boolArray__0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_5 = parsedindexvalue3_calculation & _parsedindexvalue3_nextIndex_T_1; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_712 = {{1'd0}, parsedindexvalue3_calculation}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_6 = _GEN_712 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_8 = _GEN_712 == 2'h2 & _parsedindexvalue3_nextIndex_T_1; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_9 = _GEN_712 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_11 = _GEN_712 == 2'h3 & _parsedindexvalue3_nextIndex_T_1; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_14 = _parsedindexvalue3_nextIndex_T & parsedindexvalue3_boolArray__0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_714 = {{1'd0}, parsedindexvalue3_first_stage}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue3_nextIndex_T_16 = _GEN_714 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_19 = parsedindexvalue3_calculation & parsedindexvalue3_boolArray__0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_24 = _parsedindexvalue3_nextIndex_T_6 & parsedindexvalue3_boolArray__0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_26 = _GEN_714 - 2'h2; // @[Benes3.scala 42:76]
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
  wire [2:0] _GEN_79 = {{1'd0}, parsedindexvalue3_nextIndex}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_84 = _GEN_79 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_1 = _GEN_84[1:0]; // @[Benes3.scala 34:40]
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
  wire [1:0] parsedindexvalue3 = io_i_mux_bus_0_3[3] ? _parsedindexvalue3_third_stage_T_7 :
    parsedindexvalue3_nextIndex_1; // @[Benes3.scala 49:24]
  wire [2:0] _T_31 = {{1'd0}, parsedindexvalue3};
  wire [15:0] _GEN_25 = 3'h0 == _T_31 ? io_i_data_bus2_0 : _GEN_20; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_26 = 3'h1 == _T_31 ? io_i_data_bus2_0 : _GEN_21; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_27 = 3'h2 == _T_31 ? io_i_data_bus2_0 : _GEN_22; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_28 = 3'h3 == _T_31 ? io_i_data_bus2_0 : _GEN_23; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_30 = _T_2 & _T_3 & _T_6 & _T_9 ? _GEN_25 : _GEN_5; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_31 = _T_2 & _T_3 & _T_6 & _T_9 ? _GEN_26 : _GEN_6; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_32 = _T_2 & _T_3 & _T_6 & _T_9 ? _GEN_27 : _GEN_7; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_33 = _T_2 & _T_3 & _T_6 & _T_9 ? _GEN_28 : _GEN_8; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_35 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_30; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_36 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_31; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_37 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_32; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_38 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_33; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_40 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_35; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_41 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_36; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_42 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_37; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_43 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_38; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_45 = 3'h0 == _T_29 ? io_i_data_bus2_0 : _GEN_40; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_46 = 3'h1 == _T_29 ? io_i_data_bus2_0 : _GEN_41; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_47 = 3'h2 == _T_29 ? io_i_data_bus2_0 : _GEN_42; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_48 = 3'h3 == _T_29 ? io_i_data_bus2_0 : _GEN_43; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_50 = _T_21 & _T_10 ? _GEN_45 : _GEN_30; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_51 = _T_21 & _T_10 ? _GEN_46 : _GEN_31; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_52 = _T_21 & _T_10 ? _GEN_47 : _GEN_32; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_53 = _T_21 & _T_10 ? _GEN_48 : _GEN_33; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_55 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_50; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_56 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_51; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_57 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_52; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_58 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_53; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_60 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_55; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_61 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_56; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_62 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_57; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_63 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_58; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_65 = _T_18 & _T_7 & _T_10 ? _GEN_60 : _GEN_50; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_66 = _T_18 & _T_7 & _T_10 ? _GEN_61 : _GEN_51; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_67 = _T_18 & _T_7 & _T_10 ? _GEN_62 : _GEN_52; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_68 = _T_18 & _T_7 & _T_10 ? _GEN_63 : _GEN_53; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_70 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_65; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_71 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_66; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_72 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_67; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_73 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_68; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_75 = _T_1 ? _GEN_70 : _GEN_65; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_76 = _T_1 ? _GEN_71 : _GEN_66; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_77 = _T_1 ? _GEN_72 : _GEN_67; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_78 = _T_1 ? _GEN_73 : _GEN_68; // @[Benes3.scala 102:48]
  wire  _T_73 = _T_1 & _T_3; // @[Benes3.scala 120:48]
  wire [15:0] _GEN_80 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_75; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_81 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_76; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_82 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_77; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_83 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_78; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_85 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_80; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_86 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_81; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_87 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_82; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_88 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_83; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_90 = _T_1 & _T_3 ? _GEN_85 : _GEN_75; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_91 = _T_1 & _T_3 ? _GEN_86 : _GEN_76; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_92 = _T_1 & _T_3 ? _GEN_87 : _GEN_77; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_93 = _T_1 & _T_3 ? _GEN_88 : _GEN_78; // @[Benes3.scala 120:84]
  wire  _T_85 = _T_73 & _T_6; // @[Benes3.scala 142:84]
  wire [15:0] _GEN_95 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_90; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_96 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_91; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_97 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_92; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_98 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_93; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_100 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_95; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_101 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_96; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_102 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_97; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_103 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_98; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_105 = 3'h0 == _T_29 ? io_i_data_bus2_0 : _GEN_100; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_106 = 3'h1 == _T_29 ? io_i_data_bus2_0 : _GEN_101; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_107 = 3'h2 == _T_29 ? io_i_data_bus2_0 : _GEN_102; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_108 = 3'h3 == _T_29 ? io_i_data_bus2_0 : _GEN_103; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_110 = _T_73 & _T_6 ? _GEN_105 : _GEN_90; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_111 = _T_73 & _T_6 ? _GEN_106 : _GEN_91; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_112 = _T_73 & _T_6 ? _GEN_107 : _GEN_92; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_113 = _T_73 & _T_6 ? _GEN_108 : _GEN_93; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_115 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_110; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_116 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_111; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_117 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_112; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_118 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_113; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_120 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_115; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_121 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_116; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_122 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_117; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_123 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_118; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_125 = 3'h0 == _T_29 ? io_i_data_bus2_0 : _GEN_120; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_126 = 3'h1 == _T_29 ? io_i_data_bus2_0 : _GEN_121; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_127 = 3'h2 == _T_29 ? io_i_data_bus2_0 : _GEN_122; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_128 = 3'h3 == _T_29 ? io_i_data_bus2_0 : _GEN_123; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_130 = 3'h0 == _T_31 ? io_i_data_bus2_0 : _GEN_125; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_131 = 3'h1 == _T_31 ? io_i_data_bus2_0 : _GEN_126; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_132 = 3'h2 == _T_31 ? io_i_data_bus2_0 : _GEN_127; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_133 = 3'h3 == _T_31 ? io_i_data_bus2_0 : _GEN_128; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_135 = _T_85 & _T_9 ? _GEN_130 : _GEN_110; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_136 = _T_85 & _T_9 ? _GEN_131 : _GEN_111; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_137 = _T_85 & _T_9 ? _GEN_132 : _GEN_112; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_138 = _T_85 & _T_9 ? _GEN_133 : _GEN_113; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_140 = 3'h0 == _T_12 ? io_i_data_bus2_0 : _GEN_135; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_141 = 3'h1 == _T_12 ? io_i_data_bus2_0 : _GEN_136; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_142 = 3'h2 == _T_12 ? io_i_data_bus2_0 : _GEN_137; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_143 = 3'h3 == _T_12 ? io_i_data_bus2_0 : _GEN_138; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_145 = 3'h0 == _T_27 ? io_i_data_bus2_0 : _GEN_140; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_146 = 3'h1 == _T_27 ? io_i_data_bus2_0 : _GEN_141; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_147 = 3'h2 == _T_27 ? io_i_data_bus2_0 : _GEN_142; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_148 = 3'h3 == _T_27 ? io_i_data_bus2_0 : _GEN_143; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_150 = 3'h0 == _T_29 ? io_i_data_bus2_0 : _GEN_145; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_151 = 3'h1 == _T_29 ? io_i_data_bus2_0 : _GEN_146; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_152 = 3'h2 == _T_29 ? io_i_data_bus2_0 : _GEN_147; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_153 = 3'h3 == _T_29 ? io_i_data_bus2_0 : _GEN_148; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_155 = 3'h0 == _T_31 ? io_i_data_bus2_0 : _GEN_150; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_156 = 3'h1 == _T_31 ? io_i_data_bus2_0 : _GEN_151; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_157 = 3'h2 == _T_31 ? io_i_data_bus2_0 : _GEN_152; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_158 = 3'h3 == _T_31 ? io_i_data_bus2_0 : _GEN_153; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_160 = _T_24 ? _GEN_155 : _GEN_135; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_161 = _T_24 ? _GEN_156 : _GEN_136; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_162 = _T_24 ? _GEN_157 : _GEN_137; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_163 = _T_24 ? _GEN_158 : _GEN_138; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_165 = io_i_data_bus2_0 != 16'h0 ? _GEN_160 : 16'h0; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_166 = io_i_data_bus2_0 != 16'h0 ? _GEN_161 : 16'h0; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_167 = io_i_data_bus2_0 != 16'h0 ? _GEN_162 : 16'h0; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_168 = io_i_data_bus2_0 != 16'h0 ? _GEN_163 : 16'h0; // @[Benes3.scala 62:39]
  wire  _T_131 = |io_i_mux_bus_1_0; // @[Benes3.scala 64:35]
  wire  _T_132 = ~(|io_i_mux_bus_1_0); // @[Benes3.scala 64:39]
  wire  _T_133 = |io_i_mux_bus_1_1; // @[Benes3.scala 64:71]
  wire  _T_136 = |io_i_mux_bus_1_2; // @[Benes3.scala 64:107]
  wire  _T_137 = ~(|io_i_mux_bus_1_2); // @[Benes3.scala 64:111]
  wire  _T_139 = |io_i_mux_bus_1_3; // @[Benes3.scala 64:143]
  wire  _T_140 = ~(|io_i_mux_bus_1_3); // @[Benes3.scala 64:147]
  wire  parsedindexvalue_first_stage_5 = io_i_mux_bus_1_0[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray_5_0 = io_i_mux_bus_1_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray_5_1 = io_i_mux_bus_1_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_89 = {{2'd0}, parsedindexvalue_first_stage_5}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_94 = _GEN_89 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue_calculation_10 = _GEN_94[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_390 = ~parsedindexvalue_calculation_10; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_391 = ~parsedindexvalue_boolArray_5_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_392 = ~parsedindexvalue_calculation_10 & ~parsedindexvalue_boolArray_5_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_395 = parsedindexvalue_calculation_10 & _parsedindexvalue_nextIndex_T_391; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_872 = {{1'd0}, parsedindexvalue_calculation_10}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_396 = _GEN_872 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_398 = _GEN_872 == 2'h2 & _parsedindexvalue_nextIndex_T_391; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_399 = _GEN_872 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_401 = _GEN_872 == 2'h3 & _parsedindexvalue_nextIndex_T_391; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_404 = _parsedindexvalue_nextIndex_T_390 & parsedindexvalue_boolArray_5_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_874 = {{1'd0}, parsedindexvalue_first_stage_5}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue_nextIndex_T_406 = _GEN_874 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_409 = parsedindexvalue_calculation_10 & parsedindexvalue_boolArray_5_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_414 = _parsedindexvalue_nextIndex_T_396 & parsedindexvalue_boolArray_5_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_416 = _GEN_874 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_419 = _parsedindexvalue_nextIndex_T_399 & parsedindexvalue_boolArray_5_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_422 = _parsedindexvalue_nextIndex_T_419 ? _parsedindexvalue_nextIndex_T_416
     : {{1'd0}, parsedindexvalue_first_stage_5}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_423 = _parsedindexvalue_nextIndex_T_414 ? _parsedindexvalue_nextIndex_T_416
     : _parsedindexvalue_nextIndex_T_422; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_424 = _parsedindexvalue_nextIndex_T_409 ? _parsedindexvalue_nextIndex_T_406
     : _parsedindexvalue_nextIndex_T_423; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_425 = _parsedindexvalue_nextIndex_T_404 ? _parsedindexvalue_nextIndex_T_406
     : _parsedindexvalue_nextIndex_T_424; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_426 = _parsedindexvalue_nextIndex_T_401 ? {{1'd0},
    parsedindexvalue_first_stage_5} : _parsedindexvalue_nextIndex_T_425; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_427 = _parsedindexvalue_nextIndex_T_398 ? {{1'd0},
    parsedindexvalue_first_stage_5} : _parsedindexvalue_nextIndex_T_426; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_428 = _parsedindexvalue_nextIndex_T_395 ? {{1'd0},
    parsedindexvalue_first_stage_5} : _parsedindexvalue_nextIndex_T_427; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_10 = _parsedindexvalue_nextIndex_T_392 ? {{1'd0}, parsedindexvalue_first_stage_5
    } : _parsedindexvalue_nextIndex_T_428; // @[Mux.scala 101:16]
  wire [2:0] _GEN_99 = {{1'd0}, parsedindexvalue_nextIndex_10}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_104 = _GEN_99 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_11 = _GEN_104[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_429 = parsedindexvalue_calculation_11 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_430 = ~parsedindexvalue_boolArray_5_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_431 = parsedindexvalue_calculation_11 == 2'h0 & ~parsedindexvalue_boolArray_5_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_432 = parsedindexvalue_calculation_11 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_434 = parsedindexvalue_calculation_11 == 2'h1 & _parsedindexvalue_nextIndex_T_430; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_435 = parsedindexvalue_calculation_11 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_437 = parsedindexvalue_calculation_11 == 2'h2 & _parsedindexvalue_nextIndex_T_430; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_438 = parsedindexvalue_calculation_11 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_440 = parsedindexvalue_calculation_11 == 2'h3 & _parsedindexvalue_nextIndex_T_430; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_443 = _parsedindexvalue_nextIndex_T_429 & parsedindexvalue_boolArray_5_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_445 = parsedindexvalue_nextIndex_10 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_448 = _parsedindexvalue_nextIndex_T_432 & parsedindexvalue_boolArray_5_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_453 = _parsedindexvalue_nextIndex_T_435 & parsedindexvalue_boolArray_5_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_455 = parsedindexvalue_nextIndex_10 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_458 = _parsedindexvalue_nextIndex_T_438 & parsedindexvalue_boolArray_5_1; // @[Benes3.scala 43:36]
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
  wire [1:0] _parsedindexvalue_third_stage_T_41 = parsedindexvalue_nextIndex_11 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_44 = parsedindexvalue_nextIndex_11 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_46 = parsedindexvalue_nextIndex_11 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_47 = _parsedindexvalue_third_stage_T_41 == 2'h0 ?
    _parsedindexvalue_third_stage_T_44 : _parsedindexvalue_third_stage_T_46; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue_5 = io_i_mux_bus_1_0[3] ? _parsedindexvalue_third_stage_T_47 :
    parsedindexvalue_nextIndex_11; // @[Benes3.scala 49:24]
  wire [2:0] _T_142 = {{1'd0}, parsedindexvalue_5};
  wire [15:0] _GEN_170 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_165; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_171 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_166; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_172 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_167; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_173 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_168; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_175 = ~(|io_i_mux_bus_1_0) & ~(|io_i_mux_bus_1_1) & ~(|io_i_mux_bus_1_2) & ~(|io_i_mux_bus_1_3) ?
    _GEN_170 : _GEN_165; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_176 = ~(|io_i_mux_bus_1_0) & ~(|io_i_mux_bus_1_1) & ~(|io_i_mux_bus_1_2) & ~(|io_i_mux_bus_1_3) ?
    _GEN_171 : _GEN_166; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_177 = ~(|io_i_mux_bus_1_0) & ~(|io_i_mux_bus_1_1) & ~(|io_i_mux_bus_1_2) & ~(|io_i_mux_bus_1_3) ?
    _GEN_172 : _GEN_167; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_178 = ~(|io_i_mux_bus_1_0) & ~(|io_i_mux_bus_1_1) & ~(|io_i_mux_bus_1_2) & ~(|io_i_mux_bus_1_3) ?
    _GEN_173 : _GEN_168; // @[Benes3.scala 64:156]
  wire  _T_148 = _T_132 & _T_133; // @[Benes3.scala 70:48]
  wire  _T_151 = _T_132 & _T_133 & _T_136; // @[Benes3.scala 70:84]
  wire  _T_154 = _T_132 & _T_133 & _T_136 & _T_139; // @[Benes3.scala 70:120]
  wire [15:0] _GEN_180 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_175; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_181 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_176; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_182 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_177; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_183 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_178; // @[Benes3.scala 72:{43,43}]
  wire  parsedindexvalue1_first_stage_7 = io_i_mux_bus_1_1[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue1_boolArray_7_0 = io_i_mux_bus_1_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue1_boolArray_7_1 = io_i_mux_bus_1_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_109 = {{2'd0}, parsedindexvalue1_first_stage_7}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_114 = _GEN_109 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue1_calculation_14 = _GEN_114[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_546 = ~parsedindexvalue1_calculation_14; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_547 = ~parsedindexvalue1_boolArray_7_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_548 = ~parsedindexvalue1_calculation_14 & ~parsedindexvalue1_boolArray_7_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_551 = parsedindexvalue1_calculation_14 & _parsedindexvalue1_nextIndex_T_547; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_888 = {{1'd0}, parsedindexvalue1_calculation_14}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_552 = _GEN_888 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_554 = _GEN_888 == 2'h2 & _parsedindexvalue1_nextIndex_T_547; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_555 = _GEN_888 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_557 = _GEN_888 == 2'h3 & _parsedindexvalue1_nextIndex_T_547; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_560 = _parsedindexvalue1_nextIndex_T_546 & parsedindexvalue1_boolArray_7_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_890 = {{1'd0}, parsedindexvalue1_first_stage_7}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue1_nextIndex_T_562 = _GEN_890 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_565 = parsedindexvalue1_calculation_14 & parsedindexvalue1_boolArray_7_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_570 = _parsedindexvalue1_nextIndex_T_552 & parsedindexvalue1_boolArray_7_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_572 = _GEN_890 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_575 = _parsedindexvalue1_nextIndex_T_555 & parsedindexvalue1_boolArray_7_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_578 = _parsedindexvalue1_nextIndex_T_575 ?
    _parsedindexvalue1_nextIndex_T_572 : {{1'd0}, parsedindexvalue1_first_stage_7}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_579 = _parsedindexvalue1_nextIndex_T_570 ?
    _parsedindexvalue1_nextIndex_T_572 : _parsedindexvalue1_nextIndex_T_578; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_580 = _parsedindexvalue1_nextIndex_T_565 ?
    _parsedindexvalue1_nextIndex_T_562 : _parsedindexvalue1_nextIndex_T_579; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_581 = _parsedindexvalue1_nextIndex_T_560 ?
    _parsedindexvalue1_nextIndex_T_562 : _parsedindexvalue1_nextIndex_T_580; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_582 = _parsedindexvalue1_nextIndex_T_557 ? {{1'd0},
    parsedindexvalue1_first_stage_7} : _parsedindexvalue1_nextIndex_T_581; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_583 = _parsedindexvalue1_nextIndex_T_554 ? {{1'd0},
    parsedindexvalue1_first_stage_7} : _parsedindexvalue1_nextIndex_T_582; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_584 = _parsedindexvalue1_nextIndex_T_551 ? {{1'd0},
    parsedindexvalue1_first_stage_7} : _parsedindexvalue1_nextIndex_T_583; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_14 = _parsedindexvalue1_nextIndex_T_548 ? {{1'd0},
    parsedindexvalue1_first_stage_7} : _parsedindexvalue1_nextIndex_T_584; // @[Mux.scala 101:16]
  wire [2:0] _GEN_119 = {{1'd0}, parsedindexvalue1_nextIndex_14}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_124 = _GEN_119 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue1_calculation_15 = _GEN_124[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_585 = parsedindexvalue1_calculation_15 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_586 = ~parsedindexvalue1_boolArray_7_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_587 = parsedindexvalue1_calculation_15 == 2'h0 & ~parsedindexvalue1_boolArray_7_1
    ; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_588 = parsedindexvalue1_calculation_15 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue1_nextIndex_T_590 = parsedindexvalue1_calculation_15 == 2'h1 &
    _parsedindexvalue1_nextIndex_T_586; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue1_nextIndex_T_591 = parsedindexvalue1_calculation_15 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_593 = parsedindexvalue1_calculation_15 == 2'h2 &
    _parsedindexvalue1_nextIndex_T_586; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_594 = parsedindexvalue1_calculation_15 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_596 = parsedindexvalue1_calculation_15 == 2'h3 &
    _parsedindexvalue1_nextIndex_T_586; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_599 = _parsedindexvalue1_nextIndex_T_585 & parsedindexvalue1_boolArray_7_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_601 = parsedindexvalue1_nextIndex_14 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_604 = _parsedindexvalue1_nextIndex_T_588 & parsedindexvalue1_boolArray_7_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_609 = _parsedindexvalue1_nextIndex_T_591 & parsedindexvalue1_boolArray_7_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_611 = parsedindexvalue1_nextIndex_14 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_614 = _parsedindexvalue1_nextIndex_T_594 & parsedindexvalue1_boolArray_7_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_617 = _parsedindexvalue1_nextIndex_T_614 ?
    _parsedindexvalue1_nextIndex_T_611 : parsedindexvalue1_nextIndex_14; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_618 = _parsedindexvalue1_nextIndex_T_609 ?
    _parsedindexvalue1_nextIndex_T_611 : _parsedindexvalue1_nextIndex_T_617; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_619 = _parsedindexvalue1_nextIndex_T_604 ?
    _parsedindexvalue1_nextIndex_T_601 : _parsedindexvalue1_nextIndex_T_618; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_620 = _parsedindexvalue1_nextIndex_T_599 ?
    _parsedindexvalue1_nextIndex_T_601 : _parsedindexvalue1_nextIndex_T_619; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_621 = _parsedindexvalue1_nextIndex_T_596 ? parsedindexvalue1_nextIndex_14 :
    _parsedindexvalue1_nextIndex_T_620; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_622 = _parsedindexvalue1_nextIndex_T_593 ? parsedindexvalue1_nextIndex_14 :
    _parsedindexvalue1_nextIndex_T_621; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_623 = _parsedindexvalue1_nextIndex_T_590 ? parsedindexvalue1_nextIndex_14 :
    _parsedindexvalue1_nextIndex_T_622; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_15 = _parsedindexvalue1_nextIndex_T_587 ? parsedindexvalue1_nextIndex_14 :
    _parsedindexvalue1_nextIndex_T_623; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_third_stage_T_57 = parsedindexvalue1_nextIndex_15 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue1_third_stage_T_60 = parsedindexvalue1_nextIndex_15 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue1_third_stage_T_62 = parsedindexvalue1_nextIndex_15 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue1_third_stage_T_63 = _parsedindexvalue1_third_stage_T_57 == 2'h0 ?
    _parsedindexvalue1_third_stage_T_60 : _parsedindexvalue1_third_stage_T_62; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue1_7 = io_i_mux_bus_1_1[3] ? _parsedindexvalue1_third_stage_T_63 :
    parsedindexvalue1_nextIndex_15; // @[Benes3.scala 49:24]
  wire [2:0] _T_157 = {{1'd0}, parsedindexvalue1_7};
  wire [15:0] _GEN_185 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_180; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_186 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_181; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_187 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_182; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_188 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_183; // @[Benes3.scala 74:{44,44}]
  wire  parsedindexvalue2_first_stage_6 = io_i_mux_bus_1_2[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray_6_0 = io_i_mux_bus_1_2[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray_6_1 = io_i_mux_bus_1_2[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_129 = {{2'd0}, parsedindexvalue2_first_stage_6}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_134 = _GEN_129 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue2_calculation_12 = _GEN_134[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_468 = ~parsedindexvalue2_calculation_12; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_469 = ~parsedindexvalue2_boolArray_6_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_470 = ~parsedindexvalue2_calculation_12 & ~parsedindexvalue2_boolArray_6_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_473 = parsedindexvalue2_calculation_12 & _parsedindexvalue2_nextIndex_T_469; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_896 = {{1'd0}, parsedindexvalue2_calculation_12}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_474 = _GEN_896 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_476 = _GEN_896 == 2'h2 & _parsedindexvalue2_nextIndex_T_469; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_477 = _GEN_896 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_479 = _GEN_896 == 2'h3 & _parsedindexvalue2_nextIndex_T_469; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_482 = _parsedindexvalue2_nextIndex_T_468 & parsedindexvalue2_boolArray_6_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_898 = {{1'd0}, parsedindexvalue2_first_stage_6}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue2_nextIndex_T_484 = _GEN_898 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_487 = parsedindexvalue2_calculation_12 & parsedindexvalue2_boolArray_6_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_492 = _parsedindexvalue2_nextIndex_T_474 & parsedindexvalue2_boolArray_6_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_494 = _GEN_898 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_497 = _parsedindexvalue2_nextIndex_T_477 & parsedindexvalue2_boolArray_6_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_500 = _parsedindexvalue2_nextIndex_T_497 ?
    _parsedindexvalue2_nextIndex_T_494 : {{1'd0}, parsedindexvalue2_first_stage_6}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_501 = _parsedindexvalue2_nextIndex_T_492 ?
    _parsedindexvalue2_nextIndex_T_494 : _parsedindexvalue2_nextIndex_T_500; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_502 = _parsedindexvalue2_nextIndex_T_487 ?
    _parsedindexvalue2_nextIndex_T_484 : _parsedindexvalue2_nextIndex_T_501; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_503 = _parsedindexvalue2_nextIndex_T_482 ?
    _parsedindexvalue2_nextIndex_T_484 : _parsedindexvalue2_nextIndex_T_502; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_504 = _parsedindexvalue2_nextIndex_T_479 ? {{1'd0},
    parsedindexvalue2_first_stage_6} : _parsedindexvalue2_nextIndex_T_503; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_505 = _parsedindexvalue2_nextIndex_T_476 ? {{1'd0},
    parsedindexvalue2_first_stage_6} : _parsedindexvalue2_nextIndex_T_504; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_506 = _parsedindexvalue2_nextIndex_T_473 ? {{1'd0},
    parsedindexvalue2_first_stage_6} : _parsedindexvalue2_nextIndex_T_505; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_12 = _parsedindexvalue2_nextIndex_T_470 ? {{1'd0},
    parsedindexvalue2_first_stage_6} : _parsedindexvalue2_nextIndex_T_506; // @[Mux.scala 101:16]
  wire [2:0] _GEN_139 = {{1'd0}, parsedindexvalue2_nextIndex_12}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_144 = _GEN_139 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_13 = _GEN_144[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_507 = parsedindexvalue2_calculation_13 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_508 = ~parsedindexvalue2_boolArray_6_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_509 = parsedindexvalue2_calculation_13 == 2'h0 & ~parsedindexvalue2_boolArray_6_1
    ; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_510 = parsedindexvalue2_calculation_13 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_512 = parsedindexvalue2_calculation_13 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_508; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_513 = parsedindexvalue2_calculation_13 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_515 = parsedindexvalue2_calculation_13 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_508; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_516 = parsedindexvalue2_calculation_13 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_518 = parsedindexvalue2_calculation_13 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_508; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_521 = _parsedindexvalue2_nextIndex_T_507 & parsedindexvalue2_boolArray_6_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_523 = parsedindexvalue2_nextIndex_12 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_526 = _parsedindexvalue2_nextIndex_T_510 & parsedindexvalue2_boolArray_6_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_531 = _parsedindexvalue2_nextIndex_T_513 & parsedindexvalue2_boolArray_6_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_533 = parsedindexvalue2_nextIndex_12 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_536 = _parsedindexvalue2_nextIndex_T_516 & parsedindexvalue2_boolArray_6_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_539 = _parsedindexvalue2_nextIndex_T_536 ?
    _parsedindexvalue2_nextIndex_T_533 : parsedindexvalue2_nextIndex_12; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_540 = _parsedindexvalue2_nextIndex_T_531 ?
    _parsedindexvalue2_nextIndex_T_533 : _parsedindexvalue2_nextIndex_T_539; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_541 = _parsedindexvalue2_nextIndex_T_526 ?
    _parsedindexvalue2_nextIndex_T_523 : _parsedindexvalue2_nextIndex_T_540; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_542 = _parsedindexvalue2_nextIndex_T_521 ?
    _parsedindexvalue2_nextIndex_T_523 : _parsedindexvalue2_nextIndex_T_541; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_543 = _parsedindexvalue2_nextIndex_T_518 ? parsedindexvalue2_nextIndex_12 :
    _parsedindexvalue2_nextIndex_T_542; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_544 = _parsedindexvalue2_nextIndex_T_515 ? parsedindexvalue2_nextIndex_12 :
    _parsedindexvalue2_nextIndex_T_543; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_545 = _parsedindexvalue2_nextIndex_T_512 ? parsedindexvalue2_nextIndex_12 :
    _parsedindexvalue2_nextIndex_T_544; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_13 = _parsedindexvalue2_nextIndex_T_509 ? parsedindexvalue2_nextIndex_12 :
    _parsedindexvalue2_nextIndex_T_545; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_third_stage_T_49 = parsedindexvalue2_nextIndex_13 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue2_third_stage_T_52 = parsedindexvalue2_nextIndex_13 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue2_third_stage_T_54 = parsedindexvalue2_nextIndex_13 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue2_third_stage_T_55 = _parsedindexvalue2_third_stage_T_49 == 2'h0 ?
    _parsedindexvalue2_third_stage_T_52 : _parsedindexvalue2_third_stage_T_54; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue2_6 = io_i_mux_bus_1_2[3] ? _parsedindexvalue2_third_stage_T_55 :
    parsedindexvalue2_nextIndex_13; // @[Benes3.scala 49:24]
  wire [2:0] _T_159 = {{1'd0}, parsedindexvalue2_6};
  wire [15:0] _GEN_190 = 3'h0 == _T_159 ? io_i_data_bus2_1 : _GEN_185; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_191 = 3'h1 == _T_159 ? io_i_data_bus2_1 : _GEN_186; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_192 = 3'h2 == _T_159 ? io_i_data_bus2_1 : _GEN_187; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_193 = 3'h3 == _T_159 ? io_i_data_bus2_1 : _GEN_188; // @[Benes3.scala 76:{44,44}]
  wire  parsedindexvalue3_first_stage_4 = io_i_mux_bus_1_3[0] ? 1'h0 : 1'h1; // @[Benes3.scala 25:26]
  wire  parsedindexvalue3_boolArray_4_0 = io_i_mux_bus_1_3[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue3_boolArray_4_1 = io_i_mux_bus_1_3[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_149 = {{2'd0}, parsedindexvalue3_first_stage_4}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_154 = _GEN_149 % 3'h4; // @[Benes3.scala 34:40]
  wire  parsedindexvalue3_calculation_8 = _GEN_154[0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_312 = ~parsedindexvalue3_calculation_8; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_313 = ~parsedindexvalue3_boolArray_4_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_314 = ~parsedindexvalue3_calculation_8 & ~parsedindexvalue3_boolArray_4_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_317 = parsedindexvalue3_calculation_8 & _parsedindexvalue3_nextIndex_T_313; // @[Benes3.scala 37:36]
  wire [1:0] _GEN_904 = {{1'd0}, parsedindexvalue3_calculation_8}; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_318 = _GEN_904 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_320 = _GEN_904 == 2'h2 & _parsedindexvalue3_nextIndex_T_313; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_321 = _GEN_904 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_323 = _GEN_904 == 2'h3 & _parsedindexvalue3_nextIndex_T_313; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_326 = _parsedindexvalue3_nextIndex_T_312 & parsedindexvalue3_boolArray_4_0; // @[Benes3.scala 40:36]
  wire [1:0] _GEN_906 = {{1'd0}, parsedindexvalue3_first_stage_4}; // @[Benes3.scala 40:76]
  wire [1:0] _parsedindexvalue3_nextIndex_T_328 = _GEN_906 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_331 = parsedindexvalue3_calculation_8 & parsedindexvalue3_boolArray_4_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_336 = _parsedindexvalue3_nextIndex_T_318 & parsedindexvalue3_boolArray_4_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_338 = _GEN_906 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_341 = _parsedindexvalue3_nextIndex_T_321 & parsedindexvalue3_boolArray_4_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_344 = _parsedindexvalue3_nextIndex_T_341 ?
    _parsedindexvalue3_nextIndex_T_338 : {{1'd0}, parsedindexvalue3_first_stage_4}; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_345 = _parsedindexvalue3_nextIndex_T_336 ?
    _parsedindexvalue3_nextIndex_T_338 : _parsedindexvalue3_nextIndex_T_344; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_346 = _parsedindexvalue3_nextIndex_T_331 ?
    _parsedindexvalue3_nextIndex_T_328 : _parsedindexvalue3_nextIndex_T_345; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_347 = _parsedindexvalue3_nextIndex_T_326 ?
    _parsedindexvalue3_nextIndex_T_328 : _parsedindexvalue3_nextIndex_T_346; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_348 = _parsedindexvalue3_nextIndex_T_323 ? {{1'd0},
    parsedindexvalue3_first_stage_4} : _parsedindexvalue3_nextIndex_T_347; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_349 = _parsedindexvalue3_nextIndex_T_320 ? {{1'd0},
    parsedindexvalue3_first_stage_4} : _parsedindexvalue3_nextIndex_T_348; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_350 = _parsedindexvalue3_nextIndex_T_317 ? {{1'd0},
    parsedindexvalue3_first_stage_4} : _parsedindexvalue3_nextIndex_T_349; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_8 = _parsedindexvalue3_nextIndex_T_314 ? {{1'd0},
    parsedindexvalue3_first_stage_4} : _parsedindexvalue3_nextIndex_T_350; // @[Mux.scala 101:16]
  wire [2:0] _GEN_159 = {{1'd0}, parsedindexvalue3_nextIndex_8}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_164 = _GEN_159 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_9 = _GEN_164[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_351 = parsedindexvalue3_calculation_9 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_352 = ~parsedindexvalue3_boolArray_4_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_353 = parsedindexvalue3_calculation_9 == 2'h0 & ~parsedindexvalue3_boolArray_4_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_354 = parsedindexvalue3_calculation_9 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_356 = parsedindexvalue3_calculation_9 == 2'h1 &
    _parsedindexvalue3_nextIndex_T_352; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_357 = parsedindexvalue3_calculation_9 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_359 = parsedindexvalue3_calculation_9 == 2'h2 &
    _parsedindexvalue3_nextIndex_T_352; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_360 = parsedindexvalue3_calculation_9 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_362 = parsedindexvalue3_calculation_9 == 2'h3 &
    _parsedindexvalue3_nextIndex_T_352; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_365 = _parsedindexvalue3_nextIndex_T_351 & parsedindexvalue3_boolArray_4_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_367 = parsedindexvalue3_nextIndex_8 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_370 = _parsedindexvalue3_nextIndex_T_354 & parsedindexvalue3_boolArray_4_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_375 = _parsedindexvalue3_nextIndex_T_357 & parsedindexvalue3_boolArray_4_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_377 = parsedindexvalue3_nextIndex_8 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_380 = _parsedindexvalue3_nextIndex_T_360 & parsedindexvalue3_boolArray_4_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_383 = _parsedindexvalue3_nextIndex_T_380 ?
    _parsedindexvalue3_nextIndex_T_377 : parsedindexvalue3_nextIndex_8; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_384 = _parsedindexvalue3_nextIndex_T_375 ?
    _parsedindexvalue3_nextIndex_T_377 : _parsedindexvalue3_nextIndex_T_383; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_385 = _parsedindexvalue3_nextIndex_T_370 ?
    _parsedindexvalue3_nextIndex_T_367 : _parsedindexvalue3_nextIndex_T_384; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_386 = _parsedindexvalue3_nextIndex_T_365 ?
    _parsedindexvalue3_nextIndex_T_367 : _parsedindexvalue3_nextIndex_T_385; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_387 = _parsedindexvalue3_nextIndex_T_362 ? parsedindexvalue3_nextIndex_8 :
    _parsedindexvalue3_nextIndex_T_386; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_388 = _parsedindexvalue3_nextIndex_T_359 ? parsedindexvalue3_nextIndex_8 :
    _parsedindexvalue3_nextIndex_T_387; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_389 = _parsedindexvalue3_nextIndex_T_356 ? parsedindexvalue3_nextIndex_8 :
    _parsedindexvalue3_nextIndex_T_388; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_9 = _parsedindexvalue3_nextIndex_T_353 ? parsedindexvalue3_nextIndex_8 :
    _parsedindexvalue3_nextIndex_T_389; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_third_stage_T_33 = parsedindexvalue3_nextIndex_9 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue3_third_stage_T_36 = parsedindexvalue3_nextIndex_9 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue3_third_stage_T_38 = parsedindexvalue3_nextIndex_9 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue3_third_stage_T_39 = _parsedindexvalue3_third_stage_T_33 == 2'h0 ?
    _parsedindexvalue3_third_stage_T_36 : _parsedindexvalue3_third_stage_T_38; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue3_4 = io_i_mux_bus_1_3[3] ? _parsedindexvalue3_third_stage_T_39 :
    parsedindexvalue3_nextIndex_9; // @[Benes3.scala 49:24]
  wire [2:0] _T_161 = {{1'd0}, parsedindexvalue3_4};
  wire [15:0] _GEN_195 = 3'h0 == _T_161 ? io_i_data_bus2_1 : _GEN_190; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_196 = 3'h1 == _T_161 ? io_i_data_bus2_1 : _GEN_191; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_197 = 3'h2 == _T_161 ? io_i_data_bus2_1 : _GEN_192; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_198 = 3'h3 == _T_161 ? io_i_data_bus2_1 : _GEN_193; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_200 = _T_132 & _T_133 & _T_136 & _T_139 ? _GEN_195 : _GEN_175; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_201 = _T_132 & _T_133 & _T_136 & _T_139 ? _GEN_196 : _GEN_176; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_202 = _T_132 & _T_133 & _T_136 & _T_139 ? _GEN_197 : _GEN_177; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_203 = _T_132 & _T_133 & _T_136 & _T_139 ? _GEN_198 : _GEN_178; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_205 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_200; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_206 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_201; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_207 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_202; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_208 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_203; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_210 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_205; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_211 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_206; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_212 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_207; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_213 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_208; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_215 = 3'h0 == _T_159 ? io_i_data_bus2_1 : _GEN_210; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_216 = 3'h1 == _T_159 ? io_i_data_bus2_1 : _GEN_211; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_217 = 3'h2 == _T_159 ? io_i_data_bus2_1 : _GEN_212; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_218 = 3'h3 == _T_159 ? io_i_data_bus2_1 : _GEN_213; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_220 = _T_151 & _T_140 ? _GEN_215 : _GEN_200; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_221 = _T_151 & _T_140 ? _GEN_216 : _GEN_201; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_222 = _T_151 & _T_140 ? _GEN_217 : _GEN_202; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_223 = _T_151 & _T_140 ? _GEN_218 : _GEN_203; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_225 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_220; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_226 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_221; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_227 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_222; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_228 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_223; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_230 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_225; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_231 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_226; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_232 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_227; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_233 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_228; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_235 = _T_148 & _T_137 & _T_140 ? _GEN_230 : _GEN_220; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_236 = _T_148 & _T_137 & _T_140 ? _GEN_231 : _GEN_221; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_237 = _T_148 & _T_137 & _T_140 ? _GEN_232 : _GEN_222; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_238 = _T_148 & _T_137 & _T_140 ? _GEN_233 : _GEN_223; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_240 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_235; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_241 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_236; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_242 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_237; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_243 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_238; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_245 = _T_131 ? _GEN_240 : _GEN_235; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_246 = _T_131 ? _GEN_241 : _GEN_236; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_247 = _T_131 ? _GEN_242 : _GEN_237; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_248 = _T_131 ? _GEN_243 : _GEN_238; // @[Benes3.scala 102:48]
  wire  _T_203 = _T_131 & _T_133; // @[Benes3.scala 120:48]
  wire [15:0] _GEN_250 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_245; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_251 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_246; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_252 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_247; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_253 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_248; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_255 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_250; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_256 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_251; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_257 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_252; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_258 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_253; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_260 = _T_131 & _T_133 ? _GEN_255 : _GEN_245; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_261 = _T_131 & _T_133 ? _GEN_256 : _GEN_246; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_262 = _T_131 & _T_133 ? _GEN_257 : _GEN_247; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_263 = _T_131 & _T_133 ? _GEN_258 : _GEN_248; // @[Benes3.scala 120:84]
  wire  _T_215 = _T_203 & _T_136; // @[Benes3.scala 142:84]
  wire [15:0] _GEN_265 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_260; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_266 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_261; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_267 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_262; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_268 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_263; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_270 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_265; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_271 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_266; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_272 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_267; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_273 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_268; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_275 = 3'h0 == _T_159 ? io_i_data_bus2_1 : _GEN_270; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_276 = 3'h1 == _T_159 ? io_i_data_bus2_1 : _GEN_271; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_277 = 3'h2 == _T_159 ? io_i_data_bus2_1 : _GEN_272; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_278 = 3'h3 == _T_159 ? io_i_data_bus2_1 : _GEN_273; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_280 = _T_203 & _T_136 ? _GEN_275 : _GEN_260; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_281 = _T_203 & _T_136 ? _GEN_276 : _GEN_261; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_282 = _T_203 & _T_136 ? _GEN_277 : _GEN_262; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_283 = _T_203 & _T_136 ? _GEN_278 : _GEN_263; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_285 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_280; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_286 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_281; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_287 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_282; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_288 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_283; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_290 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_285; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_291 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_286; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_292 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_287; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_293 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_288; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_295 = 3'h0 == _T_159 ? io_i_data_bus2_1 : _GEN_290; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_296 = 3'h1 == _T_159 ? io_i_data_bus2_1 : _GEN_291; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_297 = 3'h2 == _T_159 ? io_i_data_bus2_1 : _GEN_292; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_298 = 3'h3 == _T_159 ? io_i_data_bus2_1 : _GEN_293; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_300 = 3'h0 == _T_161 ? io_i_data_bus2_1 : _GEN_295; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_301 = 3'h1 == _T_161 ? io_i_data_bus2_1 : _GEN_296; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_302 = 3'h2 == _T_161 ? io_i_data_bus2_1 : _GEN_297; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_303 = 3'h3 == _T_161 ? io_i_data_bus2_1 : _GEN_298; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_305 = _T_215 & _T_139 ? _GEN_300 : _GEN_280; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_306 = _T_215 & _T_139 ? _GEN_301 : _GEN_281; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_307 = _T_215 & _T_139 ? _GEN_302 : _GEN_282; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_308 = _T_215 & _T_139 ? _GEN_303 : _GEN_283; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_310 = 3'h0 == _T_142 ? io_i_data_bus2_1 : _GEN_305; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_311 = 3'h1 == _T_142 ? io_i_data_bus2_1 : _GEN_306; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_312 = 3'h2 == _T_142 ? io_i_data_bus2_1 : _GEN_307; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_313 = 3'h3 == _T_142 ? io_i_data_bus2_1 : _GEN_308; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_315 = 3'h0 == _T_157 ? io_i_data_bus2_1 : _GEN_310; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_316 = 3'h1 == _T_157 ? io_i_data_bus2_1 : _GEN_311; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_317 = 3'h2 == _T_157 ? io_i_data_bus2_1 : _GEN_312; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_318 = 3'h3 == _T_157 ? io_i_data_bus2_1 : _GEN_313; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_320 = 3'h0 == _T_159 ? io_i_data_bus2_1 : _GEN_315; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_321 = 3'h1 == _T_159 ? io_i_data_bus2_1 : _GEN_316; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_322 = 3'h2 == _T_159 ? io_i_data_bus2_1 : _GEN_317; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_323 = 3'h3 == _T_159 ? io_i_data_bus2_1 : _GEN_318; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_325 = 3'h0 == _T_161 ? io_i_data_bus2_1 : _GEN_320; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_326 = 3'h1 == _T_161 ? io_i_data_bus2_1 : _GEN_321; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_327 = 3'h2 == _T_161 ? io_i_data_bus2_1 : _GEN_322; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_328 = 3'h3 == _T_161 ? io_i_data_bus2_1 : _GEN_323; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_330 = _T_154 ? _GEN_325 : _GEN_305; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_331 = _T_154 ? _GEN_326 : _GEN_306; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_332 = _T_154 ? _GEN_327 : _GEN_307; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_333 = _T_154 ? _GEN_328 : _GEN_308; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_335 = io_i_data_bus2_1 != 16'h0 ? _GEN_330 : _GEN_165; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_336 = io_i_data_bus2_1 != 16'h0 ? _GEN_331 : _GEN_166; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_337 = io_i_data_bus2_1 != 16'h0 ? _GEN_332 : _GEN_167; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_338 = io_i_data_bus2_1 != 16'h0 ? _GEN_333 : _GEN_168; // @[Benes3.scala 62:39]
  wire  _T_261 = |io_i_mux_bus_2_0; // @[Benes3.scala 64:35]
  wire  _T_262 = ~(|io_i_mux_bus_2_0); // @[Benes3.scala 64:39]
  wire  _T_263 = |io_i_mux_bus_2_1; // @[Benes3.scala 64:71]
  wire  _T_266 = |io_i_mux_bus_2_2; // @[Benes3.scala 64:107]
  wire  _T_267 = ~(|io_i_mux_bus_2_2); // @[Benes3.scala 64:111]
  wire  _T_269 = |io_i_mux_bus_2_3; // @[Benes3.scala 64:143]
  wire  _T_270 = ~(|io_i_mux_bus_2_3); // @[Benes3.scala 64:147]
  wire [1:0] parsedindexvalue_first_stage_10 = io_i_mux_bus_2_0[0] ? 2'h3 : 2'h2; // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray_10_0 = io_i_mux_bus_2_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray_10_1 = io_i_mux_bus_2_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_169 = {{1'd0}, parsedindexvalue_first_stage_10}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_174 = _GEN_169 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_20 = _GEN_174[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_780 = parsedindexvalue_calculation_20 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_781 = ~parsedindexvalue_boolArray_10_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_782 = parsedindexvalue_calculation_20 == 2'h0 & ~parsedindexvalue_boolArray_10_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_783 = parsedindexvalue_calculation_20 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_785 = parsedindexvalue_calculation_20 == 2'h1 & _parsedindexvalue_nextIndex_T_781; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_786 = parsedindexvalue_calculation_20 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_788 = parsedindexvalue_calculation_20 == 2'h2 & _parsedindexvalue_nextIndex_T_781; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_789 = parsedindexvalue_calculation_20 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_791 = parsedindexvalue_calculation_20 == 2'h3 & _parsedindexvalue_nextIndex_T_781; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_794 = _parsedindexvalue_nextIndex_T_780 & parsedindexvalue_boolArray_10_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_796 = parsedindexvalue_first_stage_10 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_799 = _parsedindexvalue_nextIndex_T_783 & parsedindexvalue_boolArray_10_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_804 = _parsedindexvalue_nextIndex_T_786 & parsedindexvalue_boolArray_10_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_806 = parsedindexvalue_first_stage_10 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_809 = _parsedindexvalue_nextIndex_T_789 & parsedindexvalue_boolArray_10_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_812 = _parsedindexvalue_nextIndex_T_809 ? _parsedindexvalue_nextIndex_T_806
     : parsedindexvalue_first_stage_10; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_813 = _parsedindexvalue_nextIndex_T_804 ? _parsedindexvalue_nextIndex_T_806
     : _parsedindexvalue_nextIndex_T_812; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_814 = _parsedindexvalue_nextIndex_T_799 ? _parsedindexvalue_nextIndex_T_796
     : _parsedindexvalue_nextIndex_T_813; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_815 = _parsedindexvalue_nextIndex_T_794 ? _parsedindexvalue_nextIndex_T_796
     : _parsedindexvalue_nextIndex_T_814; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_816 = _parsedindexvalue_nextIndex_T_791 ? parsedindexvalue_first_stage_10 :
    _parsedindexvalue_nextIndex_T_815; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_817 = _parsedindexvalue_nextIndex_T_788 ? parsedindexvalue_first_stage_10 :
    _parsedindexvalue_nextIndex_T_816; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_818 = _parsedindexvalue_nextIndex_T_785 ? parsedindexvalue_first_stage_10 :
    _parsedindexvalue_nextIndex_T_817; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_20 = _parsedindexvalue_nextIndex_T_782 ? parsedindexvalue_first_stage_10 :
    _parsedindexvalue_nextIndex_T_818; // @[Mux.scala 101:16]
  wire [2:0] _GEN_179 = {{1'd0}, parsedindexvalue_nextIndex_20}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_184 = _GEN_179 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_21 = _GEN_184[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_819 = parsedindexvalue_calculation_21 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_820 = ~parsedindexvalue_boolArray_10_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_821 = parsedindexvalue_calculation_21 == 2'h0 & ~parsedindexvalue_boolArray_10_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_822 = parsedindexvalue_calculation_21 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_824 = parsedindexvalue_calculation_21 == 2'h1 & _parsedindexvalue_nextIndex_T_820; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_825 = parsedindexvalue_calculation_21 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_827 = parsedindexvalue_calculation_21 == 2'h2 & _parsedindexvalue_nextIndex_T_820; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_828 = parsedindexvalue_calculation_21 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_830 = parsedindexvalue_calculation_21 == 2'h3 & _parsedindexvalue_nextIndex_T_820; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_833 = _parsedindexvalue_nextIndex_T_819 & parsedindexvalue_boolArray_10_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_835 = parsedindexvalue_nextIndex_20 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_838 = _parsedindexvalue_nextIndex_T_822 & parsedindexvalue_boolArray_10_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_843 = _parsedindexvalue_nextIndex_T_825 & parsedindexvalue_boolArray_10_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_845 = parsedindexvalue_nextIndex_20 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_848 = _parsedindexvalue_nextIndex_T_828 & parsedindexvalue_boolArray_10_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_851 = _parsedindexvalue_nextIndex_T_848 ? _parsedindexvalue_nextIndex_T_845
     : parsedindexvalue_nextIndex_20; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_852 = _parsedindexvalue_nextIndex_T_843 ? _parsedindexvalue_nextIndex_T_845
     : _parsedindexvalue_nextIndex_T_851; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_853 = _parsedindexvalue_nextIndex_T_838 ? _parsedindexvalue_nextIndex_T_835
     : _parsedindexvalue_nextIndex_T_852; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_854 = _parsedindexvalue_nextIndex_T_833 ? _parsedindexvalue_nextIndex_T_835
     : _parsedindexvalue_nextIndex_T_853; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_855 = _parsedindexvalue_nextIndex_T_830 ? parsedindexvalue_nextIndex_20 :
    _parsedindexvalue_nextIndex_T_854; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_856 = _parsedindexvalue_nextIndex_T_827 ? parsedindexvalue_nextIndex_20 :
    _parsedindexvalue_nextIndex_T_855; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_857 = _parsedindexvalue_nextIndex_T_824 ? parsedindexvalue_nextIndex_20 :
    _parsedindexvalue_nextIndex_T_856; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_21 = _parsedindexvalue_nextIndex_T_821 ? parsedindexvalue_nextIndex_20 :
    _parsedindexvalue_nextIndex_T_857; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_81 = parsedindexvalue_nextIndex_21 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_84 = parsedindexvalue_nextIndex_21 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_86 = parsedindexvalue_nextIndex_21 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_87 = _parsedindexvalue_third_stage_T_81 == 2'h0 ?
    _parsedindexvalue_third_stage_T_84 : _parsedindexvalue_third_stage_T_86; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue_10 = io_i_mux_bus_2_0[3] ? _parsedindexvalue_third_stage_T_87 :
    parsedindexvalue_nextIndex_21; // @[Benes3.scala 49:24]
  wire [2:0] _T_272 = {{1'd0}, parsedindexvalue_10};
  wire [15:0] _GEN_340 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_335; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_341 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_336; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_342 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_337; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_343 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_338; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_345 = ~(|io_i_mux_bus_2_0) & ~(|io_i_mux_bus_2_1) & ~(|io_i_mux_bus_2_2) & ~(|io_i_mux_bus_2_3) ?
    _GEN_340 : _GEN_335; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_346 = ~(|io_i_mux_bus_2_0) & ~(|io_i_mux_bus_2_1) & ~(|io_i_mux_bus_2_2) & ~(|io_i_mux_bus_2_3) ?
    _GEN_341 : _GEN_336; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_347 = ~(|io_i_mux_bus_2_0) & ~(|io_i_mux_bus_2_1) & ~(|io_i_mux_bus_2_2) & ~(|io_i_mux_bus_2_3) ?
    _GEN_342 : _GEN_337; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_348 = ~(|io_i_mux_bus_2_0) & ~(|io_i_mux_bus_2_1) & ~(|io_i_mux_bus_2_2) & ~(|io_i_mux_bus_2_3) ?
    _GEN_343 : _GEN_338; // @[Benes3.scala 64:156]
  wire  _T_278 = _T_262 & _T_263; // @[Benes3.scala 70:48]
  wire  _T_281 = _T_262 & _T_263 & _T_266; // @[Benes3.scala 70:84]
  wire  _T_284 = _T_262 & _T_263 & _T_266 & _T_269; // @[Benes3.scala 70:120]
  wire [15:0] _GEN_350 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_345; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_351 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_346; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_352 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_347; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_353 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_348; // @[Benes3.scala 72:{43,43}]
  wire [1:0] parsedindexvalue1_first_stage_14 = io_i_mux_bus_2_1[0] ? 2'h3 : 2'h2; // @[Benes3.scala 25:26]
  wire  parsedindexvalue1_boolArray_14_0 = io_i_mux_bus_2_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue1_boolArray_14_1 = io_i_mux_bus_2_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_189 = {{1'd0}, parsedindexvalue1_first_stage_14}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_194 = _GEN_189 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue1_calculation_28 = _GEN_194[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_1092 = parsedindexvalue1_calculation_28 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_1093 = ~parsedindexvalue1_boolArray_14_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_1094 = parsedindexvalue1_calculation_28 == 2'h0 & ~
    parsedindexvalue1_boolArray_14_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_1095 = parsedindexvalue1_calculation_28 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue1_nextIndex_T_1097 = parsedindexvalue1_calculation_28 == 2'h1 &
    _parsedindexvalue1_nextIndex_T_1093; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue1_nextIndex_T_1098 = parsedindexvalue1_calculation_28 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_1100 = parsedindexvalue1_calculation_28 == 2'h2 &
    _parsedindexvalue1_nextIndex_T_1093; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_1101 = parsedindexvalue1_calculation_28 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_1103 = parsedindexvalue1_calculation_28 == 2'h3 &
    _parsedindexvalue1_nextIndex_T_1093; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_1106 = _parsedindexvalue1_nextIndex_T_1092 & parsedindexvalue1_boolArray_14_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1108 = parsedindexvalue1_first_stage_14 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_1111 = _parsedindexvalue1_nextIndex_T_1095 & parsedindexvalue1_boolArray_14_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_1116 = _parsedindexvalue1_nextIndex_T_1098 & parsedindexvalue1_boolArray_14_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1118 = parsedindexvalue1_first_stage_14 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_1121 = _parsedindexvalue1_nextIndex_T_1101 & parsedindexvalue1_boolArray_14_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1124 = _parsedindexvalue1_nextIndex_T_1121 ?
    _parsedindexvalue1_nextIndex_T_1118 : parsedindexvalue1_first_stage_14; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1125 = _parsedindexvalue1_nextIndex_T_1116 ?
    _parsedindexvalue1_nextIndex_T_1118 : _parsedindexvalue1_nextIndex_T_1124; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1126 = _parsedindexvalue1_nextIndex_T_1111 ?
    _parsedindexvalue1_nextIndex_T_1108 : _parsedindexvalue1_nextIndex_T_1125; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1127 = _parsedindexvalue1_nextIndex_T_1106 ?
    _parsedindexvalue1_nextIndex_T_1108 : _parsedindexvalue1_nextIndex_T_1126; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1128 = _parsedindexvalue1_nextIndex_T_1103 ?
    parsedindexvalue1_first_stage_14 : _parsedindexvalue1_nextIndex_T_1127; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1129 = _parsedindexvalue1_nextIndex_T_1100 ?
    parsedindexvalue1_first_stage_14 : _parsedindexvalue1_nextIndex_T_1128; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1130 = _parsedindexvalue1_nextIndex_T_1097 ?
    parsedindexvalue1_first_stage_14 : _parsedindexvalue1_nextIndex_T_1129; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_28 = _parsedindexvalue1_nextIndex_T_1094 ? parsedindexvalue1_first_stage_14 :
    _parsedindexvalue1_nextIndex_T_1130; // @[Mux.scala 101:16]
  wire [2:0] _GEN_199 = {{1'd0}, parsedindexvalue1_nextIndex_28}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_204 = _GEN_199 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue1_calculation_29 = _GEN_204[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_1131 = parsedindexvalue1_calculation_29 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_1132 = ~parsedindexvalue1_boolArray_14_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_1133 = parsedindexvalue1_calculation_29 == 2'h0 & ~
    parsedindexvalue1_boolArray_14_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_1134 = parsedindexvalue1_calculation_29 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue1_nextIndex_T_1136 = parsedindexvalue1_calculation_29 == 2'h1 &
    _parsedindexvalue1_nextIndex_T_1132; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue1_nextIndex_T_1137 = parsedindexvalue1_calculation_29 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_1139 = parsedindexvalue1_calculation_29 == 2'h2 &
    _parsedindexvalue1_nextIndex_T_1132; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_1140 = parsedindexvalue1_calculation_29 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_1142 = parsedindexvalue1_calculation_29 == 2'h3 &
    _parsedindexvalue1_nextIndex_T_1132; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_1145 = _parsedindexvalue1_nextIndex_T_1131 & parsedindexvalue1_boolArray_14_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1147 = parsedindexvalue1_nextIndex_28 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_1150 = _parsedindexvalue1_nextIndex_T_1134 & parsedindexvalue1_boolArray_14_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_1155 = _parsedindexvalue1_nextIndex_T_1137 & parsedindexvalue1_boolArray_14_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1157 = parsedindexvalue1_nextIndex_28 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_1160 = _parsedindexvalue1_nextIndex_T_1140 & parsedindexvalue1_boolArray_14_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1163 = _parsedindexvalue1_nextIndex_T_1160 ?
    _parsedindexvalue1_nextIndex_T_1157 : parsedindexvalue1_nextIndex_28; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1164 = _parsedindexvalue1_nextIndex_T_1155 ?
    _parsedindexvalue1_nextIndex_T_1157 : _parsedindexvalue1_nextIndex_T_1163; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1165 = _parsedindexvalue1_nextIndex_T_1150 ?
    _parsedindexvalue1_nextIndex_T_1147 : _parsedindexvalue1_nextIndex_T_1164; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1166 = _parsedindexvalue1_nextIndex_T_1145 ?
    _parsedindexvalue1_nextIndex_T_1147 : _parsedindexvalue1_nextIndex_T_1165; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1167 = _parsedindexvalue1_nextIndex_T_1142 ? parsedindexvalue1_nextIndex_28
     : _parsedindexvalue1_nextIndex_T_1166; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1168 = _parsedindexvalue1_nextIndex_T_1139 ? parsedindexvalue1_nextIndex_28
     : _parsedindexvalue1_nextIndex_T_1167; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1169 = _parsedindexvalue1_nextIndex_T_1136 ? parsedindexvalue1_nextIndex_28
     : _parsedindexvalue1_nextIndex_T_1168; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_29 = _parsedindexvalue1_nextIndex_T_1133 ? parsedindexvalue1_nextIndex_28 :
    _parsedindexvalue1_nextIndex_T_1169; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_third_stage_T_113 = parsedindexvalue1_nextIndex_29 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue1_third_stage_T_116 = parsedindexvalue1_nextIndex_29 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue1_third_stage_T_118 = parsedindexvalue1_nextIndex_29 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue1_third_stage_T_119 = _parsedindexvalue1_third_stage_T_113 == 2'h0 ?
    _parsedindexvalue1_third_stage_T_116 : _parsedindexvalue1_third_stage_T_118; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue1_14 = io_i_mux_bus_2_1[3] ? _parsedindexvalue1_third_stage_T_119 :
    parsedindexvalue1_nextIndex_29; // @[Benes3.scala 49:24]
  wire [2:0] _T_287 = {{1'd0}, parsedindexvalue1_14};
  wire [15:0] _GEN_355 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_350; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_356 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_351; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_357 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_352; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_358 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_353; // @[Benes3.scala 74:{44,44}]
  wire [1:0] parsedindexvalue2_first_stage_12 = io_i_mux_bus_2_2[0] ? 2'h3 : 2'h2; // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray_12_0 = io_i_mux_bus_2_2[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray_12_1 = io_i_mux_bus_2_2[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_209 = {{1'd0}, parsedindexvalue2_first_stage_12}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_214 = _GEN_209 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_24 = _GEN_214[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_936 = parsedindexvalue2_calculation_24 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_937 = ~parsedindexvalue2_boolArray_12_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_938 = parsedindexvalue2_calculation_24 == 2'h0 & ~
    parsedindexvalue2_boolArray_12_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_939 = parsedindexvalue2_calculation_24 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_941 = parsedindexvalue2_calculation_24 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_937; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_942 = parsedindexvalue2_calculation_24 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_944 = parsedindexvalue2_calculation_24 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_937; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_945 = parsedindexvalue2_calculation_24 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_947 = parsedindexvalue2_calculation_24 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_937; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_950 = _parsedindexvalue2_nextIndex_T_936 & parsedindexvalue2_boolArray_12_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_952 = parsedindexvalue2_first_stage_12 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_955 = _parsedindexvalue2_nextIndex_T_939 & parsedindexvalue2_boolArray_12_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_960 = _parsedindexvalue2_nextIndex_T_942 & parsedindexvalue2_boolArray_12_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_962 = parsedindexvalue2_first_stage_12 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_965 = _parsedindexvalue2_nextIndex_T_945 & parsedindexvalue2_boolArray_12_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_968 = _parsedindexvalue2_nextIndex_T_965 ?
    _parsedindexvalue2_nextIndex_T_962 : parsedindexvalue2_first_stage_12; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_969 = _parsedindexvalue2_nextIndex_T_960 ?
    _parsedindexvalue2_nextIndex_T_962 : _parsedindexvalue2_nextIndex_T_968; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_970 = _parsedindexvalue2_nextIndex_T_955 ?
    _parsedindexvalue2_nextIndex_T_952 : _parsedindexvalue2_nextIndex_T_969; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_971 = _parsedindexvalue2_nextIndex_T_950 ?
    _parsedindexvalue2_nextIndex_T_952 : _parsedindexvalue2_nextIndex_T_970; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_972 = _parsedindexvalue2_nextIndex_T_947 ? parsedindexvalue2_first_stage_12
     : _parsedindexvalue2_nextIndex_T_971; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_973 = _parsedindexvalue2_nextIndex_T_944 ? parsedindexvalue2_first_stage_12
     : _parsedindexvalue2_nextIndex_T_972; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_974 = _parsedindexvalue2_nextIndex_T_941 ? parsedindexvalue2_first_stage_12
     : _parsedindexvalue2_nextIndex_T_973; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_24 = _parsedindexvalue2_nextIndex_T_938 ? parsedindexvalue2_first_stage_12 :
    _parsedindexvalue2_nextIndex_T_974; // @[Mux.scala 101:16]
  wire [2:0] _GEN_219 = {{1'd0}, parsedindexvalue2_nextIndex_24}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_224 = _GEN_219 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_25 = _GEN_224[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_975 = parsedindexvalue2_calculation_25 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_976 = ~parsedindexvalue2_boolArray_12_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_977 = parsedindexvalue2_calculation_25 == 2'h0 & ~
    parsedindexvalue2_boolArray_12_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_978 = parsedindexvalue2_calculation_25 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_980 = parsedindexvalue2_calculation_25 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_976; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_981 = parsedindexvalue2_calculation_25 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_983 = parsedindexvalue2_calculation_25 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_976; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_984 = parsedindexvalue2_calculation_25 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_986 = parsedindexvalue2_calculation_25 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_976; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_989 = _parsedindexvalue2_nextIndex_T_975 & parsedindexvalue2_boolArray_12_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_991 = parsedindexvalue2_nextIndex_24 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_994 = _parsedindexvalue2_nextIndex_T_978 & parsedindexvalue2_boolArray_12_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_999 = _parsedindexvalue2_nextIndex_T_981 & parsedindexvalue2_boolArray_12_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1001 = parsedindexvalue2_nextIndex_24 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_1004 = _parsedindexvalue2_nextIndex_T_984 & parsedindexvalue2_boolArray_12_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1007 = _parsedindexvalue2_nextIndex_T_1004 ?
    _parsedindexvalue2_nextIndex_T_1001 : parsedindexvalue2_nextIndex_24; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1008 = _parsedindexvalue2_nextIndex_T_999 ?
    _parsedindexvalue2_nextIndex_T_1001 : _parsedindexvalue2_nextIndex_T_1007; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1009 = _parsedindexvalue2_nextIndex_T_994 ?
    _parsedindexvalue2_nextIndex_T_991 : _parsedindexvalue2_nextIndex_T_1008; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1010 = _parsedindexvalue2_nextIndex_T_989 ?
    _parsedindexvalue2_nextIndex_T_991 : _parsedindexvalue2_nextIndex_T_1009; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1011 = _parsedindexvalue2_nextIndex_T_986 ? parsedindexvalue2_nextIndex_24
     : _parsedindexvalue2_nextIndex_T_1010; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1012 = _parsedindexvalue2_nextIndex_T_983 ? parsedindexvalue2_nextIndex_24
     : _parsedindexvalue2_nextIndex_T_1011; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1013 = _parsedindexvalue2_nextIndex_T_980 ? parsedindexvalue2_nextIndex_24
     : _parsedindexvalue2_nextIndex_T_1012; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_25 = _parsedindexvalue2_nextIndex_T_977 ? parsedindexvalue2_nextIndex_24 :
    _parsedindexvalue2_nextIndex_T_1013; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_third_stage_T_97 = parsedindexvalue2_nextIndex_25 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue2_third_stage_T_100 = parsedindexvalue2_nextIndex_25 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue2_third_stage_T_102 = parsedindexvalue2_nextIndex_25 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue2_third_stage_T_103 = _parsedindexvalue2_third_stage_T_97 == 2'h0 ?
    _parsedindexvalue2_third_stage_T_100 : _parsedindexvalue2_third_stage_T_102; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue2_12 = io_i_mux_bus_2_2[3] ? _parsedindexvalue2_third_stage_T_103 :
    parsedindexvalue2_nextIndex_25; // @[Benes3.scala 49:24]
  wire [2:0] _T_289 = {{1'd0}, parsedindexvalue2_12};
  wire [15:0] _GEN_360 = 3'h0 == _T_289 ? io_i_data_bus2_2 : _GEN_355; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_361 = 3'h1 == _T_289 ? io_i_data_bus2_2 : _GEN_356; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_362 = 3'h2 == _T_289 ? io_i_data_bus2_2 : _GEN_357; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_363 = 3'h3 == _T_289 ? io_i_data_bus2_2 : _GEN_358; // @[Benes3.scala 76:{44,44}]
  wire [1:0] parsedindexvalue3_first_stage_8 = io_i_mux_bus_2_3[0] ? 2'h3 : 2'h2; // @[Benes3.scala 25:26]
  wire  parsedindexvalue3_boolArray_8_0 = io_i_mux_bus_2_3[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue3_boolArray_8_1 = io_i_mux_bus_2_3[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_229 = {{1'd0}, parsedindexvalue3_first_stage_8}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_234 = _GEN_229 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_16 = _GEN_234[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_624 = parsedindexvalue3_calculation_16 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_625 = ~parsedindexvalue3_boolArray_8_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_626 = parsedindexvalue3_calculation_16 == 2'h0 & ~parsedindexvalue3_boolArray_8_0
    ; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_627 = parsedindexvalue3_calculation_16 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_629 = parsedindexvalue3_calculation_16 == 2'h1 &
    _parsedindexvalue3_nextIndex_T_625; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_630 = parsedindexvalue3_calculation_16 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_632 = parsedindexvalue3_calculation_16 == 2'h2 &
    _parsedindexvalue3_nextIndex_T_625; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_633 = parsedindexvalue3_calculation_16 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_635 = parsedindexvalue3_calculation_16 == 2'h3 &
    _parsedindexvalue3_nextIndex_T_625; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_638 = _parsedindexvalue3_nextIndex_T_624 & parsedindexvalue3_boolArray_8_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_640 = parsedindexvalue3_first_stage_8 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_643 = _parsedindexvalue3_nextIndex_T_627 & parsedindexvalue3_boolArray_8_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_648 = _parsedindexvalue3_nextIndex_T_630 & parsedindexvalue3_boolArray_8_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_650 = parsedindexvalue3_first_stage_8 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_653 = _parsedindexvalue3_nextIndex_T_633 & parsedindexvalue3_boolArray_8_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_656 = _parsedindexvalue3_nextIndex_T_653 ?
    _parsedindexvalue3_nextIndex_T_650 : parsedindexvalue3_first_stage_8; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_657 = _parsedindexvalue3_nextIndex_T_648 ?
    _parsedindexvalue3_nextIndex_T_650 : _parsedindexvalue3_nextIndex_T_656; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_658 = _parsedindexvalue3_nextIndex_T_643 ?
    _parsedindexvalue3_nextIndex_T_640 : _parsedindexvalue3_nextIndex_T_657; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_659 = _parsedindexvalue3_nextIndex_T_638 ?
    _parsedindexvalue3_nextIndex_T_640 : _parsedindexvalue3_nextIndex_T_658; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_660 = _parsedindexvalue3_nextIndex_T_635 ? parsedindexvalue3_first_stage_8
     : _parsedindexvalue3_nextIndex_T_659; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_661 = _parsedindexvalue3_nextIndex_T_632 ? parsedindexvalue3_first_stage_8
     : _parsedindexvalue3_nextIndex_T_660; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_662 = _parsedindexvalue3_nextIndex_T_629 ? parsedindexvalue3_first_stage_8
     : _parsedindexvalue3_nextIndex_T_661; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_16 = _parsedindexvalue3_nextIndex_T_626 ? parsedindexvalue3_first_stage_8 :
    _parsedindexvalue3_nextIndex_T_662; // @[Mux.scala 101:16]
  wire [2:0] _GEN_239 = {{1'd0}, parsedindexvalue3_nextIndex_16}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_244 = _GEN_239 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_17 = _GEN_244[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_663 = parsedindexvalue3_calculation_17 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_664 = ~parsedindexvalue3_boolArray_8_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_665 = parsedindexvalue3_calculation_17 == 2'h0 & ~parsedindexvalue3_boolArray_8_1
    ; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_666 = parsedindexvalue3_calculation_17 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_668 = parsedindexvalue3_calculation_17 == 2'h1 &
    _parsedindexvalue3_nextIndex_T_664; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_669 = parsedindexvalue3_calculation_17 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_671 = parsedindexvalue3_calculation_17 == 2'h2 &
    _parsedindexvalue3_nextIndex_T_664; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_672 = parsedindexvalue3_calculation_17 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_674 = parsedindexvalue3_calculation_17 == 2'h3 &
    _parsedindexvalue3_nextIndex_T_664; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_677 = _parsedindexvalue3_nextIndex_T_663 & parsedindexvalue3_boolArray_8_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_679 = parsedindexvalue3_nextIndex_16 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_682 = _parsedindexvalue3_nextIndex_T_666 & parsedindexvalue3_boolArray_8_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_687 = _parsedindexvalue3_nextIndex_T_669 & parsedindexvalue3_boolArray_8_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_689 = parsedindexvalue3_nextIndex_16 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_692 = _parsedindexvalue3_nextIndex_T_672 & parsedindexvalue3_boolArray_8_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_695 = _parsedindexvalue3_nextIndex_T_692 ?
    _parsedindexvalue3_nextIndex_T_689 : parsedindexvalue3_nextIndex_16; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_696 = _parsedindexvalue3_nextIndex_T_687 ?
    _parsedindexvalue3_nextIndex_T_689 : _parsedindexvalue3_nextIndex_T_695; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_697 = _parsedindexvalue3_nextIndex_T_682 ?
    _parsedindexvalue3_nextIndex_T_679 : _parsedindexvalue3_nextIndex_T_696; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_698 = _parsedindexvalue3_nextIndex_T_677 ?
    _parsedindexvalue3_nextIndex_T_679 : _parsedindexvalue3_nextIndex_T_697; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_699 = _parsedindexvalue3_nextIndex_T_674 ? parsedindexvalue3_nextIndex_16 :
    _parsedindexvalue3_nextIndex_T_698; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_700 = _parsedindexvalue3_nextIndex_T_671 ? parsedindexvalue3_nextIndex_16 :
    _parsedindexvalue3_nextIndex_T_699; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_701 = _parsedindexvalue3_nextIndex_T_668 ? parsedindexvalue3_nextIndex_16 :
    _parsedindexvalue3_nextIndex_T_700; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_17 = _parsedindexvalue3_nextIndex_T_665 ? parsedindexvalue3_nextIndex_16 :
    _parsedindexvalue3_nextIndex_T_701; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_third_stage_T_65 = parsedindexvalue3_nextIndex_17 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue3_third_stage_T_68 = parsedindexvalue3_nextIndex_17 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue3_third_stage_T_70 = parsedindexvalue3_nextIndex_17 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue3_third_stage_T_71 = _parsedindexvalue3_third_stage_T_65 == 2'h0 ?
    _parsedindexvalue3_third_stage_T_68 : _parsedindexvalue3_third_stage_T_70; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue3_8 = io_i_mux_bus_2_3[3] ? _parsedindexvalue3_third_stage_T_71 :
    parsedindexvalue3_nextIndex_17; // @[Benes3.scala 49:24]
  wire [2:0] _T_291 = {{1'd0}, parsedindexvalue3_8};
  wire [15:0] _GEN_365 = 3'h0 == _T_291 ? io_i_data_bus2_2 : _GEN_360; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_366 = 3'h1 == _T_291 ? io_i_data_bus2_2 : _GEN_361; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_367 = 3'h2 == _T_291 ? io_i_data_bus2_2 : _GEN_362; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_368 = 3'h3 == _T_291 ? io_i_data_bus2_2 : _GEN_363; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_370 = _T_262 & _T_263 & _T_266 & _T_269 ? _GEN_365 : _GEN_345; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_371 = _T_262 & _T_263 & _T_266 & _T_269 ? _GEN_366 : _GEN_346; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_372 = _T_262 & _T_263 & _T_266 & _T_269 ? _GEN_367 : _GEN_347; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_373 = _T_262 & _T_263 & _T_266 & _T_269 ? _GEN_368 : _GEN_348; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_375 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_370; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_376 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_371; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_377 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_372; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_378 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_373; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_380 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_375; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_381 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_376; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_382 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_377; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_383 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_378; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_385 = 3'h0 == _T_289 ? io_i_data_bus2_2 : _GEN_380; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_386 = 3'h1 == _T_289 ? io_i_data_bus2_2 : _GEN_381; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_387 = 3'h2 == _T_289 ? io_i_data_bus2_2 : _GEN_382; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_388 = 3'h3 == _T_289 ? io_i_data_bus2_2 : _GEN_383; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_390 = _T_281 & _T_270 ? _GEN_385 : _GEN_370; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_391 = _T_281 & _T_270 ? _GEN_386 : _GEN_371; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_392 = _T_281 & _T_270 ? _GEN_387 : _GEN_372; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_393 = _T_281 & _T_270 ? _GEN_388 : _GEN_373; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_395 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_390; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_396 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_391; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_397 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_392; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_398 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_393; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_400 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_395; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_401 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_396; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_402 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_397; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_403 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_398; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_405 = _T_278 & _T_267 & _T_270 ? _GEN_400 : _GEN_390; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_406 = _T_278 & _T_267 & _T_270 ? _GEN_401 : _GEN_391; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_407 = _T_278 & _T_267 & _T_270 ? _GEN_402 : _GEN_392; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_408 = _T_278 & _T_267 & _T_270 ? _GEN_403 : _GEN_393; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_410 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_405; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_411 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_406; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_412 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_407; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_413 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_408; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_415 = _T_261 ? _GEN_410 : _GEN_405; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_416 = _T_261 ? _GEN_411 : _GEN_406; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_417 = _T_261 ? _GEN_412 : _GEN_407; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_418 = _T_261 ? _GEN_413 : _GEN_408; // @[Benes3.scala 102:48]
  wire  _T_333 = _T_261 & _T_263; // @[Benes3.scala 120:48]
  wire [15:0] _GEN_420 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_415; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_421 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_416; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_422 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_417; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_423 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_418; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_425 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_420; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_426 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_421; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_427 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_422; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_428 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_423; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_430 = _T_261 & _T_263 ? _GEN_425 : _GEN_415; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_431 = _T_261 & _T_263 ? _GEN_426 : _GEN_416; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_432 = _T_261 & _T_263 ? _GEN_427 : _GEN_417; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_433 = _T_261 & _T_263 ? _GEN_428 : _GEN_418; // @[Benes3.scala 120:84]
  wire  _T_345 = _T_333 & _T_266; // @[Benes3.scala 142:84]
  wire [15:0] _GEN_435 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_430; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_436 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_431; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_437 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_432; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_438 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_433; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_440 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_435; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_441 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_436; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_442 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_437; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_443 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_438; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_445 = 3'h0 == _T_289 ? io_i_data_bus2_2 : _GEN_440; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_446 = 3'h1 == _T_289 ? io_i_data_bus2_2 : _GEN_441; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_447 = 3'h2 == _T_289 ? io_i_data_bus2_2 : _GEN_442; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_448 = 3'h3 == _T_289 ? io_i_data_bus2_2 : _GEN_443; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_450 = _T_333 & _T_266 ? _GEN_445 : _GEN_430; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_451 = _T_333 & _T_266 ? _GEN_446 : _GEN_431; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_452 = _T_333 & _T_266 ? _GEN_447 : _GEN_432; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_453 = _T_333 & _T_266 ? _GEN_448 : _GEN_433; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_455 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_450; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_456 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_451; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_457 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_452; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_458 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_453; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_460 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_455; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_461 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_456; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_462 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_457; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_463 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_458; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_465 = 3'h0 == _T_289 ? io_i_data_bus2_2 : _GEN_460; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_466 = 3'h1 == _T_289 ? io_i_data_bus2_2 : _GEN_461; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_467 = 3'h2 == _T_289 ? io_i_data_bus2_2 : _GEN_462; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_468 = 3'h3 == _T_289 ? io_i_data_bus2_2 : _GEN_463; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_470 = 3'h0 == _T_291 ? io_i_data_bus2_2 : _GEN_465; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_471 = 3'h1 == _T_291 ? io_i_data_bus2_2 : _GEN_466; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_472 = 3'h2 == _T_291 ? io_i_data_bus2_2 : _GEN_467; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_473 = 3'h3 == _T_291 ? io_i_data_bus2_2 : _GEN_468; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_475 = _T_345 & _T_269 ? _GEN_470 : _GEN_450; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_476 = _T_345 & _T_269 ? _GEN_471 : _GEN_451; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_477 = _T_345 & _T_269 ? _GEN_472 : _GEN_452; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_478 = _T_345 & _T_269 ? _GEN_473 : _GEN_453; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_480 = 3'h0 == _T_272 ? io_i_data_bus2_2 : _GEN_475; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_481 = 3'h1 == _T_272 ? io_i_data_bus2_2 : _GEN_476; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_482 = 3'h2 == _T_272 ? io_i_data_bus2_2 : _GEN_477; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_483 = 3'h3 == _T_272 ? io_i_data_bus2_2 : _GEN_478; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_485 = 3'h0 == _T_287 ? io_i_data_bus2_2 : _GEN_480; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_486 = 3'h1 == _T_287 ? io_i_data_bus2_2 : _GEN_481; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_487 = 3'h2 == _T_287 ? io_i_data_bus2_2 : _GEN_482; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_488 = 3'h3 == _T_287 ? io_i_data_bus2_2 : _GEN_483; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_490 = 3'h0 == _T_289 ? io_i_data_bus2_2 : _GEN_485; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_491 = 3'h1 == _T_289 ? io_i_data_bus2_2 : _GEN_486; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_492 = 3'h2 == _T_289 ? io_i_data_bus2_2 : _GEN_487; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_493 = 3'h3 == _T_289 ? io_i_data_bus2_2 : _GEN_488; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_495 = 3'h0 == _T_291 ? io_i_data_bus2_2 : _GEN_490; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_496 = 3'h1 == _T_291 ? io_i_data_bus2_2 : _GEN_491; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_497 = 3'h2 == _T_291 ? io_i_data_bus2_2 : _GEN_492; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_498 = 3'h3 == _T_291 ? io_i_data_bus2_2 : _GEN_493; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_500 = _T_284 ? _GEN_495 : _GEN_475; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_501 = _T_284 ? _GEN_496 : _GEN_476; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_502 = _T_284 ? _GEN_497 : _GEN_477; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_503 = _T_284 ? _GEN_498 : _GEN_478; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_505 = io_i_data_bus2_2 != 16'h0 ? _GEN_500 : _GEN_335; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_506 = io_i_data_bus2_2 != 16'h0 ? _GEN_501 : _GEN_336; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_507 = io_i_data_bus2_2 != 16'h0 ? _GEN_502 : _GEN_337; // @[Benes3.scala 62:39]
  wire [15:0] _GEN_508 = io_i_data_bus2_2 != 16'h0 ? _GEN_503 : _GEN_338; // @[Benes3.scala 62:39]
  wire  _T_391 = |io_i_mux_bus_3_0; // @[Benes3.scala 64:35]
  wire  _T_392 = ~(|io_i_mux_bus_3_0); // @[Benes3.scala 64:39]
  wire  _T_393 = |io_i_mux_bus_3_1; // @[Benes3.scala 64:71]
  wire  _T_396 = |io_i_mux_bus_3_2; // @[Benes3.scala 64:107]
  wire  _T_397 = ~(|io_i_mux_bus_3_2); // @[Benes3.scala 64:111]
  wire  _T_399 = |io_i_mux_bus_3_3; // @[Benes3.scala 64:143]
  wire  _T_400 = ~(|io_i_mux_bus_3_3); // @[Benes3.scala 64:147]
  wire [1:0] _parsedindexvalue_first_stage_T_121 = 2'h3 % 2'h2; // @[Benes3.scala 25:52]
  wire [1:0] _parsedindexvalue_first_stage_T_126 = 2'h3 - 2'h1; // @[Benes3.scala 25:96]
  wire [1:0] _parsedindexvalue_first_stage_T_127 = _parsedindexvalue_first_stage_T_121 == 2'h0 ? 2'h0 :
    _parsedindexvalue_first_stage_T_126; // @[Benes3.scala 25:40]
  wire [1:0] parsedindexvalue_first_stage_15 = io_i_mux_bus_3_0[0] ? _parsedindexvalue_first_stage_T_127 : 2'h3; // @[Benes3.scala 25:26]
  wire  parsedindexvalue_boolArray_15_0 = io_i_mux_bus_3_0[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue_boolArray_15_1 = io_i_mux_bus_3_0[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_249 = {{1'd0}, parsedindexvalue_first_stage_15}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_254 = _GEN_249 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_30 = _GEN_254[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_1170 = parsedindexvalue_calculation_30 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_1171 = ~parsedindexvalue_boolArray_15_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_1172 = parsedindexvalue_calculation_30 == 2'h0 & ~parsedindexvalue_boolArray_15_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_1173 = parsedindexvalue_calculation_30 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_1175 = parsedindexvalue_calculation_30 == 2'h1 &
    _parsedindexvalue_nextIndex_T_1171; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_1176 = parsedindexvalue_calculation_30 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_1178 = parsedindexvalue_calculation_30 == 2'h2 &
    _parsedindexvalue_nextIndex_T_1171; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_1179 = parsedindexvalue_calculation_30 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_1181 = parsedindexvalue_calculation_30 == 2'h3 &
    _parsedindexvalue_nextIndex_T_1171; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_1184 = _parsedindexvalue_nextIndex_T_1170 & parsedindexvalue_boolArray_15_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_1186 = parsedindexvalue_first_stage_15 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_1189 = _parsedindexvalue_nextIndex_T_1173 & parsedindexvalue_boolArray_15_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_1194 = _parsedindexvalue_nextIndex_T_1176 & parsedindexvalue_boolArray_15_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_1196 = parsedindexvalue_first_stage_15 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_1199 = _parsedindexvalue_nextIndex_T_1179 & parsedindexvalue_boolArray_15_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_1202 = _parsedindexvalue_nextIndex_T_1199 ?
    _parsedindexvalue_nextIndex_T_1196 : parsedindexvalue_first_stage_15; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1203 = _parsedindexvalue_nextIndex_T_1194 ?
    _parsedindexvalue_nextIndex_T_1196 : _parsedindexvalue_nextIndex_T_1202; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1204 = _parsedindexvalue_nextIndex_T_1189 ?
    _parsedindexvalue_nextIndex_T_1186 : _parsedindexvalue_nextIndex_T_1203; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1205 = _parsedindexvalue_nextIndex_T_1184 ?
    _parsedindexvalue_nextIndex_T_1186 : _parsedindexvalue_nextIndex_T_1204; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1206 = _parsedindexvalue_nextIndex_T_1181 ? parsedindexvalue_first_stage_15
     : _parsedindexvalue_nextIndex_T_1205; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1207 = _parsedindexvalue_nextIndex_T_1178 ? parsedindexvalue_first_stage_15
     : _parsedindexvalue_nextIndex_T_1206; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1208 = _parsedindexvalue_nextIndex_T_1175 ? parsedindexvalue_first_stage_15
     : _parsedindexvalue_nextIndex_T_1207; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_30 = _parsedindexvalue_nextIndex_T_1172 ? parsedindexvalue_first_stage_15 :
    _parsedindexvalue_nextIndex_T_1208; // @[Mux.scala 101:16]
  wire [2:0] _GEN_259 = {{1'd0}, parsedindexvalue_nextIndex_30}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_264 = _GEN_259 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue_calculation_31 = _GEN_264[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue_nextIndex_T_1209 = parsedindexvalue_calculation_31 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue_nextIndex_T_1210 = ~parsedindexvalue_boolArray_15_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue_nextIndex_T_1211 = parsedindexvalue_calculation_31 == 2'h0 & ~parsedindexvalue_boolArray_15_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue_nextIndex_T_1212 = parsedindexvalue_calculation_31 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue_nextIndex_T_1214 = parsedindexvalue_calculation_31 == 2'h1 &
    _parsedindexvalue_nextIndex_T_1210; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue_nextIndex_T_1215 = parsedindexvalue_calculation_31 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue_nextIndex_T_1217 = parsedindexvalue_calculation_31 == 2'h2 &
    _parsedindexvalue_nextIndex_T_1210; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue_nextIndex_T_1218 = parsedindexvalue_calculation_31 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue_nextIndex_T_1220 = parsedindexvalue_calculation_31 == 2'h3 &
    _parsedindexvalue_nextIndex_T_1210; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue_nextIndex_T_1223 = _parsedindexvalue_nextIndex_T_1209 & parsedindexvalue_boolArray_15_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_1225 = parsedindexvalue_nextIndex_30 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue_nextIndex_T_1228 = _parsedindexvalue_nextIndex_T_1212 & parsedindexvalue_boolArray_15_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue_nextIndex_T_1233 = _parsedindexvalue_nextIndex_T_1215 & parsedindexvalue_boolArray_15_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_1235 = parsedindexvalue_nextIndex_30 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue_nextIndex_T_1238 = _parsedindexvalue_nextIndex_T_1218 & parsedindexvalue_boolArray_15_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue_nextIndex_T_1241 = _parsedindexvalue_nextIndex_T_1238 ?
    _parsedindexvalue_nextIndex_T_1235 : parsedindexvalue_nextIndex_30; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1242 = _parsedindexvalue_nextIndex_T_1233 ?
    _parsedindexvalue_nextIndex_T_1235 : _parsedindexvalue_nextIndex_T_1241; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1243 = _parsedindexvalue_nextIndex_T_1228 ?
    _parsedindexvalue_nextIndex_T_1225 : _parsedindexvalue_nextIndex_T_1242; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1244 = _parsedindexvalue_nextIndex_T_1223 ?
    _parsedindexvalue_nextIndex_T_1225 : _parsedindexvalue_nextIndex_T_1243; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1245 = _parsedindexvalue_nextIndex_T_1220 ? parsedindexvalue_nextIndex_30 :
    _parsedindexvalue_nextIndex_T_1244; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1246 = _parsedindexvalue_nextIndex_T_1217 ? parsedindexvalue_nextIndex_30 :
    _parsedindexvalue_nextIndex_T_1245; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_nextIndex_T_1247 = _parsedindexvalue_nextIndex_T_1214 ? parsedindexvalue_nextIndex_30 :
    _parsedindexvalue_nextIndex_T_1246; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue_nextIndex_31 = _parsedindexvalue_nextIndex_T_1211 ? parsedindexvalue_nextIndex_30 :
    _parsedindexvalue_nextIndex_T_1247; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue_third_stage_T_121 = parsedindexvalue_nextIndex_31 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue_third_stage_T_124 = parsedindexvalue_nextIndex_31 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue_third_stage_T_126 = parsedindexvalue_nextIndex_31 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue_third_stage_T_127 = _parsedindexvalue_third_stage_T_121 == 2'h0 ?
    _parsedindexvalue_third_stage_T_124 : _parsedindexvalue_third_stage_T_126; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue_15 = io_i_mux_bus_3_0[3] ? _parsedindexvalue_third_stage_T_127 :
    parsedindexvalue_nextIndex_31; // @[Benes3.scala 49:24]
  wire [2:0] _T_402 = {{1'd0}, parsedindexvalue_15};
  wire [15:0] _GEN_510 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_505; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_511 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_506; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_512 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_507; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_513 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_508; // @[Benes3.scala 67:{47,47}]
  wire [15:0] _GEN_515 = ~(|io_i_mux_bus_3_0) & ~(|io_i_mux_bus_3_1) & ~(|io_i_mux_bus_3_2) & ~(|io_i_mux_bus_3_3) ?
    _GEN_510 : _GEN_505; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_516 = ~(|io_i_mux_bus_3_0) & ~(|io_i_mux_bus_3_1) & ~(|io_i_mux_bus_3_2) & ~(|io_i_mux_bus_3_3) ?
    _GEN_511 : _GEN_506; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_517 = ~(|io_i_mux_bus_3_0) & ~(|io_i_mux_bus_3_1) & ~(|io_i_mux_bus_3_2) & ~(|io_i_mux_bus_3_3) ?
    _GEN_512 : _GEN_507; // @[Benes3.scala 64:156]
  wire [15:0] _GEN_518 = ~(|io_i_mux_bus_3_0) & ~(|io_i_mux_bus_3_1) & ~(|io_i_mux_bus_3_2) & ~(|io_i_mux_bus_3_3) ?
    _GEN_513 : _GEN_508; // @[Benes3.scala 64:156]
  wire  _T_408 = _T_392 & _T_393; // @[Benes3.scala 70:48]
  wire  _T_411 = _T_392 & _T_393 & _T_396; // @[Benes3.scala 70:84]
  wire  _T_414 = _T_392 & _T_393 & _T_396 & _T_399; // @[Benes3.scala 70:120]
  wire [15:0] _GEN_520 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_515; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_521 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_516; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_522 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_517; // @[Benes3.scala 72:{43,43}]
  wire [15:0] _GEN_523 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_518; // @[Benes3.scala 72:{43,43}]
  wire [1:0] parsedindexvalue1_first_stage_21 = io_i_mux_bus_3_1[0] ? _parsedindexvalue_first_stage_T_127 : 2'h3; // @[Benes3.scala 25:26]
  wire  parsedindexvalue1_boolArray_21_0 = io_i_mux_bus_3_1[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue1_boolArray_21_1 = io_i_mux_bus_3_1[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_269 = {{1'd0}, parsedindexvalue1_first_stage_21}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_274 = _GEN_269 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue1_calculation_42 = _GEN_274[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_1638 = parsedindexvalue1_calculation_42 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_1639 = ~parsedindexvalue1_boolArray_21_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_1640 = parsedindexvalue1_calculation_42 == 2'h0 & ~
    parsedindexvalue1_boolArray_21_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_1641 = parsedindexvalue1_calculation_42 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue1_nextIndex_T_1643 = parsedindexvalue1_calculation_42 == 2'h1 &
    _parsedindexvalue1_nextIndex_T_1639; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue1_nextIndex_T_1644 = parsedindexvalue1_calculation_42 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_1646 = parsedindexvalue1_calculation_42 == 2'h2 &
    _parsedindexvalue1_nextIndex_T_1639; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_1647 = parsedindexvalue1_calculation_42 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_1649 = parsedindexvalue1_calculation_42 == 2'h3 &
    _parsedindexvalue1_nextIndex_T_1639; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_1652 = _parsedindexvalue1_nextIndex_T_1638 & parsedindexvalue1_boolArray_21_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1654 = parsedindexvalue1_first_stage_21 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_1657 = _parsedindexvalue1_nextIndex_T_1641 & parsedindexvalue1_boolArray_21_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_1662 = _parsedindexvalue1_nextIndex_T_1644 & parsedindexvalue1_boolArray_21_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1664 = parsedindexvalue1_first_stage_21 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_1667 = _parsedindexvalue1_nextIndex_T_1647 & parsedindexvalue1_boolArray_21_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1670 = _parsedindexvalue1_nextIndex_T_1667 ?
    _parsedindexvalue1_nextIndex_T_1664 : parsedindexvalue1_first_stage_21; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1671 = _parsedindexvalue1_nextIndex_T_1662 ?
    _parsedindexvalue1_nextIndex_T_1664 : _parsedindexvalue1_nextIndex_T_1670; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1672 = _parsedindexvalue1_nextIndex_T_1657 ?
    _parsedindexvalue1_nextIndex_T_1654 : _parsedindexvalue1_nextIndex_T_1671; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1673 = _parsedindexvalue1_nextIndex_T_1652 ?
    _parsedindexvalue1_nextIndex_T_1654 : _parsedindexvalue1_nextIndex_T_1672; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1674 = _parsedindexvalue1_nextIndex_T_1649 ?
    parsedindexvalue1_first_stage_21 : _parsedindexvalue1_nextIndex_T_1673; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1675 = _parsedindexvalue1_nextIndex_T_1646 ?
    parsedindexvalue1_first_stage_21 : _parsedindexvalue1_nextIndex_T_1674; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1676 = _parsedindexvalue1_nextIndex_T_1643 ?
    parsedindexvalue1_first_stage_21 : _parsedindexvalue1_nextIndex_T_1675; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_42 = _parsedindexvalue1_nextIndex_T_1640 ? parsedindexvalue1_first_stage_21 :
    _parsedindexvalue1_nextIndex_T_1676; // @[Mux.scala 101:16]
  wire [2:0] _GEN_279 = {{1'd0}, parsedindexvalue1_nextIndex_42}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_284 = _GEN_279 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue1_calculation_43 = _GEN_284[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue1_nextIndex_T_1677 = parsedindexvalue1_calculation_43 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue1_nextIndex_T_1678 = ~parsedindexvalue1_boolArray_21_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue1_nextIndex_T_1679 = parsedindexvalue1_calculation_43 == 2'h0 & ~
    parsedindexvalue1_boolArray_21_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue1_nextIndex_T_1680 = parsedindexvalue1_calculation_43 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue1_nextIndex_T_1682 = parsedindexvalue1_calculation_43 == 2'h1 &
    _parsedindexvalue1_nextIndex_T_1678; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue1_nextIndex_T_1683 = parsedindexvalue1_calculation_43 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue1_nextIndex_T_1685 = parsedindexvalue1_calculation_43 == 2'h2 &
    _parsedindexvalue1_nextIndex_T_1678; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue1_nextIndex_T_1686 = parsedindexvalue1_calculation_43 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue1_nextIndex_T_1688 = parsedindexvalue1_calculation_43 == 2'h3 &
    _parsedindexvalue1_nextIndex_T_1678; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue1_nextIndex_T_1691 = _parsedindexvalue1_nextIndex_T_1677 & parsedindexvalue1_boolArray_21_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1693 = parsedindexvalue1_nextIndex_42 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue1_nextIndex_T_1696 = _parsedindexvalue1_nextIndex_T_1680 & parsedindexvalue1_boolArray_21_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue1_nextIndex_T_1701 = _parsedindexvalue1_nextIndex_T_1683 & parsedindexvalue1_boolArray_21_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1703 = parsedindexvalue1_nextIndex_42 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue1_nextIndex_T_1706 = _parsedindexvalue1_nextIndex_T_1686 & parsedindexvalue1_boolArray_21_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1709 = _parsedindexvalue1_nextIndex_T_1706 ?
    _parsedindexvalue1_nextIndex_T_1703 : parsedindexvalue1_nextIndex_42; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1710 = _parsedindexvalue1_nextIndex_T_1701 ?
    _parsedindexvalue1_nextIndex_T_1703 : _parsedindexvalue1_nextIndex_T_1709; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1711 = _parsedindexvalue1_nextIndex_T_1696 ?
    _parsedindexvalue1_nextIndex_T_1693 : _parsedindexvalue1_nextIndex_T_1710; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1712 = _parsedindexvalue1_nextIndex_T_1691 ?
    _parsedindexvalue1_nextIndex_T_1693 : _parsedindexvalue1_nextIndex_T_1711; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1713 = _parsedindexvalue1_nextIndex_T_1688 ? parsedindexvalue1_nextIndex_42
     : _parsedindexvalue1_nextIndex_T_1712; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1714 = _parsedindexvalue1_nextIndex_T_1685 ? parsedindexvalue1_nextIndex_42
     : _parsedindexvalue1_nextIndex_T_1713; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_nextIndex_T_1715 = _parsedindexvalue1_nextIndex_T_1682 ? parsedindexvalue1_nextIndex_42
     : _parsedindexvalue1_nextIndex_T_1714; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue1_nextIndex_43 = _parsedindexvalue1_nextIndex_T_1679 ? parsedindexvalue1_nextIndex_42 :
    _parsedindexvalue1_nextIndex_T_1715; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue1_third_stage_T_169 = parsedindexvalue1_nextIndex_43 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue1_third_stage_T_172 = parsedindexvalue1_nextIndex_43 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue1_third_stage_T_174 = parsedindexvalue1_nextIndex_43 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue1_third_stage_T_175 = _parsedindexvalue1_third_stage_T_169 == 2'h0 ?
    _parsedindexvalue1_third_stage_T_172 : _parsedindexvalue1_third_stage_T_174; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue1_21 = io_i_mux_bus_3_1[3] ? _parsedindexvalue1_third_stage_T_175 :
    parsedindexvalue1_nextIndex_43; // @[Benes3.scala 49:24]
  wire [2:0] _T_417 = {{1'd0}, parsedindexvalue1_21};
  wire [15:0] _GEN_525 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_520; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_526 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_521; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_527 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_522; // @[Benes3.scala 74:{44,44}]
  wire [15:0] _GEN_528 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_523; // @[Benes3.scala 74:{44,44}]
  wire [1:0] parsedindexvalue2_first_stage_18 = io_i_mux_bus_3_2[0] ? _parsedindexvalue_first_stage_T_127 : 2'h3; // @[Benes3.scala 25:26]
  wire  parsedindexvalue2_boolArray_18_0 = io_i_mux_bus_3_2[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue2_boolArray_18_1 = io_i_mux_bus_3_2[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_289 = {{1'd0}, parsedindexvalue2_first_stage_18}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_294 = _GEN_289 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_36 = _GEN_294[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_1404 = parsedindexvalue2_calculation_36 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_1405 = ~parsedindexvalue2_boolArray_18_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_1406 = parsedindexvalue2_calculation_36 == 2'h0 & ~
    parsedindexvalue2_boolArray_18_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_1407 = parsedindexvalue2_calculation_36 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_1409 = parsedindexvalue2_calculation_36 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_1405; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_1410 = parsedindexvalue2_calculation_36 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_1412 = parsedindexvalue2_calculation_36 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_1405; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_1413 = parsedindexvalue2_calculation_36 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_1415 = parsedindexvalue2_calculation_36 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_1405; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_1418 = _parsedindexvalue2_nextIndex_T_1404 & parsedindexvalue2_boolArray_18_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1420 = parsedindexvalue2_first_stage_18 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_1423 = _parsedindexvalue2_nextIndex_T_1407 & parsedindexvalue2_boolArray_18_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_1428 = _parsedindexvalue2_nextIndex_T_1410 & parsedindexvalue2_boolArray_18_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1430 = parsedindexvalue2_first_stage_18 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_1433 = _parsedindexvalue2_nextIndex_T_1413 & parsedindexvalue2_boolArray_18_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1436 = _parsedindexvalue2_nextIndex_T_1433 ?
    _parsedindexvalue2_nextIndex_T_1430 : parsedindexvalue2_first_stage_18; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1437 = _parsedindexvalue2_nextIndex_T_1428 ?
    _parsedindexvalue2_nextIndex_T_1430 : _parsedindexvalue2_nextIndex_T_1436; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1438 = _parsedindexvalue2_nextIndex_T_1423 ?
    _parsedindexvalue2_nextIndex_T_1420 : _parsedindexvalue2_nextIndex_T_1437; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1439 = _parsedindexvalue2_nextIndex_T_1418 ?
    _parsedindexvalue2_nextIndex_T_1420 : _parsedindexvalue2_nextIndex_T_1438; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1440 = _parsedindexvalue2_nextIndex_T_1415 ?
    parsedindexvalue2_first_stage_18 : _parsedindexvalue2_nextIndex_T_1439; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1441 = _parsedindexvalue2_nextIndex_T_1412 ?
    parsedindexvalue2_first_stage_18 : _parsedindexvalue2_nextIndex_T_1440; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1442 = _parsedindexvalue2_nextIndex_T_1409 ?
    parsedindexvalue2_first_stage_18 : _parsedindexvalue2_nextIndex_T_1441; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_36 = _parsedindexvalue2_nextIndex_T_1406 ? parsedindexvalue2_first_stage_18 :
    _parsedindexvalue2_nextIndex_T_1442; // @[Mux.scala 101:16]
  wire [2:0] _GEN_299 = {{1'd0}, parsedindexvalue2_nextIndex_36}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_304 = _GEN_299 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue2_calculation_37 = _GEN_304[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue2_nextIndex_T_1443 = parsedindexvalue2_calculation_37 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue2_nextIndex_T_1444 = ~parsedindexvalue2_boolArray_18_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue2_nextIndex_T_1445 = parsedindexvalue2_calculation_37 == 2'h0 & ~
    parsedindexvalue2_boolArray_18_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue2_nextIndex_T_1446 = parsedindexvalue2_calculation_37 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue2_nextIndex_T_1448 = parsedindexvalue2_calculation_37 == 2'h1 &
    _parsedindexvalue2_nextIndex_T_1444; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue2_nextIndex_T_1449 = parsedindexvalue2_calculation_37 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue2_nextIndex_T_1451 = parsedindexvalue2_calculation_37 == 2'h2 &
    _parsedindexvalue2_nextIndex_T_1444; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue2_nextIndex_T_1452 = parsedindexvalue2_calculation_37 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue2_nextIndex_T_1454 = parsedindexvalue2_calculation_37 == 2'h3 &
    _parsedindexvalue2_nextIndex_T_1444; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue2_nextIndex_T_1457 = _parsedindexvalue2_nextIndex_T_1443 & parsedindexvalue2_boolArray_18_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1459 = parsedindexvalue2_nextIndex_36 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue2_nextIndex_T_1462 = _parsedindexvalue2_nextIndex_T_1446 & parsedindexvalue2_boolArray_18_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue2_nextIndex_T_1467 = _parsedindexvalue2_nextIndex_T_1449 & parsedindexvalue2_boolArray_18_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1469 = parsedindexvalue2_nextIndex_36 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue2_nextIndex_T_1472 = _parsedindexvalue2_nextIndex_T_1452 & parsedindexvalue2_boolArray_18_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1475 = _parsedindexvalue2_nextIndex_T_1472 ?
    _parsedindexvalue2_nextIndex_T_1469 : parsedindexvalue2_nextIndex_36; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1476 = _parsedindexvalue2_nextIndex_T_1467 ?
    _parsedindexvalue2_nextIndex_T_1469 : _parsedindexvalue2_nextIndex_T_1475; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1477 = _parsedindexvalue2_nextIndex_T_1462 ?
    _parsedindexvalue2_nextIndex_T_1459 : _parsedindexvalue2_nextIndex_T_1476; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1478 = _parsedindexvalue2_nextIndex_T_1457 ?
    _parsedindexvalue2_nextIndex_T_1459 : _parsedindexvalue2_nextIndex_T_1477; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1479 = _parsedindexvalue2_nextIndex_T_1454 ? parsedindexvalue2_nextIndex_36
     : _parsedindexvalue2_nextIndex_T_1478; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1480 = _parsedindexvalue2_nextIndex_T_1451 ? parsedindexvalue2_nextIndex_36
     : _parsedindexvalue2_nextIndex_T_1479; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_nextIndex_T_1481 = _parsedindexvalue2_nextIndex_T_1448 ? parsedindexvalue2_nextIndex_36
     : _parsedindexvalue2_nextIndex_T_1480; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue2_nextIndex_37 = _parsedindexvalue2_nextIndex_T_1445 ? parsedindexvalue2_nextIndex_36 :
    _parsedindexvalue2_nextIndex_T_1481; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue2_third_stage_T_145 = parsedindexvalue2_nextIndex_37 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue2_third_stage_T_148 = parsedindexvalue2_nextIndex_37 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue2_third_stage_T_150 = parsedindexvalue2_nextIndex_37 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue2_third_stage_T_151 = _parsedindexvalue2_third_stage_T_145 == 2'h0 ?
    _parsedindexvalue2_third_stage_T_148 : _parsedindexvalue2_third_stage_T_150; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue2_18 = io_i_mux_bus_3_2[3] ? _parsedindexvalue2_third_stage_T_151 :
    parsedindexvalue2_nextIndex_37; // @[Benes3.scala 49:24]
  wire [2:0] _T_419 = {{1'd0}, parsedindexvalue2_18};
  wire [15:0] _GEN_530 = 3'h0 == _T_419 ? io_i_data_bus2_3 : _GEN_525; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_531 = 3'h1 == _T_419 ? io_i_data_bus2_3 : _GEN_526; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_532 = 3'h2 == _T_419 ? io_i_data_bus2_3 : _GEN_527; // @[Benes3.scala 76:{44,44}]
  wire [15:0] _GEN_533 = 3'h3 == _T_419 ? io_i_data_bus2_3 : _GEN_528; // @[Benes3.scala 76:{44,44}]
  wire [1:0] parsedindexvalue3_first_stage_12 = io_i_mux_bus_3_3[0] ? _parsedindexvalue_first_stage_T_127 : 2'h3; // @[Benes3.scala 25:26]
  wire  parsedindexvalue3_boolArray_12_0 = io_i_mux_bus_3_3[1]; // @[Benes3.scala 29:92]
  wire  parsedindexvalue3_boolArray_12_1 = io_i_mux_bus_3_3[2]; // @[Benes3.scala 29:92]
  wire [2:0] _GEN_309 = {{1'd0}, parsedindexvalue3_first_stage_12}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_314 = _GEN_309 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_24 = _GEN_314[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_936 = parsedindexvalue3_calculation_24 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_937 = ~parsedindexvalue3_boolArray_12_0; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_938 = parsedindexvalue3_calculation_24 == 2'h0 & ~
    parsedindexvalue3_boolArray_12_0; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_939 = parsedindexvalue3_calculation_24 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_941 = parsedindexvalue3_calculation_24 == 2'h1 &
    _parsedindexvalue3_nextIndex_T_937; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_942 = parsedindexvalue3_calculation_24 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_944 = parsedindexvalue3_calculation_24 == 2'h2 &
    _parsedindexvalue3_nextIndex_T_937; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_945 = parsedindexvalue3_calculation_24 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_947 = parsedindexvalue3_calculation_24 == 2'h3 &
    _parsedindexvalue3_nextIndex_T_937; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_950 = _parsedindexvalue3_nextIndex_T_936 & parsedindexvalue3_boolArray_12_0; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_952 = parsedindexvalue3_first_stage_12 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_955 = _parsedindexvalue3_nextIndex_T_939 & parsedindexvalue3_boolArray_12_0; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_960 = _parsedindexvalue3_nextIndex_T_942 & parsedindexvalue3_boolArray_12_0; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_962 = parsedindexvalue3_first_stage_12 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_965 = _parsedindexvalue3_nextIndex_T_945 & parsedindexvalue3_boolArray_12_0; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_968 = _parsedindexvalue3_nextIndex_T_965 ?
    _parsedindexvalue3_nextIndex_T_962 : parsedindexvalue3_first_stage_12; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_969 = _parsedindexvalue3_nextIndex_T_960 ?
    _parsedindexvalue3_nextIndex_T_962 : _parsedindexvalue3_nextIndex_T_968; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_970 = _parsedindexvalue3_nextIndex_T_955 ?
    _parsedindexvalue3_nextIndex_T_952 : _parsedindexvalue3_nextIndex_T_969; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_971 = _parsedindexvalue3_nextIndex_T_950 ?
    _parsedindexvalue3_nextIndex_T_952 : _parsedindexvalue3_nextIndex_T_970; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_972 = _parsedindexvalue3_nextIndex_T_947 ? parsedindexvalue3_first_stage_12
     : _parsedindexvalue3_nextIndex_T_971; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_973 = _parsedindexvalue3_nextIndex_T_944 ? parsedindexvalue3_first_stage_12
     : _parsedindexvalue3_nextIndex_T_972; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_974 = _parsedindexvalue3_nextIndex_T_941 ? parsedindexvalue3_first_stage_12
     : _parsedindexvalue3_nextIndex_T_973; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_24 = _parsedindexvalue3_nextIndex_T_938 ? parsedindexvalue3_first_stage_12 :
    _parsedindexvalue3_nextIndex_T_974; // @[Mux.scala 101:16]
  wire [2:0] _GEN_319 = {{1'd0}, parsedindexvalue3_nextIndex_24}; // @[Benes3.scala 34:40]
  wire [2:0] _GEN_324 = _GEN_319 % 3'h4; // @[Benes3.scala 34:40]
  wire [1:0] parsedindexvalue3_calculation_25 = _GEN_324[1:0]; // @[Benes3.scala 34:40]
  wire  _parsedindexvalue3_nextIndex_T_975 = parsedindexvalue3_calculation_25 == 2'h0; // @[Benes3.scala 36:27]
  wire  _parsedindexvalue3_nextIndex_T_976 = ~parsedindexvalue3_boolArray_12_1; // @[Benes3.scala 36:53]
  wire  _parsedindexvalue3_nextIndex_T_977 = parsedindexvalue3_calculation_25 == 2'h0 & ~
    parsedindexvalue3_boolArray_12_1; // @[Benes3.scala 36:36]
  wire  _parsedindexvalue3_nextIndex_T_978 = parsedindexvalue3_calculation_25 == 2'h1; // @[Benes3.scala 37:27]
  wire  _parsedindexvalue3_nextIndex_T_980 = parsedindexvalue3_calculation_25 == 2'h1 &
    _parsedindexvalue3_nextIndex_T_976; // @[Benes3.scala 37:36]
  wire  _parsedindexvalue3_nextIndex_T_981 = parsedindexvalue3_calculation_25 == 2'h2; // @[Benes3.scala 38:27]
  wire  _parsedindexvalue3_nextIndex_T_983 = parsedindexvalue3_calculation_25 == 2'h2 &
    _parsedindexvalue3_nextIndex_T_976; // @[Benes3.scala 38:36]
  wire  _parsedindexvalue3_nextIndex_T_984 = parsedindexvalue3_calculation_25 == 2'h3; // @[Benes3.scala 39:27]
  wire  _parsedindexvalue3_nextIndex_T_986 = parsedindexvalue3_calculation_25 == 2'h3 &
    _parsedindexvalue3_nextIndex_T_976; // @[Benes3.scala 39:36]
  wire  _parsedindexvalue3_nextIndex_T_989 = _parsedindexvalue3_nextIndex_T_975 & parsedindexvalue3_boolArray_12_1; // @[Benes3.scala 40:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_991 = parsedindexvalue3_nextIndex_24 + 2'h2; // @[Benes3.scala 40:76]
  wire  _parsedindexvalue3_nextIndex_T_994 = _parsedindexvalue3_nextIndex_T_978 & parsedindexvalue3_boolArray_12_1; // @[Benes3.scala 41:36]
  wire  _parsedindexvalue3_nextIndex_T_999 = _parsedindexvalue3_nextIndex_T_981 & parsedindexvalue3_boolArray_12_1; // @[Benes3.scala 42:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1001 = parsedindexvalue3_nextIndex_24 - 2'h2; // @[Benes3.scala 42:76]
  wire  _parsedindexvalue3_nextIndex_T_1004 = _parsedindexvalue3_nextIndex_T_984 & parsedindexvalue3_boolArray_12_1; // @[Benes3.scala 43:36]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1007 = _parsedindexvalue3_nextIndex_T_1004 ?
    _parsedindexvalue3_nextIndex_T_1001 : parsedindexvalue3_nextIndex_24; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1008 = _parsedindexvalue3_nextIndex_T_999 ?
    _parsedindexvalue3_nextIndex_T_1001 : _parsedindexvalue3_nextIndex_T_1007; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1009 = _parsedindexvalue3_nextIndex_T_994 ?
    _parsedindexvalue3_nextIndex_T_991 : _parsedindexvalue3_nextIndex_T_1008; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1010 = _parsedindexvalue3_nextIndex_T_989 ?
    _parsedindexvalue3_nextIndex_T_991 : _parsedindexvalue3_nextIndex_T_1009; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1011 = _parsedindexvalue3_nextIndex_T_986 ? parsedindexvalue3_nextIndex_24
     : _parsedindexvalue3_nextIndex_T_1010; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1012 = _parsedindexvalue3_nextIndex_T_983 ? parsedindexvalue3_nextIndex_24
     : _parsedindexvalue3_nextIndex_T_1011; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_nextIndex_T_1013 = _parsedindexvalue3_nextIndex_T_980 ? parsedindexvalue3_nextIndex_24
     : _parsedindexvalue3_nextIndex_T_1012; // @[Mux.scala 101:16]
  wire [1:0] parsedindexvalue3_nextIndex_25 = _parsedindexvalue3_nextIndex_T_977 ? parsedindexvalue3_nextIndex_24 :
    _parsedindexvalue3_nextIndex_T_1013; // @[Mux.scala 101:16]
  wire [1:0] _parsedindexvalue3_third_stage_T_97 = parsedindexvalue3_nextIndex_25 % 2'h2; // @[Benes3.scala 49:61]
  wire [1:0] _parsedindexvalue3_third_stage_T_100 = parsedindexvalue3_nextIndex_25 + 2'h1; // @[Benes3.scala 49:89]
  wire [1:0] _parsedindexvalue3_third_stage_T_102 = parsedindexvalue3_nextIndex_25 - 2'h1; // @[Benes3.scala 49:109]
  wire [1:0] _parsedindexvalue3_third_stage_T_103 = _parsedindexvalue3_third_stage_T_97 == 2'h0 ?
    _parsedindexvalue3_third_stage_T_100 : _parsedindexvalue3_third_stage_T_102; // @[Benes3.scala 49:47]
  wire [1:0] parsedindexvalue3_12 = io_i_mux_bus_3_3[3] ? _parsedindexvalue3_third_stage_T_103 :
    parsedindexvalue3_nextIndex_25; // @[Benes3.scala 49:24]
  wire [2:0] _T_421 = {{1'd0}, parsedindexvalue3_12};
  wire [15:0] _GEN_535 = 3'h0 == _T_421 ? io_i_data_bus2_3 : _GEN_530; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_536 = 3'h1 == _T_421 ? io_i_data_bus2_3 : _GEN_531; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_537 = 3'h2 == _T_421 ? io_i_data_bus2_3 : _GEN_532; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_538 = 3'h3 == _T_421 ? io_i_data_bus2_3 : _GEN_533; // @[Benes3.scala 78:{44,44}]
  wire [15:0] _GEN_540 = _T_392 & _T_393 & _T_396 & _T_399 ? _GEN_535 : _GEN_515; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_541 = _T_392 & _T_393 & _T_396 & _T_399 ? _GEN_536 : _GEN_516; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_542 = _T_392 & _T_393 & _T_396 & _T_399 ? _GEN_537 : _GEN_517; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_543 = _T_392 & _T_393 & _T_396 & _T_399 ? _GEN_538 : _GEN_518; // @[Benes3.scala 70:156]
  wire [15:0] _GEN_545 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_540; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_546 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_541; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_547 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_542; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_548 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_543; // @[Benes3.scala 83:{43,43}]
  wire [15:0] _GEN_550 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_545; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_551 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_546; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_552 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_547; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_553 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_548; // @[Benes3.scala 85:{44,44}]
  wire [15:0] _GEN_555 = 3'h0 == _T_419 ? io_i_data_bus2_3 : _GEN_550; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_556 = 3'h1 == _T_419 ? io_i_data_bus2_3 : _GEN_551; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_557 = 3'h2 == _T_419 ? io_i_data_bus2_3 : _GEN_552; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_558 = 3'h3 == _T_419 ? io_i_data_bus2_3 : _GEN_553; // @[Benes3.scala 87:{44,44}]
  wire [15:0] _GEN_560 = _T_411 & _T_400 ? _GEN_555 : _GEN_540; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_561 = _T_411 & _T_400 ? _GEN_556 : _GEN_541; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_562 = _T_411 & _T_400 ? _GEN_557 : _GEN_542; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_563 = _T_411 & _T_400 ? _GEN_558 : _GEN_543; // @[Benes3.scala 81:156]
  wire [15:0] _GEN_565 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_560; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_566 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_561; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_567 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_562; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_568 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_563; // @[Benes3.scala 92:{43,43}]
  wire [15:0] _GEN_570 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_565; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_571 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_566; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_572 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_567; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_573 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_568; // @[Benes3.scala 94:{44,44}]
  wire [15:0] _GEN_575 = _T_408 & _T_397 & _T_400 ? _GEN_570 : _GEN_560; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_576 = _T_408 & _T_397 & _T_400 ? _GEN_571 : _GEN_561; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_577 = _T_408 & _T_397 & _T_400 ? _GEN_572 : _GEN_562; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_578 = _T_408 & _T_397 & _T_400 ? _GEN_573 : _GEN_563; // @[Benes3.scala 90:156]
  wire [15:0] _GEN_580 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_575; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_581 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_576; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_582 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_577; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_583 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_578; // @[Benes3.scala 105:{47,47}]
  wire [15:0] _GEN_585 = _T_391 ? _GEN_580 : _GEN_575; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_586 = _T_391 ? _GEN_581 : _GEN_576; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_587 = _T_391 ? _GEN_582 : _GEN_577; // @[Benes3.scala 102:48]
  wire [15:0] _GEN_588 = _T_391 ? _GEN_583 : _GEN_578; // @[Benes3.scala 102:48]
  wire  _T_463 = _T_391 & _T_393; // @[Benes3.scala 120:48]
  wire [15:0] _GEN_590 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_585; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_591 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_586; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_592 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_587; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_593 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_588; // @[Benes3.scala 123:{48,48}]
  wire [15:0] _GEN_595 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_590; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_596 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_591; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_597 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_592; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_598 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_593; // @[Benes3.scala 128:{44,44}]
  wire [15:0] _GEN_600 = _T_391 & _T_393 ? _GEN_595 : _GEN_585; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_601 = _T_391 & _T_393 ? _GEN_596 : _GEN_586; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_602 = _T_391 & _T_393 ? _GEN_597 : _GEN_587; // @[Benes3.scala 120:84]
  wire [15:0] _GEN_603 = _T_391 & _T_393 ? _GEN_598 : _GEN_588; // @[Benes3.scala 120:84]
  wire  _T_475 = _T_463 & _T_396; // @[Benes3.scala 142:84]
  wire [15:0] _GEN_605 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_600; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_606 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_601; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_607 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_602; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_608 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_603; // @[Benes3.scala 145:{48,48}]
  wire [15:0] _GEN_610 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_605; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_611 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_606; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_612 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_607; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_613 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_608; // @[Benes3.scala 150:{44,44}]
  wire [15:0] _GEN_615 = 3'h0 == _T_419 ? io_i_data_bus2_3 : _GEN_610; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_616 = 3'h1 == _T_419 ? io_i_data_bus2_3 : _GEN_611; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_617 = 3'h2 == _T_419 ? io_i_data_bus2_3 : _GEN_612; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_618 = 3'h3 == _T_419 ? io_i_data_bus2_3 : _GEN_613; // @[Benes3.scala 154:{44,44}]
  wire [15:0] _GEN_620 = _T_463 & _T_396 ? _GEN_615 : _GEN_600; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_621 = _T_463 & _T_396 ? _GEN_616 : _GEN_601; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_622 = _T_463 & _T_396 ? _GEN_617 : _GEN_602; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_623 = _T_463 & _T_396 ? _GEN_618 : _GEN_603; // @[Benes3.scala 142:120]
  wire [15:0] _GEN_625 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_620; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_626 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_621; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_627 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_622; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_628 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_623; // @[Benes3.scala 170:{48,48}]
  wire [15:0] _GEN_630 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_625; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_631 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_626; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_632 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_627; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_633 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_628; // @[Benes3.scala 175:{44,44}]
  wire [15:0] _GEN_635 = 3'h0 == _T_419 ? io_i_data_bus2_3 : _GEN_630; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_636 = 3'h1 == _T_419 ? io_i_data_bus2_3 : _GEN_631; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_637 = 3'h2 == _T_419 ? io_i_data_bus2_3 : _GEN_632; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_638 = 3'h3 == _T_419 ? io_i_data_bus2_3 : _GEN_633; // @[Benes3.scala 179:{44,44}]
  wire [15:0] _GEN_640 = 3'h0 == _T_421 ? io_i_data_bus2_3 : _GEN_635; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_641 = 3'h1 == _T_421 ? io_i_data_bus2_3 : _GEN_636; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_642 = 3'h2 == _T_421 ? io_i_data_bus2_3 : _GEN_637; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_643 = 3'h3 == _T_421 ? io_i_data_bus2_3 : _GEN_638; // @[Benes3.scala 183:{44,44}]
  wire [15:0] _GEN_645 = _T_475 & _T_399 ? _GEN_640 : _GEN_620; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_646 = _T_475 & _T_399 ? _GEN_641 : _GEN_621; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_647 = _T_475 & _T_399 ? _GEN_642 : _GEN_622; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_648 = _T_475 & _T_399 ? _GEN_643 : _GEN_623; // @[Benes3.scala 167:156]
  wire [15:0] _GEN_650 = 3'h0 == _T_402 ? io_i_data_bus2_3 : _GEN_645; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_651 = 3'h1 == _T_402 ? io_i_data_bus2_3 : _GEN_646; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_652 = 3'h2 == _T_402 ? io_i_data_bus2_3 : _GEN_647; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_653 = 3'h3 == _T_402 ? io_i_data_bus2_3 : _GEN_648; // @[Benes3.scala 192:{48,48}]
  wire [15:0] _GEN_655 = 3'h0 == _T_417 ? io_i_data_bus2_3 : _GEN_650; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_656 = 3'h1 == _T_417 ? io_i_data_bus2_3 : _GEN_651; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_657 = 3'h2 == _T_417 ? io_i_data_bus2_3 : _GEN_652; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_658 = 3'h3 == _T_417 ? io_i_data_bus2_3 : _GEN_653; // @[Benes3.scala 197:{44,44}]
  wire [15:0] _GEN_660 = 3'h0 == _T_419 ? io_i_data_bus2_3 : _GEN_655; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_661 = 3'h1 == _T_419 ? io_i_data_bus2_3 : _GEN_656; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_662 = 3'h2 == _T_419 ? io_i_data_bus2_3 : _GEN_657; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_663 = 3'h3 == _T_419 ? io_i_data_bus2_3 : _GEN_658; // @[Benes3.scala 201:{44,44}]
  wire [15:0] _GEN_665 = 3'h0 == _T_421 ? io_i_data_bus2_3 : _GEN_660; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_666 = 3'h1 == _T_421 ? io_i_data_bus2_3 : _GEN_661; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_667 = 3'h2 == _T_421 ? io_i_data_bus2_3 : _GEN_662; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_668 = 3'h3 == _T_421 ? io_i_data_bus2_3 : _GEN_663; // @[Benes3.scala 205:{44,44}]
  wire [15:0] _GEN_670 = _T_414 ? _GEN_665 : _GEN_645; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_671 = _T_414 ? _GEN_666 : _GEN_646; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_672 = _T_414 ? _GEN_667 : _GEN_647; // @[Benes3.scala 189:160]
  wire [15:0] _GEN_673 = _T_414 ? _GEN_668 : _GEN_648; // @[Benes3.scala 189:160]
  assign io_o_dist_bus1_0 = io_i_data_bus1_0; // @[Benes3.scala 17:18]
  assign io_o_dist_bus1_1 = io_i_data_bus1_1; // @[Benes3.scala 17:18]
  assign io_o_dist_bus1_2 = io_i_data_bus1_2; // @[Benes3.scala 17:18]
  assign io_o_dist_bus1_3 = io_i_data_bus1_3; // @[Benes3.scala 17:18]
  assign io_o_dist_bus2_0 = io_i_data_bus2_3 != 16'h0 ? _GEN_670 : _GEN_505; // @[Benes3.scala 62:39]
  assign io_o_dist_bus2_1 = io_i_data_bus2_3 != 16'h0 ? _GEN_671 : _GEN_506; // @[Benes3.scala 62:39]
  assign io_o_dist_bus2_2 = io_i_data_bus2_3 != 16'h0 ? _GEN_672 : _GEN_507; // @[Benes3.scala 62:39]
  assign io_o_dist_bus2_3 = io_i_data_bus2_3 != 16'h0 ? _GEN_673 : _GEN_508; // @[Benes3.scala 62:39]
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
  output [15:0] io_o_adder_2,
  input  [3:0]  io_i_mux_bus_0_0,
  input  [3:0]  io_i_mux_bus_0_1,
  input  [3:0]  io_i_mux_bus_0_2,
  input  [3:0]  io_i_mux_bus_0_3,
  input  [3:0]  io_i_mux_bus_1_0,
  input  [3:0]  io_i_mux_bus_1_1,
  input  [3:0]  io_i_mux_bus_1_2,
  input  [3:0]  io_i_mux_bus_1_3,
  input  [3:0]  io_i_mux_bus_2_0,
  input  [3:0]  io_i_mux_bus_2_1,
  input  [3:0]  io_i_mux_bus_2_2,
  input  [3:0]  io_i_mux_bus_2_3,
  input  [3:0]  io_i_mux_bus_3_0,
  input  [3:0]  io_i_mux_bus_3_1,
  input  [3:0]  io_i_mux_bus_3_2,
  input  [3:0]  io_i_mux_bus_3_3
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
  wire  my_ivn_clock; // @[FlexDPEby2.scala 59:22]
  wire  my_ivn_reset; // @[FlexDPEby2.scala 59:22]
  wire [15:0] my_ivn_io_Stationary_matrix_0_0; // @[FlexDPEby2.scala 59:22]
  wire [15:0] my_ivn_io_Stationary_matrix_0_1; // @[FlexDPEby2.scala 59:22]
  wire [15:0] my_ivn_io_Stationary_matrix_1_0; // @[FlexDPEby2.scala 59:22]
  wire [15:0] my_ivn_io_Stationary_matrix_1_1; // @[FlexDPEby2.scala 59:22]
  wire  my_controller_clock; // @[FlexDPEby2.scala 67:31]
  wire  my_controller_reset; // @[FlexDPEby2.scala 67:31]
  wire  my_controller_io_i_data_valid; // @[FlexDPEby2.scala 67:31]
  wire  my_controller_io_o_reduction_add_0; // @[FlexDPEby2.scala 67:31]
  wire  my_controller_io_o_reduction_add_1; // @[FlexDPEby2.scala 67:31]
  wire  my_controller_io_o_reduction_add_2; // @[FlexDPEby2.scala 67:31]
  wire [15:0] my_Benes_io_i_data_bus2_0; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus2_1; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus2_2; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus2_3; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus1_0; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus1_1; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus1_2; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_i_data_bus1_3; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_0; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_1; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_2; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_0_3; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_0; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_1; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_2; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_1_3; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_2_0; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_2_1; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_2_2; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_2_3; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_3_0; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_3_1; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_3_2; // @[FlexDPEby2.scala 76:26]
  wire [3:0] my_Benes_io_i_mux_bus_3_3; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus1_0; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus1_1; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus1_2; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus1_3; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus2_0; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus2_1; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus2_2; // @[FlexDPEby2.scala 76:26]
  wire [15:0] my_Benes_io_o_dist_bus2_3; // @[FlexDPEby2.scala 76:26]
  wire [15:0] buffer_mult_io_buffer1_0; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer1_1; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer1_2; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer1_3; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer2_0; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer2_1; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer2_2; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_buffer2_3; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_out_0; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_out_1; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_out_2; // @[FlexDPEby2.scala 88:30]
  wire [15:0] buffer_mult_io_out_3; // @[FlexDPEby2.scala 88:30]
  wire  my_fan_network_clock; // @[FlexDPEby2.scala 100:32]
  wire  my_fan_network_reset; // @[FlexDPEby2.scala 100:32]
  wire [31:0] my_fan_network_io_i_data_bus_0; // @[FlexDPEby2.scala 100:32]
  wire [31:0] my_fan_network_io_i_data_bus_1; // @[FlexDPEby2.scala 100:32]
  wire [31:0] my_fan_network_io_i_data_bus_2; // @[FlexDPEby2.scala 100:32]
  wire [31:0] my_fan_network_io_i_data_bus_3; // @[FlexDPEby2.scala 100:32]
  wire  my_fan_network_io_i_add_en_bus_0; // @[FlexDPEby2.scala 100:32]
  wire  my_fan_network_io_i_add_en_bus_1; // @[FlexDPEby2.scala 100:32]
  wire  my_fan_network_io_i_add_en_bus_2; // @[FlexDPEby2.scala 100:32]
  wire [31:0] my_fan_network_io_o_adder_0; // @[FlexDPEby2.scala 100:32]
  wire [31:0] my_fan_network_io_o_adder_2; // @[FlexDPEby2.scala 100:32]
  reg [14:0] r_mult_0; // @[FlexDPEby2.scala 34:26]
  reg [14:0] r_mult_1; // @[FlexDPEby2.scala 34:26]
  reg [14:0] r_mult_2; // @[FlexDPEby2.scala 34:26]
  reg [14:0] r_mult_3; // @[FlexDPEby2.scala 34:26]
  reg [31:0] counter; // @[FlexDPEby2.scala 38:26]
  reg [15:0] matrix_0_0; // @[FlexDPEby2.scala 53:22]
  reg [15:0] matrix_0_1; // @[FlexDPEby2.scala 53:22]
  reg [15:0] matrix_1_0; // @[FlexDPEby2.scala 53:22]
  reg [15:0] matrix_1_1; // @[FlexDPEby2.scala 53:22]
  wire [15:0] _GEN_0 = my_Benes_io_o_dist_bus1_0 == 16'h0 ? {{1'd0}, r_mult_1} : io_o_adder_0; // @[FlexDPEby2.scala 112:20 121:41 122:23]
  wire [31:0] _counter_T_1 = counter + 32'h1; // @[FlexDPEby2.scala 132:24]
  wire [15:0] _GEN_16 = reset ? 16'h0 : buffer_mult_io_out_0; // @[FlexDPEby2.scala 34:{26,26} 94:14]
  wire [15:0] _GEN_17 = reset ? 16'h0 : buffer_mult_io_out_1; // @[FlexDPEby2.scala 34:{26,26} 94:14]
  wire [15:0] _GEN_18 = reset ? 16'h0 : buffer_mult_io_out_2; // @[FlexDPEby2.scala 34:{26,26} 94:14]
  wire [15:0] _GEN_19 = reset ? 16'h0 : buffer_mult_io_out_3; // @[FlexDPEby2.scala 34:{26,26} 94:14]
  ivncontrol4 my_ivn ( // @[FlexDPEby2.scala 59:22]
    .clock(my_ivn_clock),
    .reset(my_ivn_reset),
    .io_Stationary_matrix_0_0(my_ivn_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(my_ivn_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(my_ivn_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(my_ivn_io_Stationary_matrix_1_1)
  );
  fancontrol4 my_controller ( // @[FlexDPEby2.scala 67:31]
    .clock(my_controller_clock),
    .reset(my_controller_reset),
    .io_i_data_valid(my_controller_io_i_data_valid),
    .io_o_reduction_add_0(my_controller_io_o_reduction_add_0),
    .io_o_reduction_add_1(my_controller_io_o_reduction_add_1),
    .io_o_reduction_add_2(my_controller_io_o_reduction_add_2)
  );
  Benes3 my_Benes ( // @[FlexDPEby2.scala 76:26]
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
    .io_i_mux_bus_1_3(my_Benes_io_i_mux_bus_1_3),
    .io_i_mux_bus_2_0(my_Benes_io_i_mux_bus_2_0),
    .io_i_mux_bus_2_1(my_Benes_io_i_mux_bus_2_1),
    .io_i_mux_bus_2_2(my_Benes_io_i_mux_bus_2_2),
    .io_i_mux_bus_2_3(my_Benes_io_i_mux_bus_2_3),
    .io_i_mux_bus_3_0(my_Benes_io_i_mux_bus_3_0),
    .io_i_mux_bus_3_1(my_Benes_io_i_mux_bus_3_1),
    .io_i_mux_bus_3_2(my_Benes_io_i_mux_bus_3_2),
    .io_i_mux_bus_3_3(my_Benes_io_i_mux_bus_3_3),
    .io_o_dist_bus1_0(my_Benes_io_o_dist_bus1_0),
    .io_o_dist_bus1_1(my_Benes_io_o_dist_bus1_1),
    .io_o_dist_bus1_2(my_Benes_io_o_dist_bus1_2),
    .io_o_dist_bus1_3(my_Benes_io_o_dist_bus1_3),
    .io_o_dist_bus2_0(my_Benes_io_o_dist_bus2_0),
    .io_o_dist_bus2_1(my_Benes_io_o_dist_bus2_1),
    .io_o_dist_bus2_2(my_Benes_io_o_dist_bus2_2),
    .io_o_dist_bus2_3(my_Benes_io_o_dist_bus2_3)
  );
  buffer_multiplication buffer_mult ( // @[FlexDPEby2.scala 88:30]
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
  Fan4 my_fan_network ( // @[FlexDPEby2.scala 100:32]
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
    .io_o_adder_2(my_fan_network_io_o_adder_2)
  );
  assign io_o_adder_0 = my_fan_network_io_o_adder_0[15:0]; // @[FlexDPEby2.scala 109:16]
  assign io_o_adder_2 = my_fan_network_io_o_adder_2[15:0]; // @[FlexDPEby2.scala 109:16]
  assign my_ivn_clock = clock;
  assign my_ivn_reset = reset;
  assign my_ivn_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPEby2.scala 60:33]
  assign my_ivn_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPEby2.scala 60:33]
  assign my_ivn_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPEby2.scala 60:33]
  assign my_ivn_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPEby2.scala 60:33]
  assign my_controller_clock = clock;
  assign my_controller_reset = reset;
  assign my_controller_io_i_data_valid = io_i_data_valid; // @[FlexDPEby2.scala 71:35]
  assign my_Benes_io_i_data_bus2_0 = io_i_data_bus2_0; // @[FlexDPEby2.scala 79:29]
  assign my_Benes_io_i_data_bus2_1 = io_i_data_bus2_1; // @[FlexDPEby2.scala 79:29]
  assign my_Benes_io_i_data_bus2_2 = io_i_data_bus2_2; // @[FlexDPEby2.scala 79:29]
  assign my_Benes_io_i_data_bus2_3 = io_i_data_bus2_3; // @[FlexDPEby2.scala 79:29]
  assign my_Benes_io_i_data_bus1_0 = io_i_data_bus_0; // @[FlexDPEby2.scala 78:29]
  assign my_Benes_io_i_data_bus1_1 = io_i_data_bus_1; // @[FlexDPEby2.scala 78:29]
  assign my_Benes_io_i_data_bus1_2 = io_i_data_bus_2; // @[FlexDPEby2.scala 78:29]
  assign my_Benes_io_i_data_bus1_3 = io_i_data_bus_3; // @[FlexDPEby2.scala 78:29]
  assign my_Benes_io_i_mux_bus_0_0 = io_i_mux_bus_0_0; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_0_1 = io_i_mux_bus_0_1; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_0_2 = io_i_mux_bus_0_2; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_0_3 = io_i_mux_bus_0_3; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_1_0 = io_i_mux_bus_1_0; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_1_1 = io_i_mux_bus_1_1; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_1_2 = io_i_mux_bus_1_2; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_1_3 = io_i_mux_bus_1_3; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_2_0 = io_i_mux_bus_2_0; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_2_1 = io_i_mux_bus_2_1; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_2_2 = io_i_mux_bus_2_2; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_2_3 = io_i_mux_bus_2_3; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_3_0 = io_i_mux_bus_3_0; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_3_1 = io_i_mux_bus_3_1; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_3_2 = io_i_mux_bus_3_2; // @[FlexDPEby2.scala 80:27]
  assign my_Benes_io_i_mux_bus_3_3 = io_i_mux_bus_3_3; // @[FlexDPEby2.scala 80:27]
  assign buffer_mult_io_buffer1_0 = my_Benes_io_o_dist_bus1_0; // @[FlexDPEby2.scala 91:30]
  assign buffer_mult_io_buffer1_1 = my_Benes_io_o_dist_bus1_1; // @[FlexDPEby2.scala 91:30]
  assign buffer_mult_io_buffer1_2 = my_Benes_io_o_dist_bus1_2; // @[FlexDPEby2.scala 91:30]
  assign buffer_mult_io_buffer1_3 = my_Benes_io_o_dist_bus1_3; // @[FlexDPEby2.scala 91:30]
  assign buffer_mult_io_buffer2_0 = my_Benes_io_o_dist_bus2_0; // @[FlexDPEby2.scala 92:30]
  assign buffer_mult_io_buffer2_1 = my_Benes_io_o_dist_bus2_1; // @[FlexDPEby2.scala 92:30]
  assign buffer_mult_io_buffer2_2 = my_Benes_io_o_dist_bus2_2; // @[FlexDPEby2.scala 92:30]
  assign buffer_mult_io_buffer2_3 = my_Benes_io_o_dist_bus2_3; // @[FlexDPEby2.scala 92:30]
  assign my_fan_network_clock = clock;
  assign my_fan_network_reset = reset;
  assign my_fan_network_io_i_data_bus_0 = {{17'd0}, r_mult_0}; // @[FlexDPEby2.scala 103:34]
  assign my_fan_network_io_i_data_bus_1 = {{17'd0}, r_mult_1}; // @[FlexDPEby2.scala 103:34]
  assign my_fan_network_io_i_data_bus_2 = {{17'd0}, r_mult_2}; // @[FlexDPEby2.scala 103:34]
  assign my_fan_network_io_i_data_bus_3 = {{17'd0}, r_mult_3}; // @[FlexDPEby2.scala 103:34]
  assign my_fan_network_io_i_add_en_bus_0 = my_controller_io_o_reduction_add_0; // @[FlexDPEby2.scala 104:36]
  assign my_fan_network_io_i_add_en_bus_1 = my_controller_io_o_reduction_add_1; // @[FlexDPEby2.scala 104:36]
  assign my_fan_network_io_i_add_en_bus_2 = my_controller_io_o_reduction_add_2; // @[FlexDPEby2.scala 104:36]
  always @(posedge clock) begin
    r_mult_0 <= _GEN_16[14:0]; // @[FlexDPEby2.scala 34:{26,26} 94:14]
    r_mult_1 <= _GEN_17[14:0]; // @[FlexDPEby2.scala 34:{26,26} 94:14]
    r_mult_2 <= _GEN_18[14:0]; // @[FlexDPEby2.scala 34:{26,26} 94:14]
    r_mult_3 <= _GEN_19[14:0]; // @[FlexDPEby2.scala 34:{26,26} 94:14]
    if (reset) begin // @[FlexDPEby2.scala 38:26]
      counter <= 32'h0; // @[FlexDPEby2.scala 38:26]
    end else begin
      counter <= _counter_T_1; // @[FlexDPEby2.scala 132:13]
    end
    if (counter < 32'h3c) begin // @[FlexDPEby2.scala 111:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPEby2.scala 114:36]
        matrix_0_0 <= io_o_adder_0; // @[FlexDPEby2.scala 112:20]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPEby2.scala 117:41]
        matrix_0_0 <= io_o_adder_0; // @[FlexDPEby2.scala 112:20]
      end else if (my_Benes_io_o_dist_bus1_1 == 16'h0) begin // @[FlexDPEby2.scala 119:41]
        matrix_0_0 <= {{1'd0}, r_mult_0}; // @[FlexDPEby2.scala 120:23]
      end else begin
        matrix_0_0 <= _GEN_0;
      end
    end
    if (counter > 32'h64) begin // @[FlexDPEby2.scala 135:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPEby2.scala 114:36]
        matrix_0_1 <= io_o_adder_0; // @[FlexDPEby2.scala 112:20]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPEby2.scala 117:41]
        matrix_0_1 <= io_o_adder_0; // @[FlexDPEby2.scala 112:20]
      end else if (my_Benes_io_o_dist_bus1_1 == 16'h0) begin // @[FlexDPEby2.scala 119:41]
        matrix_0_1 <= {{1'd0}, r_mult_0}; // @[FlexDPEby2.scala 120:23]
      end else begin
        matrix_0_1 <= _GEN_0;
      end
    end
    if (counter < 32'h3c) begin // @[FlexDPEby2.scala 111:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPEby2.scala 114:36]
        matrix_1_0 <= {{1'd0}, r_mult_2}; // @[FlexDPEby2.scala 115:22]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPEby2.scala 117:41]
        matrix_1_0 <= {{1'd0}, r_mult_3}; // @[FlexDPEby2.scala 118:23]
      end else begin
        matrix_1_0 <= io_o_adder_2; // @[FlexDPEby2.scala 113:20]
      end
    end
    if (counter > 32'h64) begin // @[FlexDPEby2.scala 135:27]
      if (my_Benes_io_o_dist_bus1_3 == 16'h0) begin // @[FlexDPEby2.scala 114:36]
        matrix_1_1 <= {{1'd0}, r_mult_2}; // @[FlexDPEby2.scala 115:22]
      end else if (my_Benes_io_o_dist_bus1_2 == 16'h0) begin // @[FlexDPEby2.scala 117:41]
        matrix_1_1 <= {{1'd0}, r_mult_3}; // @[FlexDPEby2.scala 118:23]
      end else begin
        matrix_1_1 <= io_o_adder_2; // @[FlexDPEby2.scala 113:20]
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
module FlexDPUby2(
  input         clock,
  input         reset,
  input  [15:0] io_Stationary_matrix_0_0,
  input  [15:0] io_Stationary_matrix_0_1,
  input  [15:0] io_Stationary_matrix_1_0,
  input  [15:0] io_Stationary_matrix_1_1,
  input  [15:0] io_Streaming_matrix_0_0,
  input  [15:0] io_Streaming_matrix_0_1,
  input  [15:0] io_Streaming_matrix_1_0,
  input  [15:0] io_Streaming_matrix_1_1
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
`endif // RANDOMIZE_REG_INIT
  wire  PF_clock; // @[FlexDPUby2.scala 88:24]
  wire  PF_reset; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Stationary_matrix_0_0; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Stationary_matrix_0_1; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Stationary_matrix_1_0; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Stationary_matrix_1_1; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Streaming_matrix_0; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Streaming_matrix_1; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_0_0; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_0_1; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_0_2; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_0_3; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_1_0; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_1_1; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_1_2; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_1_3; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_2_0; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_2_1; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_2_2; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_2_3; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_3_0; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_3_1; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_3_2; // @[FlexDPUby2.scala 88:24]
  wire [3:0] PF_io_i_mux_bus_3_3; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Source_0; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Source_1; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Source_2; // @[FlexDPUby2.scala 88:24]
  wire [15:0] PF_io_Source_3; // @[FlexDPUby2.scala 88:24]
  wire  PF_io_PF_Valid; // @[FlexDPUby2.scala 88:24]
  wire  PF_io_DataValid; // @[FlexDPUby2.scala 88:24]
  wire  FDPE_clock; // @[FlexDPUby2.scala 119:30]
  wire  FDPE_reset; // @[FlexDPUby2.scala 119:30]
  wire  FDPE_io_i_data_valid; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus_0; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus_1; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus_2; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus_3; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus2_0; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus2_1; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus2_2; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_i_data_bus2_3; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_Stationary_matrix_0_0; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_Stationary_matrix_0_1; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_Stationary_matrix_1_0; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_Stationary_matrix_1_1; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_o_adder_0; // @[FlexDPUby2.scala 119:30]
  wire [15:0] FDPE_io_o_adder_2; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_0_0; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_0_1; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_0_2; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_0_3; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_1_0; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_1_1; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_1_2; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_1_3; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_2_0; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_2_1; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_2_2; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_2_3; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_3_0; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_3_1; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_3_2; // @[FlexDPUby2.scala 119:30]
  wire [3:0] FDPE_io_i_mux_bus_3_3; // @[FlexDPUby2.scala 119:30]
  reg [31:0] DPEDest_0_0; // @[FlexDPUby2.scala 15:26]
  reg [31:0] DPEDest_0_1; // @[FlexDPUby2.scala 15:26]
  reg [31:0] DPEDest_0_2; // @[FlexDPUby2.scala 15:26]
  reg [31:0] DPEDest_0_3; // @[FlexDPUby2.scala 15:26]
  reg [31:0] DPESrc_0_0; // @[FlexDPUby2.scala 16:25]
  reg [31:0] DPESrc_0_1; // @[FlexDPUby2.scala 16:25]
  reg [31:0] DPESrc_1_0; // @[FlexDPUby2.scala 16:25]
  reg [31:0] DPESrc_1_1; // @[FlexDPUby2.scala 16:25]
  reg [31:0] indexRow; // @[FlexDPUby2.scala 18:27]
  reg [31:0] indexCol; // @[FlexDPUby2.scala 19:27]
  reg [31:0] SindexRow; // @[FlexDPUby2.scala 20:28]
  reg [31:0] SindexCol; // @[FlexDPUby2.scala 21:28]
  reg [31:0] iloop; // @[FlexDPUby2.scala 22:24]
  reg [31:0] jloop; // @[FlexDPUby2.scala 23:24]
  reg  SrcDestValid; // @[FlexDPUby2.scala 25:31]
  wire  _SrcDestValid_T_1 = jloop == 32'h1; // @[FlexDPUby2.scala 26:65]
  wire  _SrcDestValid_T_2 = iloop == 32'h1 & jloop == 32'h1; // @[FlexDPUby2.scala 26:55]
  wire  _GEN_105 = ~iloop[0]; // @[FlexDPUby2.scala 32:{46,46}]
  wire [15:0] _GEN_1 = ~iloop[0] & jloop[0] ? io_Stationary_matrix_0_1 : io_Stationary_matrix_0_0; // @[FlexDPUby2.scala 32:{46,46}]
  wire  _GEN_106 = ~jloop[0]; // @[FlexDPUby2.scala 32:{46,46}]
  wire [15:0] _GEN_2 = iloop[0] & ~jloop[0] ? io_Stationary_matrix_1_0 : _GEN_1; // @[FlexDPUby2.scala 32:{46,46}]
  wire [15:0] _GEN_3 = iloop[0] & jloop[0] ? io_Stationary_matrix_1_1 : _GEN_2; // @[FlexDPUby2.scala 32:{46,46}]
  wire [31:0] _DPEDest_T_3_T_4 = {{16'd0}, _GEN_3}; // @[FlexDPUby2.scala 33:{37,37}]
  wire [31:0] _indexCol_T_1 = indexCol + 32'h1; // @[FlexDPUby2.scala 34:30]
  wire [15:0] _GEN_26 = _GEN_106 & iloop[0] ? io_Streaming_matrix_0_1 : io_Streaming_matrix_0_0; // @[FlexDPUby2.scala 36:{45,45}]
  wire [15:0] _GEN_27 = jloop[0] & _GEN_105 ? io_Streaming_matrix_1_0 : _GEN_26; // @[FlexDPUby2.scala 36:{45,45}]
  wire [15:0] _GEN_28 = jloop[0] & iloop[0] ? io_Streaming_matrix_1_1 : _GEN_27; // @[FlexDPUby2.scala 36:{45,45}]
  wire [31:0] _DPESrc_T_8_T_9 = {{16'd0}, _GEN_28}; // @[FlexDPUby2.scala 37:{38,38}]
  wire [31:0] _SindexCol_T_1 = SindexCol + 32'h1; // @[FlexDPUby2.scala 38:32]
  wire  _T_10 = SindexCol == 32'h1; // @[FlexDPUby2.scala 41:21]
  wire [31:0] _SindexRow_T_1 = SindexRow + 32'h1; // @[FlexDPUby2.scala 45:32]
  wire  _T_14 = indexCol == 32'h3; // @[FlexDPUby2.scala 49:20]
  wire [31:0] _indexRow_T_1 = indexRow + 32'h1; // @[FlexDPUby2.scala 53:30]
  wire [31:0] _iloop_T_1 = iloop + 32'h1; // @[FlexDPUby2.scala 59:24]
  wire [31:0] _jloop_T_1 = jloop + 32'h1; // @[FlexDPUby2.scala 63:24]
  reg [31:0] src_0; // @[FlexDPUby2.scala 79:22]
  reg [31:0] src_1; // @[FlexDPUby2.scala 79:22]
  reg [31:0] src_2; // @[FlexDPUby2.scala 79:22]
  reg [31:0] src_3; // @[FlexDPUby2.scala 79:22]
  reg [3:0] muxes_0_0; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_0_1; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_0_2; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_0_3; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_1_0; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_1_1; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_1_2; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_1_3; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_2_0; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_2_1; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_2_2; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_2_3; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_3_0; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_3_1; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_3_2; // @[FlexDPUby2.scala 80:24]
  reg [3:0] muxes_3_3; // @[FlexDPUby2.scala 80:24]
  reg [31:0] dest_0; // @[FlexDPUby2.scala 81:23]
  reg [31:0] dest_1; // @[FlexDPUby2.scala 81:23]
  reg [31:0] dest_2; // @[FlexDPUby2.scala 81:23]
  reg [31:0] dest_3; // @[FlexDPUby2.scala 81:23]
  reg  iterationChange; // @[FlexDPUby2.scala 86:34]
  wire [31:0] _GEN_54 = iterationChange ? DPESrc_1_0 : DPESrc_0_0; // @[FlexDPUby2.scala 90:{32,32}]
  wire [31:0] _GEN_56 = iterationChange ? DPESrc_1_1 : DPESrc_0_1; // @[FlexDPUby2.scala 90:{32,32}]
  wire  _GEN_57 = PF_io_PF_Valid ? iterationChange + 1'h1 : iterationChange; // @[FlexDPUby2.scala 104:36 105:29 86:34]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_2 = {muxes_0_0[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_4 = {{1'd0}, muxes_0_0[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_130 = {_FDPE_io_i_mux_bus_0_0_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_6 = {{1'd0}, _GEN_130}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_7 = _FDPE_io_i_mux_bus_0_0_rev_T_2 | _FDPE_io_i_mux_bus_0_0_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_8 = {{2'd0}, muxes_0_0[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_0_rev_T_10 = {_FDPE_io_i_mux_bus_0_0_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_132 = {{2'd0}, _FDPE_io_i_mux_bus_0_0_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_11 = _FDPE_io_i_mux_bus_0_0_rev_T_7 | _GEN_132; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_0_rev_T_12 = {{3'd0}, muxes_0_0[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_0_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_0_0_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_134 = {{2'd0}, _FDPE_io_i_mux_bus_0_0_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_2 = {muxes_0_1[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_4 = {{1'd0}, muxes_0_1[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_136 = {_FDPE_io_i_mux_bus_0_1_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_6 = {{1'd0}, _GEN_136}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_7 = _FDPE_io_i_mux_bus_0_1_rev_T_2 | _FDPE_io_i_mux_bus_0_1_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_8 = {{2'd0}, muxes_0_1[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_1_rev_T_10 = {_FDPE_io_i_mux_bus_0_1_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_138 = {{2'd0}, _FDPE_io_i_mux_bus_0_1_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_11 = _FDPE_io_i_mux_bus_0_1_rev_T_7 | _GEN_138; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_1_rev_T_12 = {{3'd0}, muxes_0_1[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_1_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_0_1_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_140 = {{2'd0}, _FDPE_io_i_mux_bus_0_1_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_2 = {muxes_0_2[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_4 = {{1'd0}, muxes_0_2[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_142 = {_FDPE_io_i_mux_bus_0_2_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_6 = {{1'd0}, _GEN_142}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_7 = _FDPE_io_i_mux_bus_0_2_rev_T_2 | _FDPE_io_i_mux_bus_0_2_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_8 = {{2'd0}, muxes_0_2[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_2_rev_T_10 = {_FDPE_io_i_mux_bus_0_2_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_144 = {{2'd0}, _FDPE_io_i_mux_bus_0_2_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_11 = _FDPE_io_i_mux_bus_0_2_rev_T_7 | _GEN_144; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_2_rev_T_12 = {{3'd0}, muxes_0_2[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_2_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_0_2_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_146 = {{2'd0}, _FDPE_io_i_mux_bus_0_2_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_2 = {muxes_0_3[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_4 = {{1'd0}, muxes_0_3[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_148 = {_FDPE_io_i_mux_bus_0_3_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_6 = {{1'd0}, _GEN_148}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_7 = _FDPE_io_i_mux_bus_0_3_rev_T_2 | _FDPE_io_i_mux_bus_0_3_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_8 = {{2'd0}, muxes_0_3[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_3_rev_T_10 = {_FDPE_io_i_mux_bus_0_3_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_150 = {{2'd0}, _FDPE_io_i_mux_bus_0_3_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_11 = _FDPE_io_i_mux_bus_0_3_rev_T_7 | _GEN_150; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_0_3_rev_T_12 = {{3'd0}, muxes_0_3[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_0_3_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_0_3_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_152 = {{2'd0}, _FDPE_io_i_mux_bus_0_3_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_2 = {muxes_1_0[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_4 = {{1'd0}, muxes_1_0[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_154 = {_FDPE_io_i_mux_bus_1_0_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_6 = {{1'd0}, _GEN_154}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_7 = _FDPE_io_i_mux_bus_1_0_rev_T_2 | _FDPE_io_i_mux_bus_1_0_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_8 = {{2'd0}, muxes_1_0[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_0_rev_T_10 = {_FDPE_io_i_mux_bus_1_0_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_156 = {{2'd0}, _FDPE_io_i_mux_bus_1_0_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_11 = _FDPE_io_i_mux_bus_1_0_rev_T_7 | _GEN_156; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_0_rev_T_12 = {{3'd0}, muxes_1_0[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_0_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_1_0_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_158 = {{2'd0}, _FDPE_io_i_mux_bus_1_0_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_2 = {muxes_1_1[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_4 = {{1'd0}, muxes_1_1[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_160 = {_FDPE_io_i_mux_bus_1_1_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_6 = {{1'd0}, _GEN_160}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_7 = _FDPE_io_i_mux_bus_1_1_rev_T_2 | _FDPE_io_i_mux_bus_1_1_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_8 = {{2'd0}, muxes_1_1[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_1_rev_T_10 = {_FDPE_io_i_mux_bus_1_1_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_162 = {{2'd0}, _FDPE_io_i_mux_bus_1_1_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_11 = _FDPE_io_i_mux_bus_1_1_rev_T_7 | _GEN_162; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_1_rev_T_12 = {{3'd0}, muxes_1_1[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_1_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_1_1_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_164 = {{2'd0}, _FDPE_io_i_mux_bus_1_1_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_2 = {muxes_1_2[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_4 = {{1'd0}, muxes_1_2[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_166 = {_FDPE_io_i_mux_bus_1_2_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_6 = {{1'd0}, _GEN_166}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_7 = _FDPE_io_i_mux_bus_1_2_rev_T_2 | _FDPE_io_i_mux_bus_1_2_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_8 = {{2'd0}, muxes_1_2[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_2_rev_T_10 = {_FDPE_io_i_mux_bus_1_2_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_168 = {{2'd0}, _FDPE_io_i_mux_bus_1_2_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_11 = _FDPE_io_i_mux_bus_1_2_rev_T_7 | _GEN_168; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_2_rev_T_12 = {{3'd0}, muxes_1_2[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_2_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_1_2_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_170 = {{2'd0}, _FDPE_io_i_mux_bus_1_2_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_2 = {muxes_1_3[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_4 = {{1'd0}, muxes_1_3[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_172 = {_FDPE_io_i_mux_bus_1_3_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_6 = {{1'd0}, _GEN_172}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_7 = _FDPE_io_i_mux_bus_1_3_rev_T_2 | _FDPE_io_i_mux_bus_1_3_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_8 = {{2'd0}, muxes_1_3[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_3_rev_T_10 = {_FDPE_io_i_mux_bus_1_3_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_174 = {{2'd0}, _FDPE_io_i_mux_bus_1_3_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_11 = _FDPE_io_i_mux_bus_1_3_rev_T_7 | _GEN_174; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_1_3_rev_T_12 = {{3'd0}, muxes_1_3[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_1_3_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_1_3_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_176 = {{2'd0}, _FDPE_io_i_mux_bus_1_3_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_2 = {muxes_2_0[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_4 = {{1'd0}, muxes_2_0[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_178 = {_FDPE_io_i_mux_bus_2_0_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_6 = {{1'd0}, _GEN_178}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_7 = _FDPE_io_i_mux_bus_2_0_rev_T_2 | _FDPE_io_i_mux_bus_2_0_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_8 = {{2'd0}, muxes_2_0[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_0_rev_T_10 = {_FDPE_io_i_mux_bus_2_0_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_180 = {{2'd0}, _FDPE_io_i_mux_bus_2_0_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_11 = _FDPE_io_i_mux_bus_2_0_rev_T_7 | _GEN_180; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_0_rev_T_12 = {{3'd0}, muxes_2_0[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_0_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_2_0_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_182 = {{2'd0}, _FDPE_io_i_mux_bus_2_0_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_2 = {muxes_2_1[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_4 = {{1'd0}, muxes_2_1[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_184 = {_FDPE_io_i_mux_bus_2_1_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_6 = {{1'd0}, _GEN_184}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_7 = _FDPE_io_i_mux_bus_2_1_rev_T_2 | _FDPE_io_i_mux_bus_2_1_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_8 = {{2'd0}, muxes_2_1[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_1_rev_T_10 = {_FDPE_io_i_mux_bus_2_1_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_186 = {{2'd0}, _FDPE_io_i_mux_bus_2_1_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_11 = _FDPE_io_i_mux_bus_2_1_rev_T_7 | _GEN_186; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_1_rev_T_12 = {{3'd0}, muxes_2_1[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_1_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_2_1_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_188 = {{2'd0}, _FDPE_io_i_mux_bus_2_1_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_2 = {muxes_2_2[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_4 = {{1'd0}, muxes_2_2[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_190 = {_FDPE_io_i_mux_bus_2_2_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_6 = {{1'd0}, _GEN_190}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_7 = _FDPE_io_i_mux_bus_2_2_rev_T_2 | _FDPE_io_i_mux_bus_2_2_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_8 = {{2'd0}, muxes_2_2[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_2_rev_T_10 = {_FDPE_io_i_mux_bus_2_2_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_192 = {{2'd0}, _FDPE_io_i_mux_bus_2_2_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_11 = _FDPE_io_i_mux_bus_2_2_rev_T_7 | _GEN_192; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_2_rev_T_12 = {{3'd0}, muxes_2_2[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_2_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_2_2_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_194 = {{2'd0}, _FDPE_io_i_mux_bus_2_2_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_2 = {muxes_2_3[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_4 = {{1'd0}, muxes_2_3[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_196 = {_FDPE_io_i_mux_bus_2_3_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_6 = {{1'd0}, _GEN_196}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_7 = _FDPE_io_i_mux_bus_2_3_rev_T_2 | _FDPE_io_i_mux_bus_2_3_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_8 = {{2'd0}, muxes_2_3[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_3_rev_T_10 = {_FDPE_io_i_mux_bus_2_3_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_198 = {{2'd0}, _FDPE_io_i_mux_bus_2_3_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_11 = _FDPE_io_i_mux_bus_2_3_rev_T_7 | _GEN_198; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_2_3_rev_T_12 = {{3'd0}, muxes_2_3[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_2_3_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_2_3_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_200 = {{2'd0}, _FDPE_io_i_mux_bus_2_3_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_2 = {muxes_3_0[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_4 = {{1'd0}, muxes_3_0[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_202 = {_FDPE_io_i_mux_bus_3_0_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_6 = {{1'd0}, _GEN_202}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_7 = _FDPE_io_i_mux_bus_3_0_rev_T_2 | _FDPE_io_i_mux_bus_3_0_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_8 = {{2'd0}, muxes_3_0[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_0_rev_T_10 = {_FDPE_io_i_mux_bus_3_0_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_204 = {{2'd0}, _FDPE_io_i_mux_bus_3_0_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_11 = _FDPE_io_i_mux_bus_3_0_rev_T_7 | _GEN_204; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_0_rev_T_12 = {{3'd0}, muxes_3_0[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_0_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_3_0_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_206 = {{2'd0}, _FDPE_io_i_mux_bus_3_0_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_2 = {muxes_3_1[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_4 = {{1'd0}, muxes_3_1[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_208 = {_FDPE_io_i_mux_bus_3_1_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_6 = {{1'd0}, _GEN_208}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_7 = _FDPE_io_i_mux_bus_3_1_rev_T_2 | _FDPE_io_i_mux_bus_3_1_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_8 = {{2'd0}, muxes_3_1[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_1_rev_T_10 = {_FDPE_io_i_mux_bus_3_1_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_210 = {{2'd0}, _FDPE_io_i_mux_bus_3_1_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_11 = _FDPE_io_i_mux_bus_3_1_rev_T_7 | _GEN_210; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_1_rev_T_12 = {{3'd0}, muxes_3_1[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_1_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_3_1_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_212 = {{2'd0}, _FDPE_io_i_mux_bus_3_1_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_2 = {muxes_3_2[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_4 = {{1'd0}, muxes_3_2[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_214 = {_FDPE_io_i_mux_bus_3_2_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_6 = {{1'd0}, _GEN_214}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_7 = _FDPE_io_i_mux_bus_3_2_rev_T_2 | _FDPE_io_i_mux_bus_3_2_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_8 = {{2'd0}, muxes_3_2[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_2_rev_T_10 = {_FDPE_io_i_mux_bus_3_2_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_216 = {{2'd0}, _FDPE_io_i_mux_bus_3_2_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_11 = _FDPE_io_i_mux_bus_3_2_rev_T_7 | _GEN_216; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_2_rev_T_12 = {{3'd0}, muxes_3_2[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_2_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_3_2_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_218 = {{2'd0}, _FDPE_io_i_mux_bus_3_2_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_2 = {muxes_3_3[0], 3'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_4 = {{1'd0}, muxes_3_3[3:1]}; // @[FlexDPUby2.scala 74:24]
  wire [2:0] _GEN_220 = {_FDPE_io_i_mux_bus_3_3_rev_T_4[0], 2'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_6 = {{1'd0}, _GEN_220}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_7 = _FDPE_io_i_mux_bus_3_3_rev_T_2 | _FDPE_io_i_mux_bus_3_3_rev_T_6; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_8 = {{2'd0}, muxes_3_3[3:2]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_3_rev_T_10 = {_FDPE_io_i_mux_bus_3_3_rev_T_8[0], 1'h0}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_222 = {{2'd0}, _FDPE_io_i_mux_bus_3_3_rev_T_10}; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_11 = _FDPE_io_i_mux_bus_3_3_rev_T_7 | _GEN_222; // @[FlexDPUby2.scala 74:17]
  wire [3:0] _FDPE_io_i_mux_bus_3_3_rev_T_12 = {{3'd0}, muxes_3_3[3]}; // @[FlexDPUby2.scala 74:24]
  wire [1:0] _FDPE_io_i_mux_bus_3_3_rev_T_14 = {{1'd0}, _FDPE_io_i_mux_bus_3_3_rev_T_12[0]}; // @[FlexDPUby2.scala 74:35]
  wire [3:0] _GEN_224 = {{2'd0}, _FDPE_io_i_mux_bus_3_3_rev_T_14}; // @[FlexDPUby2.scala 74:17]
  PathFinder PF ( // @[FlexDPUby2.scala 88:24]
    .clock(PF_clock),
    .reset(PF_reset),
    .io_Stationary_matrix_0_0(PF_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(PF_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(PF_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(PF_io_Stationary_matrix_1_1),
    .io_Streaming_matrix_0(PF_io_Streaming_matrix_0),
    .io_Streaming_matrix_1(PF_io_Streaming_matrix_1),
    .io_i_mux_bus_0_0(PF_io_i_mux_bus_0_0),
    .io_i_mux_bus_0_1(PF_io_i_mux_bus_0_1),
    .io_i_mux_bus_0_2(PF_io_i_mux_bus_0_2),
    .io_i_mux_bus_0_3(PF_io_i_mux_bus_0_3),
    .io_i_mux_bus_1_0(PF_io_i_mux_bus_1_0),
    .io_i_mux_bus_1_1(PF_io_i_mux_bus_1_1),
    .io_i_mux_bus_1_2(PF_io_i_mux_bus_1_2),
    .io_i_mux_bus_1_3(PF_io_i_mux_bus_1_3),
    .io_i_mux_bus_2_0(PF_io_i_mux_bus_2_0),
    .io_i_mux_bus_2_1(PF_io_i_mux_bus_2_1),
    .io_i_mux_bus_2_2(PF_io_i_mux_bus_2_2),
    .io_i_mux_bus_2_3(PF_io_i_mux_bus_2_3),
    .io_i_mux_bus_3_0(PF_io_i_mux_bus_3_0),
    .io_i_mux_bus_3_1(PF_io_i_mux_bus_3_1),
    .io_i_mux_bus_3_2(PF_io_i_mux_bus_3_2),
    .io_i_mux_bus_3_3(PF_io_i_mux_bus_3_3),
    .io_Source_0(PF_io_Source_0),
    .io_Source_1(PF_io_Source_1),
    .io_Source_2(PF_io_Source_2),
    .io_Source_3(PF_io_Source_3),
    .io_PF_Valid(PF_io_PF_Valid),
    .io_DataValid(PF_io_DataValid)
  );
  flexdpecom4 FDPE ( // @[FlexDPUby2.scala 119:30]
    .clock(FDPE_clock),
    .reset(FDPE_reset),
    .io_i_data_valid(FDPE_io_i_data_valid),
    .io_i_data_bus_0(FDPE_io_i_data_bus_0),
    .io_i_data_bus_1(FDPE_io_i_data_bus_1),
    .io_i_data_bus_2(FDPE_io_i_data_bus_2),
    .io_i_data_bus_3(FDPE_io_i_data_bus_3),
    .io_i_data_bus2_0(FDPE_io_i_data_bus2_0),
    .io_i_data_bus2_1(FDPE_io_i_data_bus2_1),
    .io_i_data_bus2_2(FDPE_io_i_data_bus2_2),
    .io_i_data_bus2_3(FDPE_io_i_data_bus2_3),
    .io_Stationary_matrix_0_0(FDPE_io_Stationary_matrix_0_0),
    .io_Stationary_matrix_0_1(FDPE_io_Stationary_matrix_0_1),
    .io_Stationary_matrix_1_0(FDPE_io_Stationary_matrix_1_0),
    .io_Stationary_matrix_1_1(FDPE_io_Stationary_matrix_1_1),
    .io_o_adder_0(FDPE_io_o_adder_0),
    .io_o_adder_2(FDPE_io_o_adder_2),
    .io_i_mux_bus_0_0(FDPE_io_i_mux_bus_0_0),
    .io_i_mux_bus_0_1(FDPE_io_i_mux_bus_0_1),
    .io_i_mux_bus_0_2(FDPE_io_i_mux_bus_0_2),
    .io_i_mux_bus_0_3(FDPE_io_i_mux_bus_0_3),
    .io_i_mux_bus_1_0(FDPE_io_i_mux_bus_1_0),
    .io_i_mux_bus_1_1(FDPE_io_i_mux_bus_1_1),
    .io_i_mux_bus_1_2(FDPE_io_i_mux_bus_1_2),
    .io_i_mux_bus_1_3(FDPE_io_i_mux_bus_1_3),
    .io_i_mux_bus_2_0(FDPE_io_i_mux_bus_2_0),
    .io_i_mux_bus_2_1(FDPE_io_i_mux_bus_2_1),
    .io_i_mux_bus_2_2(FDPE_io_i_mux_bus_2_2),
    .io_i_mux_bus_2_3(FDPE_io_i_mux_bus_2_3),
    .io_i_mux_bus_3_0(FDPE_io_i_mux_bus_3_0),
    .io_i_mux_bus_3_1(FDPE_io_i_mux_bus_3_1),
    .io_i_mux_bus_3_2(FDPE_io_i_mux_bus_3_2),
    .io_i_mux_bus_3_3(FDPE_io_i_mux_bus_3_3)
  );
  assign PF_clock = clock;
  assign PF_reset = reset;
  assign PF_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPUby2.scala 89:33]
  assign PF_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPUby2.scala 89:33]
  assign PF_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPUby2.scala 89:33]
  assign PF_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPUby2.scala 89:33]
  assign PF_io_Streaming_matrix_0 = _GEN_54[15:0]; // @[FlexDPUby2.scala 90:32]
  assign PF_io_Streaming_matrix_1 = _GEN_56[15:0]; // @[FlexDPUby2.scala 90:32]
  assign PF_io_DataValid = SrcDestValid; // @[FlexDPUby2.scala 92:25]
  assign FDPE_clock = clock;
  assign FDPE_reset = reset;
  assign FDPE_io_i_data_valid = 1'h1; // @[FlexDPUby2.scala 121:34]
  assign FDPE_io_i_data_bus_0 = dest_0[15:0]; // @[FlexDPUby2.scala 122:32]
  assign FDPE_io_i_data_bus_1 = dest_1[15:0]; // @[FlexDPUby2.scala 122:32]
  assign FDPE_io_i_data_bus_2 = dest_2[15:0]; // @[FlexDPUby2.scala 122:32]
  assign FDPE_io_i_data_bus_3 = dest_3[15:0]; // @[FlexDPUby2.scala 122:32]
  assign FDPE_io_i_data_bus2_0 = src_0[15:0]; // @[FlexDPUby2.scala 124:33]
  assign FDPE_io_i_data_bus2_1 = src_1[15:0]; // @[FlexDPUby2.scala 124:33]
  assign FDPE_io_i_data_bus2_2 = src_2[15:0]; // @[FlexDPUby2.scala 124:33]
  assign FDPE_io_i_data_bus2_3 = src_3[15:0]; // @[FlexDPUby2.scala 124:33]
  assign FDPE_io_Stationary_matrix_0_0 = io_Stationary_matrix_0_0; // @[FlexDPUby2.scala 129:39]
  assign FDPE_io_Stationary_matrix_0_1 = io_Stationary_matrix_0_1; // @[FlexDPUby2.scala 129:39]
  assign FDPE_io_Stationary_matrix_1_0 = io_Stationary_matrix_1_0; // @[FlexDPUby2.scala 129:39]
  assign FDPE_io_Stationary_matrix_1_1 = io_Stationary_matrix_1_1; // @[FlexDPUby2.scala 129:39]
  assign FDPE_io_i_mux_bus_0_0 = _FDPE_io_i_mux_bus_0_0_rev_T_11 | _GEN_134; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_0_1 = _FDPE_io_i_mux_bus_0_1_rev_T_11 | _GEN_140; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_0_2 = _FDPE_io_i_mux_bus_0_2_rev_T_11 | _GEN_146; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_0_3 = _FDPE_io_i_mux_bus_0_3_rev_T_11 | _GEN_152; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_1_0 = _FDPE_io_i_mux_bus_1_0_rev_T_11 | _GEN_158; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_1_1 = _FDPE_io_i_mux_bus_1_1_rev_T_11 | _GEN_164; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_1_2 = _FDPE_io_i_mux_bus_1_2_rev_T_11 | _GEN_170; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_1_3 = _FDPE_io_i_mux_bus_1_3_rev_T_11 | _GEN_176; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_2_0 = _FDPE_io_i_mux_bus_2_0_rev_T_11 | _GEN_182; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_2_1 = _FDPE_io_i_mux_bus_2_1_rev_T_11 | _GEN_188; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_2_2 = _FDPE_io_i_mux_bus_2_2_rev_T_11 | _GEN_194; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_2_3 = _FDPE_io_i_mux_bus_2_3_rev_T_11 | _GEN_200; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_3_0 = _FDPE_io_i_mux_bus_3_0_rev_T_11 | _GEN_206; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_3_1 = _FDPE_io_i_mux_bus_3_1_rev_T_11 | _GEN_212; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_3_2 = _FDPE_io_i_mux_bus_3_2_rev_T_11 | _GEN_218; // @[FlexDPUby2.scala 74:17]
  assign FDPE_io_i_mux_bus_3_3 = _FDPE_io_i_mux_bus_3_3_rev_T_11 | _GEN_224; // @[FlexDPUby2.scala 74:17]
  always @(posedge clock) begin
    if (reset) begin // @[FlexDPUby2.scala 15:26]
      DPEDest_0_0 <= 32'h0; // @[FlexDPUby2.scala 15:26]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPUby2.scala 32:54]
      if (~indexRow[0] & 2'h0 == indexCol[1:0]) begin // @[FlexDPUby2.scala 33:37]
        DPEDest_0_0 <= _DPEDest_T_3_T_4; // @[FlexDPUby2.scala 33:37]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 15:26]
      DPEDest_0_1 <= 32'h0; // @[FlexDPUby2.scala 15:26]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPUby2.scala 32:54]
      if (~indexRow[0] & 2'h1 == indexCol[1:0]) begin // @[FlexDPUby2.scala 33:37]
        DPEDest_0_1 <= _DPEDest_T_3_T_4; // @[FlexDPUby2.scala 33:37]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 15:26]
      DPEDest_0_2 <= 32'h0; // @[FlexDPUby2.scala 15:26]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPUby2.scala 32:54]
      if (~indexRow[0] & 2'h2 == indexCol[1:0]) begin // @[FlexDPUby2.scala 33:37]
        DPEDest_0_2 <= _DPEDest_T_3_T_4; // @[FlexDPUby2.scala 33:37]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 15:26]
      DPEDest_0_3 <= 32'h0; // @[FlexDPUby2.scala 15:26]
    end else if (_GEN_3 != 16'h0) begin // @[FlexDPUby2.scala 32:54]
      if (~indexRow[0] & 2'h3 == indexCol[1:0]) begin // @[FlexDPUby2.scala 33:37]
        DPEDest_0_3 <= _DPEDest_T_3_T_4; // @[FlexDPUby2.scala 33:37]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 16:25]
      DPESrc_0_0 <= 32'h0; // @[FlexDPUby2.scala 16:25]
    end else if (_GEN_28 != 16'h0) begin // @[FlexDPUby2.scala 36:53]
      if (~SindexRow[0] & ~SindexCol[0]) begin // @[FlexDPUby2.scala 37:38]
        DPESrc_0_0 <= _DPESrc_T_8_T_9; // @[FlexDPUby2.scala 37:38]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 16:25]
      DPESrc_0_1 <= 32'h0; // @[FlexDPUby2.scala 16:25]
    end else if (_GEN_28 != 16'h0) begin // @[FlexDPUby2.scala 36:53]
      if (~SindexRow[0] & SindexCol[0]) begin // @[FlexDPUby2.scala 37:38]
        DPESrc_0_1 <= _DPESrc_T_8_T_9; // @[FlexDPUby2.scala 37:38]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 16:25]
      DPESrc_1_0 <= 32'h0; // @[FlexDPUby2.scala 16:25]
    end else if (_GEN_28 != 16'h0) begin // @[FlexDPUby2.scala 36:53]
      if (SindexRow[0] & ~SindexCol[0]) begin // @[FlexDPUby2.scala 37:38]
        DPESrc_1_0 <= _DPESrc_T_8_T_9; // @[FlexDPUby2.scala 37:38]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 16:25]
      DPESrc_1_1 <= 32'h0; // @[FlexDPUby2.scala 16:25]
    end else if (_GEN_28 != 16'h0) begin // @[FlexDPUby2.scala 36:53]
      if (SindexRow[0] & SindexCol[0]) begin // @[FlexDPUby2.scala 37:38]
        DPESrc_1_1 <= _DPESrc_T_8_T_9; // @[FlexDPUby2.scala 37:38]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 18:27]
      indexRow <= 32'h0; // @[FlexDPUby2.scala 18:27]
    end else if (!(indexCol == 32'h3 & indexRow == 32'h1)) begin // @[FlexDPUby2.scala 49:86]
      if (_T_14) begin // @[FlexDPUby2.scala 52:52]
        indexRow <= _indexRow_T_1; // @[FlexDPUby2.scala 53:18]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 19:27]
      indexCol <= 32'h0; // @[FlexDPUby2.scala 19:27]
    end else if (!(indexCol == 32'h3 & indexRow == 32'h1)) begin // @[FlexDPUby2.scala 49:86]
      if (_T_14) begin // @[FlexDPUby2.scala 52:52]
        indexCol <= 32'h0; // @[FlexDPUby2.scala 54:18]
      end else if (_GEN_3 != 16'h0) begin // @[FlexDPUby2.scala 32:54]
        indexCol <= _indexCol_T_1; // @[FlexDPUby2.scala 34:18]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 20:28]
      SindexRow <= 32'h0; // @[FlexDPUby2.scala 20:28]
    end else if (!(SindexCol == 32'h1 & SindexRow == 32'h1)) begin // @[FlexDPUby2.scala 41:88]
      if (_T_10) begin // @[FlexDPUby2.scala 44:53]
        SindexRow <= _SindexRow_T_1; // @[FlexDPUby2.scala 45:19]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 21:28]
      SindexCol <= 32'h0; // @[FlexDPUby2.scala 21:28]
    end else if (!(SindexCol == 32'h1 & SindexRow == 32'h1)) begin // @[FlexDPUby2.scala 41:88]
      if (_T_10) begin // @[FlexDPUby2.scala 44:53]
        SindexCol <= 32'h0; // @[FlexDPUby2.scala 46:19]
      end else if (_GEN_28 != 16'h0) begin // @[FlexDPUby2.scala 36:53]
        SindexCol <= _SindexCol_T_1; // @[FlexDPUby2.scala 38:19]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 22:24]
      iloop <= 32'h0; // @[FlexDPUby2.scala 22:24]
    end else if (iloop < 32'h1 & _SrcDestValid_T_1) begin // @[FlexDPUby2.scala 58:77]
      iloop <= _iloop_T_1; // @[FlexDPUby2.scala 59:15]
    end
    if (reset) begin // @[FlexDPUby2.scala 23:24]
      jloop <= 32'h0; // @[FlexDPUby2.scala 23:24]
    end else if (iloop <= 32'h1 & jloop < 32'h1) begin // @[FlexDPUby2.scala 62:76]
      jloop <= _jloop_T_1; // @[FlexDPUby2.scala 63:15]
    end else if (!(_SrcDestValid_T_2)) begin // @[FlexDPUby2.scala 64:83]
      jloop <= 32'h0; // @[FlexDPUby2.scala 67:15]
    end
    if (reset) begin // @[FlexDPUby2.scala 25:31]
      SrcDestValid <= 1'h0; // @[FlexDPUby2.scala 25:31]
    end else begin
      SrcDestValid <= iloop == 32'h1 & jloop == 32'h1; // @[FlexDPUby2.scala 26:18]
    end
    if (reset) begin // @[FlexDPUby2.scala 79:22]
      src_0 <= 32'h0; // @[FlexDPUby2.scala 79:22]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        src_0 <= {{16'd0}, PF_io_Source_0}; // @[FlexDPUby2.scala 109:24]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 79:22]
      src_1 <= 32'h0; // @[FlexDPUby2.scala 79:22]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        src_1 <= {{16'd0}, PF_io_Source_1}; // @[FlexDPUby2.scala 109:24]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 79:22]
      src_2 <= 32'h0; // @[FlexDPUby2.scala 79:22]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        src_2 <= {{16'd0}, PF_io_Source_2}; // @[FlexDPUby2.scala 109:24]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 79:22]
      src_3 <= 32'h0; // @[FlexDPUby2.scala 79:22]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        src_3 <= {{16'd0}, PF_io_Source_3}; // @[FlexDPUby2.scala 109:24]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_0_0 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_0_0 <= PF_io_i_mux_bus_0_0; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_0_1 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_0_1 <= PF_io_i_mux_bus_0_1; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_0_2 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_0_2 <= PF_io_i_mux_bus_0_2; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_0_3 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_0_3 <= PF_io_i_mux_bus_0_3; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_1_0 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_1_0 <= PF_io_i_mux_bus_1_0; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_1_1 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_1_1 <= PF_io_i_mux_bus_1_1; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_1_2 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_1_2 <= PF_io_i_mux_bus_1_2; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_1_3 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_1_3 <= PF_io_i_mux_bus_1_3; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_2_0 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_2_0 <= PF_io_i_mux_bus_2_0; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_2_1 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_2_1 <= PF_io_i_mux_bus_2_1; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_2_2 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_2_2 <= PF_io_i_mux_bus_2_2; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_2_3 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_2_3 <= PF_io_i_mux_bus_2_3; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_3_0 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_3_0 <= PF_io_i_mux_bus_3_0; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_3_1 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_3_1 <= PF_io_i_mux_bus_3_1; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_3_2 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_3_2 <= PF_io_i_mux_bus_3_2; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 80:24]
      muxes_3_3 <= 4'h0; // @[FlexDPUby2.scala 80:24]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        muxes_3_3 <= PF_io_i_mux_bus_3_3; // @[FlexDPUby2.scala 111:33]
      end
    end
    if (reset) begin // @[FlexDPUby2.scala 81:23]
      dest_0 <= 32'h0; // @[FlexDPUby2.scala 81:23]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      dest_0 <= DPEDest_0_0; // @[FlexDPUby2.scala 97:21]
    end
    if (reset) begin // @[FlexDPUby2.scala 81:23]
      dest_1 <= 32'h0; // @[FlexDPUby2.scala 81:23]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      dest_1 <= DPEDest_0_1; // @[FlexDPUby2.scala 97:21]
    end
    if (reset) begin // @[FlexDPUby2.scala 81:23]
      dest_2 <= 32'h0; // @[FlexDPUby2.scala 81:23]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      dest_2 <= DPEDest_0_2; // @[FlexDPUby2.scala 97:21]
    end
    if (reset) begin // @[FlexDPUby2.scala 81:23]
      dest_3 <= 32'h0; // @[FlexDPUby2.scala 81:23]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      dest_3 <= DPEDest_0_3; // @[FlexDPUby2.scala 97:21]
    end
    if (reset) begin // @[FlexDPUby2.scala 86:34]
      iterationChange <= 1'h0; // @[FlexDPUby2.scala 86:34]
    end else if (SrcDestValid) begin // @[FlexDPUby2.scala 87:24]
      if (PF_io_PF_Valid) begin // @[FlexDPUby2.scala 101:30]
        if (!(iterationChange)) begin // @[FlexDPUby2.scala 102:58]
          iterationChange <= _GEN_57;
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
  DPEDest_0_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  DPEDest_0_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  DPEDest_0_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  DPEDest_0_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  DPESrc_0_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  DPESrc_0_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  DPESrc_1_0 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  DPESrc_1_1 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  indexRow = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  indexCol = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  SindexRow = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  SindexCol = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  iloop = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  jloop = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  SrcDestValid = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  src_0 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  src_1 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  src_2 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  src_3 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  muxes_0_0 = _RAND_19[3:0];
  _RAND_20 = {1{`RANDOM}};
  muxes_0_1 = _RAND_20[3:0];
  _RAND_21 = {1{`RANDOM}};
  muxes_0_2 = _RAND_21[3:0];
  _RAND_22 = {1{`RANDOM}};
  muxes_0_3 = _RAND_22[3:0];
  _RAND_23 = {1{`RANDOM}};
  muxes_1_0 = _RAND_23[3:0];
  _RAND_24 = {1{`RANDOM}};
  muxes_1_1 = _RAND_24[3:0];
  _RAND_25 = {1{`RANDOM}};
  muxes_1_2 = _RAND_25[3:0];
  _RAND_26 = {1{`RANDOM}};
  muxes_1_3 = _RAND_26[3:0];
  _RAND_27 = {1{`RANDOM}};
  muxes_2_0 = _RAND_27[3:0];
  _RAND_28 = {1{`RANDOM}};
  muxes_2_1 = _RAND_28[3:0];
  _RAND_29 = {1{`RANDOM}};
  muxes_2_2 = _RAND_29[3:0];
  _RAND_30 = {1{`RANDOM}};
  muxes_2_3 = _RAND_30[3:0];
  _RAND_31 = {1{`RANDOM}};
  muxes_3_0 = _RAND_31[3:0];
  _RAND_32 = {1{`RANDOM}};
  muxes_3_1 = _RAND_32[3:0];
  _RAND_33 = {1{`RANDOM}};
  muxes_3_2 = _RAND_33[3:0];
  _RAND_34 = {1{`RANDOM}};
  muxes_3_3 = _RAND_34[3:0];
  _RAND_35 = {1{`RANDOM}};
  dest_0 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  dest_1 = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  dest_2 = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  dest_3 = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  iterationChange = _RAND_39[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

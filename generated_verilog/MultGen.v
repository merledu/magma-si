module SimpleMultiplier(
  input  [15:0] io_A,
  input  [15:0] io_B,
  output [15:0] io_O
);
  wire [31:0] _io_O_T = io_A * io_B; // @[SimpleMultiplier.scala 14:18]
  assign io_O = _io_O_T[15:0]; // @[SimpleMultiplier.scala 14:10]
endmodule
module MultSwitch(
  input         clock,
  input         reset,
  input         io_i_valid,
  input  [15:0] io_i_data,
  input         io_i_stationary,
  output [31:0] io_o_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [15:0] multiplier_module_io_A; // @[MultSwitch.scala 45:33]
  wire [15:0] multiplier_module_io_B; // @[MultSwitch.scala 45:33]
  wire [15:0] multiplier_module_io_O; // @[MultSwitch.scala 45:33]
  reg [15:0] r_buffer; // @[MultSwitch.scala 16:25]
  reg  r_buffer_valid; // @[MultSwitch.scala 17:31]
  wire  _GEN_1 = io_i_stationary & io_i_valid | r_buffer_valid; // @[MultSwitch.scala 25:39 27:20 17:31]
  wire  _w_A_T = r_buffer_valid & io_i_valid; // @[MultSwitch.scala 31:32]
  wire [31:0] multiplier_output = {{16'd0}, multiplier_module_io_O}; // @[MultSwitch.scala 43:32 49:21]
  SimpleMultiplier multiplier_module ( // @[MultSwitch.scala 45:33]
    .io_A(multiplier_module_io_A),
    .io_B(multiplier_module_io_B),
    .io_O(multiplier_module_io_O)
  );
  assign io_o_data = {16'h0,multiplier_output[15:0]}; // @[Cat.scala 33:92]
  assign multiplier_module_io_A = r_buffer_valid & io_i_valid ? io_i_data : 16'h0; // @[MultSwitch.scala 31:16]
  assign multiplier_module_io_B = _w_A_T ? r_buffer : 16'h0; // @[MultSwitch.scala 32:16]
  always @(posedge clock) begin
    if (reset) begin // @[MultSwitch.scala 16:25]
      r_buffer <= 16'h0; // @[MultSwitch.scala 16:25]
    end else if (io_i_stationary & io_i_valid) begin // @[MultSwitch.scala 25:39]
      r_buffer <= io_i_data; // @[MultSwitch.scala 26:14]
    end
    if (reset) begin // @[MultSwitch.scala 17:31]
      r_buffer_valid <= 1'h0; // @[MultSwitch.scala 17:31]
    end else begin
      r_buffer_valid <= _GEN_1;
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
  r_buffer = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  r_buffer_valid = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MultGen(
  input         clock,
  input         reset,
  input         io_i_valid,
  input  [15:0] io_i_data_bus_0,
  input  [15:0] io_i_data_bus_1,
  input  [15:0] io_i_data_bus_2,
  input  [15:0] io_i_data_bus_3,
  input  [15:0] io_i_data_bus_4,
  input  [15:0] io_i_data_bus_5,
  input  [15:0] io_i_data_bus_6,
  input  [15:0] io_i_data_bus_7,
  input  [15:0] io_i_data_bus_8,
  input  [15:0] io_i_data_bus_9,
  input  [15:0] io_i_data_bus_10,
  input  [15:0] io_i_data_bus_11,
  input  [15:0] io_i_data_bus_12,
  input  [15:0] io_i_data_bus_13,
  input  [15:0] io_i_data_bus_14,
  input  [15:0] io_i_data_bus_15,
  input  [15:0] io_i_data_bus_16,
  input  [15:0] io_i_data_bus_17,
  input  [15:0] io_i_data_bus_18,
  input  [15:0] io_i_data_bus_19,
  input  [15:0] io_i_data_bus_20,
  input  [15:0] io_i_data_bus_21,
  input  [15:0] io_i_data_bus_22,
  input  [15:0] io_i_data_bus_23,
  input  [15:0] io_i_data_bus_24,
  input  [15:0] io_i_data_bus_25,
  input  [15:0] io_i_data_bus_26,
  input  [15:0] io_i_data_bus_27,
  input  [15:0] io_i_data_bus_28,
  input  [15:0] io_i_data_bus_29,
  input  [15:0] io_i_data_bus_30,
  input  [15:0] io_i_data_bus_31,
  input         io_i_stationary,
  output        io_o_valid,
  output [31:0] io_o_data_bus_0,
  output [31:0] io_o_data_bus_1,
  output [31:0] io_o_data_bus_2,
  output [31:0] io_o_data_bus_3,
  output [31:0] io_o_data_bus_4,
  output [31:0] io_o_data_bus_5,
  output [31:0] io_o_data_bus_6,
  output [31:0] io_o_data_bus_7,
  output [31:0] io_o_data_bus_8,
  output [31:0] io_o_data_bus_9,
  output [31:0] io_o_data_bus_10,
  output [31:0] io_o_data_bus_11,
  output [31:0] io_o_data_bus_12,
  output [31:0] io_o_data_bus_13,
  output [31:0] io_o_data_bus_14,
  output [31:0] io_o_data_bus_15,
  output [31:0] io_o_data_bus_16,
  output [31:0] io_o_data_bus_17,
  output [31:0] io_o_data_bus_18,
  output [31:0] io_o_data_bus_19,
  output [31:0] io_o_data_bus_20,
  output [31:0] io_o_data_bus_21,
  output [31:0] io_o_data_bus_22,
  output [31:0] io_o_data_bus_23,
  output [31:0] io_o_data_bus_24,
  output [31:0] io_o_data_bus_25,
  output [31:0] io_o_data_bus_26,
  output [31:0] io_o_data_bus_27,
  output [31:0] io_o_data_bus_28,
  output [31:0] io_o_data_bus_29,
  output [31:0] io_o_data_bus_30,
  output [31:0] io_o_data_bus_31
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  myMultSwitch_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_1_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_1_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_1_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_1_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_1_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_1_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_2_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_2_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_2_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_2_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_2_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_2_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_3_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_3_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_3_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_3_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_3_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_3_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_4_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_4_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_4_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_4_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_4_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_4_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_5_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_5_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_5_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_5_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_5_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_5_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_6_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_6_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_6_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_6_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_6_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_6_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_7_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_7_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_7_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_7_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_7_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_7_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_8_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_8_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_8_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_8_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_8_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_8_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_9_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_9_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_9_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_9_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_9_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_9_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_10_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_10_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_10_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_10_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_10_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_10_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_11_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_11_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_11_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_11_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_11_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_11_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_12_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_12_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_12_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_12_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_12_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_12_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_13_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_13_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_13_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_13_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_13_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_13_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_14_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_14_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_14_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_14_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_14_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_14_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_15_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_15_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_15_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_15_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_15_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_15_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_16_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_16_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_16_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_16_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_16_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_16_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_17_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_17_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_17_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_17_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_17_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_17_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_18_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_18_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_18_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_18_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_18_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_18_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_19_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_19_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_19_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_19_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_19_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_19_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_20_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_20_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_20_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_20_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_20_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_20_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_21_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_21_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_21_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_21_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_21_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_21_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_22_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_22_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_22_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_22_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_22_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_22_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_23_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_23_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_23_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_23_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_23_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_23_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_24_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_24_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_24_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_24_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_24_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_24_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_25_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_25_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_25_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_25_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_25_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_25_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_26_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_26_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_26_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_26_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_26_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_26_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_27_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_27_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_27_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_27_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_27_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_27_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_28_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_28_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_28_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_28_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_28_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_28_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_29_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_29_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_29_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_29_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_29_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_29_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_30_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_30_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_30_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_30_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_30_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_30_io_o_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_31_clock; // @[MultGen.scala 26:30]
  wire  myMultSwitch_31_reset; // @[MultGen.scala 26:30]
  wire  myMultSwitch_31_io_i_valid; // @[MultGen.scala 26:30]
  wire [15:0] myMultSwitch_31_io_i_data; // @[MultGen.scala 26:30]
  wire  myMultSwitch_31_io_i_stationary; // @[MultGen.scala 26:30]
  wire [31:0] myMultSwitch_31_io_o_data; // @[MultGen.scala 26:30]
  reg  r_valid; // @[MultGen.scala 16:24]
  reg  r_stationary; // @[MultGen.scala 17:29]
  MultSwitch myMultSwitch ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_clock),
    .reset(myMultSwitch_reset),
    .io_i_valid(myMultSwitch_io_i_valid),
    .io_i_data(myMultSwitch_io_i_data),
    .io_i_stationary(myMultSwitch_io_i_stationary),
    .io_o_data(myMultSwitch_io_o_data)
  );
  MultSwitch myMultSwitch_1 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_1_clock),
    .reset(myMultSwitch_1_reset),
    .io_i_valid(myMultSwitch_1_io_i_valid),
    .io_i_data(myMultSwitch_1_io_i_data),
    .io_i_stationary(myMultSwitch_1_io_i_stationary),
    .io_o_data(myMultSwitch_1_io_o_data)
  );
  MultSwitch myMultSwitch_2 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_2_clock),
    .reset(myMultSwitch_2_reset),
    .io_i_valid(myMultSwitch_2_io_i_valid),
    .io_i_data(myMultSwitch_2_io_i_data),
    .io_i_stationary(myMultSwitch_2_io_i_stationary),
    .io_o_data(myMultSwitch_2_io_o_data)
  );
  MultSwitch myMultSwitch_3 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_3_clock),
    .reset(myMultSwitch_3_reset),
    .io_i_valid(myMultSwitch_3_io_i_valid),
    .io_i_data(myMultSwitch_3_io_i_data),
    .io_i_stationary(myMultSwitch_3_io_i_stationary),
    .io_o_data(myMultSwitch_3_io_o_data)
  );
  MultSwitch myMultSwitch_4 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_4_clock),
    .reset(myMultSwitch_4_reset),
    .io_i_valid(myMultSwitch_4_io_i_valid),
    .io_i_data(myMultSwitch_4_io_i_data),
    .io_i_stationary(myMultSwitch_4_io_i_stationary),
    .io_o_data(myMultSwitch_4_io_o_data)
  );
  MultSwitch myMultSwitch_5 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_5_clock),
    .reset(myMultSwitch_5_reset),
    .io_i_valid(myMultSwitch_5_io_i_valid),
    .io_i_data(myMultSwitch_5_io_i_data),
    .io_i_stationary(myMultSwitch_5_io_i_stationary),
    .io_o_data(myMultSwitch_5_io_o_data)
  );
  MultSwitch myMultSwitch_6 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_6_clock),
    .reset(myMultSwitch_6_reset),
    .io_i_valid(myMultSwitch_6_io_i_valid),
    .io_i_data(myMultSwitch_6_io_i_data),
    .io_i_stationary(myMultSwitch_6_io_i_stationary),
    .io_o_data(myMultSwitch_6_io_o_data)
  );
  MultSwitch myMultSwitch_7 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_7_clock),
    .reset(myMultSwitch_7_reset),
    .io_i_valid(myMultSwitch_7_io_i_valid),
    .io_i_data(myMultSwitch_7_io_i_data),
    .io_i_stationary(myMultSwitch_7_io_i_stationary),
    .io_o_data(myMultSwitch_7_io_o_data)
  );
  MultSwitch myMultSwitch_8 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_8_clock),
    .reset(myMultSwitch_8_reset),
    .io_i_valid(myMultSwitch_8_io_i_valid),
    .io_i_data(myMultSwitch_8_io_i_data),
    .io_i_stationary(myMultSwitch_8_io_i_stationary),
    .io_o_data(myMultSwitch_8_io_o_data)
  );
  MultSwitch myMultSwitch_9 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_9_clock),
    .reset(myMultSwitch_9_reset),
    .io_i_valid(myMultSwitch_9_io_i_valid),
    .io_i_data(myMultSwitch_9_io_i_data),
    .io_i_stationary(myMultSwitch_9_io_i_stationary),
    .io_o_data(myMultSwitch_9_io_o_data)
  );
  MultSwitch myMultSwitch_10 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_10_clock),
    .reset(myMultSwitch_10_reset),
    .io_i_valid(myMultSwitch_10_io_i_valid),
    .io_i_data(myMultSwitch_10_io_i_data),
    .io_i_stationary(myMultSwitch_10_io_i_stationary),
    .io_o_data(myMultSwitch_10_io_o_data)
  );
  MultSwitch myMultSwitch_11 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_11_clock),
    .reset(myMultSwitch_11_reset),
    .io_i_valid(myMultSwitch_11_io_i_valid),
    .io_i_data(myMultSwitch_11_io_i_data),
    .io_i_stationary(myMultSwitch_11_io_i_stationary),
    .io_o_data(myMultSwitch_11_io_o_data)
  );
  MultSwitch myMultSwitch_12 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_12_clock),
    .reset(myMultSwitch_12_reset),
    .io_i_valid(myMultSwitch_12_io_i_valid),
    .io_i_data(myMultSwitch_12_io_i_data),
    .io_i_stationary(myMultSwitch_12_io_i_stationary),
    .io_o_data(myMultSwitch_12_io_o_data)
  );
  MultSwitch myMultSwitch_13 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_13_clock),
    .reset(myMultSwitch_13_reset),
    .io_i_valid(myMultSwitch_13_io_i_valid),
    .io_i_data(myMultSwitch_13_io_i_data),
    .io_i_stationary(myMultSwitch_13_io_i_stationary),
    .io_o_data(myMultSwitch_13_io_o_data)
  );
  MultSwitch myMultSwitch_14 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_14_clock),
    .reset(myMultSwitch_14_reset),
    .io_i_valid(myMultSwitch_14_io_i_valid),
    .io_i_data(myMultSwitch_14_io_i_data),
    .io_i_stationary(myMultSwitch_14_io_i_stationary),
    .io_o_data(myMultSwitch_14_io_o_data)
  );
  MultSwitch myMultSwitch_15 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_15_clock),
    .reset(myMultSwitch_15_reset),
    .io_i_valid(myMultSwitch_15_io_i_valid),
    .io_i_data(myMultSwitch_15_io_i_data),
    .io_i_stationary(myMultSwitch_15_io_i_stationary),
    .io_o_data(myMultSwitch_15_io_o_data)
  );
  MultSwitch myMultSwitch_16 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_16_clock),
    .reset(myMultSwitch_16_reset),
    .io_i_valid(myMultSwitch_16_io_i_valid),
    .io_i_data(myMultSwitch_16_io_i_data),
    .io_i_stationary(myMultSwitch_16_io_i_stationary),
    .io_o_data(myMultSwitch_16_io_o_data)
  );
  MultSwitch myMultSwitch_17 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_17_clock),
    .reset(myMultSwitch_17_reset),
    .io_i_valid(myMultSwitch_17_io_i_valid),
    .io_i_data(myMultSwitch_17_io_i_data),
    .io_i_stationary(myMultSwitch_17_io_i_stationary),
    .io_o_data(myMultSwitch_17_io_o_data)
  );
  MultSwitch myMultSwitch_18 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_18_clock),
    .reset(myMultSwitch_18_reset),
    .io_i_valid(myMultSwitch_18_io_i_valid),
    .io_i_data(myMultSwitch_18_io_i_data),
    .io_i_stationary(myMultSwitch_18_io_i_stationary),
    .io_o_data(myMultSwitch_18_io_o_data)
  );
  MultSwitch myMultSwitch_19 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_19_clock),
    .reset(myMultSwitch_19_reset),
    .io_i_valid(myMultSwitch_19_io_i_valid),
    .io_i_data(myMultSwitch_19_io_i_data),
    .io_i_stationary(myMultSwitch_19_io_i_stationary),
    .io_o_data(myMultSwitch_19_io_o_data)
  );
  MultSwitch myMultSwitch_20 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_20_clock),
    .reset(myMultSwitch_20_reset),
    .io_i_valid(myMultSwitch_20_io_i_valid),
    .io_i_data(myMultSwitch_20_io_i_data),
    .io_i_stationary(myMultSwitch_20_io_i_stationary),
    .io_o_data(myMultSwitch_20_io_o_data)
  );
  MultSwitch myMultSwitch_21 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_21_clock),
    .reset(myMultSwitch_21_reset),
    .io_i_valid(myMultSwitch_21_io_i_valid),
    .io_i_data(myMultSwitch_21_io_i_data),
    .io_i_stationary(myMultSwitch_21_io_i_stationary),
    .io_o_data(myMultSwitch_21_io_o_data)
  );
  MultSwitch myMultSwitch_22 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_22_clock),
    .reset(myMultSwitch_22_reset),
    .io_i_valid(myMultSwitch_22_io_i_valid),
    .io_i_data(myMultSwitch_22_io_i_data),
    .io_i_stationary(myMultSwitch_22_io_i_stationary),
    .io_o_data(myMultSwitch_22_io_o_data)
  );
  MultSwitch myMultSwitch_23 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_23_clock),
    .reset(myMultSwitch_23_reset),
    .io_i_valid(myMultSwitch_23_io_i_valid),
    .io_i_data(myMultSwitch_23_io_i_data),
    .io_i_stationary(myMultSwitch_23_io_i_stationary),
    .io_o_data(myMultSwitch_23_io_o_data)
  );
  MultSwitch myMultSwitch_24 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_24_clock),
    .reset(myMultSwitch_24_reset),
    .io_i_valid(myMultSwitch_24_io_i_valid),
    .io_i_data(myMultSwitch_24_io_i_data),
    .io_i_stationary(myMultSwitch_24_io_i_stationary),
    .io_o_data(myMultSwitch_24_io_o_data)
  );
  MultSwitch myMultSwitch_25 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_25_clock),
    .reset(myMultSwitch_25_reset),
    .io_i_valid(myMultSwitch_25_io_i_valid),
    .io_i_data(myMultSwitch_25_io_i_data),
    .io_i_stationary(myMultSwitch_25_io_i_stationary),
    .io_o_data(myMultSwitch_25_io_o_data)
  );
  MultSwitch myMultSwitch_26 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_26_clock),
    .reset(myMultSwitch_26_reset),
    .io_i_valid(myMultSwitch_26_io_i_valid),
    .io_i_data(myMultSwitch_26_io_i_data),
    .io_i_stationary(myMultSwitch_26_io_i_stationary),
    .io_o_data(myMultSwitch_26_io_o_data)
  );
  MultSwitch myMultSwitch_27 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_27_clock),
    .reset(myMultSwitch_27_reset),
    .io_i_valid(myMultSwitch_27_io_i_valid),
    .io_i_data(myMultSwitch_27_io_i_data),
    .io_i_stationary(myMultSwitch_27_io_i_stationary),
    .io_o_data(myMultSwitch_27_io_o_data)
  );
  MultSwitch myMultSwitch_28 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_28_clock),
    .reset(myMultSwitch_28_reset),
    .io_i_valid(myMultSwitch_28_io_i_valid),
    .io_i_data(myMultSwitch_28_io_i_data),
    .io_i_stationary(myMultSwitch_28_io_i_stationary),
    .io_o_data(myMultSwitch_28_io_o_data)
  );
  MultSwitch myMultSwitch_29 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_29_clock),
    .reset(myMultSwitch_29_reset),
    .io_i_valid(myMultSwitch_29_io_i_valid),
    .io_i_data(myMultSwitch_29_io_i_data),
    .io_i_stationary(myMultSwitch_29_io_i_stationary),
    .io_o_data(myMultSwitch_29_io_o_data)
  );
  MultSwitch myMultSwitch_30 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_30_clock),
    .reset(myMultSwitch_30_reset),
    .io_i_valid(myMultSwitch_30_io_i_valid),
    .io_i_data(myMultSwitch_30_io_i_data),
    .io_i_stationary(myMultSwitch_30_io_i_stationary),
    .io_o_data(myMultSwitch_30_io_o_data)
  );
  MultSwitch myMultSwitch_31 ( // @[MultGen.scala 26:30]
    .clock(myMultSwitch_31_clock),
    .reset(myMultSwitch_31_reset),
    .io_i_valid(myMultSwitch_31_io_i_valid),
    .io_i_data(myMultSwitch_31_io_i_data),
    .io_i_stationary(myMultSwitch_31_io_i_stationary),
    .io_o_data(myMultSwitch_31_io_o_data)
  );
  assign io_o_valid = r_valid; // @[MultGen.scala 34:14]
  assign io_o_data_bus_0 = myMultSwitch_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_1 = myMultSwitch_1_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_2 = myMultSwitch_2_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_3 = myMultSwitch_3_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_4 = myMultSwitch_4_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_5 = myMultSwitch_5_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_6 = myMultSwitch_6_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_7 = myMultSwitch_7_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_8 = myMultSwitch_8_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_9 = myMultSwitch_9_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_10 = myMultSwitch_10_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_11 = myMultSwitch_11_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_12 = myMultSwitch_12_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_13 = myMultSwitch_13_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_14 = myMultSwitch_14_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_15 = myMultSwitch_15_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_16 = myMultSwitch_16_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_17 = myMultSwitch_17_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_18 = myMultSwitch_18_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_19 = myMultSwitch_19_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_20 = myMultSwitch_20_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_21 = myMultSwitch_21_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_22 = myMultSwitch_22_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_23 = myMultSwitch_23_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_24 = myMultSwitch_24_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_25 = myMultSwitch_25_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_26 = myMultSwitch_26_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_27 = myMultSwitch_27_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_28 = myMultSwitch_28_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_29 = myMultSwitch_29_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_30 = myMultSwitch_30_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign io_o_data_bus_31 = myMultSwitch_31_io_o_data; // @[MultGen.scala 24:34 31:26]
  assign myMultSwitch_clock = clock;
  assign myMultSwitch_reset = reset;
  assign myMultSwitch_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_io_i_data = io_i_data_bus_0; // @[MultGen.scala 29:28]
  assign myMultSwitch_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_1_clock = clock;
  assign myMultSwitch_1_reset = reset;
  assign myMultSwitch_1_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_1_io_i_data = io_i_data_bus_1; // @[MultGen.scala 29:28]
  assign myMultSwitch_1_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_2_clock = clock;
  assign myMultSwitch_2_reset = reset;
  assign myMultSwitch_2_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_2_io_i_data = io_i_data_bus_2; // @[MultGen.scala 29:28]
  assign myMultSwitch_2_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_3_clock = clock;
  assign myMultSwitch_3_reset = reset;
  assign myMultSwitch_3_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_3_io_i_data = io_i_data_bus_3; // @[MultGen.scala 29:28]
  assign myMultSwitch_3_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_4_clock = clock;
  assign myMultSwitch_4_reset = reset;
  assign myMultSwitch_4_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_4_io_i_data = io_i_data_bus_4; // @[MultGen.scala 29:28]
  assign myMultSwitch_4_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_5_clock = clock;
  assign myMultSwitch_5_reset = reset;
  assign myMultSwitch_5_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_5_io_i_data = io_i_data_bus_5; // @[MultGen.scala 29:28]
  assign myMultSwitch_5_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_6_clock = clock;
  assign myMultSwitch_6_reset = reset;
  assign myMultSwitch_6_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_6_io_i_data = io_i_data_bus_6; // @[MultGen.scala 29:28]
  assign myMultSwitch_6_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_7_clock = clock;
  assign myMultSwitch_7_reset = reset;
  assign myMultSwitch_7_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_7_io_i_data = io_i_data_bus_7; // @[MultGen.scala 29:28]
  assign myMultSwitch_7_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_8_clock = clock;
  assign myMultSwitch_8_reset = reset;
  assign myMultSwitch_8_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_8_io_i_data = io_i_data_bus_8; // @[MultGen.scala 29:28]
  assign myMultSwitch_8_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_9_clock = clock;
  assign myMultSwitch_9_reset = reset;
  assign myMultSwitch_9_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_9_io_i_data = io_i_data_bus_9; // @[MultGen.scala 29:28]
  assign myMultSwitch_9_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_10_clock = clock;
  assign myMultSwitch_10_reset = reset;
  assign myMultSwitch_10_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_10_io_i_data = io_i_data_bus_10; // @[MultGen.scala 29:28]
  assign myMultSwitch_10_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_11_clock = clock;
  assign myMultSwitch_11_reset = reset;
  assign myMultSwitch_11_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_11_io_i_data = io_i_data_bus_11; // @[MultGen.scala 29:28]
  assign myMultSwitch_11_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_12_clock = clock;
  assign myMultSwitch_12_reset = reset;
  assign myMultSwitch_12_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_12_io_i_data = io_i_data_bus_12; // @[MultGen.scala 29:28]
  assign myMultSwitch_12_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_13_clock = clock;
  assign myMultSwitch_13_reset = reset;
  assign myMultSwitch_13_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_13_io_i_data = io_i_data_bus_13; // @[MultGen.scala 29:28]
  assign myMultSwitch_13_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_14_clock = clock;
  assign myMultSwitch_14_reset = reset;
  assign myMultSwitch_14_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_14_io_i_data = io_i_data_bus_14; // @[MultGen.scala 29:28]
  assign myMultSwitch_14_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_15_clock = clock;
  assign myMultSwitch_15_reset = reset;
  assign myMultSwitch_15_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_15_io_i_data = io_i_data_bus_15; // @[MultGen.scala 29:28]
  assign myMultSwitch_15_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_16_clock = clock;
  assign myMultSwitch_16_reset = reset;
  assign myMultSwitch_16_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_16_io_i_data = io_i_data_bus_16; // @[MultGen.scala 29:28]
  assign myMultSwitch_16_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_17_clock = clock;
  assign myMultSwitch_17_reset = reset;
  assign myMultSwitch_17_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_17_io_i_data = io_i_data_bus_17; // @[MultGen.scala 29:28]
  assign myMultSwitch_17_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_18_clock = clock;
  assign myMultSwitch_18_reset = reset;
  assign myMultSwitch_18_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_18_io_i_data = io_i_data_bus_18; // @[MultGen.scala 29:28]
  assign myMultSwitch_18_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_19_clock = clock;
  assign myMultSwitch_19_reset = reset;
  assign myMultSwitch_19_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_19_io_i_data = io_i_data_bus_19; // @[MultGen.scala 29:28]
  assign myMultSwitch_19_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_20_clock = clock;
  assign myMultSwitch_20_reset = reset;
  assign myMultSwitch_20_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_20_io_i_data = io_i_data_bus_20; // @[MultGen.scala 29:28]
  assign myMultSwitch_20_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_21_clock = clock;
  assign myMultSwitch_21_reset = reset;
  assign myMultSwitch_21_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_21_io_i_data = io_i_data_bus_21; // @[MultGen.scala 29:28]
  assign myMultSwitch_21_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_22_clock = clock;
  assign myMultSwitch_22_reset = reset;
  assign myMultSwitch_22_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_22_io_i_data = io_i_data_bus_22; // @[MultGen.scala 29:28]
  assign myMultSwitch_22_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_23_clock = clock;
  assign myMultSwitch_23_reset = reset;
  assign myMultSwitch_23_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_23_io_i_data = io_i_data_bus_23; // @[MultGen.scala 29:28]
  assign myMultSwitch_23_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_24_clock = clock;
  assign myMultSwitch_24_reset = reset;
  assign myMultSwitch_24_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_24_io_i_data = io_i_data_bus_24; // @[MultGen.scala 29:28]
  assign myMultSwitch_24_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_25_clock = clock;
  assign myMultSwitch_25_reset = reset;
  assign myMultSwitch_25_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_25_io_i_data = io_i_data_bus_25; // @[MultGen.scala 29:28]
  assign myMultSwitch_25_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_26_clock = clock;
  assign myMultSwitch_26_reset = reset;
  assign myMultSwitch_26_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_26_io_i_data = io_i_data_bus_26; // @[MultGen.scala 29:28]
  assign myMultSwitch_26_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_27_clock = clock;
  assign myMultSwitch_27_reset = reset;
  assign myMultSwitch_27_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_27_io_i_data = io_i_data_bus_27; // @[MultGen.scala 29:28]
  assign myMultSwitch_27_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_28_clock = clock;
  assign myMultSwitch_28_reset = reset;
  assign myMultSwitch_28_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_28_io_i_data = io_i_data_bus_28; // @[MultGen.scala 29:28]
  assign myMultSwitch_28_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_29_clock = clock;
  assign myMultSwitch_29_reset = reset;
  assign myMultSwitch_29_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_29_io_i_data = io_i_data_bus_29; // @[MultGen.scala 29:28]
  assign myMultSwitch_29_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_30_clock = clock;
  assign myMultSwitch_30_reset = reset;
  assign myMultSwitch_30_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_30_io_i_data = io_i_data_bus_30; // @[MultGen.scala 29:28]
  assign myMultSwitch_30_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  assign myMultSwitch_31_clock = clock;
  assign myMultSwitch_31_reset = reset;
  assign myMultSwitch_31_io_i_valid = r_valid; // @[MultGen.scala 28:29]
  assign myMultSwitch_31_io_i_data = io_i_data_bus_31; // @[MultGen.scala 29:28]
  assign myMultSwitch_31_io_i_stationary = r_stationary; // @[MultGen.scala 30:34]
  always @(posedge clock) begin
    if (reset) begin // @[MultGen.scala 16:24]
      r_valid <= 1'h0; // @[MultGen.scala 16:24]
    end else begin
      r_valid <= io_i_valid; // @[MultGen.scala 20:11]
    end
    if (reset) begin // @[MultGen.scala 17:29]
      r_stationary <= 1'h0; // @[MultGen.scala 17:29]
    end else begin
      r_stationary <= io_i_stationary; // @[MultGen.scala 21:16]
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
  r_stationary = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

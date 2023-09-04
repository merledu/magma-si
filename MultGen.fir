circuit MultGen :
  module SimpleMultiplier :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_1 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_2 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_3 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_4 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_5 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_6 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_7 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_8 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_9 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_10 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_11 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_12 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_13 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_14 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_15 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_16 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_16 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_16 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_17 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_17 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_17 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_18 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_18 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_18 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_19 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_19 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_19 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_20 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_20 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_20 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_21 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_21 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_21 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_22 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_22 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_22 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_23 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_23 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_23 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_24 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_24 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_24 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_25 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_25 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_25 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_26 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_26 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_26 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_27 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_27 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_27 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_28 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_28 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_28 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_29 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_29 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_29 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_30 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_30 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_30 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module SimpleMultiplier_31 :
    input clock : Clock
    input reset : Reset
    output io : { flip A : UInt<16>, flip B : UInt<16>, O : UInt<16>}

    node _io_O_T = mul(io.A, io.B) @[SimpleMultiplier.scala 14:18]
    io.O <= _io_O_T @[SimpleMultiplier.scala 14:10]

  module MultSwitch_31 :
    input clock : Clock
    input reset : Reset
    output io : { flip i_valid : UInt<1>, flip i_data : UInt<16>, flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data : UInt<32>}

    reg r_buffer : UInt<16>, clock with :
      reset => (reset, UInt<16>("h0")) @[MultSwitch.scala 16:25]
    reg r_buffer_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 17:31]
    node _T = and(io.i_stationary, io.i_valid) @[MultSwitch.scala 25:24]
    when _T : @[MultSwitch.scala 25:39]
      r_buffer <= io.i_data @[MultSwitch.scala 26:14]
      r_buffer_valid <= UInt<1>("h1") @[MultSwitch.scala 27:20]
    node _w_A_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 31:32]
    node w_A = mux(_w_A_T, io.i_data, UInt<1>("h0")) @[MultSwitch.scala 31:16]
    node _w_B_T = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 32:32]
    node w_B = mux(_w_B_T, r_buffer, UInt<1>("h0")) @[MultSwitch.scala 32:16]
    reg o_validReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultSwitch.scala 35:27]
    node _T_1 = and(r_buffer_valid, io.i_valid) @[MultSwitch.scala 37:24]
    when _T_1 : @[MultSwitch.scala 37:39]
      o_validReg <= UInt<1>("h1") @[MultSwitch.scala 38:16]
    else :
      o_validReg <= UInt<1>("h0") @[MultSwitch.scala 40:16]
    io.o_valid <= o_validReg @[MultSwitch.scala 42:14]
    wire multiplier_output : UInt<32> @[MultSwitch.scala 43:32]
    inst multiplier_module of SimpleMultiplier_31 @[MultSwitch.scala 45:33]
    multiplier_module.clock <= clock
    multiplier_module.reset <= reset
    multiplier_module.io.A <= w_A @[MultSwitch.scala 46:26]
    multiplier_module.io.B <= w_B @[MultSwitch.scala 47:26]
    multiplier_output <= multiplier_module.io.O @[MultSwitch.scala 49:21]
    node _io_o_data_T = bits(multiplier_output, 15, 0) @[MultSwitch.scala 51:48]
    node _io_o_data_T_1 = cat(UInt<16>("h0"), _io_o_data_T) @[Cat.scala 33:92]
    io.o_data <= _io_o_data_T_1 @[MultSwitch.scala 51:13]

  module MultGen :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip i_valid : UInt<1>, flip i_data_bus : UInt<16>[32], flip i_stationary : UInt<1>, o_valid : UInt<1>, o_data_bus : UInt<32>[32]}

    reg r_valid : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultGen.scala 16:24]
    reg r_stationary : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MultGen.scala 17:29]
    r_valid <= io.i_valid @[MultGen.scala 20:11]
    r_stationary <= io.i_stationary @[MultGen.scala 21:16]
    wire multSwitchOutputs : UInt<32>[32] @[MultGen.scala 24:34]
    multSwitchOutputs[0] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[1] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[2] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[3] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[4] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[5] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[6] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[7] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[8] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[9] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[10] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[11] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[12] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[13] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[14] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[15] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[16] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[17] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[18] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[19] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[20] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[21] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[22] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[23] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[24] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[25] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[26] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[27] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[28] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[29] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[30] <= UInt<32>("h0") @[MultGen.scala 24:34]
    multSwitchOutputs[31] <= UInt<32>("h0") @[MultGen.scala 24:34]
    inst myMultSwitch of MultSwitch @[MultGen.scala 26:30]
    myMultSwitch.clock <= clock
    myMultSwitch.reset <= reset
    myMultSwitch.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch.io.i_data <= io.i_data_bus[0] @[MultGen.scala 29:28]
    myMultSwitch.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[0] <= myMultSwitch.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_1 of MultSwitch_1 @[MultGen.scala 26:30]
    myMultSwitch_1.clock <= clock
    myMultSwitch_1.reset <= reset
    myMultSwitch_1.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_1.io.i_data <= io.i_data_bus[1] @[MultGen.scala 29:28]
    myMultSwitch_1.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[1] <= myMultSwitch_1.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_2 of MultSwitch_2 @[MultGen.scala 26:30]
    myMultSwitch_2.clock <= clock
    myMultSwitch_2.reset <= reset
    myMultSwitch_2.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_2.io.i_data <= io.i_data_bus[2] @[MultGen.scala 29:28]
    myMultSwitch_2.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[2] <= myMultSwitch_2.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_3 of MultSwitch_3 @[MultGen.scala 26:30]
    myMultSwitch_3.clock <= clock
    myMultSwitch_3.reset <= reset
    myMultSwitch_3.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_3.io.i_data <= io.i_data_bus[3] @[MultGen.scala 29:28]
    myMultSwitch_3.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[3] <= myMultSwitch_3.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_4 of MultSwitch_4 @[MultGen.scala 26:30]
    myMultSwitch_4.clock <= clock
    myMultSwitch_4.reset <= reset
    myMultSwitch_4.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_4.io.i_data <= io.i_data_bus[4] @[MultGen.scala 29:28]
    myMultSwitch_4.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[4] <= myMultSwitch_4.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_5 of MultSwitch_5 @[MultGen.scala 26:30]
    myMultSwitch_5.clock <= clock
    myMultSwitch_5.reset <= reset
    myMultSwitch_5.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_5.io.i_data <= io.i_data_bus[5] @[MultGen.scala 29:28]
    myMultSwitch_5.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[5] <= myMultSwitch_5.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_6 of MultSwitch_6 @[MultGen.scala 26:30]
    myMultSwitch_6.clock <= clock
    myMultSwitch_6.reset <= reset
    myMultSwitch_6.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_6.io.i_data <= io.i_data_bus[6] @[MultGen.scala 29:28]
    myMultSwitch_6.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[6] <= myMultSwitch_6.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_7 of MultSwitch_7 @[MultGen.scala 26:30]
    myMultSwitch_7.clock <= clock
    myMultSwitch_7.reset <= reset
    myMultSwitch_7.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_7.io.i_data <= io.i_data_bus[7] @[MultGen.scala 29:28]
    myMultSwitch_7.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[7] <= myMultSwitch_7.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_8 of MultSwitch_8 @[MultGen.scala 26:30]
    myMultSwitch_8.clock <= clock
    myMultSwitch_8.reset <= reset
    myMultSwitch_8.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_8.io.i_data <= io.i_data_bus[8] @[MultGen.scala 29:28]
    myMultSwitch_8.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[8] <= myMultSwitch_8.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_9 of MultSwitch_9 @[MultGen.scala 26:30]
    myMultSwitch_9.clock <= clock
    myMultSwitch_9.reset <= reset
    myMultSwitch_9.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_9.io.i_data <= io.i_data_bus[9] @[MultGen.scala 29:28]
    myMultSwitch_9.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[9] <= myMultSwitch_9.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_10 of MultSwitch_10 @[MultGen.scala 26:30]
    myMultSwitch_10.clock <= clock
    myMultSwitch_10.reset <= reset
    myMultSwitch_10.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_10.io.i_data <= io.i_data_bus[10] @[MultGen.scala 29:28]
    myMultSwitch_10.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[10] <= myMultSwitch_10.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_11 of MultSwitch_11 @[MultGen.scala 26:30]
    myMultSwitch_11.clock <= clock
    myMultSwitch_11.reset <= reset
    myMultSwitch_11.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_11.io.i_data <= io.i_data_bus[11] @[MultGen.scala 29:28]
    myMultSwitch_11.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[11] <= myMultSwitch_11.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_12 of MultSwitch_12 @[MultGen.scala 26:30]
    myMultSwitch_12.clock <= clock
    myMultSwitch_12.reset <= reset
    myMultSwitch_12.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_12.io.i_data <= io.i_data_bus[12] @[MultGen.scala 29:28]
    myMultSwitch_12.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[12] <= myMultSwitch_12.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_13 of MultSwitch_13 @[MultGen.scala 26:30]
    myMultSwitch_13.clock <= clock
    myMultSwitch_13.reset <= reset
    myMultSwitch_13.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_13.io.i_data <= io.i_data_bus[13] @[MultGen.scala 29:28]
    myMultSwitch_13.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[13] <= myMultSwitch_13.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_14 of MultSwitch_14 @[MultGen.scala 26:30]
    myMultSwitch_14.clock <= clock
    myMultSwitch_14.reset <= reset
    myMultSwitch_14.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_14.io.i_data <= io.i_data_bus[14] @[MultGen.scala 29:28]
    myMultSwitch_14.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[14] <= myMultSwitch_14.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_15 of MultSwitch_15 @[MultGen.scala 26:30]
    myMultSwitch_15.clock <= clock
    myMultSwitch_15.reset <= reset
    myMultSwitch_15.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_15.io.i_data <= io.i_data_bus[15] @[MultGen.scala 29:28]
    myMultSwitch_15.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[15] <= myMultSwitch_15.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_16 of MultSwitch_16 @[MultGen.scala 26:30]
    myMultSwitch_16.clock <= clock
    myMultSwitch_16.reset <= reset
    myMultSwitch_16.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_16.io.i_data <= io.i_data_bus[16] @[MultGen.scala 29:28]
    myMultSwitch_16.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[16] <= myMultSwitch_16.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_17 of MultSwitch_17 @[MultGen.scala 26:30]
    myMultSwitch_17.clock <= clock
    myMultSwitch_17.reset <= reset
    myMultSwitch_17.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_17.io.i_data <= io.i_data_bus[17] @[MultGen.scala 29:28]
    myMultSwitch_17.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[17] <= myMultSwitch_17.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_18 of MultSwitch_18 @[MultGen.scala 26:30]
    myMultSwitch_18.clock <= clock
    myMultSwitch_18.reset <= reset
    myMultSwitch_18.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_18.io.i_data <= io.i_data_bus[18] @[MultGen.scala 29:28]
    myMultSwitch_18.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[18] <= myMultSwitch_18.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_19 of MultSwitch_19 @[MultGen.scala 26:30]
    myMultSwitch_19.clock <= clock
    myMultSwitch_19.reset <= reset
    myMultSwitch_19.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_19.io.i_data <= io.i_data_bus[19] @[MultGen.scala 29:28]
    myMultSwitch_19.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[19] <= myMultSwitch_19.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_20 of MultSwitch_20 @[MultGen.scala 26:30]
    myMultSwitch_20.clock <= clock
    myMultSwitch_20.reset <= reset
    myMultSwitch_20.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_20.io.i_data <= io.i_data_bus[20] @[MultGen.scala 29:28]
    myMultSwitch_20.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[20] <= myMultSwitch_20.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_21 of MultSwitch_21 @[MultGen.scala 26:30]
    myMultSwitch_21.clock <= clock
    myMultSwitch_21.reset <= reset
    myMultSwitch_21.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_21.io.i_data <= io.i_data_bus[21] @[MultGen.scala 29:28]
    myMultSwitch_21.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[21] <= myMultSwitch_21.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_22 of MultSwitch_22 @[MultGen.scala 26:30]
    myMultSwitch_22.clock <= clock
    myMultSwitch_22.reset <= reset
    myMultSwitch_22.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_22.io.i_data <= io.i_data_bus[22] @[MultGen.scala 29:28]
    myMultSwitch_22.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[22] <= myMultSwitch_22.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_23 of MultSwitch_23 @[MultGen.scala 26:30]
    myMultSwitch_23.clock <= clock
    myMultSwitch_23.reset <= reset
    myMultSwitch_23.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_23.io.i_data <= io.i_data_bus[23] @[MultGen.scala 29:28]
    myMultSwitch_23.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[23] <= myMultSwitch_23.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_24 of MultSwitch_24 @[MultGen.scala 26:30]
    myMultSwitch_24.clock <= clock
    myMultSwitch_24.reset <= reset
    myMultSwitch_24.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_24.io.i_data <= io.i_data_bus[24] @[MultGen.scala 29:28]
    myMultSwitch_24.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[24] <= myMultSwitch_24.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_25 of MultSwitch_25 @[MultGen.scala 26:30]
    myMultSwitch_25.clock <= clock
    myMultSwitch_25.reset <= reset
    myMultSwitch_25.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_25.io.i_data <= io.i_data_bus[25] @[MultGen.scala 29:28]
    myMultSwitch_25.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[25] <= myMultSwitch_25.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_26 of MultSwitch_26 @[MultGen.scala 26:30]
    myMultSwitch_26.clock <= clock
    myMultSwitch_26.reset <= reset
    myMultSwitch_26.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_26.io.i_data <= io.i_data_bus[26] @[MultGen.scala 29:28]
    myMultSwitch_26.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[26] <= myMultSwitch_26.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_27 of MultSwitch_27 @[MultGen.scala 26:30]
    myMultSwitch_27.clock <= clock
    myMultSwitch_27.reset <= reset
    myMultSwitch_27.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_27.io.i_data <= io.i_data_bus[27] @[MultGen.scala 29:28]
    myMultSwitch_27.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[27] <= myMultSwitch_27.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_28 of MultSwitch_28 @[MultGen.scala 26:30]
    myMultSwitch_28.clock <= clock
    myMultSwitch_28.reset <= reset
    myMultSwitch_28.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_28.io.i_data <= io.i_data_bus[28] @[MultGen.scala 29:28]
    myMultSwitch_28.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[28] <= myMultSwitch_28.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_29 of MultSwitch_29 @[MultGen.scala 26:30]
    myMultSwitch_29.clock <= clock
    myMultSwitch_29.reset <= reset
    myMultSwitch_29.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_29.io.i_data <= io.i_data_bus[29] @[MultGen.scala 29:28]
    myMultSwitch_29.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[29] <= myMultSwitch_29.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_30 of MultSwitch_30 @[MultGen.scala 26:30]
    myMultSwitch_30.clock <= clock
    myMultSwitch_30.reset <= reset
    myMultSwitch_30.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_30.io.i_data <= io.i_data_bus[30] @[MultGen.scala 29:28]
    myMultSwitch_30.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[30] <= myMultSwitch_30.io.o_data @[MultGen.scala 31:26]
    inst myMultSwitch_31 of MultSwitch_31 @[MultGen.scala 26:30]
    myMultSwitch_31.clock <= clock
    myMultSwitch_31.reset <= reset
    myMultSwitch_31.io.i_valid <= r_valid @[MultGen.scala 28:29]
    myMultSwitch_31.io.i_data <= io.i_data_bus[31] @[MultGen.scala 29:28]
    myMultSwitch_31.io.i_stationary <= r_stationary @[MultGen.scala 30:34]
    multSwitchOutputs[31] <= myMultSwitch_31.io.o_data @[MultGen.scala 31:26]
    io.o_valid <= r_valid @[MultGen.scala 34:14]
    io.o_data_bus <= multSwitchOutputs @[MultGen.scala 35:17]


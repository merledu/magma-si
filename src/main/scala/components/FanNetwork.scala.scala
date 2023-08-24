// package magmasi.components

// import chisel3._
// import chisel3.util._

// class FanNetwork(DATA_TYPE: Int = 32,NUM_PES: Int = 32,LOG2_PES: Int = 5) extends Module {
//   val io = IO(new Bundle {
//     val i_valid = Input(Bool())
//     val i_data_bus = Input(UInt((NUM_PES * DATA_TYPE).W))
//     val i_add_en_bus = Input(UInt((NUM_PES - 1).W))
//     val i_cmd_bus = Input(UInt((3 * (NUM_PES - 1)).W))
//     val i_sel_bus = Input(UInt(20.W))
//     val o_valid = Output(UInt(NUM_PES.W))
//     val o_data_bus = Output(UInt((NUM_PES * DATA_TYPE).W))
//   })

//   var w_fan_lvl_0 = Wire(UInt(960.W))
//   var w_fan_lvl_1 = Wire(UInt(448.W))
//   var w_fan_lvl_2 = Wire(UInt(192.W))
//   var w_fan_lvl_3 = Wire(UInt(64.W))
//   var w_fan_lvl_4 = Wire(UInt(32.W))

//   var r_fan_ff_lvl_0_to_4 = RegInit(0.U(64.W))
//   var r_fan_ff_lvl_0_to_3 = RegInit(0.U(192.W))
//   var r_fan_ff_lvl_0_to_2 = RegInit(0.U(448.W))
//   var r_fan_ff_lvl_1_to_4 = RegInit(0.U(64.W))
//   var r_fan_ff_lvl_1_to_3 = RegInit(0.U(192.W))
//   var r_fan_ff_lvl_2_to_4 = RegInit(0.U(64.W))

//   var w_vn_lvl_0 = Wire(UInt(1024.W))
//   var w_vn_lvl_0_valid = Wire(UInt(32.W))
//   var w_vn_lvl_1 = Wire(UInt(512.W))
//   var w_vn_lvl_1_valid = Wire(UInt(16.W))
//   var w_vn_lvl_2 = Wire(UInt(256.W))
//   var w_vn_lvl_2_valid = Wire(UInt(8.W))
//   var w_vn_lvl_3 = Wire(UInt(128.W))
//   var w_vn_lvl_3_valid = Wire(UInt(4.W))
//   var w_vn_lvl_4 = Wire(UInt(64.W))
//   var w_vn_lvl_4_valid = Wire(UInt(2.W))

//   var r_lvl_output_ff = RegInit(0.U(5120.W))
//   var r_lvl_output_ff_valid = RegInit(0.U(160.W))
//   var r_valid = RegInit(VecInit(Seq.fill(7)(0.U(1.W))))
//   var r_final_sum = RegInit(0.U(DATA_TYPE.W))
//   var r_final_add = RegInit(false.B)
//   var r_final_add2 = RegInit(false.B)

//   val clk = clock
//   val rst = reset.asBool

//   when(rst === true.B) {
//     r_fan_ff_lvl_0_to_4 := 0.U
//     r_fan_ff_lvl_0_to_3 := 0.U
//     r_fan_ff_lvl_0_to_2 := 0.U
//     r_fan_ff_lvl_1_to_4 := 0.U
//     r_fan_ff_lvl_1_to_3 := 0.U
//     r_fan_ff_lvl_2_to_4 := 0.U
//   }.otherwise {
//     r_fan_ff_lvl_0_to_4 := Cat(r_fan_ff_lvl_0_to_3(95, 64), r_fan_ff_lvl_0_to_3(127, 96))
//     r_fan_ff_lvl_0_to_3 := Cat(r_fan_ff_lvl_0_to_2(95, 64), r_fan_ff_lvl_0_to_2(127, 96),r_fan_ff_lvl_0_to_2(223, 192), r_fan_ff_lvl_0_to_2(255, 224))
//     r_fan_ff_lvl_0_to_2 := Cat(w_fan_lvl_0(95, 64), w_fan_lvl_0(127, 96), w_fan_lvl_0(223, 192),w_fan_lvl_0(255, 224), w_fan_lvl_0(351, 320), w_fan_lvl_0(383, 352),w_fan_lvl_0(479, 448), w_fan_lvl_0(511, 480), w_fan_lvl_0(607, 576),w_fan_lvl_0(639, 608), w_fan_lvl_0(735, 704), w_fan_lvl_0(767, 736),w_fan_lvl_0(863, 832), w_fan_lvl_0(895, 864))
//     r_fan_ff_lvl_1_to_4 := Cat(r_fan_ff_lvl_1_to_3(95, 64), r_fan_ff_lvl_1_to_3(127, 96))
//     r_fan_ff_lvl_1_to_3 := Cat(w_fan_lvl_1(95, 64), w_fan_lvl_1(127, 96), w_fan_lvl_1(223, 192), w_fan_lvl_1(255, 224), w_fan_lvl_1(351, 320), w_fan_lvl_1(383, 352))
//     r_fan_ff_lvl_2_to_4 := Cat(w_fan_lvl_2(95, 64),w_fan_lvl_2(127, 96))
//   }
  


// when(rst) {
//   r_lvl_output_ff := 0.U
//   r_lvl_output_ff_valid := 0.U
// }.otherwise {
//   when(w_vn_lvl_0_valid(1, 0) === "b11".U) {
//     r_lvl_output_ff := Cat(0.U(5056.W),w_vn_lvl_0(63, 0))
//     r_lvl_output_ff_valid := Cat(0.U(5118.W),"b11".U)
//   }.elsewhen(w_vn_lvl_0_valid(1, 0) === "b10".U) {
//     r_lvl_output_ff := Cat( 0.U(5056.W),w_vn_lvl_0(63, 32),0.U(31,0))
//     r_lvl_output_ff_valid := Cat(0.U(5118.W),"b10".U)
//   }.elsewhen(w_vn_lvl_0_valid(1, 0) === "b01".U) {
//     r_lvl_output_ff := Cat( 0.U(5088.W),w_vn_lvl_0(31, 0))
//     r_lvl_output_ff_valid := Cat(0.U(5118.W),"b01".U)
//   }.otherwise {
//     r_lvl_output_ff := 0.U(5120.W)
//     r_lvl_output_ff_valid := Cat(0.U(5118.W),"b00".U)
//   }
  

// 		// if (rst == 1'b1) begin
// 		// 	r_lvl_output_ff[1023:0] <= 'd0;
// 		// 	r_lvl_output_ff_valid[31:0] <= 'd0;
// 		// end else begin
// 		// 	if (w_vn_lvl_0_valid[1:0] == 2'b11) begin // both VN complete
// 		// 		r_lvl_output_ff[63:0] <= w_vn_lvl_0[63:0];
// 		// 		r_lvl_output_ff_valid[1:0] <= 2'b11;
// 		// 	end else if (w_vn_lvl_0_valid[1:0] == 2'b10) begin // right VN complete
// 		// 		r_lvl_output_ff[63:32] <= w_vn_lvl_0[63:32];
// 		// 		r_lvl_output_ff[31:0] <= 'd0;
// 		// 		r_lvl_output_ff_valid[1:0] <= 2'b10;
// 		// 	end else if (w_vn_lvl_0_valid[1:0] == 2'b01) begin // left VN complete
// 		// 		r_lvl_output_ff[63:0] <= 'd0;
// 		// 		r_lvl_output_ff[31:0] <= w_vn_lvl_0[31:0];
// 		// 		r_lvl_output_ff_valid[1:0] <= 2'b01;
// 		// 	end else begin // no VN complete
// 		// 		r_lvl_output_ff[63:0] <= 'd0; 
// 		// 		r_lvl_output_ff_valid[1:0] <= 2'b00;
// 		// 	end

//     when(w_vn_lvl_0_valid(3, 2) === "b11".U) {
//       r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(127, 64),r_lvl_output_ff(63,0))
//       r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(1,0))
//     }.elsewhen(w_vn_lvl_0_valid(3, 2) === "b10".U) {
//       r_lvl_output_ff:= Cat(0.U,w_vn_lvl_0(127, 96),0.U(32.W),r_lvl_output_ff(63,0))
//       r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(1,0))
//     }.elsewhen(w_vn_lvl_0_valid(3, 2) === "b01".U) {
//       r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(95, 64),0.U,r_lvl_output_ff(63,0))
//       r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(1,0))
//     }.otherwise {
//       r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(63,0))
//       r_lvl_output_ff_valid := Cat("b00".U,r_lvl_output_ff_valid(1,0))
//     }

//     when (w_vn_lvl_0_valid(5, 4) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(191, 128),r_lvl_output_ff(127,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(3,0))
//     }.elsewhen (w_vn_lvl_0_valid(5, 4) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(191, 160),0.U(32.W),r_lvl_output_ff(127,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(3,0))
//     }.elsewhen (w_vn_lvl_0_valid(5, 4) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(159, 128),0.U(32.W),r_lvl_output_ff(127,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(3,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(127,0))
//         r_lvl_output_ff_valid := Cat("b00".U,r_lvl_output_ff_valid(3,0))
//     }



//     when(w_vn_lvl_0_valid(7, 6) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(255, 192),r_lvl_output_ff(191,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(5,0))
//     }.elsewhen(w_vn_lvl_0_valid(7, 6) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(255, 224),0.U(32.W),r_lvl_output_ff(191,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(5,0))
//     }.elsewhen(w_vn_lvl_0_valid(7, 6) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,0.U(32.W),w_vn_lvl_0(223, 192),r_lvl_output_ff(191,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(5,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(191,0))
//         r_lvl_output_ff_valid := Cat("b00".U,r_lvl_output_ff_valid(5,0))
//     }

//     when(w_vn_lvl_0_valid(9, 8) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(319, 256),r_lvl_output_ff(255,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(7,0))
//     }.elsewhen(w_vn_lvl_0_valid(9, 8) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(319, 288),0.U(32.W),r_lvl_output_ff(255,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(7,0))
//     }.elsewhen(w_vn_lvl_0_valid(9, 8) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,0.U(32.W),w_vn_lvl_0(287, 256),r_lvl_output_ff(255,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(7,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(255,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(7,0))
//     }

//     when(w_vn_lvl_0_valid(11, 10) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(383, 320),r_lvl_output_ff(319,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(9,0))
//     }.elsewhen(w_vn_lvl_0_valid(11, 10) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(383, 352),0.U(32.W),r_lvl_output_ff(319,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(9,0))
//     }.elsewhen(w_vn_lvl_0_valid(11, 10) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,0.U(32.W),w_vn_lvl_0(351, 320),r_lvl_output_ff(319,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(9,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(319,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(9,0))
//     }

//     when(w_vn_lvl_0_valid(13, 12) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(447, 384),r_lvl_output_ff(383,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(11,0))
//     }.elsewhen(w_vn_lvl_0_valid(13, 12) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(447, 416),0.U(32.W),r_lvl_output_ff(383,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(11,0))
//     }.elsewhen(w_vn_lvl_0_valid(13, 12) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(415, 384),r_lvl_output_ff(383,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(11,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(383,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(11,0))
//     }

//     when(w_vn_lvl_0_valid(15, 14) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(511, 448),r_lvl_output_ff(443,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(13,0))
//     }.elsewhen(w_vn_lvl_0_valid(15, 14) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(511, 480),0.U(32.W),r_lvl_output_ff(443,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(13,0))
//     }.elsewhen(w_vn_lvl_0_valid(15, 14) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(479, 448),r_lvl_output_ff(443,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(13,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(443,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(13,0))
//     }
 
//     when(w_vn_lvl_0_valid(17, 16) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(575, 512),r_lvl_output_ff(511,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(15,0))
//     }.elsewhen(w_vn_lvl_0_valid(17, 16) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(575, 544),0.U(32.W),r_lvl_output_ff(511,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(15,0))
//     }.elsewhen(w_vn_lvl_0_valid(17, 16) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(543, 512),r_lvl_output_ff(511,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(15,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(511,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(15,0))
//     }

//     when(w_vn_lvl_0_valid(19, 18) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(639, 576),r_lvl_output_ff(575,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(17,0))
//     }.elsewhen(w_vn_lvl_0_valid(19, 18) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(639, 608),0.U(32.W),r_lvl_output_ff(575,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(17,0))
//     }.elsewhen(w_vn_lvl_0_valid(19, 18) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(607, 576),r_lvl_output_ff(575,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(17,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(575,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(17,0))
//     }


//     when(w_vn_lvl_0_valid(21, 20) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(703, 640),r_lvl_output_ff(639,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(19,0))
//     }.elsewhen(w_vn_lvl_0_valid(21, 20) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(703, 672),0.U(32.W),r_lvl_output_ff(639,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(19,0))
//     }.elsewhen(w_vn_lvl_0_valid(21, 20) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(671, 640),r_lvl_output_ff(639,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(19,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(639,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(19,0))
//     }

//     when(w_vn_lvl_0_valid(23, 22) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(767, 704),r_lvl_output_ff(703,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(21,0))
//     }.elsewhen(w_vn_lvl_0_valid(23, 22) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(767, 736),0.U(32.W),r_lvl_output_ff(703,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(21,0))
//     }.elsewhen(w_vn_lvl_0_valid(23, 22) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(735, 704),r_lvl_output_ff(703,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(21,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(703,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(21,0))
//     }

//     when(w_vn_lvl_0_valid(25, 24) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(831, 768),r_lvl_output_ff(767,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(23,0))
//     }.elsewhen(w_vn_lvl_0_valid(25, 24) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(831, 800),0.U(32.W),r_lvl_output_ff(767,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(23,0))
//     }.elsewhen(w_vn_lvl_0_valid(25, 24) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(799, 768),r_lvl_output_ff(767,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(23,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(767,0))
//     r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(23,0))
//     }

//     when(w_vn_lvl_0_valid(27, 26) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(895, 832),r_lvl_output_ff(831,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(25,0))
//     }.elsewhen(w_vn_lvl_0_valid(27, 26) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(895, 864),0.U(32.W),r_lvl_output_ff(831,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(25,0))
//     }.elsewhen(w_vn_lvl_0_valid(27, 26) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(863, 832),r_lvl_output_ff(831,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(25,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(831,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(25,0))
//     }

//     when(w_vn_lvl_0_valid(29, 28) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(959, 896),r_lvl_output_ff(895,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(27,0))
//     }.elsewhen(w_vn_lvl_0_valid(29, 28) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(959, 928),0.U(32.W),r_lvl_output_ff(895,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(27,0))
//     }.elsewhen(w_vn_lvl_0_valid(29, 28) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(927, 896),r_lvl_output_ff(895,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(27,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(895,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(27,0))
//     }

//     when(w_vn_lvl_0_valid(31, 30) === "b11".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(1023, 960),r_lvl_output_ff(959,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b11".U,r_lvl_output_ff_valid(29,0))
//     }.elsewhen(w_vn_lvl_0_valid(31, 30) === "b10".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(1023, 992),0.U(32.W),r_lvl_output_ff(959,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b10".U,r_lvl_output_ff_valid(29,0))
//     }.elsewhen(w_vn_lvl_0_valid(31, 30) === "b01".U) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_0(991, 960),r_lvl_output_ff(959,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b01".U,r_lvl_output_ff_valid(29,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(959,0))
//         r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(29,0))
//     }
//   }

//   when(rst === true.B) {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1023,0))
//     r_lvl_output_ff_valid := Cat(0.U,"b00".U,r_lvl_output_ff_valid(31,0))
//   }.otherwise {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(31, 0),r_lvl_output_ff(1023,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(0),r_lvl_output_ff_valid(31,0))

//     when(w_vn_lvl_1_valid(0) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(31, 0),r_lvl_output_ff(1055,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(32,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(63, 32),r_lvl_output_ff(1023,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(1),r_lvl_output_ff_valid(32,0))
//     }

//     when(w_vn_lvl_1_valid(1) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(63, 32),r_lvl_output_ff(1087,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(33,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(95, 64),r_lvl_output_ff(1087,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(2),r_lvl_output_ff_valid(33,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(127, 96),r_lvl_output_ff(1119,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(3),r_lvl_output_ff_valid(34,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(159, 128),r_lvl_output_ff(1151,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(4),r_lvl_output_ff_valid(35,0))

//     when(w_vn_lvl_1_valid(2) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(95, 64),r_lvl_output_ff(1183,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(36,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(191, 160),r_lvl_output_ff(1183,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(5),r_lvl_output_ff_valid(36,0))
//     }

//     when(w_vn_lvl_1_valid(3) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(127, 96),r_lvl_output_ff(1215,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(37,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(223, 192),r_lvl_output_ff(1215,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(6),r_lvl_output_ff_valid(37,0))   
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(255, 224),r_lvl_output_ff(1243,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(7),r_lvl_output_ff_valid(38,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(287, 256),r_lvl_output_ff(1279,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(8),r_lvl_output_ff_valid(39,0))

//     when(w_vn_lvl_1_valid(4) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(159, 128),r_lvl_output_ff(1311,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(40,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(319, 288),r_lvl_output_ff(1311,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(9),r_lvl_output_ff_valid(40,0))
//     }

//     when(w_vn_lvl_1_valid(5) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(191, 160),r_lvl_output_ff(1343,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(41,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(351, 320),r_lvl_output_ff(1343,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(10),r_lvl_output_ff_valid(41,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(383, 352),r_lvl_output_ff(1375,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(11),r_lvl_output_ff_valid(42,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(415, 384),r_lvl_output_ff(1407,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(12),r_lvl_output_ff_valid(43,0))

//     when(w_vn_lvl_1_valid(6) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(223, 192),r_lvl_output_ff(1439,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(44,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(447, 416),r_lvl_output_ff(1439,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(13),r_lvl_output_ff_valid(44,0))
//     }

//     when(w_vn_lvl_1_valid(7) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(255, 224),r_lvl_output_ff(1471,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(45,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(479, 448),r_lvl_output_ff(1471,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(14),r_lvl_output_ff_valid(45,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(511, 480),r_lvl_output_ff(1503,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(15),r_lvl_output_ff_valid(46,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(543, 512),r_lvl_output_ff(1535,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(16),r_lvl_output_ff_valid(47,0))

//     when(w_vn_lvl_1_valid(8) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(287, 256),r_lvl_output_ff(1567,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(48,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(575, 544),r_lvl_output_ff(1567,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(17),r_lvl_output_ff_valid(48,0))
//     }

//     when(w_vn_lvl_1_valid(9) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(319, 288),r_lvl_output_ff(1599,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(49,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(607, 576),r_lvl_output_ff(1599,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(18),r_lvl_output_ff_valid(49,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(639, 608),r_lvl_output_ff(1631,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(19),r_lvl_output_ff_valid(50,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(671, 640),r_lvl_output_ff(1663,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(20),r_lvl_output_ff_valid(51,0))

//     when(w_vn_lvl_1_valid(10) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(351, 320),r_lvl_output_ff(1695,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(52,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(703, 672),r_lvl_output_ff(1695,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(21),r_lvl_output_ff_valid(52,0))
//     }

//     when(w_vn_lvl_1_valid(11) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(383, 352),r_lvl_output_ff(1727,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(53,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(735, 704),r_lvl_output_ff(1727,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(22),r_lvl_output_ff_valid(53,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(767, 736),r_lvl_output_ff(1759,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(23),r_lvl_output_ff_valid(54,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(799, 768),r_lvl_output_ff(1791,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(24),r_lvl_output_ff_valid(55,0))

//     when(w_vn_lvl_1_valid(12) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(415, 384),r_lvl_output_ff(1823,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(56,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(831, 800),r_lvl_output_ff(1823,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(25),r_lvl_output_ff_valid(56,0))
//     }

//     when(w_vn_lvl_1_valid(13) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(447, 416),r_lvl_output_ff(1855,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(57,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(863, 832),r_lvl_output_ff(1855,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(26),r_lvl_output_ff_valid(57,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(895, 864),r_lvl_output_ff(1887,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(27),r_lvl_output_ff_valid(58,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(927, 896),r_lvl_output_ff(1919,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(28),r_lvl_output_ff_valid(59,0))

//     when(w_vn_lvl_1_valid(14) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(479, 448),r_lvl_output_ff(1951,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(60,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(959, 928),r_lvl_output_ff(1951,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(29),r_lvl_output_ff_valid(60,0))
//     }

//     when(w_vn_lvl_1_valid(15) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_1(511, 480),r_lvl_output_ff(1983,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(61,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(991, 960),r_lvl_output_ff(1983,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(30),r_lvl_output_ff_valid(61,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1023, 992),r_lvl_output_ff(2015,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(31),r_lvl_output_ff_valid(62,0))

//     }

//     when (rst === true.B) {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2047,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(63,0))
//   }.otherwise {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1055, 1024),r_lvl_output_ff(2047,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(32),r_lvl_output_ff_valid(63,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1087, 1056),r_lvl_output_ff(2079,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(33),r_lvl_output_ff_valid(64,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1119, 1088),r_lvl_output_ff(2111,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(34),r_lvl_output_ff_valid(65,0))

//     when (w_vn_lvl_2_valid(0) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(31, 0),r_lvl_output_ff(2143,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(66,0))
//         }.otherwise {
//             r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1151, 1120),r_lvl_output_ff(2143,0))
//             r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(35),r_lvl_output_ff_valid(66,0))
//         }

//     when (w_vn_lvl_2_valid(1) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(63, 32),r_lvl_output_ff(2175,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(67,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1183, 1152),r_lvl_output_ff(2175,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(36),r_lvl_output_ff_valid(67,0))
//     }
  
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1215, 1184),r_lvl_output_ff(2207,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(37),r_lvl_output_ff_valid(68,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1247, 1216),r_lvl_output_ff(2239,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(38),r_lvl_output_ff_valid(69,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1279, 1248),r_lvl_output_ff(2271,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(39),r_lvl_output_ff_valid(70,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1311, 1280),r_lvl_output_ff(2303,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(40),r_lvl_output_ff_valid(71,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1343, 1312),r_lvl_output_ff(2335,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(41),r_lvl_output_ff_valid(72,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1375, 1344),r_lvl_output_ff(2367,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(42),r_lvl_output_ff_valid(73,0))

//     when (w_vn_lvl_2_valid(2) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(95, 64),r_lvl_output_ff(2399,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(74,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1407, 1376),r_lvl_output_ff(2399,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(43),r_lvl_output_ff_valid(74,0))
//     }

//     when (w_vn_lvl_2_valid(3) === true.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(127, 96),r_lvl_output_ff(2431,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(75,0))
//     }.otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1439, 1408),r_lvl_output_ff(2431,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(44),r_lvl_output_ff_valid(75,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1471, 1440),r_lvl_output_ff(2463,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(45),r_lvl_output_ff_valid(76,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1503, 1472),r_lvl_output_ff(2496,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(46),r_lvl_output_ff_valid(77,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1535, 1504),r_lvl_output_ff(2527,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(47),r_lvl_output_ff_valid(78,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1567, 1536),r_lvl_output_ff(2559,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(48),r_lvl_output_ff_valid(79,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1599, 1568),r_lvl_output_ff(2591,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(49),r_lvl_output_ff_valid(80,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1631, 1600),r_lvl_output_ff(2623,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(50),r_lvl_output_ff_valid(81,0))

//     when (w_vn_lvl_2_valid(4)) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(159, 128),r_lvl_output_ff(2655,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(82,0))
//     } otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1663, 1632),r_lvl_output_ff(2655,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(51),r_lvl_output_ff_valid(82,0))
//     }

//     when (w_vn_lvl_2_valid(5)) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(191, 160),r_lvl_output_ff(2687,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(83,0))
//     } otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1695, 1664),r_lvl_output_ff(2687,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(52),r_lvl_output_ff_valid(83,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1727, 1696),r_lvl_output_ff(2719,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(53),r_lvl_output_ff_valid(84,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1759, 1728),r_lvl_output_ff(2751,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(54),r_lvl_output_ff_valid(85,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1791, 1760),r_lvl_output_ff(2783,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(55),r_lvl_output_ff_valid(86,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1823, 1792),r_lvl_output_ff(2815,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(56),r_lvl_output_ff_valid(87,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1855, 1824),r_lvl_output_ff(2847,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(57),r_lvl_output_ff_valid(88,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1887, 1856),r_lvl_output_ff(2879,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(58),r_lvl_output_ff_valid(89,0))

//     when (w_vn_lvl_2_valid(6)) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(223, 192),r_lvl_output_ff(2912,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(90,0))
//     } otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1919, 1888),r_lvl_output_ff(2912,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(59),r_lvl_output_ff_valid(90,0))
//     }

//     when (w_vn_lvl_2_valid(7)) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_2(255, 224),r_lvl_output_ff(2943,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(91,0))
//     } otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1951, 1920),r_lvl_output_ff(2943,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(60),r_lvl_output_ff_valid(91,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(1983, 1952),r_lvl_output_ff(2975,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(61),r_lvl_output_ff_valid(92,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2015, 1984),r_lvl_output_ff(3007,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(62),r_lvl_output_ff_valid(93,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2047, 2016),r_lvl_output_ff(3039,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(63),r_lvl_output_ff_valid(94,0))

//   }

//   when (rst === 0.B) {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3071,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(95,0))
//   }.otherwise {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2079, 2048),r_lvl_output_ff(3071,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(64),r_lvl_output_ff_valid(95,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2111, 2080),r_lvl_output_ff(3103,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(65),r_lvl_output_ff_valid(96,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2143, 2112),r_lvl_output_ff(3135,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(66),r_lvl_output_ff_valid(97,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2175, 2144),r_lvl_output_ff(3167,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(67),r_lvl_output_ff_valid(98,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2207, 2176),r_lvl_output_ff(3110,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(68),r_lvl_output_ff_valid(99,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2239, 2208),r_lvl_output_ff(3231,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(69),r_lvl_output_ff_valid(100,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2271, 2240),r_lvl_output_ff(3263,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(70),r_lvl_output_ff_valid(101,0))

//     when (w_vn_lvl_3_valid(0)) {
//       r_lvl_output_ff := Cat(0.U,w_vn_lvl_3(31, 0),r_lvl_output_ff(3295,0))
//       r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(102,0))
//     } .otherwise {
//       r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2303, 2272),r_lvl_output_ff(3295,0))
//       r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(71),r_lvl_output_ff_valid(102,0))
//     }

//     when (w_vn_lvl_3_valid(1)) {
//       r_lvl_output_ff := Cat(0.U,w_vn_lvl_3(63, 32),r_lvl_output_ff(3327,0))
//       r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(103,0))
//     } .otherwise {
//       r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2335, 2304),r_lvl_output_ff(3327,0))
//       r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(72),r_lvl_output_ff_valid(103,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2367, 2336),r_lvl_output_ff(3359,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(73),r_lvl_output_ff_valid(104,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2399, 2368),r_lvl_output_ff(3391,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(74),r_lvl_output_ff_valid(105,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2431, 2400),r_lvl_output_ff(3423,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(75),r_lvl_output_ff_valid(106,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2463, 2432),r_lvl_output_ff(3455,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(76),r_lvl_output_ff_valid(107,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2495, 2464),r_lvl_output_ff(3487,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(77),r_lvl_output_ff_valid(108,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2527, 2496),r_lvl_output_ff(3519,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(78),r_lvl_output_ff_valid(109,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2559, 2528),r_lvl_output_ff(3551,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(79),r_lvl_output_ff_valid(110,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2591, 2560),r_lvl_output_ff(3583,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(80),r_lvl_output_ff_valid(111,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2623, 2592),r_lvl_output_ff(3615,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(81),r_lvl_output_ff_valid(112,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2655, 2624),r_lvl_output_ff(3647,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(82),r_lvl_output_ff_valid(113,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2687, 2656),r_lvl_output_ff(3679,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(83),r_lvl_output_ff_valid(114,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2719, 2688),r_lvl_output_ff(3711,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(84),r_lvl_output_ff_valid(115,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2751, 2720),r_lvl_output_ff(3743,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(85),r_lvl_output_ff_valid(116,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2783, 2752),r_lvl_output_ff(3775,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(86),r_lvl_output_ff_valid(117,0))

//     when (w_vn_lvl_3_valid(2)) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_3(95, 64),r_lvl_output_ff(3807,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(118,0))
//     } .otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2815, 2784),r_lvl_output_ff(3807,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(87),r_lvl_output_ff_valid(118,0))
//     }

//     when (w_vn_lvl_3_valid(3)) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_3(127, 96),r_lvl_output_ff(3839,0))
//         r_lvl_output_ff_valid := Cat(0.U,true.B,r_lvl_output_ff_valid(119,0))
//     } .otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2847, 2816),r_lvl_output_ff(3839,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(88),r_lvl_output_ff_valid(119,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2879, 2848),r_lvl_output_ff(3871,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(89),r_lvl_output_ff_valid(120,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2911, 2880),r_lvl_output_ff(3903,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(90),r_lvl_output_ff_valid(121,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2943, 2912),r_lvl_output_ff(3935,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(91),r_lvl_output_ff_valid(122,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(2975, 2944),r_lvl_output_ff(3967,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(92),r_lvl_output_ff_valid(123,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3007, 2976),r_lvl_output_ff(3999,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(93),r_lvl_output_ff_valid(124,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3039, 3008),r_lvl_output_ff(4031,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(94),r_lvl_output_ff_valid(125,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3071, 3040),r_lvl_output_ff(4063,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(95),r_lvl_output_ff_valid(126,0))
//   }

//   when (rst === 1.B) {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(4095,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(127,0))
//   } .otherwise {
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3103, 3072),r_lvl_output_ff(4095,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(96),r_lvl_output_ff_valid(127,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3135, 3104),r_lvl_output_ff(4127,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(97),r_lvl_output_ff_valid(128,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3167, 3136),r_lvl_output_ff(4159,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(98),r_lvl_output_ff_valid(129,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3199, 3168),r_lvl_output_ff(4191, 0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(99),r_lvl_output_ff_valid(130,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3231, 3200),r_lvl_output_ff(4223,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(100),r_lvl_output_ff_valid(131,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3263, 3232),r_lvl_output_ff(4255,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(101),r_lvl_output_ff_valid(132,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3295, 3264),r_lvl_output_ff(4287,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(102),r_lvl_output_ff_valid(133,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3327, 3296),r_lvl_output_ff(4319,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(103),r_lvl_output_ff_valid(134,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3359, 3328),r_lvl_output_ff(4351,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(104),r_lvl_output_ff_valid(135,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3391, 3360),r_lvl_output_ff(4383,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(105),r_lvl_output_ff_valid(136,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3423, 3392),r_lvl_output_ff(4415,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(106),r_lvl_output_ff_valid(137,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3455, 3424),r_lvl_output_ff(4447,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(107),r_lvl_output_ff_valid(138,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3487, 3456),r_lvl_output_ff(4479,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(108),r_lvl_output_ff_valid(139,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3519, 3488),r_lvl_output_ff(4511,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(109),r_lvl_output_ff_valid(140,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3551, 3520),r_lvl_output_ff(4543,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(110),r_lvl_output_ff_valid(141,0))

//     when (w_vn_lvl_4_valid(0) === 1.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_4(31, 0),r_lvl_output_ff(4575,0))
//         r_lvl_output_ff_valid := Cat(0.U,1.B,r_lvl_output_ff_valid(142,0))
//     } .otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3583, 3552),r_lvl_output_ff(4575,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(111),r_lvl_output_ff_valid(142,0))
//     }

//     when (w_vn_lvl_4_valid(1) === 1.B) {
//         r_lvl_output_ff := Cat(0.U,w_vn_lvl_4(63, 32),r_lvl_output_ff(4607,0))
//         r_lvl_output_ff_valid := Cat(0.U,1.B,r_lvl_output_ff_valid(143,0))
//     } .otherwise {
//         r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3615, 3584),r_lvl_output_ff(4607,0))
//         r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(112),r_lvl_output_ff_valid(143,0))
//     }

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3647, 3616),r_lvl_output_ff(4639,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(113),r_lvl_output_ff_valid(144,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3679, 3648),r_lvl_output_ff(4671,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(114),r_lvl_output_ff_valid(145,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3711, 3680),r_lvl_output_ff(4703,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(115),r_lvl_output_ff_valid(146,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3743, 3712),r_lvl_output_ff(4735,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(116),r_lvl_output_ff_valid(147,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3775, 3744),r_lvl_output_ff(4767,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(117),r_lvl_output_ff_valid(148,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3807, 3776),r_lvl_output_ff(4799,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(118),r_lvl_output_ff_valid(149,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3839, 3808),r_lvl_output_ff(4831,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(119),r_lvl_output_ff_valid(150,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3871, 3840),r_lvl_output_ff(4863,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(120),r_lvl_output_ff_valid(151,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3903, 3872),r_lvl_output_ff(4895,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(121),r_lvl_output_ff_valid(152,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3935, 3904),r_lvl_output_ff(4927,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(122),r_lvl_output_ff_valid(153,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3967, 3936),r_lvl_output_ff(4959,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(123),r_lvl_output_ff_valid(154,0))
    
//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(3999, 3968),r_lvl_output_ff(4991,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(124),r_lvl_output_ff_valid(155,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(4031, 4000),r_lvl_output_ff(5023,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(125),r_lvl_output_ff_valid(156,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(4063, 4032),r_lvl_output_ff(5055,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(126),r_lvl_output_ff_valid(157,0))

//     r_lvl_output_ff := Cat(0.U,r_lvl_output_ff(4095, 4064),r_lvl_output_ff(5087,0))
//     r_lvl_output_ff_valid := Cat(0.U,r_lvl_output_ff_valid(127),r_lvl_output_ff_valid(158,0))
//   }

//     when (io.i_valid === 1.U) {
//     r_valid(0) := 1.U
//   } .otherwise {
//     r_valid(0) := 0.U
//   }

//   for (i <- 0 until 6) {
//     when (rst === 1.U) {
//         r_valid(i + 1) := 0.U
//     } .otherwise {
//         r_valid(i + 1) := r_valid(i)
//     }
//   }

//   val my_adder_0 = Module(new EdgeAdderSwitch)

//   my_adder_0.io.i_valid := r_valid(0)
//   my_adder_0.io.i_data_bus := io.i_data_bus(63,0)
//   my_adder_0.io.i_add_en := io.i_add_en_bus(0)
//   my_adder_0.io.i_cmd := io.i_cmd_bus(2,0)
//   my_adder_0.io.i_sel := 0.U
//   my_adder_0.io.o_vn := w_vn_lvl_0(63,0)
//   my_adder_0.io.o_vn_valid := w_vn_lvl_0_valid(1,0)
//   my_adder_0.io.o_adder := w_fan_lvl_0(31,0)

//   val my_adder_1 = Module(new EdgeAdderSwitch)

//   my_adder_1.io.i_valid := r_valid(1)
//   my_adder_1.io.i_data_bus := Cat(w_fan_lvl_0(63,32), w_fan_lvl_0(31,0))
//   my_adder_1.io.i_add_en := io.i_add_en_bus(16)
//   my_adder_1.io.i_cmd := io.i_cmd_bus(50,48)
//   my_adder_1.io.i_sel := 0.U
//   my_adder_1.io.o_vn := w_vn_lvl_1(63,0)
//   my_adder_1.io.o_vn_valid := w_vn_lvl_1_valid(1 , 0)
//   my_adder_1.io.o_adder := w_fan_lvl_1(31 , 0)

//   val my_adder_2 = Module(new AdderSwitch)

//   my_adder_2.io.i_valid := r_valid(0)
//   my_adder_2.io.i_data_bus := io.i_data_bus(127 , 64)
//   my_adder_2.io.i_add_en := io.i_add_en_bus(1)
//   my_adder_2.io.i_cmd := io.i_cmd_bus(5,3)
//   my_adder_2.io.i_sel := 0.U
//   my_adder_2.io.o_vn := w_vn_lvl_0(127 , 64)
//   my_adder_2.io.o_vn_valid := w_vn_lvl_0_valid(3 , 2)
//   my_adder_2.io.o_adder := w_fan_lvl_0(95 , 32)

//   val my_adder_3 = Module(new EdgeAdderSwitch)

//   my_adder_3.io.i_valid := r_valid(2)
//   my_adder_3.io.i_data_bus := Cat(w_fan_lvl_1(63,32), r_fan_ff_lvl_0_to_2(63,32), r_fan_ff_lvl_0_to_2(31,0), w_fan_lvl_1(31,0))
//   my_adder_3.io.i_add_en := io.i_add_en_bus(24)
//   my_adder_3.io.i_cmd := io.i_cmd_bus(74,72)
//   my_adder_3.io.i_sel := io.i_sel_bus(1,0)
//   my_adder_3.io.o_vn := w_vn_lvl_2(63 , 0)
//   my_adder_3.io.o_vn_valid := w_vn_lvl_2_valid(1 , 0)
//   my_adder_3.io.o_adder := w_fan_lvl_2(31 , 0)

//   val my_adder_4 = Module(new AdderSwitch)

//   my_adder_4.io.i_valid := r_valid(0)
//   my_adder_4.io.i_data_bus := io.i_data_bus(191,128)
//   my_adder_4.io.i_add_en := io.i_add_en_bus(2)
//   my_adder_4.io.i_cmd := io.i_cmd_bus(8,6)
//   my_adder_4.io.i_sel := 0.U
//   my_adder_4.io.o_vn := w_vn_lvl_0(191 , 128)
//   my_adder_4.io.o_vn_valid := w_vn_lvl_0_valid(5 , 4)
//   my_adder_4.io.o_adder := w_fan_lvl_0(159 , 96)

//   val my_adder_5 = Module(new AdderSwitch)

//   my_adder_5.io.i_valid := r_valid(1)
//   my_adder_5.io.i_data_bus := Cat(w_fan_lvl_0(191,160), w_fan_lvl_0(159,128))
//   my_adder_5.io.i_add_en := io.i_add_en_bus(17)
//   my_adder_5.io.i_cmd := io.i_cmd_bus(53,51)
//   my_adder_5.io.i_sel := 0.U
//   my_adder_5.io.o_vn := w_vn_lvl_1(127 ,64)
//   my_adder_5.io.o_vn_valid := w_vn_lvl_1_valid(3 , 2)
//   my_adder_5.io.o_adder := w_fan_lvl_1(95 , 32)

//   val my_adder_6 = Module(new AdderSwitch)

//   my_adder_6.io.i_valid := r_valid(0)
//   my_adder_6.io.i_data_bus := io.i_data_bus(255 , 192)
//   my_adder_6.io.i_add_en := io.i_add_en_bus(3)
//   my_adder_6.io.i_cmd := io.i_cmd_bus(11,9)
//   my_adder_6.io.i_sel := 0.U
//   my_adder_6.io.o_vn := w_vn_lvl_0(255 , 192)
//   my_adder_6.io.o_vn_valid := w_vn_lvl_0_valid(7 , 6)
//   my_adder_6.io.o_adder := w_fan_lvl_0(223 , 160)

//   val my_adder_7 = Module(new EdgeAdderSwitch)

//   my_adder_7.io.i_valid := r_valid(3)
//   my_adder_7.io.i_data_bus := Cat( w_fan_lvl_2(63,32), r_fan_ff_lvl_1_to_3(63,32), r_fan_ff_lvl_0_to_3(63,32), r_fan_ff_lvl_0_to_3(31,0), r_fan_ff_lvl_1_to_3(31,0), w_fan_lvl_2(31,0))
//   my_adder_7.io.i_add_en := io.i_add_en_bus(28)
//   my_adder_7.io.i_cmd := io.i_cmd_bus(86,84)
//   my_adder_7.io.i_sel := io.i_sel_bus(11,8)
//   my_adder_7.io.o_vn := w_vn_lvl_3(63 , 0)
//   my_adder_7.io.o_vn_valid := w_vn_lvl_3_valid(1 , 0) 
//   my_adder_7.io.o_adder := w_fan_lvl_3(31 , 0)

//   val my_adder_8 = Module(new AdderSwitch)

//   my_adder_8.io.i_valid := r_valid(0)
//   my_adder_8.io.i_data_bus := io.i_data_bus(319 , 256)
//   my_adder_8.io.i_add_en := io.i_add_en_bus(4)
//   my_adder_8.io.i_cmd := io.i_cmd_bus(14,12)
//   my_adder_8.io.i_sel := 0.U
//   my_adder_8.io.o_vn := w_vn_lvl_0(319 , 256)
//   my_adder_8.io.o_vn_valid := w_vn_lvl_0_valid(9 , 8)
//   my_adder_8.io.o_adder := w_fan_lvl_0(287 , 224)

//   val my_adder_9 = Module(new AdderSwitch)

//   my_adder_9.io.i_valid := r_valid(1)
//   my_adder_9.io.i_data_bus := Cat(w_fan_lvl_0(319,288), w_fan_lvl_0(287,256))
//   my_adder_9.io.i_add_en := io.i_add_en_bus(18)
//   my_adder_9.io.i_cmd := io.i_cmd_bus(56,54)
//   my_adder_9.io.i_sel := 0.U
//   my_adder_9.io.o_vn := w_vn_lvl_1(191 , 128)
//   my_adder_9.io.o_vn_valid := w_vn_lvl_1_valid(5 , 4)
//   my_adder_9.io.o_adder := w_fan_lvl_1(159 , 96)

//   val my_adder_10 = Module(new AdderSwitch)

//   my_adder_10.io.i_valid := r_valid(0)
//   my_adder_10.io.i_data_bus := io.i_data_bus(383,320)
//   my_adder_10.io.i_add_en := io.i_add_en_bus(5)
//   my_adder_10.io.i_cmd := io.i_cmd_bus(17,15)
//   my_adder_10.io.i_sel := 0.U
//   my_adder_10.io.o_vn := w_vn_lvl_0(383 , 320)
//   my_adder_10.io.o_vn_valid := w_vn_lvl_0_valid(11 , 10)
//   my_adder_10.io.o_adder := w_fan_lvl_0(351 , 288)


//   val my_adder_11 = Module(new AdderSwitch)

//   my_adder_11.io.i_valid := r_valid(2)
//   my_adder_11.io.i_data_bus := Cat(w_fan_lvl_1(191,160), r_fan_ff_lvl_0_to_2(191,160), r_fan_ff_lvl_0_to_2(159,128), w_fan_lvl_1(159,128))
//   my_adder_11.io.i_add_en := io.i_add_en_bus(25)
//   my_adder_11.io.i_cmd := io.i_cmd_bus(77,75)
//   my_adder_11.io.i_sel := io.i_sel_bus(3,2)
//   my_adder_11.io.o_vn := w_vn_lvl_2(127 , 64)
//   my_adder_11.io.o_vn_valid := w_vn_lvl_2_valid(3 , 2)
//   my_adder_11.io.o_adder := w_fan_lvl_2(95 , 32)


//   val my_adder_12 = Module(new AdderSwitch)

//   my_adder_12.io.i_valid := r_valid(0)
//   my_adder_12.io.i_data_bus := io.i_data_bus(447,384)
//   my_adder_12.io.i_add_en := io.i_add_en_bus(6)
//   my_adder_12.io.i_cmd := io.i_cmd_bus(20,18)
//   my_adder_12.io.i_sel := 0.U
//   my_adder_12.io.o_vn := w_vn_lvl_0(447 , 384)
//   my_adder_12.io.o_vn_valid := w_vn_lvl_0_valid(13 , 12)
//   my_adder_12.io.o_adder := w_fan_lvl_0(415 , 352) 


//   val my_adder_13 = Module(new AdderSwitch)

//   my_adder_13.io.i_valid := r_valid(1)
//   my_adder_13.io.i_data_bus := Cat(w_fan_lvl_0(447,416), w_fan_lvl_0(415,384))
//   my_adder_13.io.i_add_en := io.i_add_en_bus(19)
//   my_adder_13.io.i_cmd := io.i_cmd_bus(59,57)
//   my_adder_13.io.i_sel := 0.U
//   my_adder_13.io.o_vn := w_vn_lvl_1(255 , 192)
//   my_adder_13.io.o_vn_valid := w_vn_lvl_1_valid(7 , 6)
//   my_adder_13.io.o_adder := w_fan_lvl_0(233 , 160) 


//   val my_adder_14 = Module(new AdderSwitch)

//   my_adder_14.io.i_valid := r_valid(0)
//   my_adder_14.io.i_data_bus := io.i_data_bus(511,448)
//   my_adder_14.io.i_add_en := io.i_add_en_bus(7)
//   my_adder_14.io.i_cmd := io.i_cmd_bus(23,21)
//   my_adder_14.io.i_sel := 0.U
//   my_adder_14.io.o_vn := w_vn_lvl_0(511 , 448)
//   my_adder_14.io.o_vn_valid := w_vn_lvl_0_valid(15 , 14)
//   my_adder_14.io.o_adder := w_fan_lvl_0(479 , 416)  


//   val my_adder_15 = Module(new EdgeAdderSwitch)

//   my_adder_15.io.i_valid := r_valid(4)
//   my_adder_15.io.i_data_bus := Cat(w_fan_lvl_3(63,32), r_fan_ff_lvl_2_to_4(63,32), r_fan_ff_lvl_1_to_4(63,32), r_fan_ff_lvl_0_to_4(63,32), r_fan_ff_lvl_0_to_4(31,0), r_fan_ff_lvl_1_to_4(31,0), r_fan_ff_lvl_2_to_4(31,0), w_fan_lvl_3(31,0))
//   my_adder_15.io.i_add_en := io.i_add_en_bus(30)
//   my_adder_15.io.i_cmd := io.i_cmd_bus(92,90)
//   my_adder_15.io.i_sel := io.i_sel_bus(19,16)
//   my_adder_15.io.o_vn := w_vn_lvl_4(63 , 0)
//   my_adder_15.io.o_vn_valid := w_vn_lvl_4_valid(1 , 0)
//   my_adder_15.io.o_adder := w_fan_lvl_4(31 , 0) 


//   val my_adder_16 = Module(new AdderSwitch)

//   my_adder_16.io.i_valid := r_valid(0)
//   my_adder_16.io.i_data_bus := io.i_data_bus(575,512)
//   my_adder_16.io.i_add_en := io.i_add_en_bus(8)
//   my_adder_16.io.i_cmd := io.i_cmd_bus(26,24)
//   my_adder_16.io.i_sel := 0.U
//   my_adder_16.io.o_vn := w_vn_lvl_0(575 , 512)
//   my_adder_16.io.o_vn_valid := w_vn_lvl_0_valid(17 , 16)
//   my_adder_16.io.o_adder := w_fan_lvl_0(543 , 480) 


//   val my_adder_17 = Module(new AdderSwitch)

//   my_adder_17.io.i_valid := r_valid(1)
//   my_adder_17.io.i_data_bus := Cat(w_fan_lvl_0(575,544), w_fan_lvl_0(543,512))
//   my_adder_17.io.i_add_en := io.i_add_en_bus(20)
//   my_adder_17.io.i_cmd := io.i_cmd_bus(62,60)
//   my_adder_17.io.i_sel := 0.U
//   my_adder_17.io.o_vn := w_vn_lvl_1(319 , 256)
//   my_adder_17.io.o_vn_valid := w_vn_lvl_1_valid(9 , 8)
//   my_adder_17.io.o_adder := w_fan_lvl_1(287 , 224) 


//   val my_adder_18 = Module(new AdderSwitch)

//   my_adder_18.io.i_valid := r_valid(0)
//   my_adder_18.io.i_data_bus := io.i_data_bus(639,576)
//   my_adder_18.io.i_add_en := io.i_add_en_bus(9)
//   my_adder_18.io.i_cmd := io.i_cmd_bus(29,27)
//   my_adder_18.io.i_sel := 0.U
//   my_adder_18.io.o_vn := w_vn_lvl_0(639 , 576)
//   my_adder_18.io.o_vn_valid := w_vn_lvl_0_valid(19 , 18)
//   my_adder_18.io.o_adder := w_fan_lvl_0(607 , 544) 


//   val my_adder_19 = Module(new AdderSwitch)

//   my_adder_19.io.i_valid := r_valid(2)
//   my_adder_19.io.i_data_bus := Cat(w_fan_lvl_1(319,288), r_fan_ff_lvl_0_to_2(319,288), r_fan_ff_lvl_0_to_2(287,256), w_fan_lvl_1(287,256))
//   my_adder_19.io.i_add_en := io.i_add_en_bus(26)
//   my_adder_19.io.i_cmd := io.i_cmd_bus(80,78)
//   my_adder_19.io.i_sel := io.i_sel_bus(5,4)
//   my_adder_19.io.o_vn := w_vn_lvl_2(191 , 128)
//   my_adder_19.io.o_vn_valid := w_vn_lvl_2_valid(5 , 4)
//   my_adder_19.io.o_adder := w_fan_lvl_2(159 , 96) 



//   val my_adder_20 = Module(new AdderSwitch)

//   my_adder_20.io.i_valid := r_valid(0)
//   my_adder_20.io.i_data_bus := io.i_data_bus(703,640)
//   my_adder_20.io.i_add_en := io.i_add_en_bus(10)
//   my_adder_20.io.i_cmd := io.i_cmd_bus(32,30)
//   my_adder_20.io.i_sel := 0.U
//   my_adder_20.io.o_vn := w_vn_lvl_0(703 , 640)
//   my_adder_20.io.o_vn_valid := w_vn_lvl_0_valid(21 , 20)
//   my_adder_20.io.o_adder := w_fan_lvl_0(671 , 608)




//   val my_adder_21 = Module(new AdderSwitch)

//   my_adder_21.io.i_valid := r_valid(1)
//   my_adder_21.io.i_data_bus := Cat(w_fan_lvl_0(703,672), w_fan_lvl_0(671,640))
//   my_adder_21.io.i_add_en := io.i_add_en_bus(21)
//   my_adder_21.io.i_cmd := io.i_cmd_bus(65,63)
//   my_adder_21.io.i_sel := 0.U
//   my_adder_21.io.o_vn := w_vn_lvl_1(383 , 320)
//   my_adder_21.io.o_vn_valid := w_vn_lvl_1_valid(11 , 10)
//   my_adder_21.io.o_adder := w_fan_lvl_1(351 , 288)  


//   val my_adder_22 = Module(new AdderSwitch)

//   my_adder_22.io.i_valid := r_valid(0)
//   my_adder_22.io.i_data_bus := io.i_data_bus(767,704)
//   my_adder_22.io.i_add_en := io.i_add_en_bus(11)
//   my_adder_22.io.i_cmd := io.i_cmd_bus(35,33)
//   my_adder_22.io.i_sel := 0.U
//   my_adder_22.io.o_vn := w_vn_lvl_0(767 , 704)
//   my_adder_22.io.o_vn_valid := w_vn_lvl_0_valid(23 , 22)
//   my_adder_22.io.o_adder := w_fan_lvl_0(735 , 672)


//   val my_adder_23 = Module(new EdgeAdderSwitch)

//   my_adder_23.io.i_valid := r_valid(3)
//   my_adder_23.io.i_data_bus := Cat(w_fan_lvl_2(191,160), r_fan_ff_lvl_1_to_3(191,160), r_fan_ff_lvl_0_to_3(191,160), r_fan_ff_lvl_0_to_3(159,128), r_fan_ff_lvl_1_to_3(159,128), w_fan_lvl_2(159,128))
//   my_adder_23.io.i_add_en := io.i_add_en_bus(29)
//   my_adder_23.io.i_cmd := io.i_cmd_bus(89,87)
//   my_adder_23.io.i_sel := io.i_sel_bus(15,12)
//   my_adder_23.io.o_vn := w_vn_lvl_3(127 , 64)
//   my_adder_23.io.o_vn_valid := w_vn_lvl_3_valid(3 , 2)
//   my_adder_23.io.o_adder := w_fan_lvl_3(63 , 32) 



//   val my_adder_24 = Module(new AdderSwitch)

//   my_adder_24.io.i_valid := r_valid(0)
//   my_adder_24.io.i_data_bus := io.i_data_bus(831,768)
//   my_adder_24.io.i_add_en := io.i_add_en_bus(12)
//   my_adder_24.io.i_cmd := io.i_cmd_bus(38,36)
//   my_adder_24.io.i_sel := 0.U
//   my_adder_24.io.o_vn := w_vn_lvl_0(831 , 768)
//   my_adder_24.io.o_vn_valid := w_vn_lvl_0_valid(25 , 24)
//   my_adder_24.io.o_adder := w_fan_lvl_0(799 , 736)



//   val my_adder_25 = Module(new AdderSwitch)

//   my_adder_25.io.i_valid := r_valid(1)
//   my_adder_25.io.i_data_bus := Cat(w_fan_lvl_0(831,800), w_fan_lvl_0(799,768))
//   my_adder_25.io.i_add_en := io.i_add_en_bus(22)
//   my_adder_25.io.i_cmd := io.i_cmd_bus(68,66)
//   my_adder_25.io.i_sel := 0.U
//   my_adder_25.io.o_vn := w_vn_lvl_1(447 , 384)
//   my_adder_25.io.o_vn_valid := w_vn_lvl_1_valid(13 , 12)
//   my_adder_25.io.o_adder := w_fan_lvl_1(415 , 352)



//   val my_adder_26 = Module(new AdderSwitch)

//   my_adder_26.io.i_valid := r_valid(0)
//   my_adder_26.io.i_data_bus := io.i_data_bus(895,832)
//   my_adder_26.io.i_add_en := io.i_add_en_bus(13)
//   my_adder_26.io.i_cmd := io.i_cmd_bus(41,39)
//   my_adder_26.io.i_sel := 0.U
//   my_adder_26.io.o_vn := w_vn_lvl_0(895 , 831)
//   my_adder_26.io.o_vn_valid := w_vn_lvl_0_valid(27 , 26)
//   my_adder_26.io.o_adder := w_fan_lvl_0(863 , 800) 


//   val my_adder_27 = Module(new EdgeAdderSwitch)

//   my_adder_27.io.i_valid := r_valid(2)
//   my_adder_27.io.i_data_bus := Cat(w_fan_lvl_1(447,416), r_fan_ff_lvl_0_to_2(447,416), r_fan_ff_lvl_0_to_2(415,384), w_fan_lvl_1(415,384))
//   my_adder_27.io.i_add_en := io.i_add_en_bus(27)
//   my_adder_27.io.i_cmd := io.i_cmd_bus(83,81)
//   my_adder_27.io.i_sel := io.i_sel_bus(7,6)
//   my_adder_27.io.o_vn := w_vn_lvl_2(255 , 192)
//   my_adder_27.io.o_vn_valid := w_vn_lvl_2_valid(7 , 6)
//   my_adder_27.io.o_adder := w_fan_lvl_2(191 , 160)




//   val my_adder_28 = Module(new AdderSwitch)

//   my_adder_28.io.i_valid := r_valid(0)
//   my_adder_28.io.i_data_bus := io.i_data_bus(959,896)
//   my_adder_28.io.i_add_en := io.i_add_en_bus(14)
//   my_adder_28.io.i_cmd := io.i_cmd_bus(44,42)
//   my_adder_28.io.i_sel := 0.U
//   my_adder_28.io.o_vn := w_vn_lvl_0(959 , 896)
//   my_adder_28.io.o_vn_valid := w_vn_lvl_0_valid(29 , 28)
//   my_adder_28.io.o_adder := w_fan_lvl_0(927 , 864) 



//   val my_adder_29 = Module(new EdgeAdderSwitch)

//   my_adder_29.io.i_valid := r_valid(1)
//   my_adder_29.io.i_data_bus := Cat(w_fan_lvl_0(959,928), w_fan_lvl_0(927,896))
//   my_adder_29.io.i_add_en := io.i_add_en_bus(23)
//   my_adder_29.io.i_cmd := io.i_cmd_bus(71,69)
//   my_adder_29.io.i_sel := 0.U
//   my_adder_29.io.o_vn := w_vn_lvl_1(511 , 448)
//   my_adder_29.io.o_vn_valid := w_vn_lvl_1_valid(15 , 14)
//   my_adder_29.io.o_adder := w_fan_lvl_1(447 , 416)



//   val my_adder_30 = Module(new EdgeAdderSwitch)

//   my_adder_30.io.i_valid := r_valid(0)
//   my_adder_30.io.i_data_bus := io.i_data_bus(1023,960)
//   my_adder_30.io.i_add_en := io.i_add_en_bus(15)
//   my_adder_30.io.i_cmd := io.i_cmd_bus(47,425)
//   my_adder_30.io.i_sel := 0.U
//   my_adder_30.io.o_vn := w_vn_lvl_0(1023 , 960)
//   my_adder_30.io.o_vn_valid := w_vn_lvl_0_valid(31 , 30)
//   my_adder_30.io.o_adder := w_fan_lvl_0(959 , 928) 



//   when(rst === true.B) {
//     r_final_add := 0.U
//     r_final_add2 := 0.U
//     r_final_sum := 0.U
//   }.otherwise {
//     r_final_add := io.i_add_en_bus(30)
//     r_final_add2 := r_final_add
//     r_final_sum := w_fan_lvl_4
//   }


  
//   when (rst === true.B) {
//     io.o_data_bus := 0.U
//   } .otherwise {
//     io.o_data_bus(479, 0) := r_lvl_output_ff(4575, 4096)
//     when (r_final_add2 === true.B) {
//         io.o_data_bus(511, 480) := r_final_sum
//     } .otherwise {
//         io.o_data_bus(511, 480) := r_lvl_output_ff(4607, 4576)
//     }
//     io.o_data_bus(1023, 512) := r_lvl_output_ff(5119, 4608)
//   }



//   when (rst === true.B || r_valid(6) === false.B) {
//     io.o_valid := 0.U
//   } .otherwise {
//     io.o_valid(14, 0) := r_lvl_output_ff_valid(143, 128)
//     when (r_final_add2 === true.B) {
//         io.o_valid(15) := true.B
//     } .otherwise {
//         io.o_valid(15) := r_lvl_output_ff_valid(143)
//     }
//     io.o_valid(31, 16) := r_lvl_output_ff_valid(159, 144)
//   }


  
// }

    

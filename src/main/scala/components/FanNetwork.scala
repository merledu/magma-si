
// Working on this component

package magmasi.components

import chisel3._
import chisel3.util._

class FanNetwork(DATA_TYPE: Int = 32,NUM_PES: Int = 32,LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
    val i_valid = Input(Bool())
        val i_data_bus = Input(UInt((NUM_PES * DATA_TYPE).W))
    val i_add_en_bus = Input(UInt((NUM_PES - 1).W))
    val i_cmd_bus = Input(UInt((3 * (NUM_PES - 1)).W))
    val i_sel_bus = Input(UInt(20.W))
    val o_valid = Output(Vec(NUM_PES, UInt(1.W)))
    val o_data_bus = Output(Vec(NUM_PES, UInt( DATA_TYPE.W)))
  })

  // Use the register value as io.i_sel_bus


  // val w_fan_lvl_0 = Wire(UInt(960.W))
  // val w_fan_lvl_1 = Wire(UInt(448.W))
  // val w_fan_lvl_2 = Wire(UInt(192.W))
  // val w_fan_lvl_3 = Wire(UInt(64.W))
  // val w_fan_lvl_4 = Wire(UInt(32.W))

  // val r_fan_ff_lvl_0_to_4 = RegInit(0.U(64.W))
  // val r_fan_ff_lvl_0_to_3 = RegInit(0.U(192.W))
  // val r_fan_ff_lvl_0_to_2 = RegInit(0.U(448.W))
  // val r_fan_ff_lvl_1_to_4 = RegInit(0.U(64.W))
  // val r_fan_ff_lvl_1_to_3 = RegInit(0.U(192.W))
  // val r_fan_ff_lvl_2_to_4 = RegInit(0.U(64.W))

  // val w_vn_lvl_0 = Wire(UInt(1024.W))
  // val w_vn_lvl_0_valid = Wire(UInt(32.W))
  // val w_vn_lvl_1 = Wire(UInt(512.W))
  // val w_vn_lvl_1_valid = Wire(UInt(16.W))
  // val w_vn_lvl_2 = Wire(UInt(256.W))
  // val w_vn_lvl_2_valid = Wire(UInt(8.W))
  // val w_vn_lvl_3 = Wire(UInt(128.W))
  // val w_vn_lvl_3_valid = Wire(UInt(4.W))
  // val w_vn_lvl_4 = Wire(UInt(64.W))
  // val w_vn_lvl_4_valid = Wire(UInt(2.W))

  // val r_lvl_output_ff = RegInit(VecInit(Seq.fill(160)(0.U(32.W))))
  // val r_lvl_output_ff_valid = RegInit(VecInit(Seq.fill(160)(0.U(1.W))))  
  // val r_valid = RegInit(0.U(7.W))
  // val r_final_sum = RegInit(0.U(DATA_TYPE.W))
  // val r_final_add = RegInit(false.B)
  // val r_final_add2 = RegInit(false.B)

// Initialize all the wires with zero
val w_fan_lvl_0 = WireInit(VecInit(Seq.fill(30)(0.U(960.W))))
val w_fan_lvl_1 = WireInit(VecInit(Seq.fill(14)(0.U(448.W))))
val w_fan_lvl_2 = WireInit(VecInit(Seq.fill(6)(0.U(192.W))))
val w_fan_lvl_3 = WireInit(VecInit(Seq.fill(2)(0.U(64.W))))
val w_fan_lvl_4 = WireInit(VecInit(Seq.fill(1)(0.U(32.W))))


val w_vn_lvl_0 = WireInit(VecInit(Seq.fill(32)(0.U(32.W))))
val w_vn_lvl_0_valid = WireInit(VecInit(Seq.fill(32)(0.U(1.W))))
val w_vn_lvl_1 = WireInit(VecInit(Seq.fill(16)(0.U(32.W))))
val w_vn_lvl_1_valid = WireInit(VecInit(Seq.fill(16)(0.U(1.W))))
val w_vn_lvl_2 = WireInit(VecInit(Seq.fill(8)(0.U(32.W))))
val w_vn_lvl_2_valid = WireInit(VecInit(Seq.fill(8)(0.U(1.W))))
val w_vn_lvl_3 = WireInit(VecInit(Seq.fill(4)(0.U(32.W))))
val w_vn_lvl_3_valid = WireInit(VecInit(Seq.fill(4)(0.U(1.W))))
val w_vn_lvl_4 = WireInit(VecInit(Seq.fill(2)(0.U(32.W))))
val w_vn_lvl_4_valid = WireInit(VecInit(Seq.fill(2)(0.U(1.W))))


  // Initialize all the registers with zero using RegInit
  val r_fan_ff_lvl_0_to_4 = RegInit(0.U(64.W))
  val r_fan_ff_lvl_0_to_3 = RegInit(0.U(192.W))
  val r_fan_ff_lvl_0_to_2 = RegInit(0.U(448.W))
  val r_fan_ff_lvl_1_to_4 = RegInit(0.U(64.W))
  val r_fan_ff_lvl_1_to_3 = RegInit(0.U(192.W))
  val r_fan_ff_lvl_2_to_4 = RegInit(0.U(64.W))

  val r_lvl_output_ff = RegInit(VecInit(Seq.fill(160)(0.U(32.W))))
  val r_lvl_output_ff_valid = RegInit(VecInit(Seq.fill(160)(0.U(1.W))))  
  val r_valid = RegInit(VecInit(Seq.fill(7)(0.U(1.W))))
val r_final_sum = RegInit(0.U(32.W))
  val r_final_add = RegInit(false.B)
  val r_final_add2 = RegInit(false.B)

  val clk = clock
  val rst = reset.asBool
  

  when(rst) {
    r_fan_ff_lvl_0_to_4 := 0.U
    r_fan_ff_lvl_0_to_3 := 0.U
    r_fan_ff_lvl_0_to_2 := 0.U
    r_fan_ff_lvl_1_to_4 := 0.U
    r_fan_ff_lvl_1_to_3 := 0.U
    r_fan_ff_lvl_2_to_4 := 0.U
  }.otherwise {
    r_fan_ff_lvl_0_to_4 := Cat(r_fan_ff_lvl_0_to_3(95, 64), r_fan_ff_lvl_0_to_3(127, 96))
    r_fan_ff_lvl_0_to_3 := Cat(r_fan_ff_lvl_0_to_2(95, 64), r_fan_ff_lvl_0_to_2(127, 96),r_fan_ff_lvl_0_to_2(223, 192), r_fan_ff_lvl_0_to_2(255, 224))
    r_fan_ff_lvl_0_to_2 := Cat(w_fan_lvl_0(1), w_fan_lvl_0(2), w_fan_lvl_0(4),w_fan_lvl_0(5), w_fan_lvl_0(7), w_fan_lvl_0(8),w_fan_lvl_0(10), w_fan_lvl_0(11), w_fan_lvl_0(13),w_fan_lvl_0(14), w_fan_lvl_0(16), w_fan_lvl_0(17),w_fan_lvl_0(19), w_fan_lvl_0(20))
    r_fan_ff_lvl_1_to_4 := Cat(r_fan_ff_lvl_1_to_3(95, 64), r_fan_ff_lvl_1_to_3(127, 96))
    r_fan_ff_lvl_1_to_3 := Cat(w_fan_lvl_1(1), w_fan_lvl_1(2), w_fan_lvl_1(4), w_fan_lvl_1(5), w_fan_lvl_1(7), w_fan_lvl_1(8))
    r_fan_ff_lvl_2_to_4 := Cat(w_fan_lvl_2(1),w_fan_lvl_2(2))
  }

//   when(rst) {
//   r_lvl_output_ff := VecInit(Seq.fill(160)(0.U(32.W))) // Reset to all zeros
//   r_lvl_output_ff_valid := VecInit(Seq.fill(160)(0.U(1.W))) // Reset to all zeros
// }.
when(rst === 0.B) {
when (w_vn_lvl_0_valid(1)(0) === 1.U && w_vn_lvl_0_valid(0)(0) === 1.U) {
  r_lvl_output_ff(1) := w_vn_lvl_0(1)
  r_lvl_output_ff(0) := w_vn_lvl_0(0)
  r_lvl_output_ff_valid(1) := true.B
  r_lvl_output_ff_valid(0) := true.B
}.elsewhen (w_vn_lvl_0_valid(1)(0) === 1.U && w_vn_lvl_0_valid(0)(0) === 0.U) {
  r_lvl_output_ff(1) := w_vn_lvl_0(1)
  r_lvl_output_ff(0) := 0.U
  r_lvl_output_ff_valid(1) := true.B
  r_lvl_output_ff_valid(0) := false.B
}.elsewhen (w_vn_lvl_0_valid(1)(0) === 0.U && w_vn_lvl_0_valid(0)(0) === 1.U) {
  r_lvl_output_ff(1) := 0.U
  r_lvl_output_ff(0) := w_vn_lvl_0(0)
  r_lvl_output_ff_valid(1) := false.B
  r_lvl_output_ff_valid(0) := true.B
}.otherwise {
  r_lvl_output_ff(1) := 0.U
  r_lvl_output_ff(0) := 0.U
  r_lvl_output_ff_valid(1) := false.B
  r_lvl_output_ff_valid(0) := false.B
}


when (w_vn_lvl_0_valid(3)(0) === 1.U && w_vn_lvl_0_valid(2)(0) === 1.U) {
  r_lvl_output_ff(3) := w_vn_lvl_0(3)(1)
  r_lvl_output_ff(2) := w_vn_lvl_0(3)(0)
  r_lvl_output_ff_valid(3) := true.B
  r_lvl_output_ff_valid(2) := true.B
}.elsewhen (w_vn_lvl_0_valid(3)(0) === 1.U && w_vn_lvl_0_valid(2)(0) === 0.U) {
  r_lvl_output_ff(3) := w_vn_lvl_0(3)(1)
  r_lvl_output_ff(2) := 0.U
  r_lvl_output_ff_valid(3) := true.B
  r_lvl_output_ff_valid(2) := false.B
}.elsewhen (w_vn_lvl_0_valid(3)(0) === 0.U && w_vn_lvl_0_valid(2)(0) === 1.U) {
  r_lvl_output_ff(3) := 0.U
  r_lvl_output_ff(2) := w_vn_lvl_0(3)(0)
  r_lvl_output_ff_valid(3) := false.B
  r_lvl_output_ff_valid(2) := true.B
}.otherwise {
  r_lvl_output_ff(3) := 0.U
  r_lvl_output_ff(2) := 0.U
  r_lvl_output_ff_valid(3) := false.B
  r_lvl_output_ff_valid(2) := false.B
}

when (w_vn_lvl_0_valid(5)(0) === 1.U && w_vn_lvl_0_valid(4)(0) === 1.U) {
  r_lvl_output_ff(5) := w_vn_lvl_0(5)
  r_lvl_output_ff(4) := w_vn_lvl_0(4)
  r_lvl_output_ff_valid(5) := true.B
  r_lvl_output_ff_valid(4) := true.B
}.elsewhen (w_vn_lvl_0_valid(5)(0) === 1.U && w_vn_lvl_0_valid(4)(0) === 0.U) {
  r_lvl_output_ff(5) := w_vn_lvl_0(5)
  r_lvl_output_ff(4) := 0.U
  r_lvl_output_ff_valid(5) := true.B
  r_lvl_output_ff_valid(4) := false.B
}.elsewhen (w_vn_lvl_0_valid(5)(0) === 0.U && w_vn_lvl_0_valid(4)(0) === 1.U) {
  r_lvl_output_ff(5) := 0.U
  r_lvl_output_ff(4) := w_vn_lvl_0(4)
  r_lvl_output_ff_valid(5) := false.B
  r_lvl_output_ff_valid(4) := true.B
}.otherwise {
  r_lvl_output_ff(5) := 0.U
  r_lvl_output_ff(4) := 0.U
  r_lvl_output_ff_valid(5) := false.B
  r_lvl_output_ff_valid(4) := false.B
}


when (w_vn_lvl_0_valid(7)(0) === 1.U && w_vn_lvl_0_valid(6)(0) === 1.U) {
  r_lvl_output_ff(7) := w_vn_lvl_0(7)
  r_lvl_output_ff(6) := w_vn_lvl_0(6)
  r_lvl_output_ff_valid(7) := true.B
  r_lvl_output_ff_valid(6) := true.B
}.elsewhen (w_vn_lvl_0_valid(7)(0) === 1.U && w_vn_lvl_0_valid(6)(0) === 0.U) {
  r_lvl_output_ff(7) := w_vn_lvl_0(7)
  r_lvl_output_ff(6) := 0.U
  r_lvl_output_ff_valid(7) := true.B
  r_lvl_output_ff_valid(6) := false.B
}.elsewhen (w_vn_lvl_0_valid(7)(0) === 0.U && w_vn_lvl_0_valid(6)(0) === 1.U) {
  r_lvl_output_ff(7) := 0.U
  r_lvl_output_ff(6) := w_vn_lvl_0(6)
  r_lvl_output_ff_valid(7) := false.B
  r_lvl_output_ff_valid(6) := true.B
}.otherwise {
  r_lvl_output_ff(7) := 0.U
  r_lvl_output_ff(6) := 0.U
  r_lvl_output_ff_valid(7) := false.B
  r_lvl_output_ff_valid(6) := false.B
}
when (w_vn_lvl_0_valid(9)(0) && w_vn_lvl_0_valid(8)(0)) {
  r_lvl_output_ff(9) := w_vn_lvl_0(9)
  r_lvl_output_ff(8) := w_vn_lvl_0(8)
  r_lvl_output_ff_valid(9) := true.B
  r_lvl_output_ff_valid(8) := true.B
}.elsewhen (w_vn_lvl_0_valid(9)(0) && !w_vn_lvl_0_valid(8)(0)) {
  r_lvl_output_ff(9) := w_vn_lvl_0(9)
  r_lvl_output_ff(8) := 0.U
  r_lvl_output_ff_valid(9) := true.B
  r_lvl_output_ff_valid(8) := false.B
}.elsewhen (!w_vn_lvl_0_valid(9)(0) && w_vn_lvl_0_valid(8)(0)) {
  r_lvl_output_ff(9) := 0.U
  r_lvl_output_ff(8) := w_vn_lvl_0(8)
  r_lvl_output_ff_valid(9) := false.B
  r_lvl_output_ff_valid(8) := true.B
}.otherwise {
  r_lvl_output_ff(9) := 0.U
  r_lvl_output_ff(8) := 0.U
  r_lvl_output_ff_valid(9) := false.B
  r_lvl_output_ff_valid(8) := false.B
}
when (w_vn_lvl_0_valid(11)(0) && w_vn_lvl_0_valid(10)(0)) {
  r_lvl_output_ff(11) := w_vn_lvl_0(11)
  r_lvl_output_ff(10) := w_vn_lvl_0(10)
  r_lvl_output_ff_valid(11) := true.B
  r_lvl_output_ff_valid(10) := true.B
}.elsewhen (w_vn_lvl_0_valid(11)(0) && !w_vn_lvl_0_valid(10)(0)) {
  r_lvl_output_ff(11) := w_vn_lvl_0(11)
  r_lvl_output_ff(10) := 0.U
  r_lvl_output_ff_valid(11) := true.B
  r_lvl_output_ff_valid(10) := false.B
}.elsewhen (!w_vn_lvl_0_valid(11)(0) && w_vn_lvl_0_valid(10)(0)) {
  r_lvl_output_ff(11) := 0.U
  r_lvl_output_ff(10) := w_vn_lvl_0(10)
  r_lvl_output_ff_valid(11) := false.B
  r_lvl_output_ff_valid(10) := true.B
}.otherwise {
  r_lvl_output_ff(11) := 0.U
  r_lvl_output_ff(10) := 0.U
  r_lvl_output_ff_valid(11) := false.B
  r_lvl_output_ff_valid(10) := false.B
}
when (w_vn_lvl_0_valid(13)(0) && w_vn_lvl_0_valid(12)(0)) {
  r_lvl_output_ff(13) := w_vn_lvl_0(13)
  r_lvl_output_ff(12) := w_vn_lvl_0(12)
  r_lvl_output_ff_valid(13) := true.B
  r_lvl_output_ff_valid(12) := true.B
}.elsewhen (w_vn_lvl_0_valid(13)(0) && !w_vn_lvl_0_valid(12)(0)) {
  r_lvl_output_ff(13) := w_vn_lvl_0(13)
  r_lvl_output_ff(12) := 0.U
  r_lvl_output_ff_valid(13) := true.B
  r_lvl_output_ff_valid(12) := false.B
}.elsewhen (!w_vn_lvl_0_valid(13)(0) && w_vn_lvl_0_valid(12)(0)) {
  r_lvl_output_ff(13) := 0.U
  r_lvl_output_ff(12) := w_vn_lvl_0(12)
  r_lvl_output_ff_valid(13) := false.B
  r_lvl_output_ff_valid(12) := true.B
}.otherwise {
  r_lvl_output_ff(13) := 0.U
  r_lvl_output_ff(12) := 0.U
  r_lvl_output_ff_valid(13) := false.B
  r_lvl_output_ff_valid(12) := false.B
}
when (w_vn_lvl_0_valid(15)(0) && w_vn_lvl_0_valid(14)(0)) {
  r_lvl_output_ff(15) := w_vn_lvl_0(15)
  r_lvl_output_ff(14) := w_vn_lvl_0(14)
  r_lvl_output_ff_valid(15) := true.B
  r_lvl_output_ff_valid(14) := true.B
}.elsewhen (w_vn_lvl_0_valid(15)(0) && !w_vn_lvl_0_valid(14)(0)) {
  r_lvl_output_ff(15) := w_vn_lvl_0(15)
  r_lvl_output_ff(14) := 0.U
  r_lvl_output_ff_valid(15) := true.B
  r_lvl_output_ff_valid(14) := false.B
}.elsewhen (!w_vn_lvl_0_valid(15)(0) && w_vn_lvl_0_valid(14)(0)) {
  r_lvl_output_ff(15) := 0.U
  r_lvl_output_ff(14) := w_vn_lvl_0(14)
  r_lvl_output_ff_valid(15) := false.B
  r_lvl_output_ff_valid(14) := true.B
}.otherwise {
  r_lvl_output_ff(15) := 0.U
  r_lvl_output_ff(14) := 0.U
  r_lvl_output_ff_valid(15) := false.B
  r_lvl_output_ff_valid(14) := false.B
}
when (w_vn_lvl_0_valid(17)(0) && w_vn_lvl_0_valid(16)(0)) {
  r_lvl_output_ff(17) := w_vn_lvl_0(17)
  r_lvl_output_ff(16) := w_vn_lvl_0(16)
  r_lvl_output_ff_valid(17) := true.B
  r_lvl_output_ff_valid(16) := true.B
}.elsewhen (w_vn_lvl_0_valid(17)(0) && !w_vn_lvl_0_valid(16)(0)) {
  r_lvl_output_ff(17) := w_vn_lvl_0(17)
  r_lvl_output_ff(16) := 0.U
  r_lvl_output_ff_valid(17) := true.B
  r_lvl_output_ff_valid(16) := false.B
}.elsewhen (!w_vn_lvl_0_valid(17)(0) && w_vn_lvl_0_valid(16)(0)) {
  r_lvl_output_ff(17) := 0.U
  r_lvl_output_ff(16) := w_vn_lvl_0(16)
  r_lvl_output_ff_valid(17) := false.B
  r_lvl_output_ff_valid(16) := true.B
}.otherwise {
  r_lvl_output_ff(17) := 0.U
  r_lvl_output_ff(16) := 0.U
  r_lvl_output_ff_valid(17) := false.B
  r_lvl_output_ff_valid(16) := false.B
}
when (w_vn_lvl_0_valid(19)(0) && w_vn_lvl_0_valid(18)(0)) {
  r_lvl_output_ff(19) := w_vn_lvl_0(19)
  r_lvl_output_ff(18) := w_vn_lvl_0(18)
  r_lvl_output_ff_valid(19) := true.B
  r_lvl_output_ff_valid(18) := true.B
}.elsewhen (w_vn_lvl_0_valid(19)(0) && !w_vn_lvl_0_valid(18)(0)) {
  r_lvl_output_ff(19) := w_vn_lvl_0(19)
  r_lvl_output_ff(18) := 0.U
  r_lvl_output_ff_valid(19) := true.B
  r_lvl_output_ff_valid(18) := false.B
}.elsewhen (!w_vn_lvl_0_valid(19)(0) && w_vn_lvl_0_valid(18)(0)) {
  r_lvl_output_ff(19) := 0.U
  r_lvl_output_ff(18) := w_vn_lvl_0(18)
  r_lvl_output_ff_valid(19) := false.B
  r_lvl_output_ff_valid(18) := true.B
}.otherwise {
  r_lvl_output_ff(19) := 0.U
  r_lvl_output_ff(18) := 0.U
  r_lvl_output_ff_valid(19) := false.B
  r_lvl_output_ff_valid(18) := false.B
}
when (w_vn_lvl_0_valid(21)(0) && w_vn_lvl_0_valid(20)(0)) {
  r_lvl_output_ff(21) := w_vn_lvl_0(21)
  r_lvl_output_ff(20) := w_vn_lvl_0(20)
  r_lvl_output_ff_valid(21) := true.B
  r_lvl_output_ff_valid(20) := true.B
}.elsewhen (w_vn_lvl_0_valid(21)(0) && !w_vn_lvl_0_valid(20)(0)) {
  r_lvl_output_ff(21) := w_vn_lvl_0(21)
  r_lvl_output_ff(20) := 0.U
  r_lvl_output_ff_valid(21) := true.B
  r_lvl_output_ff_valid(20) := false.B
}.elsewhen (!w_vn_lvl_0_valid(21)(0) && w_vn_lvl_0_valid(20)(0)) {
  r_lvl_output_ff(21) := 0.U
  r_lvl_output_ff(20) := w_vn_lvl_0(20)
  r_lvl_output_ff_valid(21) := false.B
  r_lvl_output_ff_valid(20) := true.B
}.otherwise {
  r_lvl_output_ff(21) := 0.U
  r_lvl_output_ff(20) := 0.U
  r_lvl_output_ff_valid(21) := false.B
  r_lvl_output_ff_valid(20) := false.B
}
when (w_vn_lvl_0_valid(23)(0) && w_vn_lvl_0_valid(22)(0)) {
  r_lvl_output_ff(23) := w_vn_lvl_0(23)
  r_lvl_output_ff(22) := w_vn_lvl_0(22)
  r_lvl_output_ff_valid(23) := true.B
  r_lvl_output_ff_valid(22) := true.B
}.elsewhen (w_vn_lvl_0_valid(23)(0) && !w_vn_lvl_0_valid(22)(0)) {
  r_lvl_output_ff(23) := w_vn_lvl_0(23)
  r_lvl_output_ff(22) := 0.U
  r_lvl_output_ff_valid(23) := true.B
  r_lvl_output_ff_valid(22) := false.B
}.elsewhen (!w_vn_lvl_0_valid(23)(0) && w_vn_lvl_0_valid(22)(0)) {
  r_lvl_output_ff(23) := 0.U
  r_lvl_output_ff(22) := w_vn_lvl_0(22)
  r_lvl_output_ff_valid(23) := false.B
  r_lvl_output_ff_valid(22) := true.B
}.otherwise {
  r_lvl_output_ff(23) := 0.U
  r_lvl_output_ff(22) := 0.U
  r_lvl_output_ff_valid(23) := false.B
  r_lvl_output_ff_valid(22) := false.B
}
when (w_vn_lvl_0_valid(25)(0) && w_vn_lvl_0_valid(24)(0)) {
  r_lvl_output_ff(25) := w_vn_lvl_0(25)
  r_lvl_output_ff(24) := w_vn_lvl_0(24)
  r_lvl_output_ff_valid(25) := true.B
  r_lvl_output_ff_valid(24) := true.B
}.elsewhen (w_vn_lvl_0_valid(25)(0) && !w_vn_lvl_0_valid(24)(0)) {
  r_lvl_output_ff(25) := w_vn_lvl_0(25)
  r_lvl_output_ff(24) := 0.U
  r_lvl_output_ff_valid(25) := true.B
  r_lvl_output_ff_valid(24) := false.B
}.elsewhen (!w_vn_lvl_0_valid(25)(0) && w_vn_lvl_0_valid(24)(0)) {
  r_lvl_output_ff(25) := 0.U
  r_lvl_output_ff(24) := w_vn_lvl_0(24)
  r_lvl_output_ff_valid(25) := false.B
  r_lvl_output_ff_valid(24) := true.B
}.otherwise {
  r_lvl_output_ff(25) := 0.U
  r_lvl_output_ff(24) := 0.U
  r_lvl_output_ff_valid(25) := false.B
  r_lvl_output_ff_valid(24) := false.B
}
when (w_vn_lvl_0_valid(27)(0) && w_vn_lvl_0_valid(26)(0)) {
  r_lvl_output_ff(27) := w_vn_lvl_0(27)
  r_lvl_output_ff(26) := w_vn_lvl_0(26)
  r_lvl_output_ff_valid(27) := true.B
  r_lvl_output_ff_valid(26) := true.B
}.elsewhen (w_vn_lvl_0_valid(27)(0) && !w_vn_lvl_0_valid(26)(0)) {
  r_lvl_output_ff(27) := w_vn_lvl_0(27)
  r_lvl_output_ff(26) := 0.U
  r_lvl_output_ff_valid(27) := true.B
  r_lvl_output_ff_valid(26) := false.B
}.elsewhen (!w_vn_lvl_0_valid(27)(0) && w_vn_lvl_0_valid(26)(0)) {
  r_lvl_output_ff(27) := 0.U
  r_lvl_output_ff(26) := w_vn_lvl_0(26)
  r_lvl_output_ff_valid(27) := false.B
  r_lvl_output_ff_valid(26) := true.B
}.otherwise {
  r_lvl_output_ff(27) := 0.U
  r_lvl_output_ff(26) := 0.U
  r_lvl_output_ff_valid(27) := false.B
  r_lvl_output_ff_valid(26) := false.B
}
when (w_vn_lvl_0_valid(29)(0) && w_vn_lvl_0_valid(28)(0)) {
  r_lvl_output_ff(29) := w_vn_lvl_0(29)
  r_lvl_output_ff(28) := w_vn_lvl_0(28)
  r_lvl_output_ff_valid(29) := true.B
  r_lvl_output_ff_valid(28) := true.B
}.elsewhen (w_vn_lvl_0_valid(29)(0) && !w_vn_lvl_0_valid(28)(0)) {
  r_lvl_output_ff(29) := w_vn_lvl_0(29)
  r_lvl_output_ff(28) := 0.U
  r_lvl_output_ff_valid(29) := true.B
  r_lvl_output_ff_valid(28) := false.B
}.elsewhen (!w_vn_lvl_0_valid(29)(0) && w_vn_lvl_0_valid(28)(0)) {
  r_lvl_output_ff(29) := 0.U
  r_lvl_output_ff(28) := w_vn_lvl_0(28)
  r_lvl_output_ff_valid(29) := false.B
  r_lvl_output_ff_valid(28) := true.B
}.otherwise {
  r_lvl_output_ff(29) := 0.U
  r_lvl_output_ff(28) := 0.U
  r_lvl_output_ff_valid(29) := false.B
  r_lvl_output_ff_valid(28) := false.B
}
when(w_vn_lvl_0_valid(31)(0) && w_vn_lvl_0_valid(30)(0)) {
  r_lvl_output_ff(31) := w_vn_lvl_0(31)
  r_lvl_output_ff(30) := w_vn_lvl_0(30)
  r_lvl_output_ff_valid(31) := true.B
  r_lvl_output_ff_valid(30) := true.B
}.elsewhen(w_vn_lvl_0_valid(31)(0) && !w_vn_lvl_0_valid(30)(0)) {
  r_lvl_output_ff(31) := w_vn_lvl_0(31)
  r_lvl_output_ff(30) := 0.U
  r_lvl_output_ff_valid(31) := true.B
  r_lvl_output_ff_valid(30) := false.B
}.elsewhen(!w_vn_lvl_0_valid(31)(0) && w_vn_lvl_0_valid(30)(0)) {
  r_lvl_output_ff(31) := 0.U
  r_lvl_output_ff(30) := w_vn_lvl_0(30)
  r_lvl_output_ff_valid(31) := false.B
  r_lvl_output_ff_valid(30) := true.B
}.otherwise {
  r_lvl_output_ff(31) := 0.U
  r_lvl_output_ff(30) := 0.U
  r_lvl_output_ff_valid(31) := false.B
  r_lvl_output_ff_valid(30) := false.B
}
}
when (rst === 0.B){
r_lvl_output_ff(32) := r_lvl_output_ff(0)
r_lvl_output_ff_valid(32) := r_lvl_output_ff_valid(0)

when(w_vn_lvl_1_valid(0)(0)) {
    r_lvl_output_ff(33) := w_vn_lvl_1(0)
    r_lvl_output_ff_valid(33) := true.B
}.otherwise {
    r_lvl_output_ff(33) := r_lvl_output_ff(1)
    r_lvl_output_ff_valid(33) := r_lvl_output_ff_valid(1)
}

r_lvl_output_ff(34) := r_lvl_output_ff(2)
r_lvl_output_ff_valid(34) := r_lvl_output_ff_valid(2)

r_lvl_output_ff(35) := r_lvl_output_ff(3)
r_lvl_output_ff_valid(35) := r_lvl_output_ff_valid(3)

when(w_vn_lvl_1_valid(2)(0)) {
    r_lvl_output_ff(36) := w_vn_lvl_1(1)
    r_lvl_output_ff_valid(36) := true.B
}.otherwise {
    r_lvl_output_ff(36) := r_lvl_output_ff(4)
    r_lvl_output_ff_valid(36) := r_lvl_output_ff_valid(4)
}

when(w_vn_lvl_1_valid(3)(0)) {
    r_lvl_output_ff(37) := w_vn_lvl_1(2)
    r_lvl_output_ff_valid(37) := true.B
}.otherwise {
    r_lvl_output_ff(37) := r_lvl_output_ff(5)
    r_lvl_output_ff_valid(37) := r_lvl_output_ff_valid(5)
}



r_lvl_output_ff(38) := r_lvl_output_ff(6)
r_lvl_output_ff_valid(38) := r_lvl_output_ff_valid(6)

r_lvl_output_ff(39) := r_lvl_output_ff(7)
r_lvl_output_ff_valid(39) := r_lvl_output_ff_valid(7)

when(w_vn_lvl_1_valid(4)(0)) {
    r_lvl_output_ff(40) := w_vn_lvl_1(3)
    r_lvl_output_ff_valid(40) := true.B
}.otherwise {
    r_lvl_output_ff(40) := r_lvl_output_ff(8)
    r_lvl_output_ff_valid(40) := r_lvl_output_ff_valid(8)
}
when(w_vn_lvl_1_valid(5)(0)) {
    r_lvl_output_ff(41) := w_vn_lvl_1(4)
    r_lvl_output_ff_valid(41) := true.B
}.otherwise {
    r_lvl_output_ff(41) := r_lvl_output_ff(9)
    r_lvl_output_ff_valid(41) := r_lvl_output_ff_valid(9)
}

r_lvl_output_ff(42) := r_lvl_output_ff(10)
r_lvl_output_ff_valid(42) := r_lvl_output_ff_valid(10)

r_lvl_output_ff(43) := r_lvl_output_ff(11)
r_lvl_output_ff_valid(43) := r_lvl_output_ff_valid(11)

when(w_vn_lvl_1_valid(7)(0)) {
    r_lvl_output_ff(44) := w_vn_lvl_1(5)
    r_lvl_output_ff_valid(44) := true.B
}.otherwise {
    r_lvl_output_ff(44) := r_lvl_output_ff(12)
    r_lvl_output_ff_valid(44) := r_lvl_output_ff_valid(12)
}
r_lvl_output_ff(45) := r_lvl_output_ff(13)
r_lvl_output_ff_valid(45) := r_lvl_output_ff_valid(13)

r_lvl_output_ff(46) := r_lvl_output_ff(14)
r_lvl_output_ff_valid(46) := r_lvl_output_ff_valid(14)

when(w_vn_lvl_1_valid(8)(0)) {
    r_lvl_output_ff(47) := w_vn_lvl_1(6)
    r_lvl_output_ff_valid(47) := true.B
}.otherwise {
    r_lvl_output_ff(47) := r_lvl_output_ff(15)
    r_lvl_output_ff_valid(47) := r_lvl_output_ff_valid(15)
}

when(w_vn_lvl_1_valid(9)(0)) {
    r_lvl_output_ff(48) := w_vn_lvl_1(7)
    r_lvl_output_ff_valid(48) := true.B
}.otherwise {
    r_lvl_output_ff(48) := r_lvl_output_ff(16)
    r_lvl_output_ff_valid(48) := r_lvl_output_ff_valid(16)
}



r_lvl_output_ff(51) := r_lvl_output_ff(17)
r_lvl_output_ff_valid(51) := r_lvl_output_ff_valid(17)

r_lvl_output_ff(52) := r_lvl_output_ff(18)
r_lvl_output_ff_valid(52) := r_lvl_output_ff_valid(18)

when(w_vn_lvl_1_valid(10)(0)) {
    r_lvl_output_ff(53) := w_vn_lvl_1(8)
    r_lvl_output_ff_valid(53) := true.B
}.otherwise {
    r_lvl_output_ff(53) := r_lvl_output_ff(19)
    r_lvl_output_ff_valid(53) := r_lvl_output_ff_valid(19)
}

when(w_vn_lvl_1_valid(11)(0)) {
    r_lvl_output_ff(54) := w_vn_lvl_1(9)
    r_lvl_output_ff_valid(54) := true.B
}.otherwise {
    r_lvl_output_ff(54) := r_lvl_output_ff(20)
    r_lvl_output_ff_valid(54) := r_lvl_output_ff_valid(20)
}

r_lvl_output_ff(55) := r_lvl_output_ff(21)
r_lvl_output_ff_valid(55) := r_lvl_output_ff_valid(21)

r_lvl_output_ff(56) := r_lvl_output_ff(22)
r_lvl_output_ff_valid(56) := r_lvl_output_ff_valid(22)

when(w_vn_lvl_1_valid(12)(0)) {
    r_lvl_output_ff(57) := w_vn_lvl_1(10)
    r_lvl_output_ff_valid(57) := true.B
}.otherwise {
    r_lvl_output_ff(57) := r_lvl_output_ff(23)
    r_lvl_output_ff_valid(57) := r_lvl_output_ff_valid(23)
}

when(w_vn_lvl_1_valid(13)(0)) {
    r_lvl_output_ff(58) := w_vn_lvl_1(11)
    r_lvl_output_ff_valid(58) := true.B
}.otherwise {
    r_lvl_output_ff(58) := r_lvl_output_ff(24)
    r_lvl_output_ff_valid(58) := r_lvl_output_ff_valid(24)
}

r_lvl_output_ff(59) := r_lvl_output_ff(25)
    r_lvl_output_ff_valid(59) := r_lvl_output_ff_valid(25)

    r_lvl_output_ff(60) := r_lvl_output_ff(26)
    r_lvl_output_ff_valid(60) := r_lvl_output_ff_valid(26)

    when(w_vn_lvl_1_valid(14) === true.B) {
        r_lvl_output_ff(61) := w_vn_lvl_1(12)
        r_lvl_output_ff_valid(61) := true.B
    }.otherwise {
        r_lvl_output_ff(61) := r_lvl_output_ff(27)
    r_lvl_output_ff_valid(61) := r_lvl_output_ff_valid(27)
    }

    when(w_vn_lvl_1_valid(15) === true.B) {
        r_lvl_output_ff(62) := w_vn_lvl_1(13)
        r_lvl_output_ff_valid(62) := true.B
    }.otherwise {
        r_lvl_output_ff(62) := r_lvl_output_ff(28)
        r_lvl_output_ff_valid(62) := r_lvl_output_ff_valid(28)
    }

    r_lvl_output_ff(63) := r_lvl_output_ff(29)
    r_lvl_output_ff_valid(63) := r_lvl_output_ff_valid(29)

}

when { rst === 0.U} {
      r_lvl_output_ff(64) := r_lvl_output_ff(32)
    r_lvl_output_ff_valid(64) := r_lvl_output_ff_valid(32)

    r_lvl_output_ff(65) := r_lvl_output_ff(33)
    r_lvl_output_ff_valid(65) := r_lvl_output_ff_valid(33)

    r_lvl_output_ff(66) := r_lvl_output_ff(34)
    r_lvl_output_ff_valid(66) := r_lvl_output_ff_valid(34)

    when (w_vn_lvl_2_valid(0) === true.B) {
        r_lvl_output_ff(67) := w_vn_lvl_2(0)
        r_lvl_output_ff_valid(67) := true.B
        }.otherwise {
            r_lvl_output_ff(67) := r_lvl_output_ff(35)
            r_lvl_output_ff_valid(67) := r_lvl_output_ff_valid(35)
        }

        when (w_vn_lvl_2_valid(1) === true.B) {
        r_lvl_output_ff(68) := w_vn_lvl_2(1)
        r_lvl_output_ff_valid(68) := true.B
    }.otherwise {
        r_lvl_output_ff(68) := r_lvl_output_ff(36)
        r_lvl_output_ff_valid(68) := r_lvl_output_ff_valid(36)
    }
  
    r_lvl_output_ff(69) := r_lvl_output_ff(37)
    r_lvl_output_ff_valid(69) := r_lvl_output_ff_valid(37)

    r_lvl_output_ff(70) := r_lvl_output_ff(38)
    r_lvl_output_ff_valid(70) := r_lvl_output_ff_valid(38)

    r_lvl_output_ff(71) := r_lvl_output_ff(39)
    r_lvl_output_ff_valid(71) := r_lvl_output_ff_valid(39)

    r_lvl_output_ff(72) := r_lvl_output_ff(40)
    r_lvl_output_ff_valid(72) := r_lvl_output_ff_valid(40)

    r_lvl_output_ff(73) := r_lvl_output_ff(41)
    r_lvl_output_ff_valid(73) := r_lvl_output_ff_valid(41)

    r_lvl_output_ff(74) := r_lvl_output_ff(42)
    r_lvl_output_ff_valid(74) := r_lvl_output_ff_valid(42)

    when (w_vn_lvl_2_valid(2) === true.B) {
        r_lvl_output_ff(75) := w_vn_lvl_2(2)
        r_lvl_output_ff_valid(75) := true.B
    }.otherwise {
        r_lvl_output_ff(75) := r_lvl_output_ff(43)
        r_lvl_output_ff_valid(75) := r_lvl_output_ff_valid(43)
    }

    when (w_vn_lvl_2_valid(3) === true.B) {
        r_lvl_output_ff(76) := w_vn_lvl_2(3)
        r_lvl_output_ff_valid(76) := true.B
    }.otherwise {
        r_lvl_output_ff(76) := r_lvl_output_ff(44)
        r_lvl_output_ff_valid(76) := r_lvl_output_ff_valid(44)
    }

    r_lvl_output_ff(77) := r_lvl_output_ff(45)
    r_lvl_output_ff_valid(77) := r_lvl_output_ff_valid(45)

    r_lvl_output_ff(78) := r_lvl_output_ff(46)
    r_lvl_output_ff_valid(78) := r_lvl_output_ff_valid(46)

    r_lvl_output_ff(79) := r_lvl_output_ff(47)
    r_lvl_output_ff_valid(79) := r_lvl_output_ff_valid(47)

    r_lvl_output_ff(80) := r_lvl_output_ff(48)
    r_lvl_output_ff_valid(80) := r_lvl_output_ff_valid(48)

    r_lvl_output_ff(81) := r_lvl_output_ff(49)
    r_lvl_output_ff_valid(81) := r_lvl_output_ff_valid(49)

    r_lvl_output_ff(82) := r_lvl_output_ff(50)
    r_lvl_output_ff_valid(82) := r_lvl_output_ff_valid(50)

    when (w_vn_lvl_2_valid(4) === true.B) {
        r_lvl_output_ff(83) := w_vn_lvl_2(4)
        r_lvl_output_ff_valid(83) := true.B
    } otherwise {
        r_lvl_output_ff(83) := r_lvl_output_ff(51)
        r_lvl_output_ff_valid(83) := r_lvl_output_ff_valid(51)
    }

    when (w_vn_lvl_2_valid(5) === 1.B) {
        r_lvl_output_ff(84) := w_vn_lvl_2(5)
        r_lvl_output_ff_valid(84) := true.B
    } otherwise {
        r_lvl_output_ff(84) := r_lvl_output_ff(52)
    r_lvl_output_ff_valid(84) := r_lvl_output_ff_valid(52)
    }

    r_lvl_output_ff(85) := r_lvl_output_ff(53)
    r_lvl_output_ff_valid(85) := r_lvl_output_ff_valid(53)

    r_lvl_output_ff(86) := r_lvl_output_ff(54)
    r_lvl_output_ff_valid(86) := r_lvl_output_ff_valid(54)

    r_lvl_output_ff(87) := r_lvl_output_ff(55)
    r_lvl_output_ff_valid(87) := r_lvl_output_ff_valid(55)

    r_lvl_output_ff(88) := r_lvl_output_ff(56)
    r_lvl_output_ff_valid(88) := r_lvl_output_ff_valid(56)

    r_lvl_output_ff(89) := r_lvl_output_ff(57)
    r_lvl_output_ff_valid(89) := r_lvl_output_ff_valid(57)

    r_lvl_output_ff(90) := r_lvl_output_ff(58)
    r_lvl_output_ff_valid(90) := r_lvl_output_ff_valid(58)

    when (w_vn_lvl_2_valid(6) === 1.B) {
        r_lvl_output_ff(91) := w_vn_lvl_2(6)
        r_lvl_output_ff_valid(91) := true.B
    } otherwise {
        r_lvl_output_ff(91) := r_lvl_output_ff(59)
        r_lvl_output_ff_valid(91) := r_lvl_output_ff_valid(59)
    }

    when (w_vn_lvl_2_valid(7) === 1.B) {
        r_lvl_output_ff(92) := w_vn_lvl_2(7)
        r_lvl_output_ff_valid(92) := true.B
    } otherwise {
        r_lvl_output_ff(92) := r_lvl_output_ff(60)
        r_lvl_output_ff_valid(92) := r_lvl_output_ff_valid(60)
    }

    r_lvl_output_ff(93) := r_lvl_output_ff(61)
    r_lvl_output_ff_valid(93) := r_lvl_output_ff_valid(61)

    r_lvl_output_ff(94) := r_lvl_output_ff(62)
    r_lvl_output_ff_valid(94) := r_lvl_output_ff_valid(62)

    r_lvl_output_ff(95) := r_lvl_output_ff(63)
    r_lvl_output_ff_valid(95) := r_lvl_output_ff_valid(63)

}

  // when (rst === 0.B) {
  //   r_lvl_output_ff(4095, 3072) := 0.U
  //   r_lvl_output_ff_valid(127, 96) := 0.U
  // }.
  when (rst === 0.B) {
    r_lvl_output_ff(96) := r_lvl_output_ff(64)
    r_lvl_output_ff_valid(96) := r_lvl_output_ff_valid(64)

    r_lvl_output_ff(97) := r_lvl_output_ff(65)
    r_lvl_output_ff_valid(97) := r_lvl_output_ff_valid(65)

    r_lvl_output_ff(98) := r_lvl_output_ff(66)
    r_lvl_output_ff_valid(98) := r_lvl_output_ff_valid(66)

    r_lvl_output_ff(99) := r_lvl_output_ff(67)
    r_lvl_output_ff_valid(99) := r_lvl_output_ff_valid(67)

    r_lvl_output_ff(100) := r_lvl_output_ff(68)
    r_lvl_output_ff_valid(100) := r_lvl_output_ff_valid(68)

    r_lvl_output_ff(101) := r_lvl_output_ff(69)
    r_lvl_output_ff_valid(101) := r_lvl_output_ff_valid(69)

    r_lvl_output_ff(102) := r_lvl_output_ff(70)
    r_lvl_output_ff_valid(102) := r_lvl_output_ff_valid(70)

    when (w_vn_lvl_3_valid(0) === 1.B) {
      r_lvl_output_ff(103) := w_vn_lvl_3(0)
      r_lvl_output_ff_valid(103) := true.B
    } .otherwise {
      r_lvl_output_ff(103) := r_lvl_output_ff(71)
      r_lvl_output_ff_valid(103) := r_lvl_output_ff_valid(71)
    }

    when (w_vn_lvl_3_valid(1) === 1.B) {
      r_lvl_output_ff(104) := w_vn_lvl_3(1)
      r_lvl_output_ff_valid(104) := true.B
    } .otherwise {
      r_lvl_output_ff(104) := r_lvl_output_ff(72)
      r_lvl_output_ff_valid(104) := r_lvl_output_ff_valid(72)
    }

    r_lvl_output_ff(105) := r_lvl_output_ff(73)
    r_lvl_output_ff_valid(105) := r_lvl_output_ff_valid(73)

    r_lvl_output_ff(106) := r_lvl_output_ff(74)
    r_lvl_output_ff_valid(106) := r_lvl_output_ff_valid(74)

    r_lvl_output_ff(107) := r_lvl_output_ff(75)
    r_lvl_output_ff_valid(107) := r_lvl_output_ff_valid(75)

    r_lvl_output_ff(108) := r_lvl_output_ff(76)
    r_lvl_output_ff_valid(108) := r_lvl_output_ff_valid(76)

    r_lvl_output_ff(109) := r_lvl_output_ff(77)
    r_lvl_output_ff_valid(109) := r_lvl_output_ff_valid(77)

    r_lvl_output_ff(110) := r_lvl_output_ff(78)
    r_lvl_output_ff_valid(110) := r_lvl_output_ff_valid(78)

    r_lvl_output_ff(11) := r_lvl_output_ff(79)
    r_lvl_output_ff_valid(111) := r_lvl_output_ff_valid(79)

    r_lvl_output_ff(112) := r_lvl_output_ff(80)
    r_lvl_output_ff_valid(112) := r_lvl_output_ff_valid(80)

    r_lvl_output_ff(113) := r_lvl_output_ff(81)
    r_lvl_output_ff_valid(113) := r_lvl_output_ff_valid(81)

    r_lvl_output_ff(114) := r_lvl_output_ff(82)
    r_lvl_output_ff_valid(114) := r_lvl_output_ff_valid(82)

    r_lvl_output_ff(115) := r_lvl_output_ff(83)
    r_lvl_output_ff_valid(115) := r_lvl_output_ff_valid(83)

    r_lvl_output_ff(116) := r_lvl_output_ff(84)
    r_lvl_output_ff_valid(116) := r_lvl_output_ff_valid(84)

    r_lvl_output_ff(117) := r_lvl_output_ff(85)
    r_lvl_output_ff_valid(117) := r_lvl_output_ff_valid(85)

    r_lvl_output_ff(118) := r_lvl_output_ff(86)
    r_lvl_output_ff_valid(118) := r_lvl_output_ff_valid(86)

    when (w_vn_lvl_3_valid(2) === 1.B) {
        r_lvl_output_ff(119) := w_vn_lvl_3(2)
        r_lvl_output_ff_valid(119) := true.B
    } .otherwise {
        r_lvl_output_ff(119) := r_lvl_output_ff(87)
        r_lvl_output_ff_valid(119) := r_lvl_output_ff_valid(87)
    }

    when (w_vn_lvl_3_valid(3)  === 1.B) {
        r_lvl_output_ff(120) := w_vn_lvl_3(3)
        r_lvl_output_ff_valid(120) := true.B
    } .otherwise {
        r_lvl_output_ff(120) := r_lvl_output_ff(88)
        r_lvl_output_ff_valid(120) := r_lvl_output_ff_valid(88)
    }

    r_lvl_output_ff(121) := r_lvl_output_ff(89)
    r_lvl_output_ff_valid(121) := r_lvl_output_ff_valid(89)

    r_lvl_output_ff(122) := r_lvl_output_ff(90)
    r_lvl_output_ff_valid(122) := r_lvl_output_ff_valid(90)

    r_lvl_output_ff(123) := r_lvl_output_ff(91)
    r_lvl_output_ff_valid(123) := r_lvl_output_ff_valid(91)

    r_lvl_output_ff(124) := r_lvl_output_ff(92)
    r_lvl_output_ff_valid(124) := r_lvl_output_ff_valid(92)

    r_lvl_output_ff(125) := r_lvl_output_ff(93)
    r_lvl_output_ff_valid(125) := r_lvl_output_ff_valid(93)

    r_lvl_output_ff(126) := r_lvl_output_ff(94)
    r_lvl_output_ff_valid(126) := r_lvl_output_ff_valid(94)

    r_lvl_output_ff(127) := r_lvl_output_ff(95)
    r_lvl_output_ff_valid(127) := r_lvl_output_ff_valid(95)

  }

  // when (rst === 0.B) {
  //     when (rst === 1.B) {
  //   r_lvl_output_ff(5119, 4096) := 0.U
  //   r_lvl_output_ff_valid(159, 128) := 0.U
  // } 
  when (rst === 0.B){
    r_lvl_output_ff(128) := r_lvl_output_ff(96)
    r_lvl_output_ff_valid(128) := r_lvl_output_ff_valid(96)

    r_lvl_output_ff(129) := r_lvl_output_ff(97)
    r_lvl_output_ff_valid(129) := r_lvl_output_ff_valid(97)

    r_lvl_output_ff(130) := r_lvl_output_ff(98)
    r_lvl_output_ff_valid(130) := r_lvl_output_ff_valid(98)

    r_lvl_output_ff(131) := r_lvl_output_ff(99)
    r_lvl_output_ff_valid(131) := r_lvl_output_ff_valid(99)

    r_lvl_output_ff(132) := r_lvl_output_ff(100)
    r_lvl_output_ff_valid(132) := r_lvl_output_ff_valid(100)

    r_lvl_output_ff(133) := r_lvl_output_ff(101)
    r_lvl_output_ff_valid(133) := r_lvl_output_ff_valid(101)

    r_lvl_output_ff(132) := r_lvl_output_ff(102)
    r_lvl_output_ff_valid(134) := r_lvl_output_ff_valid(102)

    r_lvl_output_ff(134) := r_lvl_output_ff(103)
    r_lvl_output_ff_valid(135) := r_lvl_output_ff_valid(103)

    r_lvl_output_ff(136) := r_lvl_output_ff(104)
    r_lvl_output_ff_valid(136) := r_lvl_output_ff_valid(104)

    r_lvl_output_ff(137) := r_lvl_output_ff(105)
    r_lvl_output_ff_valid(137) := r_lvl_output_ff_valid(105)

    r_lvl_output_ff(138) := r_lvl_output_ff(106)
    r_lvl_output_ff_valid(138) := r_lvl_output_ff_valid(106)

    r_lvl_output_ff(139) := r_lvl_output_ff(107)
    r_lvl_output_ff_valid(139) := r_lvl_output_ff_valid(107)

    r_lvl_output_ff(140) := r_lvl_output_ff(108)
    r_lvl_output_ff_valid(140) := r_lvl_output_ff_valid(108)

    r_lvl_output_ff(141) := r_lvl_output_ff(109)
    r_lvl_output_ff_valid(141) := r_lvl_output_ff_valid(109)

    r_lvl_output_ff(142) := r_lvl_output_ff(110)
    r_lvl_output_ff_valid(142) := r_lvl_output_ff_valid(110)

    when (w_vn_lvl_4_valid(0) === 1.B) {
        r_lvl_output_ff(143) := w_vn_lvl_4(0)
        r_lvl_output_ff_valid(143) := 1.B
    } .otherwise {
        r_lvl_output_ff(143) := r_lvl_output_ff(111)
        r_lvl_output_ff_valid(143) := r_lvl_output_ff_valid(111)
    }

    when (w_vn_lvl_4_valid(1) === 1.B) {
        r_lvl_output_ff(144) := w_vn_lvl_4(1)
        r_lvl_output_ff_valid(144) := 1.B
    } .otherwise {
        r_lvl_output_ff(144) := r_lvl_output_ff(112)
        r_lvl_output_ff_valid(144) := r_lvl_output_ff_valid(112)
    }

    r_lvl_output_ff(145) := r_lvl_output_ff(113)
    r_lvl_output_ff_valid(145) := r_lvl_output_ff_valid(113)

    r_lvl_output_ff(146) := r_lvl_output_ff(114)
    r_lvl_output_ff_valid(146) := r_lvl_output_ff_valid(114)

    r_lvl_output_ff(147) := r_lvl_output_ff(115)
    r_lvl_output_ff_valid(147) := r_lvl_output_ff_valid(115)

    r_lvl_output_ff(148) := r_lvl_output_ff(116)
    r_lvl_output_ff_valid(148) := r_lvl_output_ff_valid(116)

    r_lvl_output_ff(149) := r_lvl_output_ff(117)
    r_lvl_output_ff_valid(149) := r_lvl_output_ff_valid(117)

    r_lvl_output_ff(150) := r_lvl_output_ff(118)
    r_lvl_output_ff_valid(150) := r_lvl_output_ff_valid(118)

    r_lvl_output_ff(151) := r_lvl_output_ff(119)
    r_lvl_output_ff_valid(151) := r_lvl_output_ff_valid(119)

    r_lvl_output_ff(152) := r_lvl_output_ff(120)
    r_lvl_output_ff_valid(152) := r_lvl_output_ff_valid(120)

    r_lvl_output_ff(153) := r_lvl_output_ff(121)
    r_lvl_output_ff_valid(153) := r_lvl_output_ff_valid(121)

    r_lvl_output_ff(154) := r_lvl_output_ff(122)
    r_lvl_output_ff_valid(154) := r_lvl_output_ff_valid(122)

    r_lvl_output_ff(155) := r_lvl_output_ff(123)
    r_lvl_output_ff_valid(155) := r_lvl_output_ff_valid(123)
    
    r_lvl_output_ff(156) := r_lvl_output_ff(124)
    r_lvl_output_ff_valid(156) := r_lvl_output_ff_valid(124)

    r_lvl_output_ff(157) := r_lvl_output_ff(125)
    r_lvl_output_ff_valid(157) := r_lvl_output_ff_valid(125)

    r_lvl_output_ff(158) := r_lvl_output_ff(126)
    r_lvl_output_ff_valid(158) := r_lvl_output_ff_valid(126)

    r_lvl_output_ff(159) := r_lvl_output_ff(127)
    r_lvl_output_ff_valid(159) := r_lvl_output_ff_valid(127)
  }
  

  when (io.i_valid === 1.U) {
    r_valid(0) := 1.U
  } .otherwise {
    r_valid(0) := 0.U
  }

  for (i <- 0 until 6) {
    when (rst === 1.U) {
        r_valid(i + 1) := 0.U
    } .otherwise {
        r_valid(i + 1) := r_valid(i)
    }
  }
    val my_adder_0 = Module(new EdgeAdderSwitch(32,2,2))

  my_adder_0.io.i_valid := r_valid(0)
  my_adder_0.io.i_data_bus := VecInit(Seq(io.i_data_bus(63, 32), io.i_data_bus(31, 0)))
  my_adder_0.io.i_add_en := io.i_add_en_bus(0)
  my_adder_0.io.i_cmd := io.i_cmd_bus(2,0)
  my_adder_0.io.i_sel := 0.U
  w_vn_lvl_0(0) := my_adder_0.io.o_vn(31,0)
  w_vn_lvl_0(1) := my_adder_0.io.o_vn(63,32) 
  w_vn_lvl_0_valid(0) := my_adder_0.io.o_vn_valid(0)
    w_vn_lvl_0_valid(1) := my_adder_0.io.o_vn_valid(1)
  w_fan_lvl_0(0) := my_adder_0.io.o_adder

  val my_adder_1 = Module(new EdgeAdderSwitch(32,2,2))

  my_adder_1.io.i_valid := r_valid(1)
  my_adder_1.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(1), w_fan_lvl_0(0)))
  my_adder_1.io.i_add_en := io.i_add_en_bus(16)
  my_adder_1.io.i_cmd := io.i_cmd_bus(50,48)
  my_adder_1.io.i_sel := 0.U
  w_vn_lvl_1(0) := my_adder_1.io.o_vn(31,0)
  w_vn_lvl_1(1) := my_adder_1.io.o_vn(63,32)
  w_vn_lvl_1_valid(0) := my_adder_1.io.o_vn_valid(0)
  w_vn_lvl_1_valid(1) := my_adder_1.io.o_vn_valid(1)
  w_fan_lvl_1(0) := my_adder_1.io.o_adder

  val my_adder_2 = Module(new AdderSwitch(32,2,2))

  my_adder_2.io.i_valid := r_valid(0)
  my_adder_2.io.i_data_bus := VecInit(Seq(io.i_data_bus(127, 96), io.i_data_bus(95, 64))) 
  my_adder_2.io.i_add_en := io.i_add_en_bus(1)
  my_adder_2.io.i_cmd := io.i_cmd_bus(5,3)
  my_adder_2.io.i_sel := 0.U

  w_vn_lvl_0(2) := my_adder_2.io.o_vn(31,0)
    w_vn_lvl_0(3) := my_adder_2.io.o_vn(63,32)

  w_vn_lvl_0_valid(2) := my_adder_2.io.o_vn_valid(0)
    w_vn_lvl_0_valid(3) := my_adder_2.io.o_vn_valid(1)

  w_fan_lvl_0(1) := my_adder_2.io.o_adder(0)
  w_fan_lvl_0(2) := my_adder_2.io.o_adder(1)


  val my_adder_3 = Module(new EdgeAdderSwitch(32,4,2))

  my_adder_3.io.i_valid := r_valid(2)
  my_adder_3.io.i_data_bus := VecInit(Seq(w_fan_lvl_1(1), r_fan_ff_lvl_0_to_2(63,32), r_fan_ff_lvl_0_to_2(31,0), w_fan_lvl_1(0)))
  my_adder_3.io.i_add_en := io.i_add_en_bus(24)
  my_adder_3.io.i_cmd := io.i_cmd_bus(74,72)
  my_adder_3.io.i_sel := io.i_sel_bus(1,0)
  w_vn_lvl_2(0) := my_adder_3.io.o_vn(31,0)
    w_vn_lvl_2(1) := my_adder_3.io.o_vn(63,32)

  w_vn_lvl_2_valid(0) := my_adder_3.io.o_vn_valid(0)
    w_vn_lvl_2_valid(1) := my_adder_3.io.o_vn_valid(1)

  w_fan_lvl_2(0) := my_adder_3.io.o_adder

  val my_adder_4 = Module(new AdderSwitch(32,2,2))

  my_adder_4.io.i_valid := r_valid(0)
  my_adder_4.io.i_data_bus := VecInit(Seq(io.i_data_bus(191,160),io.i_data_bus(159,128)))
  my_adder_4.io.i_add_en := io.i_add_en_bus(2)
  my_adder_4.io.i_cmd := io.i_cmd_bus(8,6)
  my_adder_4.io.i_sel := 0.U
  w_vn_lvl_0(2) := my_adder_4.io.o_vn(31,0)
    w_vn_lvl_0(3) := my_adder_4.io.o_vn(63,32)

  w_vn_lvl_0_valid(4) := my_adder_4.io.o_vn_valid(0)
  w_vn_lvl_0_valid(5) := my_adder_4.io.o_vn_valid(1)

  w_fan_lvl_0(2) := my_adder_4.io.o_adder(0)
    w_fan_lvl_0(3) := my_adder_4.io.o_adder(1)


  val my_adder_5 = Module(new AdderSwitch(32,2,2))

  my_adder_5.io.i_valid := r_valid(1)
  my_adder_5.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(5), w_fan_lvl_0(4)))
  my_adder_5.io.i_add_en := io.i_add_en_bus(17)
  my_adder_5.io.i_cmd := io.i_cmd_bus(53,51)
  my_adder_5.io.i_sel := 0.U
  w_vn_lvl_1(0) := my_adder_5.io.o_vn(31,0)
    w_vn_lvl_1(1) := my_adder_5.io.o_vn(63,32)

  w_vn_lvl_1_valid(2) := my_adder_5.io.o_vn_valid(0)
    w_vn_lvl_1_valid(3) := my_adder_5.io.o_vn_valid(1)

  w_fan_lvl_1(1) := my_adder_5.io.o_adder(0)
    w_fan_lvl_1(2) := my_adder_5.io.o_adder(1)

  val my_adder_6 = Module(new AdderSwitch(32,2,2))

  my_adder_6.io.i_valid := r_valid(0)
  my_adder_6.io.i_data_bus := VecInit(Seq(io.i_data_bus(255 , 224),io.i_data_bus(223 , 192)))
  my_adder_6.io.i_add_en := io.i_add_en_bus(3)
  my_adder_6.io.i_cmd := io.i_cmd_bus(11,9)
  my_adder_6.io.i_sel := 0.U
  w_vn_lvl_0(6) := my_adder_6.io.o_vn(31,0)
    w_vn_lvl_0(7) := my_adder_6.io.o_vn(63,32)

  w_vn_lvl_0_valid(6) := my_adder_6.io.o_vn_valid(0)
    w_vn_lvl_0_valid(7) := my_adder_6.io.o_vn_valid(1)

    w_fan_lvl_0(6) := my_adder_6.io.o_adder(0)
      w_fan_lvl_0(7) := my_adder_6.io.o_adder(1)

  val my_adder_7 = Module(new EdgeAdderSwitch(32,6,4))

  my_adder_7.io.i_valid := r_valid(3)
  my_adder_7.io.i_data_bus := VecInit(Seq( w_fan_lvl_2(1), r_fan_ff_lvl_1_to_3(63,32), r_fan_ff_lvl_0_to_3(63,32), r_fan_ff_lvl_0_to_3(31,0), r_fan_ff_lvl_1_to_3(31,0), w_fan_lvl_2(0)))
  my_adder_7.io.i_add_en := io.i_add_en_bus(28)
  my_adder_7.io.i_cmd := io.i_cmd_bus(86,84)
  my_adder_7.io.i_sel := io.i_sel_bus(11,8)
  w_vn_lvl_3(0) := my_adder_7.io.o_vn(31,0)
    w_vn_lvl_3(1) := my_adder_7.io.o_vn(63,32)

  w_vn_lvl_3_valid(0) := my_adder_7.io.o_vn_valid (0)
    w_vn_lvl_3_valid(1) := my_adder_7.io.o_vn_valid (1)

  w_fan_lvl_3(0) := my_adder_7.io.o_adder

  val my_adder_8 = Module(new AdderSwitch(32,2,2))

  my_adder_8.io.i_valid := r_valid(0)
  my_adder_8.io.i_data_bus := VecInit(Seq(io.i_data_bus(319 , 288),io.i_data_bus(287 , 256)))
  my_adder_8.io.i_add_en := io.i_add_en_bus(4)
  my_adder_8.io.i_cmd := io.i_cmd_bus(14,12)
  my_adder_8.io.i_sel := 0.U
  w_vn_lvl_0(8) := my_adder_8.io.o_vn(31,0)
    w_vn_lvl_0(9) := my_adder_8.io.o_vn(63,32)

  w_vn_lvl_0_valid(8) := my_adder_8.io.o_vn_valid(1)
    w_vn_lvl_0_valid(9) := my_adder_8.io.o_vn_valid(0)

  w_fan_lvl_0(8) := my_adder_8.io.o_adder(0)
    w_fan_lvl_0(9) := my_adder_8.io.o_adder(1)

  val my_adder_9 = Module(new AdderSwitch(32,2,2))

  my_adder_9.io.i_valid := r_valid(1)
  my_adder_9.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(9), w_fan_lvl_0(8)))
  my_adder_9.io.i_add_en := io.i_add_en_bus(18)
  my_adder_9.io.i_cmd := io.i_cmd_bus(56,54)
  my_adder_9.io.i_sel := 0.U
  w_vn_lvl_1(4) := my_adder_9.io.o_vn(31,0)
    w_vn_lvl_1(5) := my_adder_9.io.o_vn(63,32)

  w_vn_lvl_1_valid(4) := my_adder_9.io.o_vn_valid(0)
    w_vn_lvl_1_valid(5) := my_adder_9.io.o_vn_valid(1)

  w_fan_lvl_1(3) := my_adder_9.io.o_adder(0)
    w_fan_lvl_1(4) := my_adder_9.io.o_adder(1)

  val my_adder_10 = Module(new AdderSwitch(32,2,2))

  my_adder_10.io.i_valid := r_valid(0)
  my_adder_10.io.i_data_bus := VecInit(Seq(io.i_data_bus(383,252),io.i_data_bus(351 , 320)))
  my_adder_10.io.i_add_en := io.i_add_en_bus(5)
  my_adder_10.io.i_cmd := io.i_cmd_bus(17,15)
  my_adder_10.io.i_sel := 0.U
  w_vn_lvl_0(10) := my_adder_10.io.o_vn(31,0)
    w_vn_lvl_0(11) := my_adder_10.io.o_vn(63,32)

  w_vn_lvl_0_valid(10) := my_adder_10.io.o_vn_valid(0)
    w_vn_lvl_0_valid(11) := my_adder_10.io.o_vn_valid(1)

  w_fan_lvl_0(10) := my_adder_10.io.o_adder(0)
    w_fan_lvl_0(11) := my_adder_10.io.o_adder(1)


  val my_adder_11 = Module(new AdderSwitch(32,4,2))

  my_adder_11.io.i_valid := r_valid(2)
  my_adder_11.io.i_data_bus := VecInit(Seq(w_fan_lvl_1(5), r_fan_ff_lvl_0_to_2(191,160), r_fan_ff_lvl_0_to_2(159,128), w_fan_lvl_1(4)))
  my_adder_11.io.i_add_en := io.i_add_en_bus(25)
  my_adder_11.io.i_cmd := io.i_cmd_bus(77,75)
  my_adder_11.io.i_sel := io.i_sel_bus(3,2)
  w_vn_lvl_2(2) := my_adder_11.io.o_vn(31,0)
    w_vn_lvl_2(3) := my_adder_11.io.o_vn(63,32)

  w_vn_lvl_2_valid(2) := my_adder_11.io.o_vn_valid(0)
    w_vn_lvl_2_valid(3) := my_adder_11.io.o_vn_valid(1)

  w_fan_lvl_2(1) := my_adder_11.io.o_adder(0)
    w_fan_lvl_2(2) := my_adder_11.io.o_adder(1)


  val my_adder_12 = Module(new AdderSwitch(32,2,2))

  my_adder_12.io.i_valid := r_valid(0)
  my_adder_12.io.i_data_bus := VecInit(Seq(io.i_data_bus(447,416),io.i_data_bus(415 , 384)))
  my_adder_12.io.i_add_en := io.i_add_en_bus(6)
  my_adder_12.io.i_cmd := io.i_cmd_bus(20,18)
  my_adder_12.io.i_sel := 0.U
  w_vn_lvl_0(12) := my_adder_12.io.o_vn(31,0)
    w_vn_lvl_0(13) := my_adder_12.io.o_vn(63,32)

  w_vn_lvl_0_valid(12) := my_adder_12.io.o_vn_valid(0)
    w_vn_lvl_0_valid(13) := my_adder_12.io.o_vn_valid(1)

  w_fan_lvl_0(12)  := my_adder_12.io.o_adder(0)
    w_fan_lvl_0(13)  := my_adder_12.io.o_adder(1)


  val my_adder_13 = Module(new AdderSwitch(32,2,2))

  my_adder_13.io.i_valid := r_valid(1)
  my_adder_13.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(12), w_fan_lvl_0(11)))
  my_adder_13.io.i_add_en := io.i_add_en_bus(19)
  my_adder_13.io.i_cmd := io.i_cmd_bus(59,57)
  my_adder_13.io.i_sel := 0.U
  w_vn_lvl_1(6) := my_adder_13.io.o_vn(31,0)
    w_vn_lvl_1(7) := my_adder_13.io.o_vn(63,32)

  w_vn_lvl_1_valid(6) := my_adder_13.io.o_vn_valid(0)
    w_vn_lvl_1_valid(7) := my_adder_13.io.o_vn_valid(1)

  w_fan_lvl_0(6)  := my_adder_13.io.o_adder(0)
    w_fan_lvl_0(7)  := my_adder_13.io.o_adder(1)


  val my_adder_14 = Module(new AdderSwitch(32,2,2))

  my_adder_14.io.i_valid := r_valid(0)
  my_adder_14.io.i_data_bus := VecInit(Seq(io.i_data_bus(511,480),io.i_data_bus( 479, 448)))
  my_adder_14.io.i_add_en := io.i_add_en_bus(7)
  my_adder_14.io.i_cmd := io.i_cmd_bus(23,21)
  my_adder_14.io.i_sel := 0.U
  w_vn_lvl_0(14) := my_adder_14.io.o_vn(31,0)
    w_vn_lvl_0(15) := my_adder_14.io.o_vn(63,32)

  w_vn_lvl_0_valid(14) := my_adder_14.io.o_vn_valid(0)
    w_vn_lvl_0_valid(15) := my_adder_14.io.o_vn_valid(1)

  w_fan_lvl_0(14) := my_adder_14.io.o_adder(0)    
    w_fan_lvl_0(15) := my_adder_14.io.o_adder(1)    


  val my_adder_15 = Module(new EdgeAdderSwitch(32,8,4))

  my_adder_15.io.i_valid := r_valid(4)
  my_adder_15.io.i_data_bus := VecInit(Seq(w_fan_lvl_3(1), r_fan_ff_lvl_2_to_4(63,32), r_fan_ff_lvl_1_to_4(63,32), r_fan_ff_lvl_0_to_4(63,32), r_fan_ff_lvl_0_to_4(31,0), r_fan_ff_lvl_1_to_4(31,0), r_fan_ff_lvl_2_to_4(31,0), w_fan_lvl_3(0)))
  my_adder_15.io.i_add_en := io.i_add_en_bus(30)
  my_adder_15.io.i_cmd := io.i_cmd_bus(92,90)
  my_adder_15.io.i_sel := io.i_sel_bus(19,16)
  w_vn_lvl_4(0) := my_adder_15.io.o_vn(31,0)
    w_vn_lvl_4(1) := my_adder_15.io.o_vn(63,32)

  w_vn_lvl_4_valid(0) := my_adder_15.io.o_vn_valid(0)
    w_vn_lvl_4_valid(1) := my_adder_15.io.o_vn_valid(1)

  w_fan_lvl_4(0) := my_adder_15.io.o_adder 


  val my_adder_16 = Module(new AdderSwitch(32,2,2))

  my_adder_16.io.i_valid := r_valid(0)
  my_adder_16.io.i_data_bus := VecInit(Seq(io.i_data_bus(575,544),io.i_data_bus(543 , 512)))
  my_adder_16.io.i_add_en := io.i_add_en_bus(8)
  my_adder_16.io.i_cmd := io.i_cmd_bus(26,24)
  my_adder_16.io.i_sel := 0.U
  w_vn_lvl_0(16) := my_adder_16.io.o_vn(31,0)
    w_vn_lvl_0(17) := my_adder_16.io.o_vn(63,32)

  w_vn_lvl_0_valid(16) := my_adder_16.io.o_vn_valid(0)
    w_vn_lvl_0_valid(17) := my_adder_16.io.o_vn_valid(1)

  w_fan_lvl_0(16) := my_adder_16.io.o_adder(0) 
  w_fan_lvl_0(17) := my_adder_16.io.o_adder(1) 


  val my_adder_17 = Module(new AdderSwitch(32,2,2))

  my_adder_17.io.i_valid := r_valid(1)
  my_adder_17.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(16), w_fan_lvl_0(15)))
  my_adder_17.io.i_add_en := io.i_add_en_bus(20)
  my_adder_17.io.i_cmd := io.i_cmd_bus(62,60)
  my_adder_17.io.i_sel := 0.U
  w_vn_lvl_1(8) := my_adder_17.io.o_vn(31,0)
    w_vn_lvl_1(9) := my_adder_17.io.o_vn(63,32)

  w_vn_lvl_1_valid(8) := my_adder_17.io.o_vn_valid(0)
    w_vn_lvl_1_valid(9) := my_adder_17.io.o_vn_valid(1)

  w_fan_lvl_1(8) := my_adder_17.io.o_adder(0) 
  w_fan_lvl_1(9) := my_adder_17.io.o_adder(1) 


  val my_adder_18 = Module(new AdderSwitch(32,2,2))

  my_adder_18.io.i_valid := r_valid(0)
  my_adder_18.io.i_data_bus := VecInit(Seq(io.i_data_bus(639,608),io.i_data_bus(607 , 576)))
  my_adder_18.io.i_add_en := io.i_add_en_bus(9)
  my_adder_18.io.i_cmd := io.i_cmd_bus(29,27)
  my_adder_18.io.i_sel := 0.U
  w_vn_lvl_0(18) := my_adder_18.io.o_vn(31,0)
    w_vn_lvl_0(19) := my_adder_18.io.o_vn(63,32)

  w_vn_lvl_0_valid(18) := my_adder_18.io.o_vn_valid(0)
  w_vn_lvl_0_valid(19) := my_adder_18.io.o_vn_valid(1)

  w_fan_lvl_0(18) := my_adder_18.io.o_adder(0) 
    w_fan_lvl_0(19) := my_adder_18.io.o_adder(1) 


  val my_adder_19 = Module(new AdderSwitch(32,4,2))

  my_adder_19.io.i_valid := r_valid(2)
  my_adder_19.io.i_data_bus := VecInit(Seq(w_fan_lvl_1(9), r_fan_ff_lvl_0_to_2(319,288), r_fan_ff_lvl_0_to_2(287,256), w_fan_lvl_1(8)))
  my_adder_19.io.i_add_en := io.i_add_en_bus(26)
  my_adder_19.io.i_cmd := io.i_cmd_bus(80,78)
  my_adder_19.io.i_sel := io.i_sel_bus(5,4)
  w_vn_lvl_2(4) := my_adder_19.io.o_vn(31,0)
    w_vn_lvl_2(5) := my_adder_19.io.o_vn(63,32)

  w_vn_lvl_2_valid(4) := my_adder_19.io.o_vn_valid(0)
    w_vn_lvl_2_valid(5) := my_adder_19.io.o_vn_valid(1)

  w_fan_lvl_2(4) := my_adder_19.io.o_adder(0)
    w_fan_lvl_2(5) := my_adder_19.io.o_adder(1) 



  val my_adder_20 = Module(new AdderSwitch(32,2,2))

  my_adder_20.io.i_valid := r_valid(0)
  my_adder_20.io.i_data_bus := VecInit(Seq(io.i_data_bus(703,672),io.i_data_bus(671 , 640)))
  my_adder_20.io.i_add_en := io.i_add_en_bus(10)
  my_adder_20.io.i_cmd := io.i_cmd_bus(32,30)
  my_adder_20.io.i_sel := 0.U
  w_vn_lvl_0(20) := my_adder_20.io.o_vn(31,0)
    w_vn_lvl_0(21) := my_adder_20.io.o_vn(63,32)

    w_vn_lvl_0_valid(20) := my_adder_20.io.o_vn_valid(0)
        w_vn_lvl_0_valid(21) := my_adder_20.io.o_vn_valid(1)

  w_fan_lvl_0(20) := my_adder_20.io.o_adder(0)
      w_vn_lvl_0_valid(21) := my_adder_20.io.o_vn_valid(1)




  val my_adder_21 = Module(new AdderSwitch(32,2,2))

  my_adder_21.io.i_valid := r_valid(1)
  my_adder_21.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(20), w_fan_lvl_0(19)))
  my_adder_21.io.i_add_en := io.i_add_en_bus(21)
  my_adder_21.io.i_cmd := io.i_cmd_bus(65,63)
  my_adder_21.io.i_sel := 0.U
  w_vn_lvl_1(10) := my_adder_21.io.o_vn(31,0)
    w_vn_lvl_1(11) := my_adder_21.io.o_vn(63,32)

  w_vn_lvl_1_valid(10) := my_adder_21.io.o_vn_valid(0)
    w_vn_lvl_1_valid(11) := my_adder_21.io.o_vn_valid(1)

  w_fan_lvl_1(10) := my_adder_21.io.o_adder(0)  
    w_fan_lvl_1(11) := my_adder_21.io.o_adder(1)  


  val my_adder_22 = Module(new AdderSwitch(32,2,2))

  my_adder_22.io.i_valid := r_valid(0)
  my_adder_22.io.i_data_bus := VecInit(Seq(io.i_data_bus(767,736),io.i_data_bus(735 , 704)))
  my_adder_22.io.i_add_en := io.i_add_en_bus(11)
  my_adder_22.io.i_cmd := io.i_cmd_bus(35,33)
  my_adder_22.io.i_sel := 0.U
  w_vn_lvl_0(22) := my_adder_22.io.o_vn(31,0)
    w_vn_lvl_0(23) := my_adder_22.io.o_vn(63,32)

  w_vn_lvl_0_valid(22) := my_adder_22.io.o_vn_valid(0)
    w_vn_lvl_0_valid(23) := my_adder_22.io.o_vn_valid(1)

  w_fan_lvl_0(22) := my_adder_22.io.o_adder(0)
    w_fan_lvl_0(22) := my_adder_22.io.o_adder(1)


  val my_adder_23 = Module(new EdgeAdderSwitch(32,6,4))

  my_adder_23.io.i_valid := r_valid(3)
  my_adder_23.io.i_data_bus := VecInit(Seq(w_fan_lvl_2(5), r_fan_ff_lvl_1_to_3(191,160), r_fan_ff_lvl_0_to_3(191,160), r_fan_ff_lvl_0_to_3(159,128), r_fan_ff_lvl_1_to_3(159,128), w_fan_lvl_2(4)))
  my_adder_23.io.i_add_en := io.i_add_en_bus(29)
  my_adder_23.io.i_cmd := io.i_cmd_bus(89,87)
  my_adder_23.io.i_sel := io.i_sel_bus(15,12)
  w_vn_lvl_3(2) := my_adder_23.io.o_vn(31,0)
    w_vn_lvl_3(3) := my_adder_23.io.o_vn(63,32)

  w_vn_lvl_3_valid(2) := my_adder_23.io.o_vn_valid(0)
    w_vn_lvl_3_valid(3) := my_adder_23.io.o_vn_valid(1)

  w_fan_lvl_3(1) := my_adder_23.io.o_adder 




  val my_adder_24 = Module(new AdderSwitch(32,2,2))

  my_adder_24.io.i_valid := r_valid(0)
  my_adder_24.io.i_data_bus := VecInit(Seq(io.i_data_bus(831,800),io.i_data_bus(799 , 768)))
  my_adder_24.io.i_add_en := io.i_add_en_bus(12)
  my_adder_24.io.i_cmd := io.i_cmd_bus(38,36)
  my_adder_24.io.i_sel := 0.U
  w_vn_lvl_0(24) := my_adder_24.io.o_vn(31,0)
    w_vn_lvl_0(25) := my_adder_24.io.o_vn(63,32)

  w_vn_lvl_0_valid(24) := my_adder_24.io.o_vn_valid(0)
    w_vn_lvl_0_valid(25) := my_adder_24.io.o_vn_valid(1)

  w_fan_lvl_0(24) := my_adder_24.io.o_adder(0)
    w_fan_lvl_0(25) := my_adder_24.io.o_adder(1)



  val my_adder_25 = Module(new AdderSwitch(32,2,2))

  my_adder_25.io.i_valid := r_valid(1)
  my_adder_25.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(24), w_fan_lvl_0(23)))
  my_adder_25.io.i_add_en := io.i_add_en_bus(22)
  my_adder_25.io.i_cmd := io.i_cmd_bus(68,66)
  my_adder_25.io.i_sel := 0.U
  w_vn_lvl_1(12) := my_adder_25.io.o_vn(32,0)
    w_vn_lvl_1(13) := my_adder_25.io.o_vn(63,32)

  w_vn_lvl_1_valid(12) := my_adder_25.io.o_vn_valid(0)
    w_vn_lvl_1_valid(13) := my_adder_25.io.o_vn_valid(1)

  w_fan_lvl_1(12) := my_adder_25.io.o_adder(0)
    w_fan_lvl_1(13) := my_adder_25.io.o_adder(1)




  val my_adder_26 = Module(new AdderSwitch(32,2,2))

  my_adder_26.io.i_valid := r_valid(0)
  my_adder_26.io.i_data_bus := VecInit(Seq(io.i_data_bus(895,864),io.i_data_bus(863 , 832)))
  my_adder_26.io.i_add_en := io.i_add_en_bus(13)
  my_adder_26.io.i_cmd := io.i_cmd_bus(41,39)
  my_adder_26.io.i_sel := 0.U
  w_vn_lvl_0(26) := my_adder_26.io.o_vn(31,0)
    w_vn_lvl_0(27) := my_adder_26.io.o_vn(63,32)

  w_vn_lvl_0_valid(26) := my_adder_26.io.o_vn_valid(0)
    w_vn_lvl_0_valid(27) := my_adder_26.io.o_vn_valid(1)

  w_fan_lvl_0(26) := my_adder_26.io.o_adder(0)
    w_fan_lvl_0(27) := my_adder_26.io.o_adder(1) 


  val my_adder_27 = Module(new EdgeAdderSwitch(32,4,2))

  my_adder_27.io.i_valid := r_valid(2)
  my_adder_27.io.i_data_bus := VecInit(Seq(w_fan_lvl_1(13), r_fan_ff_lvl_0_to_2(447,416), r_fan_ff_lvl_0_to_2(415,384), w_fan_lvl_1(12)))
  my_adder_27.io.i_add_en := io.i_add_en_bus(27)
  my_adder_27.io.i_cmd := io.i_cmd_bus(83,81)
  my_adder_27.io.i_sel := io.i_sel_bus(7,6)
  w_vn_lvl_2(6) := my_adder_27.io.o_vn(31,0)
    w_vn_lvl_2(7) := my_adder_27.io.o_vn(63,32)

  w_vn_lvl_2_valid(6) := my_adder_27.io.o_vn_valid(0)
    w_vn_lvl_2_valid(7) := my_adder_27.io.o_vn_valid(1)

  w_fan_lvl_2(5) := my_adder_27.io.o_adder
    




  val my_adder_28 = Module(new AdderSwitch(32,2,2))

  my_adder_28.io.i_valid := r_valid(0)
  my_adder_28.io.i_data_bus := VecInit(Seq(io.i_data_bus(959,928),io.i_data_bus(927 , 896)))
  my_adder_28.io.i_add_en := io.i_add_en_bus(14)
  my_adder_28.io.i_cmd := io.i_cmd_bus(44,42)
  my_adder_28.io.i_sel := 0.U
  w_vn_lvl_0(28) := my_adder_28.io.o_vn(31,0)
    w_vn_lvl_0(29) := my_adder_28.io.o_vn(63,32)

  w_vn_lvl_0_valid(28) := my_adder_28.io.o_vn_valid(0)
    w_vn_lvl_0_valid(29) := my_adder_28.io.o_vn_valid(1)

  w_fan_lvl_0(28) := my_adder_28.io.o_adder(0) 
    w_fan_lvl_0(29) := my_adder_28.io.o_adder(1)



  val my_adder_29 = Module(new EdgeAdderSwitch(32, 2,2))

  my_adder_29.io.i_valid := r_valid(1)
  my_adder_29.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(28), w_fan_lvl_0(27)))
  my_adder_29.io.i_add_en := io.i_add_en_bus(23)
  my_adder_29.io.i_cmd := io.i_cmd_bus(71,69)
  my_adder_29.io.i_sel := 0.U
  w_vn_lvl_1(14) := my_adder_29.io.o_vn(31,0)
    w_vn_lvl_1(15) := my_adder_29.io.o_vn(63,32)

  w_vn_lvl_1_valid(14) := my_adder_29.io.o_vn_valid(0)
    w_vn_lvl_1_valid(15) := my_adder_29.io.o_vn_valid(1)

  w_fan_lvl_1(13) := my_adder_29.io.o_adder



  val my_adder_30 = Module(new EdgeAdderSwitch(32,2,2))

  my_adder_30.io.i_valid := r_valid(0)
  my_adder_30.io.i_data_bus := VecInit(Seq(io.i_data_bus(1023,992),io.i_data_bus(991,960)))
  my_adder_30.io.i_add_en := io.i_add_en_bus(15)
  my_adder_30.io.i_cmd := io.i_cmd_bus(47,45)
  my_adder_30.io.i_sel := 0.U
  w_vn_lvl_0(30) := my_adder_30.io.o_vn(31,0)
  w_vn_lvl_0(31) := my_adder_30.io.o_vn(63,32)
  
  w_vn_lvl_0_valid(30) := my_adder_30.io.o_vn_valid(0)
  w_vn_lvl_0_valid(31) := my_adder_30.io.o_vn_valid(1)

  w_fan_lvl_0(28) := my_adder_30.io.o_adder 






  when(rst === true.B) {
    r_final_add := 0.U
    r_final_add2 := 0.U
    r_final_sum := 0.U
  }.otherwise {
    r_final_add := io.i_add_en_bus(30)
    r_final_add2 := r_final_add
    r_final_sum := w_fan_lvl_4(0)
  }


  
  // when (rst === true.B) {
  //   o_data_bus := 0.U
  // } .otherwise {
  //   o_data_bus(479, 0) := r_lvl_output_ff(4575, 4096)
  //   when (io.r_final_add2 === true.B) {
  //       o_data_bus(511, 480) := io.r_final_sum
  //   } .otherwise {
  //       o_data_bus(511, 480) := r_lvl_output_ff(4607, 4576)
  //   }
  //   o_data_bus(1023, 512) := r_lvl_output_ff(5119, 4608)
  // }
  //   for (i <- 0 until 501) {
  //   o_data_bus((i+32)-1) := r_lvl_output_ff(4096 + (31 - i) * 32, 4096 + (30 - i) * 32)
  // }
      var i = 0
      var j = 4096
  while (i <= 501) {
    val ilower = i
    val iupper = i + 31
    val idataIndex = i / 32
    val jlower = j
    val jupper = j + 31
    val jdataIndex = j / 32
    io.o_data_bus(idataIndex) := r_lvl_output_ff(jdataIndex)
    i += 32
    j += 32
  }
        when (r_final_add2 === true.B) {
          io.o_data_bus(15) := r_final_sum
        }.otherwise{
                  io.o_data_bus(15) := r_lvl_output_ff(143)
        }

        var k = 512
      var l = 4096
  while (k <= 1023) {
    val klower = k
    val kupper = k + 31
    val kdataIndex = k / 32
    val llower = l
    val lupper = l + 31
    val ldataIndex = l / 32
    io.o_data_bus(kdataIndex) := r_lvl_output_ff(ldataIndex)
    print(kdataIndex, "  ")
    k += 32
    l += 32
  }
  
      


  

  // when (io.rst === true.B || io.r_valid(6) === false.B) {
  //   o_valid := 0.U
  // } .otherwise {
  //   o_valid(14, 0) := r_lvl_output_ff_valid(143, 128)
  //   when (io.r_final_add2 === true.B) {
  //       o_valid(15) := true.B
  //   } .otherwise {
  //       o_valid(15) := r_lvl_output_ff_valid(143)
  //   }
  //   o_valid(31, 16) := r_lvl_output_ff_valid(159, 144)
  // }
  var m = 128
  for (n <- 0 until 15) {
    print(m," ",n)
    io.o_valid(n) := r_lvl_output_ff_valid(m)
    m += 1
  }
    when (r_final_add2 === true.B) {
        io.o_valid(15) := true.B
    } .otherwise {
        io.o_valid(15) := r_lvl_output_ff_valid(143)
    }

      var o = 144
  for (p <- 16 until 32) {
    print(o," ",p)
    io.o_valid(p) := r_lvl_output_ff_valid(o)
    o += 1
  }




 }

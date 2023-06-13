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
    val o_valid = Output(UInt(NUM_PES.W))
    val o_data_bus = Output(UInt((NUM_PES * DATA_TYPE).W))
  })

  val w_fan_lvl_0 = Wire(UInt(960.W))
  val w_fan_lvl_1 = Wire(UInt(448.W))
  val w_fan_lvl_2 = Wire(UInt(192.W))
  val w_fan_lvl_3 = Wire(UInt(64.W))
  val w_fan_lvl_4 = Wire(UInt(32.W))

  val r_fan_ff_lvl_0_to_4 = RegInit(0.U(64.W))
  val r_fan_ff_lvl_0_to_3 = RegInit(0.U(192.W))
  val r_fan_ff_lvl_0_to_2 = RegInit(0.U(448.W))
  val r_fan_ff_lvl_1_to_4 = RegInit(0.U(64.W))
  val r_fan_ff_lvl_1_to_3 = RegInit(0.U(192.W))
  val r_fan_ff_lvl_2_to_4 = RegInit(0.U(64.W))

  val w_vn_lvl_0 = Wire(UInt(1024.W))
  val w_vn_lvl_0_valid = Wire(UInt(32.W))
  val w_vn_lvl_1 = Wire(UInt(512.W))
  val w_vn_lvl_1_valid = Wire(UInt(16.W))
  val w_vn_lvl_2 = Wire(UInt(256.W))
  val w_vn_lvl_2_valid = Wire(UInt(8.W))
  val w_vn_lvl_3 = Wire(UInt(128.W))
  val w_vn_lvl_3_valid = Wire(UInt(4.W))
  val w_vn_lvl_4 = Wire(UInt(64.W))
  val w_vn_lvl_4_valid = Wire(UInt(2.W))

  val r_lvl_output_ff = RegInit(0.U(5120.W))
  val r_lvl_output_ff_valid = RegInit(0.U(160.W))
  val r_valid = RegInit(0.U(7.W))
  val r_final_sum = RegInit(0.U(DATA_TYPE.W))
  val r_final_add = RegInit(false.B)
  val r_final_add2 = RegInit(false.B)

  when(reset === true.B) {
    r_fan_ff_lvl_0_to_4 := 0.U
    r_fan_ff_lvl_0_to_3 := 0.U
    r_fan_ff_lvl_0_to_2 := 0.U
    r_fan_ff_lvl_1_to_4 := 0.U
    r_fan_ff_lvl_1_to_3 := 0.U
    r_fan_ff_lvl_2_to_4 := 0.U
  }.otherwise {
    r_fan_ff_lvl_0_to_4 := Cat(r_fan_ff_lvl_0_to_3(95, 64), r_fan_ff_lvl_0_to_3(127, 96))
    r_fan_ff_lvl_0_to_3 := Cat(r_fan_ff_lvl_0_to_2(95, 64), r_fan_ff_lvl_0_to_2(127, 96),r_fan_ff_lvl_0_to_2(223, 192), r_fan_ff_lvl_0_to_2(255, 224))
    r_fan_ff_lvl_0_to_2 := Cat(w_fan_lvl_0(95, 64), w_fan_lvl_0(127, 96), w_fan_lvl_0(223, 192),w_fan_lvl_0(255, 224), w_fan_lvl_0(351, 320), w_fan_lvl_0(383, 352),w_fan_lvl_0(479, 448), w_fan_lvl_0(511, 480), w_fan_lvl_0(607, 576),w_fan_lvl_0(639, 608), w_fan_lvl_0(735, 704), w_fan_lvl_0(767, 736),w_fan_lvl_0(863, 832), w_fan_lvl_0(895, 864))
    r_fan_ff_lvl_1_to_4 := Cat(r_fan_ff_lvl_1_to_3(95, 64), r_fan_ff_lvl_1_to_3(127, 96))
    r_fan_ff_lvl_1_to_3 := Cat(w_fan_lvl_1(95, 64), w_fan_lvl_1(127, 96), w_fan_lvl_1(223, 192), w_fan_lvl_1(255, 224), w_fan_lvl_1(351, 320), w_fan_lvl_1(383, 352))
    r_fan_ff_lvl_2_to_4 := Cat(w_fan_lvl_2(95, 64),w_fan_lvl_2(127, 96))
  }

  when(io.rst === true.B) {
    r_lvl_output_ff := 0.U
    r_lvl_output_ff_valid := 0.U
  }.otherwise {
    when(io.w_vn_lvl_0_valid(1, 0) === "b11".U) {
      r_lvl_output_ff(63, 0) := io.w_vn_lvl_0(63, 0)
      r_lvl_output_ff_valid(1, 0) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(1, 0) === "b10".U) {
      r_lvl_output_ff(63, 32) := io.w_vn_lvl_0(63, 32)
      r_lvl_output_ff(31, 0) := 0.U
      r_lvl_output_ff_valid(1, 0) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(1, 0) === "b01".U) {
      r_lvl_output_ff(63, 0) := 0.U
      r_lvl_output_ff(31, 0) := io.w_vn_lvl_0(31, 0)
      r_lvl_output_ff_valid(1, 0) := "b01".U
    }.otherwise {
      r_lvl_output_ff(63, 0) := 0.U
      r_lvl_output_ff_valid(1, 0) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(3, 2) === "b11".U) {
      r_lvl_output_ff(127, 64) := io.w_vn_lvl_0(127, 64)
      r_lvl_output_ff_valid(3, 2) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(3, 2) === "b10".U) {
      r_lvl_output_ff(127, 96) := io.w_vn_lvl_0(127, 96)
      r_lvl_output_ff(95, 64) := 0.U
      r_lvl_output_ff_valid(3, 2) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(3, 2) === "b01".U) {
      r_lvl_output_ff(127, 64) := 0.U
      r_lvl_output_ff(95, 64) := io.w_vn_lvl_0(95, 64)
      r_lvl_output_ff_valid(3, 2) := "b01".U
    }.otherwise {
      r_lvl_output_ff(127, 64) := 0.U
      r_lvl_output_ff_valid(3, 2) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(1, 0) === "b11".U) {
      r_lvl_output_ff(63, 0) := io.w_vn_lvl_0(63, 0)
      r_lvl_output_ff_valid(1, 0) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(1, 0) === "b10".U) {
      r_lvl_output_ff(63, 32) := io.w_vn_lvl_0(63, 32)
      r_lvl_output_ff(31, 0) := 0.U
      r_lvl_output_ff_valid(1, 0) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(1, 0) === "b01".U) {
      r_lvl_output_ff(63, 0) := 0.U
      r_lvl_output_ff(31, 0) := io.w_vn_lvl_0(31, 0)
      r_lvl_output_ff_valid(1, 0) := "b01".U
    }.otherwise {
      r_lvl_output_ff(63, 0) := 0.U
      r_lvl_output_ff_valid(1, 0) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(7, 6) === "b11".U) {
        r_lvl_output_ff(255, 192) := io.w_vn_lvl_0(255, 192)
        r_lvl_output_ff_valid(7, 6) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(7, 6) === "b10".U) {
        r_lvl_output_ff(255, 224) := io.w_vn_lvl_0(255, 224)
        r_lvl_output_ff(223, 192) := 0.U
        r_lvl_output_ff_valid(7, 6) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(7, 6) === "b01".U) {
        r_lvl_output_ff(255, 192) := 0.U
        r_lvl_output_ff(223, 192) := io.w_vn_lvl_0(223, 192)
        r_lvl_output_ff_valid(7, 6) := "b01".U
    }.otherwise {
        r_lvl_output_ff(255, 192) := 0.U
        r_lvl_output_ff_valid(7, 6) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(9, 8) === "b11".U) {
        r_lvl_output_ff(319, 256) := io.w_vn_lvl_0(319, 256)
        r_lvl_output_ff_valid(9, 8) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(9, 8) === "b10".U) {
        r_lvl_output_ff(319, 288) := io.w_vn_lvl_0(319, 288)
        r_lvl_output_ff(287, 256) := 0.U
        r_lvl_output_ff_valid(9, 8) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(9, 8) === "b01".U) {
        r_lvl_output_ff(319, 256) := 0.U
        r_lvl_output_ff(287, 256) := io.w_vn_lvl_0(287, 256)
        r_lvl_output_ff_valid(9, 8) := "b01".U
    }.otherwise {
        r_lvl_output_ff(319, 256) := 0.U
        r_lvl_output_ff_valid(9, 8) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(11, 10) === "b11".U) {
        r_lvl_output_ff(383, 320) := io.w_vn_lvl_0(383, 320)
        r_lvl_output_ff_valid(11, 10) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(11, 10) === "b10".U) {
        r_lvl_output_ff(383, 352) := io.w_vn_lvl_0(383, 352)
        r_lvl_output_ff(351, 320) := 0.U
        r_lvl_output_ff_valid(11, 10) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(11, 10) === "b01".U) {
        r_lvl_output_ff(383, 320) := 0.U
        r_lvl_output_ff(351, 320) := io.w_vn_lvl_0(351, 320)
        r_lvl_output_ff_valid(11, 10) := "b01".U
    }.otherwise {
        r_lvl_output_ff(383, 320) := 0.U
        r_lvl_output_ff_valid(11, 10) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(13, 12) === "b11".U) {
        r_lvl_output_ff(447, 384) := io.w_vn_lvl_0(447, 384)
        r_lvl_output_ff_valid(13, 12) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(13, 12) === "b10".U) {
        r_lvl_output_ff(447, 416) := io.w_vn_lvl_0(447, 416)
        r_lvl_output_ff(415, 384) := 0.U
        r_lvl_output_ff_valid(13, 12) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(13, 12) === "b01".U) {
        r_lvl_output_ff(447, 384) := 0.U
        r_lvl_output_ff(415, 384) := io.w_vn_lvl_0(415, 384)
        r_lvl_output_ff_valid(13, 12) := "b01".U
    }.otherwise {
        r_lvl_output_ff(447, 384) := 0.U
        r_lvl_output_ff_valid(13, 12) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(15, 14) === "b11".U) {
        r_lvl_output_ff(511, 448) := io.w_vn_lvl_0(511, 448)
        r_lvl_output_ff_valid(15, 14) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(15, 14) === "b10".U) {
        r_lvl_output_ff(511, 480) := io.w_vn_lvl_0(511, 480)
        r_lvl_output_ff(479, 448) := 0.U
        r_lvl_output_ff_valid(15, 14) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(15, 14) === "b01".U) {
        r_lvl_output_ff(511, 448) := 0.U
        r_lvl_output_ff(479, 448) := io.w_vn_lvl_0(479, 448)
        r_lvl_output_ff_valid(15, 14) := "b01".U
    }.otherwise {
        r_lvl_output_ff(511, 448) := 0.U
        r_lvl_output_ff_valid(15, 14) := "b00".U
    }
 
    when(io.w_vn_lvl_0_valid(17, 16) === "b11".U) {
        r_lvl_output_ff(575, 512) := io.w_vn_lvl_0(575, 512)
        r_lvl_output_ff_valid(17, 16) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(17, 16) === "b10".U) {
        r_lvl_output_ff(575, 544) := io.w_vn_lvl_0(575, 544)
        r_lvl_output_ff(543, 512) := 0.U
        r_lvl_output_ff_valid(17, 16) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(17, 16) === "b01".U) {
        r_lvl_output_ff(575, 512) := 0.U
        r_lvl_output_ff(543, 512) := io.w_vn_lvl_0(543, 512)
        r_lvl_output_ff_valid(17, 16) := "b01".U
    }.otherwise {
        r_lvl_output_ff(575, 512) := 0.U
        r_lvl_output_ff_valid(17, 16) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(19, 18) === "b11".U) {
        r_lvl_output_ff(639, 576) := io.w_vn_lvl_0(639, 576)
        r_lvl_output_ff_valid(19, 18) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(19, 18) === "b10".U) {
        r_lvl_output_ff(639, 608) := io.w_vn_lvl_0(639, 608)
        r_lvl_output_ff(607, 576) := 0.U
        r_lvl_output_ff_valid(19, 18) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(19, 18) === "b01".U) {
        r_lvl_output_ff(639, 576) := 0.U
        r_lvl_output_ff(607, 576) := io.w_vn_lvl_0(607, 576)
        r_lvl_output_ff_valid(19, 18) := "b01".U
    }.otherwise {
        r_lvl_output_ff(639, 576) := 0.U
        r_lvl_output_ff_valid(19, 18) := "b00".U
    }


    when(io.w_vn_lvl_0_valid(21, 20) === "b11".U) {
        r_lvl_output_ff(703, 640) := io.w_vn_lvl_0(703, 640)
        r_lvl_output_ff_valid(21, 20) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(21, 20) === "b10".U) {
        r_lvl_output_ff(703, 672) := io.w_vn_lvl_0(703, 672)
        r_lvl_output_ff(671, 640) := 0.U
        r_lvl_output_ff_valid(21, 20) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(21, 20) === "b01".U) {
        r_lvl_output_ff(703, 640) := 0.U
        r_lvl_output_ff(671, 640) := io.w_vn_lvl_0(671, 640)
        r_lvl_output_ff_valid(21, 20) := "b01".U
    }.otherwise {
        r_lvl_output_ff(703, 640) := 0.U
        r_lvl_output_ff_valid(21, 20) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(23, 22) === "b11".U) {
        r_lvl_output_ff(767, 704) := io.w_vn_lvl_0(767, 704)
        r_lvl_output_ff_valid(23, 22) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(23, 22) === "b10".U) {
        r_lvl_output_ff(767, 736) := io.w_vn_lvl_0(767, 736)
        r_lvl_output_ff(735, 704) := 0.U
        r_lvl_output_ff_valid(23, 22) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(23, 22) === "b01".U) {
        r_lvl_output_ff(767, 704) := 0.U
        r_lvl_output_ff(735, 704) := io.w_vn_lvl_0(735, 704)
        r_lvl_output_ff_valid(23, 22) := "b01".U
    }.otherwise {
        r_lvl_output_ff(767, 704) := 0.U
        r_lvl_output_ff_valid(23, 22) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(25, 24) === "b11".U) {
        r_lvl_output_ff(831, 768) := io.w_vn_lvl_0(831, 768)
        r_lvl_output_ff_valid(25, 24) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(25, 24) === "b10".U) {
        r_lvl_output_ff(831, 800) := io.w_vn_lvl_0(831, 800)
        r_lvl_output_ff(799, 768) := 0.U
        r_lvl_output_ff_valid(25, 24) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(25, 24) === "b01".U) {
        r_lvl_output_ff(831, 768) := 0.U
        r_lvl_output_ff(799, 768) := io.w_vn_lvl_0(799, 768)
        r_lvl_output_ff_valid(25, 24) := "b01".U
    }.otherwise {
        r_lvl_output_ff(831, 768) := 0.U
    r_lvl_output_ff_valid(25, 24) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(27, 26) === "b11".U) {
        r_lvl_output_ff(895, 832) := io.w_vn_lvl_0(895, 832)
        r_lvl_output_ff_valid(27, 26) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(27, 26) === "b10".U) {
        r_lvl_output_ff(895, 864) := io.w_vn_lvl_0(895, 864)
        r_lvl_output_ff(863, 832) := 0.U
        r_lvl_output_ff_valid(27, 26) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(27, 26) === "b01".U) {
        r_lvl_output_ff(895, 832) := 0.U
        r_lvl_output_ff(863, 832) := io.w_vn_lvl_0(863, 832)
        r_lvl_output_ff_valid(27, 26) := "b01".U
    }.otherwise {
        r_lvl_output_ff(895, 832) := 0.U
        r_lvl_output_ff_valid(27, 26) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(29, 28) === "b11".U) {
        r_lvl_output_ff(959, 896) := io.w_vn_lvl_0(959, 896)
        r_lvl_output_ff_valid(29, 28) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(29, 28) === "b10".U) {
        r_lvl_output_ff(959, 928) := io.w_vn_lvl_0(959, 928)
        r_lvl_output_ff(927, 896) := 0.U
        r_lvl_output_ff_valid(29, 28) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(29, 28) === "b01".U) {
        r_lvl_output_ff(959, 896) := 0.U
        r_lvl_output_ff(927, 896) := io.w_vn_lvl_0(927, 896)
        r_lvl_output_ff_valid(29, 28) := "b01".U
    }.otherwise {
        r_lvl_output_ff(959, 896) := 0.U
        r_lvl_output_ff_valid(29, 28) := "b00".U
    }

    when(io.w_vn_lvl_0_valid(31, 30) === "b11".U) {
        r_lvl_output_ff(1023, 960) := io.w_vn_lvl_0(1023, 960)
        r_lvl_output_ff_valid(31, 30) := "b11".U
    }.elsewhen(io.w_vn_lvl_0_valid(31, 30) === "b10".U) {
        r_lvl_output_ff(1023, 992) := io.w_vn_lvl_0(1023, 992)
        r_lvl_output_ff(991, 960) := 0.U
        r_lvl_output_ff_valid(31, 30) := "b10".U
    }.elsewhen(io.w_vn_lvl_0_valid(31, 30) === "b01".U) {
        r_lvl_output_ff(1023, 960) := 0.U
        r_lvl_output_ff(991, 960) := io.w_vn_lvl_0(991, 960)
        r_lvl_output_ff_valid(31, 30) := "b01".U
    }.otherwise {
        r_lvl_output_ff(1023, 960) := 0.U
        r_lvl_output_ff_valid(31, 30) := "b00".U
    }
  }



  when(reset === true.B) {
    r_lvl_output_ff(2047, 1024) := 0.U
    r_lvl_output_ff_valid(63, 32) := 0.U
  }.otherwise {
    r_lvl_output_ff(1055, 1024) := r_lvl_output_ff(31, 0)
    r_lvl_output_ff_valid(32) := r_lvl_output_ff_valid(0)

    when(w_vn_lvl_1_valid(0) === true.B) {
        r_lvl_output_ff(1087, 1056) := w_vn_lvl_1(31, 0)
        r_lvl_output_ff_valid(33) := true.B
    }.otherwise {
        r_lvl_output_ff(1087, 1056) := r_lvl_output_ff(63, 32)
        r_lvl_output_ff_valid(33) := r_lvl_output_ff_valid(1)
    }

    when(w_vn_lvl_1_valid(1) === true.B) {
        r_lvl_output_ff(1119, 1088) := w_vn_lvl_1(63, 32)
        r_lvl_output_ff_valid(34) := true.B
    }.otherwise {
        r_lvl_output_ff(1119, 1088) := r_lvl_output_ff(95, 64)
        r_lvl_output_ff_valid(34) := r_lvl_output_ff_valid(2)
    }

    r_lvl_output_ff(1151, 1120) := r_lvl_output_ff(127, 96)
    r_lvl_output_ff_valid(35) := r_lvl_output_ff_valid(3)

    r_lvl_output_ff(1183, 1152) := r_lvl_output_ff(159, 128)
    r_lvl_output_ff_valid(36) := r_lvl_output_ff_valid(4)

    when(w_vn_lvl_1_valid(2) === true.B) {
        r_lvl_output_ff(1215, 1184) := w_vn_lvl_1(95, 64)
        r_lvl_output_ff_valid(37) := true.B
    }.otherwise {
        r_lvl_output_ff(1215, 1184) := r_lvl_output_ff(191, 160)
        r_lvl_output_ff_valid(37) := r_lvl_output_ff_valid(5)
    }

    when(w_vn_lvl_1_valid(3) === true.B) {
        r_lvl_output_ff(1247, 1216) := w_vn_lvl_1(127, 96)
        r_lvl_output_ff_valid(38) := true.B
    }.otherwise {
        r_lvl_output_ff(1247, 1216) := r_lvl_output_ff(223, 192)
        r_lvl_output_ff_valid(38) := r_lvl_output_ff_valid(6)   
    }

    r_lvl_output_ff(1279, 1248) := r_lvl_output_ff(255, 224)
    r_lvl_output_ff_valid(39) := r_lvl_output_ff_valid(7)

    r_lvl_output_ff(1311, 1280) := r_lvl_output_ff(287, 256)
    r_lvl_output_ff_valid(40) := r_lvl_output_ff_valid(8)

    when(w_vn_lvl_1_valid(4) === true.B) {
        r_lvl_output_ff(1343, 1312) := w_vn_lvl_1(159, 128)
        r_lvl_output_ff_valid(41) := true.B
    }.otherwise {
        r_lvl_output_ff(1343, 1312) := r_lvl_output_ff(319, 288)
        r_lvl_output_ff_valid(41) := r_lvl_output_ff_valid(9)
    }

    when(w_vn_lvl_1_valid(5) === true.B) {
        r_lvl_output_ff(1375, 1344) := w_vn_lvl_1(191, 160)
        r_lvl_output_ff_valid(42) := true.B
    }.otherwise {
        r_lvl_output_ff(1375, 1344) := r_lvl_output_ff(351, 320)
        r_lvl_output_ff_valid(42) := r_lvl_output_ff_valid(10)
    }

    r_lvl_output_ff(1407, 1376) := r_lvl_output_ff(383, 352)
    r_lvl_output_ff_valid(43) := r_lvl_output_ff_valid(11)

    r_lvl_output_ff(1439, 1408) := r_lvl_output_ff(415, 384)
    r_lvl_output_ff_valid(44) := r_lvl_output_ff_valid(12)

    when(w_vn_lvl_1_valid(6) === true.B) {
        r_lvl_output_ff(1471, 1440) := w_vn_lvl_1(223, 192)
        r_lvl_output_ff_valid(45) := true.B
    }.otherwise {
        r_lvl_output_ff(1471, 1440) := r_lvl_output_ff(447, 416)
        r_lvl_output_ff_valid(45) := r_lvl_output_ff_valid(13)
    }

    when(w_vn_lvl_1_valid(7) === true.B) {
        r_lvl_output_ff(1503, 1472) := w_vn_lvl_1(255, 224)
        r_lvl_output_ff_valid(46) := true.B
    }.otherwise {
        r_lvl_output_ff(1503, 1472) := r_lvl_output_ff(479, 448)
        r_lvl_output_ff_valid(46) := r_lvl_output_ff_valid(14)
    }

    r_lvl_output_ff(1535, 1504) := r_lvl_output_ff(511, 480)
    r_lvl_output_ff_valid(47) := r_lvl_output_ff_valid(15)

    r_lvl_output_ff(1567, 1536) := r_lvl_output_ff(543, 512)
    r_lvl_output_ff_valid(48) := r_lvl_output_ff_valid(16)

    when(w_vn_lvl_1_valid(8) === true.B) {
        r_lvl_output_ff(1599, 1568) := w_vn_lvl_1(287, 256)
        r_lvl_output_ff_valid(49) := true.B
    }.otherwise {
        r_lvl_output_ff(1599, 1568) := r_lvl_output_ff(575, 544)
        r_lvl_output_ff_valid(49) := r_lvl_output_ff_valid(17)
    }

    when(w_vn_lvl_1_valid(9) === true.B) {
        r_lvl_output_ff(1631, 1600) := w_vn_lvl_1(319, 288)
        r_lvl_output_ff_valid(50) := true.B
    }.otherwise {
        r_lvl_output_ff(1631, 1600) := r_lvl_output_ff(607, 576)
        r_lvl_output_ff_valid(50) := r_lvl_output_ff_valid(18)
    }

    r_lvl_output_ff(1663, 1632) := r_lvl_output_ff(639, 608)
    r_lvl_output_ff_valid(51) := r_lvl_output_ff_valid(19)

    r_lvl_output_ff(1695, 1664) := r_lvl_output_ff(671, 640)
    r_lvl_output_ff_valid(52) := r_lvl_output_ff_valid(20)

    when(w_vn_lvl_1_valid(10) === true.B) {
        r_lvl_output_ff(1727, 1696) := w_vn_lvl_1(351, 320)
        r_lvl_output_ff_valid(53) := true.B
    }.otherwise {
        r_lvl_output_ff(1727, 1696) := r_lvl_output_ff(703, 672)
        r_lvl_output_ff_valid(53) := r_lvl_output_ff_valid(21)
    }

    when(w_vn_lvl_1_valid(11) === true.B) {
        r_lvl_output_ff(1759, 1728) := w_vn_lvl_1(383, 352)
        r_lvl_output_ff_valid(54) := true.B
    }.otherwise {
        r_lvl_output_ff(1759, 1728) := r_lvl_output_ff(735, 704)
        r_lvl_output_ff_valid(54) := r_lvl_output_ff_valid(22)
    }

    r_lvl_output_ff(1791, 1760) := r_lvl_output_ff(767, 736)
    r_lvl_output_ff_valid(55) := r_lvl_output_ff_valid(23)

    r_lvl_output_ff(1823, 1792) := r_lvl_output_ff(799, 768)
    r_lvl_output_ff_valid(56) := r_lvl_output_ff_valid(24)

    when(w_vn_lvl_1_valid(12) === true.B) {
        r_lvl_output_ff(1855, 1824) := w_vn_lvl_1(415, 384)
        r_lvl_output_ff_valid(57) := true.B
    }.otherwise {
        r_lvl_output_ff(1855, 1824) := r_lvl_output_ff(831, 800)
    r_lvl_output_ff_valid(57) := r_lvl_output_ff_valid(25)
    }

    when(w_vn_lvl_1_valid(13) === true.B) {
        r_lvl_output_ff(1887, 1856) := w_vn_lvl_1(447, 416)
        r_lvl_output_ff_valid(58) := true.B
    }.otherwise {
        r_lvl_output_ff(1887, 1856) := r_lvl_output_ff(863, 832)
        r_lvl_output_ff_valid(58) := r_lvl_output_ff_valid(26)
    }

    r_lvl_output_ff(1919, 1888) := r_lvl_output_ff(895, 864)
    r_lvl_output_ff_valid(59) := r_lvl_output_ff_valid(27)

    r_lvl_output_ff(1951, 1920) := r_lvl_output_ff(927, 896)
    r_lvl_output_ff_valid(60) := r_lvl_output_ff_valid(28)

    when(w_vn_lvl_1_valid(14) === true.B) {
        r_lvl_output_ff(1983, 1952) := w_vn_lvl_1(479, 448)
        r_lvl_output_ff_valid(61) := true.B
    }.otherwise {
        r_lvl_output_ff(1983, 1952) := r_lvl_output_ff(959, 928)
    r_lvl_output_ff_valid(61) := r_lvl_output_ff_valid(29)
    }

    when(w_vn_lvl_1_valid(15) === true.B) {
        r_lvl_output_ff(2015, 1984) := w_vn_lvl_1(511, 480)
        r_lvl_output_ff_valid(62) := true.B
    }.otherwise {
        r_lvl_output_ff(2015, 1984) := r_lvl_output_ff(991, 960)
        r_lvl_output_ff_valid(62) := r_lvl_output_ff_valid(30)
    }

    r_lvl_output_ff(2047, 2016) := r_lvl_output_ff(1023, 992)
    r_lvl_output_ff_valid(63) := r_lvl_output_ff_valid(31)

    }


  when (reset === true.B) {
    r_lvl_output_ff(3071, 2048) := 0.U
    r_lvl_output_ff_valid(95, 64) := 0.U
  }.otherwise {
    r_lvl_output_ff(2079, 2048) := r_lvl_output_ff(1055, 1024)
    r_lvl_output_ff_valid(64) := r_lvl_output_ff_valid(32)

    r_lvl_output_ff(2111, 2080) := r_lvl_output_ff(1087, 1056)
    r_lvl_output_ff_valid(65) := r_lvl_output_ff_valid(33)

    r_lvl_output_ff(2143, 2112) := r_lvl_output_ff(1119, 1088)
    r_lvl_output_ff_valid(66) := r_lvl_output_ff_valid(34)

    when (w_vn_lvl_2_valid(0) === true.B) {
        r_lvl_output_ff(2175, 2144) := w_vn_lvl_2(31, 0)
        r_lvl_output_ff_valid(67) := true.B
        }.otherwise {
            r_lvl_output_ff(2175, 2144) := r_lvl_output_ff(1151, 1120)
            r_lvl_output_ff_valid(67) := r_lvl_output_ff_valid(35)
        }

    when (w_vn_lvl_2_valid(1) === true.B) {
        r_lvl_output_ff(2207, 2176) := w_vn_lvl_2(63, 32)
        r_lvl_output_ff_valid(68) := true.B
    }.otherwise {
        r_lvl_output_ff(2207, 2176) := r_lvl_output_ff(1183, 1152)
        r_lvl_output_ff_valid(68) := r_lvl_output_ff_valid(36)
    }
  
    r_lvl_output_ff(2239, 2208) := r_lvl_output_ff(1215, 1184)
    r_lvl_output_ff_valid(69) := r_lvl_output_ff_valid(37)

    r_lvl_output_ff(2271, 2240) := r_lvl_output_ff(1247, 1216)
    r_lvl_output_ff_valid(70) := r_lvl_output_ff_valid(38)

    r_lvl_output_ff(2303, 2272) := r_lvl_output_ff(1279, 1248)
    r_lvl_output_ff_valid(71) := r_lvl_output_ff_valid(39)

    r_lvl_output_ff(2335, 2304) := r_lvl_output_ff(1311, 1280)
    r_lvl_output_ff_valid(72) := r_lvl_output_ff_valid(40)

    r_lvl_output_ff(2367, 2336) := r_lvl_output_ff(1343, 1312)
    r_lvl_output_ff_valid(73) := r_lvl_output_ff_valid(41)

    r_lvl_output_ff(2399, 2368) := r_lvl_output_ff(1375, 1344)
    r_lvl_output_ff_valid(74) := r_lvl_output_ff_valid(42)

    when (w_vn_lvl_2_valid(2) === true.B) {
        r_lvl_output_ff(2431, 2400) := w_vn_lvl_2(95, 64)
        r_lvl_output_ff_valid(75) := true.B
    }.otherwise {
        r_lvl_output_ff(2431, 2400) := r_lvl_output_ff(1407, 1376)
        r_lvl_output_ff_valid(75) := r_lvl_output_ff_valid(43)
    }

    when (w_vn_lvl_2_valid(3) === true.B) {
        r_lvl_output_ff(2463, 2432) := w_vn_lvl_2(127, 96)
        r_lvl_output_ff_valid(76) := true.B
    }.otherwise {
        r_lvl_output_ff(2463, 2432) := r_lvl_output_ff(1439, 1408)
        r_lvl_output_ff_valid(76) := r_lvl_output_ff_valid(44)
    }

    r_lvl_output_ff(2495, 2464) := r_lvl_output_ff(1471, 1440)
    r_lvl_output_ff_valid(77) := r_lvl_output_ff_valid(45)

    r_lvl_output_ff(2527, 2496) := r_lvl_output_ff(1503, 1472)
    r_lvl_output_ff_valid(78) := r_lvl_output_ff_valid(46)

    r_lvl_output_ff(2559, 2528) := r_lvl_output_ff(1535, 1504)
    r_lvl_output_ff_valid(79) := r_lvl_output_ff_valid(47)

    r_lvl_output_ff(2591, 2560) := r_lvl_output_ff(1567, 1536)
    r_lvl_output_ff_valid(80) := r_lvl_output_ff_valid(48)

    r_lvl_output_ff(2623, 2592) := r_lvl_output_ff(1599, 1568)
    r_lvl_output_ff_valid(81) := r_lvl_output_ff_valid(49)

    r_lvl_output_ff(2655, 2624) := r_lvl_output_ff(1631, 1600)
    r_lvl_output_ff_valid(82) := r_lvl_output_ff_valid(50)

    when (w_vn_lvl_2_valid(4)) {
        r_lvl_output_ff(2687, 2656) := w_vn_lvl_2(159, 128)
        r_lvl_output_ff_valid(83) := true.B
    } otherwise {
        r_lvl_output_ff(2687, 2656) := r_lvl_output_ff(1663, 1632)
        r_lvl_output_ff_valid(83) := r_lvl_output_ff_valid(51)
    }

    when (w_vn_lvl_2_valid(5)) {
        r_lvl_output_ff(2719, 2688) := w_vn_lvl_2(191, 160)
        r_lvl_output_ff_valid(84) := true.B
    } otherwise {
        r_lvl_output_ff(2719, 2688) := r_lvl_output_ff(1695, 1664)
    r_lvl_output_ff_valid(84) := r_lvl_output_ff_valid(52)
    }

    r_lvl_output_ff(2751, 2720) := r_lvl_output_ff(1727, 1696)
    r_lvl_output_ff_valid(85) := r_lvl_output_ff_valid(53)

    r_lvl_output_ff(2783, 2752) := r_lvl_output_ff(1759, 1728)
    r_lvl_output_ff_valid(86) := r_lvl_output_ff_valid(54)

    r_lvl_output_ff(2815, 2784) := r_lvl_output_ff(1791, 1760)
    r_lvl_output_ff_valid(87) := r_lvl_output_ff_valid(55)

    r_lvl_output_ff(2847, 2816) := r_lvl_output_ff(1823, 1792)
    r_lvl_output_ff_valid(88) := r_lvl_output_ff_valid(56)

    r_lvl_output_ff(2879, 2848) := r_lvl_output_ff(1855, 1824)
    r_lvl_output_ff_valid(89) := r_lvl_output_ff_valid(57)

    r_lvl_output_ff(2911, 2880) := r_lvl_output_ff(1887, 1856)
    r_lvl_output_ff_valid(90) := r_lvl_output_ff_valid(58)

    when (w_vn_lvl_2_valid(6)) {
        r_lvl_output_ff(2943, 2912) := w_vn_lvl_2(223, 192)
        r_lvl_output_ff_valid(91) := true.B
    } otherwise {
        r_lvl_output_ff(2943, 2912) := r_lvl_output_ff(1919, 1888)
        r_lvl_output_ff_valid(91) := r_lvl_output_ff_valid(59)
    }

    when (w_vn_lvl_2_valid(7)) {
        r_lvl_output_ff(2975, 2944) := w_vn_lvl_2(255, 224)
        r_lvl_output_ff_valid(92) := true.B
    } otherwise {
        r_lvl_output_ff(2975, 2944) := r_lvl_output_ff(1951, 1920)
        r_lvl_output_ff_valid(92) := r_lvl_output_ff_valid(60)
    }

    r_lvl_output_ff(3007, 2976) := r_lvl_output_ff(1983, 1952)
    r_lvl_output_ff_valid(93) := r_lvl_output_ff_valid(61)

    r_lvl_output_ff(3039, 3008) := r_lvl_output_ff(2015, 1984)
    r_lvl_output_ff_valid(94) := r_lvl_output_ff_valid(62)

    r_lvl_output_ff(3071, 3040) := r_lvl_output_ff(2047, 2016)
    r_lvl_output_ff_valid(95) := r_lvl_output_ff_valid(63)

  }


  when (rst === 0.B) {
    r_lvl_output_ff(4095, 3072) := 0.U
    r_lvl_output_ff_valid(127, 96) := 0.U
  }.otherwise {
    r_lvl_output_ff(3103, 3072) := r_lvl_output_ff(2079, 2048)
    r_lvl_output_ff_valid(96) := r_lvl_output_ff_valid(64)

    r_lvl_output_ff(3135, 3104) := r_lvl_output_ff(2111, 2080)
    r_lvl_output_ff_valid(97) := r_lvl_output_ff_valid(65)

    r_lvl_output_ff(3167, 3136) := r_lvl_output_ff(2143, 2112)
    r_lvl_output_ff_valid(98) := r_lvl_output_ff_valid(66)

    r_lvl_output_ff(3199, 3168) := r_lvl_output_ff(2175, 2144)
    r_lvl_output_ff_valid(99) := r_lvl_output_ff_valid(67)

    r_lvl_output_ff(3231, 3200) := r_lvl_output_ff(2207, 2176)
    r_lvl_output_ff_valid(100) := r_lvl_output_ff_valid(68)

    r_lvl_output_ff(3263, 3232) := r_lvl_output_ff(2239, 2208)
    r_lvl_output_ff_valid(101) := r_lvl_output_ff_valid(69)

    r_lvl_output_ff(3295, 3264) := r_lvl_output_ff(2271, 2240)
    r_lvl_output_ff_valid(102) := r_lvl_output_ff_valid(70)

    when (w_vn_lvl_3_valid(0)) {
      r_lvl_output_ff(3327, 3296) := w_vn_lvl_3(31, 0)
      r_lvl_output_ff_valid(103) := true.B
    } .otherwise {
      r_lvl_output_ff(3327, 3296) := r_lvl_output_ff(2303, 2272)
      r_lvl_output_ff_valid(103) := r_lvl_output_ff_valid(71)
    }

    when (w_vn_lvl_3_valid(1)) {
      r_lvl_output_ff(3359, 3328) := w_vn_lvl_3(63, 32)
      r_lvl_output_ff_valid(104) := true.B
    } .otherwise {
      r_lvl_output_ff(3359, 3328) := r_lvl_output_ff(2335, 2304)
      r_lvl_output_ff_valid(104) := r_lvl_output_ff_valid(72)
    }

    r_lvl_output_ff(3391, 3360) := r_lvl_output_ff(2367, 2336)
    r_lvl_output_ff_valid(105) := r_lvl_output_ff_valid(73)

    r_lvl_output_ff(3423, 3392) := r_lvl_output_ff(2399, 2368)
    r_lvl_output_ff_valid(106) := r_lvl_output_ff_valid(74)

    r_lvl_output_ff(3455, 3424) := r_lvl_output_ff(2431, 2400)
    r_lvl_output_ff_valid(107) := r_lvl_output_ff_valid(75)

    r_lvl_output_ff(3487, 3456) := r_lvl_output_ff(2463, 2432)
    r_lvl_output_ff_valid(108) := r_lvl_output_ff_valid(76)

    r_lvl_output_ff(3519, 3488) := r_lvl_output_ff(2495, 2464)
    r_lvl_output_ff_valid(109) := r_lvl_output_ff_valid(77)

    r_lvl_output_ff(3551, 3520) := r_lvl_output_ff(2527, 2496)
    r_lvl_output_ff_valid(110) := r_lvl_output_ff_valid(78)

    r_lvl_output_ff(3583, 3552) := r_lvl_output_ff(2559, 2528)
    r_lvl_output_ff_valid(111) := r_lvl_output_ff_valid(79)

    r_lvl_output_ff(3615, 3584) := r_lvl_output_ff(2591, 2560)
    r_lvl_output_ff_valid(112) := r_lvl_output_ff_valid(80)

    r_lvl_output_ff(3647, 3616) := r_lvl_output_ff(2623, 2592)
    r_lvl_output_ff_valid(113) := r_lvl_output_ff_valid(81)

    r_lvl_output_ff(3679, 3648) := r_lvl_output_ff(2655, 2624)
    r_lvl_output_ff_valid(114) := r_lvl_output_ff_valid(82)

    r_lvl_output_ff(3711, 3680) := r_lvl_output_ff(2687, 2656)
    r_lvl_output_ff_valid(115) := r_lvl_output_ff_valid(83)

    r_lvl_output_ff(3743, 3712) := r_lvl_output_ff(2719, 2688)
    r_lvl_output_ff_valid(116) := r_lvl_output_ff_valid(84)

    r_lvl_output_ff(3775, 3744) := r_lvl_output_ff(2751, 2720)
    r_lvl_output_ff_valid(117) := r_lvl_output_ff_valid(85)

    r_lvl_output_ff(3807, 3776) := r_lvl_output_ff(2783, 2752)
    r_lvl_output_ff_valid(118) := r_lvl_output_ff_valid(86)

    when (w_vn_lvl_3_valid(2)) {
        r_lvl_output_ff(3839, 3808) := w_vn_lvl_3(95, 64)
        r_lvl_output_ff_valid(119) := true.B
    } .otherwise {
        r_lvl_output_ff(3839, 3808) := r_lvl_output_ff(2815, 2784)
        r_lvl_output_ff_valid(119) := r_lvl_output_ff_valid(87)
    }

    when (w_vn_lvl_3_valid(3)) {
        r_lvl_output_ff(3871, 3840) := w_vn_lvl_3(127, 96)
        r_lvl_output_ff_valid(120) := true.B
    } .otherwise {
        r_lvl_output_ff(3871, 3840) := r_lvl_output_ff(2847, 2816)
        r_lvl_output_ff_valid(120) := r_lvl_output_ff_valid(88)
    }

    r_lvl_output_ff(3903, 3872) := r_lvl_output_ff(2879, 2848)
    r_lvl_output_ff_valid(121) := r_lvl_output_ff_valid(89)

    r_lvl_output_ff(3935, 3904) := r_lvl_output_ff(2911, 2880)
    r_lvl_output_ff_valid(122) := r_lvl_output_ff_valid(90)

    r_lvl_output_ff(3967, 3936) := r_lvl_output_ff(2943, 2912)
    r_lvl_output_ff_valid(123) := r_lvl_output_ff_valid(91)

    r_lvl_output_ff(3999, 3968) := r_lvl_output_ff(2975, 2944)
    r_lvl_output_ff_valid(124) := r_lvl_output_ff_valid(92)

    r_lvl_output_ff(4031, 4000) := r_lvl_output_ff(3007, 2976)
    r_lvl_output_ff_valid(125) := r_lvl_output_ff_valid(93)

    r_lvl_output_ff(4063, 4032) := r_lvl_output_ff(3039, 3008)
    r_lvl_output_ff_valid(126) := r_lvl_output_ff_valid(94)

    r_lvl_output_ff(4095, 4064) := r_lvl_output_ff(3071, 3040)
    r_lvl_output_ff_valid(127) := r_lvl_output_ff_valid(95)
  }
  when (rst === 1.B) {
    r_lvl_output_ff(5119, 4096) := 0.U
    r_lvl_output_ff_valid(159, 128) := 0.U
  } .otherwise {
    r_lvl_output_ff(4127, 4096) := r_lvl_output_ff(3103, 3072)
    r_lvl_output_ff_valid(128) := r_lvl_output_ff_valid(96)

    r_lvl_output_ff(4159, 4128) := r_lvl_output_ff(3135, 3104)
    r_lvl_output_ff_valid(129) := r_lvl_output_ff_valid(97)

    r_lvl_output_ff(4191, 4160) := r_lvl_output_ff(3167, 3136)
    r_lvl_output_ff_valid(130) := r_lvl_output_ff_valid(98)

    r_lvl_output_ff(4223, 4192) := r_lvl_output_ff(3199, 3168)
    r_lvl_output_ff_valid(131) := r_lvl_output_ff_valid(99)

    r_lvl_output_ff(4255, 4224) := r_lvl_output_ff(3231, 3200)
    r_lvl_output_ff_valid(132) := r_lvl_output_ff_valid(100)

    r_lvl_output_ff(4287, 4256) := r_lvl_output_ff(3263, 3232)
    r_lvl_output_ff_valid(133) := r_lvl_output_ff_valid(101)

    r_lvl_output_ff(4319, 4288) := r_lvl_output_ff(3295, 3264)
    r_lvl_output_ff_valid(134) := r_lvl_output_ff_valid(102)

    r_lvl_output_ff(4351, 4320) := r_lvl_output_ff(3327, 3296)
    r_lvl_output_ff_valid(135) := r_lvl_output_ff_valid(103)

    r_lvl_output_ff(4383, 4352) := r_lvl_output_ff(3359, 3328)
    r_lvl_output_ff_valid(136) := r_lvl_output_ff_valid(104)

    r_lvl_output_ff(4415, 4384) := r_lvl_output_ff(3391, 3360)
    r_lvl_output_ff_valid(137) := r_lvl_output_ff_valid(105)

    r_lvl_output_ff(4447, 4416) := r_lvl_output_ff(3423, 3392)
    r_lvl_output_ff_valid(138) := r_lvl_output_ff_valid(106)

    r_lvl_output_ff(4479, 4448) := r_lvl_output_ff(3455, 3424)
    r_lvl_output_ff_valid(139) := r_lvl_output_ff_valid(107)

    r_lvl_output_ff(4511, 4480) := r_lvl_output_ff(3487, 3456)
    r_lvl_output_ff_valid(140) := r_lvl_output_ff_valid(108)

    r_lvl_output_ff(4543, 4512) := r_lvl_output_ff(3519, 3488)
    r_lvl_output_ff_valid(141) := r_lvl_output_ff_valid(109)

    r_lvl_output_ff(4575, 4544) := r_lvl_output_ff(3551, 3520)
    r_lvl_output_ff_valid(142) := r_lvl_output_ff_valid(110)

    when (w_vn_lvl_4_valid(0) === 1.B) {
        r_lvl_output_ff(4607, 4576) := w_vn_lvl_4(31, 0)
        r_lvl_output_ff_valid(143) := 1.B
    } .otherwise {
        r_lvl_output_ff(4607, 4576) := r_lvl_output_ff(3583, 3552)
        r_lvl_output_ff_valid(143) := r_lvl_output_ff_valid(111)
    }

    when (w_vn_lvl_4_valid(1) === 1.B) {
        r_lvl_output_ff(4639, 4608) := w_vn_lvl_4(63, 32)
        r_lvl_output_ff_valid(144) := 1.B
    } .otherwise {
        r_lvl_output_ff(4639, 4608) := r_lvl_output_ff(3615, 3584)
        r_lvl_output_ff_valid(144) := r_lvl_output_ff_valid(112)
    }

    r_lvl_output_ff(4671, 4640) := r_lvl_output_ff(3647, 3616)
    r_lvl_output_ff_valid(145) := r_lvl_output_ff_valid(113)

    r_lvl_output_ff(4703, 4672) := r_lvl_output_ff(3679, 3648)
    r_lvl_output_ff_valid(146) := r_lvl_output_ff_valid(114)

    r_lvl_output_ff(4735, 4704) := r_lvl_output_ff(3711, 3680)
    r_lvl_output_ff_valid(147) := r_lvl_output_ff_valid(115)

    r_lvl_output_ff(4767, 4736) := r_lvl_output_ff(3743, 3712)
    r_lvl_output_ff_valid(148) := r_lvl_output_ff_valid(116)

    r_lvl_output_ff(4799, 4768) := r_lvl_output_ff(3775, 3744)
    r_lvl_output_ff_valid(149) := r_lvl_output_ff_valid(117)

    r_lvl_output_ff(4831, 4800) := r_lvl_output_ff(3807, 3776)
    r_lvl_output_ff_valid(150) := r_lvl_output_ff_valid(118)

    r_lvl_output_ff(4863, 4832) := r_lvl_output_ff(3839, 3808)
    r_lvl_output_ff_valid(151) := r_lvl_output_ff_valid(119)

    r_lvl_output_ff(4895, 4864) := r_lvl_output_ff(3871, 3840)
    r_lvl_output_ff_valid(152) := r_lvl_output_ff_valid(120)

    r_lvl_output_ff(4927, 4896) := r_lvl_output_ff(3903, 3872)
    r_lvl_output_ff_valid(153) := r_lvl_output_ff_valid(121)

    r_lvl_output_ff(4959, 4928) := r_lvl_output_ff(3935, 3904)
    r_lvl_output_ff_valid(154) := r_lvl_output_ff_valid(122)

    r_lvl_output_ff(4991, 4960) := r_lvl_output_ff(3967, 3936)
    r_lvl_output_ff_valid(155) := r_lvl_output_ff_valid(123)
    
    r_lvl_output_ff(5023, 4992) := r_lvl_output_ff(3999, 3968)
    r_lvl_output_ff_valid(156) := r_lvl_output_ff_valid(124)

    r_lvl_output_ff(5055, 5024) := r_lvl_output_ff(4031, 4000)
    r_lvl_output_ff_valid(157) := r_lvl_output_ff_valid(125)

    r_lvl_output_ff(5087, 5056) := r_lvl_output_ff(4063, 4032)
    r_lvl_output_ff_valid(158) := r_lvl_output_ff_valid(126)

    r_lvl_output_ff(5119, 5088) := r_lvl_output_ff(4095, 4064)
    r_lvl_output_ff_valid(159) := r_lvl_output_ff_valid(127)
  }

  when (i_valid === 1.U) {
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

  val my_adder_0 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_0.io.i_valid := io.i_valid
  my_adder_0.io.i_data_bus := io.i_data_bus
  my_adder_0.io.i_add_en := io.i_add_en
  my_adder_0.io.i_cmd := io.i_cmd
  my_adder_0.io.i_sel := io.i_sel
  io.o_vn := my_adder_0.io.o_vn
  io.o_vn_valid := my_adder_0.io.o_vn_valid
  io.o_adder := my_adder_0.io.o_adder

  val my_adder_1 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_1.io.i_valid := io.i_valid
  my_adder_1.io.i_data_bus := io.i_data_bus
  my_adder_1.io.i_add_en := io.i_add_en
  my_adder_1.io.i_cmd := io.i_cmd
  my_adder_1.io.i_sel := io.i_sel
  io.o_vn := my_adder_1.io.o_vn
  io.o_vn_valid := my_adder_1.io.o_vn_valid
  io.o_adder := my_adder_1.io.o_adder

  val my_adder_2 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_2.io.i_valid := io.i_valid
  my_adder_2.io.i_data_bus := io.i_data_bus
  my_adder_2.io.i_add_en := io.i_add_en
  my_adder_2.io.i_cmd := io.i_cmd
  my_adder_2.io.i_sel := io.i_sel
  io.o_vn := my_adder_2.io.o_vn
  io.o_vn_valid := my_adder_2.io.o_vn_valid
  io.o_adder := my_adder_2.io.o_adder

  val my_adder_3 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 4, SEL_IN = 2))

  my_adder_3.io.i_valid := io.i_valid
  my_adder_3.io.i_data_bus := io.i_data_bus
  my_adder_3.io.i_add_en := io.i_add_en
  my_adder_3.io.i_cmd := io.i_cmd
  my_adder_3.io.i_sel := io.i_sel
  io.o_vn := my_adder_3.io.o_vn
  io.o_vn_valid := my_adder_3.io.o_vn_valid
  io.o_adder := my_adder_3.io.o_adder

  val my_adder_4 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_4.io.i_valid := io.i_valid
  my_adder_4.io.i_data_bus := io.i_data_bus
  my_adder_4.io.i_add_en := io.i_add_en
  my_adder_4.io.i_cmd := io.i_cmd
  my_adder_4.io.i_sel := io.i_sel
  io.o_vn := my_adder_4.io.o_vn
  io.o_vn_valid := my_adder_4.io.o_vn_valid
  io.o_adder := my_adder_4.io.o_adder

  val my_adder_5 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_5.io.i_valid := io.i_valid
  my_adder_5.io.i_data_bus := io.i_data_bus
  my_adder_5.io.i_add_en := io.i_add_en
  my_adder_5.io.i_cmd := io.i_cmd
  my_adder_5.io.i_sel := io.i_sel
  io.o_vn := my_adder_5.io.o_vn
  io.o_vn_valid := my_adder_5.io.o_vn_valid
  io.o_adder := my_adder_5.io.o_adder

  val my_adder_6 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_6.io.i_valid := io.i_valid
  my_adder_6.io.i_data_bus := io.i_data_bus
  my_adder_6.io.i_add_en := io.i_add_en
  my_adder_6.io.i_cmd := io.i_cmd
  my_adder_6.io.i_sel := io.i_sel
  io.o_vn := my_adder_6.io.o_vn
  io.o_vn_valid := my_adder_6.io.o_vn_valid
  io.o_adder := my_adder_6.io.o_adder

  val my_adder_7 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 6, SEL_IN = 4))

  my_adder_7.io.i_valid := io.i_valid
  my_adder_7.io.i_data_bus := io.i_data_bus
  my_adder_7.io.i_add_en := io.i_add_en
  my_adder_7.io.i_cmd := io.i_cmd
  my_adder_7.io.i_sel := io.i_sel
  io.o_vn := my_adder_7.io.o_vn
  io.o_vn_valid := my_adder_7.io.o_vn_valid
  io.o_adder := my_adder_7.io.o_adder

  val my_adder_9 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_9.io.i_valid := io.i_valid
  my_adder_9.io.i_data_bus := io.i_data_bus
  my_adder_9.io.i_add_en := io.i_add_en
  my_adder_9.io.i_cmd := io.i_cmd
  my_adder_9.io.i_sel := io.i_sel
  io.o_vn := my_adder_9.io.o_vn
  io.o_vn_valid := my_adder_9.io.o_vn_valid
  io.o_adder := my_adder_9.io.o_adder

  val my_adder_11 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 4, SEL_IN = 2))

  my_adder_11.io.i_valid := io.i_valid
  my_adder_11.io.i_data_bus := io.i_data_bus
  my_adder_11.io.i_add_en := io.i_add_en
  my_adder_11.io.i_cmd := io.i_cmd
  my_adder_11.io.i_sel := io.i_sel
  io.o_vn := my_adder_11.io.o_vn
  io.o_vn_valid := my_adder_11.io.o_vn_valid
  io.o_adder := my_adder_11.io.o_adder

  val my_adder_12 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_12.io.i_valid := io.i_valid
  my_adder_12.io.i_data_bus := io.i_data_bus
  my_adder_12.io.i_add_en := io.i_add_en
  my_adder_12.io.i_cmd := io.i_cmd
  my_adder_12.io.i_sel := io.i_sel
  io.o_vn := my_adder_12.io.o_vn
  io.o_vn_valid := my_adder_12.io.o_vn_valid
  io.o_adder := my_adder_12.io.o_adder

  val my_adder_13 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_13.io.i_valid := io.i_valid
  my_adder_13.io.i_data_bus := io.i_data_bus
  my_adder_13.io.i_add_en := io.i_add_en
  my_adder_13.io.i_cmd := io.i_cmd
  my_adder_13.io.i_sel := io.i_sel
  io.o_vn := my_adder_13.io.o_vn
  io.o_vn_valid := my_adder_13.io.o_vn_valid
  io.o_adder := my_adder_13.io.o_adder

  val my_adder_14 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_14.io.i_valid := io.i_valid
  my_adder_14.io.i_data_bus := io.i_data_bus
  my_adder_14.io.i_add_en := io.i_add_en
  my_adder_14.io.i_cmd := io.i_cmd
  my_adder_14.io.i_sel := io.i_sel
  io.o_vn := my_adder_14.io.o_vn
  io.o_vn_valid := my_adder_14.io.o_vn_valid
  io.o_adder := my_adder_14.io.o_adder

  val my_adder_15 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 8, SEL_IN = 4))

  my_adder_15.io.i_valid := io.i_valid
  my_adder_15.io.i_data_bus := io.i_data_bus
  my_adder_15.io.i_add_en := io.i_add_en
  my_adder_15.io.i_cmd := io.i_cmd
  my_adder_15.io.i_sel := io.i_sel
  io.o_vn := my_adder_15.io.o_vn
  io.o_vn_valid := my_adder_15.io.o_vn_valid
  io.o_adder := my_adder_15.io.o_adder

  val my_adder_16 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_16.io.i_valid := io.i_valid
  my_adder_16.io.i_data_bus := io.i_data_bus
  my_adder_16.io.i_add_en := io.i_add_en
  my_adder_16.io.i_cmd := io.i_cmd
  my_adder_16.io.i_sel := io.i_sel
  io.o_vn := my_adder_16.io.o_vn
  io.o_vn_valid := my_adder_16.io.o_vn_valid
  io.o_adder := my_adder_16.io.o_adder

  val my_adder_17 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_17.io.i_valid := io.i_valid
  my_adder_17.io.i_data_bus := io.i_data_bus
  my_adder_17.io.i_add_en := io.i_add_en
  my_adder_17.io.i_cmd := io.i_cmd
  my_adder_17.io.i_sel := io.i_sel
  io.o_vn := my_adder_17.io.o_vn
  io.o_vn_valid := my_adder_17.io.o_vn_valid
  io.o_adder := my_adder_17.io.o_adder

  val my_adder_18 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_18.io.i_valid := io.i_valid
  my_adder_18.io.i_data_bus := io.i_data_bus
  my_adder_18.io.i_add_en := io.i_add_en
  my_adder_18.io.i_cmd := io.i_cmd
  my_adder_18.io.i_sel := io.i_sel
  io.o_vn := my_adder_18.io.o_vn
  io.o_vn_valid := my_adder_18.io.o_vn_valid
  io.o_adder := my_adder_18.io.o_adder

  val my_adder_19 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 4, SEL_IN = 2))

  my_adder_19.io.i_valid := io.i_valid
  my_adder_19.io.i_data_bus := io.i_data_bus
  my_adder_19.io.i_add_en := io.i_add_en
  my_adder_19.io.i_cmd := io.i_cmd
  my_adder_19.io.i_sel := io.i_sel
  io.o_vn := my_adder_19.io.o_vn
  io.o_vn_valid := my_adder_19.io.o_vn_valid
  io.o_adder := my_adder_19.io.o_adder

  val my_adder_20 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_20.io.i_valid := io.i_valid
  my_adder_20.io.i_data_bus := io.i_data_bus
  my_adder_20.io.i_add_en := io.i_add_en
  my_adder_20.io.i_cmd := io.i_cmd
  my_adder_20.io.i_sel := io.i_sel
  io.o_vn := my_adder_20.io.o_vn
  io.o_vn_valid := my_adder_20.io.o_vn_valid
  io.o_adder := my_adder_20.io.o_adder

  val my_adder_21 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_21.io.i_valid := io.i_valid
  my_adder_21.io.i_data_bus := io.i_data_bus
  my_adder_21.io.i_add_en := io.i_add_en
  my_adder_21.io.i_cmd := io.i_cmd
  my_adder_21.io.i_sel := io.i_sel
  io.o_vn := my_adder_21.io.o_vn
  io.o_vn_valid := my_adder_21.io.o_vn_valid
  io.o_adder := my_adder_21.io.o_adder

  val my_adder_22 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_22.io.i_valid := io.i_valid
  my_adder_22.io.i_data_bus := io.i_data_bus
  my_adder_22.io.i_add_en := io.i_add_en
  my_adder_22.io.i_cmd := io.i_cmd
  my_adder_22.io.i_sel := io.i_sel
  io.o_vn := my_adder_22.io.o_vn
  io.o_vn_valid := my_adder_22.io.o_vn_valid
  io.o_adder := my_adder_22.io.o_adder

  val my_adder_23 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 6, SEL_IN = 4))

  my_adder_23.io.i_valid := io.i_valid
  my_adder_23.io.i_data_bus := io.i_data_bus
  my_adder_23.io.i_add_en := io.i_add_en
  my_adder_23.io.i_cmd := io.i_cmd
  my_adder_23.io.i_sel := io.i_sel
  io.o_vn := my_adder_23.io.o_vn
  io.o_vn_valid := my_adder_23.io.o_vn_valid
  io.o_adder := my_adder_23.io.o_adder

  val my_adder_24 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_24.io.i_valid := io.i_valid
  my_adder_24.io.i_data_bus := io.i_data_bus
  my_adder_24.io.i_add_en := io.i_add_en
  my_adder_24.io.i_cmd := io.i_cmd
  my_adder_24.io.i_sel := io.i_sel
  io.o_vn := my_adder_24.io.o_vn
  io.o_vn_valid := my_adder_24.io.o_vn_valid
  io.o_adder := my_adder_24.io.o_adder

  val my_adder_25 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_25.io.i_valid := io.i_valid
  my_adder_25.io.i_data_bus := io.i_data_bus
  my_adder_25.io.i_add_en := io.i_add_en
  my_adder_25.io.i_cmd := io.i_cmd
  my_adder_25.io.i_sel := io.i_sel
  io.o_vn := my_adder_25.io.o_vn
  io.o_vn_valid := my_adder_25.io.o_vn_valid
  io.o_adder := my_adder_25.io.o_adder

  val my_adder_26 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_26.io.i_valid := io.i_valid
  my_adder_26.io.i_data_bus := io.i_data_bus
  my_adder_26.io.i_add_en := io.i_add_en
  my_adder_26.io.i_cmd := io.i_cmd
  my_adder_26.io.i_sel := io.i_sel
  io.o_vn := my_adder_26.io.o_vn
  io.o_vn_valid := my_adder_26.io.o_vn_valid
  io.o_adder := my_adder_26.io.o_adder

  val my_adder_27 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 4, SEL_IN = 2))

  my_adder_27.io.i_valid := io.i_valid
  my_adder_27.io.i_data_bus := io.i_data_bus
  my_adder_27.io.i_add_en := io.i_add_en
  my_adder_27.io.i_cmd := io.i_cmd
  my_adder_27.io.i_sel := io.i_sel
  io.o_vn := my_adder_27.io.o_vn
  io.o_vn_valid := my_adder_27.io.o_vn_valid
  io.o_adder := my_adder_27.io.o_adder

  val my_adder_28 = Module(new adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_28.io.i_valid := io.i_valid
  my_adder_28.io.i_data_bus := io.i_data_bus
  my_adder_28.io.i_add_en := io.i_add_en
  my_adder_28.io.i_cmd := io.i_cmd
  my_adder_28.io.i_sel := io.i_sel
  io.o_vn := my_adder_28.io.o_vn
  io.o_vn_valid := my_adder_28.io.o_vn_valid
  io.o_adder := my_adder_28.io.o_adder

  val my_adder_29 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_29.io.i_valid := io.i_valid
  my_adder_29.io.i_data_bus := io.i_data_bus
  my_adder_29.io.i_add_en := io.i_add_en
  my_adder_29.io.i_cmd := io.i_cmd
  my_adder_29.io.i_sel := io.i_sel
  io.o_vn := my_adder_29.io.o_vn
  io.o_vn_valid := my_adder_29.io.o_vn_valid
  io.o_adder := my_adder_29.io.o_adder

  val my_adder_30 = Module(new edge_adder_switch(DATA_TYPE = UInt(32.W), NUM_IN = 2, SEL_IN = 2))

  my_adder_30.io.i_valid := io.i_valid
  my_adder_30.io.i_data_bus := io.i_data_bus
  my_adder_30.io.i_add_en := io.i_add_en
  my_adder_30.io.i_cmd := io.i_cmd
  my_adder_30.io.i_sel := io.i_sel
  io.o_vn := my_adder_30.io.o_vn
  io.o_vn_valid := my_adder_30.io.o_vn_valid
  io.o_adder := my_adder_30.io.o_adder

  when(io.rst === true.B) {
    r_final_add := 0.U
    r_final_add2 := 0.U
    r_final_sum := 0.U
  }.otherwise {
    r_final_add := io.i_add_en_bus(30)
    r_final_add2 := r_final_add
    r_final_sum := io.w_fan_lvl_4
  }


  
  when (io.rst === true.B) {
    o_data_bus := 0.U
  } .otherwise {
    o_data_bus(479, 0) := r_lvl_output_ff(4575, 4096)
    when (io.r_final_add2 === true.B) {
        o_data_bus(511, 480) := io.r_final_sum
    } .otherwise {
        o_data_bus(511, 480) := r_lvl_output_ff(4607, 4576)
    }
    o_data_bus(1023, 512) := r_lvl_output_ff(5119, 4608)
  }



  when (io.rst === true.B || io.r_valid(6) === false.B) {
    o_valid := 0.U
  } .otherwise {
    o_valid(14, 0) := r_lvl_output_ff_valid(143, 128)
    when (io.r_final_add2 === true.B) {
        o_valid(15) := true.B
    } .otherwise {
        o_valid(15) := r_lvl_output_ff_valid(143)
    }
    o_valid(31, 16) := r_lvl_output_ff_valid(159, 144)
  }




}






package magmasi.components

import chisel3._
import chisel3.util._

class FanCtrl(
  DATA_TYPE: Int = 32,
  NUM_PES: Int = 32,
  LOG2_PES: Int = 5
) extends Module {
  val io = IO(new Bundle {
    val i_vn = Input(UInt((NUM_PES * LOG2_PES).W))
    val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val o_reduction_add = Output(UInt((NUM_PES - 1).W))
    val o_reduction_cmd = Output(UInt((3 * (NUM_PES - 1)).W))
    val o_reduction_sel = Output(UInt(20.W))
    val o_reduction_valid = Output(Bool())
  })
  io.o_reduction_add := 2.U
  io.o_reduction_cmd := 2.U
  io.o_reduction_sel := 2.U
  io.o_reduction_valid := 1.B
  val clk = clock
  val rst = reset.asBool

  // Your logic here (not provided in the given Verilog code)
  // ...

  // Initialize Chisel registers based on Verilog registers
  val r_reduction_add = RegInit(VecInit(Seq.fill(NUM_PES - 1)(false.B)))
  val r_reduction_cmd = RegInit(VecInit(Seq.fill(NUM_PES - 1)(0.U(3.W))))
  val r_reduction_sel = RegInit(VecInit(Seq.fill(20)(false.B)))

  // Intermediate signals to hold the concatenated vectors
val r_add_lvl_0Reg = RegInit(VecInit(Seq.fill(16)(false.B)))
val r_add_lvl_1Reg = RegInit(VecInit(Seq.fill(32)(false.B)))
val r_add_lvl_2Reg = RegInit(VecInit(Seq.fill(48)(false.B)))
val r_add_lvl_3Reg = RegInit(VecInit(Seq.fill(64)(false.B)))
val r_add_lvl_4Reg = RegInit(VecInit(Seq.fill(5)(false.B)))

val r_cmd_lvl_0Reg = RegInit(VecInit(Seq.fill(48)(0.U(3.W))))
val r_cmd_lvl_1Reg = RegInit(VecInit(Seq.fill(48)(0.U(3.W))))
val r_cmd_lvl_2Reg = RegInit(VecInit(Seq.fill(48)(0.U(3.W))))
val r_cmd_lvl_3Reg = RegInit(VecInit(Seq.fill(48)(0.U(3.W))))
val r_cmd_lvl_4Reg = RegInit(VecInit(Seq.fill(6)(0.U(3.W))))

val r_sel_lvl_2Reg = RegInit(VecInit(Seq.fill(24)(false.B)))
val r_sel_lvl_3Reg = RegInit(VecInit(Seq.fill(64)(false.B)))
val r_sel_lvl_4Reg = RegInit(VecInit(Seq.fill(16)(false.B)))

val r_vn = RegInit(VecInit(Seq.fill(2)(0.U((2 * NUM_PES * LOG2_PES).W))))
  val w_vn = WireInit(0.U((NUM_PES * LOG2_PES).W))
val r_valid = RegInit(VecInit(Seq.fill(5)(false.B)))
for (i <- 0 until 2) {
  when(rst) {
    r_vn(i) := 0.U
  }.otherwise {
    if (i == 0) {
      r_vn(i) := io.i_vn
    } else {
      r_vn(i) := r_vn(i - 1)
    }
  }
}
w_vn := r_vn(1)
  for (x <- 0 until 16) {
    when(x.U === 0.U) {
      when(rst) {
        r_reduction_add(0) := false.B
        r_reduction_cmd(0) := 0.U
      }.otherwise {
        when(r_valid(1)) {
          when(w_vn((2.U * x.U + 0.U) * LOG2_PES.U) === w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_add(0) := true.B
          }.otherwise {
            r_reduction_add(0) := false.B
          }

          when(w_vn((2.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 2.U) * LOG2_PES.U) &&
            w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_cmd(0) := 5.U // 3'b101
          }.elsewhen(w_vn((2.U * x.U + 1.U) * LOG2_PES.U) === w_vn((2.U * x.U + 2.U) * LOG2_PES.U) &&
            w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_cmd(0) := 3.U // 3'b011
          }.otherwise {
            r_reduction_cmd(0) := 0.U // 3'b000
          }
        }.otherwise {
          r_reduction_add(0) := false.B
          r_reduction_cmd(0) := 0.U
        }
      }
    }
        when(x.U === 15.U) {
      when(rst) {
        r_reduction_add(15) := false.B
        r_reduction_cmd(15) := 0.U
      }.otherwise {
        when(r_valid(1)) {
          when(w_vn((2.U * x.U + 0.U) * LOG2_PES.U) === w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_add(15) := true.B
          }.otherwise {
            r_reduction_add(15) := false.B
          }

          when(w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U - 1.U) * LOG2_PES.U) &&
            w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_cmd(15) := 5.U // 3'b101
          }.elsewhen(w_vn((2.U * x.U + 0.U) * LOG2_PES.U) === w_vn((2.U * x.U - 1.U) * LOG2_PES.U) &&
            w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_cmd(15) := 4.U // 3'b100
          }.otherwise {
            r_reduction_cmd(15) := 0.U // 3'b000
          }
        }.otherwise {
          r_reduction_add(15) := false.B
          r_reduction_cmd(15) := 0.U
        }
      }
   }.otherwise {
      // Logic for other values of x (not 0 and 15)
      when(rst) {
        r_reduction_add(x) := false.B
        r_reduction_cmd((3.U * x.U + 2.U)) := 0.U
      }.otherwise {
        when(r_valid(1)) {
          when(w_vn((2.U * x.U + 0.U) * LOG2_PES.U) === w_vn((2.U * x.U + 1.U) * LOG2_PES.U)) {
            r_reduction_add(x) := true.B
          }.otherwise {
            r_reduction_add(x) := false.B
          }

          when((w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((2.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 2.U) * LOG2_PES.U)) &&
            (w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U))) {
            r_reduction_cmd((3.U * x.U + 2.U)) := 5.U // 3'b101
          }.elsewhen((w_vn((2.U * x.U + 0.U) * LOG2_PES.U) === w_vn((2.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((2.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 2.U) * LOG2_PES.U)) &&
            (w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U))) {
            r_reduction_cmd((3.U * x.U + 2.U)) := 4.U // 3'b100
          }.elsewhen((w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((2.U * x.U + 1.U) * LOG2_PES.U) === w_vn((2.U * x.U + 2.U) * LOG2_PES.U)) &&
            (w_vn((2.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x.U + 1.U) * LOG2_PES.U))) {
            r_reduction_cmd((3.U * x.U + 2.U)) := 3.U // 3'b011
          }.otherwise {
            r_reduction_cmd((3.U * x.U + 2.U)) := 1.U // 3'b001
          }
        }.otherwise {
          r_reduction_add(x) := false.B
          r_reduction_cmd((3.U * x.U + 2.U)) := 0.U
        }
      }
    }
  }
  for (x <- 0 until 8) {
    when(x.U === 0.U) {
      // Logic for x = 0
      when(rst) {
        r_reduction_add(16.U + x.U) := false.B
        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U
        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 1.U) := 0.U
        r_reduction_cmd(3.U * 16.U + 3.U * x.U) := 0.U
      }.otherwise {
        when(r_valid(1.U)) {
          when(w_vn((4.U * x.U + 1.U) * LOG2_PES.U) === w_vn((4.U * x.U + 2.U) * LOG2_PES.U)) {
            r_reduction_add(16.U + x.U) := true.B
          }.otherwise {
            r_reduction_add(16.U + x.U) := false.B
          }

          when((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 5.U // 3'b101
          }.elsewhen((w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 4.U // 3'b100
          }.elsewhen((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 3.U // 3'b011
          }.otherwise {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U // 3'b000
          }
        }.otherwise {
          r_reduction_add(16.U + x.U) := false.B
          r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U
          r_reduction_cmd(3.U * 16.U + 3.U * x.U + 1.U) := 0.U
          r_reduction_cmd(3.U * 16.U + 3.U * x.U) := 0.U
        }
      }
    }.elsewhen(x.U === 7.U) {
      // Logic for x = 7
      when(rst) {
        r_reduction_add(16.U + x.U) := false.B
        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U
        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 1.U) := 0.U
        r_reduction_cmd(3.U * 16.U + 3.U * x.U) := 0.U
      }.otherwise {
        when(r_valid(1.U)) {
          when(w_vn((4.U * x.U + 1.U) * LOG2_PES.U) === w_vn((4.U * x.U + 2.U) * LOG2_PES.U)) {
            r_reduction_add(16.U + x.U) := true.B
          }.otherwise {
            r_reduction_add(16.U + x.U) := false.B
          }

          when((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 5.U // 3'b101
          }.elsewhen((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 3.U // 3'b011
          }.elsewhen((w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 4.U // 3'b100
          }.otherwise {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U // 3'b000
          }
        }.otherwise {
          r_reduction_add(16.U + x.U) := false.B
          r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U
          r_reduction_cmd(3.U * 16.U + 3.U * x.U + 1.U) := 0.U
          r_reduction_cmd(3.U * 16.U + 3.U * x.U) := 0.U
        }
      }
  }.otherwise {
      // Logic for other values of x (1 to 6)
      when(rst) {
        r_reduction_add(16.U + x.U) := false.B
        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U
        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 1.U) := 0.U
        r_reduction_cmd(3.U * 16.U + 3.U * x.U) := 0.U
      }.otherwise {
        when(r_valid(1.U)) {
          when(w_vn((4.U * x.U + 1.U) * LOG2_PES.U) === w_vn((4.U * x.U + 2.U) * LOG2_PES.U)) {
            r_reduction_add(16.U + x.U) := true.B
          }.otherwise {
            r_reduction_add(16.U + x.U) := false.B
          }

          when((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 5.U // 3'b101
          }.elsewhen((w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 4.U // 3'b100
          }.elsewhen((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x.U - 1.U) * LOG2_PES.U)) &&
            (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 3.U // 3'b011
          }.otherwise {
            r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U // 3'b000
          }
        }.otherwise {
          r_reduction_add(16.U + x.U) := false.B
          r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U) := 0.U
          r_reduction_cmd(3.U * 16.U + 3.U * x.U + 1.U) := 0.U
          r_reduction_cmd(3.U * 16.U + 3.U * x.U) := 0.U
        }
      }
    }
  }
  for (x <- 0 until 4) {
  when (x.U === 0.U) {
    when (rst === true.B) {
      r_reduction_add(x) := false.B
      r_reduction_cmd(3.U * x.U + 2.U) := 0.U
      r_reduction_cmd(3.U * x.U + 1.U) := 0.U
      r_reduction_cmd(3.U * x.U) := 0.U
    }.otherwise {
      // generate cmd logic
      when (r_valid(1.U) === true.B) {
        when (w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) {
          r_reduction_add(x) := true.B // add enable
        }.otherwise {
          r_reduction_add(x) := false.B
        }

        when ((w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === w_vn((8.U * x.U + 2.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 8.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 3.U) * LOG2_PES.U))) {
          r_reduction_cmd(3.U * x.U + 2.U) := 5.U // both vn done
        }.elsewhen ((w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 8.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 3.U) * LOG2_PES.U))) {
          r_reduction_cmd(3.U * x.U + 2.U) := 4.U // right vn done
        }.elsewhen ((w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === w_vn((8.U * x.U + 2.U) * LOG2_PES.U)) &&
          (w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 4.U) * LOG2_PES.U))) {
          r_reduction_cmd(3.U * x.U + 2.U) := 3.U // left vn done
        }.otherwise {
          r_reduction_cmd(3.U * x.U + 2.U) := 0.U // nothing
        }
      }.otherwise {
        r_reduction_add(x) := false.B
        r_reduction_cmd(3.U * x.U + 2.U) := 0.U // nothing
      }
      when (r_valid(1.U) === true.B) {
      when (w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 1.U) * LOG2_PES.U)) {
      r_reduction_sel((x * 2).U + 0.U) := 0.U
    }.otherwise {
      r_reduction_sel((x * 2).U + 0.U) := 1.U
    }

    // generate right select logic
    when (w_vn((8.U * x.U + 4.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) {
      r_reduction_sel((x * 2).U + 1.U) := 1.U
    }.otherwise {
      r_reduction_sel((x * 2).U + 1.U) := 0.U
    }
  }.otherwise {
    r_reduction_sel((x * 2).U + 0.U) := 0.U
    r_reduction_sel((x * 2).U + 1.U) := 0.U
  }
}

    when (x.U === 3.U) {
    val x_offset = x.U * 8.U * LOG2_PES.U

    // Reset logic
    when (rst === 1.B) {
      for (i <- 0 until (NUM_PES - 1)) {
        r_reduction_add(i) := false.B
        r_reduction_cmd(i) := 0.U(3.W)
      }
      for (i <- 0 until 20) {
        r_reduction_sel(i) := false.B
      }
    }.otherwise {
      val vn1 = w_vn(x_offset + 1.U * LOG2_PES.U)
      val vn2 = w_vn(x_offset + 2.U * LOG2_PES.U)
      val vn3 = w_vn(x_offset + 3.U * LOG2_PES.U)
      val vn4 = w_vn(x_offset + 4.U * LOG2_PES.U)
      val vn5 = w_vn(x_offset + 5.U * LOG2_PES.U)
      val vn6 = w_vn(x_offset + 6.U * LOG2_PES.U)

      // generate cmd logic
      when (r_valid(1.U)) {
        r_reduction_add(x) := vn1 === vn4 // add enable

        r_reduction_cmd(x) := Mux(vn1 === vn2 && vn5 === vn6 && vn3 =/= vn6 && vn2 =/= vn4 && vn5 =/= vn3, "b101".U, // both vn done
                             Mux(vn1 === vn2 && vn1 =/= vn3 && vn4 =/= vn2, "b011".U, // left vn done
                             Mux(vn5 === vn6 && vn5 =/= vn3, "b100".U, // right vn done
                             "b000".U))) // nothing

        // generate left select logic
        r_reduction_sel((x * 2).U + 0.U) := vn3 =/= vn1

        // generate right select logic
        r_reduction_sel((x * 2).U + 1.U) := vn4 === vn6
      }.otherwise {
        r_reduction_add(x) := false.B
        r_reduction_cmd(x) := "b000".U // nothing
        for (i <- 0 until 20) {
          r_reduction_sel(i) := false.B
        }
      }
    }
  }.otherwise{
    val x_offset = x.U * 8.U * LOG2_PES.U

    // Reset logic
    when (rst === 1.B) {
      r_reduction_add.foreach(_ := false.B)
      r_reduction_cmd.foreach(_ := 0.U(3.W))
      r_reduction_sel.foreach(_ := false.B)
    }.otherwise {
      val vn1 = w_vn(x_offset + 1.U * LOG2_PES.U)
      val vn2 = w_vn(x_offset + 2.U * LOG2_PES.U)
      val vn3 = w_vn(x_offset + 3.U * LOG2_PES.U)
      val vn4 = w_vn(x_offset + 4.U * LOG2_PES.U)
      val vn5 = w_vn(x_offset + 5.U * LOG2_PES.U)
      val vn6 = w_vn(x_offset + 6.U * LOG2_PES.U)

      // generate cmd logic
      when (r_valid(1.U)) {
        r_reduction_add(x) := vn1 === vn4 // add enable

        r_reduction_cmd(x) := Mux(vn1 === vn2 && vn5 === vn6 && vn3 =/= vn6 && vn2 =/= vn4 && vn5 =/= vn3, "b101".U, // both vn done
          Mux(vn5 === vn6 && vn5 =/= vn3, "b100".U, // right vn done
            Mux(vn1 === vn2 && vn1 =/= vn3 && vn4 =/= vn2, "b011".U, // left vn done
              "b000".U))) // nothing

        // generate left select logic
        r_reduction_sel((x * 2).U + 0.U) := vn3 =/= vn1

        // generate right select logic
        r_reduction_sel((x * 2).U + 1.U) := vn4 === vn6
      }.otherwise {
        r_reduction_add(x) := false.B
        r_reduction_cmd(x) := "b000".U // nothing
        r_reduction_sel((x * 2).U + 0.U) := false.B
        r_reduction_sel((x * 2).U + 1.U) := false.B
      }
    }
  }
  }}
  for (x <- 0 until 2) {
    when ( x.U === 0.U) {
    when (r_valid(1.U) === true.B) {
      val x_offset = x * 16

      // generate add enable logic
      when (w_vn((x_offset + 7).U) === w_vn((x_offset + 8).U)) {
        r_reduction_add((x + 28).U) := true.B
      }.otherwise {
        r_reduction_add((x + 28).U) := false.B
      }

      // generate cmd logic
      val vn1 = w_vn((x_offset + 3).U)
      val vn2 = w_vn((x_offset + 4).U)
      val vn3 = w_vn((x_offset + 11).U)
      val vn4 = w_vn((x_offset + 12).U)
      val vn5 = w_vn((x_offset + 16).U)

      when (
        vn1 === vn2 && vn5 === vn4 && vn3 =/= vn4 && vn2 =/= vn4 && vn5 =/= vn3
      ) {
        r_reduction_cmd((x + 28).U) := "b101".U // both vn done
      }.elsewhen (
        vn5 === vn4 && vn3 =/= vn4 && vn5 =/= vn3
      ) {
        r_reduction_cmd((x + 28).U) := "b100".U // right vn done
      }.elsewhen (
        vn1 === vn2 && vn4 =/= vn2
      ) {
        r_reduction_cmd((x + 28).U) := "b011".U // left vn done
      }.otherwise {
        r_reduction_cmd((x + 28).U) := "b000".U // nothing
      }

      // generate left select logic
      when (vn1 === vn3) {
        r_reduction_sel((x * 4).U + 8.U) := "b00".U
      }.elsewhen (vn1 === vn5) {
        r_reduction_sel((x * 4).U + 8.U) := "b01".U
      }.otherwise {
        r_reduction_sel((x * 4).U + 8.U) := "b10".U
      }

      // generate right select logic
      when (vn2 === vn4) {
        r_reduction_sel((x * 4).U + 10.U) := "b10".U
      }.elsewhen (vn2 === vn5) {
        r_reduction_sel((x * 4).U + 10.U) := "b01".U
      }.otherwise {
        r_reduction_sel((x * 4).U + 10.U) := "b00".U
      }
    }.otherwise {
      val x_offset = x * 16
      r_reduction_add((x + 28).U) := false.B
      r_reduction_cmd((x + 28).U) := "b000".U // nothing
      r_reduction_sel((x * 4).U + 8.U) := "b0000".U
    }
  }.elsewhen( x.U === 1.U) {
    val x_offset = x * 16

    when (r_valid(1.U) === true.B) {
      // generate add enable logic
      when (w_vn((x_offset + 7).U) === w_vn((x_offset + 8).U)) {
        r_reduction_add((x + 28).U) := true.B
      }.otherwise {
        r_reduction_add((x + 28).U) := false.B
      }

      // generate cmd logic
      val vn1 = w_vn((x_offset + 3).U)
      val vn2 = w_vn((x_offset + 4).U)
      val vn3 = w_vn((x_offset + 11).U)
      val vn4 = w_vn((x_offset + 12).U)
      val vn5 = w_vn((x_offset + 16).U)

      when (
        vn1 === vn2 && vn5 === vn4 && vn3 =/= vn4 && vn2 =/= vn4 && vn5 =/= vn3
      ) {
        r_reduction_cmd((x + 28).U) := "b101".U // both vn done
      }.elsewhen (
        vn5 === vn4 && vn3 =/= vn4 && vn5 =/= vn3
      ) {
        r_reduction_cmd((x + 28).U) := "b100".U // right vn done
      }.elsewhen (
        vn1 === vn2 && vn4 =/= vn2
      ) {
        r_reduction_cmd((x + 28).U) := "b011".U // left vn done
      }.otherwise {
        r_reduction_cmd((x + 28).U) := "b000".U // nothing
      }

      // generate left select logic
      when (vn1 === vn3) {
        r_reduction_sel((x * 4).U + 8.U) := "b00".U
      }.elsewhen (vn1 === vn5) {
        r_reduction_sel((x * 4).U + 8.U) := "b01".U
      }.otherwise {
        r_reduction_sel((x * 4).U + 8.U) := "b10".U
      }

      // generate right select logic
      when (vn2 === vn4) {
        r_reduction_sel((x * 4).U + 10.U) := "b10".U
      }.elsewhen (vn2 === vn5) {
        r_reduction_sel((x * 4).U + 10.U) := "b01".U
      }.otherwise {
        r_reduction_sel((x * 4).U + 10.U) := "b00".U
      }

    }.otherwise {
      r_reduction_add((x + 28).U) := false.B
      r_reduction_cmd((x + 28).U) := "b000".U // nothing
      r_reduction_sel((x * 4).U + 8.U) := "b0000".U
    }
  }.otherwise {
    val x_offset = x * 16
      // Edge case (x != 0)
     when(r_valid(1.U) === 1.B) {
        // generate add enable logic
        when(w_vn((x_offset + 7).U) === w_vn((x_offset + 8).U)) {
          r_reduction_add((x + 28).U) := true.B
        }.otherwise {
          r_reduction_add((x + 28).U) := false.B
        }

        // generate cmd logic
when(w_vn((x_offset + 3).U) === w_vn((x_offset + 4).U) &&
     w_vn((x_offset + 11).U) === w_vn((x_offset + 12).U) &&
     //w_vn((x_offset + 3).U) =/= w_vn((x_offset - 1).U) &&
     w_vn((x_offset + 16).U) =/= w_vn((x_offset + 12).U) &&
     w_vn((x_offset + 4).U) =/= w_vn((x_offset + 8).U) &&
     w_vn((x_offset + 11).U) =/= w_vn((x_offset + 7).U)) {
  r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := true.B
  r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
  r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := true.B
}.elsewhen(w_vn((x_offset + 11).U) === w_vn((x_offset + 12).U) &&
          w_vn((x_offset + 16).U) =/= w_vn((x_offset + 12).U) &&
          w_vn((x_offset + 11).U) =/= w_vn((x_offset + 7).U)) {
  r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := true.B
  r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
  r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := false.B
}.elsewhen(w_vn((x_offset + 3).U) === w_vn((x_offset + 4).U) &&
          //w_vn((x_offset + 3).U) =/= w_vn((x_offset - 1).U) &&
          w_vn((x_offset + 8).U) =/= w_vn((x_offset + 4).U)) {
  r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := false.B
  r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := true.B
  r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := true.B
}.otherwise {
  r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := false.B
  r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
  r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := false.B
}

        // generate left select logic
        when(w_vn((x_offset + 7).U) === w_vn((x_offset + 3).U)) {
          r_reduction_sel(4.U * x.U + 10.U) := false.B
          r_reduction_sel(4.U * x.U + 9.U) := false.B
        }.elsewhen(w_vn((x_offset + 7).U) === w_vn((x_offset + 5).U)) {
          r_reduction_sel(4.U * x.U + 10.U) := false.B
          r_reduction_sel(4.U * x.U + 9.U) := true.B
        }.otherwise {
          r_reduction_sel(4.U * x.U + 10.U) := true.B
          r_reduction_sel(4.U * x.U + 9.U) := false.B
        }

        // generate right select logic
        when(w_vn((x_offset + 8).U) === w_vn((x_offset + 12).U)) {
          r_reduction_sel(4.U * x.U + 11.U) := true.B
          r_reduction_sel(4.U * x.U + 8.U) := true.B
        }.elsewhen(w_vn((x_offset + 8).U) === w_vn((x_offset + 10).U)) {
          r_reduction_sel(4.U * x.U + 11.U) := false.B
          r_reduction_sel(4.U * x.U + 8.U) := true.B
        }.otherwise {
          r_reduction_sel(4.U * x.U + 11.U) := false.B
          r_reduction_sel(4.U * x.U + 8.U) := false.B
        }
      }.otherwise {
        // When r_valid is not 1 (false)
        r_reduction_add((x + 28).U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := false.B
        r_reduction_sel(4.U * x.U + 10.U) := false.B
        r_reduction_sel(4.U * x.U + 9.U) := false.B
        r_reduction_sel(4.U * x.U + 11.U) := false.B
        r_reduction_sel(4.U * x.U + 8.U) := false.B
      }
  }
  }
  for (x <- 0 until 1) {
  when (x.U === 0.U) {
    when (r_valid(1)) {
      when (w_vn((16 * x + 7).U + LOG2_PES.U) === w_vn((16 * x + 8).U + LOG2_PES.U)) {
        r_reduction_add(28.U + x.U) := true.B
      } .otherwise {
        r_reduction_add(28.U + x.U) := false.B
      }

      when (w_vn((16 * x + 3).U + LOG2_PES.U) === w_vn((16 * x + 4).U + LOG2_PES.U) &&
            w_vn((16 * x + 11).U + LOG2_PES.U) === w_vn((16 * x + 12).U + LOG2_PES.U) &&
           // w_vn((16 * x + 3).U + LOG2_PES.U) =/= w_vn((16 * x - 1).U + LOG2_PES.U) &&
            w_vn((16 * x + 16).U + LOG2_PES.U) =/= w_vn((16 * x + 12).U + LOG2_PES.U) &&
            w_vn((16 * x + 4).U + LOG2_PES.U) =/= w_vn((16 * x + 8).U + LOG2_PES.U) &&
            w_vn((16 * x + 11).U + LOG2_PES.U) =/= w_vn((16 * x + 7).U + LOG2_PES.U)) {
        r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := true.B
        r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := true.B
      } .elsewhen (w_vn((16 * x + 11).U + LOG2_PES.U) === w_vn((16 * x + 12).U + LOG2_PES.U) &&
                   w_vn((16 * x + 16).U + LOG2_PES.U) =/= w_vn((16 * x + 12).U + LOG2_PES.U) &&
                   w_vn((16 * x + 11).U + LOG2_PES.U) =/= w_vn((16 * x + 7).U + LOG2_PES.U)) {
        r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := true.B
        r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := false.B
      } .elsewhen (w_vn((16 * x + 3).U + LOG2_PES.U) === w_vn((16 * x + 4).U + LOG2_PES.U) &&
                   //w_vn((16 * x + 3).U + LOG2_PES.U) =/= w_vn((16 * x - 1).U + LOG2_PES.U) &&
                   w_vn((16 * x + 8).U + LOG2_PES.U) =/= w_vn((16 * x + 4).U + LOG2_PES.U)) {
        r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := true.B
        r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := true.B
      } .otherwise {
        r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
        r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := false.B
      }
    } .otherwise {
      r_reduction_add(28.U + x.U) := false.B
      r_reduction_cmd(3.U * (28.U + x.U) + 2.U) := false.B
      r_reduction_cmd(3.U * (28.U + x.U) + 1.U) := false.B
      r_reduction_cmd(3.U * (28.U + x.U) + 0.U) := false.B
    }

    when (r_valid(1)) {
      when (w_vn((16 * x + 15).U + LOG2_PES.U) === w_vn((16 * x + 7).U + LOG2_PES.U)) {
        r_reduction_sel((x * 4).U + 16.U + 1.U) := "b00".U
      } .elsewhen (w_vn((16 * x + 15).U + LOG2_PES.U) === w_vn((16 * x + 11).U + LOG2_PES.U)) {
        r_reduction_sel((x * 4).U + 16.U + 1.U) := "b01".U
      } .elsewhen (w_vn((16 * x + 15).U + LOG2_PES.U) === w_vn((16 * x + 13).U + LOG2_PES.U)) {
        r_reduction_sel((x * 4).U + 16.U + 1.U) := "b10".U
      } .otherwise {
        r_reduction_sel((x * 4).U + 16.U + 1.U) := "b11".U
      }
    } .otherwise {
      r_reduction_sel((x * 4).U + 16.U + 3.U) := "b0000".U
    }

    when (r_valid(1)) {
      when (w_vn((16 * x + 16).U + LOG2_PES.U) === w_vn((16 * x + 24).U + LOG2_PES.U)) {
        r_reduction_sel((x * 4).U + 16.U + 0.U) := "b11".U
      } .elsewhen (w_vn((16 * x + 16).U + LOG2_PES.U) === w_vn((16 * x + 20).U + LOG2_PES.U)) {
        r_reduction_sel((x * 4).U + 16.U + 0.U) := "b10".U
      } .elsewhen (w_vn((16 * x + 16).U + LOG2_PES.U) === w_vn((16 * x + 18).U + LOG2_PES.U)) {
        r_reduction_sel((x * 4).U + 16.U + 0.U) := "b01".U
      } .otherwise {
        r_reduction_sel((x * 4).U + 16.U + 0.U) := "b00".U
      }
    } .otherwise {
      r_reduction_sel((x * 4).U + 16.U + 2.U) := "b0000".U
    }
  }
}
for (i <- 0 until 16) {
  r_add_lvl_0Reg(i) := r_reduction_add(i)
}

// Assigning values for r_add_lvl_1Reg
for (i <- 0 until 8) {
  r_add_lvl_1Reg(i) := r_reduction_add(i + 16)
  r_add_lvl_1Reg(i + 8) := r_reduction_add(i + 16)
}

// Assigning values for r_add_lvl_2Reg
for (i <- 0 until 4) {
  r_add_lvl_2Reg(i) := r_reduction_add(i + 24)
  r_add_lvl_2Reg(i + 4) := r_reduction_add(i + 24)
  r_add_lvl_2Reg(i + 8) := r_reduction_add(i + 24)
  r_add_lvl_2Reg(i + 12) := r_reduction_add(i + 24)
}

// Continue similarly for r_add_lvl_3Reg and r_add_lvl_4Reg

// Assigning values for r_cmd_lvl_0Reg
for (i <- 0 until 31) {
  r_cmd_lvl_0Reg(i) := r_reduction_cmd(i)
}

// Continue similarly for r_cmd_lvl_1Reg, r_cmd_lvl_2Reg, r_cmd_lvl_3Reg, and r_cmd_lvl_4Reg

// Assigning values for r_sel_lvl_2Reg
for (i <- 0 until 8) {
  r_sel_lvl_2Reg(i) := r_reduction_sel(i)
  r_sel_lvl_2Reg(i + 8) := r_reduction_sel(i)
  r_sel_lvl_2Reg(i + 16) := r_reduction_sel(i)
}

// Assigning values for r_sel_lvl_3Reg
for (i <- 0 until 8) {
  r_sel_lvl_3Reg(i) := r_reduction_sel(i + 8)
  r_sel_lvl_3Reg(i + 8) := r_reduction_sel(i + 8)
  r_sel_lvl_3Reg(i + 16) := r_reduction_sel(i + 8)
  r_sel_lvl_3Reg(i + 24) := r_reduction_sel(i + 8)
}

// Assigning values for r_sel_lvl_4Reg
for (i <- 0 until 4) {
  r_sel_lvl_4Reg(i) := r_reduction_sel(i + 16)
  r_sel_lvl_4Reg(i + 4) := r_reduction_sel(i + 16)
  r_sel_lvl_4Reg(i + 8) := r_reduction_sel(i + 16)
  r_sel_lvl_4Reg(i + 12) := r_reduction_sel(i + 16)
}

when (io.i_stationary === 0.U && io.i_data_valid === 1.U) {
  r_valid(0) := 1.U
} .otherwise {
  r_valid(0) := 0.U
}

for (i <- 0 until 4) {
  when (rst === true.B) {
    r_valid(i + 1) := false.B
  } .otherwise {
    r_valid(i + 1) := r_valid(i)
  }
}

io.o_reduction_valid := r_valid(3)

val o_reduction_add = Cat(
  r_add_lvl_4Reg(4),
  r_add_lvl_3Reg(7),
  r_add_lvl_3Reg(6),
  r_add_lvl_2Reg(11),
  r_add_lvl_2Reg(10),
  r_add_lvl_2Reg(9),
  r_add_lvl_2Reg(8),
  r_add_lvl_1Reg(15),
  r_add_lvl_1Reg(14),
  r_add_lvl_1Reg(13),
  r_add_lvl_1Reg(12),
  r_add_lvl_1Reg(11),
  r_add_lvl_1Reg(10),
  r_add_lvl_1Reg(9),
  r_add_lvl_1Reg(8),
  r_add_lvl_0Reg(15),
  r_add_lvl_0Reg(14),
  r_add_lvl_0Reg(13),
  r_add_lvl_0Reg(12),
  r_add_lvl_0Reg(11),
  r_add_lvl_0Reg(10),
  r_add_lvl_0Reg(9),
  r_add_lvl_0Reg(8),
  r_add_lvl_0Reg(7),
  r_add_lvl_0Reg(6),
  r_add_lvl_0Reg(5),
  r_add_lvl_0Reg(4),
  r_add_lvl_0Reg(3),
  r_add_lvl_0Reg(2),
  r_add_lvl_0Reg(1),
  r_add_lvl_0Reg(0)
)
val o_reduction_cmd = Cat(
  r_cmd_lvl_4Reg(5),   // Index 5, max index for r_cmd_lvl_4Reg
  r_cmd_lvl_4Reg(4),   // Index 4
  r_cmd_lvl_4Reg(3),   // Index 3
  r_cmd_lvl_3Reg(23),  // Index 23, max index for r_cmd_lvl_3Reg
  r_cmd_lvl_3Reg(22),  // Index 22
  r_cmd_lvl_3Reg(21),  // Index 21
  r_cmd_lvl_3Reg(20),  // Index 20
  r_cmd_lvl_3Reg(19),  // Index 19
  r_cmd_lvl_3Reg(18),  // Index 18
  r_cmd_lvl_2Reg(35),  // Index 35, max index for r_cmd_lvl_2Reg
  r_cmd_lvl_2Reg(34),  // Index 34
  r_cmd_lvl_2Reg(33),  // Index 33
  r_cmd_lvl_2Reg(32),  // Index 32
  r_cmd_lvl_2Reg(31),  // Index 31
  r_cmd_lvl_2Reg(30),  // Index 30
  r_cmd_lvl_2Reg(29),  // Index 29
  r_cmd_lvl_2Reg(28),  // Index 28
  r_cmd_lvl_2Reg(27),  // Index 27
  r_cmd_lvl_2Reg(26),  // Index 26
  r_cmd_lvl_2Reg(25),  // Index 25
  r_cmd_lvl_2Reg(24),  // Index 24
  r_cmd_lvl_1Reg(47),  // Index 47, max index for r_cmd_lvl_1Reg
  r_cmd_lvl_1Reg(46),  // Index 46
  r_cmd_lvl_1Reg(45),  // Index 45
  r_cmd_lvl_1Reg(44),  // Index 44
  r_cmd_lvl_1Reg(43),  // Index 43
  r_cmd_lvl_1Reg(42),  // Index 42
  r_cmd_lvl_1Reg(41),  // Index 41
  r_cmd_lvl_1Reg(40),  // Index 40
  r_cmd_lvl_1Reg(39),  // Index 39
  r_cmd_lvl_1Reg(38),  // Index 38
  r_cmd_lvl_1Reg(37),  // Index 37
  r_cmd_lvl_1Reg(36),  // Index 36
  r_cmd_lvl_1Reg(35),  // Index 35
  r_cmd_lvl_1Reg(34),  // Index 34
  r_cmd_lvl_1Reg(33),  // Index 33
  r_cmd_lvl_1Reg(32),  // Index 32
  r_cmd_lvl_1Reg(31),  // Index 31
  r_cmd_lvl_1Reg(30),  // Index 30
  r_cmd_lvl_1Reg(29),  // Index 29
  r_cmd_lvl_1Reg(28),  // Index 28
  r_cmd_lvl_1Reg(27),  // Index 27
  r_cmd_lvl_1Reg(26),  // Index 26
  r_cmd_lvl_1Reg(25),  // Index 25
  r_cmd_lvl_1Reg(24),  // Index 24
  r_cmd_lvl_1Reg(23),  // Index 23
  r_cmd_lvl_1Reg(22),  // Index 22
  r_cmd_lvl_1Reg(21),  // Index 21
  r_cmd_lvl_1Reg(20),  // Index 20
  r_cmd_lvl_1Reg(19),  // Index 19
  r_cmd_lvl_1Reg(18),  // Index 18
  r_cmd_lvl_1Reg(17),  // Index 17
  r_cmd_lvl_1Reg(16),  // Index 16
  r_cmd_lvl_1Reg(15),  // Index 15
  r_cmd_lvl_1Reg(14),  // Index 14
  r_cmd_lvl_1Reg(13),  // Index 13
  r_cmd_lvl_1Reg(12),  // Index 12
  r_cmd_lvl_1Reg(11),  // Index 11
  r_cmd_lvl_1Reg(10),  // Index 10
  r_cmd_lvl_1Reg(9),   // Index 9
  r_cmd_lvl_1Reg(8),   // Index 8
  r_cmd_lvl_0Reg(47),  // Index 47, max index for r_cmd_lvl_0Reg
  r_cmd_lvl_0Reg(46),  // Index 46
  r_cmd_lvl_0Reg(45),  // Index 45
  r_cmd_lvl_0Reg(44),  // Index 44
  r_cmd_lvl_0Reg(43),  // Index 43
  r_cmd_lvl_0Reg(42),  // Index 42
  r_cmd_lvl_0Reg(41),  // Index 41
  r_cmd_lvl_0Reg(40),  // Index 40
  r_cmd_lvl_0Reg(39),  // Index 39
  r_cmd_lvl_0Reg(38),  // Index 38
  r_cmd_lvl_0Reg(37),  // Index 37
  r_cmd_lvl_0Reg(36),  // Index 36
  r_cmd_lvl_0Reg(35),  // Index 35
  r_cmd_lvl_0Reg(34),  // Index 34
  r_cmd_lvl_0Reg(33),  // Index 33
  r_cmd_lvl_0Reg(32),  // Index 32
  r_cmd_lvl_0Reg(31),  // Index 31
  r_cmd_lvl_0Reg(30),  // Index 30
  r_cmd_lvl_0Reg(29),  // Index 29
  r_cmd_lvl_0Reg(28),  // Index 28
  r_cmd_lvl_0Reg(27),  // Index 27
  r_cmd_lvl_0Reg(26),  // Index 26
  r_cmd_lvl_0Reg(25),  // Index 25
  r_cmd_lvl_0Reg(24),  // Index 24
  r_cmd_lvl_0Reg(23),  // Index 23
  r_cmd_lvl_0Reg(22),  // Index 22
  r_cmd_lvl_0Reg(21),  // Index 21
  r_cmd_lvl_0Reg(20),  // Index 20
  r_cmd_lvl_0Reg(19),  // Index
)


      io.o_reduction_sel := Cat(
    r_sel_lvl_2Reg(7),
    r_sel_lvl_2Reg(6),
    r_sel_lvl_2Reg(5),
    r_sel_lvl_2Reg(4),
    r_sel_lvl_2Reg(3),
    r_sel_lvl_2Reg(2),
    r_sel_lvl_2Reg(1),
    r_sel_lvl_2Reg(0)
  )
}
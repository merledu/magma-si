package magmasi.components

import chisel3._
import chisel3.util._

class FanCtrl(
  DATA_TYPE: Int = 32,
  NUM_PES: Int = 32,
  LOG2_PES: Int = 5
) extends Module {
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val rst = Input(Bool())
    val i_vn = Input(UInt((NUM_PES * LOG2_PES).W))
    val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val o_reduction_add = Output(UInt((NUM_PES - 1).W))
    val o_reduction_cmd = Output(UInt((3 * (NUM_PES - 1)).W))
    val o_reduction_sel = Output(UInt(20.W))
    val o_reduction_valid = Output(Bool())
  })

  // Your logic here (not provided in the given Verilog code)
  // ...

  // Initialize Chisel registers based on Verilog registers
  val r_reduction_add = RegInit(0.U((NUM_PES - 1).W))
  val r_reduction_cmd = RegInit(0.U((3 * (NUM_PES - 1)).W))
  val r_reduction_sel = RegInit(0.U(20.W))

  val r_add_lvl_0 = RegInit(0.U(16.W))
  val r_add_lvl_1 = RegInit(0.U(16.W))
  val r_add_lvl_2 = RegInit(0.U(12.W))
  val r_add_lvl_3 = RegInit(0.U(8.W))
  val r_add_lvl_4 = RegInit(0.U(5.W))

  val r_cmd_lvl_0 = RegInit(0.U(48.W))
  val r_cmd_lvl_1 = RegInit(0.U(48.W))
  val r_cmd_lvl_2 = RegInit(0.U(36.W))
  val r_cmd_lvl_3 = RegInit(0.U(24.W))
  val r_cmd_lvl_4 = RegInit(0.U(15.W))

  val r_sel_lvl_2 = RegInit(0.U(24.W))
  val r_sel_lvl_3 = RegInit(0.U(32.W))
  val r_sel_lvl_4 = RegInit(0.U(20.W))

  val r_vn = RegInit(0.U((2 * NUM_PES * LOG2_PES).W))
  val w_vn = Wire(UInt((NUM_PES * LOG2_PES).W))
  r_vn := w_vn

  val r_valid = RegInit(0.U(5.W))

  for (i <- 0 until 2) {
    if (i == 0) {
      // First flip-flop (pass-through)
      val pass_ff = RegInit(0.U((NUM_PES * LOG2_PES).W))
      when(rst === true.B) {
        pass_ff := 0.U
      } .otherwise {
        pass_ff := io.i_vn
      }
    } else {
      // Subsequent flip-flops (flop)
      val flop_ff = RegInit(0.U((NUM_PES * LOG2_PES).W))
      when(rst === true.B) {
        flop_ff := 0.U
      } .otherwise {
        flop_ff := vn_ff(i - 1)
      }
    }
  }

  val w_vn = Wire(UInt((NUM_PES * LOG2_PES).W))
  w_vn := vn_ff(1)

    for (x <- 0 until 16) {
        when (io.x === 0.U) {
            when (io.rst) {
                io.r_reduction_add(0) := false.B
                io.r_reduction_cmd(0) := 0.U
            }.otherwise {
                if (io.r_valid(1) === 1.U) {
                    when (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_add(0) := true.B
                    }.otherwise {
                        io.r_reduction_add(0) := false.B
                    }

                    when (io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 2.U) * LOG2_PES.U) &&
                        io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_cmd(0) := 5.U // 3'b101
                    }.elsewhen (io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U) === io.w_vn((2.U * io.x + 2.U) * LOG2_PES.U) &&
                        io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_cmd(0) := 3.U // 3'b011
                    }.otherwise {
                        io.r_reduction_cmd(0) := 0.U // 3'b000
                    }
                } else {
                    io.r_reduction_add(0) := false.B
                    io.r_reduction_cmd(0) := 0.U
                }
            }
        }
        when (io.x === 15.U) {
            when (io.rst) {
                io.r_reduction_add(15) := false.B
                io.r_reduction_cmd(15) := 0.U
            }.otherwise {
                if (io.r_valid(1) === 1.U) {
                    when (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_add(15) := true.B
                    }.otherwise {
                        io.r_reduction_add(15) := false.B
                    }

                    when (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x - 1.U) * LOG2_PES.U) &&
                        io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_cmd(15) := 5.U // 3'b101
                    }.elsewhen (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((2.U * io.x - 1.U) * LOG2_PES.U) &&
                        io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_cmd(15) := 4.U // 3'b100
                    }.otherwise {
                        io.r_reduction_cmd(15) := 0.U // 3'b000
                    }

                } else {
                    io.r_reduction_add(15) := false.B
                    io.r_reduction_cmd(15) := 0.U
                }
            }
        }
        when (io.x =/= 0.U && io.x =/= 15.U) {
            when (io.rst) {
                io.r_reduction_add(io.x) := false.B
                io.r_reduction_cmd(3.U * io.x + 2.U, 3.U * io.x) := 0.U
            }.otherwise {
                if (io.r_valid(1.U) === 1.U) {
                    when (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U)) {
                        io.r_reduction_add(io.x) := true.B
                    }.otherwise {
                        io.r_reduction_add(io.x) := false.B
                    }

                    when ((io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 2.U) * LOG2_PES.U)) &&
                        (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * io.x + 2.U, 3.U * io.x) := 5.U // 3'b101
                    }.elsewhen ((io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((2.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 2.U) * LOG2_PES.U)) &&
                        (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * io.x + 2.U, 3.U * io.x) := 4.U // 3'b100
                    }.elsewhen ((io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U) === io.w_vn((2.U * io.x + 2.U) * LOG2_PES.U)) &&
                        (io.w_vn((2.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((2.U * io.x + 1.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * io.x + 2.U, 3.U * io.x) := 3.U // 3'b011
                    }.otherwise {
                        io.r_reduction_cmd(3.U * io.x + 2.U, 3.U * io.x) := 1.U // 3'b001
                    }
                } else {
                    io.r_reduction_add(io.x) := false.B
                    io.r_reduction_cmd(3.U * io.x + 2.U, 3.U * io.x) := 0.U
                }
            }
        }
    }
    for (x <- 0 until 8) {
        when (x.U === 0.U) {
            when (io.rst) {
                io.r_reduction_add(16.U + x.U) := false.B
                io.r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 0.U
            }.otherwise {
                if (io.r_valid(1.U) === 1.U) {
                    when (io.w_vn((4.U * x.U + 1.U) * LOG2_PES.U) === io.w_vn((4.U * x.U + 2.U) * LOG2_PES.U)) {
                        io.r_reduction_add(16.U + x.U) := true.B
                    }.otherwise {
                        io.r_reduction_add(16.U + x.U) := false.B
                    }

                    when ((io.w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === io.w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === io.w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= io.w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 5.U // 3'b101
                    }.elsewhen ((io.w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === io.w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= io.w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 4.U // 3'b100
                    }.elsewhen ((io.w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === io.w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 3.U // 3'b011
                    }.otherwise {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 0.U // 3'b000
                    }
                } else {
                    io.r_reduction_add(16.U + x.U) := false.B
                    io.r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 0.U
                }
            }
        }
        when (io.x === 7.U) {
            when (io.rst) {
                io.r_reduction_add(16.U + io.x) := false.B
                io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 0.U
            }.otherwise {
                if (io.r_valid(1.U) === 1.U) {
                    when (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U)) {
                        io.r_reduction_add(16.U + io.x) := true.B
                    }.otherwise {
                        io.r_reduction_add(16.U + io.x) := false.B
                    }

                    when ((io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 5.U // 3'b101
                    }.elsewhen ((io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 3.U // 3'b011
                    }.elsewhen ((io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 4.U // 3'b100
                    }.otherwise {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 0.U // 3'b000
                    }
                } else {
                    io.r_reduction_add(16.U + io.x) := false.B
                    io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 0.U
                }
            }
        }.otherwise {
            when (io.rst) {
                io.r_reduction_add(16.U + io.x) := false.B
                io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 0.U
            }.otherwise {
                if (io.r_valid(1.U) === 1.U) {
                    when (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U)) {
                        io.r_reduction_add(16.U + io.x) := true.B
                    }.otherwise {
                        io.r_reduction_add(16.U + io.x) := false.B
                    }

                    when ((io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 4.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 5.U // 3'b101
                    }.elsewhen ((io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 4.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 3.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 4.U // 3'b100
                    }.elsewhen ((io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) === io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 0.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x - 1.U) * LOG2_PES.U)) &&
                        (io.w_vn((4.U * io.x + 1.U) * LOG2_PES.U) =/= io.w_vn((4.U * io.x + 2.U) * LOG2_PES.U))) {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 3.U // 3'b011
                    }.otherwise {
                        io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 0.U // 3'b000
                    }
                } else {
                    io.r_reduction_add(16.U + io.x) := false.B
                    io.r_reduction_cmd(3.U * 16.U + 3.U * io.x + 2.U, 3.U * 16.U + 3.U * io.x) := 0.U
                }
            }
        }
    }
    for (x <- 0 until 4) {
        when(x.U === 0.U) {
            adders_lvl_2(x).io.rst := rst
            adders_lvl_2(x).io.r_valid := r_valid(1)
            adders_lvl_2(x).io.w_vn := io.w_vn

        when(rst === 1.B) {
            adders_lvl_2(x).io.r_reduction_add := 0.U
            adders_lvl_2(x).io.r_reduction_cmd := 0.U
            adders_lvl_2(x).io.r_reduction_sel := 0.U
        }.otherwise {
      // generate cmd logic
            when(r_valid(1) === 1.B) {
                when(io.w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).io.r_reduction_add := 1.U // add enable
                }.otherwise {
                    adders_lvl_2(x).io.r_reduction_add := 0.U
                }

                when(io.w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 2.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 8.U) * LOG2_PES.U) =/= io.w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= io.w_vn((8.U * x.U + 4.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= io.w_vn((8.U * x.U + 3.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).io.r_reduction_cmd := 5.U // both vn done
                }.elsewhen(io.w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 8.U) * LOG2_PES.U) =/= io.w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= io.w_vn((8.U * x.U + 3.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).io.r_reduction_cmd := 4.U // right vn done
                }.elsewhen(io.w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 2.U) * LOG2_PES.U) &&
                    io.w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= io.w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).io.r_reduction_cmd := 3.U // left vn done
                }.otherwise {
                    adders_lvl_2(x).io.r_reduction_cmd := 0.U // nothing
                }   
            }.otherwise {
                adders_lvl_2(x).io.r_reduction_add := 0.U
                adders_lvl_2(x).io.r_reduction_cmd := 0.U // nothing
            }

      // generate left select logic
            when(r_valid(1) === 1.B) {
                when(io.w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 1.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).io.r_reduction_sel := 0.U
                }.otherwise {
                    adders_lvl_2(x).io.r_reduction_sel := 1.U
                }
            }.otherwise {
                adders_lvl_2(x).io.r_reduction_sel := 0.U
            }

      // generate right select logic
            when(r_valid(1) === 1.B) {
                when(io.w_vn((8.U * x.U + 4.U) * LOG2_PES.U) === io.w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).io.r_reduction_sel := 1.U
                }.otherwise {
                    adders_lvl_2(x).io.r_reduction_sel := 0.U
                }
            }.otherwise {
                adders_lvl_2(x).io.r_reduction_sel := 0.U
            }

            when (r_valid(1) === 1.B) {
                when (w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 1.U) * LOG2_PES.U)) {
                    r_reduction_sel((x * 2).U + 0.U) := 0.U
                }.otherwise {
                    r_reduction_sel((x * 2).U + 0.U) := 1.U
                } 
            }.otherwise {
                r_reduction_sel((x * 2).U + 0.U) := 0.U
            }   

// Generate right select logic
            when (r_valid(1) === 1.B) {
                when (w_vn((8.U * x.U + 4.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) {
                    r_reduction_sel((x * 2).U + 1.U) := 1.U
                }.otherwise {
                    r_reduction_sel((x * 2).U + 1.U) := 0.U
                }
            }.otherwise {
                r_reduction_sel((x * 2).U + 1.U) := 0.U
            }
            }
        }

        when (x === 3.U) {
            val r_reduction_sel_r_edge_case = RegInit(0.U(8.W)) // Assuming 8-bit wide r_reduction_sel

            when (rst === 1.B) {
                r_reduction_add(24.U + x) := 0.U
                r_reduction_cmd(3.U * 24.U + 3.U * x) := 0.U
                r_reduction_sel_r_edge_case((x * 2).U + 1.U) := 0.U
                r_reduction_sel_r_edge_case((x * 2).U) := 0.U
            }.otherwise {
    // generate cmd logic
                when (r_valid(1) === 1.B) {
                    when (w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) {
                        r_reduction_add(24.U + x) := 1.B // add enable
                    }.otherwise {
                        r_reduction_add(24.U + x) := 0.B
                    }   

                    when (w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === w_vn((8.U * x.U + 2.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((8.U * x.U - 1.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 4.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 3.U) * LOG2_PES.U)) {
                        r_reduction_cmd(3.U * 24.U + 3.U * x) := "b101".U // both vn done
                    }.elsewhen (w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === w_vn((8.U * x.U + 2.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((8.U * x.U - 1.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 2.U) * LOG2_PES.U)) {
                        r_reduction_cmd(3.U * 24.U + 3.U * x) := "b011".U // left vn done
                    }.elsewhen (w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                        w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 3.U) * LOG2_PES.U)) {
                        r_reduction_cmd(3.U * 24.U + 3.U * x) := "b100".U // right vn done
                    }.otherwise {
                        r_reduction_cmd(3.U * 24.U + 3.U * x) := "b000".U // nothing
                    }
                }.otherwise {
                    r_reduction_add(24.U + x) := 0.B
                    r_reduction_cmd(3.U * 24.U + 3.U * x) := "b000".U // nothing
                }

    // generate left select logic
                when (r_valid(1) === 1.B) {
                    when (w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 1.U) * LOG2_PES.U)) {
                        r_reduction_sel_r_edge_case((x * 2).U) := 0.U
                    }.otherwise {
                        r_reduction_sel_r_edge_case((x * 2).U) := 1.U
                    }
                }.otherwise {
                    r_reduction_sel_r_edge_case((x * 2).U) := 0.U
                }

    // generate right select logic
                when (r_valid(1) === 1.B) {
                    when (w_vn((8.U * x.U + 4.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) {
                        r_reduction_sel_r_edge_case((x * 2).U + 1.U) := 1.U
                    }.otherwise {
                        r_reduction_sel_r_edge_case((x * 2).U + 1.U) := 0.U
                    }
                }.otherwise {
                    r_reduction_sel_r_edge_case((x * 2).U + 1.U) := 0.U
                }   
            }
        }.otherwise {
            when(io.r_valid(1) === 1.U) {
                when(io.w_vn((8 * x + 3) * LOG2_PES.U) === io.w_vn((8 * x + 4) * LOG2_PES.U)) {
                    io.r_reduction_add(24 + x) := true.B // add enable
                }.otherwise {
                    io.r_reduction_add(24 + x) := false.B
                }

                val bothVNDone =
                    io.w_vn((8 * x + 1) * LOG2_PES.U) === io.w_vn((8 * x + 2) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 5) * LOG2_PES.U) === io.w_vn((8 * x + 6) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 1) * LOG2_PES.U) =/= io.w_vn((8 * x - 1) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 8) * LOG2_PES.U) =/= io.w_vn((8 * x + 6) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 2) * LOG2_PES.U) =/= io.w_vn((8 * x + 4) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 5) * LOG2_PES.U) =/= io.w_vn((8 * x + 3) * LOG2_PES.U)

                val rightVNDone =
                    io.w_vn((8 * x + 5) * LOG2_PES.U) === io.w_vn((8 * x + 6) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 8) * LOG2_PES.U) =/= io.w_vn((8 * x + 6) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 5) * LOG2_PES.U) =/= io.w_vn((8 * x + 3) * LOG2_PES.U)

                val leftVNDone =
                    io.w_vn((8 * x + 1) * LOG2_PES.U) === io.w_vn((8 * x + 2) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 1) * LOG2_PES.U) =/= io.w_vn((8 * x - 1) * LOG2_PES.U) &&
                    io.w_vn((8 * x + 4) * LOG2_PES.U) =/= io.w_vn((8 * x + 2) * LOG2_PES.U)

                when(bothVNDone) {
                    io.r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b101".U // both vn done
                }.elsewhen(rightVNDone) {
                    io.r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b100".U // right vn done
                }.elsewhen(leftVNDone) {
                    io.r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b011".U // left vn done
                }.otherwise {
                    io.r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b000".U // nothing
                }   

            }.otherwise {
                io.r_reduction_add(24 + x) := false.B
                io.r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b000".U // nothing
            }
            when(io.r_valid(1) === 1.U) {
                when(io.w_vn((8 * x + 3) * LOG2_PES.U) === io.w_vn((8 * x + 1) * LOG2_PES.U)) {
                    io.r_reduction_sel((x * 2) + 0.U) := "b0".U
                }.otherwise {
                    io.r_reduction_sel((x * 2) + 0.U) := "b1".U
                }
            }.otherwise {
                io.r_reduction_sel((x * 2) + 0.U) := "b0".U
            }

  // generate right select logic
            when(io.r_valid(1) === 1.U) {
                when(io.w_vn((8 * x + 4) * LOG2_PES.U) === io.w_vn((8 * x + 6) * LOG2_PES.U)) {
                    io.r_reduction_sel((x * 2) + 1.U) := "b1".U
                }.otherwise {
                    io.r_reduction_sel((x * 2) + 1.U) := "b0".U
                }
            }.otherwise {
                io.r_reduction_sel((x * 2) + 1.U) := "b0".U
            }
        }
    }  

      for (x <- 0 until 2) {
    when(x.U === 0.U) {
      when(io.rst) {
        io.r_reduction_add(28 + x.U) := false.B
        io.r_reduction_cmd(3 * 28 + 3 * x.U, 3 * x.U) := "b000".U
        io.r_reduction_sel((x * 4).U + 8.U, 4.U) := "b00".U
      }.otherwise {
        // generate cmd logic
        when(io.r_valid(1) === 1.U) {
          when(io.w_vn((16 * x.U + 7.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 8.U) * LOG2_PES.U)) {
            io.r_reduction_add(28 + x.U) := true.B // add enable
          }.otherwise {
            io.r_reduction_add(28 + x.U) := false.B
          }

          val bothVNDone =
            io.w_vn((16 * x.U + 3.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 4.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 11.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 12.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 16.U) * LOG2_PES.U) =/= io.w_vn((16 * x.U + 12.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 4.U) * LOG2_PES.U) =/= io.w_vn((16 * x.U + 8.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 11.U) * LOG2_PES.U) =/= io.w_vn((16 * x.U + 7.U) * LOG2_PES.U)

          val rightVNDone =
            io.w_vn((16 * x.U + 11.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 12.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 16.U) * LOG2_PES.U) =/= io.w_vn((16 * x.U + 12.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 11.U) * LOG2_PES.U) =/= io.w_vn((16 * x.U + 7.U) * LOG2_PES.U)

          val leftVNDone =
            io.w_vn((16 * x.U + 7.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 3.U) * LOG2_PES.U) &&
            io.w_vn((16 * x.U + 7.U) * LOG2_PES.U) =/= io.w_vn((16 * x.U + 5.U) * LOG2_PES.U)

          when(bothVNDone) {
            io.r_reduction_cmd(3 * 28 + 3 * x.U, 3 * x.U) := "b101".U // both vn done
          }.elsewhen(rightVNDone) {
            io.r_reduction_cmd(3 * 28 + 3 * x.U, 3 * x.U) := "b100".U // right vn done
          }.elsewhen(leftVNDone) {
            io.r_reduction_cmd(3 * 28 + 3 * x.U, 3 * x.U) := "b011".U // left vn done
          }.otherwise {
            io.r_reduction_cmd(3 * 28 + 3 * x.U, 3 * x.U) := "b000".U // nothing
          }
        }.otherwise {
          io.r_reduction_add(28 + x.U) := false.B
          io.r_reduction_cmd(3 * 28 + 3 * x.U, 3 * x.U) := "b000".U // nothing
        }

        // generate left select logic
        when(io.r_valid(1) === 1.U) {
          when(io.w_vn((16 * x.U + 7.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 3.U) * LOG2_PES.U)) {
            io.r_reduction_sel((x * 4).U + 8.U, 2.U) := "b00".U
          }.elsewhen(io.w_vn((16 * x.U + 7.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 5.U) * LOG2_PES.U)) {
            io.r_reduction_sel((x * 4).U + 8.U, 2.U) := "b01".U
          }.otherwise {
            io.r_reduction_sel((x * 4).U + 8.U, 2.U) := "b10".U
          }
        }.otherwise {
          io.r_reduction_sel((x * 4).U + 8.U, 4.U) := "b00".U
        }

        // generate right select logic
        when(io.r_valid(1) === 1.U) {
          when(io.w_vn((16 * x.U + 8.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 12.U) * LOG2_PES.U)) {
            io.r_reduction_sel((x * 4).U + 10.U, 2.U) := "b10".U
          }.elsewhen(io.w_vn((16 * x.U + 8.U) * LOG2_PES.U) === io.w_vn((16 * x.U + 10.U) * LOG2_PES.U)) {
            io.r_reduction_sel((x * 4).U + 10.U, 2.U) := "b01".U
          }.otherwise {
            io.r_reduction_sel((x * 4).U + 10.U, 2.U) := "b00".U
          }
        }.otherwise {
          io.r_reduction_sel((x * 4).U + 8.U, 4.U) := "b00".U
        }
      }
    }
  }
    



}

    

    


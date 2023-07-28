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
        when (x === 0.U) {
            when (rst) {
                r_reduction_add(0) := false.B
                r_reduction_cmd(0) := 0.U
            }.otherwise {
                if (r_valid(1) === 1.U) {
                    when (w_vn((2.U * x + 0.U) * LOG2_PES.U) === w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_add(0) := true.B
                    }.otherwise {
                        r_reduction_add(0) := false.B
                    }

                    when (w_vn((2.U * x + 1.U) * LOG2_PES.U) =/= w_vn((2.U * x + 2.U) * LOG2_PES.U) &&
                        w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_cmd(0) := 5.U // 3'b101
                    }.elsewhen (w_vn((2.U * x + 1.U) * LOG2_PES.U) === w_vn((2.U * x + 2.U) * LOG2_PES.U) &&
                        w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_cmd(0) := 3.U // 3'b011
                    }.otherwise {
                        r_reduction_cmd(0) := 0.U // 3'b000
                    }
                } else {
                    r_reduction_add(0) := false.B
                    r_reduction_cmd(0) := 0.U
                }
            }
        }
        when (x === 15.U) {
            when (rst) {
                r_reduction_add(15) := false.B
                r_reduction_cmd(15) := 0.U
            }.otherwise {
                if (r_valid(1) === 1.U) {
                    when (w_vn((2.U * x + 0.U) * LOG2_PES.U) === w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_add(15) := true.B
                    }.otherwise {
                        r_reduction_add(15) := false.B
                    }

                    when (w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x - 1.U) * LOG2_PES.U) &&
                        w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_cmd(15) := 5.U // 3'b101
                    }.elsewhen (w_vn((2.U * x + 0.U) * LOG2_PES.U) === w_vn((2.U * x - 1.U) * LOG2_PES.U) &&
                        w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_cmd(15) := 4.U // 3'b100
                    }.otherwise {
                        r_reduction_cmd(15) := 0.U // 3'b000
                    }

                } else {
                    r_reduction_add(15) := false.B
                    r_reduction_cmd(15) := 0.U
                }
            }
        }
        when (x =/= 0.U && x =/= 15.U) {
            when (rst) {
                r_reduction_add(x) := false.B
                r_reduction_cmd(3.U * x + 2.U, 3.U * x) := 0.U
            }.otherwise {
                if (r_valid(1.U) === 1.U) {
                    when (w_vn((2.U * x + 0.U) * LOG2_PES.U) === w_vn((2.U * x + 1.U) * LOG2_PES.U)) {
                        r_reduction_add(x) := true.B
                    }.otherwise {
                        r_reduction_add(x) := false.B
                    }

                    when ((w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((2.U * x + 1.U) * LOG2_PES.U) =/= w_vn((2.U * x + 2.U) * LOG2_PES.U)) &&
                        (w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * x + 2.U, 3.U * x) := 5.U // 3'b101
                    }.elsewhen ((w_vn((2.U * x + 0.U) * LOG2_PES.U) === w_vn((2.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((2.U * x + 1.U) * LOG2_PES.U) =/= w_vn((2.U * x + 2.U) * LOG2_PES.U)) &&
                        (w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * x + 2.U, 3.U * x) := 4.U // 3'b100
                    }.elsewhen ((w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((2.U * x + 1.U) * LOG2_PES.U) === w_vn((2.U * x + 2.U) * LOG2_PES.U)) &&
                        (w_vn((2.U * x + 0.U) * LOG2_PES.U) =/= w_vn((2.U * x + 1.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * x + 2.U, 3.U * x) := 3.U // 3'b011
                    }.otherwise {
                        r_reduction_cmd(3.U * x + 2.U, 3.U * x) := 1.U // 3'b001
                    }
                } else {
                    r_reduction_add(x) := false.B
                    r_reduction_cmd(3.U * x + 2.U, 3.U * x) := 0.U
                }
            }
        }
    }
    for (x <- 0 until 8) {
        when (x.U === 0.U) {
            when (rst) {
                r_reduction_add(16.U + x.U) := false.B
                r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 0.U
            }.otherwise {
                if (r_valid(1.U) === 1.U) {
                    when (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) === w_vn((4.U * x.U + 2.U) * LOG2_PES.U)) {
                        r_reduction_add(16.U + x.U) := true.B
                    }.otherwise {
                        r_reduction_add(16.U + x.U) := false.B
                    }

                    when ((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 5.U // 3'b101
                    }.elsewhen ((w_vn((4.U * x.U + 2.U) * LOG2_PES.U) === w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x.U + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 4.U // 3'b100
                    }.elsewhen ((w_vn((4.U * x.U + 0.U) * LOG2_PES.U) === w_vn((4.U * x.U + 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x.U + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x.U + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 3.U // 3'b011
                    }.otherwise {
                        r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 0.U // 3'b000
                    }
                } else {
                    r_reduction_add(16.U + x.U) := false.B
                    r_reduction_cmd(3.U * 16.U + 3.U * x.U + 2.U, 3.U * 16.U + 3.U * x.U) := 0.U
                }
            }
        }
        when (x === 7.U) {
            when (rst) {
                r_reduction_add(16.U + x) := false.B
                r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 0.U
            }.otherwise {
                if (r_valid(1.U) === 1.U) {
                    when (w_vn((4.U * x + 1.U) * LOG2_PES.U) === w_vn((4.U * x + 2.U) * LOG2_PES.U)) {
                        r_reduction_add(16.U + x) := true.B
                    }.otherwise {
                        r_reduction_add(16.U + x) := false.B
                    }

                    when ((w_vn((4.U * x + 0.U) * LOG2_PES.U) === w_vn((4.U * x + 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 2.U) * LOG2_PES.U) === w_vn((4.U * x + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 5.U // 3'b101
                    }.elsewhen ((w_vn((4.U * x + 0.U) * LOG2_PES.U) === w_vn((4.U * x + 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 3.U // 3'b011
                    }.elsewhen ((w_vn((4.U * x + 2.U) * LOG2_PES.U) === w_vn((4.U * x + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 4.U // 3'b100
                    }.otherwise {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 0.U // 3'b000
                    }
                } else {
                    r_reduction_add(16.U + x) := false.B
                    r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 0.U
                }
            }
        }.otherwise {
            when (rst) {
                r_reduction_add(16.U + x) := false.B
                r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 0.U
            }.otherwise {
                if (r_valid(1.U) === 1.U) {
                    when (w_vn((4.U * x + 1.U) * LOG2_PES.U) === w_vn((4.U * x + 2.U) * LOG2_PES.U)) {
                        r_reduction_add(16.U + x) := true.B
                    }.otherwise {
                        r_reduction_add(16.U + x) := false.B
                    }

                    when ((w_vn((4.U * x + 0.U) * LOG2_PES.U) === w_vn((4.U * x + 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 2.U) * LOG2_PES.U) === w_vn((4.U * x + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 5.U // 3'b101
                    }.elsewhen ((w_vn((4.U * x + 2.U) * LOG2_PES.U) === w_vn((4.U * x + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 4.U) * LOG2_PES.U) =/= w_vn((4.U * x + 3.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 4.U // 3'b100
                    }.elsewhen ((w_vn((4.U * x + 0.U) * LOG2_PES.U) === w_vn((4.U * x + 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 0.U) * LOG2_PES.U) =/= w_vn((4.U * x - 1.U) * LOG2_PES.U)) &&
                        (w_vn((4.U * x + 1.U) * LOG2_PES.U) =/= w_vn((4.U * x + 2.U) * LOG2_PES.U))) {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 3.U // 3'b011
                    }.otherwise {
                        r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 0.U // 3'b000
                    }
                } else {
                    r_reduction_add(16.U + x) := false.B
                    r_reduction_cmd(3.U * 16.U + 3.U * x + 2.U, 3.U * 16.U + 3.U * x) := 0.U
                }
            }
        }
    }
    for (x <- 0 until 4) {
        when(x.U === 0.U) {
            adders_lvl_2(x).rst := rst
            adders_lvl_2(x).r_valid := r_valid(1)
            adders_lvl_2(x).w_vn := w_vn

        when(rst === 1.B) {
            adders_lvl_2(x).r_reduction_add := 0.U
            adders_lvl_2(x).r_reduction_cmd := 0.U
            adders_lvl_2(x).r_reduction_sel := 0.U
        }.otherwise {
      // generate cmd logic
            when(r_valid(1) === 1.B) {
                when(w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).r_reduction_add := 1.U // add enable
                }.otherwise {
                    adders_lvl_2(x).r_reduction_add := 0.U
                }

                when(w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === w_vn((8.U * x.U + 2.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 8.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 4.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 3.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).r_reduction_cmd := 5.U // both vn done
                }.elsewhen(w_vn((8.U * x.U + 5.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 8.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 6.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 5.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 3.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).r_reduction_cmd := 4.U // right vn done
                }.elsewhen(w_vn((8.U * x.U + 1.U) * LOG2_PES.U) === w_vn((8.U * x.U + 2.U) * LOG2_PES.U) &&
                    w_vn((8.U * x.U + 2.U) * LOG2_PES.U) =/= w_vn((8.U * x.U + 4.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).r_reduction_cmd := 3.U // left vn done
                }.otherwise {
                    adders_lvl_2(x).r_reduction_cmd := 0.U // nothing
                }   
            }.otherwise {
                adders_lvl_2(x).r_reduction_add := 0.U
                adders_lvl_2(x).r_reduction_cmd := 0.U // nothing
            }

      // generate left select logic
            when(r_valid(1) === 1.B) {
                when(w_vn((8.U * x.U + 3.U) * LOG2_PES.U) === w_vn((8.U * x.U + 1.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).r_reduction_sel := 0.U
                }.otherwise {
                    adders_lvl_2(x).r_reduction_sel := 1.U
                }
            }.otherwise {
                adders_lvl_2(x).r_reduction_sel := 0.U
            }

      // generate right select logic
            when(r_valid(1) === 1.B) {
                when(w_vn((8.U * x.U + 4.U) * LOG2_PES.U) === w_vn((8.U * x.U + 6.U) * LOG2_PES.U)) {
                    adders_lvl_2(x).r_reduction_sel := 1.U
                }.otherwise {
                    adders_lvl_2(x).r_reduction_sel := 0.U
                }
            }.otherwise {
                adders_lvl_2(x).r_reduction_sel := 0.U
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
            when(r_valid(1) === 1.U) {
                when(w_vn((8 * x + 3) * LOG2_PES.U) === w_vn((8 * x + 4) * LOG2_PES.U)) {
                    r_reduction_add(24 + x) := true.B // add enable
                }.otherwise {
                    r_reduction_add(24 + x) := false.B
                }

                val bothVNDone =
                    w_vn((8 * x + 1) * LOG2_PES.U) === w_vn((8 * x + 2) * LOG2_PES.U) &&
                    w_vn((8 * x + 5) * LOG2_PES.U) === w_vn((8 * x + 6) * LOG2_PES.U) &&
                    w_vn((8 * x + 1) * LOG2_PES.U) =/= w_vn((8 * x - 1) * LOG2_PES.U) &&
                    w_vn((8 * x + 8) * LOG2_PES.U) =/= w_vn((8 * x + 6) * LOG2_PES.U) &&
                    w_vn((8 * x + 2) * LOG2_PES.U) =/= w_vn((8 * x + 4) * LOG2_PES.U) &&
                    w_vn((8 * x + 5) * LOG2_PES.U) =/= w_vn((8 * x + 3) * LOG2_PES.U)

                val rightVNDone =
                    w_vn((8 * x + 5) * LOG2_PES.U) === w_vn((8 * x + 6) * LOG2_PES.U) &&
                    w_vn((8 * x + 8) * LOG2_PES.U) =/= w_vn((8 * x + 6) * LOG2_PES.U) &&
                    w_vn((8 * x + 5) * LOG2_PES.U) =/= w_vn((8 * x + 3) * LOG2_PES.U)

                val leftVNDone =
                    w_vn((8 * x + 1) * LOG2_PES.U) === w_vn((8 * x + 2) * LOG2_PES.U) &&
                    w_vn((8 * x + 1) * LOG2_PES.U) =/= w_vn((8 * x - 1) * LOG2_PES.U) &&
                    w_vn((8 * x + 4) * LOG2_PES.U) =/= w_vn((8 * x + 2) * LOG2_PES.U)

                when(bothVNDone) {
                    r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b101".U // both vn done
                }.elsewhen(rightVNDone) {
                    r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b100".U // right vn done
                }.elsewhen(leftVNDone) {
                    r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b011".U // left vn done
                }.otherwise {
                    r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b000".U // nothing
                }   

            }.otherwise {
                r_reduction_add(24 + x) := false.B
                r_reduction_cmd(3 * 24 + 3 * x, 3 * x) := "b000".U // nothing
            }
            when(r_valid(1) === 1.U) {
                when(w_vn((8 * x + 3) * LOG2_PES.U) === w_vn((8 * x + 1) * LOG2_PES.U)) {
                    r_reduction_sel((x * 2) + 0.U) := "b0".U
                }.otherwise {
                    r_reduction_sel((x * 2) + 0.U) := "b1".U
                }
            }.otherwise {
                r_reduction_sel((x * 2) + 0.U) := "b0".U
            }

  // generate right select logic
            when(r_valid(1) === 1.U) {
                when(w_vn((8 * x + 4) * LOG2_PES.U) === w_vn((8 * x + 6) * LOG2_PES.U)) {
                    r_reduction_sel((x * 2) + 1.U) := "b1".U
                }.otherwise {
                    r_reduction_sel((x * 2) + 1.U) := "b0".U
                }
            }.otherwise {
                r_reduction_sel((x * 2) + 1.U) := "b0".U
            }
        }
    }  

      for (x <- 0 until 2) {
    when(x.U === 0.U) {
      when(rst) {
    r_reduction_addReg(28 + x.U) := false.B
    r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 0.U
    r_reduction_selReg((x * 4).U + 8.U, 4.U) := 0.U
  }.otherwise {
    // generate cmd logic
    when(r_valid(1) === true.B) {
      when(w_vn((16 * x + 7).U) === w_vn((16 * x + 8).U)) {
        r_reduction_addReg(28 + x.U) := true.B
      }.otherwise {
        r_reduction_addReg(28 + x.U) := false.B
      }

      when(
        w_vn((16 * x + 3).U) === w_vn((16 * x + 4).U) &&
        w_vn((16 * x + 11).U) === w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 16).U) =/= w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 4).U) =/= w_vn((16 * x + 8).U) &&
        w_vn((16 * x + 11).U) =/= w_vn((16 * x + 7).U)
      ) {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 5.U
      }.elsewhen(
        w_vn((16 * x + 11).U) === w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 16).U) =/= w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 11).U) =/= w_vn((16 * x + 7).U)
      ) {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 4.U
      }.elsewhen(
        w_vn((16 * x + 3).U) === w_vn((16 * x + 4).U) &&
        w_vn((16 * x + 4).U) =/= w_vn((16 * x + 8).U)
      ) {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 3.U
      }.otherwise {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 0.U
      }
    }.otherwise {
      r_reduction_addReg(28 + x.U) := false.B
      r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 0.U
    }

    // generate left select logic
    when(r_valid(1) === true.B) {
      when(w_vn((16 * x + 7).U) === w_vn((16 * x + 3).U)) {
        r_reduction_selReg((x * 4).U + 8.U, 2.U) := 0.U
      }.elsewhen(w_vn((16 * x + 7).U) === w_vn((16 * x + 5).U)) {
        r_reduction_selReg((x * 4).U + 8.U, 2.U) := 1.U
      }.otherwise {
        r_reduction_selReg((x * 4).U + 8.U, 2.U) := 2.U
      }
    }.otherwise {
      r_reduction_selReg((x * 4).U + 8.U, 4.U) := 0.U
    }

    // generate right select logic
    when(r_valid(1) === true.B) {
      when(w_vn((16 * x + 8).U) === w_vn((16 * x + 12).U)) {
        r_reduction_selReg((x * 4).U + 10.U, 2.U) := 2.U
      }.elsewhen(w_vn((16 * x + 8).U) === w_vn((16 * x + 10).U)) {
        r_reduction_selReg((x * 4).U + 10.U, 2.U) := 1.U
      }.otherwise {
        r_reduction_selReg((x * 4).U + 10.U, 2.U) := 0.U
      }
    }.otherwise {
      r_reduction_selReg((x * 4).U + 8.U, 4.U) := 0.U
    }
  }
    }.elsewhen(x.U === 1.U){ 
        when(rst) {
    r_reduction_addReg(28 + x.U) := false.B
    r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 0.U
    r_reduction_selReg((x * 4).U + 8.U, 4.U) := 0.U
  }.otherwise {
    // generate cmd logic
    when(r_valid(1) === true.B) {
      when(w_vn((16 * x + 7).U) === w_vn((16 * x + 8).U)) {
        r_reduction_addReg(28 + x.U) := true.B
      }.otherwise {
        r_reduction_addReg(28 + x.U) := false.B
      }

      when(
        w_vn((16 * x + 3).U) === w_vn((16 * x + 4).U) &&
        w_vn((16 * x + 11).U) === w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 16).U) =/= w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 4).U) =/= w_vn((16 * x + 8).U) &&
        w_vn((16 * x + 11).U) =/= w_vn((16 * x + 7).U)
      ) {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 5.U
      }.elsewhen(
        w_vn((16 * x + 11).U) === w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 16).U) =/= w_vn((16 * x + 12).U) &&
        w_vn((16 * x + 11).U) =/= w_vn((16 * x + 7).U)
      ) {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 4.U
      }.elsewhen(
        w_vn((16 * x + 3).U) === w_vn((16 * x + 4).U) &&
        w_vn((16 * x + 4).U) =/= w_vn((16 * x + 8).U)
      ) {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 3.U
      }.otherwise {
        r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 0.U
      }
    }.otherwise {
      r_reduction_addReg(28 + x.U) := false.B
      r_reduction_cmdReg(3 * 28 + 3 * x.U, 3.U) := 0.U
    }

    // generate left select logic
    when(r_valid(1) === true.B) {
      when(w_vn((16 * x + 7).U) === w_vn((16 * x + 3).U)) {
        r_reduction_selReg((x * 4).U + 8.U, 2.U) := 0.U
      }.elsewhen(w_vn((16 * x + 7).U) === w_vn((16 * x + 5).U)) {
        r_reduction_selReg((x * 4).U + 8.U, 2.U) := 1.U
      }.otherwise {
        r_reduction_selReg((x * 4).U + 8.U, 2.U) := 2.U
      }
    }.otherwise {
      r_reduction_selReg((x * 4).U + 8.U, 4.U) := 0.U
    }

    // generate right select logic
    when(r_valid(1) === true.B) {
      when(w_vn((16 * x + 8).U) === w_vn((16 * x + 12).U)) {
        r_reduction_selReg((x * 4).U + 10.U, 2.U) := 2.U
      }.elsewhen(w_vn((16 * x + 8).U) === w_vn((16 * x + 10).U)) {
        r_reduction_selReg((x * 4).U + 10.U, 2.U) := 1.U
      }.otherwise {
        r_reduction_selReg((x * 4).U + 10.U, 2.U) := 0.U
      }
    }.otherwise {
      r_reduction_selReg((x * 4).U + 8.U, 4.U) := 0.U
    }
  }
    }.otherwise{
        when(rst) {
    r_reduction_addReg(28.U + x.U) := false.B
    r_reduction_cmdReg(3.U * 28.U + 3.U * x.U, 3.U) := 0.U
    r_reduction_selReg((x.U * 4.U) + 8.U, 4.U) := 0.U
  }.otherwise {
    // generate cmd logic
    when(r_valid(1.U) === true.B) {
      when(w_vn((16.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U)) {
        r_reduction_addReg(28.U + x.U) := true.B
      }.otherwise {
        r_reduction_addReg(28.U + x.U) := false.B
      }

      when(
        w_vn((16.U * x.U + 3.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 4.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 11.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 12.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 3.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + -1.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + 12.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 4.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 11.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U)
      ) {
        r_reduction_cmdReg(3.U * 28.U + 3.U * x.U, 3.U) := 5.U
      }.elsewhen(
        w_vn((16.U * x.U + 11.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 12.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + 12.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 11.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U)
      ) {
        r_reduction_cmdReg(3.U * 28.U + 3.U * x.U, 3.U) := 4.U
      }.elsewhen(
        w_vn((16.U * x.U + 3.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 4.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 3.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + -1.U) * LOG2_PES.U, LOG2_PES.U) &&
        w_vn((16.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((16.U * x.U + 4.U) * LOG2_PES.U, LOG2_PES.U)
      ) {
        r_reduction_cmdReg(3.U * 28.U + 3.U * x.U, 3.U) := 3.U
      }.otherwise {
        r_reduction_cmdReg(3.U * 28.U + 3.U * x.U, 3.U) := 0.U
      }
    }.otherwise {
      r_reduction_addReg(28.U + x.U) := false.B
      r_reduction_cmdReg(3.U * 28.U + 3.U * x.U, 3.U) := 0.U
    }

    // generate left select logic
    when(r_valid(1.U) === true.B) {
      when(w_vn((16.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 3.U) * LOG2_PES.U, LOG2_PES.U)) {
        r_reduction_selReg((x.U * 4.U) + 8.U, 2.U) := 0.U
      }.elsewhen(w_vn((16.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 5.U) * LOG2_PES.U, LOG2_PES.U)) {
                r_reduction_selReg((x.U * 4.U) + 8.U, 2.U) := 1.U
      }.otherwise {
        r_reduction_selReg((x.U * 4.U) + 8.U, 2.U) := 2.U
      }
    }.otherwise {
      r_reduction_selReg((x.U * 4.U) + 8.U, 4.U) := 0.U
    }

    // generate right select logic
    when(r_valid(1.U) === true.B) {
      when(w_vn((16.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 12.U) * LOG2_PES.U, LOG2_PES.U)) {
        r_reduction_selReg((x.U * 4.U) + 10.U, 2.U) := 2.U
      }.elsewhen(w_vn((16.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((16.U * x.U + 10.U) * LOG2_PES.U, LOG2_PES.U)) {
        r_reduction_selReg((x.U * 4.U) + 10.U, 2.U) := 1.U
      }.otherwise {
        r_reduction_selReg((x.U * 4.U) + 10.U, 2.U) := 0.U
      }
    }.otherwise {
      r_reduction_selReg((x.U * 4.U) + 8.U, 4.U) := 0.U
    }
  }
    }
  }
  for (x <- 0 until 1) {
    // Create a unique scope for the inner logic to avoid naming conflicts
    val r_reduction_addReg = RegInit(VecInit(Seq.fill(31)(false.B)))
    val r_reduction_cmdReg = RegInit(VecInit(Seq.fill(31)(0.U(3.W))))
    val r_reduction_selReg = RegInit(VecInit(Seq.fill(12)(0.U(4.W))))

    // Conditally assign values using Chisel when-else statements
    when(rst) {
      r_reduction_addReg(30.U + x.U) := false.B
      r_reduction_cmdReg(3.U * 30.U + 3.U * x.U, 3.U) := 0.U
      r_reduction_selReg((x.U * 4.U) + 16.U, 4.U) := 0.U
    }.otherwise {
      // generate cmd logic
      when(r_valid(1.U) === true.B) {
        when(w_vn((32.U * x.U + 15.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_addReg(30.U + x.U) := true.B
        }.otherwise {
          r_reduction_addReg(30.U + x.U) := false.B
        }

        when(
          w_vn((32.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) &&
          w_vn((32.U * x.U + 23.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 24.U) * LOG2_PES.U, LOG2_PES.U) &&
          w_vn((32.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((32.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) &&
          w_vn((32.U * x.U + 23.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((32.U * x.U + 15.U) * LOG2_PES.U, LOG2_PES.U)
        ) {
          r_reduction_cmdReg(3.U * 30.U + 3.U * x.U, 3.U) := 5.U
        }.elsewhen(
          w_vn((32.U * x.U + 23.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 24.U) * LOG2_PES.U, LOG2_PES.U) &&
          w_vn((32.U * x.U + 23.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((32.U * x.U + 15.U) * LOG2_PES.U, LOG2_PES.U)
        ) {
          r_reduction_cmdReg(3.U * 30.U + 3.U * x.U, 3.U) := 4.U
        }.elsewhen(
          w_vn((32.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U) &&
          w_vn((32.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) =/= w_vn((32.U * x.U + 8.U) * LOG2_PES.U, LOG2_PES.U)
        ) {
          r_reduction_cmdReg(3.U * 30.U + 3.U * x.U, 3.U) := 3.U
        }.otherwise {
          r_reduction_cmdReg(3.U * 30.U + 3.U * x.U, 3.U) := 0.U
        }

      }.otherwise {
        r_reduction_addReg(30.U + x.U) := false.B
        r_reduction_cmdReg(3.U * 30.U + 3.U * x.U, 3.U) := 0.U
      }

      // generate left select logic
      when(r_valid(1.U) === true.B) {
        when(w_vn((32.U * x.U + 15.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 7.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_selReg((x.U * 4.U) + 16.U, 2.U) := 0.U
        }.elsewhen(w_vn((32.U * x.U + 15.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 11.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_selReg((x.U * 4.U) + 16.U, 2.U) := 1.U
        }.elsewhen(w_vn((32.U * x.U + 15.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 13.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_selReg((x.U * 4.U) + 16.U, 2.U) := 2.U
        }.otherwise {
          r_reduction_selReg((x.U * 4.U) + 16.U, 2.U) := 3.U
        }
      }.otherwise {
        r_reduction_selReg((x.U * 4.U) + 16.U, 4.U) := 0.U
      }

      // generate right select logic
      when(r_valid(1.U) === true.B) {
        when(w_vn((32.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 24.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_selReg((x.U * 4.U) + 18.U, 2.U) := 3.U
        }.elsewhen(w_vn((32.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 20.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_selReg((x.U * 4.U) + 18.U, 2.U) := 2.U
        }.elsewhen(w_vn((32.U * x.U + 16.U) * LOG2_PES.U, LOG2_PES.U) === w_vn((32.U * x.U + 18.U) * LOG2_PES.U, LOG2_PES.U)) {
          r_reduction_selReg((x.U * 4.U) + 18.U, 2.U) := 1.U
        }.otherwise {
          r_reduction_selReg((x.U * 4.U) + 18.U, 2.U) := 0.U
        }
      }.otherwise {
        r_reduction_selReg((x.U * 4.U) + 18.U, 2.U) := 0.U
      }
    }
}
when(rst) {
    r_add_lvl_0Reg := 0.U
    r_add_lvl_1Reg := 0.U
    r_add_lvl_2Reg := 0.U
    r_add_lvl_3Reg := 0.U
    r_add_lvl_4Reg := 0.U

    r_cmd_lvl_0Reg := 0.U
    r_cmd_lvl_1Reg := 0.U
    r_cmd_lvl_2Reg := 0.U
    r_cmd_lvl_3Reg := 0.U
    r_cmd_lvl_4Reg := 0.U

    r_sel_lvl_2Reg := 0.U
    r_sel_lvl_3Reg := 0.U
    r_sel_lvl_4Reg := 0.U
  }.elsewhen(risingEdge(clk)) {
    r_add_lvl_0Reg := r_reduction_add(15, 0)
    r_add_lvl_1Reg := Cat(r_reduction_add(23, 16), r_reduction_add(23, 16))
    r_add_lvl_2Reg := Cat(r_reduction_add(27, 24), r_reduction_add(27, 24), r_reduction_add(27, 24), r_reduction_add(27, 24))
    r_add_lvl_3Reg := Cat(r_reduction_add(29, 28), r_reduction_add(29, 28), r_reduction_add(29, 28), r_reduction_add(29, 28),
                         r_reduction_add(29, 28), r_reduction_add(29, 28), r_reduction_add(29, 28), r_reduction_add(29, 28))
    r_add_lvl_4Reg := Fill(5, r_reduction_add(30))

    r_cmd_lvl_0Reg := r_reduction_cmd(47, 0)
    r_cmd_lvl_1Reg := Cat(r_reduction_cmd(71, 48), r_reduction_cmd(71, 48))
    r_cmd_lvl_2Reg := Cat(r_reduction_cmd(83, 72), r_reduction_cmd(83, 72), r_reduction_cmd(83, 72), r_reduction_cmd(83, 72))
    r_cmd_lvl_3Reg := Cat(r_reduction_cmd(89, 84), r_reduction_cmd(89, 84), r_reduction_cmd(89, 84), r_reduction_cmd(89, 84),
                         r_reduction_cmd(89, 84), r_reduction_cmd(89, 84))
    r_cmd_lvl_4Reg := Cat(r_reduction_cmd(92, 90), r_reduction_cmd(92, 90), r_reduction_cmd(92, 90))

    r_sel_lvl_2Reg := Cat(r_reduction_sel(7, 0), r_reduction_sel(7, 0), r_reduction_sel(7, 0))
    r_sel_lvl_3Reg := Cat(r_reduction_sel(15, 8), r_reduction_sel(15, 8), r_reduction_sel(15, 8), r_reduction_sel(15, 8),
                         r_reduction_sel(15, 8), r_reduction_sel(15, 8), r_reduction_sel(15, 8), r_reduction_sel(15, 8))
    r_sel_lvl_4Reg := Cat(r_reduction_sel(19, 16), r_reduction_sel(19, 16), r_reduction_sel(19, 16), r_reduction_sel(19, 16))
  }
      //val r_valid = RegInit(VecInit(Seq.fill(5)(false.B)))

  when(io.i_stationary === false.B && io.i_data_valid === true.B) {
    r_valid(0) := true.B
  } .otherwise {
    r_valid(0) := false.B
  }

  for (i <- 0 until 4) {
    when(rst) {
      r_valid(i+1) := false.B
    } .otherwise {
      r_valid(i+1) := r_valid(i)
    }
  }

  val o_reduction_validReg = RegInit(false.B)
  when(rst) {
    o_reduction_validReg := false.B
  } .otherwise {
    o_reduction_validReg := r_valid(3)
  }

  io.o_reduction_valid := o_reduction_validReg
  io.o_reduction_add := Cat(r_add_lvl_4(4), r_add_lvl_3(7, 6), r_add_lvl_2(11, 8), r_add_lvl_1(15, 8), r_add_lvl_0(15, 0))
  io.o_reduction_cmd := Cat(r_cmd_lvl_4(2, 0), r_cmd_lvl_3(5, 0), r_cmd_lvl_2(11, 0), r_cmd_lvl_1(23, 0), r_cmd_lvl_0(47, 0))
  io.o_reduction_sel := Cat(r_sel_lvl_4(3, 0), r_sel_lvl_3(7, 0), r_sel_lvl_2(7, 0))




}

    

    


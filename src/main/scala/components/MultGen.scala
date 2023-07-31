package magmasi.components

import chisel3._
import chisel3.util._

class MultGen(IN_DATA_TYPE: Int = 16, OUT_DATA_TYPE: Int = 32, NUM_PES: Int = 64) extends Module {
  val io = IO(new Bundle {

    val i_valid = Input(Bool())
    val i_data_bus = Input(UInt((NUM_PES * IN_DATA_TYPE).W))
    val i_stationary = Input(Bool())
    val o_valid = Output(Bool())
    val o_data_bus = Output(UInt((NUM_PES * OUT_DATA_TYPE).W))
  })
  print(io.i_data_bus)

  // Create registers for holding i_valid and i_stationary inputs
  val r_valid = RegInit(false.B)
  val r_stationary = RegInit(false.B)

  // FF i_valid and i_stationary for timing fix
  r_valid := io.i_valid
  r_stationary := io.i_stationary

  // Instantiate and connect the MultSwitch modules inside a loop
  val multSwitchOutputs = VecInit(Seq.fill(NUM_PES)(0.U(OUT_DATA_TYPE.W)))
  for (i <- 0 until NUM_PES) {
    val myMultSwitch = Module(new MultSwitch)

    myMultSwitch.io.i_valid := r_valid
    myMultSwitch.io.i_data := io.i_data_bus(i * IN_DATA_TYPE + (IN_DATA_TYPE - 1), i * IN_DATA_TYPE)
    myMultSwitch.io.i_stationary := r_stationary
    multSwitchOutputs(i) := myMultSwitch.io.o_data
  }

  io.o_valid := r_valid
  io.o_data_bus := multSwitchOutputs.asUInt
}



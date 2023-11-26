package magmasi.components

import chisel3._
import chisel3.util._

class matrixout(IN_DATA_TYPE : Int = 32 ,DATA_TYPE: Int = 32, NUM_PES: Int = 4, LOG2_PES: Int = 5) extends Module {
    implicit val config = MagmasiConfig()
  val io = IO(new Bundle {
     val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_data_bus2  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))

    val Stationary_matrix = Input(Vec(2, Vec(2, UInt(DATA_TYPE.W))))
     


    val o_valid = Output(Vec(NUM_PES, UInt(1.W)))
    val o_data_bus = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
     val o_adder = Output(Vec(NUM_PES-1, UInt(DATA_TYPE.W)))
    val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
     val i_mux_bus   = Input(Vec(2 * (LEVELS - 2) * NUM_PES + NUM_PES, Bool()))



    val i_stationary2 = Input(Bool())
    val i_data_valid2 = Input(Bool())
    val i_data_bus_2 = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_data_bus2_2  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))

    val Stationary_matrix2= Input(Vec(2, Vec(2, UInt(DATA_TYPE.W))))
     


    val o_valid2 = Output(Vec(NUM_PES, UInt(1.W)))
    val o_data_bus2= Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
     val o_adder2 = Output(Vec(NUM_PES-1, UInt(DATA_TYPE.W)))
   // val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
     val i_mux_bus2   = Input(Vec(2 * (LEVELS - 2) * NUM_PES + NUM_PES, Bool()))


  })
    val flexdpe = Module(new flexdpecom4(32,32,4,5))

    flexdpe.io.i_stationary := io.i_stationary
    flexdpe.io.i_data_valid := io.i_data_valid
    flexdpe.io.i_data_bus := io.i_data_bus
    flexdpe.io.i_data_bus2 := io.i_data_bus2
    flexdpe.io.i_mux_bus := io.i_mux_bus
    flexdpe.io.Stationary_matrix:= io.Stationary_matrix

   io.o_valid :=   flexdpe.io.o_valid
    io.o_adder :=  flexdpe.io.o_adder
     io.o_data_bus := flexdpe.io.o_data_bus

    val flexdpe2 = Module(new flexdpecom4(32,32,4,5))

    flexdpe2.io.i_stationary := io.i_stationary2
    flexdpe2.io.i_data_valid := io.i_data_valid2
    flexdpe2.io.i_data_bus := io.i_data_bus_2
    flexdpe2.io.i_data_bus2 := io.i_data_bus2_2
    flexdpe2.io.i_mux_bus := io.i_mux_bus2

    flexdpe2.io.Stationary_matrix := io.Stationary_matrix2

    io.o_valid2 :=   flexdpe2.io.o_valid
    io.o_adder2 :=  flexdpe2.io.o_adder
    io.o_data_bus2 := flexdpe2.io.o_data_bus
  }

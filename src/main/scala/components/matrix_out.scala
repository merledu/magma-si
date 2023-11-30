package magmasi.components

import chisel3._
import chisel3.util._

class matrixout(implicit val Config: MagmasiConfig) extends Module {
    //implicit val config = MagmasiConfig()
  val io = IO(new Bundle {
      val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
    val i_data_bus2  = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     


    val o_valid = Output(Vec(Config.NUM_PES, UInt(1.W)))
    val o_data_bus = Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
     val o_adder = Output(Vec(Config.NUM_PES-1, UInt(Config.DATA_TYPE.W)))
    val LEVELS   : Int = (2 * (math.log(Config.NUM_PES) / math.log(2))).toInt + 1
     val i_mux_bus   = Input(Vec(2 * (Config.LEVELS - 2) * Config.NUM_PES + Config.NUM_PES, Bool()))



    val i_stationary2 = Input(Bool())
    val i_data_valid2 = Input(Bool())
    val i_data_bus3 = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
    val i_data_bus4  = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

    val Stationary_matrix2 = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     


    val o_valid2 = Output(Vec(Config.NUM_PES, UInt(1.W)))
    val o_data_bus2 = Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
     val o_adder2 = Output(Vec(Config.NUM_PES-1, UInt(Config.DATA_TYPE.W)))
   // val LEVELS   : Int = (2 * (math.log(Config.NUM_PES) / math.log(2))).toInt + 1
     val i_mux_bus2   = Input(Vec(2 * (Config.LEVELS - 2) * Config.NUM_PES + Config.NUM_PES, Bool()))

   val matrix = Output(Vec(2, Vec(2, UInt(Config.DATA_TYPE.W))))
  })
  io.matrix(0)(0) := 0.U
  io.matrix(1)(0) := 0.U
  io.matrix(0)(1) := 0.U
  io.matrix(1)(1) := 0.U
    var counter = RegInit(0.U(32.W))
    // val matrix = Reg(Vec(2, Vec(2, UInt(Config.DATA_TYPE.W))))
     val outvn1 = Reg(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W))) 
     val outvn2 = Reg(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W))) 
    dontTouch(outvn1)
    dontTouch(outvn2)
    val flexdpe = Module(new flexdpecom4())

    flexdpe.io.i_stationary := io.i_stationary
    flexdpe.io.i_data_valid := io.i_data_valid
    flexdpe.io.i_data_bus := io.i_data_bus
    flexdpe.io.i_data_bus2 := io.i_data_bus2
    flexdpe.io.i_mux_bus := io.i_mux_bus
    flexdpe.io.Stationary_matrix:= io.Stationary_matrix

    io.o_valid :=   flexdpe.io.o_valid
    io.o_adder :=  flexdpe.io.o_adder
     io.o_data_bus := flexdpe.io.o_data_bus
    outvn1 := flexdpe.io.out_vn
  
   

    val flexdpe2 = Module(new flexdpecom4())

    flexdpe2.io.i_stationary := io.i_stationary2
    flexdpe2.io.i_data_valid := io.i_data_valid2
    flexdpe2.io.i_data_bus := io.i_data_bus3
    flexdpe2.io.i_data_bus2 := io.i_data_bus4
    flexdpe2.io.i_mux_bus := io.i_mux_bus2

    flexdpe2.io.Stationary_matrix := io.Stationary_matrix2
    io.o_valid2 :=   flexdpe2.io.o_valid
    io.o_adder2 :=  flexdpe2.io.o_adder
    io.o_data_bus2 := flexdpe2.io.o_data_bus
    
    outvn2 := flexdpe2.io.out_vn

  val adder = Module(new SimpleAdder())
    adder.io.A := 0.U
    adder.io.B := 0.U
    //  when (counter < 60.U){
    //   matrix(0)(0) := io.o_adder(0)
    //   matrix(1)(0) := io.o_adder(2)

    // }

    // matrix(0)(0) := io.o_adder(0)
    // matrix(1)(0) := io.o_adder(2)
    // dontTouch(matrix)

    counter := counter + 1.U
    dontTouch(counter)

    // when (counter > 100.U){
    //   matrix(0)(1) := io.o_adder(0)
    //   matrix(1)(1) := io.o_adder(2)

    // }
    //dontTouch(matrix)
  //when (counter < 100.U){
    
  when(outvn1(0) === outvn1(1) && outvn1(1) =/= outvn1(2)){
    io.matrix(0)(0) := io.o_adder(0)
  }.elsewhen(outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) =/= outvn1(3)){
    io.matrix(0)(0) := io.o_adder(1)
  }.elsewhen(outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) === outvn1(3)){
    io.matrix(0)(0) := io.o_adder(1)
  }
  when((outvn1(0) === outvn1(1) && outvn1(2) === outvn1(3) && outvn1(1) =/= outvn1(2)) && (outvn2(0 )=/= outvn2(1))){
    io.matrix(0)(0):= io.o_adder(0)
    io.matrix(1)(0) := io.o_adder(2)
  }
  
  when((outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) =/= outvn1(3)) && (outvn2(0) === outvn2(1) && outvn2(1)=/=outvn2(3)) ){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(0)
    io.matrix(1)(0) := adder.io.O
  }.elsewhen((outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) =/= outvn1(3)) && (outvn2(0) === outvn2(1) && outvn2(1)===outvn2(3))){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(1)
    io.matrix(1)(0) := adder.io.O
  }.elsewhen(((outvn1(0) === outvn1(1)) && (outvn1(1) =/= outvn1(2)) && (outvn1(2) === outvn1(3))) && ((outvn2(0) === outvn2(1)) && (outvn2(1)=/=outvn2(3)))){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(0)
    io.matrix(1)(0) := adder.io.O
  }.elsewhen(((outvn1(0) === outvn1(1)) && (outvn1(1) =/= outvn1(2)) && (outvn1(2) =/= outvn1(3))) && (outvn2(0) === outvn2(1) && outvn2(1)=/=outvn2(3))){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(0)
    io.matrix(1)(0) := adder.io.O
  }.elsewhen(outvn2(0) === outvn2(1) && outvn2(1) === outvn2(2)  &&  outvn2(2) === outvn2(3)){
      io.matrix(1)(0) := io.o_adder2(1)
  }.elsewhen(outvn2(0) === outvn2(1) && outvn2(1) === outvn2(2)  &&  outvn2(2) =/= outvn2(3)){
      io.matrix(1)(0) := io.o_adder2(1)

  }.elsewhen((outvn2(0) === outvn2(1) && outvn2(1) =/= outvn2(2)  &&  outvn2(2) =/= outvn2(3)) && (outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) === outvn1(3))){
    io.matrix(1)(0) := io.o_adder2(1)
  }
  
  when (counter > 101.U){
     when(outvn1(0) === outvn1(1) && outvn1(1) =/= outvn1(2)){
    io.matrix(0)(1) := io.o_adder(0)
  }.elsewhen(outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) =/= outvn1(3)){
    io.matrix(0)(1) := io.o_adder(1)
  }.elsewhen(outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) === outvn1(3)){
    io.matrix(0)(1) := io.o_adder(1)
  }
  when((outvn1(0) === outvn1(1) && outvn1(2) === outvn1(3) && outvn1(1) =/= outvn1(2)) && (outvn2(0 )=/= outvn2(1))){
    io.matrix(0)(1):= io.o_adder(0)
    io.matrix(1)(1) := io.o_adder(2)
  }
  
  when((outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) =/= outvn1(3)) && (outvn2(0) === outvn2(1) && outvn2(1)=/=outvn2(3)) ){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(0)
    io.matrix(1)(1) := adder.io.O
  }.elsewhen((outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) =/= outvn1(3)) && (outvn2(0) === outvn2(1) && outvn2(1)===outvn2(3))){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(1)
    io.matrix(1)(1) := adder.io.O
  }.elsewhen(((outvn1(0) === outvn1(1)) && (outvn1(1) =/= outvn1(2)) && (outvn1(2) === outvn1(3))) && ((outvn2(0) === outvn2(1)) && (outvn2(1)=/=outvn2(3)))){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(0)
    io.matrix(1)(1) := adder.io.O
  }.elsewhen(((outvn1(0) === outvn1(1)) && (outvn1(1) =/= outvn1(2)) && (outvn1(2) =/= outvn1(3))) && (outvn2(0) === outvn2(1) && outvn2(1)=/=outvn2(3))){
    adder.io.A := io.o_adder(2)
    adder.io.B := io.o_adder2(0)
    io.matrix(1)(1) := adder.io.O
  }.elsewhen(outvn2(0) === outvn2(1) && outvn2(1) === outvn2(2)  &&  outvn2(2) === outvn2(3)){
      io.matrix(1)(1) := io.o_adder2(1)
  }.elsewhen(outvn2(0) === outvn2(1) && outvn2(1) === outvn2(2)  &&  outvn2(2) =/= outvn2(3)){
      io.matrix(1)(1) := io.o_adder2(1)

  }.elsewhen((outvn2(0) === outvn2(1) && outvn2(1) =/= outvn2(2)  &&  outvn2(2) =/= outvn2(3)) && (outvn1(0) === outvn1(1) && outvn1(1) === outvn1(2) && outvn1(2) === outvn1(3))){
    io.matrix(1)(1) := io.o_adder2(1)
  }
  }
 

  }

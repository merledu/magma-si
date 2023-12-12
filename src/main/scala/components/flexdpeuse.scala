package magmasi.components

import chisel3._
import chisel3.util._

class flexdpeuse(implicit val Config: MagmasiConfig) extends Module {
    //implicit val config = MagmasiConfig()
  val io = IO(new Bundle {
    //val i_vn = Input(Vec(NUM_PES, UInt(LOG2_PES.W)))
    val f1i_stationary = Input(Bool())
     val f2i_stationary = Input(Bool())

    val f1i_data_valid = Input(Bool())
     val f2i_data_valid = Input(Bool())

    val f1i_data_bus = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
     val f2i_data_bus = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

    val f1i_data_bus2  = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
    val f2i_data_bus2  = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

    val f1Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val f2Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     
   // val f1i_vn = Output(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))
   // val f2i_vn = Output(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))

    val f1o_valid = Output(Vec(Config.NUM_PES, UInt(1.W)))
    val f2o_valid = Output(Vec(Config.NUM_PES, UInt(1.W)))

    val f1o_data_bus = Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
     val f2o_data_bus = Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

     val f1o_adder = Output(Vec(Config.NUM_PES-1, UInt(Config.DATA_TYPE.W)))
     val f2o_adder = Output(Vec(Config.NUM_PES-1, UInt(Config.DATA_TYPE.W)))

     val f1r_multes =  Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
      val f2r_multes = Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

    val LEVELS   : Int = (2 * (math.log(Config.NUM_PES) / math.log(2))).toInt + 1

     val f1i_mux_bus   = Input(Vec(Config.NUM_PES,Vec(Config.NUM_PES, UInt((LEVELS-1).W))))
      val f2i_mux_bus   = Input(Vec(Config.NUM_PES,Vec(Config.NUM_PES, UInt((LEVELS-1).W))))
     val matrix =Output(Vec(2, Vec(2, UInt(Config.DATA_TYPE.W))))

  })
   val matrix = Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     dontTouch(matrix)
    io.matrix := matrix

   val flexdpe1 = Module(new flexdpecom4())
   flexdpe1.io.i_stationary := io.f1i_stationary
    flexdpe1.io.i_data_valid := io.f1i_data_valid
    flexdpe1.io.i_data_bus := io.f1i_data_bus
    flexdpe1.io.i_data_bus2 := io.f1i_data_bus2
    flexdpe1.io.i_mux_bus := io.f1i_mux_bus
    flexdpe1.io.Stationary_matrix:= io.f1Stationary_matrix

    io.f1o_valid :=   flexdpe1.io.o_valid
    io.f1o_adder :=  flexdpe1.io.o_adder
     io.f1o_data_bus := flexdpe1.io.o_data_bus
     io.f1r_multes  := flexdpe1.io.r_multes
   
     val flexdpe2 = Module(new flexdpecom4())
   flexdpe2.io.i_stationary := io.f2i_stationary
    flexdpe2.io.i_data_valid := io.f2i_data_valid
    flexdpe2.io.i_data_bus := io.f2i_data_bus
    flexdpe2.io.i_data_bus2 := io.f2i_data_bus2
    flexdpe2.io.i_mux_bus := io.f2i_mux_bus
    flexdpe2.io.Stationary_matrix:= io.f2Stationary_matrix

    io.f2o_valid :=   flexdpe2.io.o_valid
    io.f2o_adder :=  flexdpe2.io.o_adder
     io.f2o_data_bus := flexdpe2.io.o_data_bus
     io.f2r_multes  := flexdpe2.io.r_multes
   

    

      matrix(0)(0) := io.f1o_adder(0)
      matrix(1)(0) := io.f1o_adder(2)
      when(flexdpe1.io.i_data_bus(3) === 0.U ){
        matrix(1)(0) := io.f1r_multes(2)

      }.elsewhen(flexdpe1.io.i_data_bus(2) === 0.U){
         matrix(1)(0) := io.f1r_multes(3)
      }.elsewhen(flexdpe1.io.i_data_bus(1) === 0.U){
         matrix(0)(0) := io.f1r_multes(0)
      }.elsewhen(flexdpe1.io.i_data_bus(0) === 0.U){
         matrix(0)(0) := io.f1r_multes(1)
      }


    
    // matrix(0)(0) := io.o_adder(0)
    // matrix(1)(0) := io.o_adder(2)
    // dontTouch(matrix)

    // counter := counter + 1.U
    // dontTouch(counter)

    matrix(0)(1) := io.f2o_adder(0)
      matrix(1)(1) := io.f2o_adder(2)
      when(flexdpe2.io.i_data_bus(3) === 0.U ){
        matrix(1)(1) := io.f2r_multes(2)

      }.elsewhen(flexdpe2.io.i_data_bus(2) === 0.U){
         matrix(1)(1) := io.f2r_multes(3)
      }.elsewhen(flexdpe2.io.i_data_bus(1) === 0.U){
         matrix(0)(1) := io.f2r_multes(0)
      }.elsewhen(flexdpe2.io.i_data_bus(0) === 0.U){
         matrix(0)(1) := io.f2r_multes(1)
      }



     
}

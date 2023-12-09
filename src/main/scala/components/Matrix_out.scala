package magmasi.components

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage

class Matrix(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val CalFDE = Input(UInt(32.W))
        //val i_vn = Input(Vec(config.NUM_PES, UInt(config.LOG2_PES.W)))
        val i_stationary = Input(Bool())
        val i_data_valid = Input(Bool())
        // val CalFDE = Input(UInt(32.W))
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
       // val output = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
       // val out_adder = Output(Vec(config.NoOfFDPE, Vec(config.NUM_PES-1, UInt(config.DATA_TYPE.W))))
        //val matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    }) 
    val matrix = Reg(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))

    val adder = Module(new SimpleAdder())
    adder.io.A := 0.U
    adder.io.B := 0.U


     val FDPU = Module(new FlexDPU())
    FDPU.io.Stationary_matrix := io.Stationary_matrix
    FDPU.io.Streaming_matrix := io.Streaming_matrix
    FDPU.io.CalFDE := io.CalFDE
    FDPU.io.i_stationary:=io.i_stationary
    FDPU.io.i_data_valid := io.i_data_valid
    //io.out_adder := FDPU.io.out_adder

    val ivn = Module(new ivntop).io
    ivn.Stationary_matrix := io.Stationary_matrix

    when(ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1)){
        matrix(0)(0) := FDPU.io.out_adder(0)(0)
    }.elsewhen(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2)){
        matrix(0)(0) := FDPU.io.out_adder(0)(0)
    }.elsewhen(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3)){
        matrix(0)(0) := FDPU.io.out_adder(0)(1)
    }.elsewhen(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)){
        matrix(0)(0) := FDPU.io.out_adder(0)(1)
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1)) || 
     (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2))){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(0)(0) := adder.io.O
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)) || 
     (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(0)(0) := adder.io.O






}
}
object MatrixDriver extends App {
    implicit val config:MagmasiConfig = MagmasiConfig()
  (new ChiselStage).emitVerilog(new Matrix)
}

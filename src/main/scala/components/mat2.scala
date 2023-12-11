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
        val row_counting = Output(Vec(16, UInt(32.W)))
    }) 
    val matrix = Reg(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    var adder1 = Reg(0.U(32.W))

    val adder = Module(new SimpleAdder())
    adder.io.A := 0.U
    adder.io.B := 0.U

    val adder1 = Module(new SimpleAdder())
    adder1.io.A := 0.U
    adder1.io.B := 0.U


     val FDPU = Module(new FlexDPU())
    FDPU.io.Stationary_matrix := io.Stationary_matrix
    FDPU.io.Streaming_matrix := io.Streaming_matrix
    FDPU.io.CalFDE := io.CalFDE
    FDPU.io.i_stationary:=io.i_stationary
    FDPU.io.i_data_valid := io.i_data_valid
    //io.out_adder := FDPU.io.out_adder

    val ivn = Module(new ivntop).io
    ivn.Stationary_matrix := io.Stationary_matrix
    io.row_counting := ivn.row_countss
    
   





    when(io.row_counting(0) === 1.U){
      matrix(0)(0) := FDPU.io.out_adder(0)(0)

    }.elsewhen(io.row_counting(0) === 2.U){
      matrix(0)(0) := FDPU.io.out_adder(0)(0)
   }.elsewhen(io.row_counting(0) === 3.U){
      matrix(0)(0) := FDPU.io.out_adder(0)(1)
   }.elsewhen(io.row_counting(0) === 4.U){
      matrix(0)(0) := FDPU.io.out_adder(0)(1)
   }.elsewhen(io.row_counting(0) === 5.U){
      adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(0)(0) := adder.io.O
   }.elsewhen(io.row_counting(0) === 6.U){
      adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(0)(0) := adder.io.O
   }.elsewhen(io.row_counting(0) === 7.U){
      adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(0)(0) := adder.io.O
   }.elsewhen(io.row_counting(0) === 8.U){
      adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(0)(0) := adder.io.O
           
   }

    when(io.row_counting(1) === 1.U && io.row_counting(0) === 2.U){
      matrix(1)(0) := FDPU.io.out_adder(2)(1)

    }.elsewhen(io.row_counting(1) === 2.U && io.row_counting(0) === 2.U){
      matrix(1)(0) := FDPU.io.out_adder(2)(2)
   }.elsewhen(io.row_counting(1) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(2)(2)
        adder.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder.i
   }.elsewhen(io.row_counting(1) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(2)(2)
        adder.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder.i
   }.elsewhen(io.row_counting(1) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(2)(2)
        adder.io.B := FDPU.io.out_adder(3)(1)
        matrix(1)(0) := adder.io.O
   }.elsewhen(io.row_counting(1) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(2)(2)
        adder.io.B := FDPU.io.out_adder(3)(1)
        matrix(1)(0) := adder.io.O
   }.elsewhen(io.row_counting(1) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(2)(2)
        adder.io.B := FDPU.io.out_adder(3)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(4)(0)
        matrix(1)(0) := adder1.io.O
   }.elsewhen(io.row_counting(1) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(2)(2)
        adder.io.B := FDPU.io.out_adder(3)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(4)(0)
        matrix(1)(0) := adder1.io.O
           
   }

   when(io.row_counting(2) === 1.U){
      matrix(2)(0) := FDPU.io.out_adder(4)(0)

    }.elsewhen(io.row_counting(2) === 2.U){
      matrix(2)(0) := FDPU.io.out_adder(4)(0)
   }.elsewhen(io.row_counting(2) === 3.U){
      matrix(2)(0) := FDPU.io.out_adder(4)(1)
   }.elsewhen(io.row_counting(2) === 4.U){
      matrix(2)(0) := FDPU.io.out_adder(4)(1)
   }.elsewhen(io.row_counting(2) === 5.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(0)
        matrix(2)(0) := adder.io.O
   }.elsewhen(io.row_counting(2) === 6.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(0)
        matrix(2)(0) := adder.io.O
   }.elsewhen(io.row_counting(2) === 7.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(1)
        matrix(2)(0) := adder.io.O
   }.elsewhen(io.row_counting(2) === 8.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(1)
        matrix(2)(0) := adder.io.O
           
   }
   when(io.row_counting(3) === 1.U){
      matrix(3)(0) := FDPU.io.out_adder(4)(0)

    }.elsewhen(io.row_counting(3) === 2.U){
      matrix(3)(0) := FDPU.io.out_adder(6)(0)
   }.elsewhen(io.row_counting(3) === 3.U){
      matrix(3)(0) := FDPU.io.out_adder(4)(1)
   }.elsewhen(io.row_counting(3) === 4.U){
      matrix(3)(0) := FDPU.io.out_adder(4)(1)
   }.elsewhen(io.row_counting(3) === 5.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(0)
        matrix(3)(0) := adder.io.O
   }.elsewhen(io.row_counting(3) === 6.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(0)
        matrix(3)(0) := adder.io.O
   }.elsewhen(io.row_counting(3) === 7.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(1)
        matrix(3)(0) := adder.io.O
   }.elsewhen(io.row_counting(3) === 8.U){
      adder.io.A := FDPU.io.out_adder(4)(1)
        adder.io.B := FDPU.io.out_adder(5)(1)
        matrix(3)(0) := adder.io.O
           
   }

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(0) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){


      
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.i
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 2)(0)
        matrix(i)(0) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(0) := adder.i
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(0) := adder.i
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+2)(0)
        matrix(i)(0) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+2)(0)
        matrix(i)(0) := adder1.io.O
           
   }
           

   }



















    //matrix(0)(0)
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
       //matrix(1)(0)
    when(ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3)){
        matrix(1)(0) := FDPU.io.out_adder(0)(1)
    }.elsewhen(ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)){
        matrix(1)(0) := FDPU.io.out_adder(0)(1)
    }.elsewhen((ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1))
    || (ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2)) ){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
     || (ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(1)(0) := adder.io.O
    }.elsewhen((ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder1.io.O
     }
     
     //matrix(0)(1) 1
    when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3)) ||(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)) ){
        matrix(1)(0) := FDPU.io.out_adder(0)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1))
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)) ){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder1.io.O
     }
    // }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
    //  && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))){
    //     adder.io.A := FDPU.io.out_adder(0)(2)
    //     adder.io.B := FDPU.io.out_adder(1)(1)
    //     adder1.io.A := adder.io.O
    //     adder1.io.B := FDPU.io.out_adder(2)(1)
    //     matrix(1)(0) := adder1.io.O
    //  }

     //matrix(0)(1) 2
    when(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)){
        matrix(1)(0) := FDPU.io.out_adder(0)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) )
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) )){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)) ){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder1.io.O
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder1.io.O
     }

          //matrix(0)(1) 3
    when(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1)
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2)  )){
        matrix(1)(0) := FDPU.io.out_adder(1)(0)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3) )
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
         matrix(1)(0) := FDPU.io.out_adder(1)(1)

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0)  && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)  && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)) ){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)  && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)  && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)  && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
   
     }

       //matrix(1)(0) 4
      when(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2)){
        matrix(1)(0) := FDPU.io.out_adder(1)(1)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1)&& ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        matrix(1)(0) := FDPU.io.out_adder(1)(1)

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)&& ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)) ){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1)
     && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)&& ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)&& ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0)
     && ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder1.io.O
     }

       //matrix(1)(0) 5
      when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))){
        matrix(1)(0) := FDPU.io.out_adder(1)(1)
     }.elsewhen (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)){
         matrix(1)(0) := FDPU.io.out_adder(1)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)&& ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
       adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1)
     && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)&& ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0)){
        adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1)
     && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3)  && ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)&& ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0)
      && ivn.o_vn(3)(0) === ivn.o_vn(3)(1) && ivn.o_vn(3)(1) =/= ivn.o_vn(3)(2)){
         adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
         adder1.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder1.io.O

     }
      //matrix(1)(0) 6
      when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        matrix(1)(0) := FDPU.io.out_adder(1)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
       adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen(  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
      }.elsewhen(  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(1) =/= ivn.o_vn(3)(2) )){
         adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
         adder1.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder1.io.O
     }.elsewhen( (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(1) === ivn.o_vn(3)(2) && ivn.o_vn(3)(2) =/= ivn.o_vn(3)(3) )){
         adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
         adder1.io.B := FDPU.io.out_adder(3)(1)
        matrix(1)(0) := adder1.io.O

     }

       //matrix(1)(0) 7
      when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)) ){
        matrix(1)(0) := FDPU.io.out_adder(2)(0)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)
       && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
       matrix(1)(0) := FDPU.io.out_adder(2)(1)

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)  && ivn.o_vn(2)(3) === ivn.o_vn(3)(0)&& ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)
       && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0)  && ivn.o_vn(3)(0) === ivn.o_vn(3)(1)&& ivn.o_vn(3)(1) =/= ivn.o_vn(3)(2))){
        adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder.io.O
      }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)  && ivn.o_vn(2)(3) === ivn.o_vn(3)(0)&& ivn.o_vn(3)(0) === ivn.o_vn(3)(1)  && ivn.o_vn(3)(1) === ivn.o_vn(3)(2)&& ivn.o_vn(3)(2) =/= ivn.o_vn(3)(3))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)
       && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0)  && ivn.o_vn(3)(0) === ivn.o_vn(3)(1)&& ivn.o_vn(3)(1) === ivn.o_vn(3)(2)  && ivn.o_vn(3)(2) === ivn.o_vn(3)(3)&& ivn.o_vn(3)(3) =/= ivn.o_vn(4)(0))){
        adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(3)(1)
        matrix(1)(0) := adder.io.O

     }
// new
         //matrix(2)(0)
    when(ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) ){
        matrix(2)(0) := FDPU.io.out_adder(0)(2)
    }.elsewhen(ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)){
        matrix(2)(0) := FDPU.io.out_adder(0)(2)
    }.elsewhen((ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1))
    || (ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2)) ){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
     || (ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(1)(0) := adder.io.O
    }.elsewhen((ivn.o_vn(0)(0) =/= ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))){
        adder.io.A := FDPU.io.out_adder(0)(1)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder1.io.O
     }
     
     //matrix(0)(1) 1
    when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3)) ||(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)) ){
        matrix(1)(0) := FDPU.io.out_adder(0)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1))
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)) ){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder1.io.O
     }
    // }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
    //  && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))){
    //     adder.io.A := FDPU.io.out_adder(0)(2)
    //     adder.io.B := FDPU.io.out_adder(1)(1)
    //     adder1.io.A := adder.io.O
    //     adder1.io.B := FDPU.io.out_adder(2)(1)
    //     matrix(1)(0) := adder1.io.O
    //  }

     //matrix(0)(1) 2
    when(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)){
        matrix(1)(0) := FDPU.io.out_adder(0)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) )
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) )){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)) ){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder1.io.O
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) =/= ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(0)(2)
        adder.io.B := FDPU.io.out_adder(1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder1.io.O
     }

          //matrix(0)(1) 3
    when(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1)
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2)  )){
        matrix(1)(0) := FDPU.io.out_adder(1)(0)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3) )
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
         matrix(1)(0) := FDPU.io.out_adder(1)(1)

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0)  && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)  && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)) ){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)  && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)  && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
     || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) =/= ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)  && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
   
     }

       //matrix(1)(0) 4
      when(ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2)){
        matrix(1)(0) := FDPU.io.out_adder(1)(1)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1)&& ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        matrix(1)(0) := FDPU.io.out_adder(1)(1)

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)&& ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)) ){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1)
     && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
    || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)&& ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) =/= ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) =/= ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)&& ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)&& ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0)
     && ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))){
        adder.io.A := FDPU.io.out_adder(1)(1)
        adder.io.B := FDPU.io.out_adder(2)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder1.io.O
     }

       //matrix(1)(0) 5
      when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3))){
        matrix(1)(0) := FDPU.io.out_adder(1)(1)
     }.elsewhen (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)){
         matrix(1)(0) := FDPU.io.out_adder(1)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)&& ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
       adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1)
     && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)&& ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0)){
        adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
     }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)  && ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1)
     && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3)  && ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2) && ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0) 
     && ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) =/= ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3) && ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0)&& ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0)
      && ivn.o_vn(3)(0) === ivn.o_vn(3)(1) && ivn.o_vn(3)(1) =/= ivn.o_vn(3)(2)){
         adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
         adder1.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder1.io.O

     }
      //matrix(1)(0) 6
      when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0))){
        matrix(1)(0) := FDPU.io.out_adder(1)(2)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
    ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2))){
       adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(0)
        matrix(1)(0) := adder.io.O

    }.elsewhen(  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
        adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
      }.elsewhen(  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3) && ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))
      ||  (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(1) =/= ivn.o_vn(3)(2) )){
         adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
         adder1.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder1.io.O
     }.elsewhen( (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) =/= ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) === ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0) && ivn.o_vn(3)(1) === ivn.o_vn(3)(2) && ivn.o_vn(3)(2) =/= ivn.o_vn(3)(3) )){
         adder.io.A := FDPU.io.out_adder(1)(2)
        adder.io.B := FDPU.io.out_adder(2)(1)
        matrix(1)(0) := adder.io.O
         adder1.io.B := FDPU.io.out_adder(3)(1)
        matrix(1)(0) := adder1.io.O

     }

       //matrix(1)(0) 7
      when((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) =/= ivn.o_vn(2)(1))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) =/= ivn.o_vn(2)(2)) ){
        matrix(1)(0) := FDPU.io.out_adder(2)(0)
    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) =/= ivn.o_vn(2)(3))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)
       && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) =/= ivn.o_vn(3)(0))){
       matrix(1)(0) := FDPU.io.out_adder(2)(1)

    }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)  && ivn.o_vn(2)(3) === ivn.o_vn(3)(0)&& ivn.o_vn(3)(0) =/= ivn.o_vn(3)(1))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)
       && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0)  && ivn.o_vn(3)(0) === ivn.o_vn(3)(1)&& ivn.o_vn(3)(1) =/= ivn.o_vn(3)(2))){
        adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(3)(0)
        matrix(1)(0) := adder.io.O
      }.elsewhen((ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1)
      && ivn.o_vn(2)(1) === ivn.o_vn(2)(2) && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)  && ivn.o_vn(2)(3) === ivn.o_vn(3)(0)&& ivn.o_vn(3)(0) === ivn.o_vn(3)(1)  && ivn.o_vn(3)(1) === ivn.o_vn(3)(2)&& ivn.o_vn(3)(2) =/= ivn.o_vn(3)(3))
      || (ivn.o_vn(0)(0) === ivn.o_vn(0)(1) && ivn.o_vn(0)(1) === ivn.o_vn(0)(2)&& ivn.o_vn(0)(2) === ivn.o_vn(0)(3) && ivn.o_vn(0)(3) === ivn.o_vn(1)(0)&& ivn.o_vn(1)(0) === ivn.o_vn(1)(1) && ivn.o_vn(1)(1) === ivn.o_vn(1)(2) && ivn.o_vn(1)(2) === ivn.o_vn(1)(3)&& ivn.o_vn(1)(3) =/= ivn.o_vn(2)(0) && ivn.o_vn(2)(0) === ivn.o_vn(2)(1) && ivn.o_vn(2)(1) === ivn.o_vn(2)(2)
       && ivn.o_vn(2)(2) === ivn.o_vn(2)(3)&& ivn.o_vn(2)(3) === ivn.o_vn(3)(0)  && ivn.o_vn(3)(0) === ivn.o_vn(3)(1)&& ivn.o_vn(3)(1) === ivn.o_vn(3)(2)  && ivn.o_vn(3)(2) === ivn.o_vn(3)(3)&& ivn.o_vn(3)(3) =/= ivn.o_vn(4)(0))){
        adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(3)(1)
        matrix(1)(0) := adder.io.O

     }
     
  

 



}


object MatrixDriver extends App {
    implicit val config:MagmasiConfig = MagmasiConfig()
  (new ChiselStage).emitVerilog(new Matrix)
}

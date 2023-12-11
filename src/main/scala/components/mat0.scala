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
        val matrix = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val row_counting = Output(Vec(16, UInt(32.W)))
    }) 
    val matrix = Reg(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    io.matrix := matrix
   
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
    
   var counter = RegInit(0.U(32.W))
   var count = RegInit(0.U(32.W))
   dontTouch(counter)
   dontTouch(count)
   var rowc01 = RegInit(0.U(32.W))
   var rowc012 = RegInit(0.U(32.W))
   var rowc0123 = RegInit(0.U(32.W))
   var rowc01234 = RegInit(0.U(32.W))
   var rowc012345 = RegInit(0.U(32.W))
   var rowc0123456 = RegInit(0.U(32.W))
   var rowc01234567 = RegInit(0.U(32.W))
         
      rowc01 := io.row_counting(0) + io.row_counting(1)
      rowc012 := io.row_counting(0) + io.row_counting(1) + io.row_counting(2)
      rowc0123 := io.row_counting(0) + io.row_counting(1) + io.row_counting(2) + io.row_counting(3)
      rowc01234 := io.row_counting(0) + io.row_counting(1) + io.row_counting(2) + io.row_counting(3) + io.row_counting(4)
      rowc012345 := io.row_counting(0) + io.row_counting(1) + io.row_counting(2) + io.row_counting(3) + io.row_counting(4) + io.row_counting(5)
      rowc0123456 := io.row_counting(0) + io.row_counting(1) + io.row_counting(2) + io.row_counting(3) + io.row_counting(4) + io.row_counting(5) + io.row_counting(6)
      rowc01234567 := io.row_counting(0) + io.row_counting(1) + io.row_counting(2) + io.row_counting(3) + io.row_counting(4) + io.row_counting(5) + io.row_counting(6) + io.row_counting(7)
   



      when (counter < 305.U){
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


   for ( i <- 0 until 8){
         


        
       when(io.row_counting(i) === 1.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      matrix(i)(0) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }


     when(io.row_counting(i) === 1.U && (((io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) ))){
      matrix(i)(0) := FDPU.io.out_adder(1 * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && (((io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) ))){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && ((count === 1.U && (io.row_counting(0) === 8.U || rowc01 === 8.U || rowc012 === 8.U || rowc0123 === 8.U || rowc01234 === 8.U || rowc012345 === 8.U || rowc0123456 === 8.U ) )
       || (count === 2.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U) || rowc01 === 16.U || rowc012 === 16.U || rowc0123 === 16.U || rowc01234 === 16.U || rowc012345 === 16.U || rowc0123456 === 16.U ))
        || (count === 3.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U) ||  rowc012 === 24.U || rowc0123 === 24.U || rowc01234 === 24.U || rowc012345 === 24.U || rowc0123456 === 24.U )) 
         || (count === 4.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U)||  rowc0123 === 32.U ||  rowc01234 === 32.U || rowc012345 === 32.U || rowc0123456 === 32.U )) 
          || (count === 5.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U) || rowc01234 === 40.U || rowc012345 === 40.U || rowc0123456 === 40.U ))
           || (count === 6.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U && io.row_counting(3) === 8.U && io.row_counting(4) === 8.U && io.row_counting(5) === 8.U)|| rowc012345 === 48.U || rowc0123456 === 48.U )) 
            || (count === 7.U && ((io.row_counting(0) === 8.U  && io.row_counting(1 ) === 8.U && io.row_counting(2) === 8.U&& io.row_counting(3) === 8.U&& io.row_counting(4) === 8.U && io.row_counting(5) === 8.U && io.row_counting(6) === 8.U) || rowc0123456 === 56.U  )  ) )){
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
        matrix(i)(0) := adder.io.O
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
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(0) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(0) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(0) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(0) := adder.io.O
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
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(0) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(0) := adder1.io.O
           
   }

  }





     count := count + 1.U      

   }

    when (counter > 306.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(1) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(1) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(1) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(1) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(1) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(1) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(1) := adder1.io.O
           
   }

  }
}
 when (counter > 611.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(2) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(2) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(2) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(2) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(2) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(2) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(2) := adder1.io.O
           
   }

  }
}

 when (counter > 916.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(3) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(3) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(3) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(3) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(3) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(3) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(3) := adder1.io.O
           
   }

  }
}
when (counter > 1221.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(4) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(4) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(4) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(4) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(4) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(4) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(4) := adder1.io.O
           
   }

  }
}
when (counter > 1526.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(5) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(5) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(5) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(5) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(5) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(5) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(5) := adder1.io.O
           
   }

  }
}
when (counter > 1832.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(6) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(6) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(6) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(6) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(6) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(6) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(6) := adder1.io.O
           
   }

  }
}
when (counter > 1900.U){

   for ( i <- 0 until 8){

       when(io.row_counting(i) === 1.U){
      matrix(i)(7) := FDPU.io.out_adder(i * 2)(0)

    }.elsewhen(io.row_counting(i) === 2.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(0)
   }.elsewhen(io.row_counting(i) === 3.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 5.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(7) := adder.io.O
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 1.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(0)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 1.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 1.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(1)
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(i*2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(0)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 1.U){
      adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 1.U){
       adder.io.A := FDPU.io.out_adder(2)(1)
        adder.io.B := FDPU.io.out_adder(i*2 +1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2 + 1)(0)//
        matrix(i)(7) := adder1.io.O
           
   }
   when(io.row_counting(i) === 1.U && io.row_counting(0) === 2.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(1)

    }.elsewhen(io.row_counting(i) === 2.U && io.row_counting(0) === 2.U){
      matrix(i)(7) := FDPU.io.out_adder(i*2)(2)
   }.elsewhen(io.row_counting(i) === 3.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 4.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(0)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 5.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 6.U && io.row_counting(0) === 2.U){
      adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        matrix(i)(7) := adder.io.O
   }.elsewhen(io.row_counting(i) === 7.U && io.row_counting(0) === 2.U){
          adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(7) := adder1.io.O
   }.elsewhen(io.row_counting(i) === 8.U && io.row_counting(0) === 2.U){
       adder.io.A := FDPU.io.out_adder(i*2)(2)
        adder.io.B := FDPU.io.out_adder(i*2+1)(1)
        adder1.io.A := adder.io.O
        adder1.io.B := FDPU.io.out_adder(i*2+1)(0)//
        matrix(i)(7) := adder1.io.O
           
   }

  }
}


























   
  

 


counter := counter+1.U

























   
  

 



}


object MatrixDriver extends App {
    implicit val config:MagmasiConfig = MagmasiConfig()
  (new ChiselStage).emitVerilog(new Matrix)
}

package magmasi.components

import chisel3._
import chisel3.util._
import scala.util.control.Breaks._

class Benes3(implicit val config: MagmasiConfig) extends Module {
  val LEVELS   : Int = (2 * (math.log(config.NUM_PES) / math.log(2))).toInt + 1
  val io = IO(new Bundle {
    val i_data_bus2 = Input(Vec(config.NUM_PES,  UInt(config.DATA_TYPE.W)))
    val i_data_bus1  = Input(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
    val i_mux_bus   = Input(Vec(config.NUM_PES,Vec(config.NUM_PES, UInt((LEVELS-1).W))))
    val o_dist_bus1  = Output(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
    val o_dist_bus2  = Output(Vec(config.NUM_PES, UInt(config.DATA_TYPE.W)))
  })

  io.o_dist_bus1 <> io.i_data_bus1

  val inputArrayIndexes = io.i_data_bus1.toArray.zipWithIndex
  val parse_array = WireInit(VecInit(Seq.fill(config.NUM_PES+1)(0.U(config.DATA_TYPE.W))))
  //parsing logic here

  def BenesLogic( input:UInt , inputindex:UInt , muxes:UInt) : UInt = {

    val first_stage = Mux(muxes(0), Mux(inputindex % 2.U === 0.U, inputindex + 1.U, inputindex - 1.U), inputindex)
    // first is completed 

    val muxMiddleWidth = muxes(config.NUM_PES - 2,1).getWidth
    val boolArray = VecInit(Seq.tabulate(muxMiddleWidth)(i => (muxes(config.NUM_PES - 2,1))(i)))

    val newlevel = muxMiddleWidth
    var second_stage = WireInit(first_stage)
    for (i <- 0 until newlevel) {
        val calculation = second_stage % 4.U
        val nextIndex = MuxCase(second_stage, Seq(
            ((calculation === 0.U) && (boolArray(i) === 0.B), second_stage),
            ((calculation === 1.U) && (boolArray(i) === 0.B), second_stage),
            ((calculation === 2.U) && (boolArray(i) === 0.B), second_stage),
            ((calculation === 3.U) && (boolArray(i) === 0.B), second_stage),
            ((calculation === 0.U) && (boolArray(i) === 1.B), second_stage + 2.U),
            ((calculation === 1.U) && (boolArray(i) === 1.B), second_stage + 2.U),
            ((calculation === 2.U) && (boolArray(i) === 1.B), second_stage - 2.U),
            ((calculation === 3.U) && (boolArray(i) === 1.B), second_stage - 2.U)
        ))
      second_stage = nextIndex
  }
  //second stage is completed
  
  val third_stage = Mux(muxes(LEVELS - 2), Mux(second_stage % 2.U === 0.U, second_stage + 1.U, second_stage - 1.U), second_stage)

  third_stage   

  }


  for (i <- 0 until config.NUM_PES ) {

    //for (j <- 0 until config.NUM_PES){

        //println("i : ", i , "j : ",j)

    when ( io.i_data_bus2(i) =/= 0.U) {

        when ((io.i_mux_bus(i)(0).orR === 0.B) && (io.i_mux_bus(i)(1).orR === 0.B) && (io.i_mux_bus(i)(2).orR === 0.B) && (io.i_mux_bus(i)(3).orR === 0.B)){

            val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
                parse_array(parsedindexvalue) := io.i_data_bus2(i)
        }

        when ((io.i_mux_bus(i)(0).orR === 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B) && (io.i_mux_bus(i)(2).orR =/= 0.B) && (io.i_mux_bus(i)(3).orR =/= 0.B)){
            val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
            parse_array(parsedindexvalue) := io.i_data_bus2(i)
            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue1) := io.i_data_bus2(i)
            val parsedindexvalue2 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(2))// normal function call
            parse_array(parsedindexvalue2) := io.i_data_bus2(i)
            val parsedindexvalue3 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(3))// normal function call
            parse_array(parsedindexvalue3) := io.i_data_bus2(i)
        }

        when ((io.i_mux_bus(i)(0).orR === 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B) && (io.i_mux_bus(i)(2).orR =/= 0.B) && (io.i_mux_bus(i)(3).orR === 0.B)){
            val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
            parse_array(parsedindexvalue) := io.i_data_bus2(i)
            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue1) := io.i_data_bus2(i)
            val parsedindexvalue2 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(2))// normal function call
            parse_array(parsedindexvalue2) := io.i_data_bus2(i)
        }

        when ((io.i_mux_bus(i)(0).orR === 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B) && (io.i_mux_bus(i)(2).orR === 0.B) && (io.i_mux_bus(i)(3).orR === 0.B)){
            val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
            parse_array(parsedindexvalue) := io.i_data_bus2(i)
            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue1) := io.i_data_bus2(i)
        }

        
        // }.otherwise{
        //     parse_array(config.NUM_PES.U ) := 0.U
        // }

        when ((io.i_mux_bus(i)(0).orR =/= 0.B)){

            val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
                parse_array(parsedindexvalue) := io.i_data_bus2(i)
        }
        // }.elsewhen((io.i_mux_bus(i)(1).orR === 0.B)){
        //     parse_array(config.NUM_PES.U ) := 0.U
        
        // }.elsewhen((io.i_mux_bus(i)(2).orR === 0.B)){
        //     parse_array(config.NUM_PES.U ) := 0.U

        // }.elsewhen((io.i_mux_bus(i)(3).orR === 0.B)){
        //     parse_array(config.NUM_PES.U ) := 0.U

        // }.otherwise{
        //     parse_array(config.NUM_PES.U ) := 0.U
        // }

        when ((io.i_mux_bus(i)(0).orR =/= 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B)){

            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
                parse_array(parsedindexvalue1) := io.i_data_bus2(i)
            
        // }.elsewhen((io.i_mux_bus(i)(1).orR =/= 0.B)){

            val parsedindexvalue2 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue2) := io.i_data_bus2(i)

        }
        
        // }.elsewhen((io.i_mux_bus(i)(2).orR === 0.B)){
        //     parse_array(config.NUM_PES.U ) := 0.U

        // }.elsewhen((io.i_mux_bus(i)(3).orR === 0.B)){
        //     parse_array(config.NUM_PES.U ) := 0.U

        // }.otherwise{
        //     parse_array(config.NUM_PES.U ) := 0.U
        // }

        when ((io.i_mux_bus(i)(0).orR =/= 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B) && (io.i_mux_bus(i)(2).orR =/= 0.B)){

            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
                parse_array(parsedindexvalue1) := io.i_data_bus2(i)
            
        // }.elsewhen((io.i_mux_bus(i)(1).orR =/= 0.B)){

            val parsedindexvalue2 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue2) := io.i_data_bus2(i)
        
        // }.elsewhen((io.i_mux_bus(i)(2).orR =/= 0.B)){
            val parsedindexvalue3 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(2))// normal function call
            parse_array(parsedindexvalue3) := io.i_data_bus2(i)

        }

        // }.elsewhen((io.i_mux_bus(i)(3).orR === 0.B)){
        //     parse_array(config.NUM_PES.U ) := 0.U

        // }.otherwise{
        //     parse_array(config.NUM_PES.U ) := 0.U
        // }


        
        when ((io.i_mux_bus(i)(0).orR =/= 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B) && (io.i_mux_bus(i)(2).orR =/= 0.B) && (io.i_mux_bus(i)(3).orR =/= 0.B)){

            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
                parse_array(parsedindexvalue1) := io.i_data_bus2(i)
            
        // }.elsewhen((io.i_mux_bus(i)(1).orR =/= 0.B)){

            val parsedindexvalue2 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue2) := io.i_data_bus2(i)
        
        // }.elsewhen((io.i_mux_bus(i)(2).orR =/= 0.B)){
            val parsedindexvalue3 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(2))// normal function call
            parse_array(parsedindexvalue3) := io.i_data_bus2(i)

        // }.elsewhen((io.i_mux_bus(i)(3).orR =/= 0.B)){
            val parsedindexvalue4 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(3))// normal function call
            parse_array(parsedindexvalue4) := io.i_data_bus2(i)

        // }.otherwise{
        //     parse_array(config.NUM_PES.U ) := 0.U
        }

            when ((io.i_mux_bus(i)(0).orR === 0.B) && (io.i_mux_bus(i)(1).orR =/= 0.B) && (io.i_mux_bus(i)(2).orR =/= 0.B) && (io.i_mux_bus(i)(3).orR =/= 0.B)){

            val parsedindexvalue1 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(0))// normal function call
                parse_array(parsedindexvalue1) := io.i_data_bus2(i)
            
        // }.elsewhen((io.i_mux_bus(i)(1).orR =/= 0.B)){

            val parsedindexvalue2 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(1))// normal function call
            parse_array(parsedindexvalue2) := io.i_data_bus2(i)
        
        // }.elsewhen((io.i_mux_bus(i)(2).orR =/= 0.B)){
            val parsedindexvalue3 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(2))// normal function call
            parse_array(parsedindexvalue3) := io.i_data_bus2(i)

        // }.elsewhen((io.i_mux_bus(i)(3).orR =/= 0.B)){
            val parsedindexvalue4 = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i)(3))// normal function call
            parse_array(parsedindexvalue4) := io.i_data_bus2(i)

        // }.otherwise{
        //     parse_array(config.NUM_PES.U ) := 0.U
        }









    }.otherwise{
        parse_array(config.NUM_PES.U ) := 0.U   
    }

  }








for ( index <- 0 until config.NUM_PES){
    io.o_dist_bus2(index) := parse_array(index)
}



  }

package magmasi.components

import chisel3._
import chisel3.util._

class MyBenes2(DATA_TYPE:Int,NUM_PES:Int) extends Module {
  val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
  val io = IO(new Bundle {
    val i_data_bus2 = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_data_bus1  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_mux_bus   = Input(Vec(NUM_PES, UInt((LEVELS-1).W)))
    val o_dist_bus1  = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val o_dist_bus2  = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
  })

  io.o_dist_bus1 <> io.i_data_bus1

  val inputArrayIndexes = io.i_data_bus1.toArray.zipWithIndex
  val parse_array = WireInit(VecInit(Seq.fill(NUM_PES+1)(0.U(DATA_TYPE.W))))
  //parsing logic here

  def BenesLogic( input:UInt , inputindex:UInt , muxes:UInt) : UInt = {

    val first_stage = Mux(muxes(0), Mux(inputindex % 2.U === 0.U, inputindex + 1.U, inputindex - 1.U), inputindex)
    // first is completed 

    val muxMiddleWidth = muxes(NUM_PES - 2,1).getWidth
    val boolArray = VecInit(Seq.tabulate(muxMiddleWidth)(i => (muxes(NUM_PES - 2,1))(i)))

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

  for (i <- 1 until NUM_PES ) {

    when ( io.i_data_bus2(i) =/= 0.U) {

        when (io.i_mux_bus(i).orR){

            when(io.i_data_bus2(i) === io.i_data_bus2(i-1)) {

                val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U - 1.U,io.i_mux_bus(i))//function call for same input numbers with same indexes  
                parse_array(parsedindexvalue) := io.i_data_bus2(i)
            }.otherwise {

                val parsedindexvalue = BenesLogic(io.i_data_bus2(i),(inputArrayIndexes(i)._2).U,io.i_mux_bus(i))// normal function call
                parse_array(parsedindexvalue) := io.i_data_bus2(i)
            }    

        }.otherwise{

          when (io.i_data_bus2(i) === io.i_data_bus2(i-1)) {

            parse_array(i) := 0.U
          
          }.otherwise{
          
            parse_array(i) := io.i_data_bus2(i)
          
          }
        }

    }.otherwise{

        parse_array(NUM_PES.U ) := 0.U   

    }

  }

  when (io.i_data_bus2(0) =/= 0.U){

    val parsedindexvalue = BenesLogic(io.i_data_bus2(0),(inputArrayIndexes(0)._2).U,io.i_mux_bus(0))
    parse_array(parsedindexvalue) := io.i_data_bus2(0)

  }.otherwise{

    parse_array(NUM_PES) := 0.U
  
  }

for ( index <- 0 until NUM_PES){
    io.o_dist_bus2(index) := parse_array(index)
}

}

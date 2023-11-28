package magmasi.components

import chisel3._
import chisel3.util._

class FlexDPU(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val CalFDE = Input(UInt(32.W))
        val i_vn = Input(Vec(config.NUM_PES, UInt(config.LOG2_PES.W)))
        val i_stationary = Input(Bool())
        val i_data_valid = Input(Bool())
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    }) 
    val used_FlexDPE = Reg(Vec(config.NoOfFDPE, UInt(32.W)))
    dontTouch(used_FlexDPE)
    val equalDistribution = io.CalFDE / config.NoOfFDPE.U
    val remainingDistribution = io.CalFDE % config.NoOfFDPE.U
    val equalArray = VecInit(Seq.fill(config.NoOfFDPE)(equalDistribution))
    for (i <- 0 until config.NoOfFDPE) {
      used_FlexDPE(i) := Mux(i.U < remainingDistribution, equalArray(i) + 1.U, equalArray(i))
    }
    val sumOfUsedFlexDPE = used_FlexDPE.reduce(_ +& _)

    // ----------------------------------table work done--------------------------------------------------------

    val nonZeroValues = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U(32.W))))
    val index = RegInit(0.U(32.W))
    val iloop = RegInit(0.U(32.W))
    val jloop = RegInit(0.U(32.W))
    val Statvalid = RegInit(0.B)

    Statvalid := (iloop === (config.MaxRows-1).U) && (jloop === (config.MaxCols-1).U)
    when (io.Stationary_matrix(iloop)(jloop) =/= 0.U){
        nonZeroValues(index) := io.Stationary_matrix(iloop)(jloop)
        index := index + 1.U
    }

    when ( iloop < (config.MaxRows-1).U && (jloop === (config.MaxCols-1).U)){
        iloop := iloop + 1.U
    }

    when ( iloop <= (config.MaxRows-1).U && (jloop < (config.MaxCols-1).U)){
        jloop := jloop + 1.U
    }.elsewhen(iloop === (config.MaxRows-1).U && (jloop === (config.MaxCols-1).U)){
        jloop := jloop
    }.otherwise{
        jloop := 0.U
    }


    //------------------ Destination of flexdpe is complete ---------------------------------
    val mux = WireInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val src = WireInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val dest = WireInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val CountIteration = RegInit(0.U(32.W))
    val PF_Stream_Col = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(32.W))))

    dontTouch(mux)
    dontTouch(src)
    dontTouch(dest)
    when(Statvalid){
        val PF1 = Module(new PathFinder)
        PF1.io.DataValid := 1.B
        PF1.io.Stationary_matrix := io.Stationary_matrix
        PF1.io.NoDPE := 2.U // 0 means we need the src, muxes a/c to 1st DPE
        PF1.io.Streaming_matrix := PF_Stream_Col
        mux := PF1.io.i_mux_bus
        src := PF1.io.Source
        dest := PF1.io.destination

        for (j <- 0 until config.MaxRows){
            PF_Stream_Col(j) := io.Streaming_matrix(j)(CountIteration)
        }
        
        when (PF1.io.PF_Valid){
        CountIteration := CountIteration + 1.U
        }

        when (CountIteration === (config.MaxCols-1).U){
            CountIteration := CountIteration
        } 
    }
    dontTouch(PF_Stream_Col)
    dontTouch(CountIteration)

}

package magmasi.components

import chisel3._
import chisel3.util._

class FlexDPU2(implicit val config:MagmasiConfig) extends Module{
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
    // table work done


}

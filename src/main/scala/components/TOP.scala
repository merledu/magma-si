package magmasi.components

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage


class Top (implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
    val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(32.W))))
    val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(32.W))))
    val Third_Matrix = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(32.W))))
    val O_valid = Output(Bool())

})
    val PreProcessor = Module(new Regor(2,2,16))
    PreProcessor.io.mat1 := io.Streaming_matrix
    PreProcessor.io.mat2 := io.Stationary_matrix

    // val delay = RegInit(0.U(1.W)).
    
    // when ( delay <= 0.U){
    //     delay := delay + 1.U
    // }

    // when (delay === 1.U){
        val FDPU = Module(new FlexDPUby2)
        FDPU.io.Stationary_matrix := PreProcessor.io.compressedBitmap
        FDPU.io.Streaming_matrix := io.Streaming_matrix
        io.Third_Matrix := FDPU.io.output
        io.O_valid := FDPU.io.O_valid
        FDPU.io.valid := PreProcessor.io.valid
    // }.otherwise{
    //     io.Third_Matrix := WireInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    // }

}
object TopDriver extends App {
    implicit val config:MagmasiConfig = MagmasiConfig()
  (new ChiselStage).emitVerilog(new Top)
}



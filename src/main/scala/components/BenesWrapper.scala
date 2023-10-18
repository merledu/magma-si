package magmasi.components

import chisel3._
import chisel3.util._

class BenesWrapper(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val i_mux_bus = Input(Vec(config.MaxRows * config.MaxCols,UInt(config.DATA_TYPE.W)))    
        val o_mux_bus   = Output(Vec(2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES, Bool()))
    })


    val Index = RegInit(0.U(32.W)) // loop counter 
    val MuxLevelIndes = RegInit(0.U(32.W)) // muxes loop iteration level wise
    val MuxBool = RegInit(0.U(32.W)) // boolean output muxes


    var lastIndex = 2 * (config.LEVELS - 2) * (config.LEVELS - 1)
    val vale = WireInit(0.U)
    vale := lastIndex.U
    dontTouch(vale)
    //val lastIndexTrack = RegInit(0.U(32.W))
    print(lastIndex)

    val mux = RegInit(VecInit(Seq.fill(2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES)(false.B)))
    
    io.o_mux_bus := mux

    
    when (MuxLevelIndes =/= (config.LEVELS - 2).U) {
        when (io.i_mux_bus(Index)(MuxLevelIndes) === 1.B) {
            mux(MuxBool) := 1.U
            mux(MuxBool + 1.U) := 0.U
        }.elsewhen (io.i_mux_bus(Index)(MuxLevelIndes === 0.B)) {
            mux(MuxBool) := 0.U
            mux(MuxBool + 1.U) := 0.U
        }
    }.otherwise{
        when (io.i_mux_bus(Index)(MuxLevelIndes) === 1.B) {
            mux(vale) := 1.U
        }.otherwise{
            mux(vale) := 0.U
        }
        lastIndex = lastIndex + 1
    }






    when ((MuxLevelIndes - 1.U) === (config.LEVELS - 3).U ){ // counter index increment
        Index := Index + 1.U
        MuxLevelIndes := 0.U
    }

    when ((MuxLevelIndes.asSInt - 1.S) < (config.LEVELS - 3).S ) {
        MuxLevelIndes := MuxLevelIndes + 1.U
    }

    when (MuxBool >= 0.U){
        MuxBool := MuxBool + 2.U
    }
    dontTouch(MuxBool)
    dontTouch(Index)
    dontTouch(MuxLevelIndes)
}
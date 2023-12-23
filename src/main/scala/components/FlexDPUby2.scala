package magmasi.components

import chisel3._
import chisel3.util._

class FlexDPUby2(implicit val config:MagmasiConfig) extends Module{

    val io = IO(new Bundle{
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
    })

    val DPEDest = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(config.NUM_PES)(0.U(32.W))))))
    val DPESrc = RegInit(VecInit(Seq.fill(config.MaxCols)(VecInit(Seq.fill(config.MaxRows)(0.U(32.W))))))
    dontTouch(DPESrc)
    val indexRow = RegInit(0.U(32.W))
    val indexCol = RegInit(0.U(32.W))
    val SindexRow = RegInit(0.U(32.W))
    val SindexCol = RegInit(0.U(32.W))
    val iloop = RegInit(0.U(32.W))
    val jloop = RegInit(0.U(32.W))
    val Statvalid = RegInit(0.B)
    val SrcDestValid = RegInit(0.B)
    SrcDestValid := (iloop === (config.MaxRows -1 ).U && (jloop === (config.MaxCols-1).U) )
    dontTouch(SrcDestValid)
    dontTouch(SindexCol)
    dontTouch(SindexRow)

    Statvalid := (iloop === (config.MaxRows-1).U) && (jloop === (config.MaxCols-1).U)
    when (io.Stationary_matrix(iloop)(jloop) =/= 0.U){
        DPEDest(indexRow)(indexCol) := io.Stationary_matrix(iloop)(jloop)
        indexCol := indexCol + 1.U
    }
    when (io.Streaming_matrix(jloop)(iloop) =/= 0.U){
        DPESrc(SindexRow)(SindexCol) := io.Streaming_matrix(jloop)(iloop)
        SindexCol := SindexCol + 1.U
    }

    when (SindexCol === (config.MaxCols -1).U && (SindexRow === (config.MaxRows -1).U)){
        SindexRow := SindexRow
        SindexCol := SindexCol
    }.elsewhen (SindexCol === (config.MaxCols -1).U){
        SindexRow := SindexRow + 1.U
        SindexCol := 0.U
    }

    when (indexCol === (config.NUM_PES -1).U && (indexRow === (config.MaxRows -1).U)){
        indexRow := indexRow
        indexCol := indexCol
    }.elsewhen (indexCol === (config.NUM_PES -1).U){
        indexRow := indexRow + 1.U
        indexCol := 0.U
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

    // ------------------------- source destination calculation is complete -----------------------
    
    def Reverse(in:UInt):UInt={
        val rev =(0 until 4).foldLeft(0.U) { (acc, i) =>
            acc | ((in >> i.U)(0) << (4 - i - 1).U)
        }
        rev
    }

    val iterationChange = RegInit(0.U)
    when (SrcDestValid){
        val PF = Module(new PathFinder)
        PF.io.Stationary_matrix := io.Stationary_matrix
        PF.io.Streaming_matrix := DPESrc(iterationChange)
        PF.io.NoDPE := 0.U
        PF.io.DataValid := SrcDestValid
        dontTouch(PF.io.i_mux_bus)



        when (iterationChange === (config.MaxCols -1 ).U){
            iterationChange := iterationChange
        }.elsewhen (PF.io.PF_Valid){
            iterationChange := iterationChange + 1.U
        }


        when (PF.io.PF_Valid){
            val FDPE = Module(new flexdpecom4)
            FDPE.io.i_stationary := 1.B
            FDPE.io.i_data_valid := 1.B
            FDPE.io.i_data_bus := DPEDest(iterationChange)
            for (i <- 0 until 2){
                FDPE.io.i_data_bus2(i) := DPESrc(iterationChange)(i)
            }
            for (i <- 2 until 4){
                FDPE.io.i_data_bus2(i) := 0.U
            }
            FDPE.io.Stationary_matrix := io.Stationary_matrix
            for (i <- 0 until 4){
                FDPE.io.i_mux_bus(i) := Reverse(PF.io.i_mux_bus(i))
            }
        }
    
    
        
    
    
    }

}

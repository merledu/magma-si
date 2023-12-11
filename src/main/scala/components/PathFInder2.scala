package magmasi.components

import chisel3._
import chisel3.util._

class PathFInder2(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val src = Input(Vec(config.NUM_PES,UInt(32.W)))
        val dest = Input(Vec(config.NUM_PES,UInt(32.W)))
        val StaMat = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val StrMat = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val mux = Output(Vec(config.NUM_PES,UInt(32.W)))
        val valid = Input(Bool())
        val Ovalid = Output(Bool())
    })

    val counterRegs1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    val counterRegs2 = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(config.DATA_TYPE.W))))
    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val mux = RegInit(VecInit(Seq.fill(config.NUM_PES)(0.U(32.W))))
    io.mux := mux
    val index = RegInit(0.U(32.W))

    when (io.valid){
        val count = Module(new SourceDestination)
        count.io.Stationary_matrix := io.StaMat
        count.io.Streaming_matrix := io.StrMat
    
    
        when (count.io.valid){
            counterRegs1 := count.io.counterMatrix1.bits
            counterRegs2 := count.io.counterMatrix2.bits



            
            when (counterRegs1(i)(j) =/= 0.U && (counterRegs2(i) =/= 0.U)){
                mux(index) := counterRegs1(i)(j) - counterRegs2(j)
                index := index + 1.U
            }
            
            
            
            
            
            
            
            
        
            
            
            when ( i < 1.U && (j === 1.U)){
                i := i + 1.U
                j := 0.U
            }.elsewhen(j < 1.U){
                j := j + 1.U
            }.elsewhen(i === 1.U && (j === 1.U)){
                i := i
                j := j
                io.Ovalid := 1.B
            }





        }.otherwise{
            io.Ovalid := 0.B
        }
    
    
    
    
    
    
    
    
    }.otherwise{
        io.Ovalid := 0.B
    }

    


}

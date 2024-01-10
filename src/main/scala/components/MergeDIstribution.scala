package magmasi.components

import chisel3._
import chisel3.util._

class abc3(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val PreMat = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val IDex = Input(UInt(32.W))
        val JDex = Input(UInt(32.W))
        val mat = Input(Vec(config.MaxRows,Vec(config.MaxCols,UInt(32.W))))
        val i_valid = Input(Bool())
        //val OutMat = Output(Vec(4,Vec(4,UInt(32.W))))
        val valid = Output(Bool())
        val Omat = Output(Vec(config.MaxRows,(Vec(config.MaxCols,UInt(32.W)))))
        val merge = Input(Bool())
    })

    val valo = RegInit(0.U)
    val b = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(32.W))))))
    io.Omat := b
    val check = RegInit(0.U(32.W))
    val counter = WireInit(0.B)
    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    io.valid := valo
    valo := (i === (config.MaxRows-1).U) && (j === (config.MaxCols-1).U)
    val a = RegInit(0.U(32.W))
    val k = RegInit(0.U(32.W))
    val l = RegInit(0.U(32.W))
    
    val delay = RegInit(0.U(32.W))

    when (delay <= (config.MaxRows-1).U && io.merge){
        delay := delay + 1.U
    }

    dontTouch(delay)





    when(io.merge && (delay === (config.MaxRows).U)){

    when ( k < io.IDex && (l === (config.MaxCols-1).U)){
        k := k + 1.U
        l := 0.U
    }.elsewhen ( k <= io.IDex && (l < (config.MaxCols-1).U)){
        l := l + 1.U
    }.elsewhen(k === io.IDex && (l === (config.MaxCols-1).U)){
        l := l
    }
    //when (io.merge){
    b(k)(l) := io.PreMat(k)(l)
    }
    when (io.i_valid && (i === 0.U) && ( j === 0.U)){
        i := io.IDex + 1.U
        j := 0.U
        check := check + 1.U
    }

    when (check >= 1.U){
        counter := 1.B
        check := check + 1.U
    }
    dontTouch(counter)


    when(io.merge){
    b(i)(j) := io.mat(i)(j)}















    // when (io.i_valid && (i <= 3.U) && (j < 3.U)){
    //     j := j + 1.U
    // }.elsewhen(io.i_valid &&(i === 3.U) && (j === 3.U)){
    //     j := j
    // }.otherwise{
    //     j := 0.U
    // }
    dontTouch(j)
    // when ((a =/= 0.U) && (i < 4.U) ){
    //     i := i + 1.U
    // }.elsewhen(j === 4.U){
    //     i := i
    // }
when(counter & io.valid){

    
    when(io.mat(i)(j) === config.NUM_PES.U){
        i := i
        j := j
        io.valid := 1.B
    }.elsewhen ( i < (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        i := i + 1.U
        j := 0.U
    }.elsewhen ( i <= (config.MaxRows-1).U && (j < (config.MaxCols-1).U)){
        j := j + 1.U
    }.elsewhen(i === (config.MaxRows-1).U && (j === (config.MaxCols-1).U)){
        j := j
    }

}
}

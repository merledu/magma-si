package magmasi.components

import chisel3._
import chisel3.util._

class Muxes(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val mat1 =Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val mat2 = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val i_mux_bus = Output(Vec(config.MaxRows * config.MaxCols, UInt((config.LEVELS - 1).W)))        
        val Source  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val destination  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
    })

    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val k = RegInit(0.U(32.W))
    val counter = RegInit(0.U(32.W))
    val srcValid = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(false.B)))
    val mux = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val src = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val dest = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    io.i_mux_bus := mux
    io.Source := src
    io.destination := dest
    dontTouch(mux)
    dontTouch(src)
    dontTouch(dest)

    when ((io.mat1(j)(i) =/= 0.U) && (io.mat2(k) =/= 0.U)) {
      when (srcValid(counter) === 0.B){
        when(io.mat1(j)(i) < io.mat2(k)){
          mux(counter) :=   (io.mat2(k) - 1.U) - (io.mat1(j)(i) - 1.U)
          src(counter) := io.mat2(k)
          srcValid(counter) := 1.B
          dest(counter) := io.mat1(j)(i)
        }.otherwise{
          mux(counter) :=   (io.mat1(j)(i) - 1.U) - (io.mat2(k) - 1.U)
          src(counter) := io.mat2(k)
          srcValid(counter) := 1.B
          dest(counter) := io.mat1(j)(i)
        }
      }
      counter := counter + 1.U
    }

  when(i < (config.MaxRows).U) {
    when(j < (config.MaxCols).U) {
      j := j + 1.U
    }.otherwise {
      j := 0.U
      i := i + 1.U
      k := k + 1.U
    }
  }.otherwise {
    i := 0.U
    k := 0.U
  }


    dontTouch(i)
    dontTouch(j)
    dontTouch(k)
    dontTouch(counter)

}

package magmasi.components

import chisel3._
import chisel3.util._

class Muxes(implicit val config: MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val mat1 =Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val mat2 = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val counterMatrix1 = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val counterMatrix2 = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val i_mux_bus = Output(Vec(config.MaxRows * config.MaxCols, UInt((config.LEVELS - 1).W)))        
        val Source  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val destination  = Output(Vec(config.MaxRows * config.MaxCols, UInt(config.DATA_TYPE.W)))
        val valid = Input(Bool())  
    })

    val prevStationary_matrix = RegNext(io.mat1)
    val matricesAreEqual = Reg(Bool())
    matricesAreEqual := true.B

    for (i <- 0 until config.MaxRows) {
      for (j <- 0 until config.MaxCols) {
        when(io.mat1(i)(j) =/= prevStationary_matrix(i)(j)) {
          matricesAreEqual := false.B
        }
      }
    }

    dontTouch(matricesAreEqual)
    val jValid = RegInit(false.B)
    val i = RegInit(0.U(32.W))
    val j = RegInit(0.U(32.W))
    val counter = RegInit(0.U(32.W))
    val mux = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val src = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    val dest = RegInit(VecInit(Seq.fill(config.MaxRows * config.MaxCols)(0.U((config.LEVELS - 1).W))))
    io.i_mux_bus := mux
    io.Source := src
    io.destination := dest
    dontTouch(mux)
    dontTouch(src)
    dontTouch(dest)

    when ((io.mat1(j)(i) =/= 0.U) && (io.mat2(i) =/= 0.U)) {
        
        when(io.counterMatrix1(j)(i) < io.counterMatrix2(i)){
          mux(counter) :=   (io.counterMatrix2(i) - 1.U) - (io.counterMatrix1(j)(i) - 1.U)
          src(counter) := io.mat2(i)
          dest(counter) := io.mat1(j)(i)
        }.otherwise{
          mux(counter) :=   (io.counterMatrix1(j)(i) - 1.U) - (io.counterMatrix2(i) - 1.U)
          src(counter) := io.mat2(i)      
          dest(counter) := io.mat1(j)(i)
        }
        
        when (~jValid) {

          when (~((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U))){
          counter := counter + 1.U
          }

        }
    }


    when ((jValid === 0.B) ){
      
      when(j < (config.MaxCols - 1).U) {
        j := j + 1.U
      }.elsewhen((j === (config.MaxCols - 1).U) && (i === (config.MaxRows - 1).U)){
        jValid := 1.B
      }.otherwise {
        j := 0.U
        when(i < (config.MaxRows - 1).U) {
          i := i + 1.U
    
        }
      }
    }.elsewhen ((jValid === 1.B) && (matricesAreEqual === 0.B)){
      
      i := 0.U
      j := 0.U
      jValid := 0.B
      counter := 0.U
        
      for ( i <- 0 until (config.MaxRows*config.MaxCols)){  
        src(i) := 0.U
        dest(i) := 0.U
        mux(i) := 0.U    
      }
    }

    dontTouch(i)
    dontTouch(j)
    dontTouch(counter)
}

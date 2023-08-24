package magmasi.components

import chisel3._
import chisel3.util._

class muxesVal(rows:Int,cols:Int,DATA_TYPE:Int,LEVELS:Int) extends Module{
    val io = IO(new Bundle {
        val mat1 =Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val mat2 = Input(Vec(rows, Vec(cols, UInt(DATA_TYPE.W))))
        val muxes = Output(Vec(rows*cols*cols, UInt(DATA_TYPE.W)))
        val source = Output(Vec(rows*cols*cols , UInt(DATA_TYPE.W)))
        val destination = Output(Vec(rows*cols*cols , UInt(DATA_TYPE.W)))
    })
    
    val SrcDest = Module(new SrcDest_Table(rows,cols,DATA_TYPE,LEVELS))
    SrcDest.io.KM_matrix := io.mat1
    SrcDest.io.NK_matrix := io.mat2

    val mux = RegInit(VecInit(Seq.fill(rows * cols * cols)(0.U((LEVELS - 1).W))))
    val src = RegInit(VecInit(Seq.fill(rows * cols * cols)(0.U((LEVELS - 1).W))))
    val dest = RegInit(VecInit(Seq.fill(rows * cols * cols)(0.U((LEVELS - 1).W))))
    io.source := src
    io.destination := dest
    io.muxes := mux
    dontTouch(mux)
    val i = RegInit(0.U(log2Ceil(rows).W))
    val j = RegInit(0.U(log2Ceil(cols).W))
    val k = RegInit(0.U(log2Ceil(cols).W))
    val counter = RegInit(0.U(32.W))
    val muxIndex = RegInit(5.U(32.W))
  
  when ((SrcDest.io.counterMatrix1(i)(j) =/= 0.U) && (SrcDest.io.counterMatrix2(j)(k) =/= 0.U)) {
    when(SrcDest.io.counterMatrix1(i)(j) < SrcDest.io.counterMatrix2(j)(k)){
      mux(counter) :=   (SrcDest.io.counterMatrix2(j)(k) - 1.U) - (SrcDest.io.counterMatrix1(i)(j) - 1.U)
      src(counter) := io.mat2(j)(k)
      dest(counter) := io.mat1(i)(j)
    }.otherwise{
      mux(counter) :=   (SrcDest.io.counterMatrix1(i)(j) - 1.U) - (SrcDest.io.counterMatrix2(j)(k) - 1.U)
      src(counter) := io.mat2(j)(k)
      dest(counter) := io.mat1(i)(j)
    }
    counter := counter + 1.U
  }
  
  val condition = (2.U - 1.U) - (1.U - 1.U)
  dontTouch(condition)
  
  
  
  
    when(i === (rows - 1).U) {
    i := 0.U
    when(j === (cols - 1).U) {
      j := 0.U
      when(k === (cols - 1).U) {
        k := 0.U
      } .otherwise {
        k := k + 1.U
      }
    } .otherwise {
      j := j + 1.U
    }
  } .otherwise {
    i := i + 1.U
  }





    dontTouch(i)
    dontTouch(j)
    dontTouch(k)
    dontTouch(counter)
}

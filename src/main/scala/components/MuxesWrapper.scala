package magmasi.components
import chisel3._
import chisel3.util._


  class MuxesWrapper(implicit val config:MagmasiConfig) extends Module{
    val io = IO(new Bundle{
        val valid = Input(Bool())
        val src = Input(Vec(4, UInt(32.W)))
        val muxes = Input(Vec(4, UInt(32.W)))
        val Osrc = Output(Vec(4, UInt(32.W)))
        val Omuxes = Output(Vec(4,Vec(4, UInt(32.W))))
    })
    val mat = WireInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W))))))
    val src = WireInit(VecInit(Seq.fill(4)(0.U(32.W))))





    when (io.valid){
        io.Omuxes := mat
        io.Osrc := src
        when (io.src(0) =/= io.src(1) =/= io.src(2) =/= io.src(3)){
            src := io.src
            mat(0)(0) := io.muxes(0)
            mat(1)(0) := io.muxes(1)
            mat(2)(0) := io.muxes(2)
            mat(3)(0) := io.muxes(3)
        }
        when ((io.src(0) =/= io.src(1)) &&  (io.src(1) =/= io.src(2)) && (io.src(2) === io.src(3))){
            src(3) := 0.U
            src(2) := io.src(2)
            src(1) := io.src(1)
            src(0) := io.src(0)
            mat(0)(0) := io.muxes(0)
            mat(1)(0) := io.muxes(1)
            mat(2)(0) := io.muxes(2)
            mat(2)(1) := io.muxes(3)
            mat(3)(0) := 0.U
        }

        //}.else
            when ((io.src(0) === io.src(1)) &&  (io.src(1) =/= io.src(2)) && (io.src(2) === io.src(3))){
            src(2) := 0.U
            src(0) := io.src(0)
            src(1) := io.src(2)
            src(3) := 0.U
            mat(0)(0) := io.muxes(0)
            mat(0)(1) := io.muxes(1)
            mat(1)(0) := io.muxes(2)
            mat(1)(1) := io.muxes(3)
            }

        when ((io.src(0) === io.src(1)) &&  (io.src(1) =/= io.src(2)) && (io.src(2) =/= io.src(3))){
            src(3) := 0.U
            src(2) := io.src(3)
            src(1) := io.src(2)
            src(0) := io.src(0)
            mat(0)(0) := io.muxes(0)
            mat(0)(1) := io.muxes(1)
            mat(1)(0) := io.muxes(2)
            mat(2)(0) := io.muxes(3)
            mat(3)(0) := 0.U

        }
        //     // for (j <- 0 until 4){
        //     //     for (i <- 1 until 4){
        //     //         when (~(j.U === 0.U && (i.U === 1.U))){
        //     //         io.Omuxes(j)(i) := 0.U
        //     //         }
        //     //     }
        //     // }

            when ((io.src(0) =/= io.src(1)) &&  (io.src(1) === io.src(2)) && (io.src(2) =/= io.src(3))){
            src(2) := 0.U
            src(3) := io.src(3)
            src(1) := io.src(1)
            src(0) := io.src(0)
            mat(0)(0) := io.muxes(0)
            mat(1)(0) := io.muxes(1)
            mat(1)(1) := io.muxes(2)
            mat(2)(0) := 0.U
            mat(3)(0) := io.muxes(3)
            }
        //     // for (j <- 0 until 4){
        //     //     for (i <- 1 until 4){
        //     //         when (~(j.U === 1.U && (i.U === 1.U))){
        //     //         io.Omuxes(j)(i) := 0.U
        //     //         }
        //     //     }

        //     // }
        when ((io.src(0) =/= io.src(1)) &&  (io.src(1) === io.src(2)) && (io.src(2) === io.src(3))){
            src(2) := 0.U
            src(3) := 0.U
            src(1) := io.src(1)
            src(0) := io.src(0)
            mat(0)(0) := io.muxes(0)
            mat(1)(0) := io.muxes(1)
            mat(1)(1) := io.muxes(2)
            mat(1)(2) := io.muxes(3)
            mat(2)(0) := 0.U
            mat(3)(0) := 0.U
        }
        //     // for (j <- 0 until 4){
        //     //     for (i <- 1 until 4){
        //     //         when (~(j.U === 1.U && (i.U === 1.U)) && ~(j.U === 1.U && (i.U === 2.U))){
        //     //         io.Omuxes(j)(i) := 0.U
        //     //         }
        //     //     }

        //     // }
        when ((io.src(0) === io.src(1)) &&  (io.src(1) === io.src(2)) && (io.src(2) =/= io.src(3))){
            src(2) := 0.U
            src(3) := io.src(3)
            src(1) := 0.U
            src(0) := io.src(0)
            mat(0)(0) := io.muxes(0)
            mat(0)(1) := io.muxes(1)
            mat(0)(2) := io.muxes(2)
            mat(1)(0) := 0.U
            mat(2)(0) := 0.U
            mat(3)(0) := io.muxes(3)

        }
        //     // for (j <- 0 until 4){
        //     //     for (i <- 1 until 4){
        //     //         when (~(j.U === 0.U && (i.U === 1.U)) && ~(j.U === 0.U && (i.U === 2.U))){
        //     //         io.Omuxes(j)(i) := 0.U
        //     //         }
        //     //     }

        //     // }

        when ((io.src(0) === io.src(1)) &&  (io.src(1) === io.src(2)) && (io.src(2) === io.src(3))){
            src(2) := 0.U
            src(3) := 0.U
            src(1) := 0.U
            src(0) := io.src(0)
            mat(0)(0) := io.muxes(0)
            mat(0)(1) := io.muxes(1)
            mat(0)(2) := io.muxes(2)
            mat(0)(3) := io.muxes(3)
            mat(1)(0) := 0.U
            mat(2)(0) := 0.U
            mat(3)(0) := 0.U
        }
        //     // for (j <- 0 until 4){
        //     //     for (i <- 1 until 4){
        //     //         when (~(j.U === 0.U && (i.U === 1.U)) && ~(j.U === 0.U && (i.U === 2.U)) && ~(j.U === 0.U && (i.U === 3.U))){
        //     //         io.Omuxes(j)(i) := 0.U
        //     //         }
        //     //     }

        //     }
        // }.otherwise{
        //     io.Omuxes := WireInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U)))))
        //     io.Osrc := VecInit(0.U,0.U,0.U,0.U)
        // }
    }.otherwise{
        io.Omuxes := WireInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U)))))
        io.Osrc := VecInit(0.U,0.U,0.U,0.U)
    }






//   val mat = RegInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W))))))
//   val srcReg = RegInit(VecInit(Seq.fill(4)(0.U(32.W))))
//   dontTouch(mat)
//   dontTouch(srcReg)

//   io.Omuxes := mat
//   io.Osrc := srcReg

//   val i = RegInit(0.U(32.W))
//   val j = RegInit(0.U(32.W))

//   when(srcReg(i) === srcReg(i - 1.U)) {
//     srcReg(i) := 0.U
//     mat(i)(j) := 0.U
//     mat(i - 1.U)(j + 1.U) := io.muxes(i)
//   }
  

//   when(i < 3.U && j === 3.U) {
//     i := i + 1.U
//     j := 0.U
//   }

//   when(srcReg(i) =/= srcReg(i - 1.U)) {
//     j := 3.U
// }

//   when(j < 3.U) {
//     j := j + 1.U
//   }.elsewhen(i === 3.U && j === 3.U) {
//     i := i
//     j := j
//   }
// }
}
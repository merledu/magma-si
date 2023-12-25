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
        when ((io.src(0) =/= 0.U) && (io.src(1) =/= 0.U) && (io.src(2) =/= 0.U) && (io.src(3) =/= 0.U)){
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

        }.elsewhen(((io.src(0) =/= 0.U) && (io.src(1) =/= 0.U) && (io.src(2) =/= 0.U) && (io.src(3) === 0.U))){
            when ((io.src(0) === io.src(1)) &&  (io.src(1) =/= io.src(2))){
                src(1) := io.src(2)
                src(0) := io.src(0)
                mat(0)(0) := io.muxes(0)
                mat(0)(1) := io.muxes(1)
                mat(1)(0) := io.muxes(2)
            }.elsewhen((io.src(0) =/= io.src(1)) &&  (io.src(1) === io.src(2))){
                src(1) := io.src(1)
                src(0) := io.src(0)
                mat(0)(0) := io.muxes(0)
                mat(1)(0) := io.muxes(1)
                mat(1)(1) := io.muxes(2)
            }
        }.elsewhen(((io.src(0) =/= 0.U) && (io.src(1) =/= 0.U) && (io.src(2) === 0.U) && (io.src(3) === 0.U))){
            when ((io.src(0) === io.src(1))){
                src(1) := io.src(1)
                src(0) := io.src(0)
                mat(0)(0) := io.muxes(0)
                mat(0)(1) := io.muxes(1)
            }.elsewhen((io.src(0) =/= io.src(1))){
                src(1) := io.src(1)
                src(0) := io.src(0)
                mat(0)(0) := io.muxes(0)
                mat(0)(1) := io.muxes(1)
            }
        }.elsewhen(((io.src(0) =/= 0.U) && (io.src(1) === 0.U) && (io.src(2) === 0.U) && (io.src(3) === 0.U))){
                src(0) := io.src(0)
                mat(0)(0) := io.muxes(0)
        }
    }.otherwise{
        io.Omuxes := WireInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U)))))
        io.Osrc := VecInit(0.U,0.U,0.U,0.U)
    }
}

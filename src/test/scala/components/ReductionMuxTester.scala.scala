package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class ReductionMuxTester extends AnyFreeSpec with ChiselScalatestTester {
    "Reduction Mux Test" in {
        implicit val config = MagmasiConfig()
        test(new ReductionMux).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
            dut.io.i_data(0).poke(3.U)
            dut.io.i_data(1).poke(4.U)
            dut.io.i_data(2).poke(5.U)
            dut.io.i_data(3).poke(6.U)
            dut.io.i_sel.poke(3.U)
            dut.clock.step(1)

        }
    }
}

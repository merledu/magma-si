
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class BenesWrapperTester extends AnyFreeSpec with ChiselScalatestTester {
    "Wrapper Table" in {
        implicit val config = MagmasiConfig()
        test(new BenesWrapper()).withAnnotations  (Seq(VerilatorBackendAnnotation)) { dut =>
          dut.io.i_mux_bus(0).poke(2.U)
          dut.clock.step(100)
        }}        
    } 




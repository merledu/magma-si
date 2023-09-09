
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MybenesTester extends AnyFreeSpec with ChiselScalatestTester {
    "Benes Test" in {
        implicit val config = MagmasiConfig()
        test(new Benes(8,4)).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
          val inputData = Seq(2,2,0,0)
          for (i <- 0 until 4) {
            dut.io.i_data_bus2(i).poke(inputData(i).U)
            //dut.io.i_data_bus1(i).poke(inputData(i).U)
            //dut.io.i_data_bus2(i).poke(inputData(i).U)
          }
          dut.io.i_mux_bus(0).poke(0.B) //V
          dut.io.i_mux_bus(1).poke(0.B) //D

          dut.io.i_mux_bus(2).poke(0.B)
          dut.io.i_mux_bus(3).poke(0.B)

          dut.io.i_mux_bus(4).poke(0.B)
          dut.io.i_mux_bus(5).poke(0.B)

          dut.io.i_mux_bus(24).poke(1.B)

          dut.io.i_mux_bus(6).poke(0.B)
          dut.io.i_mux_bus(7).poke(0.B)

          dut.io.i_mux_bus(8).poke(0.B)
          dut.io.i_mux_bus(9).poke(0.B)

          dut.io.i_mux_bus(10).poke(0.B)
          dut.io.i_mux_bus(11).poke(0.B)

          dut.io.i_mux_bus(25).poke(1.B)

          dut.io.i_mux_bus(12).poke(0.B)
          dut.io.i_mux_bus(13).poke(0.B)

          dut.io.i_mux_bus(14).poke(1.B)
          dut.io.i_mux_bus(15).poke(0.B)

          dut.io.i_mux_bus(16).poke(0.B)
          dut.io.i_mux_bus(17).poke(0.B)

          dut.io.i_mux_bus(26).poke(0.B)

          dut.io.i_mux_bus(18).poke(0.B)
          dut.io.i_mux_bus(19).poke(0.B)

          dut.io.i_mux_bus(20).poke(0.B)
          dut.io.i_mux_bus(21).poke(0.B)

          dut.io.i_mux_bus(22).poke(0.B)
          dut.io.i_mux_bus(23).poke(0.B)

          dut.io.i_mux_bus(27).poke(1.B)
          val LEVELS   : Int = (2 * (math.log(4) / math.log(2))).toInt + 1
          dut.clock.step(5)
        }
    } 
}

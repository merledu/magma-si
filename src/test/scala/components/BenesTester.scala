package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class BenesTester extends AnyFreeSpec with ChiselScalatestTester {
    "Simple Benes Test" in {
        implicit val config = MagmasiConfig()
        test(new Benes).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>

            
            val NUM_TESTS = 3
            val i_mux_bus = List(
                BigInt("FFFFFFFFFF", 16),
                BigInt("0000000000", 16),
                BigInt("FF00000000", 16)
            )
            val i_data_bus = BigInt("4444333322221111", 16)
            
            
            var counter = 0
            for (t <- 0 until NUM_TESTS) {
                println(s"counter: $counter")

                (0 until 4).map(i => dut.io.i_data_bus(i).poke((((i_data_bus >> (16 * i)) & 0xFFFF).toInt).U))
                String.format(s"%0${2 * (config.LEVELS - 2) * config.NUM_PES + config.NUM_PES}d", counter.toBinaryString.toInt).replace(' ', '0').zipWithIndex.map{ case (c,i) => if( c=='1' ) dut.io.i_mux_bus(i).poke(true.B) else dut.io.i_mux_bus(i).poke(false.B) }
                
                if(counter < NUM_TESTS-1) {
                    counter += 1
                } else {
                    counter = 0
                }
                dut.clock.step(1)
            }

        }
    }

  
}
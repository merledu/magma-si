package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class FlexDpeTester extends AnyFreeSpec with ChiselScalatestTester {
    "Flex Test" in {
        test(new FlexDPE(16,32,32,5)){ c =>

             val inputData = Seq(1,2,2,4)
          for (i <- 0 until 4) {
            c.io.i_data_bus(i).poke(inputData(i).U)
            //dut.io.i_data_bus2(i).poke(inputData(i).U)
          }
            c.io.i_data_valid.poke(1.B)
            c.io. i_stationary.poke(1.B)
            // c.io.i_data_bus(0).poke(1.U)
            // c.io.i_data_bus(1).poke(2.U)
            // c.io.i_data_bus(2).poke(4.U)
            // c.io.i_data_bus(3).poke(6.U)
            c.io.i_mux_bus(0).poke("b1000".U)
            c.io.i_mux_bus(1).poke("b1000".U)
            c.io.i_mux_bus(2).poke("b0100".U)
            c.io.i_mux_bus(3).poke("b1000".U)
            c.io.i_vn(0).poke("b11111".U)
            c.io.i_vn(1).poke("b11111".U)
            c.io.i_vn(2).poke("b11111".U)
            c.io.i_vn(3).poke("b11111".U)
            c.io.i_vn(4).poke("b11111".U)
            c.io.i_vn(5).poke("b11111".U)
            c.io.i_vn(6).poke("b11111".U)
            c.io.i_vn(7).poke("b11111".U)
            c.io.i_vn(8).poke("b11111".U)
            c.io.i_vn(9).poke("b11111".U)
            c.io.i_vn(10).poke("b11111".U)
            c.io.i_vn(11).poke("b11111".U)

            c.io.i_vn(12).poke("b11111".U)
            c.io.i_vn(13).poke("b11111".U)

            c.io.i_vn(14).poke("b11111".U)
            c.io.i_vn(15).poke("b11111".U)
            c.io.i_vn(16).poke("b11111".U)
            c.io.i_vn(17).poke("b11111".U)
            c.io.i_vn(18).poke("b11111".U)
            c.io.i_vn(19).poke("b11111".U)
            c.io.i_vn(20).poke("b11111".U)
            c.io.i_vn(21).poke("b11111".U)
            c.io.i_vn(22).poke("b11111".U)
            c.io.i_vn(23).poke("b11111".U)
            c.io.i_vn(24).poke("b11111".U)
            c.io.i_vn(25).poke("b11111".U)
            c.io.i_vn(26).poke("b11111".U)
            c.io.i_vn(27).poke("b11111".U)
            c.io.i_vn(28).poke("b11111".U)
            c.io.i_vn(29).poke("b11111".U)
            c.io.i_vn(30).poke("b11111".U)

                
         

            c.clock.step(2000)
        }
    }
}



package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class flexdpecom4test extends AnyFreeSpec with ChiselScalatestTester {
    "flexdpe Test" in {
        test(new flexdpecom4()){ c =>

           // for input data base 1
            c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(1.U)
            c.io.i_data_bus(2).poke(1.U)
            c.io.i_data_bus(3).poke(1.U)
          // for input data bus 2
            c.io.i_data_bus2(0).poke(2.U)
            c.io.i_data_bus2(1).poke(2.U)
            c.io.i_data_bus2(2).poke(2.U)
            c.io.i_data_bus2(3).poke(2.U)

              val inputData = Seq(

           Seq(1, 1),
           Seq(1, 1)      
        ) 

        for (i <- 0 until 2) {
          for (j <- 0 until 2) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }


          // for muxes
            // c.io.i_mux_bus(0).poke(1.B)
            // c.io.i_mux_bus(27).poke(1.B)

          // stationary and valid
            c.io.i_stationary.poke(1.B)
            c.io.i_data_valid.poke(1.B)

        c.clock.step(100)
       
            

    }
  }
}

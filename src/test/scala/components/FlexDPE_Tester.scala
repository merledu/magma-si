package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class flexdpecom4test extends AnyFreeSpec with ChiselScalatestTester {
    "flexdpe Test" in {
         implicit val config = MagmasiConfig()
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

           Seq(1, 1,1),
           Seq(1, 1,1)      
        ) 
      val numRows = inputData.length
        val numCols = if (numRows > 0) inputData.head.length else 0
        for (i <- 0 until numRows) {
          for (j <- 0 until numCols) {
            c.io.Stationary_matrix(i)(j).poke(inputData(i)(j).U)
            
          }
    
    }


          // for muxes
            // c.io.i_mux_bus(0).poke(1.B)
            // c.io.i_mux_bus(27).poke(1.B)

          // stationary and valid
            c.io.i_stationary.poke(1.B)
            c.io.i_data_valid.poke(1.B)

        c.clock.step(60)

             // for input data base 1
            c.io.i_data_bus(0).poke(1.U)
            c.io.i_data_bus(1).poke(1.U)
            c.io.i_data_bus(2).poke(1.U)
            c.io.i_data_bus(3).poke(1.U)
          // for input data bus 2
            c.io.i_data_bus2(0).poke(3.U)
            c.io.i_data_bus2(1).poke(3.U)
            c.io.i_data_bus2(2).poke(3.U)
            c.io.i_data_bus2(3).poke(3.U)

              val inputData1 = Seq(

           Seq(1, 1,1),
           Seq(1, 1,1)      
        ) 
        val numRows1 = inputData1.length
        val numCols1 = if (numRows > 0) inputData1.head.length else 0
        for (i <- 0 until numRows1) {
          for (j <- 0 until numCols1) {
            c.io.Stationary_matrix(i)(j).poke(inputData1(i)(j).U)
            
          }
    
    }


          // for muxes
            // c.io.i_mux_bus(0).poke(1.B)
            // c.io.i_mux_bus(27).poke(1.B)

          // stationary and valid
            c.io.i_stationary.poke(1.B)
            c.io.i_data_valid.poke(1.B)
    
            
        c.clock.step(120)
    }
  }
}

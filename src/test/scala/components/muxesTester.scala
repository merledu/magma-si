
package magmasi.components

import chisel3._
import chisel3.util._
import chiseltest._ 
import org.scalatest.freespec.AnyFreeSpec

class MuxesTester extends AnyFreeSpec with ChiselScalatestTester {
    "muxes values Table" in {
        implicit val config = MagmasiConfig()
        test(new Muxes()).withAnnotations  (Seq(VerilatorBackendAnnotation)) { dut =>

        val inputData = Seq(
          Seq(0, 2, 3, 0),
          Seq(5, 6, 7, 0),
          Seq(9, 10, 11, 0),
          Seq(13, 14, 15, 0)
        ) 
            
        val input = Seq(
          Seq(0, 1, 2, 0),
          Seq(3, 4, 1, 0),
          Seq(2, 3, 4, 0),
          Seq(1, 2, 3, 0)
        ) 
        
        val inputData2 = Seq(0, 2, 3, 0,1)
        val input2 = Seq(0, 1, 2, 0,1)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.mat1(i)(j).poke(inputData(i)(j).U)
          }
        }

        for (i <- 0 until 4){
          dut.io.mat2(i).poke(inputData2(i).U)
        }
      
        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.counterMatrix1(i)(j).poke(input(i)(j).U)
          }
        }

        for (i <- 0 until 4){
          dut.io.counterMatrix2(i).poke(input2(i).U)
        }

        dut.clock.step(50)

        val inputData5 = Seq(
          Seq(0, 2, 3, 0),
          Seq(5, 6, 7, 0),
          Seq(9, 10, 11, 0),
          Seq(13, 14, 15, 0)
        ) 
            
        val input6 = Seq(
          Seq(0, 1, 2, 0),
          Seq(3, 4, 1, 0),
          Seq(2, 3, 4, 0),
          Seq(1, 2, 3, 0)
        ) 
        
        
        val inputData7 = Seq(1, 2, 3, 4,1)
        val input8 = Seq(1, 2, 3, 4,1)

        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.mat1(i)(j).poke(inputData5(i)(j).U)
          }
        }
        
        for (i <- 0 until 4){
          dut.io.mat2(i).poke(inputData7(i).U)
        }
      
        for (i <- 0 until 4) {
          for (j <- 0 until 4) {
            dut.io.counterMatrix1(i)(j).poke(input6(i)(j).U)
          }
        }

        for (i <- 0 until 4){
          dut.io.counterMatrix2(i).poke(input8(i).U)
        }

        dut.clock.step(100)
      }
    }
  } 




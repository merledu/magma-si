// package magmasi.components

// import chisel3._
// import chisel3.util._
// import chiseltest._ 
// import org.scalatest.freespec.AnyFreeSpec

// class BFP32AdderTester extends AnyFreeSpec with ChiselScalatestTester {
//     "SSimple BFP32Adder Tester" in {
//         test(new BFP32Adder).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>

//             val inputsA = Vector(0x4040, 0x4100, 0x4480, 0x3FA0)
//             val inputsB = Vector(0x3F80, 0x449B, 0x4600, 0x4020)
//             val numTests = 4
//              for (i <- 0 until numTests) {
//                 dut.io.A.poke(inputsA(i))
//                 dut.io.B.poke(inputsB(i))
//                 dut.clock.step(1)
//             }

//         }
//     }
// }
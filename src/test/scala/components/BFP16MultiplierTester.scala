// package magmasi.components

// import chisel3._
// import chisel3.util._
// import chiseltest._ 
// import org.scalatest.freespec.AnyFreeSpec

// class BFP16MultiplierTester extends AnyFreeSpec with ChiselScalatestTester {
//     "Simple BFP16Multiplier Tester" in {
//         test(new BFP16Multiplier).withAnnotations(Seq(VerilatorBackendAnnotation)){ dut =>
//             val DATA_TYPE = 16 
//             val input_A = Seq("h4040", "h4100", "h4480", "h3FA0").map(_.U(DATA_TYPE.W)) // 3, 8, 1024, 1.25
//             val input_B = Seq("h3F80", "h449B", "h4600", "h4020").map(_.U(DATA_TYPE.W)) // 1, 1240, 8192, 2.5
//             val expected_O = Seq("h4040", "h461B", "h4B00", "h4048").map(_.U(DATA_TYPE.W)) // 3, 9920, 8388608, 3.125
//             val NUM_TESTS = 4

//             for(i <- 0 until NUM_TESTS) {
//                 dut.io.A.poke(input_A(i))
//                 dut.io.B.poke(input_B(i))
//                 dut.clock.step()
//                 dut.io.O.expect(expected_O(i))
//             }

//         }
//     }
// }
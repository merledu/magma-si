
package magmasi.components
import chisel3._
import chisel3.util._

class MultSwitch() extends Module {
  val io = IO(new Bundle {

    val i_valid = Input(Bool())
    val i_data = Input(UInt(16.W))
    val i_stationary = Input(Bool())
    val o_valid = Output(Bool())
    val o_data = Output(UInt(32.W))
  })
    val clk = clock
  val rst = reset.asBool
  val r_buffer = RegInit(0.U(16.W))
  val r_buffer_valid = RegInit(false.B)
  
   // Concatenate the temporary signal with 16 zeros and assign it to io.o_data


  // Logic to store correct value into the stationary buffer
  when (rst) {
    r_buffer := 0.U // Clear buffer during reset
    r_buffer_valid := false.B // Invalidate buffer
  }.elsewhen(io.i_stationary && io.i_valid) {
    r_buffer := io.i_data // Latch the stationary value into the switch buffer
    r_buffer_valid := true.B // Validate buffer
  }


  val w_A = Mux(r_buffer_valid && io.i_valid, io.i_data, 0.U) // Streaming
  val w_B = Mux(r_buffer_valid && io.i_valid, r_buffer, 0.U) // Stationary

  // Logic to generate correct output valid signal
  val o_validReg = RegInit(false.B)

  when (r_buffer_valid && io.i_valid) {
    o_validReg := true.B
  }.otherwise {
    o_validReg := false.B
  }
  io.o_valid := o_validReg
   val multiplier_output = Wire(UInt(32.W))
  // Instantiate multiplier
  val multiplier_module = Module(new SimpleMultiplier)
  multiplier_module.io.A := w_A
  multiplier_module.io.B := w_B
  // Create a temporary signal to hold multiplier output
  multiplier_output := multiplier_module.io.O // Assign the value from the multiplier to the temporary signal

  io.o_data := Cat(0.U(16.W), multiplier_output(15, 0))

  // Convert BF16 to FP32
  
}



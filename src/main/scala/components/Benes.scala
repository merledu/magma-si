/* This Module is translated into CHISEL from https://github.com/georgia-tech-synergy-lab/SIGMA/blob/master/vmod/benes.v */
package magmasi.components

import chisel3._
import chisel3.util._

/*
Sample Indexing Diagram with 4 PES example

Table:
 O   --> switch (regular)
 $	 --> input switch
 #   --> output switch

----------------------------------------------------------------------------------------------- 
Data IO Diagram: 

r_data_bus_ff[Element 0] -->  $     0     0     0     0     0     #  --> w_dist_bus[Element 0]

r_data_bus_ff[Element 1] -->  $     0     0     0     0     0     #  --> w_dist_bus[Element 1]

r_data_bus_ff[Element 2] -->  $     0     0     0     0     0     #  --> w_dist_bus[Element 2]

r_data_bus_ff[Element 3] -->  $     0     0     0     0     0     #  --> w_dist_bus[Element 3]

----------------------------------------------------------------------------------------------- 
Horizontal Internal Wires Diagram: (between each switch) 


$ w_internal[0]  O w_internal[2]  O w_internal[4]  O w_internal[6] # 

$ w_internal[8] O w_internal[10] O w_internal[12] O w_internal[14] # 

$ w_internal[16] O w_internal[18] O w_internal[20] O w_internal[22] # 

$ w_internal[24] O w_internal[26] O w_internal[28] O w_internal[30] #  

----------------------------------------------------------------------------------------------- 
Diagonal Internal Wires Diagram: (between each switch)

$ w_internal[1]  O w_internal[3]  O w_internal[5]  O w_internal[7] # 

$ w_internal[9] O w_internal[11] O w_internal[13] O w_internal[15] # 

$ w_internal[17] O w_internal[19] O w_internal[21] O w_internal[23] # 

$ w_internal[25] O w_internal[27] O w_internal[29] O w_internal[31] # 

----------------------------------------------------------------------------------------------- 
Mux Select Signals Diagram (inputs to each switch)
	* input switch does not require any control signals --> value will go to both horizontal and diagonal
	* output switch only requires one control bit

NA  r_mux_bus_ff[0,1]      r_mux_bus_ff[2,3]      r_mux_bus_ff[4,5]     r_mux_bus_ff[24] 
NA  r_mux_bus_ff[6,7]      r_mux_bus_ff[8,9]      r_mux_bus_ff[10,11]   r_mux_bus_ff[25]
NA  r_mux_bus_ff[12,13]    r_mux_bus_ff[14,15]    r_mux_bus_ff[16,17]	  r_mux_bus_ff[26]
NA  r_mux_bus_ff[18,19]	   r_mux_bus_ff[20,21]	  r_mux_bus_ff[22,23]   r_mux_bus_ff[27]

----------------------------------------------------------------------------------------------- 
*/

//class Benes(implicit val config: MagmasiConfig) extends Module {
class Benes(DATA_TYPE:Int,NUM_PES:Int) extends Module {
  val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
  val io = IO(new Bundle {

    val i_data_bus  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_mux_bus   = Input(Vec(2 * (LEVELS - 2) * NUM_PES + NUM_PES, Bool()))
    val o_dist_bus  = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))

  })

  val clk = clock
  val rst = reset.asBool

  val r_data_bus_ff   = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))))
  val r_mux_bus_ff    = RegInit(VecInit(Seq.fill(2 * (LEVELS - 2) * NUM_PES + NUM_PES)(false.B)))
  val w_dist_bus      = Wire(Vec(NUM_PES, UInt(DATA_TYPE.W)))
  val w_internal      = Wire(Vec(2 * NUM_PES * (LEVELS - 1), UInt(DATA_TYPE.W))) // 8 x 2 = 16

  dontTouch(w_internal)

  r_data_bus_ff := Mux(rst, VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))), io.i_data_bus)
  r_mux_bus_ff  := Mux(rst, VecInit(Seq.fill(2 * (LEVELS - 2) * NUM_PES + NUM_PES)(false.B)), io.i_mux_bus)
  io.o_dist_bus := Mux(rst, VecInit(Seq.fill(NUM_PES)(0.U(DATA_TYPE.W))), w_dist_bus)

  for (i <- 0 until NUM_PES) {

    val in_switch = Module(new InputSwitch(DATA_TYPE))
    in_switch.io.in := r_data_bus_ff(i)
    w_internal(2 * i * (LEVELS - 1))      := in_switch.io.y
    w_internal(2 * i * (LEVELS - 1) + 1)  := in_switch.io.z

  }

  for (i <- 0 until NUM_PES) { 

    val out_switch = Module(new OutputSwitch(DATA_TYPE))
    out_switch.io.in0 := w_internal(2 * i * (LEVELS - 1) + (2 * (LEVELS - 2)))
    out_switch.io.in1 := w_internal(2 * (if(i % 2 == 0) i + 1 else i - 1) * (LEVELS - 1) + (2 * (LEVELS - 2)) + 1)
    out_switch.io.sel := r_mux_bus_ff(2 * NUM_PES * (LEVELS - 2) + i) 
    w_dist_bus(i)     := out_switch.io.y
  
  }

  for (i <- 0 until NUM_PES) {
    for (j <- 1 until (LEVELS - 1)) {
      val imm_switch = Module(new Switch(DATA_TYPE))
      imm_switch.io.in0 := w_internal(2 * i * (LEVELS - 1) + 2 * (j - 1))
      if (j <= (LEVELS - 1) / 2) {
        if (i % math.pow(2, j).toInt < math.pow(2, j - 1).toInt) {
          imm_switch.io.in1 := w_internal(2 * (i + math.pow(2, j - 1).toInt) * (LEVELS - 1) + 2 * (j - 1) + 1)
        } else {
          imm_switch.io.in1 := w_internal(2 * (i - math.pow(2, j - 1).toInt) * (LEVELS - 1) + 2 * (j - 1) + 1)
        }
      } else {
        if (i % math.pow(2, LEVELS - j).toInt < math.pow(2, LEVELS - j - 1).toInt) {
          imm_switch.io.in1 := w_internal(2 * (i + math.pow(2, LEVELS - j - 1).toInt) * (LEVELS - 1) + 2 * (j - 1) + 1)
        } else {
          imm_switch.io.in1 := w_internal(2 * (i - math.pow(2, LEVELS - j - 1).toInt) * (LEVELS - 1) + 2 * (j - 1) + 1)
        }
      }
      imm_switch.io.sel0 := r_mux_bus_ff(2 * (LEVELS - 2) * i + 2 * (j - 1))
      imm_switch.io.sel1 := r_mux_bus_ff(2 * (LEVELS - 2) * i + 2 * (j - 1) + 1)
      w_internal(2 * i * (LEVELS - 1) + 2 * j)      := imm_switch.io.y    
      w_internal(2 * i * (LEVELS - 1) + 2 * j + 1)  := imm_switch.io.z  
    }
  }
}

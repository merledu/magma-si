package magmasi.components

import chisel3._
import chisel3.util._

class FlexDPE(IN_DATA_TYPE: Int = 16, OUT_DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
 val LEVELS: Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
  val io = IO(new Bundle {
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(Vec(NUM_PES, UInt(OUT_DATA_TYPE.W)))
    val i_stationary = Input(Bool())
    val i_dest_bus = Input(Vec(2 * (LEVELS - 2) * NUM_PES + NUM_PES, Bool()))
    val i_vn_seperator = Input(UInt((NUM_PES * LOG2_PES).W))
    
    val o_data_valid = Output(Vec(NUM_PES, Bool()))
    val o_data_bus = Output(Vec(NUM_PES, UInt( OUT_DATA_TYPE.W)))
  })
  
val w_reduction_add = WireInit(0.U((NUM_PES - 1).W))
val w_reduction_cmd = WireInit(0.U((3 * (NUM_PES - 1)).W))

  val w_reduction_sel = WireInit(0.U(20.W))
  val w_reduction_valid = WireInit(false.B)

  // Declare and initialize the register with zero
  val r_mult = RegInit(0.U((NUM_PES * OUT_DATA_TYPE).W))

val w_dist_bus = Wire(Vec(NUM_PES, UInt(IN_DATA_TYPE.W)))
  val w_mult_valid = WireDefault(false.B)

  // Declare and initialize the registers with zero
  val r_data_bus_ff = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(OUT_DATA_TYPE.W))))
  val r_data_bus_ff2 = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(OUT_DATA_TYPE.W))))
  val r_data_valid_ff = RegInit(false.B)
  val r_data_valid_ff2 = RegInit(false.B)
  val r_stationary_ff = RegInit(false.B)
  val r_stationary_ff2 = RegInit(false.B)
  val r_dest_bus_ff = RegInit(VecInit(Seq.fill(2 * (LEVELS - 2) * NUM_PES + NUM_PES)(false.B)))
  
val r_dest_bus_ff2 = RegInit(VecInit(Seq.fill(2 * (LEVELS - 2) * NUM_PES + NUM_PES)(false.B)))//print(2 * (LEVELS - 2) * NUM_PES + NUM_PES)

    r_data_bus_ff := io.i_data_bus
    r_data_bus_ff2 := r_data_bus_ff
    r_data_valid_ff := io.i_data_valid
    r_data_valid_ff2 := r_data_valid_ff
    r_stationary_ff := io.i_stationary
    r_stationary_ff2 := r_stationary_ff
    r_dest_bus_ff := io.i_dest_bus
    r_dest_bus_ff2 := r_dest_bus_ff
    print(r_dest_bus_ff2)

val my_controller = Module(new FanCtrl(IN_DATA_TYPE, NUM_PES, LOG2_PES))

  my_controller.io.i_vn := io.i_vn_seperator
  my_controller.io.i_stationary := io.i_stationary
  my_controller.io.i_data_valid := io.i_data_valid
  w_reduction_add := my_controller.io.o_reduction_add
  w_reduction_cmd := my_controller.io.o_reduction_cmd
  w_reduction_sel := my_controller.io.o_reduction_sel
  w_reduction_valid := my_controller.io.o_reduction_valid
    val my_benes = Module(new Benes(IN_DATA_TYPE, NUM_PES))
  my_benes.io.i_data_bus := r_data_bus_ff2
my_benes.io.i_mux_bus := r_dest_bus_ff2
  w_dist_bus := my_benes.io.o_dist_bus

    // Instantiate the FanNetwork module
  val my_fan_network = Module(new FanNetwork(OUT_DATA_TYPE, NUM_PES, LOG2_PES))

  // Connect the IO signals of the FanNetwork module to your top-level module's signals
  my_fan_network.io.i_valid := w_reduction_valid
  my_fan_network.io.i_data_bus := r_mult
  my_fan_network.io.i_add_en_bus := w_reduction_add
  my_fan_network.io.i_cmd_bus := w_reduction_cmd
  my_fan_network.io.i_sel_bus := w_reduction_sel
  io.o_data_valid := my_fan_network.io.o_valid
  io.o_data_bus := my_fan_network.io.o_data_bus
}






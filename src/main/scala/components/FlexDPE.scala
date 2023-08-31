package magmasi.components

import chisel3._
import chisel3.util._

class FlexDPE(IN_DATA_TYPE: Int = 16, OUT_DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
    val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(Vec(NUM_PES, UInt(IN_DATA_TYPE.W)))
  
    val i_stationary = Input(Bool())

    //val i_dest_bus = Input(UInt((NUM_PES * LOG2_PES).W))
    val i_mux_bus   = Input(Vec(NUM_PES, UInt((LEVELS-1).W)))

    val i_vn = Input(Vec(NUM_PES, UInt(LOG2_PES.W)))
    val o_data_valid = Output(Vec(NUM_PES, UInt(1.W)))
    val o_data_bus = Output(Vec(NUM_PES, UInt(IN_DATA_TYPE.W)))
  })
  val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
  
  val r_mult = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(OUT_DATA_TYPE.W))))

  val r_data_bus_ff = Reg(Vec(NUM_PES, UInt(IN_DATA_TYPE.W)))
 // val r_data_bus_ff = Reg(UInt((NUM_PES * IN_DATA_TYPE).W))
  val r_data_bus_ff2 =Reg(Vec(NUM_PES, UInt(IN_DATA_TYPE.W)))

  val r_data_valid_ff = Reg(Bool())
  val r_data_valid_ff2 = Reg(Bool())

  val r_stationary_ff = Reg(Bool())
  val r_stationary_ff2 = Reg(Bool())
  
  val r_dest_bus_ff = Reg(Vec(NUM_PES, UInt(LEVELS.W)))
  val r_dest_bus_ff2 = Reg(Vec(NUM_PES, UInt(LEVELS.W)))

  r_data_bus_ff := io.i_data_bus
  //r_data_bus_ff12 := r_data_bus_ff1
  r_data_bus_ff2 := r_data_bus_ff
  //r_data_bus_ff22 := r_data_bus_ff2
  r_data_valid_ff := io.i_data_valid
  r_data_valid_ff2 := r_data_valid_ff

  r_stationary_ff := io.i_stationary
  r_stationary_ff2 := r_stationary_ff
  
  r_dest_bus_ff := io.i_mux_bus
  r_dest_bus_ff2 := r_dest_bus_ff

  // Instantiate controller
  val my_controller = Module(new fancontrol(32,32,5))

  my_controller.io.i_vn := io.i_vn
  my_controller.io.i_stationary := io.i_stationary
  my_controller.io.i_data_valid := io.i_data_valid
  val w_reduction_add = my_controller.io.o_reduction_add
  val w_reduction_cmd = my_controller.io.o_reduction_cmd
  val w_reduction_sel = my_controller.io.o_reduction_sel
  val w_reduction_valid = my_controller.io.o_reduction_valid

  // Instantiate distribution network (xbar or benes)
  val my_Benes = Module(new Benes(16,32))

  //my_Benes.io.i_data_bus1 := r_data_bus_ff12
  my_Benes.io.i_data_bus := r_data_bus_ff2
  my_Benes.io.i_mux_bus := r_dest_bus_ff2

  val w_dist_bus2 = my_Benes.io.o_dist_bus


  // Instantiate multiplier chain
  val my_mult_gen = Module(new MultGen(IN_DATA_TYPE, OUT_DATA_TYPE, NUM_PES))

  my_mult_gen.io.i_valid := r_data_valid_ff2
  my_mult_gen.io.i_data_bus := w_dist_bus2
  my_mult_gen.io.i_stationary := r_stationary_ff2
  val w_mult_valid = my_mult_gen.io.o_valid
  r_mult := my_mult_gen.io.o_data_bus

  // Instantiate fan reduction topology
  val my_fan_network = Module(new FanNetworkcom(32,32))

  my_fan_network.io.i_valid := w_reduction_valid
  my_fan_network.io.i_data_bus := r_mult
  my_fan_network.io.i_add_en_bus := w_reduction_add
  my_fan_network.io.i_cmd_bus := w_reduction_cmd
  my_fan_network.io.i_sel_bus := w_reduction_sel
  io.o_data_valid := my_fan_network.io.o_valid
  io.o_data_bus := my_fan_network.io.o_data_bus
}

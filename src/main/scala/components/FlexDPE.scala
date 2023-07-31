import chisel3._
import chisel3.util._

class FlexDPE(IN_DATA_TYPE: Int = 16, OUT_DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(UInt((NUM_PES * IN_DATA_TYPE).W))
    val i_stationary = Input(Bool())
    val i_dest_bus = Input(UInt((NUM_PES * LOG2_PES).W))
    val i_vn_seperator = Input(UInt((NUM_PES * LOG2_PES).W))
    
    val o_data_valid = Output(Vec(NUM_PES, Bool()))
    val o_data_bus = Output(UInt((NUM_PES * OUT_DATA_TYPE).W))
  })
      val w_reduction_add = Wire(Vec(NUM_PES - 1, Bool()))
  val w_reduction_cmd = Wire(Vec(3 * (NUM_PES - 1), UInt(3.W)))
  val w_reduction_sel = Wire(UInt(20.W))
  val w_reduction_valid = Wire(Bool())

  val r_mult = RegInit(0.U((NUM_PES * OUT_DATA_TYPE).W))

  val w_dist_bus = Wire(UInt((NUM_PES * IN_DATA_TYPE).W))
  val w_mult_valid = Wire(Bool())

  val r_data_bus_ff = RegInit(0.U((NUM_PES * IN_DATA_TYPE).W))
  val r_data_bus_ff2 = RegInit(0.U((NUM_PES * IN_DATA_TYPE).W))
  val r_data_valid_ff = RegInit(false.B)
  val r_data_valid_ff2 = RegInit(false.B)
  val r_stationary_ff = RegInit(false.B)
  val r_stationary_ff2 = RegInit(false.B)
  val r_dest_bus_ff = RegInit(0.U((NUM_PES * LOG2_PES).W))
  val r_dest_bus_ff2 = RegInit(0.U((NUM_PES * LOG2_PES).W))
    
    r_data_bus_ff := io.i_data_bus
    r_data_bus_ff2 := r_data_bus_ff
    r_data_valid_ff := io.i_data_valid
    r_data_valid_ff2 := r_data_valid_ff
    r_stationary_ff := io.i_stationary
    r_stationary_ff2 := r_stationary_ff
    r_dest_bus_ff := io.i_dest_bus
    r_dest_bus_ff2 := r_dest_bus_ff

val my_controller = FanCtrl(IN_DATA_TYPE, NUM_PES, LOG2_PES)

  my_controller.io.i_vn := io.i_vn_seperator
  my_controller.io.i_stationary := io.i_stationary
  my_controller.io.i_data_valid := io.i_data_valid
  w_reduction_add := my_controller.io.o_reduction_add
  w_reduction_cmd := my_controller.io.o_reduction_cmd
  w_reduction_sel := my_controller.io.o_reduction_sel
  w_reduction_valid := my_controller.io.o_reduction_valid

}





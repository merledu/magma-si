package magmasi.components

import chisel3._
import chisel3.util._

class flexdpecom4(IN_DATA_TYPE : Int = 32 ,DATA_TYPE: Int = 32, NUM_PES: Int = 4, LOG2_PES: Int = 5) extends Module {
    implicit val config = MagmasiConfig()
  val io = IO(new Bundle {
    //val i_vn = Input(Vec(NUM_PES, UInt(LOG2_PES.W)))
    val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))
    val i_data_bus2  = Input(Vec(NUM_PES, UInt(DATA_TYPE.W)))

    val Stationary_matrix = Input(Vec(2, Vec(2, UInt(DATA_TYPE.W))))
     


    val o_valid = Output(Vec(NUM_PES, UInt(1.W)))
    val o_data_bus = Output(Vec(NUM_PES, UInt(DATA_TYPE.W)))
     val o_adder = Output(Vec(NUM_PES-1, UInt(DATA_TYPE.W)))
    val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
     val i_mux_bus   = Input(Vec(2 * (LEVELS - 2) * NUM_PES + NUM_PES, Bool()))
  })
    val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1

     val r_mult = RegInit(VecInit(Seq.fill(NUM_PES)(0.U((DATA_TYPE-1).W))))

    val r_stationary_ff = Reg(Bool())
    val r_stationary_ff2 = Reg(Bool())

    val r_data_valid_ff = Reg(Bool())
    val r_data_valid_ff2 = Reg(Bool())
    
    r_stationary_ff := io.i_stationary
    r_stationary_ff2 := r_stationary_ff

     r_data_valid_ff := io.i_data_valid
     r_data_valid_ff2 := r_data_valid_ff
    

    val my_ivn= Module(new ivncontrol4(32,4,5))
    my_ivn.io.Stationary_matrix := io.Stationary_matrix
    val i_vn = my_ivn.io.o_vn

    val my_controller = Module(new fancontrol4(32,4,5))

    my_controller.io.i_vn := i_vn
    my_controller.io.i_stationary := 0.B
    my_controller.io.i_data_valid := io.i_data_valid
    val w_reduction_add = my_controller.io.o_reduction_add
    val w_reduction_cmd = my_controller.io.o_reduction_cmd
    val w_reduction_valid = my_controller.io.o_reduction_valid

    val my_Benes = Module(new Benes())

    my_Benes.io.i_data_bus1 := io.i_data_bus
    my_Benes.io.i_data_bus2 := io.i_data_bus2
    my_Benes.io.i_mux_bus := io.i_mux_bus
    
    val w_dist_bus1 = my_Benes.io.o_dist_bus1
    val w_dist_bus2 = my_Benes.io.o_dist_bus2



     val buffer_mult = Module(new buffer_multiplication())

      
      buffer_mult.io.buffer1 := w_dist_bus1
      buffer_mult.io.buffer2 := w_dist_bus2 
     
      r_mult := buffer_mult.io.out





    val my_fan_network = Module(new Fan4(4,32))

    my_fan_network.io.i_valid := w_reduction_valid
    my_fan_network.io.i_data_bus :=   r_mult 
    my_fan_network.io.i_add_en_bus := w_reduction_add
    my_fan_network.io.i_cmd_bus := w_reduction_cmd

    io.o_valid := my_fan_network.io.o_valid
    io.o_data_bus := my_fan_network.io.o_data_bus
    io.o_adder :=  my_fan_network.io.o_adder
}

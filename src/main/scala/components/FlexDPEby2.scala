
package magmasi.components

import chisel3._
import chisel3.util._

class flexdpecom4(implicit val Config: MagmasiConfig) extends Module {
    //implicit val config = MagmasiConfig()
  val io = IO(new Bundle {
    //val i_vn = Input(Vec(NUM_PES, UInt(LOG2_PES.W)))
    val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val i_data_bus = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
    val i_data_bus2  = Input(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))

    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     
    val i_vn = Output(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))

    val o_valid = Output(Vec(Config.NUM_PES, UInt(1.W)))
    val o_data_bus = Output(Vec(Config.NUM_PES, UInt(Config.DATA_TYPE.W)))
     val o_adder = Output(Vec(Config.NUM_PES-1, UInt(Config.DATA_TYPE.W)))
    val LEVELS   : Int = (2 * (math.log(Config.NUM_PES) / math.log(2))).toInt + 1
     val i_mux_bus   = Input(Vec(Config.NUM_PES,Vec(Config.NUM_PES, UInt((LEVELS-1).W))))
     val matrix =Output(Vec(2, Vec(2, UInt(Config.DATA_TYPE.W))))

    //valid
     val input_valid = Input(Bool())
     val output_valid = Output(Bool())

  })



 when (io.input_valid === 1.B){
  dontTouch(io.i_data_valid)

val o_vn = Reg(Vec(Config.NUM_PES, UInt(Config.LOG2_PES.W)))
  //when(io.valid){
    val LEVELS   : Int = (2 * (math.log(Config.NUM_PES) / math.log(2))).toInt + 1

     val r_mult = RegInit(VecInit(Seq.fill(Config.NUM_PES)(0.U((Config.DATA_TYPE-1).W))))
    //val matrix = Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))


    var counter = RegInit(0.U(32.W))

    // matrix(0)(0) := 1.U
    
    val r_stationary_ff = Reg(Bool())
    val r_stationary_ff2 = Reg(Bool())

    val r_data_valid_ff = Reg(Bool())
    val r_data_valid_ff2 = Reg(Bool())

    r_stationary_ff := io.i_stationary
    r_stationary_ff2 := r_stationary_ff

    r_data_valid_ff := io.i_data_valid
    r_data_valid_ff2 := r_data_valid_ff
     val matrix = Reg(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
     dontTouch(matrix)


  io.matrix := matrix
    
   val my_ivn= Module(new ivncontrol4())
    my_ivn.io.Stationary_matrix := io.Stationary_matrix
    val i_vn = my_ivn.io.o_vn
    io.i_vn := i_vn

   // io.out_vn := i_vn
 

    val my_controller = Module(new fancontrol4(32,4,5))

    //my_controller.io.i_vn := o_vn
    my_controller.io.i_vn := i_vn
    my_controller.io.i_stationary := 0.B
    my_controller.io.i_data_valid := io.i_data_valid
    val w_reduction_add = my_controller.io.o_reduction_add
    val w_reduction_cmd = my_controller.io.o_reduction_cmd
    val w_reduction_valid = my_controller.io.o_reduction_valid

    val my_Benes = Module(new Benes3())

    my_Benes.io.i_data_bus1 := io.i_data_bus
    my_Benes.io.i_data_bus2 := io.i_data_bus2
    my_Benes.io.i_mux_bus := io.i_mux_bus
    
    val w_dist_bus1 = my_Benes.io.o_dist_bus1
    val w_dist_bus2 = my_Benes.io.o_dist_bus2

dontTouch(w_dist_bus1)
dontTouch(w_dist_bus2)

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

    dontTouch(r_mult)
    dontTouch(w_dist_bus1)

     when (counter < 26.U){

      io.output_valid := 1.B

      matrix(0)(0) := io.o_adder(0)
      matrix(1)(0) := io.o_adder(2)
      // when(w_dist_bus1(1) === 0.U){
      //    matrix(0)(0) := r_mult(0)
      // }.elsewhen(w_dist_bus1(0) === 0.U){
      //    matrix(0)(0) := r_mult(1)
      // }
      // when(w_dist_bus1(3) === 0.U ){
      //   matrix(1)(0) := r_mult(2)
      // }.elsewhen(w_dist_bus1(2) === 0.U){
      //    matrix(1)(0) := r_mult(3)
      // }

      when(io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(1)(0) === 0.U){
         matrix(0)(0) := r_mult(0)
          matrix(1)(0) := r_mult(0)
      }
      when(io.Stationary_matrix(0)(1) === 0.U && io.Stationary_matrix(1)(1) === 0.U){
         matrix(0)(0) := r_mult(0)
          matrix(1)(0) := r_mult(1)
      }
      when(io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(1)(1) === 0.U){
         matrix(0)(0) := r_mult(0)
         matrix(1)(0) := r_mult(1)
         
      }
       when(io.Stationary_matrix(0)(1) === 0.U && io.Stationary_matrix(1)(0) === 0.U){
         matrix(0)(0) := r_mult(0)
         matrix(1)(0) := r_mult(1)
         
      }
      when(io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(0)(1) === 0.U){
         matrix(0)(0) := io.o_adder(2)
         matrix(1)(0) := io.o_adder(0)
         
      }
       when(
  (io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(0)(1) =/= 0.U && io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) |
  (io.Stationary_matrix(0)(0) =/= 0.U && io.Stationary_matrix(0)(1) === 0.U && io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) 
 
) {
         matrix(0)(0) := io.o_adder(0)
         matrix(1)(0) := io.o_adder(1)
         
      }
    when( (io.Stationary_matrix(0)(0) =/= 0.U && io.Stationary_matrix(0)(1) =/= 0.U && io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) =/= 0.U) |
  (io.Stationary_matrix(0)(0) =/= 0.U && io.Stationary_matrix(0)(1) =/= 0.U && io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U)
) {
    matrix(0)(0) := io.o_adder(0)
         matrix(1)(0) := io.o_adder(2)   
      }

      
      //  when(io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) === 0.U){
      //    matrix(0)(0) := r_mult(0)
      //    matrix(1)(0) := r_mult(1)
         
      // }
      // when(w_dist_bus1(0) =/= 0.U && w_dist_bus1(1) =/= 0.U && w_dist_bus1(2) === 0.U && w_dist_bus1(3) === 0.U){
      //    matrix(0)(0) := r_mult(0)
      //     matrix(1)(0) := r_mult(0)
      // }
      
      // matrix(0)(0) := io.o_adder(0)
      // matrix(1)(0) := io.o_adder(2)

    }

    // matrix(0)(0) := io.o_adder(0)
    // matrix(1)(0) := io.o_adder(2)
    dontTouch(matrix)

    counter := counter + 1.U
    dontTouch(counter)

    when (counter > 41.U){

     io.output_valid := 1.B

      matrix(0)(1) := io.o_adder(0)
      matrix(1)(1) := io.o_adder(2)
      //  when(w_dist_bus1(1) === 0.U){
      //    matrix(0)(1) := r_mult(0)
      // }.elsewhen(w_dist_bus1(0) === 0.U){
      //    matrix(0)(1) := r_mult(1)
      // }
      //    when(w_dist_bus1(3) === 0.U ){
      //   matrix(1)(1) := r_mult(2)

      // }.elsewhen(w_dist_bus1(2) === 0.U){
      //    matrix(1)(1) := r_mult(3)
      // }
       when(io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(1)(0) === 0.U){
         matrix(0)(1) := r_mult(0)
          matrix(1)(1) := r_mult(0)
      }
        when(io.Stationary_matrix(0)(1) === 0.U && io.Stationary_matrix(1)(1) === 0.U){
         matrix(0)(1) := r_mult(0)
          matrix(1)(1) := r_mult(1)
      }
        when(io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(1)(1) === 0.U){
         matrix(0)(1) := r_mult(0)
         matrix(1)(1) := r_mult(1)
         
      }
       when(io.Stationary_matrix(0)(1) === 0.U && io.Stationary_matrix(1)(0) === 0.U){
         matrix(0)(1) := r_mult(0)
         matrix(1)(1) := r_mult(1)
         
      }
       when(io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(0)(1) === 0.U){
         matrix(0)(1) := io.o_adder(2)
         matrix(1)(1) := io.o_adder(0)
         
      }
      //  when(io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) === 0.U){
      //    matrix(0)(1) := r_mult(0)
      //    matrix(1)(1) := r_mult(1)
         
      // }
      // matrix(0)(1) := io.o_adder(0)
      // matrix(1)(1) := io.o_adder(2)
      when(
  (io.Stationary_matrix(0)(0) === 0.U && io.Stationary_matrix(0)(1) =/= 0.U && io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) |
  (io.Stationary_matrix(0)(0) =/= 0.U && io.Stationary_matrix(0)(1) === 0.U && io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) =/= 0.U) 
  
) {
  matrix(0)(1) := io.o_adder(0)
  matrix(1)(1) := io.o_adder(1)
}

    when( (io.Stationary_matrix(0)(0) =/= 0.U && io.Stationary_matrix(0)(1) =/= 0.U && io.Stationary_matrix(1)(0) === 0.U && io.Stationary_matrix(1)(1) =/= 0.U) |
  (io.Stationary_matrix(0)(0) =/= 0.U && io.Stationary_matrix(0)(1) =/= 0.U && io.Stationary_matrix(1)(0) =/= 0.U && io.Stationary_matrix(1)(1) === 0.U)
) {
        matrix(0)(1) := io.o_adder(0)
  matrix(1)(1) := io.o_adder(2)
    }

  }.otherwise{
    io.output_valid := 0.B
  }
}.otherwise{
  io.i_vn := VecInit(0.U,0.U,0.U,0.U)
  io.o_valid := VecInit(0.U,0.U,0.U,0.U)
  io.o_data_bus := VecInit(0.U,0.U,0.U,0.U)
  io.o_adder := VecInit(0.U,0.U,0.U)
  io.matrix := RegInit(VecInit(Seq.fill(Config.MaxCols)(VecInit(Seq.fill(Config.MaxRows)(0.U(32.W))))))
  io.output_valid := 0.B
}
}

// valid pin work in
//line 28,29,34,124,202

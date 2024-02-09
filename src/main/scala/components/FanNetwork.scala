package magmasi.components

import chisel3._
import chisel3.util._

class Fan4(Num : Int = 4 , Data_type : 32 ) extends Module {
    val io = IO(new Bundle{
        val i_valid = Input(UInt(1.W))
        val i_data_bus = Input(Vec(Num, UInt(Data_type.W)))
       val i_add_en_bus =  Input(Vec(Num - 1, UInt(1.W)))
        val i_cmd_bus = Input(Vec(Num - 1, UInt(3.W)))
        // val i_cmd_bus = Input(Vec(3,UInt((Num -1).W)))
         //val i_sel_bus = Input(Vec(20, UInt(1.W)))
        val o_valid = Output(Vec(Num, UInt(1.W)))
        val o_data_bus = Output(Vec(Num, UInt(Data_type.W)))
        val o_adder = Output(Vec(Num-1, UInt(Data_type.W)))
    })


    var w_fan_lvl_0 = WireInit(VecInit(Seq.fill(2)(0.U(64.W))))
    var w_fan_lvl_1 = WireInit(VecInit(Seq.fill(1)(0.U(32.W))))

    var w_vn_lvl_0 = WireInit(VecInit(Seq.fill(4)(0.U(32.W))))
    var w_vn_lvl_0_valid = WireInit(VecInit(Seq.fill(4)(0.U(1.W))))
    var w_vn_lvl_1 = WireInit(VecInit(Seq.fill(2)(0.U(32.W))))
    var w_vn_lvl_1_valid = WireInit(VecInit(Seq.fill(2)(0.U(1.W))))

    val r_lvl_output_ff = RegInit(VecInit(Seq.fill(8)(0.U(32.W))))
    val r_lvl_output_ff_valid = RegInit(VecInit(Seq.fill(8)(0.U(1.W))))
    var r_valid = RegInit(VecInit(Seq.fill(3)(0.U(1.W))))  

    var r_final_sum = RegInit(0.U(32.W))
    var r_final_add = RegInit(0.U)
    var r_final_add2 = RegInit(0.U)


//nothing
    when (w_vn_lvl_0_valid(1)(0) === 1.U && w_vn_lvl_0_valid(0)(0) === 1.U) {
        r_lvl_output_ff(1) := w_vn_lvl_0(1)
        r_lvl_output_ff(0) := w_vn_lvl_0(0)
        r_lvl_output_ff_valid(1) := 1.U
        r_lvl_output_ff_valid(0) := 1.U
    }.elsewhen (w_vn_lvl_0_valid(1) === 1.U && w_vn_lvl_0_valid(0) === 0.U) {
        r_lvl_output_ff(1) := w_vn_lvl_0(1)
        r_lvl_output_ff(0) := 0.U
        r_lvl_output_ff_valid(1) := 1.U
        r_lvl_output_ff_valid(0) := 0.U
    }.elsewhen (w_vn_lvl_0_valid(1) === 0.U && w_vn_lvl_0_valid(0) === 1.U) {
        r_lvl_output_ff(1) := 0.U
        r_lvl_output_ff(0) := w_vn_lvl_0(0)
        r_lvl_output_ff_valid(1) := 0.U
        r_lvl_output_ff_valid(0) := 1.U
    }.otherwise {
        r_lvl_output_ff(1) := 0.U
        r_lvl_output_ff(0) := 0.U
        r_lvl_output_ff_valid(1) := 0.U
        r_lvl_output_ff_valid(0) := 0.U
    }
    when (w_vn_lvl_0_valid(3)(0) === 1.U && w_vn_lvl_0_valid(2)(0) === 1.U) {
        r_lvl_output_ff(3) := w_vn_lvl_0(3)
        r_lvl_output_ff(2) := w_vn_lvl_0(2)
        r_lvl_output_ff_valid(3) := 1.U
        r_lvl_output_ff_valid(2) := 1.U
    }.elsewhen (w_vn_lvl_0_valid(3)(0) === 1.U && w_vn_lvl_0_valid(2)(0) === 0.U) {
        r_lvl_output_ff(3) := w_vn_lvl_0(3)
        r_lvl_output_ff(2) := 0.U
        r_lvl_output_ff_valid(3) := 1.U
        r_lvl_output_ff_valid(2) := 0.U
    }.elsewhen (w_vn_lvl_0_valid(3)(0) === 0.U && w_vn_lvl_0_valid(2)(0) === 1.U) {
        r_lvl_output_ff(3) := 0.U
        r_lvl_output_ff(2) := w_vn_lvl_0(2)
        r_lvl_output_ff_valid(3) := 0.U
        r_lvl_output_ff_valid(2) := 1.U
    }.otherwise {
        r_lvl_output_ff(3) := 0.U
        r_lvl_output_ff(2) := 0.U
        r_lvl_output_ff_valid(3) := 0.U
        r_lvl_output_ff_valid(2) := 0.U
    }

    r_lvl_output_ff(4) := r_lvl_output_ff(0)
    r_lvl_output_ff_valid(4) := r_lvl_output_ff_valid(0)

    when(w_vn_lvl_1_valid(0)(0)) {
        r_lvl_output_ff(5) := w_vn_lvl_1(0)
        r_lvl_output_ff_valid(5) := 1.U
    }.otherwise {
        r_lvl_output_ff(5) := r_lvl_output_ff(1)
        r_lvl_output_ff_valid(5) := r_lvl_output_ff_valid(1)
    }
    when(w_vn_lvl_1_valid(1)(0)) {
        r_lvl_output_ff(6) := w_vn_lvl_1(1)
        r_lvl_output_ff_valid(6) := 1.U
    }.otherwise {
        r_lvl_output_ff(6) := r_lvl_output_ff(2)
        r_lvl_output_ff_valid(6) := r_lvl_output_ff_valid(2)
    }

    r_lvl_output_ff(7) := r_lvl_output_ff(3)
    r_lvl_output_ff_valid(7) := r_lvl_output_ff_valid(3)



    when (io.i_valid === 1.U) {
    r_valid(0) := 1.U
    } .otherwise {
        r_valid(0) := 0.U
    }

    for (i <- 0 until 2) {
        // when (rst === 1.U) {
        //     r_valid(i + 1) := 0.U
        // } .otherwise {
        r_valid(i + 1) := r_valid(i)
        // }
    }


    val my_adder_0 = Module(new EdgeAdderSwitch(32,2,2,2))

    my_adder_0.io.i_valid := r_valid(0)
    my_adder_0.io.i_data_bus := VecInit(Seq(io.i_data_bus(1), io.i_data_bus(0)))
    my_adder_0.io.i_add_en := io.i_add_en_bus(0)
    my_adder_0.io.i_cmd := io.i_cmd_bus(0)
    my_adder_0.io.i_sel := 0.U
    w_vn_lvl_0(0) := my_adder_0.io.o_vn(31,0)
    w_vn_lvl_0(1) := my_adder_0.io.o_vn(63,32) 
    w_vn_lvl_0_valid(0) := my_adder_0.io.o_vn_valid(0)
    w_vn_lvl_0_valid(1) := my_adder_0.io.o_vn_valid(1)
    w_fan_lvl_0(0) := my_adder_0.io.o_adder

    val my_adder_1 = Module(new EdgeAdderSwitch(32,2,2,2))

    my_adder_1.io.i_valid := r_valid(1)
    my_adder_1.io.i_data_bus := VecInit(Seq(w_fan_lvl_0(1), w_fan_lvl_0(0)))
    my_adder_1.io.i_add_en := io.i_add_en_bus(2) // 2
     my_adder_1.io.i_cmd := io.i_cmd_bus(2)
    my_adder_1.io.i_sel := 0.U
    w_vn_lvl_1(0) := my_adder_1.io.o_vn(31,0)
    w_vn_lvl_1(1) := my_adder_1.io.o_vn(63,32) 
    w_vn_lvl_1_valid(0) := my_adder_1.io.o_vn_valid(0)
    w_vn_lvl_1_valid(1) := my_adder_1.io.o_vn_valid(1)
    w_fan_lvl_1(0) := my_adder_1.io.o_adder

    val my_adder_2 = Module(new EdgeAdderSwitch(32,2,2,2))

    my_adder_2.io.i_valid := r_valid(0)
    my_adder_2.io.i_data_bus := VecInit(Seq(io.i_data_bus(3), io.i_data_bus(2))) 
    my_adder_2.io.i_add_en := io.i_add_en_bus(1) //1
    my_adder_2.io.i_cmd := io.i_cmd_bus(1)
    my_adder_2.io.i_sel := 0.U

    w_vn_lvl_0(2) := my_adder_2.io.o_vn(31,0)
    w_vn_lvl_0(3) := my_adder_2.io.o_vn(63,32) 

    w_vn_lvl_0_valid(2) := my_adder_2.io.o_vn_valid(0)
    w_vn_lvl_0_valid(3) := my_adder_2.io.o_vn_valid(1)

    w_fan_lvl_0(1) := my_adder_2.io.o_adder



    r_final_add := 0.U
    r_final_add2 := 0.U
    r_final_sum := 0.U

    r_final_add := io.i_add_en_bus(2)
    r_final_add2 := r_final_add
    r_final_sum := w_fan_lvl_1(0)
 


    //  output adder 0,1,2
    io.o_data_bus(0) := 0.U
    io.o_data_bus(1) := 0.U
    io.o_data_bus(2) := 0.U
    io.o_data_bus(3) := 0.U

    io.o_data_bus(0) := r_lvl_output_ff(4)
    when (r_final_add2 === 1.U) {
        io.o_data_bus(1) := r_final_sum
    } .otherwise {
        io.o_data_bus(1) := r_lvl_output_ff(5)
    }
    io.o_data_bus(2) := r_lvl_output_ff(6)
    io.o_data_bus(3) := r_lvl_output_ff(7)


    io.o_valid(0) := 0.U
    io.o_valid(1) := 0.U
    io.o_valid(2) := 0.U
    io.o_valid(3) := 0.U

    io.o_valid(0) := r_lvl_output_ff_valid(4)
    when (r_final_add2 === 1.U) {
        io.o_valid(1) := 1.U
    } .otherwise {
        io.o_valid(1) := r_lvl_output_ff_valid(5)
    }
    io.o_valid(2) := r_lvl_output_ff_valid(6)
    io.o_valid(3) := r_lvl_output_ff_valid(7)



    io.o_adder(0) :=  0.U
    io.o_adder(1) :=  0.U
    io.o_adder(2) :=  0.U

    io.o_adder(0) :=  w_fan_lvl_0(0)
    io.o_adder(1) :=  w_fan_lvl_1(0)
    io.o_adder(2) :=  w_fan_lvl_0(1)

}

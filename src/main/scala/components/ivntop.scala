package magmasi.components

import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage


class ivntop(implicit val Config: MagmasiConfig) extends Module {
    //implicit val config = MagmasiConfig()
  val io = IO(new Bundle {
    val ProcessValid = Output(Bool())
    val Stationary_matrix = Input(Vec(Config.MaxRows, Vec(Config.MaxCols, UInt(Config.DATA_TYPE.W))))
    val o_vn = Output(Vec(Config.NoOfFDPE, Vec(Config.NUM_PES, UInt(5.W))))
  })
  val i_vn = Reg(Vec(Config.NoOfFDPE, Vec(Config.NUM_PES, UInt(5.W))))
   io.o_vn := i_vn
    var valid = WireDefault(false.B)
    var valid1 = WireDefault(false.B)
    var valid2 = WireDefault(false.B)
    var valid3 = WireDefault(false.B)
    var valid4 = WireDefault(false.B)
    var valid5 = WireDefault(false.B)
    var valid6 = WireDefault(false.B)
    var valid7 = WireDefault(false.B)

 
    val counter = RegInit(0.U(32.W))

    val my_stationary = Module(new stationary())
    my_stationary.io.Stationary_matrix := io.Stationary_matrix
    val station1 = my_stationary.io.o_Stationary_matrix1
    val station2 = my_stationary.io.o_Stationary_matrix2
    val station3 = my_stationary.io.o_Stationary_matrix3
    val station4 = my_stationary.io.o_Stationary_matrix4
    val station5 = my_stationary.io.o_Stationary_matrix5
    val station6 = my_stationary.io.o_Stationary_matrix6
    val station7 = my_stationary.io.o_Stationary_matrix7
    val station8 = my_stationary.io.o_Stationary_matrix8

  when(counter >=0.U){
    valid := true.B
  }
  when(counter >=20.U){
    valid1 := true.B
  }
  when(counter >=30.U){
    valid2 := true.B
  }
  when(counter >=40.U){
    valid3 := true.B
  }
  when(counter >=50.U){
    valid4 := true.B
  }
  when(counter >=60.U){
    valid5 := true.B
  }
  when(counter >=70.U){
    valid6 := true.B
  }
  when(counter >=80.U){
    valid7 := true.B
  }


  dontTouch(valid)

//   when(valid === true.B){
    val my_ivn1= Module(new ivncontrol4())
    my_ivn1.io.Stationary_matrix := station1 

    val i_vn1 = my_ivn1.io.o_vn
    val i_vn2 = my_ivn1.io.o_vn2
    io.ProcessValid := my_ivn1.io.ProcessValid
    my_ivn1.io.validpin := valid


    val my_ivn2= Module(new ivncontrol4())
    my_ivn2.io.Stationary_matrix := station2 

    val i_vn3 = my_ivn2.io.o_vn
    val i_vn4 = my_ivn2.io.o_vn2
    my_ivn2.io.validpin := valid1


     val my_ivn3= Module(new ivncontrol4())
    my_ivn3.io.Stationary_matrix := station3 

    val i_vn5 = my_ivn3.io.o_vn
    val i_vn6 = my_ivn3.io.o_vn2
    my_ivn3.io.validpin := valid2

     val my_ivn4= Module(new ivncontrol4())
    my_ivn4.io.Stationary_matrix := station4 

    val i_vn7 = my_ivn4.io.o_vn
    val i_vn8 = my_ivn4.io.o_vn2
    my_ivn4.io.validpin := valid3

     val my_ivn5= Module(new ivncontrol4())
    my_ivn5.io.Stationary_matrix := station5 

    val i_vn9 = my_ivn5.io.o_vn
    val i_vn10 = my_ivn5.io.o_vn2
    my_ivn5.io.validpin := valid4

     val my_ivn6= Module(new ivncontrol4())
    my_ivn6.io.Stationary_matrix := station6 

    val i_vn11 = my_ivn6.io.o_vn
    val i_vn12 = my_ivn6.io.o_vn2
    my_ivn6.io.validpin := valid5

     val my_ivn7= Module(new ivncontrol4())
    my_ivn7.io.Stationary_matrix := station7 

    val i_vn13 = my_ivn7.io.o_vn
    val i_vn14 = my_ivn7.io.o_vn2
    my_ivn7.io.validpin := valid6

     val my_ivn8= Module(new ivncontrol4())
    my_ivn8.io.Stationary_matrix := station8 

    val i_vn15 = my_ivn8.io.o_vn
    val i_vn16 = my_ivn8.io.o_vn2
    my_ivn8.io.validpin := valid7


    // for(i <- 0 until 16 ){
    //     io.o_vn(i) := i_vni

    // }

  
    i_vn(0) := i_vn1
   i_vn(1) := i_vn2
    i_vn(2) := i_vn3
    i_vn(3) := i_vn4
    i_vn(4) := i_vn5
    i_vn(5) := i_vn6
    i_vn(6) := i_vn7
    i_vn(7) := i_vn8
    i_vn(8) := i_vn9
    i_vn(9) := i_vn10
    i_vn(10) := i_vn11
   i_vn(11) := i_vn12
    i_vn(12) := i_vn13
    i_vn(13) := i_vn14
    i_vn(14) := i_vn15
    i_vn(15) := i_vn16
//   }.otherwise{
//     io.ProcessValid := 0.U
//   }

  
  counter := counter + 1.U


}
object IvnTopDriver extends App {
    implicit val config:MagmasiConfig = MagmasiConfig()
  (new ChiselStage).emitVerilog(new ivntop)
}
package magmasi.components

import chisel3._
import chisel3.util._

class fancontrol4(DATA_TYPE: Int = 32, NUM_PES: Int = 4, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
 
     val i_vn = Input(Vec(NUM_PES, UInt(LOG2_PES.W)))
    val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val o_reduction_add = Output(Vec(NUM_PES - 1, UInt()))
    val o_reduction_cmd = Output(Vec(NUM_PES - 1, UInt(3.W)))
    //val o_reduction_sel = Output(Vec(20, UInt(2.W)))
    val o_reduction_valid = Output(UInt(1.W))
  })


    val r_reduction_add = RegInit(VecInit(Seq.fill(NUM_PES - 1)(0.U)))
    val r_reduction_cmd = RegInit(VecInit(Seq.fill(NUM_PES - 1)(0.U(3.W))))
    //val r_reduction_sel = RegInit(VecInit(Seq.fill(20)(0.U(2.W))))

    val r_add_lvl_0Reg = RegInit(VecInit(Seq.fill(8)(0.U)))
    val r_add_lvl_1Reg = RegInit(VecInit(Seq.fill(5)(0.U)))


    val r_cmd_lvl_0Reg = RegInit(VecInit(Seq.fill(8)(0.U(3.W))))
    val r_cmd_lvl_1Reg = RegInit(VecInit(Seq.fill(5)(0.U(3.W))))





    val w_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))
    val r_valid = RegInit(VecInit(Seq.fill(5)(0.U)))
  
    w_vn := io.i_vn

    // adders 0

    for (x <- 0 until 2) {
      when(x.U === 0.U) {
        when(r_valid(1) === 1.U) {
          when(w_vn(2.U * x.U + 0.U)  === w_vn(2.U * x.U + 1.U)) {
              r_reduction_add(0.U+x.U) := 1.U
          }.otherwise {
            r_reduction_add(0.U+x.U) := 0.U
          }

            when((w_vn(2.U * x.U + 1.U) =/=
                w_vn(2.U * x.U + 2.U))  &&
                (w_vn(2.U * x.U + 0.U)  =/=
                w_vn(2.U * x.U + 1.U) )) {

                r_reduction_cmd(0 ) := "b011".U // both vn done // change to ledft vn

            }.elsewhen((w_vn(2.U * x.U + 1.U)  ===
                      w_vn(2.U * x.U + 2.U)) &&
                      (w_vn(2.U * x.U + 0.U) =/=
                      w_vn(2.U * x.U + 1.U) )) {

                    r_reduction_cmd(0) := "b011".U // left vn done

            }.otherwise {
                r_reduction_cmd( 0 ) := "b000".U // nothing

            }
          }.otherwise {
            r_reduction_add(0.U+x.U) := 0.U
            r_reduction_cmd(0 ) := "b000".U // nothing
      
          }
      

     // adders 2
        }.otherwise {
   
   
        r_reduction_add(0.U + x.U) := 0.U
        r_reduction_cmd(x.U ) := 0.U
        
    
        when(r_valid(1) === 1.U) {
          when(w_vn(2.U * x.U + 0.U)  === w_vn(2.U * x.U + 1.U)) {
            r_reduction_add(0.U + x.U) := 1.U
          }.otherwise {
            r_reduction_add(0.U + x.U) := 0.U
          }

          when((w_vn(2.U * x.U + 0.U) =/= w_vn(2.U * x.U - 1.U) ) &&
            (w_vn(2.U * x.U + 0.U)  =/= w_vn(2.U * x.U + 1.U) )) {

             r_reduction_cmd(x.U ) := "b011".U // both vn done  // sahi karne ke baad left vn

          }.elsewhen((w_vn(2.U * x.U + 0.U)  === w_vn(2.U * x.U - 1.U) )&&
            (w_vn(2.U * x.U + 0.U)  =/= w_vn(2.U * x.U + 1.U) )) {

            r_reduction_cmd(x.U ) := "b100".U // left vn done // "b100".U  // right vn done isko change kya hai
          }.otherwise {
            r_reduction_cmd(x.U ) := "b000".U
          }
        }.otherwise {
          r_reduction_add(0.U + x.U) := 0.U
          r_reduction_cmd(x.U ) := "b000".U
       
        }
      
     
    } 
    }
    //adders 1

  for (x <- 0 until 1) {
    when(x.U === 0.U) {
      r_reduction_add(2.U + x.U) := 0.U
      r_reduction_cmd( 2.U + x.U) := 0.U

      when(r_valid(1) === 1.U) {
        when(w_vn(4.U * x.U + 1.U)  === w_vn(4.U * x.U + 2.U) ) {
          r_reduction_add(2.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(2.U + x.U) := 0.U
        }

        when((w_vn(4.U * x.U + 0.U)  === w_vn(4.U * x.U + 1.U)) &&
            (w_vn(4.U * x.U + 2.U) === w_vn(4.U * x.U + 3.U))  &&
            (w_vn(4.U * x.U + 4.U)  =/= w_vn(4.U * x.U + 3.U)) &&
            (w_vn(4.U * x.U + 1.U)  =/=  w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(2.U +  x.U) := "b101".U // both vn done

        }.elsewhen((w_vn(4.U * x.U + 2.U)  === w_vn(4.U * x.U + 3.U)) &&
                  (w_vn(4.U * x.U + 4.U)  =/=  w_vn(4.U * x.U + 3.U)) &&
                  (w_vn(4.U * x.U + 1.U)  =/=  w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(2.U + x.U) := "b100".U // right vn done

        }.elsewhen((w_vn(4.U * x.U + 0.U) === w_vn(4.U * x.U + 1.U) ) &&
                  (w_vn(4.U * x.U + 1.U)  =/=  w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(2.U + x.U) := "b011".U // left vn done
        }.otherwise {
          r_reduction_cmd(2.U+ x.U):= "b000".U // nothing
        }
      }.otherwise {
        r_reduction_add(2.U + x.U) := 0.U
        r_reduction_cmd( 2.U + x.U) := "b000".U // nothings
      }
    
  
  }
  }



 


    r_add_lvl_0Reg := VecInit(Seq(
      r_reduction_add(0),
      r_reduction_add(1),
      r_reduction_add(0),
      r_reduction_add(1),
      r_reduction_add(0),
      r_reduction_add(1),
      r_reduction_add(0),
      r_reduction_add(1)
    ))

    r_add_lvl_1Reg := VecInit(Seq(
      r_reduction_add(2),
      r_reduction_add(2),
      r_reduction_add(2),
      r_reduction_add(2),
      r_reduction_add(2)
  
    ))



    

  



    r_cmd_lvl_0Reg := VecInit(Seq(
      r_reduction_cmd(0),
      r_reduction_cmd(1),
      r_reduction_cmd(0),
      r_reduction_cmd(1),
      r_reduction_cmd(0),
      r_reduction_cmd(1),
      r_reduction_cmd(0),
      r_reduction_cmd(1)
    
    
        ))

        
    r_cmd_lvl_1Reg := VecInit(Seq( 
        r_reduction_cmd(2),
        r_reduction_cmd(2),
        r_reduction_cmd(2),
        r_reduction_cmd(2),
        r_reduction_cmd(2)
       ))



 



    when(io.i_stationary === 0.B && io.i_data_valid === 1.B) {
      r_valid(0) := 1.U
    } .otherwise {
      r_valid(0) := 0.U
    }

    for (i <- 0 until 4) {
  
  
        r_valid(i + 1) := r_valid(i)
      }
  

    io.o_reduction_valid := r_valid(3)
    io.o_reduction_add :=  VecInit(Seq(
        
      r_add_lvl_0Reg(6),
      r_add_lvl_0Reg(7),
      r_add_lvl_1Reg(4)
      ))


    
    io.o_reduction_cmd := VecInit(Seq(
     
      r_cmd_lvl_0Reg(6),
      r_cmd_lvl_0Reg(7),
      r_cmd_lvl_1Reg(4)
      
      

      ))


}

package magmasi.components

import chisel3._
import chisel3.util._

class fancontrol(DATA_TYPE: Int = 32, NUM_PES: Int = 32, LOG2_PES: Int = 5) extends Module {
  val io = IO(new Bundle {
 
     val i_vn = Input(Vec(NUM_PES, UInt(LOG2_PES.W)))
    val i_stationary = Input(Bool())
    val i_data_valid = Input(Bool())
    val o_reduction_add = Output(Vec(NUM_PES - 1, UInt()))
    //val o_reduction_add = Output(UInt((NUM_PES - 1).W))
    //val o_reduction_cmd = Output(UInt((3 * (NUM_PES - 1)).W))
     val o_reduction_cmd = Output(Vec(NUM_PES - 1, UInt(3.W)))
    //val o_reduction_sel = Output(UInt(20.W)) // Output signal with 20 bits
    val o_reduction_sel = Output(Vec(20, UInt()))
    val o_reduction_valid = Output(UInt(1.W))
  })

  // Reduction cmd and sel control bits
    val r_reduction_add = RegInit(VecInit(Seq.fill(NUM_PES - 1)(0.U)))
    //val r_reduction_cmd = RegInit(VecInit(Seq.fill(3*(NUM_PES - 1))(0.U)))
    val r_reduction_cmd = RegInit(VecInit(Seq.fill(NUM_PES - 1)(0.U(3.W))))
    val r_reduction_sel = RegInit(VecInit(Seq.fill(20)(0.U)))

    val r_add_lvl_0Reg = RegInit(VecInit(Seq.fill(16)(0.U)))
    val r_add_lvl_1Reg = RegInit(VecInit(Seq.fill(16)(0.U)))
    val r_add_lvl_2Reg = RegInit(VecInit(Seq.fill(12)(0.U)))
    val r_add_lvl_3Reg = RegInit(VecInit(Seq.fill(8)(0.U)))  
    val r_add_lvl_4Reg = RegInit(VecInit(Seq.fill(5)(0.U)))

    val r_cmd_lvl_0Reg = RegInit(VecInit(Seq.fill(16)(0.U(3.W))))
    val r_cmd_lvl_1Reg = RegInit(VecInit(Seq.fill(16)(0.U(3.W))))
    val r_cmd_lvl_2Reg = RegInit(VecInit(Seq.fill(12)(0.U(3.W))))
    val r_cmd_lvl_3Reg = RegInit(VecInit(Seq.fill(8)(0.U(3.W))))
    val r_cmd_lvl_4Reg = RegInit(VecInit(Seq.fill(5)(0.U(3.W))))

    val r_sel_lvl_2Reg = RegInit(VecInit(Seq.fill(24)(0.U)))
    val r_sel_lvl_3Reg = RegInit(VecInit(Seq.fill(32)(0.U)))
    val r_sel_lvl_4Reg = RegInit(VecInit(Seq.fill(20)(0.U)))  

    //val r_vn = RegInit(VecInit(Seq.fill(2 * NUM_PES * LOG2_PES)(0.U)))
    //val r_vn = RegInit(VecInit(Seq.fill(2 * NUM_PES)(0.U(LOG2_PES.W))))
    val w_vn = RegInit(VecInit(Seq.fill(NUM_PES)(0.U(LOG2_PES.W))))
    val r_valid = RegInit(VecInit(Seq.fill(5)(0.U)))
  // Generate flop instances for timing alignment of i_vn
  // for (i <- 0 until 2) {
  
     
  //   when(i.U === 0.U) {
  //     r_vn(i) := io.i_vn
  //   }.otherwise {
  //     r_vn(i) := r_vn(i - 1)
  //   }
  //   }

  //   w_vn := r_vn(2 * NUM_PES * LOG2_PES - 1, NUM_PES * LOG2_PES)

//   for (i <- 0 until 2) {
//     when(i.U === 0.U) {
//       // when(io.rst === true.B) {
//       //   r_vn((i + 1) * NUM_PES * LOG2_PES - 1, i * NUM_PES * LOG2_PES) := 0.U
//       // }.otherwise {
//         //r_vn((i.U + 1.U) * NUM_PES.U  - 1.U):= io.i_vn
//         r_vn(31)(0) := io.i_vn
      
//     }.otherwise {
//       // when(io.rst === true.B) {
//       //   r_vn((i + 1) * NUM_PES * LOG2_PES - 1, i * NUM_PES * LOG2_PES) := 0.U
//       // }.otherwise {
//         //r_vn((i.U + 1.U) * NUM_PES.U  - 1.U) := r_vn(i.U * NUM_PES.U  - 1.U)
//         r_vn(63)(32) := r_vn(31)(0)
//       }
//   }
     //w_vn := r_vn(2.U * NUM_PES.U - 1.U)
    w_vn := io.i_vn

    for (x <- 0 until 16) {
      when(x.U === 0.U) {
      
          //r_reduction_add(0) := 1.U
          //r_reduction_cmd(0 ) := 1.U
         
   
                  
          // Generate cmd logic
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

                r_reduction_cmd(0 ) := "b101".U // both vn done

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
      


        }.elsewhen(x.U === 15.U) {
   
   
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

             r_reduction_cmd(x.U ) := "b101".U // both vn done

          }.elsewhen((w_vn(2.U * x.U + 0.U)  === w_vn(2.U * x.U - 1.U) )&&
            (w_vn(2.U * x.U + 0.U)  =/= w_vn(2.U * x.U + 1.U) )) {

            r_reduction_cmd(x.U ) := "b100".U // bypass

          }.otherwise {
            r_reduction_cmd(x.U ) := "b000".U
          }
        }.otherwise {
          r_reduction_add(0.U + x.U) := 0.U
          r_reduction_cmd(x.U ) := "b000".U
       
        }
      
      }.otherwise {
        r_reduction_add(0.U + x.U) := 0.U
        r_reduction_cmd(x.U ) := 0.U

      when(r_valid(1) === 1.U) {
        when(w_vn(2.U * x.U + 0.U) === w_vn(2.U * x.U + 1.U)) {

          r_reduction_add(0.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(0.U + x.U) := 0.U
        }

        when((w_vn(2.U * x.U + 0.U) =/= w_vn(2.U * x.U - 1.U))  &&
            (w_vn(2.U * x.U + 1.U)  =/=  w_vn(2.U * x.U + 2.U) )&&
            (w_vn(2.U * x.U + 0.U) =/=  w_vn(2.U * x.U + 1.U)) ) {

            r_reduction_cmd(x.U ) := "b101".U // both vn done

        }.elsewhen((w_vn(2.U * x.U + 0.U) === w_vn(2.U * x.U - 1.U)) &&
                  (w_vn(2.U * x.U + 1.U)  =/=  w_vn(2.U * x.U + 2.U))  &&
                  (w_vn(2.U * x.U + 0.U)  =/=  w_vn(2.U * x.U + 1.U) )) {

           r_reduction_cmd( x.U ) := "b100".U // right vn done

        }.elsewhen((w_vn(2.U * x.U + 0.U) =/=  w_vn(2.U * x.U - 1.U))  &&
                  (w_vn(2.U * x.U + 1.U)  === w_vn(2.U * x.U + 2.U))  &&
                  (w_vn(2.U * x.U + 0.U)  =/=  w_vn(2.U * x.U + 1.U) )) {

           r_reduction_cmd(x.U ) := "b011".U // left vn done

        }.otherwise {
           r_reduction_cmd( x.U ) := "b001".U // bypass
        }
        }.otherwise {
          r_reduction_add(0.U + x.U) := 0.U
          r_reduction_cmd(x.U ) := "b000".U // nothing
        }
      }

    } 

  for (x <- 0 until 8) {
    when(x.U === 0.U) {
      r_reduction_add(16.U + x.U) := 0.U
      r_reduction_cmd( 16.U + x.U) := 0.U

      when(r_valid(1) === 1.U) {
        when(w_vn(4.U * x.U + 1.U)  === w_vn(4.U * x.U + 2.U) ) {
          r_reduction_add(16.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(16.U + x.U) := 0.U
        }

        when((w_vn(4.U * x.U + 0.U)  === w_vn(4.U * x.U + 1.U)) &&
            (w_vn(4.U * x.U + 2.U) === w_vn(4.U * x.U + 3.U))  &&
            (w_vn(4.U * x.U + 4.U)  =/= w_vn(4.U * x.U + 3.U)) &&
            (w_vn(4.U * x.U + 1.U)  =/=  w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(16.U +  x.U) := "b101".U // both vn done

        }.elsewhen((w_vn(4.U * x.U + 2.U)  === w_vn(4.U * x.U + 3.U)) &&
                  (w_vn(4.U * x.U + 4.U)  =/=  w_vn(4.U * x.U + 3.U)) &&
                  (w_vn(4.U * x.U + 1.U)  =/=  w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(16.U + x.U) := "b100".U // right vn done

        }.elsewhen((w_vn(4.U * x.U + 0.U) === w_vn(4.U * x.U + 1.U) ) &&
                  (w_vn(4.U * x.U + 1.U)  =/=  w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(16.U + x.U) := "b011".U // left vn done
        }.otherwise {
          r_reduction_cmd(16.U+ x.U):= "b000".U // nothing
        }
      }.otherwise {
        r_reduction_add(16.U + x.U) := 0.U
        r_reduction_cmd( 16.U + x.U) := "b000".U // nothing
      }
    }.elsewhen(x.U === 7.U) {
      r_reduction_add(16.U + x.U) := 0.U
      r_reduction_cmd(16.U + x.U) := 0.U

      when(r_valid(1) === true.B) {
        when(w_vn(4.U * x.U + 1.U)  === w_vn(4.U * x.U + 2.U)) {
          r_reduction_add(16.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(16.U + x.U) := 0.U
        }

        when((w_vn(4.U * x.U + 0.U)  === w_vn(4.U * x.U + 1.U) ) &&
            (w_vn(4.U * x.U + 2.U)  === w_vn(4.U * x.U + 3.U) ) &&
            (w_vn(4.U * x.U + 0.U)  =/= w_vn(4.U * x.U - 1.U) ) &&
            (w_vn(4.U * x.U + 1.U)  =/= w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(16.U + x.U):= "b101".U // both vn done

        }.elsewhen((w_vn(4.U * x.U + 0.U) === w_vn(4.U * x.U + 1.U) ) &&
                  (w_vn(4.U * x.U + 0.U) =/= w_vn(4.U * x.U - 1.U) ) &&
                  (w_vn(4.U * x.U + 1.U)  =/= w_vn(4.U * x.U + 2.U))) {

          r_reduction_cmd(16.U +x.U) := "b011".U // left vn done

        }.elsewhen((w_vn(4.U * x.U + 2.U)  === w_vn(4.U * x.U + 3.U)) &&
                  (w_vn(4.U * x.U + 1.U)  =/= w_vn(4.U * x.U + 2.U) )) {

          r_reduction_cmd(16.U + x.U) := "b100".U // right vn done

        }.otherwise {
          r_reduction_cmd(16.U + x.U) := "b000".U // nothing
          }
        }.otherwise {
          r_reduction_add(16.U + x.U) := 0.U
          r_reduction_cmd(16.U + x.U) := "b000".U // nothing
        }
  }.otherwise{
    r_reduction_add(16.U + x.U) := 0.U
    r_reduction_cmd(16.U +x.U) := 0.U

    when(r_valid(1) === 1.U) {
      when(w_vn(4.U * x.U + 1.U) === w_vn(4.U * x.U + 2.U) ) {
        r_reduction_add(16.U + x.U) := 1.U
      }.otherwise {
        r_reduction_add(16.U + x.U) := 0.U
      }

      when((w_vn(4.U * x.U + 0.U)  === w_vn(4.U * x.U + 1.U)) &&
           (w_vn(4.U * x.U + 2.U)  === w_vn(4.U * x.U + 3.U)) &&
           (w_vn(4.U * x.U + 0.U)  =/= w_vn(4.U * x.U - 1.U) ) &&
           (w_vn(4.U * x.U + 4.U)=/= w_vn(4.U * x.U + 3.U) ) &&
           (w_vn(4.U * x.U + 1.U)  =/= w_vn(4.U * x.U + 2.U))) {

        r_reduction_cmd(16.U + x.U) := "b101".U // both vn done

      }.elsewhen((w_vn(4.U * x.U + 2.U)  === w_vn(4.U * x.U + 3.U)) &&
                 (w_vn(4.U * x.U + 4.U)  =/= w_vn(4.U * x.U + 3.U) ) &&
                 (w_vn(4.U * x.U + 1.U) =/= w_vn(4.U * x.U + 2.U) )) {

        r_reduction_cmd(16.U +  x.U):= "b100".U // right vn done

      }.elsewhen((w_vn(4.U * x.U + 0.U) === w_vn(4.U * x.U + 1.U) ) &&
                 (w_vn(4.U * x.U + 0.U) =/= w_vn(4.U * x.U - 1.U) ) &&
                 (w_vn(4.U * x.U + 1.U) =/= w_vn(4.U * x.U + 2.U) )) {

        
        r_reduction_cmd( 16.U + x.U) := "b011".U // left vn done
      }.otherwise {
        r_reduction_cmd( 16.U + x.U) := "b000".U // nothing
      }
      }.otherwise {
        r_reduction_add(16.U + x.U) := 0.U
        r_reduction_cmd( 16.U +  x.U) := "b000".U // nothing
      }
    }
  }


  for (x <- 0 until 4) {
    when(x.U === 0.U) {
      r_reduction_add(24.U + x.U) := 0.U
      r_reduction_cmd(24.U +  x.U) := 0.U
      r_reduction_sel((x * 2).U + 0.U) := "b00".U

      when(r_valid(1) === 1.U) {

        when(w_vn(8.U * x.U + 3.U)  === w_vn(8.U * x.U + 4.U)) {
          r_reduction_add(24.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(24.U + x.U) := 0.U
        }

        when((w_vn(8.U * x.U + 1.U) === w_vn(8.U * x.U + 2.U)) &&
            (w_vn(8.U * x.U + 5.U)  === w_vn(8.U * x.U + 6.U)) &&
            (w_vn(8.U * x.U + 8.U) =/= w_vn(8.U * x.U + 6.U) ) &&
            (w_vn(8.U * x.U + 2.U) =/= w_vn(8.U * x.U + 4.U) ) &&
            (w_vn(8.U * x.U + 5.U)  =/= w_vn(8.U * x.U + 3.U))) {

          r_reduction_cmd(24.U + x.U) := "b101".U // both vn done

        }.elsewhen((w_vn(8.U * x.U + 5.U) === w_vn(8.U * x.U + 6.U) ) &&
                  (w_vn(8.U * x.U + 8.U) =/= w_vn(8.U * x.U + 6.U) ) &&
                  (w_vn(8.U * x.U + 5.U)  =/= w_vn(8.U * x.U + 3.U) )) {

          r_reduction_cmd(24.U + x.U):= "b100".U // right vn done

        }.elsewhen((w_vn(8.U * x.U + 1.U)  === w_vn(8.U * x.U + 2.U) ) &&
                  (w_vn(8.U * x.U + 2.U) =/= w_vn(8.U * x.U + 4.U) )) {

          r_reduction_cmd( 24.U +  x.U):= "b011".U // left vn done

        }.otherwise {
          r_reduction_cmd(24.U +  x.U):= "b000".U // nothing
        }

        // Left select logic
      }.otherwise {
          r_reduction_add(24.U + x.U) := 0.U
          r_reduction_cmd( 24.U + x.U) := "b000".U // nothing
      }

        // Left select logic
      when(r_valid(1) === 1.U) {
          when(w_vn(8.U * x.U + 3.U)  === w_vn((8.U * x.U + 1.U) )) {
            r_reduction_sel((x * 2).U + 0.U) := "b0".U
          }.otherwise {
            r_reduction_sel((x * 2).U + 0.U) := "b1".U
          }
      }.otherwise {
          r_reduction_sel((x * 2).U + 0.U):= "b00".U
         
      }

        // Right select logic
      when(r_valid(1) === 1.U) {
          when(w_vn(8.U * x.U + 4.U)  === w_vn(8.U * x.U + 6.U) ) {
            r_reduction_sel((x * 2).U + 1.U) := "b1".U
          }.otherwise {
            r_reduction_sel((x * 2).U + 1.U) := "b0".U
          }
      }.otherwise{
          r_reduction_sel((x * 2).U + 0.U) := "b00".U
      
      }
    
  }.elsewhen (x.U === 3.U) {
      r_reduction_add(24.U + x.U) := 0.U
      r_reduction_cmd( 24.U +  x.U) := 0.U
      r_reduction_sel((x.U * 2.U) + 0.U) := "b00".U

      when (r_valid(1) === 1.U) {
        when (w_vn(8.U * x.U + 3.U)  === w_vn(8.U * x.U + 4.U) ) {
          r_reduction_add(24.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(24.U + x.U) := 0.U
        }

        when ((w_vn(8.U * x.U + 1.U)  === w_vn(8.U * x.U + 2.U) ) &&
              (w_vn(8.U * x.U + 5.U)  === w_vn(8.U * x.U + 6.U) ) &&
              (w_vn(8.U * x.U + 1.U)  =/= w_vn(8.U * x.U - 1.U) ) &&
              (w_vn(8.U * x.U + 2.U)  =/= w_vn(8.U * x.U + 4.U) ) &&
              (w_vn(8.U * x.U + 5.U) =/= w_vn(8.U * x.U + 3.U) )) {

          r_reduction_cmd( 24.U + x.U):= "b101".U // both vn done

        }.elsewhen ((w_vn(8.U * x.U + 1.U)  === w_vn(8.U * x.U + 2.U) ) &&
                  (w_vn(8.U * x.U + 1.U)  =/= w_vn(8.U * x.U - 1.U) ) &&
                  (w_vn(8.U * x.U + 4.U) =/= w_vn(8.U * x.U + 2.U))) {

          r_reduction_cmd( 24.U +  x.U) := "b011".U // left vn done
          
        }.elsewhen ((w_vn(8.U * x.U + 5.U) === w_vn(8.U * x.U + 6.U) ) &&
                  (w_vn(8.U * x.U + 5.U)  =/= w_vn(8.U * x.U + 3.U))) {

          r_reduction_cmd( 24.U * x.U) := "b100".U // right vn done

        }.otherwise {

          r_reduction_cmd( 24.U + x.U) := "b000".U // nothing
        }
      }.otherwise {
        r_reduction_add(24.U + x.U) := 0.U
        r_reduction_cmd(24.U +x.U):= "b000".U // nothing
      }

      // generate left select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(8.U * x.U + 3.U)  === w_vn(8.U * x.U + 1.U)) {

          r_reduction_sel((x.U * 2.U) + 0.U) := "b0".U

        }.otherwise {
          r_reduction_sel((x.U * 2.U) + 0.U) := "b1".U
        }
      }.otherwise {
        r_reduction_sel((x.U * 2.U) + 0.U) := "b00".U
      }

      // generate right select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(8.U * x.U + 4.U) === w_vn(8.U * x.U + 6.U)) {

          r_reduction_sel((x.U * 2.U) + 1.U) := "b1".U

        }.otherwise {
          r_reduction_sel((x.U * 2.U) + 1.U) := "b0".U
        }
      }.otherwise {
        r_reduction_sel((x.U * 2.U) + 0.U) := "b00".U
      }


    }.otherwise{
      r_reduction_add(24.U + x.U) := 0.U
      r_reduction_cmd( 24.U +  x.U) := "b000".U
      r_reduction_sel((x.U * 2.U) + 0.U) := "b00".U

       // generate cmd logic
      when (r_valid(1) === 1.U) {
        when (w_vn(8.U * x.U + 3.U)  === w_vn(8.U * x.U + 4.U) ) {
          r_reduction_add(24.U + x.U) := 1.U // add enable
        }.otherwise {
          r_reduction_add(24.U + x.U) := 0.U
        }

        when ((w_vn(8.U * x.U + 1.U)  === w_vn(8.U * x.U + 2.U) ) &&
              (w_vn(8.U * x.U + 5.U) === w_vn(8.U * x.U + 6.U) ) &&
              (w_vn(8.U * x.U + 1.U)  =/= w_vn(8.U * x.U - 1.U) ) &&
              (w_vn(8.U * x.U + 8.U) =/= w_vn(8.U * x.U + 6.U) ) &&
              (w_vn(8.U * x.U + 2.U) =/= w_vn(8.U * x.U + 4.U) ) &&
              (w_vn(8.U * x.U + 5.U) =/= w_vn(8.U * x.U + 3.U) )) {

          r_reduction_cmd( 24.U +  x.U) := "b101".U // both vn done

        }.elsewhen ((w_vn(8.U * x.U + 5.U)  === w_vn(8.U * x.U + 6.U)) &&
                  (w_vn(8.U * x.U + 8.U)  =/= w_vn(8.U * x.U + 6.U) ) &&
                  (w_vn(8.U * x.U + 5.U)  =/= w_vn(8.U * x.U + 3.U) )) {

          r_reduction_cmd(24.U + x.U):= "b100".U // right vn done

        }.elsewhen ((w_vn(8.U * x.U + 1.U)  === w_vn(8.U * x.U + 2.U) ) &&
                  (w_vn(8.U * x.U + 1.U)  =/= w_vn(8.U * x.U - 1.U) ) &&
                  (w_vn(8.U * x.U + 4.U) =/= w_vn(8.U * x.U + 2.U) )) {

          r_reduction_cmd( 24.U +  x.U):= "b011".U // left vn done

        }.otherwise {
          r_reduction_cmd( 24.U + x.U):= "b000".U // nothing
        }
      }.otherwise {
        r_reduction_add(24.U + x.U) := 0.U
        r_reduction_cmd( 24.U + x.U) := "b000".U // nothing
      }

      // generate left select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(8.U * x.U + 3.U)  === w_vn(8.U * x.U + 1.U) ) {

          r_reduction_sel((x.U * 2.U) + 0.U) := "b0".U

        }.otherwise {

          r_reduction_sel((x.U * 2.U) + 0.U) := "b1".U
        }
      }.otherwise {
        r_reduction_sel((x.U * 2.U) + 0.U) := "b00".U
      }

      // generate right select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(8.U * x.U + 4.U)  === w_vn(8.U * x.U + 6.U) ) {

          r_reduction_sel((x.U * 2.U) + 1.U) := "b1".U

        }.otherwise {

          r_reduction_sel((x.U * 2.U) + 1.U) := "b0".U
        }
      }.otherwise {

        r_reduction_sel((x.U * 2.U) + 1.U) := "b00".U
      }
    }
 }
 for (x <- 0 until 2) {
  when (x.U === 0.U) {
   
      r_reduction_add(28.U + x.U) := 0.U
      r_reduction_cmd( 28.U + x.U):= 0.U
      r_reduction_sel((x.U * 4.U) + 8.U) := "b0000".U
 
      // generate cmd logic
      when (r_valid(1) === 1.U) {
        when (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 8.U)) {
          r_reduction_add(28.U + x.U) := 1.U // add enable
        }.otherwise {
          r_reduction_add(28.U + x.U) := 0.U
        }

        when (w_vn(16.U * x.U + 3.U) === w_vn((16.U * x.U + 4.U) ) &&
              (w_vn(16.U * x.U + 11.U)  === w_vn(16.U * x.U + 12.U) ) &&
              (w_vn(16.U * x.U + 16.U) =/= w_vn(16.U * x.U + 12.U)) &&
              (w_vn(16.U * x.U + 4.U)  =/= w_vn(16.U * x.U + 8.U) ) &&
              (w_vn(16.U * x.U + 11.U)  =/= w_vn(16.U * x.U + 7.U))) {

          r_reduction_cmd( 28.U + x.U) := "b101".U // both vn done

        }.elsewhen ((w_vn(16.U * x.U + 11.U)=== w_vn(16.U * x.U + 12.U)) &&
                   (w_vn(16.U * x.U + 16.U) =/= w_vn(16.U * x.U + 12.U)) &&
                   (w_vn(16.U * x.U + 11.U) =/= w_vn(16.U * x.U + 7.U))) {

          r_reduction_cmd( 28.U + x.U) := "b100".U // right vn done

        }.elsewhen ((w_vn(16.U * x.U + 3.U) === w_vn(16.U * x.U + 4.U)) &&
                   (w_vn(16.U * x.U + 4.U)  =/= w_vn(16.U * x.U + 8.U))) {

          r_reduction_cmd( 28.U + x.U):= "b011".U // left vn done

        }.otherwise {
          r_reduction_cmd( 28.U +x.U) := "b000".U // nothing
        }
      }.otherwise {
        r_reduction_add(28.U + x.U) := 0.U
        r_reduction_cmd( 28.U + x.U):= "b000".U // nothing
      }

      // generate left select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 3.U) ) {

          r_reduction_sel((x.U * 4.U) + 8.U) := "b00".U

        }.elsewhen (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 5.U) ) {

          r_reduction_sel((x.U * 4.U) + 8.U):= "b01".U

        }.otherwise {

          r_reduction_sel((x.U * 4.U) + 8.U) := "b10".U
        }
      }.otherwise {
        r_reduction_sel((x.U * 4.U) + 8.U) := "b0000".U
      }

      // generate right select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(16.U * x.U + 8.U)  === w_vn(16.U * x.U + 12.U) ) {

          r_reduction_sel((x.U * 4.U) + 10.U) := "b10".U

        }.elsewhen (w_vn(16.U * x.U + 8.U)  === w_vn(16.U * x.U + 10.U)) {

          r_reduction_sel((x.U * 4.U) + 10.U) := "b01".U

        }.otherwise {
          r_reduction_sel((x.U * 4.U) + 10.U) := "b00".U
        }
      }.otherwise {
        r_reduction_sel((x.U * 4.U) + 8.U) := "b0000".U
      }

    }.elsewhen (x.U === 1.U) {
   
        r_reduction_add(28.U + x.U) := 0.U
        r_reduction_cmd( 28.U +  x.U) := 0.U
        r_reduction_sel((x.U * 4.U) + 8.U):=  "b0000".U
  
        // generate cmd logic
        when (r_valid(1)===1.U) {
          when (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 8.U) ) {
            r_reduction_add(28.U + x.U) := 1.U // add enable
          }.otherwise {
            r_reduction_add(28.U + x.U) := 0.U
          }

          when ((w_vn(16.U * x.U + 3.U) === w_vn(16.U * x.U + 4.U) ) &&
                (w_vn(16.U * x.U + 11.U)  === w_vn(16.U * x.U + 12.U) ) &&
                (w_vn(16.U * x.U + 3.U) =/= w_vn(16.U * x.U - 1.U)) &&
                (w_vn(16.U * x.U + 4.U)  =/= w_vn(16.U * x.U + 8.U) ) &&
                (w_vn(16.U * x.U + 11.U)  =/= w_vn(16.U * x.U + 7.U) )) {

            r_reduction_cmd(28.U +  x.U) := "b101".U // both vn done

          }.elsewhen ((w_vn(16.U * x.U + 3.U)  === w_vn(16.U * x.U + 4.U) ) &&
                     (w_vn(16.U * x.U + 3.U)  =/= w_vn(16.U * x.U - 1.U) ) &&
                     (w_vn(16.U * x.U + 8.U)  =/= w_vn(16.U * x.U + 4.U) )) {

            r_reduction_cmd( 28.U + x.U):= "b011".U // left vn done

          }.elsewhen ((w_vn(16.U * x.U + 11.U)  === w_vn(16.U * x.U + 12.U) ) &&
                     (w_vn(16.U * x.U + 11.U)  =/= w_vn(16.U * x.U + 7.U) )) {

            r_reduction_cmd( 28.U +x.U) := "b100".U // right vn done

          }.otherwise {
            r_reduction_cmd( 28.U +  x.U) := "b000".U // nothing
          }
        }.otherwise {
          r_reduction_add(28.U + x.U) := 0.U
          r_reduction_cmd( 28.U + x.U) := "b000".U // nothing
        }

        // generate left select logic
        when (r_valid(1) === 1.U) {
          when (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 3.U)) {
            r_reduction_sel((x.U * 4.U) + 8.U) := "b00".U
          }.elsewhen (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 5.U) ) {
            r_reduction_sel((x.U * 4.U) + 8.U) := "b01".U
          }.otherwise {
            r_reduction_sel((x.U * 4.U) + 8.U) := "b10".U
          }
        }.otherwise {
          r_reduction_sel((x.U * 4.U) + 8.U) :=  "b0000".U
        }

        // generate right select logic
        when (r_valid(1)===1.U) {
          when (w_vn(16.U * x.U + 8.U) === w_vn(16.U * x.U + 12.U) ) {
            r_reduction_sel((x.U * 4.U) + 10.U) := "b10".U
          }.elsewhen (w_vn(16.U * x.U + 8.U)  === w_vn(16.U * x.U + 10.U) ) {
            r_reduction_sel((x.U * 4.U) + 10.U) := "b01".U
          }.otherwise {
            r_reduction_sel((x.U * 4.U) + 10.U) := "b00".U
          }
        }.otherwise {
          r_reduction_sel((x.U * 4.U) + 8.U) :=  "b0000".U
        }


      }.otherwise{
        r_reduction_add(28.U + x.U) := 0.U
        r_reduction_cmd(28.U + x.U) := 0.U
        r_reduction_sel((x.U * 4.U) + 8.U) :=  "b0000".U
         // generate cmd logic
        when (r_valid(1)===1.U) {
          when (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 8.U)) {
            r_reduction_add(28.U + x.U) := 1.U // add enable
          } .otherwise {
            r_reduction_add(28.U + x.U) := 0.U
          }

        when ((w_vn(16.U * x.U + 3.U) === w_vn(16.U * x.U + 4.U) ) &&
              (w_vn(16.U * x.U + 11.U) === w_vn(16.U * x.U + 12.U) ) &&
              (w_vn(16.U * x.U + 3.U) =/= w_vn(16.U * x.U - 1.U) ) &&
              (w_vn(16.U * x.U + 16.U) =/= w_vn(16.U * x.U + 12.U)) &&
              (w_vn(16.U * x.U + 4.U)=/= w_vn(16.U * x.U + 8.U)) &&
              (w_vn(16.U * x.U + 11.U)  =/= w_vn(16.U * x.U + 7.U))) {

          r_reduction_cmd( 28.U + x.U) := "b101".U // both vn done

        } .elsewhen ((w_vn(16.U * x.U + 11.U)  === w_vn(16.U * x.U + 12.U) ) &&
                  (w_vn(16.U * x.U + 16.U) =/= w_vn(16.U * x.U + 12.U) ) &&
                  (w_vn(16.U * x.U + 11.U)  =/= w_vn(16.U * x.U + 7.U) )) {

          r_reduction_cmd( 28.U +  x.U):= "b100".U // right vn done

        } .elsewhen ((w_vn(16.U * x.U + 3.U)  === w_vn(16.U * x.U + 4.U) ) &&
                  (w_vn(16.U * x.U + 3.U)  =/= w_vn(16.U * x.U - 1.U) ) &&
                  (w_vn(16.U * x.U + 8.U) =/= w_vn(16.U * x.U + 4.U) )) {

          r_reduction_cmd( 28.U + x.U) := "b011".U // left vn done

        } .otherwise {
          r_reduction_cmd( 28.U +  x.U) := "b000".U // nothing
        }
        } .otherwise {
          r_reduction_add(28.U + x.U) := 0.U
          r_reduction_cmd( 28.U +  x.U):= "b000".U // nothing
        }

      // generate left select logic
      when (r_valid(1)===1.U) {
        when (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 3.U) ) {

          r_reduction_sel((x.U * 4.U) + 8.U) := "b00".U

        } .elsewhen (w_vn(16.U * x.U + 7.U)  === w_vn(16.U * x.U + 5.U)) {

          r_reduction_sel((x.U * 4.U) + 8.U) := "b01".U

        } .otherwise {
          r_reduction_sel((x.U * 4.U) + 8.U):= "b10".U
        }
        } .otherwise {
          r_reduction_sel((x.U * 4.U) + 8.U):=  "b0000".U
        }

      // generate right select logic
      when (r_valid(1) === 1.U) {
        when (w_vn(16.U * x.U + 8.U)  === w_vn(16.U * x.U + 12.U) ) {
          r_reduction_sel((x.U * 4.U) + 10.U) := "b10".U
        } .elsewhen (w_vn(16.U * x.U + 8.U)  === w_vn(16.U * x.U + 10.U)) {
          r_reduction_sel((x.U * 4.U) + 10.U) := "b01".U
        } .otherwise {
          r_reduction_sel((x.U * 4.U) + 10.U) := "b00".U
        }
        } .otherwise {
          r_reduction_sel((x.U * 4.U) + 8.U) :=  "b0000".U
        }
    }
 }


  for (x <- 0 until 1) {
    when (x.U === 0.U) {
      r_reduction_add(30.U + x.U) := 0.U
      r_reduction_cmd( 30.U + x.U):= 0.U
      r_reduction_sel((x.U * 4.U) + 16.U) := "b0000".U

      when (r_valid(1) === true.B) {
        when (w_vn(32.U * x.U + 15.U)  === w_vn(32.U * x.U + 16.U) ) {
          r_reduction_add(30.U + x.U) := 1.U
        }.otherwise {
          r_reduction_add(30.U + x.U) := 0.U
        }

        when ((w_vn(32.U * x.U + 7.U)  === w_vn(32.U * x.U + 8.U) ) &&
              (w_vn(32.U * x.U + 23.U) === w_vn(32.U * x.U + 24.U)) &&
              (w_vn(32.U * x.U + 8.U) =/= w_vn(32.U * x.U + 16.U) ) &&
              (w_vn(32.U * x.U + 23.U)  =/= w_vn(32.U * x.U + 15.U))) {

          r_reduction_cmd( 30.U + x.U) := "b101".U

        }.elsewhen ((w_vn(32.U * x.U + 23.U)  === w_vn(32.U * x.U + 24.U) ) &&
                  (w_vn(32.U * x.U + 23.U)  =/= w_vn(32.U * x.U + 15.U) )) {

          r_reduction_cmd( 30.U +  x.U) := "b100".U

        }.elsewhen ((w_vn(32.U * x.U + 7.U)  === w_vn(32.U * x.U + 8.U) ) &&
                  (w_vn(32.U * x.U + 16.U)  =/= w_vn(32.U * x.U + 8.U) )) {

          r_reduction_cmd( 30.U + x.U) := "b011".U

        }.otherwise {
          r_reduction_cmd( 30.U +  x.U) := "b000".U
        }
      }.otherwise {
        r_reduction_add(30.U + x.U) := 0.U
        r_reduction_cmd( 30.U +  x.U) := "b000".U
      }

      when (r_valid(1) === 1.U) {
        when (w_vn(32.U * x.U + 15.U)  === w_vn(32.U * x.U + 7.U) ) {
          r_reduction_sel((x.U * 4.U) + 16.U) := "b00".U
        } .elsewhen (w_vn(32.U * x.U + 15.U)  === w_vn(32.U * x.U + 11.U)) {
          r_reduction_sel((x.U * 4.U) + 16.U) := "b01".U
        } .elsewhen (w_vn(32.U * x.U + 15.U)  === w_vn(32.U * x.U + 13.U)) {
          r_reduction_sel((x.U * 4.U) + 16.U) := "b10".U
        } .otherwise {
          r_reduction_sel((x.U * 4.U) + 16.U) := "b11".U
        }
      } .otherwise {
        r_reduction_sel((x.U * 4.U) + 16.U):=  "b0000".U
      }

      when (r_valid(1) === 1.U) {
        when (w_vn(32.U * x.U + 16.U)  === w_vn(32.U * x.U + 24.U) ) {
          r_reduction_sel((x.U * 4.U) + 18.U):= "b11".U
        } .elsewhen (w_vn(32.U * x.U + 16.U)  === w_vn(32.U * x.U + 20.U) ) {
          r_reduction_sel((x.U * 4.U) + 18.U) := "b10".U
        } .elsewhen (w_vn(32.U * x.U + 16.U) === w_vn(32.U * x.U + 18.U) ) {
          r_reduction_sel((x.U * 4.U) + 18.U) := "b01".U
        } .otherwise {
          r_reduction_sel((x.U * 4.U) + 18.U):= "b00".U
        }
      } .otherwise {
        r_reduction_sel((x.U * 4.U) + 18.U) :=  "b0000".U
      }
    }
  }


    // r_add_lvl_0 := 0.U
    // r_add_lvl_1 := 0.U
    // r_add_lvl_2 := 0.U
    // r_add_lvl_3 := 0.U
    // r_add_lvl_4 := 0.U

    // r_cmd_lvl_0 := 0.U
    // r_cmd_lvl_1 := 0.U
    // r_cmd_lvl_2 := 0.U
    // r_cmd_lvl_3 := 0.U
    // r_cmd_lvl_4 := 0.U

    // r_sel_lvl_2 := 0.U
    // r_sel_lvl_3 := 0.U
    // r_sel_lvl_4 := 0.U


//     r_add_lvl_0 := r_reduction_add(15, 0)
//     r_add_lvl_1 := Cat(r_reduction_add(23, 16), r_reduction_add(23, 16))
//     r_add_lvl_2 := Cat(r_reduction_add(27, 24), r_reduction_add(27, 24), r_reduction_add(27, 24))
//     r_add_lvl_3 := Cat(r_reduction_add(29, 28), r_reduction_add(29, 28), r_reduction_add(29, 28), r_reduction_add(29, 28))
//     r_add_lvl_4 := Fill(5, r_reduction_add(30))


    r_add_lvl_0Reg := VecInit(Seq(
      r_reduction_add(0),
      r_reduction_add(1),
      r_reduction_add(2),
      r_reduction_add(3),
      r_reduction_add(4),
      r_reduction_add(5),
      r_reduction_add(6),
      r_reduction_add(7),
      r_reduction_add(8),
      r_reduction_add(9),
      r_reduction_add(10),
      r_reduction_add(11),
      r_reduction_add(12),
      r_reduction_add(13),
      r_reduction_add(14),
      r_reduction_add(15)
    ))

    r_add_lvl_1Reg := VecInit(Seq(
      r_reduction_add(16),
      r_reduction_add(17),
      r_reduction_add(18),
      r_reduction_add(19),
      r_reduction_add(20),
      r_reduction_add(21),
      r_reduction_add(22),
      r_reduction_add(23),
      r_reduction_add(16),
      r_reduction_add(17),
      r_reduction_add(18),
      r_reduction_add(19),
      r_reduction_add(20),
      r_reduction_add(21),
      r_reduction_add(22),
      r_reduction_add(23)
    ))



    r_add_lvl_2Reg := VecInit(Seq(
      r_reduction_add(24),
      r_reduction_add(25),
      r_reduction_add(26),
      r_reduction_add(27),
      r_reduction_add(24),
      r_reduction_add(25),
      r_reduction_add(26),
      r_reduction_add(27),
      r_reduction_add(24),
      r_reduction_add(25),
      r_reduction_add(26),
      r_reduction_add(27)
      ))

    r_add_lvl_3Reg := VecInit(Seq(
      r_reduction_add(28),
      r_reduction_add(29),
      r_reduction_add(28),
      r_reduction_add(29),
      r_reduction_add(28),
      r_reduction_add(29),
      r_reduction_add(28),
      r_reduction_add(29)

     ))

    r_add_lvl_4Reg := VecInit(Seq(
      r_reduction_add(30),
      r_reduction_add(30), 
      r_reduction_add(30), 
      r_reduction_add(30), 
      r_reduction_add(30)
      ))


    r_cmd_lvl_0Reg := VecInit(Seq(
      r_reduction_cmd(0),
      r_reduction_cmd(1),
      r_reduction_cmd(2),
      r_reduction_cmd(3),
      r_reduction_cmd(4),
      r_reduction_cmd(5),
      r_reduction_cmd(6),
      r_reduction_cmd(7),
      r_reduction_cmd(8),
      r_reduction_cmd(9),
      r_reduction_cmd(10),
      r_reduction_cmd(11),
      r_reduction_cmd(12),
      r_reduction_cmd(13),
      r_reduction_cmd(14),
      r_reduction_cmd(15)
    
        ))

        
    r_cmd_lvl_1Reg := VecInit(Seq( 
        r_reduction_cmd(16),
        r_reduction_cmd(17),
        r_reduction_cmd(18),
        r_reduction_cmd(19),
        r_reduction_cmd(20),
        r_reduction_cmd(21),
        r_reduction_cmd(22),
        r_reduction_cmd(23),
        r_reduction_cmd(16),
        r_reduction_cmd(17),
        r_reduction_cmd(18),
        r_reduction_cmd(19),
        r_reduction_cmd(20),
        r_reduction_cmd(21),
        r_reduction_cmd(22),
        r_reduction_cmd(23)
       ))

    r_cmd_lvl_2Reg := VecInit(Seq(
        r_reduction_cmd(24),
        r_reduction_cmd(25),
        r_reduction_cmd(26),
        r_reduction_cmd(27),
        r_reduction_cmd(24),
        r_reduction_cmd(25),
        r_reduction_cmd(26),
        r_reduction_cmd(27),
        r_reduction_cmd(24),
        r_reduction_cmd(25),
        r_reduction_cmd(26),
        r_reduction_cmd(27)
    ))

    r_cmd_lvl_3Reg := VecInit(Seq(
        r_reduction_cmd(28),
        r_reduction_cmd(29),
        r_reduction_cmd(28),
        r_reduction_cmd(29),
        r_reduction_cmd(28),
        r_reduction_cmd(29),
        r_reduction_cmd(28),
        r_reduction_cmd(29)
    ))

    r_cmd_lvl_4Reg := VecInit(Seq(
        r_reduction_cmd(30),
        r_reduction_cmd(30),
        r_reduction_cmd(30),
        r_reduction_cmd(30),
        r_reduction_cmd(30)
    ))

     r_sel_lvl_2Reg := VecInit(Seq(
      r_reduction_sel(0),
      r_reduction_sel(1),
      r_reduction_sel(2),
      r_reduction_sel(3),
      r_reduction_sel(4),
      r_reduction_sel(5),
      r_reduction_sel(6),
      r_reduction_sel(7),
      r_reduction_sel(0),
      r_reduction_sel(1),
      r_reduction_sel(2),
      r_reduction_sel(3),
      r_reduction_sel(4),
      r_reduction_sel(5),
      r_reduction_sel(6),
      r_reduction_sel(7),
      r_reduction_sel(0),
      r_reduction_sel(1),
      r_reduction_sel(2),
      r_reduction_sel(3),
      r_reduction_sel(4),
      r_reduction_sel(5),
      r_reduction_sel(6),
      r_reduction_sel(7)
      

    ))
    r_sel_lvl_3Reg := VecInit(Seq(
      r_reduction_sel(8),
      r_reduction_sel(9),
      r_reduction_sel(10), 
      r_reduction_sel(11),
      r_reduction_sel(12),
      r_reduction_sel(13),
      r_reduction_sel(14), 
      r_reduction_sel(15),
      r_reduction_sel(8),
      r_reduction_sel(9),
      r_reduction_sel(10), 
      r_reduction_sel(11),
      r_reduction_sel(12),
      r_reduction_sel(13),
      r_reduction_sel(14), 
      r_reduction_sel(15),
      r_reduction_sel(8),
      r_reduction_sel(9),
      r_reduction_sel(10), 
      r_reduction_sel(11),
      r_reduction_sel(12),
      r_reduction_sel(13),
      r_reduction_sel(14), 
      r_reduction_sel(15),
      r_reduction_sel(8),
      r_reduction_sel(9),
      r_reduction_sel(10), 
      r_reduction_sel(11),
      r_reduction_sel(12),
      r_reduction_sel(13),
      r_reduction_sel(14), 
      r_reduction_sel(15)
      ))
    r_sel_lvl_4Reg := VecInit(Seq(
      r_reduction_sel(16),
      r_reduction_sel(17),
      r_reduction_sel(18),
      r_reduction_sel(19),
      r_reduction_sel(16),
      r_reduction_sel(17),
      r_reduction_sel(18),
      r_reduction_sel(19),
      r_reduction_sel(16),
      r_reduction_sel(17),
      r_reduction_sel(18),
      r_reduction_sel(19),
      r_reduction_sel(16),
      r_reduction_sel(17),
      r_reduction_sel(18),
      r_reduction_sel(19),
      r_reduction_sel(16),
      r_reduction_sel(17),
      r_reduction_sel(18),
      r_reduction_sel(19)
      ))



    //     r_cmd_lvl_0 := r_reduction_cmd(47, 0)
    //     r_cmd_lvl_1 := Cat(r_reduction_cmd(71, 48), r_reduction_cmd(71, 48))
    //     r_cmd_lvl_2 := Cat(r_reduction_cmd(83, 72), r_reduction_cmd(83, 72), r_reduction_cmd(83, 72))
    //     r_cmd_lvl_3 := Cat(r_reduction_cmd(89, 84), r_reduction_cmd(89, 84), r_reduction_cmd(89, 84), r_reduction_cmd(89, 84))
    //     r_cmd_lvl_4 := Cat(r_reduction_cmd(92, 90), r_reduction_cmd(92, 90), r_reduction_cmd(92, 90), r_reduction_cmd(92, 90), r_reduction_cmd(92, 90))




    //     r_sel_lvl_2 := Cat(r_reduction_sel(7, 0), r_reduction_sel(7, 0), r_reduction_sel(7, 0), r_reduction_sel(7, 0))
    //     r_sel_lvl_3 := Cat(r_reduction_sel(15, 8), r_reduction_sel(15, 8), r_reduction_sel(15, 8), r_reduction_sel(15, 8))
    //     r_sel_lvl_4 := Cat(r_reduction_sel(19, 16), r_reduction_sel(19, 16), r_reduction_sel(19, 16), r_reduction_sel(19, 16), r_reduction_sel(19, 16))


    //     when (io.i_stationary === false.B && io.i_data_valid === true.B) {
    //     r_valid(0) := true.B
    //   } .otherwise {
    //     r_valid(0) := false.B
    //   }

    //   for (i <- 0 until 4) {

    //      r_valid(i + 1) := r_valid(i)

    //   }

    //    io.o_reduction_valid := r_valid(3)

    //     io.o_reduction_add := Cat(r_add_lvl_4(4), r_add_lvl_3(7, 6), r_add_lvl_2(11, 8), r_add_lvl_1(15, 8), r_add_lvl_0(15, 0))
    //     io.o_reduction_cmd := Cat(r_cmd_lvl_4(14, 12), r_cmd_lvl_3(23, 18), r_cmd_lvl_2(35, 24), r_cmd_lvl_1(47, 24), r_cmd_lvl_0(47, 0))
    //     io.o_reduction_sel := Cat(r_sel_lvl_4(19, 16), r_sel_lvl_3(31, 24), r_sel_lvl_2(23, 16))


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
      r_add_lvl_4Reg(4), 
      r_add_lvl_3Reg(6),
      r_add_lvl_3Reg(7), 
      r_add_lvl_2Reg(8), 
      r_add_lvl_2Reg(9), 
      r_add_lvl_2Reg(10), 
      r_add_lvl_2Reg(11), 
      r_add_lvl_1Reg(8),
      r_add_lvl_1Reg(9),
      r_add_lvl_1Reg(10),
      r_add_lvl_1Reg(11),
      r_add_lvl_1Reg(12),
      r_add_lvl_1Reg(13),
      r_add_lvl_1Reg(14),
      r_add_lvl_1Reg(15),        
      r_add_lvl_0Reg(0),
      r_add_lvl_0Reg(1),
      r_add_lvl_0Reg(2),
      r_add_lvl_0Reg(3),
      r_add_lvl_0Reg(4),
      r_add_lvl_0Reg(5),
      r_add_lvl_0Reg(6),
      r_add_lvl_0Reg(7),
      r_add_lvl_0Reg(8),
      r_add_lvl_0Reg(9),
      r_add_lvl_0Reg(10),
      r_add_lvl_0Reg(11),
      r_add_lvl_0Reg(12),
      r_add_lvl_0Reg(13),
      r_add_lvl_0Reg(14),
      r_add_lvl_0Reg(15)
      ))


    
    io.o_reduction_cmd := VecInit(Seq(
      r_cmd_lvl_4Reg(4),
      r_cmd_lvl_3Reg(6),
      r_cmd_lvl_3Reg(7),
      r_cmd_lvl_2Reg(8),
      r_cmd_lvl_2Reg(9),
      r_cmd_lvl_2Reg(10),
      r_cmd_lvl_2Reg(11),
      r_cmd_lvl_1Reg(8),
      r_cmd_lvl_1Reg(9),
      r_cmd_lvl_1Reg(10),
      r_cmd_lvl_1Reg(11),
      r_cmd_lvl_1Reg(12),
      r_cmd_lvl_1Reg(13),
      r_cmd_lvl_1Reg(14),
      r_cmd_lvl_1Reg(15),
      r_cmd_lvl_0Reg(0),
      r_cmd_lvl_0Reg(1),
      r_cmd_lvl_0Reg(2),
      r_cmd_lvl_0Reg(3),
      r_cmd_lvl_0Reg(4),
      r_cmd_lvl_0Reg(5),
      r_cmd_lvl_0Reg(6),
      r_cmd_lvl_0Reg(7),
      r_cmd_lvl_0Reg(8),
      r_cmd_lvl_0Reg(9),
      r_cmd_lvl_0Reg(10),
      r_cmd_lvl_0Reg(11),
      r_cmd_lvl_0Reg(12),
      r_cmd_lvl_0Reg(13),
      r_cmd_lvl_0Reg(14),
      r_cmd_lvl_0Reg(15)

      ))

    io.o_reduction_sel := VecInit(Seq(
      r_sel_lvl_4Reg(16),
      r_sel_lvl_4Reg(17), 
      r_sel_lvl_4Reg(18), 
      r_sel_lvl_4Reg(19),  
      r_sel_lvl_3Reg(24),
      r_sel_lvl_3Reg(25), 
      r_sel_lvl_3Reg(26),  
      r_sel_lvl_3Reg(27), 
      r_sel_lvl_3Reg(28), 
      r_sel_lvl_3Reg(29), 
      r_sel_lvl_3Reg(30),
      r_sel_lvl_3Reg(31),  
      r_sel_lvl_2Reg(16),
      r_sel_lvl_2Reg(17),
      r_sel_lvl_2Reg(18),
      r_sel_lvl_2Reg(19),
      r_sel_lvl_2Reg(20),
      r_sel_lvl_2Reg(21),
      r_sel_lvl_2Reg(22),
      r_sel_lvl_2Reg(23)
      
      ))





}





  

  











  







  
  

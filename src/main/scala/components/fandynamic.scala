package magmasi.components

import chisel3._
import chisel3.util._

class FanNetworkcom(Num : Int = 32 , Data_type : 32 ) extends Module {
    val io = IO(new Bundle{
        val i_data_bus = Input(Vec(Num, UInt(Data_type.W)))
        val i_add_en_bus =  Input(Vec(Num - 1, UInt(1.W)))
        val i_sel_bus = Input(Vec(20, UInt(1.W)))
        val o_adder = Output(Vec(Num, UInt(Data_type.W)))

    })
     val numlevels = (math.ceil(math.log(Num) / math.log(2))).toInt
     val w_fan_lvl = VecInit(Seq.fill(numlevels)(VecInit(Seq.fill(0)(0.U(Data_type.W)))).toSeq)
  
	  for (level <- 0 until numlevels) {
	    val value = if (level == numlevels - 1) {
	      (Num / (1 << level)) - 1
	    } else {
	      (Num / (1 << level)) - 2
	    }
	    
	    val width = Data_type * value
	    w_fan_lvl(level) := VecInit(Seq.fill(width)(0.U(Data_type.W)))
	    
	    
	    
	    val registers = Seq.tabulate(numLevels - 1) { number =>
	  
	


	val r_fan_ff_lvl = Seq.fill(numlevels - 2)(RegInit(VecInit(Seq.fill(dataType)(0.U))))

	  for (number <- (numlevels - 1) to 2 by -1) {
	    for (i <- 0 until (number - 1)) {
	      val values = (Num / math.pow(2, (number - 1))).toInt - 2
	      val name = s"r_fan_ff_lvl$i\_to_$number"
	      val reg = RegInit(VecInit(Seq.fill(values)(0.U(dataType.W)))
	      println(s"val $name = $reg")

	      val z1 = Wire(Vec(values * 2, UInt(dataType.W)))
	      val z2 = Wire(Vec(values * 2, UInt(dataType.W)))

	      for (j <- 2 until ((values * 2) + 2) by 4) {
		val v1 = w_fan_lvl(i)(j)
		val v2 = w_fan_lvl(i)(j + 1)
		val v3 = r_fan_ff_lvl(i)(j)
		val v4 = r_fan_ff_lvl(i)(j + 1)

		if (number - i <= 2) {
		  z1(j) := v1
		  z1(j + 1) := v2
		} else {
		  z2(j) := v3
		  z2(j + 1) := v4
		}
	      }

	      if (number - i <= 2) {
		r_fan_ff_lvl(i) := z1
		println(s"$name = $z1")
	      } else {
		r_fan_ff_lvl(i) := z2
		println(s"$name = $z2")
	      }
	     
val e = WireDefault(-2.U)
      val f = WireDefault(23.U)
      var d = 4.U

      for (i <- (value / 2 - 1).toInt to (Num - 1).toInt by value) {
        if (value == 4) {
          if (i == (value / 2 - 1).toInt || i == (Num - (value / 2).toInt - 1)) {
            printf(p"edge adder(32,${y},2,2) = $i\n")
            val a1 = WireDefault(VecInit(Seq(w_fan_lvl(0)(i), w_fan_lvl(0)(i - 1.U)))
            val a2 = WireDefault(io.ien_bus(16.U + (i / 4.U)))
            val a3 = WireDefault(0.U(1.W))
            printf(p"my_adder_$i.io.i_data_bus = $a1\n")
            printf(p"my_adder_$i.io.i_en_bus = $a2\n")
            printf(p"my_adder_$i.io.i_sel = $a3\n")
            if (i == 0) {
              val a4 = WireDefault(w_fan_lvl(1)(i))
              printf(p"w_fan_lvl_1($i) := my_adder_$i.io.o_adder = $a4\n")
            } else {
              val a5 = WireDefault(w_fan_lvl(1)(i - 1))
              printf(p"w_fan_lvl_1(${i - 1}) := my_adder_$i.io.o_adder = $a5\n")
            }
          } else {
            printf(p"adder(32,${y},2,2) = $i\n")
            val b1 = WireDefault(VecInit(Seq(w_fan_lvl(0)(i), w_fan_lvl(0)(i - 1)))
            val b2 = WireDefault(io.ien_bus(16.U + (i / 4.U)))
            val b3 = WireDefault(0.U(1.W))
            val b4 = WireDefault(w_fan_lvl(1)(i / 2 - 1.U))
            val b5 = WireDefault(w_fan_lvl(1)(i / 2.U))
            printf(p"my_adder_$i.io.i_data_bus = $b1\n")
            printf(p"my_adder_$i.io.i_en_bus = $b2\n")
            printf(p"my_adder_$i.io.i_sel = $b3\n")
            printf(p"w_fan_lvl_1(${i / 2 - 1.U}) := my_adder_$i.io.o_adder = $b4\n")
            printf(p"w_fan_lvl_1(${i / 2.U}) := my_adder_$i.io.o_adder = $b5\n")
          }
        } else {
          e := e + 2.U
          f := f + 1.U
          val exponent = Wire(UInt(3.W))
          exponent := 0.U
          when(2.U ** exponent < value.U) {
            exponent := exponent + 1.U
          }
          val y = WireDefault(((exponent * 2.U) - 2.U))
          if (i == (value / 2).toInt - 1 || i == (Num - (value / 2).toInt - 1)) {
            printf(p"edge adder(32,${y},2,2) = $i\n")
            val a1 = WireDefault(VecInit(Seq(w_fan_lvl(y / 2 - 1.U)(i / 2.U), w_fan_lvl(y / 2 - 1.U)((i - 1).U / 2.U)))
            val a2 = WireDefault(io.ien_bus(f))
            printf(p"my_adder_$i.io.i_data_bus = $a1\n")
            printf(p"my_adder_$i.io.i_en_bus = $a2\n")
            val a3 = if (value == 8) {
              val a3_0 = WireDefault(Cat(io.i_sel_bus(e + 1.U), io.i_sel_bus(e)))
              printf(p"my_adder_$i.io.i_sel = $a3_0\n")
              e := e + 1.U
              a3_0
            } else {
              e := e + 1.U
              val a3_1 = WireDefault(Cat(io.i_sel_bus(e + 2.U), io.i_sel_bus(e + 1.U), io.i_sel_bus(e), io.i_sel_bus(e - 1.U)))
              printf(p"my_adder_$i.io.i_sel = $a3_1\n")
              e := e + 1.U
              a3_1
            }
            printf(p"my_adder_$i.io.i_sel = $a3\n")
            if (i == 0) {
              val a4 = WireDefault(w_fan_lvl(y / 2)(u))
              printf(p"w_fan_lvl_${y / 2}($u) := my_adder_$i.io.o_adder = $a4\n")
              u := u + 1.U
            } else {
              val a5 = WireDefault(w_fan_lvl(y / 2)(u))
              printf(p"w_fan_lvl_${y / 2}($u) := my_adder_$i.io.o_adder = $a5\n")
              u := u + 1.U
            }
          } else {
            printf(p"adder(32,${y},2,2) = $i\n")
            val b1 = WireDefault(VecInit(Seq(w_fan_lvl(y / 2 - 1.U)(i / 2.U), w_fan_lvl(y / 2 - 1.U)((i - 1).U / 2.U)))
            val b2 = WireDefault(io.ien_bus(f))
            printf(p"my_adder_$i.io.i_data_bus = $b1\n")
            printf(p"my_adder_$i.io.i_en_bus = $b2\n")
            val b3 = if (value == 8) {
              val b3_0 = WireDefault(Cat(io.i_sel_bus(e + 1.U), io.i_sel_bus(e)))
              printf(p"my_adder_$i.io.i_sel = $b3_0\n")
              e := e + 1.U
              b3_0
            } else {
              e := e + 1.U
              val b3_1 = WireDefault(Cat(io.i_sel_bus(e + 2.U), io.i_sel_bus(e + 1.U), io.i_sel_bus(e), io.i_sel_bus(e - 1.U)))
              printf(p"my_adder_$i.io.i_sel = $b3_1\n")
              e := e + 1.U
              b3_1
            }
            printf(p"my_adder_$i.io.i_sel = $b3\n")
            val b4 = WireDefault(w_fan_lvl(y / 2)(u))
            printf(p"w_fan_lvl_${y / 2}($u) := my_adder_$i.io.o_adder(0) = $b4\n")
            u := u + 1.U
            val b5 = WireDefault(w_fan_lvl(y / 2)(u))
            printf(p"w_fan_lvl_${y / 2}($u) := my_adder_$i.io.o_adder(1) = $b5\n")
            u := u + 1.U
          }
        }
      }
    }
  }
		

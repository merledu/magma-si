package magmasi.components

import chisel3._
import chisel3.util._

object FanLevelGenerator extends App {
  val Num = 32
  val Data_type = 32
  val numlevels = math.ceil(math.log(Num) / math.log(2)).toInt
  val c = Seq.tabulate(numlevels) { level =>
    val value = if (level == numlevels - 1) {
      (Num / (1 << level)) - 1
    } else {
      (Num / (1 << level)) - 2
    }
    val width = Data_type * value
    val w_fan_lvl = RegInit(VecInit(Seq.fill(width)(0.U(Data_type.W))))
    printf("w fan level %d: %d\n", level.U, value.U)
    w_fan_lvl
  }
	    
	    
	    
	  var b = numLevels - 1
    var r_fan = List[String]()
    var r_fan_ff = List[String]()

    for (number <- (numLevels - 1 to 2 by -1)) {
      b -= 1
      for (i <- 0 until b) {
        val values = (Num / (1 << (number - 1))) - 2
        val name = s"r_fan_ff_lvl_$i""_to_$number"
        val reg = RegInit(VecInit(Seq.fill(values)(0.U(Data_type.W))))
        r_fan = r_fan :+ s"var $name = $reg"

        val array = name
        var z1 = List[String]()
        var z2 = List[String]()

        for (j <- (2 until (values * 2 + 2) by 4)) {
          val v1 = s"w_fan_lvl_$i($j)"
          val v2 = s"w_fan_lvl_$i(${j + 1})"
          val v3 = s"r_fan_ff_lvl_$i""_to_${number - 1}($j)"
          val v4 = s"r_fan_ff_lvl_$i""_to_${number - 1}(${j + 1})"

          if (number - i <= 2) {
            z1 = z1 :+ v1
            z1 = z1 :+ v2
          } else {
            z2 = z2 :+ v3
            z2 = z2 :+ v4
          }
        }

        val r1 = s"$array = VecInit(Seq(${z1.mkString(", ")}))"
        val r2 = s"$array = VecInit(Seq(${z2.mkString(", ")}))"

        if (number - i <= 2) {
          r_fan_ff = r_fan_ff :+ r1
        } else {
          r_fan_ff = r_fan_ff :+ r2
        }
      
  }
	
}

  var f = 23
  var e = -2
  var d = 4

  for (level <- (numlevels - 1) to 0 by -1) {
    val value = Num / (1 << level)

    if (value == 2) {
      for (i <- 0 until (Num - 1) by value) {
        if (i == 0 || i == Num -2):
          val my_adder_(i) = Module(new EdgeAdderSwitch(32, 2, 2, 2))
          my_adder_i.io.i_data_bus := VecInit(io.i_data_bus(i + 1), io.i_data_bus(i))
          my_adder_i.io.i_en_bus := io.ien_bus(i / 2)
          my_adder_i.io.i_sel := 0.U

          if (i == 0) {
            w_fan_lvl_0(i) := my_adder_i.io.o_adder
          } else {
            w_fan_lvl_0(i - 1) := my_adder_i.io.o_adder
          }
        else:
          val my_adder_{i} = Module(new AdderSwitch(32,2,2,2))
          my_adder_i.io.i_data_bus := VecInit(io.i_data_bus(i + 1), io.i_data_bus(i))
          my_adder_i.io.i_en_bus := io.ien_bus(i / 2)
          my_adder_i.io.i_sel := 0.U
          w_fan_lvl_0({i-1}) := my_adder_{i}.io.o_adder({0})
          w_fan_lvl_0({i}) := my_adder_{i}.io.o_adder({1})
      }
    } else if (value == 4) {
      for (i <- (value / 2 - 1) until (Num - 1) by value) {
        val my_adder_i = Module(new EdgeAdderSwitch(32, 2, 2, 2))
        my_adder_i.io.i_data_bus := VecInit(w_fan_lvl_0(i), w_fan_lvl_0(i - 1))
        my_adder_i.io.i_en_bus := io.ien_bus(16 + (i / 4))
        my_adder_i.io.i_sel := 0.U

        if (i == 0) {
          w_fan_lvl_1(i) := my_adder_i.io.o_adder
        } else {
          w_fan_lvl_1(i - 1) := my_adder_i.io.o_adder
        }
      }
    } else {
      e += 2
      f += 1

      var exponent = 0
      while (math.pow(2, exponent) < value) {
        exponent += 1
      }
      val y = (exponent * 2) - 2

      for (i <- (value / 2 - 1) until (Num - 1) by value) {
        val my_adder_i = Module(new AdderSwitch(32, y, 2, 2))
        my_adder_i.io.i_data_bus := VecInit(w_fan_lvl_0(i / 2), w_fan_lvl_0((i - 1) / 2 - 1))
        my_adder_i.io.i_en_bus := io.ien_bus(f)

        if (value == 8) {
          my_adder_i.io.i_sel := Cat(io.i_sel_bus(e + 1), io.i_sel_bus(e))
        } else {
          e += 1
          my_adder_i.io.i_sel := Cat(io.i_sel_bus(e + 2), io.i_sel_bus(e + 1), io.i_sel_bus(e), io.i_sel_bus(e - 1))
          e += 1
        }

        if (i == (value / 2 - 1) || i == (Num - (value / 2) - 1)) {
          if (i == 0) {
            w_fan_lvl_1(i) := my_adder_i.io.o_adder
          } else {
            w_fan_lvl_1(i - 1) := my_adder_i.io.o_adder
          }
        } else {
          w_fan_lvl_1(i / 2 - 1) := my_adder_i.io.o_adder(0)
          w_fan_lvl_1(i / 2) := my_adder_i.io.o_adder(1)
        }
      }
    }
  }
}

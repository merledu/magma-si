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
	     }

package magmasi.components
import chisel3._

class Distribution extends Module {
  val io = IO(new Bundle {
    val matrix = Input(Vec(4, Vec(4, UInt(32.W))))
    val s = Input(UInt(2.W))
    //val result = Output(Vec(4, Vec(4, UInt(2.W))))
  })

  val b = RegInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val count = RegInit(0.U(32.W))
  val Iindex = Reg(Vec(4, UInt(2.W)))
  val Jindex = Reg(Vec(4,UInt(2.W)))
  val Validindex = RegInit(VecInit(Seq.fill(4)(false.B)))
  dontTouch(Validindex)
  dontTouch(Iindex)
  dontTouch(Jindex)
  dontTouch(count)

  val indexCount = RegInit(0.U(32.W))

  val i = RegInit(0.U(32.W))
  val j = RegInit(0.U(32.W))
  val valid = RegInit(false.B)

  val newValidIndex = RegInit(false.B)
  val newIindex = Reg(Vec(4, UInt(2.W)))
  val newJindex = Reg(Vec(4,UInt(2.W)))

  val k1 = newIindex(io.s)
  val l1 = WireInit(newJindex(io.s))
  dontTouch(l1)
  val l = RegInit(0.U)
  val k = RegNext(0.U(32.W))
  val validCompleteSeq = RegInit(false.B)
  val validLoop = RegInit(false.B)




        //   b[index[s][0]][j] = mat[index[s][0]][j]
        // if mat[index[s][0]][j] == 4:
        //     valid = True
        //     break
  when (valid){
  b(Iindex(io.s))(k) := io.matrix(Iindex(io.s))(k)
  }

when ( l1 =/= 0.U){
  when ( k === 0.U && valid){
    k := newJindex(io.s)
  }.elsewhen (k < 3.U && valid && !validLoop){
    k := k + 1.U
   // b(Iindex(io.s))(Jindex(io.s)) := io.matrix(Iindex(io.s))(Jindex(io.s))
    when (io.matrix(Iindex(io.s))(k) === 4.U){
      validCompleteSeq := true.B
      k := k
    }
  }.elsewhen(k === 3.U && valid){
    validLoop := true.B
    k := k
  }
}.elsewhen(l1 === 0.U) {
  when (k < 3.U && valid && !validLoop){
    k := k + 1.U
   // b(Iindex(io.s))(Jindex(io.s)) := io.matrix(Iindex(io.s))(Jindex(io.s))
    when (io.matrix(Iindex(io.s))(k) === 4.U){
      validCompleteSeq := true.B
      k := k
    }
  }.elsewhen(k === 3.U && valid){
    validLoop := true.B
    k := k
  }
}



              // if mat[i][j] != 0 and mat[i][j] == 1:
              //   count += 1
              //   index.append([i,j])
              //   break
  val a = (k === 3.U && valid)
  dontTouch(a)
  when (io.matrix(i)(j) =/= 0.U && (io.matrix(i)(j) === 1.U)){
    count := count + 1.U
    Iindex(indexCount) := i
    Jindex(indexCount) := j
    Validindex(indexCount) := true.B
    indexCount := indexCount + 1.U
  }
  dontTouch(valid)
  // when ((i === 4.U) && (j === 0.U)){
  //  // delay := count
  //   count := count
  //   valid := 1.B
  // // }
  //   val delay = RegInit(0.U(32.W))

  //   when(delay < 1.U) {
  //   delay := delay + 1.U
  // }
  when ((i === 3.U) && (j === 3.U)){
      when (io.matrix(i)(j) =/= 0.U && (io.matrix(i)(j) === 1.U)){
        valid := 1.B
  count := 3.U
  indexCount := 3.U
}
  indexCount := 3.U//indexCount
    valid := 1.B
  count := count
  }
when (valid){
for (i <- 0 until 4){
  when (Validindex(i)){
    newIindex(i) := Iindex(i)
    newJindex(i) := Jindex(i)
  }
}
}
dontTouch(newIindex)
dontTouch(newJindex)








  dontTouch(k)
  dontTouch(l)
  dontTouch(b)
  // when ( valid){
  // when ( k < 3.U && (l === 3.U) ){
  //   k := k + 1.U
  // }

  // when ( k <= 3.U && (l < 3.U) ){
  //   l := l + 1.U
  // }.elsewhen(k === 3.U && (l === 3.U)){
  //   l :=l 
  // }.otherwise{
  //   l := newJindex(io.s)(1)
  // }
  // }






  dontTouch(i)
  dontTouch(j)

  when ( i < 3.U && (j === 3.U)){
    i := i + 1.U
  }

  when ( i <= 3.U && (j < 3.U)){
    j := j + 1.U
  }.elsewhen(i === 3.U && (j === 3.U)){
    j := j
  }.otherwise{
    j := 0.U
  }




}

package magmasi.components

import chisel3._
import chisel3.util._

class SourceDestination(implicit val config: MagmasiConfig) extends Module {
    val io = IO(new Bundle{
        val Stationary_matrix = Input(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val Streaming_matrix = Input(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))
        val counterMatrix1 = Output(Vec(config.MaxRows, Vec(config.MaxCols, UInt(config.DATA_TYPE.W))))
        val counterMatrix2 = Output(Vec(config.MaxRows, UInt(config.DATA_TYPE.W)))

    })

    val counterRegs1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(0.U(config.DATA_TYPE.W))))))
    val counterRegs2 = RegInit(VecInit(Seq.fill(config.MaxRows)(0.U(config.DATA_TYPE.W))))

    val i = RegInit(0.U(log2Ceil(config.MaxRows).W))
    val j = RegInit(0.U(log2Ceil(config.MaxCols).W))
    val k = RegInit(0.U(32.W))

    val counter1 = RegInit(1.U(32.W))
    val counter2 = RegInit(1.U(32.W))
    dontTouch(counter2)

    val notContinue1 = RegInit(VecInit(Seq.fill(config.MaxRows)(VecInit(Seq.fill(config.MaxCols)(false.B)))))
    val notContinue2 = RegInit(VecInit(Seq.fill(config.MaxRows)(false.B)))


    when (j < config.MaxCols.U) {
        when (io.Stationary_matrix(i)(j) =/= 0.U) {
            when (counter1 < (config.NUM_PES + 1).U) {
                when (notContinue1(i)(j) === 0.B){
                    counterRegs1(i)(j) := counter1
                    counter1 := counter1 + 1.U
                    notContinue1(i)(j) := 1.B
                }
            }.otherwise {
                when (notContinue1(i)(j) === 0.B){
                    counterRegs1(i)(j) := 1.U
                    counter1 := 2.U
                    notContinue1(i)(j) := 1.B
                }
            }
        }.otherwise {
            when (notContinue1(i)(j) === 0.B){
                counterRegs1(i)(j) := 0.U
                notContinue1(i)(j) := 1.B
            }
        }
        j := j + 1.U
    }
                                               // counter values for MK_matrix is done
     when (io.Streaming_matrix(k) =/= 0.U) {
        when (notContinue2(k) === 0.B) {
            counterRegs2(k) := counter2
            counter2 := counter2 + 1.U
            notContinue2(k) := 1.B
        }
    }
    

    when (k >= 0.U){
        k := k + 1.U
    }

  when (j === (config.MaxCols-1).U){
    i := i + 1.U
  }

   io.counterMatrix1 <> counterRegs1
   io.counterMatrix2 <> counterRegs2

}
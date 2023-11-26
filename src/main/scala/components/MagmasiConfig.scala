package magmasi.components
import scala.math

case class MagmasiConfig (
    val DATA_TYPE: Int = 16,
    val NUM_PES  : Int = 4,
    val NUM_IN  : Int = 4,
    val SEL_IN: Int = 32,
    val NUM_OUT: Int =32,
    val MaxRows :Int = 4,
    val MaxCols :Int = 4,
    val LOG2_PES :Int = 5,
    val NoOfFDPE :Int = 1 // 2 FlexDPE will be generated always
) {
    val LEVELS   : Int = (2 * (math.log(NUM_IN) / math.log(2))).toInt + 1
}

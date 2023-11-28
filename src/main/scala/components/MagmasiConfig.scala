package magmasi.components
import scala.math

case class MagmasiConfig (
    val DATA_TYPE: Int = 16,
    val NUM_PES  : Int = 4,
    val NUM_IN  : Int = 4,
    val SEL_IN: Int = 2,
    val NUM_OUT: Int =2,
    val MaxRows :Int = 4,
    val MaxCols :Int = 4,
    val LOG2_PES :Int = 5,
    val NoOfFDPE :Int = 2

) {
    val LEVELS   : Int = (2 * (math.log(NUM_IN) / math.log(2))).toInt + 1
    
}

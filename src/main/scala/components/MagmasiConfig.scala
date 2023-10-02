package magmasi.components
import scala.math

case class MagmasiConfig (
    val DATA_TYPE: Int = 16,
    val NUM_IN  : Int = 4,
    val SEL_IN: Int = 2,
    val NUM_OUT: Int =2
) {
    val LEVELS   : Int = (2 * (math.log(NUM_IN) / math.log(2))).toInt + 1
}
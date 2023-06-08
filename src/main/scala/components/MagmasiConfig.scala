package magmasi.components
import scala.math

case class MagmasiConfig (
    val DATA_TYPE: Int = 16,
    val NUM_PES  : Int = 4
) {
    val LEVELS   : Int = (2 * (math.log(NUM_PES) / math.log(2))).toInt + 1
}
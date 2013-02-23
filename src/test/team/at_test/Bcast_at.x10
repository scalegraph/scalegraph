import x10.io.Console;

class Bcast_at {
  public static def main(args: Array[String](1)):void {
    val root = here;
    val data_size = 1 << Int.parse(args(0));
    val src_size = data_size / Place.places().size;
    val dst_size = src_size;
    val count = src_size;
    val src = new Array[Int](src_size, 1);
    val dst = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](dst_size, 1));
    val loop = Int.parse(args(1));

    val start_time = System.nanoTime();
    for(i in 1..(loop)) {
      finish for(p in Place.places()) {
        at (p) async {
          Array.copy(src, dst());
        }
      }
    }
    val end_time = System.nanoTime();
    Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
  }
}

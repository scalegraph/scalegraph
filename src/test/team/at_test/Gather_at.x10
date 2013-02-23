import x10.io.Console;

class Gather_at {
  public static def main(args: Array[String](1)):void {
    val root = here;
    val data_size = 1 << Int.parse(args(0));
    val src_size = data_size / Place.places().size;
    val dst_size = data_size;
    val count = src_size;
    val src = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](src_size, 1));
    val dst = new Array[Int](dst_size, 1);
    val loop = Int.parse(args(1));

    val start_time = System.nanoTime();
    for(i in 1..(loop)) {
      finish for(j in 0..(Place.places().size-1)) async {
        Array.copy(at (Place.place(j)) src(), 0, dst, count * j, count);
      }
    }
    val end_time = System.nanoTime();
    Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
  }
}

import x10.io.Console;

class Scatterv_at {
  public static def main(args: Array[String](1)):void {
    val root = here;
    val data_size = 1 << Int.parse(args(0));
    val src_size = data_size;
    val dst_size = data_size / Place.places().size;
    val count = dst_size;
    val src = new Array[Int](src_size, 1);
    val dst = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](dst_size, 1));
    val src_offs = new Array[Int](Place.places().size, (i:Int) => i * count);
    val src_counts = new Array[Int](Place.places().size, count);
    val loop = Int.parse(args(1));

    val start_time = System.nanoTime();
    for(i in 1..(loop)) {
      finish for(j in 0..(Place.places().size-1)) async {
        val tmp = new Array[Int](src_counts(j), 1);
        Array.copy(src, src_offs(j), tmp, 0, src_counts(j));
        at (Place.place(j)) {
          Array.copy(tmp, 0, dst(), 0, src_counts(j));
        }
      }
    }
    val end_time = System.nanoTime();
    Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
  }
}

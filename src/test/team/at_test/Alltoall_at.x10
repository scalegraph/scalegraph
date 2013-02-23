import x10.io.Console;

class Alltoall_at {
  public static def main(args: Array[String](1)):void {
    val root = here;
    val data_size = 1 << Int.parse(args(0));
    val src_size = data_size;
    val dst_size = data_size;
    val count = data_size / Place.places().size;
    val src = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](src_size, 1));
    val dst = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](dst_size, 1));
    val loop = Int.parse(args(1));

    val start_time = System.nanoTime();
    for(i in 1..(loop)) {
      finish for(j in 0..(Place.places().size-1)) {
        at (Place.place(j)) async {
          finish for(k in 0..(Place.places().size-1)) async {
            val tmp = new Array[Int](count);
            Array.copy(src(), count * k, tmp, 0, count);
            at (Place.place(k)) {
              Array.copy(tmp, 0, dst(), count * j, count);
            }
          }
        }
      }
    }
    val end_time = System.nanoTime();
    Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
  }
}


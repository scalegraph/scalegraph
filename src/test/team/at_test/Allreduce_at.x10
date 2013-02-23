import x10.io.Console;

class Allreduce_at {
  public static def main(args: Array[String](1)):void {
    val root = here;
    val data_size = 1 << Int.parse(args(0));
    val src_size = data_size / Place.places().size;
    val dst_size = 1;
    val src = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](src_size, 1));
    val dst = PlaceLocalHandle.make(PlaceGroup.WORLD, () => new Array[Int](dst_size, 1));
    val tmp = new Array[Int](Place.places().size, 1);
    val loop = Int.parse(args(1));

    val start_time = System.nanoTime();
    for(i in 1..(loop)) {
      finish for(p in Place.places()) async {
        tmp(p.id()) = at (p) (() => {
          val arr = src();
          var mx:Int;
          mx = arr(0);
          for([j] in arr) {
            mx = Math.max(mx, arr(j));
          }
          return mx;
        })();
      }
      for([j] in tmp) {
        tmp(0) = Math.max(tmp(0), tmp(j));
      }
      val todst = tmp(0);
      finish for(p in Place.places()) {
        at (p) {
          dst()(0) = todst;
        }
      }
    }
    val end_time = System.nanoTime();
    Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
  }
}

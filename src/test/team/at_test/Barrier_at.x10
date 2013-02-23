import x10.io.Console;

class Barrier_at {
  public static def main(args: Array[String](1)):void {
    val root = here;
    val loop = Int.parse(args(1));

    val start_time = System.nanoTime();
    for(i in 1..(loop)) {
      finish for (p in Place.places()) async {
        val x = at (p) here;
      }
    }
    val end_time = System.nanoTime();
    Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
  }
}

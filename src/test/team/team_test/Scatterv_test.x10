import x10.io.Console;
import x10.util.Team;

class Scatterv_test {
  public static def main(args: Array[String](1)):void {
    val root = 0;
    val team = Team.WORLD;
    val data_size = 1 << Int.parse(args(0));
    val array_size = data_size;
    val count = array_size / team.places().size;
    val loop = Int.parse(args(1));

    finish for(role in 0..(team.places().size-1)) {
      at (team.places()(role)) async {
	val src = new Array[Int](array_size, 1);
	val dst = new Array[Int](array_size, 1);
      	val src_offs = new Array[Int](team.places().size, (i:Int) => i * count);
	val src_counts = new Array[Int](team.places().size, count);

	team.barrier(role);
	val start_time = System.nanoTime();
	for(i in 1..(loop)) {
          team.scatterv(role, root, src, src_offs, src_counts, dst, 0, count);
	}
	val end_time = System.nanoTime();
	if(role == root) {
          Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
	}
      }
    }
  }
}



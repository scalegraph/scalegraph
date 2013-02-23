import x10.io.Console;
import x10.util.Team;

class Barrier_test {
  public static def main(args: Array[String](1)):void {
    val root = 0;
    val team = Team.WORLD;
    val loop = Int.parse(args(1));

    finish for (role in 0..(team.places().size-1)) {
      at (team.places()(role)) async {
        team.barrier(role);
        val start_time = System.nanoTime();
        for(i in 1..(loop)) {
          team.barrier(role);
        }
        val end_time = System.nanoTime();
        if(role == root) {
          Console.OUT.println((end_time - start_time)as Double / (loop * 1000.0));
        }
      }
    }
  }
}

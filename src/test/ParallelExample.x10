import x10.util.ArrayUtils;
import x10.util.Team;
import x10.util.Random;
import org.scalegraph.concurrent.Parallel;

public class ParallelExample {
	static def testscan(): void{
		Console.OUT.println("Scan Test");
		val n = 1;
		val m = 30;
		val result = new Array[Array[Int](1)](n, new Array[Int](m+1));
		val retval = new Array[Int](n);
		for ( count in 0..(n-1)) {
			val c = count + 1;
			val d = count + 2;
			val input = new Array[Int](n, (i:Int)=> c *(i%d == (d - 1) ? 1 : 0) );
			retval(count) = Parallel.scan(1..n, result(count), 0, (i:Int,x:Int)=> input(i-1) + x, (x:Int, y:Int)=> x+y);
			Console.OUT.println("count: " + count + ", n: " + n + ", input: " + input);
			Console.OUT.println("count: " + count + ", n: " + n + ", result: " + result(count));
		}
		for ( count in 0..(n-1)) {
			val c = count + 1;
			val d = count + 2;
			for (i in 0..n) {
				if (result(count)(i) != c * (i / d))
					Console.OUT.println("count: " + count + ", n: " + n + ", result(i): " + result(count)(i) + "but expected: " + c * (i/d));
			}
		}
	}
	static def testsort(): void{
		Console.OUT.println("Sort Test");
        val rand = new Random();
		val n = 5000;
		finish for (i in 1..n) {
            val len = Math.abs(rand.nextInt() % i);
		    val input = new Array[Int](len, (Int)=> rand.nextInt() % i);
		    val result = new Array[Int](input);
            Parallel.sort[Int](result);
		    val oracle = new Array[Int](input);
            ArrayUtils.sort(oracle);
            var isEqual: Boolean = true;
            for ([j] in input) {
                isEqual &= result(j) == oracle(j);
            }
            if (!isEqual) {
                Console.OUT.println("n: " + i + ": input: " + input + ", result: " + result + ", expected: " + oracle);
            }
		}
	}
	static def testpartition(): void{
		Console.OUT.println("Partite Test");
		val n = 15;
		val input = new Array[Int](n + 1, (i:Int)=> i );
		finish for (i in 1..n) {
			Console.OUT.println("n: " + i + ", input: " + input);
			val result = Parallel.partition[Int](input, (x:Int)=> x % i, i);
			Console.OUT.println("n: " + i + ", result: " + result);
		}
	}
	public static def main(args:Array[String](1)) : void{
		Console.OUT.println("Team.WORLD: " + Team.WORLD);
		Console.OUT.println("members of Team(0): " + Team.WORLD.places());
		
		testscan();
		testsort();
		testpartition();
	}
}

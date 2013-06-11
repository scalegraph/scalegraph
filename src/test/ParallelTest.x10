package test;

import x10.util.ArrayUtils;
import x10.util.Team;
import x10.util.Random;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MemoryChunk;

public final class ParallelTest {
	static def testscan(): void{
		Console.OUT.println("Scan Test");
		val n = 10L;
		val m = 300L;
		val result = new MemoryChunk[Long](m+1);
		for ( count in 0..(n-1)) {
			val c = count + 1;
			val d = count + 2;
			val input = new MemoryChunk[Long](m, (i:Long)=> c *(i%d == (d - 1) ? 1 : 0) );
			val retval = Parallel.scan(input.range(), result, 0L, (i:Long,x:Long)=> input(i) + x, (x:Long, y:Long)=> x+y);
			Console.OUT.println("count: " + count + ", n: " + n + ", input: " + input);
			Console.OUT.println("count: " + count + ", n: " + n + ", result: " + result(count));

			for (i in 0..n) {
				if (result(i) != c * (i / d))
					Console.OUT.println("count: " + count + ", n: " + n + ", result(i): " + result(i) + "but expected: " + c * (i/d));
			}
		}
	}
	static def testsort(): void{
		Console.OUT.println("Sort Test");
        val rand = new Random();
		val n = 5000;
		finish for (i in 1..n) {
            val len = Math.abs(rand.nextInt() % i);
		    val input = new MemoryChunk[Int](len);
            for ( j in input.range()) {
                input(j) = rand.nextInt() % i;
            }
		    val result = input.clone();
            Parallel.sort[Int](result);
		    val oracle = new Array[Int](input.toArray());
            ArrayUtils.sort(oracle);
            var isEqual: Boolean = true;
            for (j in input.range()) {
                isEqual &= result(j) == oracle(j as Int);
            }
            if (!isEqual) {
                Console.OUT.println("n: " + i + ": input: " + input + ", result: " + result + ", expected: " + oracle);
            }
		}
	}
	static def testpartition(): void{
		Console.OUT.println("Partite Test");
		val n = 15;
		val input = new MemoryChunk[Long](n + 1, (i:Long)=> i );
		finish for (i in 1..n) {
			Console.OUT.println("n: " + i + ", input: " + input);
			val result = Parallel.partition[Long](input, (x:Long)=> (x % i) as Int, i);
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

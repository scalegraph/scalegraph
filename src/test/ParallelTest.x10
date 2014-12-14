/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package test;

import x10.util.RailUtils;
import x10.util.Team;
import x10.util.Random;

import org.scalegraph.test.STest;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MemoryChunk;

public final class ParallelTest extends STest {
	public static def main(args: Rail[String]) {
		new ParallelTest().execute(args);
	}
	
	static def testscan(): void{
		Console.OUT.println("Scan Test");
		val n = 10L;
		val m = 300L;
		val result = MemoryChunk.make[Long](m+1);
		for ( count in 0..(n-1)) {
			val c = count + 1;
			val d = count + 2;
			val input = MemoryChunk.make[Long](m, (i:Long)=> c *(i%d == (d - 1) ? 1 : 0) );
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
		val n = 5000n;
		finish for (i in 1n..n) {
            val len = Math.abs(rand.nextInt() % i);
		    val input = MemoryChunk.make[Int](len);
            for ( j in input.range()) {
                input(j) = rand.nextInt() % i;
            }
		    val result = input.clone();
            Parallel.sort[Int](result);
		    val oracle = new Rail[Int](input.toRail());
            RailUtils.sort(oracle);
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
		val n = 15n;
		val input = MemoryChunk.make[Long](n + 1n, (i:Long)=> i );
		finish for (i in 1n..n) {
			Console.OUT.println("n: " + i + ", input: " + input);
			val result = Parallel.partition[Long](input, (x:Long)=> (x % i) as Int, i);
			Console.OUT.println("n: " + i + ", result: " + result);
		}
	}
	
	public def run(args :Rail[String]): Boolean {
	    Console.OUT.println("Team.WORLD: " + Team.WORLD);
	    Console.OUT.println("members of Team(0): " + Team.WORLD.places());
	    
	    testscan();
	    testsort();
	    testpartition();
	    
	    return true;
	}


}

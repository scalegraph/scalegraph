/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package test;

import x10.util.ArrayUtils;
import x10.util.Team;
import x10.util.Random;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MemoryChunk;

public final class TestParallel {
  //Sort example method
  static def sortExample(): void{
    Console.OUT.println("Sort Test");
    val len = 20;
    val rand = new Random();
    val randomInput = new MemoryChunk[Int](len);
    for ( j in randomInput.range()) {
      randomInput(j) = rand.nextInt();
    }
    val result = randomInput.clone();

    Parallel.sort[Int](result);
    var inputs:String = "";
    var outs:String = "";
    for(x in result){
      outs += x + ",";
    }
    for(x in randomInput){
      inputs = x + ",";
    }
    Console.OUT.println("Input :" + inputs);
    Console.OUT.println("Sorted:" + outs);
  }
  
  static def partitionExample(): void{
    Console.OUT.println("Partite Test");
    val n = 15;
    val input = new MemoryChunk[Int](n + 1, (i :Long)=> i as Int );

    finish for (i in 1..n) {
      Console.OUT.println("n: " + i + ", input: " + input);
      val result = Parallel.partition[Int](input, (x:Int)=> x % i, i);
      Console.OUT.println("n: " + i + ", result: " + result);
    }
  }
 
 static def scanExample(): void{
    Console.OUT.println("Scan Exapmle");
    val m = 50L;
    val result = new MemoryChunk[Long](m+1);

	val c = 1L;
	val d = 2L;
	val input = new MemoryChunk[Long](m, (i:Long)=> c *(i%d == (d - 1) ? 1 : 0) );
	
	val retval = Parallel.scan(input.range(), result, 0L, (i:Long,x:Long)=> input(i) + x, (x:Long, y:Long)=> x+y);
	
	Console.OUT.println("m: " + m + ", input: " + input);
	Console.OUT.println("m: " + m + ", result: " + result + ", retval: " + retval);
  }

  public static def main(args:Array[String](1)) : void{
    Console.OUT.println("Team.WORLD: " + Team.WORLD);
    Console.OUT.println("members of Team(0): " + Team.WORLD.places());
    
    scanExample();
    sortExample();
    partitionExample();
  }
}

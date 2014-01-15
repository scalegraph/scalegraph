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

import x10.compiler.Inline;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.util.Random;

import org.scalegraph.test.STest;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Parallel;

final class TestSort1 extends STest {
	public static def main(args: Array[String](1)) {
		new TestSort1().execute(args);
	}
	
    private static def runtest(n : Long) {
        val orgM = MemoryChunk[Long](n, (i: Long) => i);
        
        // shuffle
        val random = new Random();
        for (i in 0..(orgM.size() -1)) {
            val j = random.nextLong(orgM.size() -  i - 1) + i;
            val temp = orgM(i);
            orgM(i) = orgM(j);
            orgM(j) = temp;
        }
        
        val sortedLt = orgM.clone();
        val sortedGt = orgM.clone(); 
        
        // Sorted 1
        Console.OUT.println("Sort 1");
        org.scalegraph.util.Algorithm.sort(sortedLt);
        org.scalegraph.util.Algorithm.sortWithGt(sortedGt);
        
        for (i in orgM.range()) {
            Console.OUT.println(orgM(i) + ":" + sortedLt(i)+ ":" + sortedGt(i));
        }
        Console.OUT.println();
        
        // Sort 2
        Console.OUT.println("Sort 2");
        val sorted2Gt = orgM.clone();
        val sorted2Value = orgM.clone();
        org.scalegraph.util.Algorithm.sortWithGt(sorted2Gt, sorted2Value);
        for (i in orgM.range()) {
            Console.OUT.println(orgM(i) + ":" + sorted2Gt(i)+ ":" + sorted2Value(i));
        }
        Console.OUT.println();
    }

    public def run(args: Array[String](1)): Boolean {
        val n = 1 << 5;
        runtest(n);
        
        return true;
    }
}

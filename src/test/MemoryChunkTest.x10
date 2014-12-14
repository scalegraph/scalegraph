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

import org.scalegraph.test.STest;
import org.scalegraph.util.MemoryChunk;

final class MemoryChunkTest extends STest {
	public static def main(args: Rail[String]) {
		new MemoryChunkTest().execute(args);
	}
	
	static struct SampleStruct {
		val a:Int;
		val b:Long;
		def this(a_ :Int, b_ :Long) {
			a = a_; b = b_;
		}
		public def toString() = "a = " + a + ", b = " + b;
	}
	
	static class SampleClass {
		var a:Int;
		var b:Long;

		//def this() { a = -1; b = -1L; }
		def this(a_ :Int, b_ :Long) {
			a = a_; b = b_;
		}
		public def print() { Console.OUT.println(""); }
		public def toString() = "a = " + a + ", b = " + b;
	}

	public def run(args: Rail[String]): Boolean {
    //	val mc1 = MemoryChunk.make[SampleStruct](10, (i :Long) => SampleStruct(i as Int, i));
    //	val mc2 = MemoryChunk.make[SampleClass](10);
    //	val mc2 = MemoryChunk.make[SampleClass](10, (Long)=>new SampleClass());
    	val mc3 = MemoryChunk.make[SampleClass](10, (i :Long)=>new SampleClass(i as Int, i));
    //	for(i in mc2.range()) { mc2(i).a = i as Int; mc2(i).b = i; }
    	
    	at(here.next()) {
    	//	Console.OUT.println("mc1\n" + mc1);
    	///	Console.OUT.println("mc2\n" + mc2);
    		Console.OUT.println("mc3\n" + mc3);
    	}
    	return true;
    }
}

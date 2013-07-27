package test;

import org.scalegraph.util.MemoryChunk;

public class MemoryChunkTest {
	
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

		def this() { }
		def this(a_ :Int, b_ :Long) {
			a = a_; b = b_;
		}
		public def toString() = "a = " + a + ", b = " + b;
	}
	
    public static def main(args: Array[String]) {
    	val mc1 = new MemoryChunk[SampleStruct](10, (i :Long) => SampleStruct(i as Int, i));
    	val mc2 = new MemoryChunk[SampleClass](10);
    //	val mc2 = new MemoryChunk[SampleClass](10, (Long)=>new SampleClass());
    	val mc3 = new MemoryChunk[Any](10, (i :Long)=>new SampleClass(i as Int, i));
    	for(i in mc2.range()) {
    		mc2(i).a = i as Int; mc2(i).b = i;
    	}
    	
    	at(here.next()) {
    		Console.OUT.println("mc1\n" + mc1);
    		Console.OUT.println("mc2\n" + mc2);
    		Console.OUT.println("mc3\n" + mc3);
    	}
    }
}
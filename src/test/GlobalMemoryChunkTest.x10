package test;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GlobalMemoryChunk;

public class GlobalMemoryChunkTest {
	public static def main(args: Array[String](1)) {
		val mc0 = MemoryChunk.make[Long](10,0,true);
		for(i in 0..9) {
			mc0(i) = (i+10) as Long;
		}
		val refMc0 = GlobalMemoryChunk.make[Long](mc0);
		
		at(new Place(1)) {
			val mm = MemoryChunk.make[Long](10,0,true);
			val mmm = MemoryChunk.make[Long](2000, 0, true);
			val mc1 = MemoryChunk.make[Long](10,0,true);
			for (i in 0..9) {
				mm(i) = (i+20) as Long;
				mc1(i) = (i+30) as Long;
			}
			finish MemoryChunk.asyncCopy(refMc0, 0L, mm);
			finish MemoryChunk.asyncCopy(refMc0, 0L, mc1);
			Console.OUT.println(mm(0));
			Console.OUT.println(mc1(0));
		}
		Console.OUT.println(mc0(0));
	}
}

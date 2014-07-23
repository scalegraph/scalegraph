package test;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GlobalMemoryChunk;

public class GlobalMemoryChunkTest {
	public static def main(args: Array[String](1)) {
		val mc0 = MemoryChunk.make[Long](10);
		for(i in 0..9) {
			mc0(i) = i as Long;
		}
		val refMc0 = GlobalMemoryChunk.make[Long](mc0);
		at(new Place(1)) {
			val mc1 = MemoryChunk.make[Long](10);
			MemoryChunk.asyncCopy(refMc0, 0L, mc1);
			Console.OUT.println(mc1(6));
		}
	}
}

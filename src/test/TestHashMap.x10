package test;


import x10.compiler.Inline;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.util.Random;
import org.scalegraph.util.LongIndexedMemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.concurrent.HashMap;

public class TestHashMap {
    def run1() {
        val t = new HashMap[Int, Int](150);
        val n = 100L;

        val ks = new MemoryChunk[Int](n);
        val vs = new MemoryChunk[Int](n);

        for (i in (0..(n - 1))) {
            ks(i as Long) = i as Int;
            vs(i as Long) = i as Int;
        }
        t.put(ks, vs);

        for (i in (0..(n - 1))) {
            val key = i as Int;
            Console.OUT.println(t.get(key));
        }
        return;
    }

    def run2() {
        val t = new HashMap[Int, Int](300);
        val n = 100L;

        for (i in (0..(n - 1))) {
            t.put(i as Int, i as Int);
        }

        for (i in (0..(n - 1))) {
            val key = i as Int;
            Console.OUT.println(t.get(key));
        }
        return;
    }

    public static def main(Array[String](1)) {
        new TestHashMap().run1();
        new TestHashMap().run2();
    }
}

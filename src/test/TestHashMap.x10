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
        val t = new HashMap[Int, Int](100);
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
            //Console.OUT.printf("%d, %s\n", key, t.get(key));
            assert(t.get(key) != null && t.get(key).value == key);
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
            assert(t.get(key) != null && t.get(key).value == key);
        }
        return;
    }

    def run3() {
        val t = new HashMap[Int, Int](100);
        val n1 = 50;
        val n2 = 50;

        val ks1 = new MemoryChunk[Int](n1);
        val vs1 = new MemoryChunk[Int](n1);

        val ks2 = new MemoryChunk[Int](n2);
        val vs2 = new MemoryChunk[Int](n2);

        for (i in (0..(n1 - 1))) {
            ks1(i as Long) = i as Int;
            vs1(i as Long) = i as Int;
        }
        t.put(ks1, vs1);

        for (i in (n1..(n1 + n2 - 1))) {
            ks2(i as Long) = i as Int;
            vs2(i as Long) = i as Int;
        }
        t.put(ks2, vs2);

        for (i in (0..(n1 + n2 - 1))) {
            val key = i as Int;
            assert(t.get(key) != null && t.get(key).value == key);
        }
    }

    public static def main(Array[String](1)) {
        val test = new TestHashMap();

        test.run1();
        test.run2();
        //test.run3();
    }
}

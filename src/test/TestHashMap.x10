package test;


import x10.compiler.Inline;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.util.Random;
import org.scalegraph.util.LongIndexedMemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.StopWatch;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.concurrent.HashMap;

public class TestHashMap {
    val n = 1000000;
    val ne = 400000;

    static nTest = 50;

    val test = false;

    def run1() {
        Console.OUT.println("test1 start");
        var sum : Double = 0.;
        val t = new HashMap[Int, Int](n);
        val ks = new MemoryChunk[Int](ne);
        val vs = new MemoryChunk[Int](ne);
        for (i in (0..(ne - 1))) {
            ks(i as Long) = i as Int;
            vs(i as Long) = i as Int;
        }
        for (1..nTest) {
            System.gc();
            val startTime = Timer.nanoTime();
            t.put(ks, vs);
            val time = (Timer.nanoTime() - startTime) / (1000. * 1000. * 1000.);
            //Console.OUT.printf("time1 = %f\n", time);
            sum += time;
            t.clear();
        }
        Console.OUT.printf("ave time1 = %.16f\n", sum / nTest);
        return;
    }

    def run2() {
        Console.OUT.println("test2 start");

        var sum : Double = 0.;
        val t = new HashMap[Int, Int](n);
        for (1..nTest) {
            System.gc();

            val startTime = Timer.nanoTime();
            for (i in (0..(ne - 1))) {
                t.put(i as Int, i as Int);
            }
            val time = (Timer.nanoTime() - startTime) / (1000. * 1000. * 1000.);
            //Console.OUT.printf("time2 = %f\n", time);
            sum += time;
            t.clear();
        }
        Console.OUT.printf("ave time2 = %.16f\n", sum / nTest);
        return;
    }

    def runGet() {
        val t = new HashMap[Int, Int](n);
        val ks = new MemoryChunk[Int](ne);
        val vs = new MemoryChunk[Int](ne);

        for (i in ks.range()) {
            ks(i) = i as Int;
            vs(i) = ks(i);
        }
        t.put(ks, vs);

        val getVs = (()=>{
            val start = Timer.nanoTime();
            val getVs = t.get(ks, -1);
            Console.OUT.printf("parallel get time = %g\n", (Timer.nanoTime() - start) / (1000. * 1000. * 1000.));
            return getVs;
        })();

        {
            val start = Timer.nanoTime();
            for (i in ks.range()) {
                t.get(ks(i), -1);
            }
            Console.OUT.printf("sequencial get time = %g\n", (Timer.nanoTime() - start) / (1000. * 1000. * 1000.));
        }

        if (test) {
            for (i in getVs.range()) {
                assert(getVs(i) == vs(i));
            }
        }
    }

    def run3() {
        Console.OUT.println("test3 start");
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

        for (i in (0..(n2 - 1))) {
            ks2(i as Long) = i + n1 as Int;
            vs2(i as Long) = i + n1 as Int;
        }
        t.put(ks2, vs2);

        for (i in (0..(n1 + n2 - 1))) {
            val key = i as Int;
            assert(t.get(key) != null && t.get(key).value == key);
        }
        Console.OUT.println("test3 end");
    }

    def run4() {
        val t = new HashMap[Int, Int](10);
        val n1 = 5;
        val ks1 = new MemoryChunk[Int](n1);
        val vs1 = new MemoryChunk[Int](n1);

        for (i in (0..(n1 - 1))) {
            ks1(i as Long) = i as Int;
            vs1(i as Long) = i as Int;
        }
        t.put(ks1, vs1);
        Console.OUT.println("start rehash");
        t.rehash();
    }

    def run5() {
        val n = 100000;
        val e = 40000;
        val t = new HashMap[Long, Long](n);
        val ks = new MemoryChunk[Long](e);
        val vs  = new MemoryChunk[Long](e);
        val r = new Random(1L);
        val sw = new StopWatch();
        for (i in 0..(e - 1)) {
            val l = r.nextLong();
            ks(i) = l;
            vs(i) = l;
        }
        sw.start();
        t.put(ks, vs);
        sw.stop();
        sw.print("run5");
        for (i in (0..(ne - 1))) {
            val key = ks(i);
            val value = t.get(key);
            assert(value != null && value.value == vs(i));
        }
    }

    public static def main(Array[String](1)) {
        val test = new TestHashMap();
        test.run1();
        test.run2();
        test.runGet();
        //test.run3();
        //test.run4();
        //test.run5();
    }
}

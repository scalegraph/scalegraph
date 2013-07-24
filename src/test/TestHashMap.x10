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
import org.scalegraph.util.LongIndexedMemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.StopWatch;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.HashMap;
import org.scalegraph.harness.sx10Test;

public class TestHashMap extends sx10Test {
    val n : Int;
    val ne : Int;

    static nTest = 1;

    val test = false;

    def this(n : Int, m : Int) {
    	this.n = (n > 0) ? n :  2000000;
    	this.ne = (m > 0) ?  m : 400000;
    }

    def benchParPut() {
        Console.OUT.printf("%d, %d\n", n, ne);
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
            Console.OUT.printf("time1 = %f\n", time);
            sum += time;
            t.clear();
        }
        Console.OUT.printf("ave time1 = %.16f\n", sum / nTest);
        return;
    }

    def benchSeqPut() {
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

    def benchGet() {
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

    def runNewKeys() {
        val t = new HashMap[Int, Int](100);
        val ks = new MemoryChunk[Int](10);
        val vs = new MemoryChunk[Int](10);

        for (i in ks.range()) {
            ks(i) = i as Int;
            vs(i) = ks(i);
        }
        t.put(ks, vs);

        val keys = new MemoryChunk[Int](10);
        keys(0) = 10;
        keys(1) = 10;
        keys(2) = 10;
        keys(3) = 3;
        keys(4) = 4;
        keys(5) = 5;
        keys(6) = 16;
        keys(7) = 17;
        keys(8) = 18;
        keys(9) = 19;

        val newKeys = (()=>{
            val newKeys = t.newKeys(keys, -1);
            return newKeys;
        })();
        for (i in newKeys.range()) {
            Console.OUT.printf("newKeys(%d) = %d\n", i as Int, newKeys(i));
        }
        assert(newKeys.size() == 5L);
        return;
    }

    def benchNewKeys() {
        val t = new HashMap[Int, Int](n);
        val ks = new MemoryChunk[Int](ne);
        val vs = new MemoryChunk[Int](ne);

        for (i in ks.range()) {
            ks(i) = i as Int;
            vs(i) = ks(i);
        }
        // put (i -> i) (0<= i < ne)
        t.put(ks, vs);

        // i (ne / 2 <= i < ne + ne / 2)
        for (i in ks.range()) {
            ks(i) = i as Int + ne / 2;
        }

        val newKeys = t.newKeys(ks, -1);
        assert(newKeys.size() ==  ne / 2 as Long);
        Parallel.sort(newKeys);
        // newKeys = ne, ne + 1, ..., ne - 1 + ne / 2
        // check newKeys(0) = ne, ,newKeys(i + 1) = newKeys(i) + 1 (i > 0)
        assert(newKeys(0) == ne);
        for (i in newKeys.range()) {
            if (i > 0L) {
                assert (newKeys(i) == newKeys(i - 1) + 1);
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

        for (i in 0..(e - 1)) {
            ks(i) = r.nextLong();
            vs(i) = ks(i);
        }

        t.put(ks, vs);

        for (i in (0..(e - 1))) {
            val key = ks(i);
            val value = t.get(key);
            assert(value != null && value.value == vs(i));
        }
    }

    public static def main(args:Array[String](1)) {
        // val n = (args.size > 0) ? Int.parse(args(0)) : -1;
        // val m = (args.size > 0) ? Int.parse(args(1)) : -1;
        // Charuawt: pass default
        val n = -1;
        val m = -1;

        val test = new TestHashMap(n, m);
        test.execute();
    }
    
    public def run(): Boolean {
        
        benchSeqPut();
        benchParPut();
        benchGet();

        run3();
        run4();
        run5();
        runNewKeys();
        benchNewKeys();
        
        return true;
    }
}

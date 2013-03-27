package org.scalegraph.util;

import x10.util.Timer;
import x10.util.concurrent.AtomicLong;
import x10.util.concurrent.AtomicInteger;

public class StopWatch {
    val timer = new Array[AtomicLong](Runtime.MAX_THREADS, (Int)=>new AtomicLong(0L));
    val score = new Array[AtomicLong](Runtime.MAX_THREADS, (Int)=>new AtomicLong(0L));
    val realScore = new AtomicLong(0L);
    val realTime = new AtomicLong(0L);
    val nCalled = new AtomicLong(0L);
    val resetWorker = new AtomicInteger(0);

    public def reset() {
        resetWorker.set(Runtime.workerId());
        realScore.set(0L);
        score.map((v:AtomicLong)=>{v.set(0L);return 0;});
        nCalled.set(0L);
        realTime.set(Timer.nanoTime());
    }

    public def realStart() {
        resetWorker.set(Runtime.workerId());
        realScore.set(0L);
        realTime.set(Timer.nanoTime());
    }

    public def start() {
        val id = Runtime.workerId();
        nCalled.getAndIncrement();
        timer(id).set(Timer.nanoTime());
    }

    public def stop() {
        val id = Runtime.workerId();
        score(id).getAndAdd(Timer.nanoTime() - timer(id).get());
    }

    public def get() {
        return score.reduce((acc:Long, s:AtomicLong)=>acc + s.get(), 0L) / (1000. * 1000. * 1000.);
    }

    public def getLocal() {
        val id = Runtime.workerId();
        return score(id).get() / (1000. * 1000. * 1000.);
    }

    public def getAverage() {
        return get() / (nCalled.get() as Double);
    }

    public def getRealScore() {
        return realScore.get() / (1000. * 1000. * 1000.);
    }

    public def end() {
        realScore.set(Timer.nanoTime() - realTime.get());
    }

    public def printLocal(str : String) {
        Console.OUT.printf(str + "worker id = %d: " + "accumulative time = %g\n", Runtime.workerId(), getLocal());
    }

    public def print(str : String) {
        Console.OUT.printf(str + "accumulative time = %g\n", get());
        Console.OUT.printf(str + "average time = %g\n", getAverage());
        Console.OUT.printf(str + "real time = %g\n", getRealScore());
    }
}

package org.scalegraph.util;

public class MathAppend {

    public static def floorLog2(var p:Long):Int {
        var pow2: long = 1L;
        var i: Int = -1;
        while (pow2 <= p) {
            pow2 <<= 1;
            ++i;
        }
        return i;
    }

    public static def ceilLog2(var p:Long):Int {
        var pow2: long = 1L;
        if (p == 0L) return -1;
        var i: Int = 0;
        while (pow2 < p) {
            pow2 <<= 1;
            ++i;
        }
        return i;
    }

   public static def nextPowerOf2(val p: long): long {
        if (p==0L) return 0;
        var pow2: long = 1L;
        while (pow2 < p)
            pow2 <<= 1;
        return pow2;
    }

    public static def powerOf2(p:long) {
       return (p & -p) == p;
    }
    public static def log2(var p:Long):Long {
        assert powerOf2(p);
        var i:Int = 0;
        while (p > 1) { p = p/2; i++; }
        return i;
    }
    // returns 2^(max(0,i))
    public static def pow2(i:Int) {
        return 1L << i;
    }
}

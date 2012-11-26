package org.scalegraph.util.tuple;
public struct Tuple2 [T1,T2] {
    public val1: T1;
    public val2: T2;

    public def this(val1: T1, val2: T2) {
        this.val1 = val1;
        this.val2 = val2;
    }

    public def get1() = val1;
    public def get2() = val2;

    public def toString() : String {
        return ("Tuple2("+val1+","+val2+")");
    }

}

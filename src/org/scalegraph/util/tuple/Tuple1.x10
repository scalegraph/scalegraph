package org.scalegraph.util.tuple;
public struct Tuple1 [T1] {
    public val1: T1;

    public def this(val1: T1) {
        this.val1 = val1;
    }

    public def get1() = val1;

    public def toString() : String {
        return ("Tuple1("+val1+")");
    }

}

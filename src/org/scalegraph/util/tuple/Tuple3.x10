package org.scalegraph.util.tuple;
public struct Tuple3 [T1,T2,T3] {
    public val1: T1;
    public val2: T2;
    public val3: T3;

    public def this(val1: T1, val2: T2, val3: T3) {
        this.val1 = val1;
        this.val2 = val2;
        this.val3 = val3;
    }

    public def get1() = val1;
    public def get2() = val2;
    public def get3() = val3;

    public def toString() : String {
        return ("Tuple3("+val1+","+val2+","+val3+")");
    }

}

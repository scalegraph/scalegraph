package org.scalegraph.util;

import x10.lang.Zero;

public class Wrap[T] {
    
    public  var value: T;
    
    public def this() {T haszero} {value=  Zero.get[T]();}
    
    public  operator this() = this.value;
    
    public operator this() = (v: T) {
        value = v;
    }
}
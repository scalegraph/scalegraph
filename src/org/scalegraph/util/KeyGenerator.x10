package org.scalegraph.util;

import x10.compiler.Native;

public type Key = Long;

public class KeyGenerator {
    
    protected static val nextKey: Key = 0L;
    
    @Native("c++", "KeyGenerator::FMGL(nextKey)++;")
    public static native def genNextKey(): void;
    
    public def getKey() {
        this.genNextKey();
        return this.nextKey;
    }
    
}
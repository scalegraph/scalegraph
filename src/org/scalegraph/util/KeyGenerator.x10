package org.scalegraph.util;

import x10.compiler.Native;
import x10.util.concurrent.Lock;

public type Key = Long;

public class KeyGenerator {
    
    protected static val nextKey: Key = 0L;
    protected transient val keyLock: Lock = new Lock();
    
    @Native("c++", "KeyGenerator::FMGL(nextKey)++;")
    public static native def genNextKey(): void;
    
    public def getKey() {
        
        keyLock.lock();
        
        this.genNextKey();
        val k =this.nextKey;
        
        keyLock.unlock();
        
        return k;
    }
    
}
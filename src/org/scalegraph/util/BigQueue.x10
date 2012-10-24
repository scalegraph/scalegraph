package org.scalegraph.util;

import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.BigArray;

public class BigQueue[T] {

    var f: Long = 0;
    var r: Long = 0;
    var count: Long = 0;
    var storage: BigArray[T];
    var size: Long = 0;
    
    protected def this(sz: long) {

        this.size = sz;
        storage = BigArray.make[T](sz);
    }
    
    public static def make[T](sz: long): BigQueue[T] {
        
        val b = new BigQueue[T](sz);
        return b;
    }
    
    // public static def make[T](sz: long, init: (Index) => T): BigQueue[T] {
    //     
    //     val b = new BigQueue[T](sz);;
    //     
    //     return b;
    // }
    
    /**
     * Add vertex id into the queue
     * 
     * @param vertexId vertex id to add
     */
    public def addAsync(key: Key, data: T) {
        
        assert(count < this.size);
        
        storage.writeAsync(key, r, data);
        
        r = (r + 1) % size;
        ++count;
    }
    
    /**
     * Get first item and remove it from the queue
     * 
     * @return first item in queue
     */
    public def removeFirstAsync(key: Key,w: Wrap[T]) {
        
        assert(count > 0);
        
        storage.getAsync(key, f, w);
        
        f = (f + 1) % size;
        --count;
    }
    
    /**
     * Reset queue
     */
    public def clear() = {
        
        f = 0;
        r = 0;
        count = 0;
    };
    
    public static def getKey(): Key {
        
        return BigArray.getKey();
    }
    
    /**
     * Determine wether queue is empty
     */
    public def isEmpty() = count == 0L;

}
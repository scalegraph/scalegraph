package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.KeyGenerator;
import x10.util.concurrent.Lock;
import org.scalegraph.util.BigArray;

protected final class InstanceWaitList[U] {
    
    transient var waitList: HashMap[Key, InstanceWaitEntry[U]] = new HashMap[Key, InstanceWaitEntry[U]]();
    transient var internalLock: Lock = new Lock();
    
    public def addWait(k: Key, index: Index) {
        
        internalLock.lock();
        
        var entry: InstanceWaitEntry[U] = waitList.getOrElse(k, null);
        
        if (entry == null) {
            entry = new InstanceWaitEntry[U]();
            entry.key = k;
            waitList.put(k, entry);
        } 
        
        entry.indices.add(index);
        
        internalLock.unlock();
    }
    
    // public def isDataReady(key: Key): Boolean {
    //     
    //     // internalLock.lock();
    //     // val obj = waitList.getOrElse(key, null);
    //     // internalLock.unlock();
    //     // 
    //     // // All data is local, no waiting entry
    //     // if(obj == null) {
    //     //     return true;
    //     // }
    //     // 
    //     // if(obj.indices.size() == 0) {
    //     //     
    //     //     internalLock.lock();
    //     //     
    //     //     waitList.remove(key);
    //     //     
    //     //     internalLock.unlock();
    //     //     
    //     //     return true;
    //     // }
    //     // 
    //     return false;
    // }
    
    public def removeKey(key: Key): void {
        
        internalLock.lock();
        waitList.remove(key);
        internalLock.unlock();
    }
}
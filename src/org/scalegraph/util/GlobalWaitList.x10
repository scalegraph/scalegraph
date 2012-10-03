package org.scalegraph.util;

import x10.util.*;
import x10.util.concurrent.Lock;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.RemoteCopyable;
import org.scalegraph.util.ShareEntry;


public class GlobalWaitList {
    
    transient var processQ: Array[HashMap[Object, RemoteCopyable]];
    transient var bufferQ: Array[HashMap[Object, RemoteCopyable]];
    transient var qLock: Lock;
    
    transient static val singleton: GlobalWaitList = new GlobalWaitList();
    
    transient var isInit: Boolean;
    transient val initLock: Lock;
    transient var mainJobLock: Lock;
    
    protected def this() {
        
        processQ =  new Array[HashMap[Object, RemoteCopyable]](Place.MAX_PLACES);
        bufferQ =  new Array[HashMap[Object, RemoteCopyable]](Place.MAX_PLACES);
        initLock = new Lock();
        mainJobLock = new Lock();
        qLock = new Lock();
        isInit = false;
    }
    
    protected static def init() {
        
        singleton.initLock.lock();
        
        if(singleton.isInit == false) {
            
            for (var i:int = 0; i < Place.MAX_PLACES; ++i) {
                
                singleton.bufferQ(i) = new HashMap[Object, RemoteCopyable]();
            }
            
            x10.util.concurrent.Fences.storeStoreBarrier();
            singleton.isInit = true;
        }
        
        singleton.initLock.unlock();
    }
    
    protected static def addWaitEntry[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  wrap: Wrap[X]) {

        singleton.qLock.lock();
        val Q = singleton.bufferQ(placeId);
        singleton.qLock.unlock();
        
        val temp = Q.getOrElse(obj, null);
        var waitEntry: ShareEntry[X];
        
        if (temp == null) {
            
            waitEntry = new ShareEntry[X](obj);
            Q.put(obj, waitEntry);
            
        } else {
            
            waitEntry = temp as ShareEntry[X];
        }
        
        waitEntry.add(key, index, wrap);
    }
    
    protected static def enterGlobalJob(): Boolean {
        return false;
        // return singleton.mainJobLock.tryLock();
    }
    
    protected static def exitGlobalJob(): void {
        
        // singleton.mainJobLock.unlock();
    }
    
    protected static def isDataReady(key: Key): Boolean {
        
        return true;
    }
    
    protected static def execute() {
        
        // // Swap queue
        // singleton.qLock.lock();
        // 
        // val temp = singleton.bufferQ;
        // singleton.bufferQ = singleton.processQ;
        // singleton.processQ = temp;
        // 
        // x10.util.concurrent.Fences.storeStoreBarrier();
        // singleton.qLock.unlock();
        // 
        // // Get remote data
        // finish {
        //     
        //     for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
        //         
        //         val p = i; // Copy to pass to closure
        //         val placeQ = singleton.processQ(p);
        //         
        //         async doRemoteOperation (p, placeQ);{
        //             
        //             
        //             // 
        //             // if(placeQ.size() > 0) {
        //             //     
        //             //     // val payload = new ArrayList[SendPayLoad]();
        //             //     // 
        //             //     // val it = placeQ.keySet();
        //             //     // 
        //             //     // for(obj in it) {
        //             //     //     
        //             //     //     // Each WaitEntries append their payloads 
        //             //     //     val entry = placeQ.get(obj).value; 
        //             //     //     entry.createSendEnvelope(payload);
        //             //     // }
        //             //     // 
        //             //     // // // Send request to remote place
        //             //     // // at (Place.places()(p)) {
        //             //     // //     
        //             //     // // }
        //             // }
        //             Console.OUT.println("Volky");
        //         }
        //     }
        //     
        // }
    }
    
    protected static def doRemoteOperation(placdId: Int, placeQ: HashMap[Object, RemoteCopyable]) {
        
        
    }
}
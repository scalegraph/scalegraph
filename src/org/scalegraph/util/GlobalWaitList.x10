package org.scalegraph.util;

import x10.util.*;
import x10.util.concurrent.Lock;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.RemoteCopyable;
import org.scalegraph.util.ShareEntry;
import org.scalegraph.util.RequestPayload;
import org.scalegraph.util.ReplyPayload;


public class GlobalWaitList {
    
    transient var processQ: Array[HashMap[Object, RemoteCopyable]];
    transient var bufferQ: Array[HashMap[Object, RemoteCopyable]];
    transient var qLock: Lock;
    
    transient static val singleton: GlobalWaitList = new GlobalWaitList();
    
    transient var isInit: Boolean;
    transient val initLock: Lock;
    transient var mainJobLock: Lock;
    transient val waitCount: HashMap[Key, Int];
    transient val internalLock: Lock;
    
    protected def this() {
        
        processQ =  new Array[HashMap[Object, RemoteCopyable]](Place.MAX_PLACES);
        bufferQ =  new Array[HashMap[Object, RemoteCopyable]](Place.MAX_PLACES);
        initLock = new Lock();
        mainJobLock = new Lock();
        qLock = new Lock();
        isInit = false;
        waitCount = new HashMap[Key, Int]();
        internalLock = new Lock();
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
        
        val wc = singleton.waitCount.getOrElse(key, -1);
        
        if (wc == -1) {
            
            // Key added yet
            singleton.waitCount.put(key, 1);
        
        } else {
            
            singleton.waitCount.put(key, wc + 1);
        }
        
        waitEntry.add(key, index, wrap);
    }
    
    protected static def enterGlobalJob(): Boolean {
        
        return singleton.mainJobLock.tryLock();
    }
    
    protected static def exitGlobalJob(): void {
        
        singleton.mainJobLock.unlock();
    }
    
    protected static def isDataReady(key: Key): Boolean {
        
        singleton.qLock.lock();
        
        val result = singleton.waitCount.containsKey(key);
        singleton.qLock.unlock();
        
        return !result;
    }
    
    protected static def execute() {
        
        // Swap queue
        singleton.qLock.lock();
        
        val temp = singleton.bufferQ;
        singleton.bufferQ = singleton.processQ;
        singleton.processQ = temp;
        
        x10.util.concurrent.Fences.storeStoreBarrier();
        singleton.qLock.unlock();
        
        // Get remote data
        finish {
            
            for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
                
                val p = i; // Copy to pass to closure
                val placeQ = singleton.processQ(p);
                
                async doRemoteOperation (p, placeQ);          
            } 
        }
    }
    
    protected static def doRemoteOperation(placedId: Int, placeQ: HashMap[Object, RemoteCopyable]) {
  

        if(placeQ.size() > 0) {
            
            val payload = new ArrayList[RequestPayload]();
            
            val it = placeQ.keySet();
            
            for(obj in it) {
                
                // Each WaitEntries append their payloads 
                val entry = placeQ.get(obj).value; 
                entry.createSendPayload(payload);
            }
            
            // Send request to remote place
            at (Place.places()(placedId)) {
                
                val returnData = new ArrayList[ReplyPayload]();
                
                for(var i: Int = 0; i < payload.size(); ++i) {
                    
                    Console.OUT.println("Reuqest index: " + payload(i).indices + " on " + here.id);
                    // val obj = payload(i).obj;
                    // val keys = payload(i).keys;
                    // val indices = payload(i).indices;
                    // val data = obj.getData(indices);
                    
                }
            }
            
            // Temp block
            // singleton.qLock.lock();
               
            for (var i: Int = 0; i < payload.size(); ++i) {
                
                val keys = payload(i).keys;
                
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    val wc = singleton.waitCount.getOrElse(k, -1);
                    
                    if (wc == -1) {
                        
                        throw new UnsupportedOperationException("Invalid waiting key");
                        
                    } else if (wc == 1) {
                        
                        singleton.waitCount.remove(k);
                        
                    } else {
                        
                        singleton.waitCount.put(k, wc -1);
                    }
                }
            }
            
            // singleton.qLock.unlock();
        }
    }
}
package org.scalegraph.util;

import x10.util.*;
import x10.util.concurrent.Lock;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.Pending;
import org.scalegraph.util.LocalPending;
import org.scalegraph.util.ReadRequestPayload;
import org.scalegraph.util.ReadReplyPayload;


protected class BigArrayQueueManager {
    
    transient var readProcessQ: Array[HashMap[Object, Pending]];
    transient var readBufferQ: Array[HashMap[Object, Pending]];
    transient var qLock: Lock;
    
    transient static val singleton: BigArrayQueueManager = new BigArrayQueueManager();
    
    transient var isInit: Boolean;
    transient val initLock: Lock;
    transient var mainJobLock: Lock;
    transient val waitCount: HashMap[Key, Int];
    transient val internalLock: Lock;
    
    protected def this() {
        
        readProcessQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        readBufferQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
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
                
                singleton.readBufferQ(i) = new HashMap[Object, Pending]();
                singleton.readProcessQ(i) = new HashMap[Object, Pending]();
            }
            
            x10.util.concurrent.Fences.storeStoreBarrier();
            singleton.isInit = true;
        }
        
        singleton.initLock.unlock();
    }
    
    protected static def addRead[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  wrap: Wrap[X]) {

        singleton.qLock.lock();
        val Q = singleton.readBufferQ(placeId);
        singleton.qLock.unlock();
        
        val temp = Q.getOrElse(obj, null);
        var readWait: LocalPending[X];
        
        if (temp == null) {
            
            readWait = new LocalPending[X](obj);
            Q.put(obj, readWait);
            
        } else {
            
            readWait = temp as LocalPending[X];
        }
        val wc = singleton.waitCount.getOrElse(key, -1);
        
        if (wc == -1) {
            
            // Key added yet
            singleton.waitCount.put(key, 1);
        
        } else {
            
            singleton.waitCount.put(key, wc + 1);
        }
        
        readWait.addRead(key, index, wrap);
    }
    
    protected static def addWrite[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  data: X) {
        
        
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
        
        var temp: Array[HashMap[Object, Pending]] = singleton.readBufferQ;
        singleton.readBufferQ = singleton.readProcessQ;
        singleton.readProcessQ = temp;
        
        x10.util.concurrent.Fences.storeStoreBarrier();
        singleton.qLock.unlock();
        
        // Get remote data
        finish {
            
            for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
                
                val p = i; // Copy to pass to closure
                val placeQ = singleton.readProcessQ(p);
                
                doRemoteOperation (p, placeQ); 
                // async doRemoteOperation (p, placeQ);          
            } 
        }
    }
    
    protected static def doRemoteOperation(placedId: Int, placeQ: HashMap[Object, Pending]) {
  

        if(placeQ.size() > 0) {
            
            val readRequests = new ArrayList[ReadRequestPayload]();
            
            val it = placeQ.keySet();
            val localPendings = new ArrayList[Pending]();
            
            // Create read requests
            for(obj in it) {
                
                // Each WaitEntries append their payloads 
                val entry = placeQ.get(obj).value; 
                entry.createReadRequestPayload(readRequests);
                localPendings.add(entry);
            }
            
            // Send read request to remote place
             
            val remoteData = at (Place.places()(placedId)) {
                
                val returnData = new ArrayList[ReadReplyPayload]();
                
                for(var i: Int = 0; i < readRequests.size(); ++i) {
                    
                    Console.OUT.println("Reuqest index: " + readRequests(i).indices + " on " + here.id);
                    val p = readRequests(i);
                    val hash = p.hash;
                    val obj = p.obj;
                    val keys = p.keys;
                    val indices = p.indices;
                    val data = obj.getData(indices);
                    
                    returnData.add(new ReadReplyPayload(hash, obj, keys, indices, data));
                }
                return returnData.toArray();
            };
            
            Console.OUT.println("Remote Data: ");
            for(var i:int = 0; i < remoteData.size; ++i) {
                
                Console.OUT.println(remoteData(i).data);
            }
            
            // Update waiting queue   
            for (var i: Int = 0; i < remoteData.size; ++i) {
                
                val readReplyPayload = remoteData(i);
                val keys = readReplyPayload.keys;
                val indices = readReplyPayload.indices;
                val obj = readReplyPayload.obj;
                val data = readReplyPayload.data;
                
                localPendings(i).updateReadRequestData(data);
                
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    // val index = indices
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
        }
    }
}
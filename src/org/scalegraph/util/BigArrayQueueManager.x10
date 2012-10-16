package org.scalegraph.util;

import x10.util.*;
import x10.util.concurrent.Lock;
import x10.util.concurrent.AtomicInteger;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.Pending;
import org.scalegraph.util.LocalPending;
import org.scalegraph.util.ReadRequestPayload;
import org.scalegraph.util.ReadReplyPayload;



public class BigArrayQueueManager {
    
    transient var readProcessQ: Array[HashMap[Object, Pending]];
    transient var readBufferQ: Array[HashMap[Object, Pending]];
    // transient var writeProcessQ: Array[HashMap[Object, Pending]];
    // transient var writeBufferQ: Array[HashMap[Object, Pending]];
    transient var qLock: Lock;
    
    transient static val singleton: BigArrayQueueManager = new BigArrayQueueManager();
    
    transient var isInit: Boolean;
    transient val initLock: Lock;
    transient var mainJobLock: Lock;
    transient val waitCount: HashMap[Key, Int];
    transient val waitCountLock: Lock;
    
    protected def this() {
        
        readProcessQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        readBufferQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        
        // writeProcessQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        // writeBufferQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        
        initLock = new Lock();
        mainJobLock = new Lock();
        qLock = new Lock();
        isInit = false;
        waitCount = new HashMap[Key, Int]();
        waitCountLock = new Lock();
        
        for (var i:int = 0; i < Place.MAX_PLACES; ++i) {
            
            readBufferQ(i) = new HashMap[Object, Pending]();
            readProcessQ(i) = new HashMap[Object, Pending]();
            
            // singleton.writeBufferQ(i) = new HashMap[Object, Pending]();
            // singleton.writeProcessQ(i) = new HashMap[Object, Pending]();
        }
        
        x10.util.concurrent.Fences.storeStoreBarrier();
    }
    
    public static def init() {
        
        singleton.initLock.lock();
        
        // if(singleton.isInit == false) {
        //     
        //     for (var i:int = 0; i < Place.MAX_PLACES; ++i) {
        //         
        //         singleton.readBufferQ(i) = new HashMap[Object, Pending]();
        //         singleton.readProcessQ(i) = new HashMap[Object, Pending]();
        //         
        //         // singleton.writeBufferQ(i) = new HashMap[Object, Pending]();
        //         // singleton.writeProcessQ(i) = new HashMap[Object, Pending]();
        //     }
        //     
        //     x10.util.concurrent.Fences.storeStoreBarrier();
        //     singleton.isInit = true;
        // }
        
        singleton.initLock.unlock();
    }
    
    protected static def addRead[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  wrap: Wrap[X]) {

        // Console.OUT.println("Q => " + Q + " index: " + index + " Place: " + placeId);
        singleton.qLock.lock();
        
        val Q = singleton.readBufferQ(placeId);
        
        val temp = Q.getOrElse(obj, null);
        var readPending: LocalPending[X];
        
        if (temp == null) {
            
            readPending = new LocalPending[X](obj);
            Q.put(obj, readPending);
            
        } else {
            
            readPending = temp as LocalPending[X];
        }
        
        singleton.qLock.unlock();
        
        singleton.waitCountLock.lock();
        
        val wc = singleton.waitCount.getOrElse(key, -1);
        
        if (wc == -1) {
            
            // Key waiting hasnt been added yet
            singleton.waitCount.put(key, 1);
        
        } else {
            
            singleton.waitCount.put(key, wc + 1);
        }
        
        Console.OUT.println("Added Key: " + key + " Count: " + singleton.waitCount.getOrElse(key, -1));
        readPending.addRead(key, index, wrap);
        
        singleton.waitCountLock.unlock();
    }
    
    protected static def addWrite[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  data: X) {
         
        singleton.qLock.lock();
        
        val Q = singleton.readBufferQ(placeId);
        
        val temp = Q.getOrElse(obj, null);
        var writePending: LocalPending[X];

        if (temp == null) {
            
            writePending = new LocalPending[X](obj);
            Q.put(obj, writePending);
            
        } else {
            
            writePending = temp as LocalPending[X];
        }
        
        singleton.qLock.unlock();
        
        singleton.waitCountLock.lock();
        
        val wc = singleton.waitCount.getOrElse(key, -1);
        
        if (wc == -1) {
            
            // Key waiting hasnt been added yet
            singleton.waitCount.put(key, 1);
            
        } else {
            
            singleton.waitCount.put(key, wc + 1);
        }
        
        Console.OUT.println("Added Key: " + key + " Count: " + singleton.waitCount.getOrElse(key, -1));
        writePending.addWrite(key, index, data);
        
        singleton.waitCountLock.unlock();
        
    }
    
    protected static def enterGlobalJob(): Boolean {
        
        return singleton.mainJobLock.tryLock();
    }
    
    protected static def exitGlobalJob(): void {
        
        singleton.mainJobLock.unlock();
    }
    
    protected static def isDataReady(key: Key): Boolean {
        
        singleton.waitCountLock.lock();
        
        var result: Boolean = singleton.waitCount.containsKey(key);
        
        singleton.waitCountLock.unlock();
        
        return !result;
    }
    
    protected static def execute() {
        
        // Swap queue
        singleton.qLock.lock();
        
        for (var i: Int = 0; i < singleton.readProcessQ.size; ++i) {
            
            singleton.readProcessQ(i).clear();		// Clear old data
        }
        
        var temp: Array[HashMap[Object, Pending]] = singleton.readBufferQ;
        singleton.readBufferQ = singleton.readProcessQ;
        singleton.readProcessQ = temp;
        
        x10.util.concurrent.Fences.storeStoreBarrier();
        
        singleton.qLock.unlock();
        
        // Get remote data
        finish {
            
            for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
                
                val p = i; // Copy to pass to closure
                
                singleton.qLock.lock();
                val placeQ = singleton.readProcessQ(p);
                // val placeQ = singleton.readBufferQ(p);
                singleton.qLock.unlock();
                
                doRemoteOperation (p, placeQ); 
                // async doRemoteOperation (p, placeQ);          
            } 
        }
        
        // singleton.qLock.unlock();
    }
    
    protected static def doRemoteOperation(placedId: Int, placeQ: HashMap[Object, Pending]) {
  

        if(placeQ.size() > 0) {
            
            val writeRequests = new ArrayList[WriteRequestPayload]();
            val readRequests = new ArrayList[ReadRequestPayload]();
            
            val it = placeQ.keySet();
            val localReadPendings = new ArrayList[Pending]();
            
            // Create read requests
            for (obj in it) {
                
                val entry = placeQ.get(obj).value;
                
                // Create read request and append to list 
                entry.createReadRequestPayload(readRequests);
                localReadPendings.add(entry);
                
                // Create write request and append to list
                entry.createWriteRequestPayload(writeRequests);
            }
            
            // Send read request to remote place
             
            val remoteReadData = at (Place.places()(placedId)) {
                
                // Write data
                for (var i: Int = 0; i < writeRequests.size(); ++i) {
                    
                    val rq = writeRequests(i);
                    val obj = rq.obj;
                    val indices = rq.indices;
                    val data = rq.data;
                    
                    obj.writeData(indices, data);
                }
                
                // Read data
                val readData = new ArrayList[ReadReplyPayload]();
                
                for (var i: Int = 0; i < readRequests.size(); ++i) {
                    
                    // Console.OUT.println("Reuqest index: " + readRequests(i).indices + " on " + here.id);
                    val rq = readRequests(i);
                    val hash = rq.hash;
                    val obj = rq.obj;
                    val keys = rq.keys;
                    val indices = rq.indices;
                    val data = obj.readData(indices);
                    
                    readData.add(new ReadReplyPayload(hash, obj, keys, indices, data));
                    
                    Console.OUT.println("remote k: " + keys);
                }
                
                return readData.toArray();
            };
            
            // Console.OUT.print("Remote Data: ");
            // for (var i:int = 0; i < remoteReadData.size; ++i) {
            //     
            //     Console.OUT.println(remoteReadData(i).data);
            // }
            
            // Update waiting queue   
            for (var i: Int = 0; i < remoteReadData.size; ++i) {
                
                val readReplyPayload = remoteReadData(i);
                val keys = readReplyPayload.keys;
                val indices = readReplyPayload.indices;
                val obj = readReplyPayload.obj;
                val data = readReplyPayload.data;
                
                localReadPendings(i).updateReadRequestData(data);
                
                // Remove waiting count
                singleton.waitCountLock.lock();
                
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    val wc = singleton.waitCount.getOrElse(k, -1);
                    
                    if (wc == -1) {
                        
                        throw new UnsupportedOperationException("Invalid waiting key");
                        
                    } else if (wc == 1) {
                        
                        Console.OUT.println("Remove key: " + k);
                        singleton.waitCount.remove(k);
                        
                    } else {
                        Console.OUT.println("Decreas count key: " + k);
                        singleton.waitCount.put(k, wc -1);
                    }
                }
                
                singleton.waitCountLock.unlock();
            }
            
            // Clear waiting list for write request
            for (var i: Int = 0; i < writeRequests.size(); ++i) {
                
                val rq = writeRequests(i);
                val obj = rq.obj;
                val keys = rq.keys;
                
                singleton.waitCountLock.lock();
                
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    val wc = singleton.waitCount.getOrElse(k, -1);
                    
                    if (wc == -1) {
                        
                        throw new UnsupportedOperationException("Invalid waiting key");
                        
                    } else if (wc == 1) {
                        
                        Console.OUT.println("Remove key: " + k);
                        singleton.waitCount.remove(k);
                        
                    } else {
                        Console.OUT.println("Decreas count key: " + k);
                        singleton.waitCount.put(k, wc -1);
                    }
                }
                
                singleton.waitCountLock.unlock();
            }
        }
    }
    
    public static def printWaitingList() {
        ;
        Console.OUT.println("Keys in hash" + singleton.waitCount.size());
    }
}
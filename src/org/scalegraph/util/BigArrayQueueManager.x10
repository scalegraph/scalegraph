package org.scalegraph.util;

import x10.util.*;
import x10.util.concurrent.Lock;
import x10.util.concurrent.AtomicInteger;
import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.Pending;
import org.scalegraph.util.LocalPending;
import org.scalegraph.util.ReadRequestPayload;
import org.scalegraph.util.ReadReplyPayload;
import x10.compiler.NoInline;



public class BigArrayQueueManager {
    
    transient var internalProcessQ: Array[HashMap[Object, Pending]];
    transient var internalBufferQ: Array[HashMap[Object, Pending]];
    transient var qLock: Lock;
    
    transient static val singleton: BigArrayQueueManager = new BigArrayQueueManager();
    
    transient var isInit: Boolean;
    transient val initLock: Lock;
    transient var mainJobLock: Lock;
    transient val internalWaitCount: HashMap[Key, AtomicInteger];
    transient val internalWaitCountLock: Lock;
    transient static val waitRandom: Random = new Random(System.currentTimeMillis());
    
    transient var sumCount: Long = 0;
    
    protected def this() {
        
        internalProcessQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        internalBufferQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        
        // writeProcessQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        // writeBufferQ =  new Array[HashMap[Object, Pending]](Place.MAX_PLACES);
        
        initLock = new Lock();
        mainJobLock = new Lock();
        qLock = new Lock();
        isInit = false;
        internalWaitCount = new HashMap[Key, AtomicInteger]();
        internalWaitCountLock = new Lock();
        
        
        for (var i:int = 0; i < Place.MAX_PLACES; ++i) {
            
            internalBufferQ(i) = new HashMap[Object, Pending]();
            internalProcessQ(i) = new HashMap[Object, Pending]();
            
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
        // singleton.qLock.lock();
        
        // val Q = singleton.bufferQ(placeId);
        // x10.util.concurrent.Fences.storeStoreBarrier();
        // val temp = Q.getOrElse(obj, null);
        
        val temp = getEntryFromBufferQ(placeId, obj);
        var readPending: LocalPending[X];
        // x10.util.concurrent.Fences.storeStoreBarrier();
        
        if (temp == null) {
            
            readPending = new LocalPending[X](obj);
            // Q.put(obj, readPending);
            putEntryToBufferQ(placeId, obj, readPending);
            // x10.util.concurrent.Fences.storeStoreBarrier();
        } else {
            
            readPending = temp as LocalPending[X];
            // x10.util.concurrent.Fences.storeStoreBarrier();
        }
        
        // singleton.qLock.unlock();
        
        // singleton.waitCountLock.lock();
        
        // var wc: AtomicInteger = singleton.waitCount.getOrElse(key, null);
        // 
        // if (wc == null) {
        //     
        //     // Key waiting hasnt been added yet
        //     wc = new AtomicInteger(1);
        //     singleton.waitCount.put(key, wc);
        //     x10.util.concurrent.Fences.storeStoreBarrier();
        // } else {
        //     
        //    wc.incrementAndGet();
        //     // singleton.waitCount.put(key, wc + 1);
        // }
        
        // Console.OUT.println("Added Key: " + key + " Count: " + wc.intValue());
        // Console.OUT.println("Added Key: " + key + " Count: " + singleton.waitCount.getOrElse(key, -1));
        readPending.addRead(key, index, wrap);
        
        Console.OUT.println("KKKK" + "add count(k): " + key);
        increaseWaitingCount(key);
        // singleton.waitCountLock.unlock();
    }
    
    protected static def addWrite[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  data: X) {
         
        // singleton.qLock.lock();
        
        // val Q = singleton.bufferQ(placeId);
        
        // val temp = Q.getOrElse(obj, null);
        val temp = getEntryFromBufferQ(placeId, obj);
        var writePending: LocalPending[X];

        if (temp == null) {
            
            writePending = new LocalPending[X](obj);
            // Q.put(obj, writePending);
            putEntryToBufferQ(placeId, obj, writePending);
            
        } else {
            
            writePending = temp as LocalPending[X];
        }
        
        // singleton.qLock.unlock();
        
        // singleton.waitCountLock.lock();
        // 
        // var wc: AtomicInteger = singleton.waitCount.getOrElse(key, null);
        // 
        // if (wc == null) {
        //     
        //     // Key waiting hasnt been added yet
        //     wc = new AtomicInteger(1);
        //     singleton.waitCount.put(key, wc);
        //     
        // } else {
        //     
        //     wc.incrementAndGet();
        // }
        
        // Console.OUT.println("Added Key: " + key + " Count: " + wc.intValue());
        writePending.addWrite(key, index, data);
        increaseWaitingCount(key);
        // singleton.waitCountLock.unlock();
        
    }
    
    protected static def enterGlobalJob(): Boolean {
        
        return singleton.mainJobLock.tryLock();
    }
    
    protected static def exitGlobalJob(): void {
        
        singleton.mainJobLock.unlock();
    }
    
    protected  static def isDataReady(key: Key): Boolean {
        
        // singleton.internalWaitCountLock.lock();
        singleton.qLock.lock();
        
        val result = singleton.internalWaitCount.getOrElse(key, null);
        
        // singleton.internalWaitCountLock.unlock();
        singleton.qLock.unlock();
        
        return result == null || result.intValue() == 0;
    }
    
    private static def getEntryFromBufferQ(placeId: Int, obj: Object) {
        
        singleton.qLock.lock();
        val r = singleton.internalBufferQ(placeId).getOrElse(obj, null);
        singleton.qLock.unlock();
        
        return r;
    }
    
    private static def getProcessQ(placeId: Int) {
        
        singleton.qLock.lock();
        val r = singleton.internalProcessQ(placeId);
        singleton.qLock.unlock();
        
        return r;
    }
    
    private static def putEntryToBufferQ(placeId: Int, obj: Object, pending: Pending) {
        
        singleton.qLock.lock();
        singleton.internalBufferQ(placeId).put(obj, pending);
        singleton.qLock.unlock();
    }
    
    private static def clearProcessQ(placeId: Int) {
        
        singleton.qLock.lock();
        
        // for (var i: Int = 0; i < singleton.internalProcessQ.size; ++i) {
            
            singleton.internalProcessQ(placeId).clear();		// Clear old data
        // }
        
        singleton.qLock.unlock();
    }
    
    private static def swapQ() {
        
        singleton.qLock.lock();
        
        var temp: Array[HashMap[Object, Pending]] = singleton.internalBufferQ;
        x10.util.concurrent.Fences.storeStoreBarrier();
        singleton.internalBufferQ = singleton.internalProcessQ;
        x10.util.concurrent.Fences.storeStoreBarrier();
        singleton.internalProcessQ = temp;
        x10.util.concurrent.Fences.storeStoreBarrier();
        
        singleton.qLock.unlock();
    }
    
    private  static def decreaseWaitingCount(k: Key) {
        
        // singleton.internalWaitCountLock.lock();
        singleton.qLock.lock();
        
        val wc = singleton.internalWaitCount.getOrElse(k, null);
        
        if (wc == null) {
            
            throw new UnsupportedOperationException("Invalid waiting key");
        } 
        
        val count = wc.decrementAndGet();
        
        if (count == 0) {
            
            singleton.internalWaitCount.remove(k);
        }
        singleton.qLock.unlock();
        // singleton.internalWaitCountLock.unlock();
    }
    
    private static def increaseWaitingCount(k: Key) {
        
        // singleton.internalWaitCountLock.lock();
        singleton.qLock.lock();
        
        var wc: AtomicInteger = singleton.internalWaitCount.getOrElse(k, null);
        
        if (wc == null) {
            
            // Key waiting hasnt been added yet
            wc = new AtomicInteger(1);
            singleton.internalWaitCount.put(k, wc);
            
        } else {
            
            wc.incrementAndGet();
        }
        
        ++singleton.sumCount;
        singleton.qLock.unlock();
        // singleton.internalWaitCountLock.unlock();
    }
    
    
    protected static def execute() {
        
        // // Swap queue
        // singleton.qLock.lock();
        // 
        // 
        // 
        // var temp: Array[HashMap[Object, Pending]] = singleton.bufferQ;
        // x10.util.concurrent.Fences.storeStoreBarrier();
        // singleton.bufferQ = singleton.processQ;
        // x10.util.concurrent.Fences.storeStoreBarrier();
        // singleton.processQ = temp;
        // x10.util.concurrent.Fences.storeStoreBarrier();
        // 
        // singleton.qLock.unlock();
        
        // Get remote data
        
        swapQ();
        
        finish {
            
            
            
            for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
                
                // singleton.qLock.lock();
                
                val p = i; // Copy to pass to closure
                // val placeQ = singleton.processQ(p);
                // val placeQ = singleton.readBufferQ(p);
                // x10.util.concurrent.Fences.storeStoreBarrier();
                // singleton.qLock.unlock();
                val placeQ = getProcessQ(p);
                // Console.OUT.println("Job to exec: " + placeQ.size() + " Obj Addres" + placeQ);
                doRemoteOperation (p, placeQ);
                clearProcessQ(p);
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
                // singleton.waitCountLock.lock();
                
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    // val wc = singleton.waitCount.getOrElse(k, null);
                    // 
                    // if (wc == null) {
                    //     
                    //     throw new UnsupportedOperationException("Invalid waiting key");
                    // } 
                    // 
                    // val count = wc.decrementAndGet();
                    // 
                    // if (count == 0) {
                    //     
                    //     singleton.waitCount.remove(k);
                    // }
                    decreaseWaitingCount(k);
                }
                // 
                // singleton.waitCountLock.unlock();
                
            }
            
            // Clear waiting list for write request
            for (var i: Int = 0; i < writeRequests.size(); ++i) {
                
                val rq = writeRequests(i);
                val obj = rq.obj;
                val keys = rq.keys;
                
                // singleton.waitCountLock.lock();
                // 
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    // val wc = singleton.waitCount.getOrElse(k, null);
                    // 
                    // if (wc == null) {
                    //     
                    //     throw new UnsupportedOperationException("Invalid waiting key");
                    // } 
                    // 
                    // val count = wc.decrementAndGet();
                    // 
                    // if (count == 0) {
                    //     
                    //     singleton.waitCount.remove(k);
                    // }
                    decreaseWaitingCount(k);
                }
                // 
                // singleton.waitCountLock.unlock();
            }
        }
    }
    
    public static def printWaitingList() {
        
        Console.OUT.println("Keys in hash => " + singleton.internalWaitCount.size());
        Console.OUT.println("Sum count  => " + singleton.sumCount);
    } 
}
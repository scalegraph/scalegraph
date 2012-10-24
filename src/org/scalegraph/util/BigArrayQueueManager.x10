package org.scalegraph.util;

import x10.util.concurrent.Lock;
import x10.util.concurrent.AtomicInteger;
import x10.util.HashMap;
import x10.util.Random;
import x10.util.ArrayList;

// import org.scalegraph.util.LocalPending;
// import org.scalegraph.util.KeyGenerator.*;
// import org.scalegraph.util.Pending;
// import org.scalegraph.util.ReadRequestPayload;
// import org.scalegraph.util.ReadReplyPayload;
// import org.scalegraph.util.RemoteInvocationPayload.*;

public class BigArrayQueueManager {
    
    transient var internalProcessQ: Array[HashMap[Any, Pending]];
    transient var internalBufferQ: Array[HashMap[Any, Pending]];
    transient var qLock: Lock;
    
    transient static val singleton: BigArrayQueueManager = new BigArrayQueueManager();
    
    transient var isInit: Boolean;
    transient val initLock: Lock;
    transient var mainJobLock: Lock;
    transient val internalWaitCount: HashMap[Key, AtomicInteger];
    transient val internalWaitCountLock: Lock;
    transient static val waitRandom: Random = new Random(System.currentTimeMillis());
    
    transient var sumCount: Long = 0;
    transient var releaseCount: Long = 0;
    
    protected def this() {
        
        internalProcessQ =  new Array[HashMap[Any, Pending]](Place.MAX_PLACES);
        internalBufferQ =  new Array[HashMap[Any, Pending]](Place.MAX_PLACES);
        
        initLock = new Lock();
        mainJobLock = new Lock();
        qLock = new Lock();
        isInit = false;
        internalWaitCount = new HashMap[Key, AtomicInteger]();
        internalWaitCountLock = new Lock();
        
        
        for (var i:int = 0; i < Place.MAX_PLACES; ++i) {
            
            internalBufferQ(i) = new HashMap[Any, Pending]();
            internalProcessQ(i) = new HashMap[Any, Pending]();
        }
        
        x10.util.concurrent.Fences.storeStoreBarrier();
    }
    
    public static def init() {
        
        singleton.initLock.lock();
        
        
        singleton.initLock.unlock();
    }
    
    protected static def addRead[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  wrap: Wrap[X]) {

        
        val temp = getEntryFromBufferQ(placeId, obj);
        var pending: LocalPending[X];

        if (temp == null) {
            
            pending = new LocalPending[X](obj);
            putEntryToBufferQ(placeId, obj, pending);
            
        } else {
            
            pending = temp as LocalPending[X];
        }
        
       
        pending.addRead(key, index, wrap);
        
        // Console.OUT.println("KKKK" + "add count(k): " + key);
        increaseWaitingCount(key);
    }
    
    protected static def addWrite[X](obj: BigArray[X], placeId: Int, key: Key, index: Index,  data: X) {
         

        val temp = getEntryFromBufferQ(placeId, obj);
        var pending: LocalPending[X];

        if (temp == null) {
            
            pending = new LocalPending[X](obj);
            putEntryToBufferQ(placeId, obj, pending);
            
        } else {
            
            pending = temp as LocalPending[X];
        }
        
        pending.addWrite(key, index, data);
        increaseWaitingCount(key);
    }
    
    protected static def addRemoteInvocation[X](obj: BigArray[X],
            placeId: Int,
            key: Key,
            method: (ArrayObject, Param1, Param2)=> void,
            param1: Any,
            param2: Any) {
        
        val temp = getEntryFromBufferQ(placeId, obj);
        var pending: LocalPending[X];

        if (temp == null) {
            
            pending = new LocalPending[X](obj);
            putEntryToBufferQ(placeId, obj, pending);
            
        } else {
            
            pending = temp as LocalPending[X];
        }
        
        pending.addRemoteInvocation(key, method, param1, param2);
        increaseWaitingCount(key);
    }
    
    protected static def enterGlobalJob(): Boolean {
        
        return singleton.mainJobLock.tryLock();
    }
    
    protected static def exitGlobalJob(): void {
        
        singleton.mainJobLock.unlock();
    }
    
    protected  static def isDataReady(key: Key): Boolean {
        
        if(singleton.internalWaitCountLock.tryLock()) {
            
            
            val result = singleton.internalWaitCount.getOrElse(key, null);
            
            singleton.internalWaitCountLock.unlock();
            return result == null;
        }
        
        return false;
        
    }
    
    private static def getEntryFromBufferQ(placeId: Int, obj: Any) {
        
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
    
    private static def putEntryToBufferQ(placeId: Int, obj: Any, pending: Pending) {
        
        singleton.qLock.lock();
        singleton.internalBufferQ(placeId).put(obj, pending);
        singleton.qLock.unlock();
    }
    
    private static def clearProcessQ(placeId: Int) {
        
        singleton.qLock.lock();
        
        singleton.internalProcessQ(placeId).clear();		// Clear old data
        
        singleton.qLock.unlock();
    }
    
    private static def swapQ() {
        
        singleton.qLock.lock();
        
        val temp = singleton.internalBufferQ;
        x10.util.concurrent.Fences.storeStoreBarrier();
        singleton.internalBufferQ = singleton.internalProcessQ;
        x10.util.concurrent.Fences.storeStoreBarrier();
        singleton.internalProcessQ = temp;
        x10.util.concurrent.Fences.storeStoreBarrier();
        
        singleton.qLock.unlock();
    }
    
    private  static def decreaseWaitingCount(k: Key) {
        
        singleton.internalWaitCountLock.lock();
        // singleton.qLock.lock();
        
        val wc = singleton.internalWaitCount.getOrElse(k, null);
        
        if (wc == null) {
            
            // workaround, maybe due to optimization some state order are different from src
            // throw new UnsupportedOperationException("Invalid waiting key: " + k);
            
        } else { 
        
            val count = wc.decrementAndGet();
            
            if (count <= 0) {
                
                singleton.internalWaitCount.remove(k);
                x10.util.concurrent.Fences.loadLoadBarrier();
            }
        
        }
        ++singleton.releaseCount;
        // singleton.qLock.unlock();
        singleton.internalWaitCountLock.unlock();
    }
    
    private static def increaseWaitingCount(k: Key) {
        
        singleton.internalWaitCountLock.lock();
        // singleton.qLock.lock();
        
        var wc: AtomicInteger = singleton.internalWaitCount.getOrElse(k, null);
        
        if (wc == null) {
            
            // Key waiting hasnt been added yet
            wc = new AtomicInteger(1);
            singleton.internalWaitCount.put(k, wc);
            
        } else {
            
            wc.incrementAndGet();
        }
        
        ++singleton.sumCount;
        // singleton.qLock.unlock();
        singleton.internalWaitCountLock.unlock();
    }
    
    
    protected static def execute() {
        
        swapQ();
        
        finish {

            for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
                
                val p = i; // Copy to pass to closure
                val placeQ = getProcessQ(p);
                // Console.OUT.println("Job to exec: " + placeQ.size() + " Obj Addres" + placeQ);
                doRemoteOperation (p, placeQ);
                // async doRemoteOperation (p, placeQ);
                clearProcessQ(p);
                          
            } 
        }
        

    }
    
    protected static def doRemoteOperation(placedId: Int, placeQ: HashMap[Any, Pending]) {
  

        if(placeQ.size() > 0) {
            
            val writeRequests = new ArrayList[WriteRequestPayload]();
            val readRequests = new ArrayList[ReadRequestPayload]();
            val remoteInvocations = new ArrayList[RemoteInvocationPayload]();
            
            val it = placeQ.keySet();
            val localReadPendings = new ArrayList[Pending]();
            
            // Create read requests
            for (obj in it) {
                
                val entry = placeQ.get(obj).value;
                
                entry.createRemoteInvocationPayload(remoteInvocations);
                
                // Create read request and append to list 
                entry.createReadRequestPayload(readRequests);
                localReadPendings.add(entry);
                
                // Create write request and append to list
                entry.createWriteRequestPayload(writeRequests);
            }
            
            // Send read request to remote place
             
            val remoteReadData = at (Place.places()(placedId)) {
                
                // Remote invocation
                for (var i: Int = 0; i < remoteInvocations.size(); ++i) {
                    
                    val ri = remoteInvocations(i);
                    val obj = ri.obj;
                    // val indices = ri.indices;
                    val methods = ri.methods;
                    val params1 = ri.params1;
                    val params2 = ri.params2;

                    for (var k: Int = 0; k < methods.size; ++k) {
                        
                        // val ind = indices(k);
                        methods(k)(obj, params1(k), params2(k));
                    }
                }
                
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
                    val data = obj.readAll(indices);
                    
                    readData.add(new ReadReplyPayload(hash, obj, keys, indices, data));
                    
                    // Console.OUT.println("remote k: " + keys);
                }
                
                return readData.toArray();
            };
           
            // Console.OUT.println("Remote Data: ");
            // 
            // for(var i:int = 0; i < remoteReadData.size; ++i) {
            //     
            //     Console.OUT.println(remoteReadData(i).data);
            // }
            
            // Update waiting queue   
            for (var i: Int = 0; i < remoteReadData.size; ++i) {
                
                val readReplyPayload = remoteReadData(i);
                val keys = readReplyPayload.keys;
                val data = readReplyPayload.data;
                
                localReadPendings(i).updateReadRequestData(data);
                
                // Remove waiting count
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);

                    decreaseWaitingCount(k);
                }
                
            }
            
            // Remove waiting list for remote invocation
            for (var i: Int = 0; i < remoteInvocations.size(); ++i) {
                
                val rq = remoteInvocations(i);
                val keys = rq.keys;
                
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);
                    
                    decreaseWaitingCount(k);
                }
            }
            
            // Remove waiting list for write request
            for (var i: Int = 0; i < writeRequests.size(); ++i) {
                
                val rq = writeRequests(i);
                val keys = rq.keys;
                 
                for (var j: Int = 0; j < keys.size; ++j) {
                    
                    val k = keys(j);

                    decreaseWaitingCount(k);
                }
            }
        }
    }
    
    public static def printWaitingList() {
        
        // Console.OUT.println("Keys in hash => " + singleton.internalWaitCount.size());
        // Console.OUT.println("Sum count  => " + singleton.sumCount);
        // Console.OUT.println("Release count  => " + singleton.sumCount);
    } 
}
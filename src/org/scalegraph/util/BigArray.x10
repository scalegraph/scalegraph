package org.scalegraph.util;

import x10.util.HashMap;
import x10.util.IndexedMemoryChunk;
import x10.util.ArrayList;
import x10.util.concurrent.Lock;

// import org.scalegraph.util.Pending;
// import org.scalegraph.util.LocalPending;
// import org.scalegraph.util.BigArrayQueueManager;
import org.scalegraph.util.RemoteInvocationPayload.*;
import org.scalegraph.util.KeyGenerator.*;
import x10.io.SerialData;

public type Index = Long;

public class BigArray[T] implements BigArrayOperation, x10.io.CustomSerialization {
    
    protected var localHandle: PlaceLocalHandle[LocalState[T]];
    protected transient var isStoragePointerValid: boolean;
    protected transient var cachedStoragePointer: IndexedMemoryChunk[T]; 
    
    protected static class LocalState[T](IMC: IndexedMemoryChunk[T],
            placeDescriptors: Rail[PlaceDescriptor],
            lcSize: Long,
            lcNumPlaces: Int,
            lcBlockSize: Int,
            lcOperationExclusive: Lock) {
        
        public def this(IMC: IndexedMemoryChunk[T],
                        placeDescriptors: Rail[PlaceDescriptor],
                        size: Long,
                        numPlaces: Int,
                        blockSize: Int,
                        operationExclusive: Lock) {
            
            property (IMC,
                      placeDescriptors,
                      size,
                      numPlaces,
                      blockSize,
                      operationExclusive);
        }
    }
    
    static struct PlaceDescriptor(startIndex: Int, size: Int, endIndex: Int) {
        
        def this(startIndex: Int, size: Int, endIndex: Int) {
            
            property(startIndex, size, endIndex);
        }
    }
    
    protected val size: Long;
    
    protected val numPlaces: Int;
    
    // protected val dist: Dist;
    
    // protected val leftOver: Int;
    
    protected val blockSize: Int;
    
    protected val operationExclusive: Lock;
    
    protected static val keyGenerator = new KeyGenerator();
    
    protected def this(lch: PlaceLocalHandle[LocalState[T]]) {
        
        localHandle = lch;
        size = lch().lcSize;
        blockSize = lch().lcBlockSize;
        numPlaces = lch().lcNumPlaces;
        operationExclusive = lch().lcOperationExclusive;
    }
    
    public def this(serialData: SerialData) {
        
        val lch = serialData.data as PlaceLocalHandle[LocalState[T]];
        localHandle = lch;
        size = lch().lcSize;
        blockSize = lch().lcBlockSize;
        numPlaces = lch().lcNumPlaces;
        operationExclusive = lch().lcOperationExclusive;
    }
    
    public def serialize(): SerialData {
        
        return new SerialData(localHandle, null);
    }
    
    public static def make[T](sz: long): BigArray[T] {
        
        val dist = Dist.makeUnique();
        val size = sz;
        val numPlaces = Place.MAX_PLACES;
        
        // Get space assigned to each place
        val placeDescriptors = new Rail[PlaceDescriptor](numPlaces);
        
        val blockSize = (size / numPlaces) as Int;
        val leftOver = (size % numPlaces) as Int;
        var startIndex: int = 0;
        
        for (var i: int = 0; i < numPlaces; ++i) {
            
            var len: int = blockSize;
            
            if (i == numPlaces -1) {
                len += leftOver;
            }
            
            placeDescriptors(i) = new PlaceDescriptor(startIndex, len, startIndex + len - 1);
            startIndex += len;   
        }
        
        val initBigArray = ()=> {
            
            val allocatedSize = placeDescriptors(here.id).size;
            val storage = IndexedMemoryChunk.allocateZeroed[T](allocatedSize);
            
            return new LocalState(storage,
                                  placeDescriptors,
                                  size,
                                  numPlaces,
                                  blockSize,
                                  new Lock());
        };
        
        val lch = PlaceLocalHandle.make[LocalState[T]](dist, initBigArray);
        
        // operationExclusive = new Lock();

        val b = new BigArray[T](lch);
 
        return b;
    }
    
    public static def make[T](sz: long, userInit: (Index) => T): BigArray[T] {
        
        val b = make[T](sz);
        b.initWithMethod(userInit);
        
        return b;
    }
    
    protected def initWithMethod(init:(Index) => T) {
        
        finish {
            for (p in Place.places()) {
                
                at (p) async {
                    
                    val IMC = raw();
                    val len = IMC.length();
                    val pd = localHandle().placeDescriptors(here.id);
                    val startIndex = pd.startIndex;
                    
                    for (var i: Int =0; i < len; ++i) {
                        
                        IMC(i) = init(startIndex + i);
                    }
                }
            }
        }
    }
    
    protected final def raw(): IndexedMemoryChunk[T] {
    
        if (!isStoragePointerValid) {
            
            cachedStoragePointer = localHandle().IMC;
            x10.util.concurrent.Fences.storeStoreBarrier();
            isStoragePointerValid = true;
        }
        
        return cachedStoragePointer;
    }
    
    public def fill(data: T) {
        
        val d = data;
        finish {
            for (p in Place.places()) {
                
                async at (p) {
                    val IMC = raw();
                    val len = IMC.length();
                    
                    for (var i: Int =0; i < len; ++i) {
                        IMC(i) = d;
                    }
                }
            }
        }
    }
    
    public operator this (index: Index) {
        
        if (index > this.size) {
            
            throw new x10.lang.Exception("BigArray: Index out of bound");
        }
        
        val placeId = getPlaceId(index);
        val pd = localHandle().placeDescriptors(placeId);
        val offset: Int = (index - pd.startIndex) as Int;
        
        
        if(placeId == here.id) {
            
            return raw()(offset);
        }
        
        val p = Place.places()(placeId);
        
        return  at(p) raw()(offset);
    }
    
    public operator this (val index: Index) = (val data: T) {
        
        if (isLocal(index)) {
            
            setLocal(index, data);
            
        } else {
            
            val pid = getPlaceId(index);
            
            val p = Place.places()(pid);
            
            at(p) {
                
                setLocal(index, data);
            }
        }
    }
    
    
    public final def isLocal(index: Index): Boolean {
        
        val pd = localHandle().placeDescriptors(here.id);
        return index >= pd.startIndex && index <= pd.endIndex;
    }
    
    public def setLocal(index: Index, data: T) {
        
        val pd = localHandle().placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        raw()(offset) = data;
    }
    
    public def getLocal(index: Index): T {
        
        val pd = localHandle().placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        return raw()(offset);
    }
    
    protected def writeLocal(index: Index, data: T) {
        
        val pd = localHandle().placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        raw()(offset) = data;
    }    
    
    protected def invokeLocalWithNoReturn(method: (ArrayObject, Param1, Param2)=>void, 
                                          param1: Any, 
                                          param2: Any) {
        
       //  val pd = localHandle().placeDescriptors(here.id);
       //  val offset = (index - pd.startIndex);
       // (offset);
        
        method(this, param1, param2);
    }
    
    public static def getKey(): Key {
        
        return keyGenerator.getKey();
    }
    
    public def getPlaceId(index: Index): Int {
        
        val placeId = (index / blockSize) as Int;
        
        if (placeId >= Place.MAX_PLACES) {
            
            if(index < size) {
            	
                // Index is in left over indices
                return Place.MAX_PLACES - 1;
            } 
            
            throw new ArrayIndexOutOfBoundsException();
        }
        
        return placeId;
    }
   
    public def getAsync(k: Key, index: Index, wrap: Wrap[T]) {
        
        operationExclusive.lock();
        
        val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
           // Local data, just put it to wrapper
            wrap.value = getLocal(index);
            // Console.OUT.println("Getlocal data: " + index);
            
        } else {
            
            // Add to  waiting list
            BigArrayQueueManager.addRead[T](this, placeId, k, index, wrap);
        }
        
        operationExclusive.unlock();
    }
    
    public def writeAsync(k :Key, index: Index, data: T) {
        
        operationExclusive.lock();
        
        val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
            // Local data, just write it directly
            writeLocal(index, data);
            
        } else {
            
            // Add to waiting list
            BigArrayQueueManager.addWrite[T](this, placeId, k, index, data);
        }
        
        operationExclusive.unlock();
    }
    
    public def invokeRemoteWithNoReturn(key: Key,
                                        placeId: Int,
                                        method: (ArrayObject, Param1, Param2) => void, 
                                        param1: Any,
                                        param2: Any) {
        
        operationExclusive.lock();
        
        // val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
            // Local data, just invoke it directly
            invokeLocalWithNoReturn(method, param1, param2);
            
        } else {
            
            // Add to waiting list
            BigArrayQueueManager.addRemoteInvocation[T](this, 
                    placeId, 
                    key,  
                    method, 
                    param1, 
                    param2);
        }
        
        
        
        operationExclusive.unlock();
    }
    
    public static def sync(key: Key, shouldWait: Boolean) {
        
        // var waitTime: int = 500;
        Clock.advanceAll();
        // while (!BigArrayQueueManager.isDataReady(key)) {
            
            if (BigArrayQueueManager.enterGlobalJob()) {
                
                // Console.OUT.println("Enter global job: " + Runtime.workerId() + " Wait key: " + key);
                // BigArrayQueueManager.printWaitingList();
                
                // if (shouldWait) {
                //     
                //     // dumpDelay();
                // 	System.sleep(waitTime);
                // }
                
                BigArrayQueueManager.execute();
                BigArrayQueueManager.exitGlobalJob();
                // Runtime.probe();
                // System.sleep(3);
                
            } else {
                
                // Pause this activity and run other jobs in the queue
                // Console.OUT.println("Waiting, run another jobs: " + Runtime.workerId() + " Wait key: " + key);
                // Console.OUT.print(".");
                // Runtime.probe();
                // System.sleep(BigArrayQueueManager.waitRandom.nextInt(2));
                // dumpDelay();
                
            }
            Clock.advanceAll();

        // }
    }
    
    public def readAll(indices: Array[Index]): Any {
        
        val size = indices.size;
        val list = new ArrayList[T]();
        val placeDesc = localHandle().placeDescriptors(here.id);
        
        // Assume all index in the same place
        for (var i: Int = 0; i < size; ++i) {
            
            val localIndex = indices(i) - placeDesc.startIndex;
            
            // operationLock.lock();
            list.add(raw()(localIndex));
            // operationLock.unlock();
        }
        
        // Console.OUT.println("P(" + here.id + ") -> start at: " + placeDesc.startIndex);
        
        return list.toArray();
    }
    
    public def readOne(index: Index): Any {
        
        val placeDesc = localHandle().placeDescriptors(here.id);
        val localIndex = index - placeDesc.startIndex;
        
        return raw()(localIndex);
    }
    
    public def writeData(indices: Array[Index], data: Any) {
        
        val d = data as Array[T];
        val placeDesc = localHandle().placeDescriptors(here.id);
        
        for (var i: Int = 0; i < indices.size; ++i) {
            
            val localIndex = indices(i) - placeDesc.startIndex;
            
            raw()(localIndex) = d(i);
            // Console.OUT.println("Request write at " + indices(i) + " local: " + localIndex);
        }
    }
    
    /************************ DEBUG Methods *********************************/
    public def print() {

        finish {
            
            for (p in Place.places()) {
                
                at (p) {
                    
                    val IMC = raw();
                    val len = IMC.length();
                    
                    for (var i: Int =0; i < len; ++i) {
                        
                        val index = localHandle().placeDescriptors(here.id).startIndex + i;
                        Console.OUT.println(index + " => " + IMC(i));
                    }
                }
            }
        }
    }
}
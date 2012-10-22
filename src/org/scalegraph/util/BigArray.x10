package org.scalegraph.util;

import x10.util.*;
import x10.util.concurrent.Lock;

import org.scalegraph.util.KeyGenerator;
import org.scalegraph.util.Pending;
import org.scalegraph.util.LocalPending;
import org.scalegraph.util.BigArrayQueueManager;


public type Index = Long;

public final class BigArray[T] implements BigArrayOperation {
    
    private var size: Long;
    
    private val numPlaces: Int;
    
    private val dist: Dist;
    
    private val leftOver: Int;
    
    private val blockSize: Int;
    
    transient private val operationExclusive: Lock;
    
    private static val keyGenerator = new KeyGenerator();
    
    private def this(sz: long) {
        
        dist = Dist.makeUnique();
        size = sz;
        numPlaces = Place.MAX_PLACES;
        
        // Get space assigned to each place
        val placeDescriptors = new Rail[PlaceDescriptor](numPlaces);
        
        blockSize = (size / numPlaces) as Int;
        leftOver = (size % numPlaces) as Int;
        var startIndex: int = 0;
        
        for (var i: int = 0; i < numPlaces; ++i) {
            
            var len: int = blockSize;
            
            if (i == numPlaces -1) {
                len += leftOver;
            }
            
            placeDescriptors(i) = new PlaceDescriptor(startIndex, len, startIndex + len - 1);
            startIndex += len;
            
        }
        
        val pd = placeDescriptors;
        val init = ()=> {
            
            val storage = IndexedMemoryChunk.allocateZeroed[T]( pd(here.id).size );
            return new LocalState(storage, pd);
        };
        
        localHandle = PlaceLocalHandle.make[LocalState[T]](dist, init);
        
        operationExclusive = new Lock();
        
    }
    
    public static def make[T](sz: long): BigArray[T] {
        
        val b = new BigArray[T](sz);
        return b;
    }
    
    public static def make[T](sz: long, init: (Index) => T): BigArray[T] {
        
        val b = new BigArray[T](sz);
        b.initWithMethod(init);
        
        return b;
    }
    
    protected def initWithMethod(init:(Index) => T) {
        
        finish {
            for (p in Place.places()) {
                
                async at (p) {
                    
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
    
    protected val localHandle: PlaceLocalHandle[LocalState[T]];
    protected transient var isStoragePointerValid: boolean;
    protected transient var cachedStoragePointer: IndexedMemoryChunk[T]; 
    
    protected static class LocalState[T](IMC: IndexedMemoryChunk[T], placeDescriptors: Rail[PlaceDescriptor]) {
        
        public def this(IMC: IndexedMemoryChunk[T], placeDescriptors: Rail[PlaceDescriptor]) {
            
            property (IMC, placeDescriptors);
        }
    }
    
    static struct PlaceDescriptor(startIndex: Int, size: Int, endIndex: Int) {
        
        def this(startIndex: Int, size: Int, endIndex: Int) {
            
            property(startIndex, size, endIndex);
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
            
            throw new x10.lang.ArrayIndexOutOfBoundsException();
        }
        
        var placeId: Int = (index / blockSize) as Int;
        val pd = localHandle().placeDescriptors(placeId);
        val offset: Int = (index - pd.startIndex) as Int;
        val p = Place.places()(placeId);
        
       return  at(p) raw()(offset);
    }
    
    public operator this (index: Index) = (data: T) { setLocal(index, data);}
    
    
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
    
    protected def invokeLocalWithNoReturn(index: Index, method: (Any, Index, Any)=>void, param: Any) {
        
       //  val pd = localHandle().placeDescriptors(here.id);
       //  val offset = (index - pd.startIndex);
       // (offset);
        
        method(this, index, param);
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
            Console.OUT.println("Getlocal data: " + index);
            
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
    
    public def invokeRemoteWithNoReturn(key: Key, index: Index, method: (Any, Index, Any) => void, param: Any) {
        
        operationExclusive.lock();
        
        val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
            // Local data, just invoke it directly
            invokeLocalWithNoReturn(index, method, param);
            
        } else {
            
            // Add to waiting list
            BigArrayQueueManager.addRemoteInvocation[T](this, placeId, key, index,  method, param);
        }
        
        
        
        operationExclusive.unlock();
    }
    
    public static def synch(key: Key) {
        
        while (!BigArrayQueueManager.isDataReady(key)) {
            
            if (BigArrayQueueManager.enterGlobalJob()) {
                
                // First thread
                // Console.OUT.println("Enter global job: " + Runtime.workerId() + " Wait key: " + key);
                BigArrayQueueManager.printWaitingList();
                System.sleep(500);
                
                BigArrayQueueManager.execute();
                BigArrayQueueManager.exitGlobalJob();
                
                System.sleep(1);
                
            } else {
                
                // Pause this activity and run other jobs in the queue
                // Console.OUT.println("Waiting, run another jobs: " + Runtime.workerId() + " Wait key: " + key);
                // Console.OUT.print(".");
                Runtime.probe();
                // System.sleep(BigArrayQueueManager.waitRandom.nextInt(5));
            }
        }
    }
    
    public def readAll(indices: Array[Index]): Any {
        
        val size = indices.size;
        val list = new ArrayList[T]();
        val placeDesc = localHandle().placeDescriptors(here.id);
        
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
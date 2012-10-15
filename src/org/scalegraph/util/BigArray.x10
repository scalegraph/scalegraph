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
    
    // private var placeDescriptors: Rail[PlaceDescriptor];
    
    private val numPlaces: Int;
    
    private val dist: Dist;
    
    private val leftOver: Int;
    
    private val blockSize: Int;
    
    private static val keyGenerator = new KeyGenerator();
    
    // private var instanceWaitList: InstanceWaitList[T];
    
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
        
        // instanceWaitList = null;
    }
    
    private def init() {
        
        // instanceWaitList = new InstanceWaitList[T]();
        
        // Init global structure
        BigArrayQueueManager.init();
    }
    
    public static def make[T](sz: long): BigArray[T] {
        
        val b = new BigArray[T](sz);
        b.init();
        return b;
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
    
    protected def setPlaceDistriptorForAll() {
        
        for(var i: Int = 1; i < Place.MAX_PLACES; ++i) {
            
            val pd = localHandle().placeDescriptors;
            val p = i;
            async at(Place.place(p)) {
                
                
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
            
            throw new x10.lang.ArrayIndexOutOfBoundsException();
        }
        
        var placeId: Int = (index / blockSize) as Int;
        val pd = localHandle().placeDescriptors(placeId);
        val offset: Int = (index - pd.startIndex) as Int;
        val p = Place.places()(placeId);
        
       return  at(p) raw()(offset);
    }
    
    public operator this (index: Index) = (data: T) {
        raw()(index as Int) = data;
    }
    
    public final def isLocal(index: Index): Boolean {
        
        val pd = localHandle().placeDescriptors(here.id);
        return index >= pd.startIndex && index <= pd.endIndex;
    }
    
    protected def getLocal(index: Index): T {
        
        val pd = localHandle().placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        return raw()(offset);
    }
    
    protected def writeLocal(index: Index, data: T) {
        
        val pd = localHandle().placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        raw()(offset) = data;
    }
    
    public static def getKey(): Key {
        
        return keyGenerator.getKey();
    }
    
    public def getPlaceId(index: Index) = (index / blockSize) as Int;
   
    public def getAsync(k: Key, index: Index, wrap: Wrap[T]) {
        
        val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
           // Local data, just put it to wrapper
            wrap.value = getLocal(index);
            Console.OUT.println("Getlocal data: " + index);
            
        } else {
            
            // Add to local waiting list for monitoring
            // instanceWaitList.addWait(k, index);
            BigArrayQueueManager.addRead[T](this, placeId, k, index, wrap);
        }
    }
    
    public def writeAsync(k :Key, index: Index, data: T) {
        
        val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
            // Local data, just write it directly
            writeLocal(index, data);
            Console.OUT.println("Getlocal data: " + index);
            
        } else {
            
            // Add to local waiting list for monitoring
            // instanceWaitList.addWait(k, index);
            BigArrayQueueManager.addWrite[T](this, placeId, k, index, data);
        }
    }
    
    public static def synch(key: Key) {
        
        while (!BigArrayQueueManager.isDataReady(key)) {
            
            if (BigArrayQueueManager.enterGlobalJob()) {
                
                // First thread
                Console.OUT.println("Enter global job");
                BigArrayQueueManager.execute();
                BigArrayQueueManager.exitGlobalJob();
                
            } else {
                
                // Pause this activity and run other jobs in the queue
                Console.OUT.println("Waiting, run another jobs");
                Runtime.probe();
                System.sleep(1);
            }
        }
    }
    
    public def getData(indices: Array[Index]): Any {
        
        val size = indices.size;
        val list = new ArrayList[T]();
        val placeDesc = localHandle().placeDescriptors(here.id);
        
        for(var i: Int = 0; i < size; ++i) {
            val localIndex = indices(i) - placeDesc.startIndex;
            
            // operationLock.lock();
            list.add(localHandle().IMC(localIndex));
            // operationLock.unlock();
        }
        
        // Console.OUT.println("P(" + here.id + ") -> start at: " + placeDesc.startIndex);
        
        return list.toArray();
    }
}
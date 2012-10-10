package org.scalegraph.util;

import x10.util.*;
import org.scalegraph.util.GlobalWaitList;
import org.scalegraph.util.KeyGenerator;
import x10.util.concurrent.Lock;
import org.scalegraph.util.RemoteCopyable;
import org.scalegraph.util.ShareEntry;




public type Index = Long;

public final class BigArray[T] implements BigArrayOperation {
    
    private val size: Long;
    
    private val placeDescriptors: Array[PlaceDescriptor]; // valid only on place0
    
    private val numPlaces: Int;
    
    private val dist: Dist;
    
    private val leftOver: Int;
    
    private val blockSize: Int;
    
    private static val keyGenerator = new KeyGenerator();
    
    private var instanceWaitList: InstanceWaitList[T];
    
    private val operationLock: Lock;
    
    private def this(sz: long) {
        
        operationLock = new Lock();
        dist = Dist.makeUnique();
        size = sz;
        numPlaces = Place.MAX_PLACES;
        
        // Get space assigned to each place
        val tempPlaceDescriptors = new Array[PlaceDescriptor](numPlaces);
        placeDescriptors = tempPlaceDescriptors;
        
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
        
        // val initPd = ()=> {
        //     
        //     // val storage = IndexedMemoryChunk.allocateZeroed[PlaceDescriptor](Place.MAX_PLACES);
        //     return new LocalState(tempPlaceDescriptors.raw());
        // };
        // 
        // localPdHandle = PlaceLocalHandle.make[LocalState[PlaceDescriptor]](dist, initPd);
        
        val pd = placeDescriptors;
        val init = ()=> {
            
            val storage = IndexedMemoryChunk.allocateZeroed[T]( pd(here.id).size );
            return new LocalState(storage);
        };
        
        localHandle = PlaceLocalHandle.make[LocalState[T]](dist, init);
        
        // Init place descriptor for each place
        
        instanceWaitList = null;
    }
    
    private def init() {
        
        instanceWaitList = new InstanceWaitList[T]();
        
        // Init global structure
        GlobalWaitList.init();
    }
    
    public static def make[T](sz: long): BigArray[T] {
        
        val b = new BigArray[T](sz);
        b.init();
        return b;
    }
    
    // protected val localPdHandle: PlaceLocalHandle[LocalState[PlaceDescriptor]];
    
    protected val localHandle: PlaceLocalHandle[LocalState[T]];
    protected transient var isStoragePointerValid: boolean;
    protected transient var cachedStoragePointer: IndexedMemoryChunk[T]; 
    
    protected static class LocalState[T](data: IndexedMemoryChunk[T]) {
        
        public def this(c: IndexedMemoryChunk[T]) {
            
            property (c);
        }
    }
    
    protected static class PlaceDescriptor(startIndex: Int, size: Int, endIndex: Int) {
        
        def this(startIndex: Int, size: Int, endIndex: Int) {
            
            property(startIndex, size, endIndex);
            }
    }
    
    protected final def raw(): IndexedMemoryChunk[T] {
    
        if (!isStoragePointerValid) {
            
            cachedStoragePointer = localHandle().data;
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
        val pd = placeDescriptors(placeId);
        val offset: Int = (index - pd.startIndex) as Int;
        val p = Place.places()(placeId);
        
       return  at(p) raw()(offset);
    }
    
    public operator this (index: Index) = (data: T) {
        raw()(index as Int) = data;
    }
    
    public final def isLocal(index: Index): Boolean {
        
        val pd = placeDescriptors(here.id);
        return index >= pd.startIndex && index <= pd.endIndex;
    }
    
    public def getLocal(index: Index): T {
        
        val pd = placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        return raw()(offset);
    }
    
    public static def getKey(): Key {
        
        return keyGenerator.getKey();
    }
    
    public def getPlaceId(index: Index) = (index / blockSize) as Int;
   
    public def getAsync(k: Key, index: Index, wrap: Wrap[T]) {
        
        val placeId = getPlaceId(index);
        
        if (placeId == here.id) {
            
           // Local data, just put it
            wrap.value = getLocal(index);
            Console.OUT.println("Getlocal data: " + index);
            
        } else {
            
            // Add to local waiting list for monitoring
            instanceWaitList.addWait(k, index);
            GlobalWaitList.addWaitEntry[T](this, placeId, k, index, wrap);
        }
    }
    
    public static def wait(key: Key) {
        
        while (!GlobalWaitList.isDataReady(key)) {
            
            if (GlobalWaitList.enterGlobalJob()) {
                
                // First thread
                Console.OUT.println("Enter global job");
                GlobalWaitList.execute();
                GlobalWaitList.exitGlobalJob();
                
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
        // val placeDesc = localPdHandle().data(here.id);
        // 
        // for(var i: Int = 0; i < size; ++i) {
        //     val localIndex = indices(i) - placeDesc.startIndex;
        //     
        //     operationLock.lock();
        //     list.add(localHandle().data(localIndex));
        //     operationLock.unlock();
        // }
        
        return list.toArray();
    }
}
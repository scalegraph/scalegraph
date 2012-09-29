package org.scalegraph.util;

import x10.util.*;
import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import org.scalegraph.util.KeyGenerator;
import x10.util.concurrent.Lock;

// @NativeCPPInclude("BigArrayCore.h")
// @NativeCPPCompilationUnit("BigArrayCore.cc")
public final class BigArray[T] {
    
    private val size: Long;
    
    private val placeDescriptors: Rail[PlaceDescriptor];
    
    private val numPlaces: Int;
    
    private val dist: Dist;
    
    private val leftOver: Int;
    
    private val blockSize: Int;
    
    private static val keyGenerator = new KeyGenerator();
    
    private var instanceWaitList: InstanceWaitList[T];
    
    private def this(sz: long) {
        
        dist = Dist.makeUnique();
        size = sz;
        numPlaces = Place.MAX_PLACES;
        
        // Get space assigned to each place
        placeDescriptors = new Rail[PlaceDescriptor](numPlaces);
        
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
            return new LocalState(storage);
        };
        
        localHandle = PlaceLocalHandle.make[LocalState[T]](dist, init);
        
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
    
    protected val localHandle: PlaceLocalHandle[LocalState[T]];
    protected transient var isStoragePointerValid: boolean;
    protected transient var cachedStoragePointer: IndexedMemoryChunk[T]; 
    
    protected static class LocalState[T](data: IndexedMemoryChunk[T]) {
        
        public def this(c: IndexedMemoryChunk[T]) {
            
            property (c);
        }
    }
    
    private static struct PlaceDescriptor(startIndex: Int, size: Int, endIndex: Int) {
        
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
            for(p in Place.places()) {
                
                async at (p) {
                    val IMC = raw();
                    val len = IMC.length();
                    
                    for(var i: Int =0; i < len; ++i) {
                        IMC(i) = d;
                    }
                }
                
            }
        }
    }
    
    public operator this (index: Long) {
        
        if (index > this.size) {
            
            throw new x10.lang.ArrayIndexOutOfBoundsException();
        }
        
        var placeId: Int = (index / blockSize) as Int;
        val pd = placeDescriptors(placeId);
        val offset: Int = (index - pd.startIndex) as Int;
        val p = Place.places()(placeId);
       return  at(p) raw()(offset);
    }
    
    public final def isLocal(index: Long): Boolean {
        
        val pd = placeDescriptors(here.id);
        return index >= pd.startIndex && index <= pd.endIndex;
    }
    
    public def getLocal(index: Long): T {
        
        val pd = placeDescriptors(here.id);
        val offset = (index - pd.startIndex);
        
        return raw()(offset);
    }
    
    public static def getKey(): Key {
        
        return keyGenerator.getKey();
    }
    
    public def getPlaceId(index: Long) = (index / blockSize) as Int;
   
    public def getAsync(k: Key, index: Long, wrap: Wrap[T]) {
        
        val placeId = getPlaceId(index);
        if (placeId != here.id) {
            
           // Local data, just put it
            wrap.value = getLocal(index);
            
        } else {
            
            // Add to local waiting list for monitoring
            instanceWaitList.addWait(k, index);
            GlobalWaitList.addWaitEntry[T](this, placeId, k, index, wrap);
        }
    }
    
    protected final static class GlobalWaitEntry[V] {
        
        var obj: BigArray[V];
        var keys: List[Key];
        var indices: List[Long];
        var wraps: List[Wrap[V]];
        
        private def this() {}
        
        protected def add(key: Key, index: Long, wrap: Wrap[V]) {
            
            keys.add(key);
            indices.add(index);
            wraps.add(wrap);
        }
    }
    
    
    protected final static class GlobalWaitList {
        
        transient var placeQ: Array[HashMap[Object, Object]];
        
        transient static val singleton: GlobalWaitList = new GlobalWaitList();
        
        transient var isInit: Boolean = false;
        transient var initLock: Lock = new Lock();
        
        private def this() {
            
            placeQ =  new Array[HashMap[Object, Object]](Place.MAX_PLACES);
        }
        
        protected static def init() {
            
            singleton.initLock.lock();
            
            if(singleton.isInit == false) {
                
	            for (var i:int = 0; i < Place.MAX_PLACES; ++i) {
	                
	                singleton.placeQ(i) = new HashMap[Object, Object]();
	            }
	            
	            x10.util.concurrent.Fences.storeStoreBarrier();
	            singleton.isInit = true;
            }
            
            singleton.initLock.unlock();
        }
        
        protected static def addWaitEntry[X](obj: BigArray[X], placeId: Int, key: Key, index: Long,  wrap: Wrap[X]) {
            
            Console.OUT.println("Pending Add Global Async");
            
            val Q = singleton.placeQ(placeId);
            val temp = Q.getOrElse(obj, null);
            var waitEntry: GlobalWaitEntry[X];
            Console.OUT.println("Get Obj");
            // if (temp == null) {
            //     
            //     waitEntry = new GlobalWaitEntry[X]();
            //     Q.put(obj, waitEntry);
            // } else {
            //     waitEntry = temp as GlobalWaitEntry[X];
            // }
            // 
            // Console.OUT.println("Before add entry");
            // waitEntry.add(key, index, wrap);
        }
    }
    
    
    protected final static class InstanceWaitEntry[U] {
        
        var key: Key;
        var indices: ArrayList[Long] = new ArrayList[Long]();
    }
    
    protected final static class InstanceWaitList[U] {
        
        var waitList: HashMap[Key, InstanceWaitEntry[U]] = new HashMap[Key, InstanceWaitEntry[U]]();
        
        public def addWait(k: Key, index: Long) {
            
            var entry: InstanceWaitEntry[U] = waitList.getOrElse(k, null);
            
            if (entry == null) {
                entry = new InstanceWaitEntry[U]();
                entry.key = k;
                waitList.put(k, entry);
            } 
            
            entry.indices.add(index);
            
            Console.OUT.println("Add Local Async");
        }
;    }
}
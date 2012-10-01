package org.scalegraph.util;

import x10.util.*;
import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import org.scalegraph.util.KeyGenerator;
import x10.util.concurrent.Lock;
import x10.compiler.ByRef;

public type Index = Long;

public final class BigArray[T] implements BigArrayOperation {
    
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
    
    public def wait(key: Key) {
        
        while (!instanceWaitList.isDataReady(key)) {
            
            if (GlobalWaitList.enterGlobalJob()) {
                
                // First thread
                GlobalWaitList.execute();
                GlobalWaitList.exitGlobalJob();
                
            } else {
                
                // Pause this activity and run other jobs in the queue
                Runtime.probe();
            }
        }
    }
    
    @ByRef
    protected static struct SendEnvelope(hash: Int, obj: BigArrayOperation, indices: Array[Index]) {
        
        public def this(hash: Int, obj: BigArrayOperation, indices: Array[Index]) {
            property(hash, obj, indices);
        }
        
    }
    
    
    protected static interface RemoteCopyable {
        
        def createSenedEnvelope(ArrayList[SendEnvelope]): void;
    }
    
    
    protected final static class GlobalWaitEntry[V] implements RemoteCopyable {
        
        var obj: BigArray[V];
        var keys: ArrayList[Key];
        var indices: ArrayList[Index];
        var wraps: ArrayList[Wrap[V]];
        
        protected def this(o: BigArray[V]) {
            
            this.obj = o;
            keys = new ArrayList[Key]();
            indices = new ArrayList[Long]();
            wraps = new ArrayList[Wrap[V]]();
        }
        
        protected def add(key: Key, index: Index, wrap: Wrap[V]) {
            
            keys.add(key);
            indices.add(index);
            wraps.add(wrap);
        }
        
         public def createSenedEnvelope(list: ArrayList[SendEnvelope]) {
             
             val sendEnvelope = new SendEnvelope(obj.hashCode(), obj, indices.toArray());
             list.add(sendEnvelope);
        }
    }
    
    
    protected final static class GlobalWaitList {
        
        transient var processQ: Array[HashMap[Object, RemoteCopyable]];
        transient var bufferQ: Array[HashMap[Object, RemoteCopyable]];
        transient var qLock: Lock;
        
        transient static val singleton: GlobalWaitList = new GlobalWaitList();
        
        transient var isInit: Boolean;
        transient val initLock: Lock;
        transient var mainJobLock: Lock;
        
        private def this() {
            
            processQ =  new Array[HashMap[Object, RemoteCopyable]](Place.MAX_PLACES);
            bufferQ =  new Array[HashMap[Object, RemoteCopyable]](Place.MAX_PLACES);
            initLock = new Lock();
            mainJobLock = new Lock();
            qLock = new Lock();
            isInit = false;
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
            var waitEntry: GlobalWaitEntry[X];
            
            if (temp == null) {
                
                waitEntry = new GlobalWaitEntry[X](obj);
                Q.put(obj, waitEntry);
                
            } else {
                
                waitEntry = temp as GlobalWaitEntry[X];
            }
            
            waitEntry.add(key, index, wrap);
        }
        
        protected static def enterGlobalJob(): Boolean {
            
            return singleton.mainJobLock.tryLock();
        }
        
        protected static def exitGlobalJob(): void {
            
            singleton.mainJobLock.unlock();
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
            // finish {
            //     
            //     for (var i: int = 0; i < Place.MAX_PLACES; ++i) {
            //         
            //         async {
            //             
            //             
            //         }
            //     }
            //     
            // }
        }
    }
    
    
    protected final static class InstanceWaitEntry[U] {
        
        var key: Key;
        var indices: ArrayList[Long] = new ArrayList[Long]();
    }
    
    protected final static class InstanceWaitList[U] {
        
        transient var waitList: HashMap[Key, InstanceWaitEntry[U]] = new HashMap[Key, InstanceWaitEntry[U]]();
        transient var internalLock: Lock = new Lock();
        
        public def addWait(k: Key, index: Index) {
            
            internalLock.lock();
            
            var entry: InstanceWaitEntry[U] = waitList.getOrElse(k, null);
            
            if (entry == null) {
                entry = new InstanceWaitEntry[U]();
                entry.key = k;
                waitList.put(k, entry);
            } 
            
            entry.indices.add(index);
            
            internalLock.unlock();
        }
        
        public def isDataReady(key: Key): Boolean {
            
            internalLock.lock();
            val obj = waitList.getOrElse(key, null);
            internalLock.unlock();
            
            // All data is local, no waiting entry
            if(obj == null) {
                return true;
            }
            
            if(obj.indices.size() == 0) {
                
                internalLock.lock();
                
                waitList.remove(key);
                
                internalLock.unlock();
                
                return true;
            }
            
            return false;
        }
        
        public def removeKey(key: Key): void {
            
            internalLock.lock();
            waitList.remove(key);
            internalLock.unlock();
        }
;    }
}
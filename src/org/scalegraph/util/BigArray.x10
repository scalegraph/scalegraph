package org.scalegraph.util;

import x10.util.IndexedMemoryChunk;

public class BigArray[T] {
    
    // private def this() {}
    
    private val size: Long;
    
    private val placeDescriptors: Rail[PlaceDescriptor];
    
    private val numPlaces: Int;
    
    private val dist: Dist;
    
    private val leftOver: Int;
    
    private val blockSize: Int;
    
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
            
            placeDescriptors(i) = new PlaceDescriptor(startIndex, len);
            startIndex += len;
            
        }
        
        
        val pd = placeDescriptors;
        val init = ()=> {
            
            val storage = IndexedMemoryChunk.allocateZeroed[T]( pd(here.id).size );
            return new LocalState(storage);
        };
        
        localHandle = PlaceLocalHandle.make[LocalState[T]](dist, init);
    }
    
    public static def make[T](sz: long): BigArray[T] {
        
        val b = new BigArray[T](sz);
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
    
    private static struct PlaceDescriptor(startIndex: Int, size: Int) {
        def this(startIndex: Int, size: Int) {
            
            property(startIndex, size);
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
}
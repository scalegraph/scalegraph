package org.scalegraph.util;
import x10.util.IndexedMemoryChunk;
import x10.compiler.Inline;

public struct LongIndexedMemoryChunk[T] {
	private static debug = true;
	public backing: IndexedMemoryChunk[T];
	private n: Long;

    public def this(n: Long) {
    	this.backing = IndexedMemoryChunk.allocateUninitialized[T](n);
    	this.n = n;
    }
    
    public def this(backing: IndexedMemoryChunk[T]) {
    	this.backing = backing;
    	this.n = backing.length();
    }
    
    public @Inline def length() = n;
    
    public @Inline def size() = n;
    
    public @Inline def clear() { backing.clear(0L, n); }
    
    public @Inline def clear(index: Long, numElems: Long) { backing.clear(index, numElems); }
    
    public @Inline operator this(i:Long)=(v:T):T {
    	assert (i >= 0 && i < n);
    	backing.set_unsafe(v, i);
    	return v;
    }
    
    public @Inline operator this(i: Long): T {
    	assert (i >= 0 && i < n);
    	return backing.apply_unsafe(i);
    }
}

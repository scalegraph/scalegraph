package org.scalegraph.io;

import x10.util.ArrayList;

import org.scalegraph.util.DistMemoryChunk;
import x10.util.NoSuchElementException;

public class NamedDistData {
	val name :ArrayList[String] = new ArrayList[String]();
	val data :ArrayList[Any] = new ArrayList[Any]();
	var datatype :Byte;
	var header :Any;
	
	public def setHeader(md :Any) {
		datatype =
			(md instanceof GraphHeader) ? ID.TYPE_GRAPH :
			(md instanceof MatrixHeader) ? ID.TYPE_MATRIX :
			(md instanceof VectorHeader) ? ID.TYPE_VECTOR :
			ID.TYPE_ANY;
		header = md;
	}
	public def header() = header;
	public def datatype() = datatype;
	
	public def getOrThrow(k :String) throws NoSuchElementException :Any {
		val i = index(k);
		if(i == -1) throw new NoSuchElementException("Not found: " + k);
		return data(i);
	}
	public def getOrThrow[T](k :String) throws NoSuchElementException :DistMemoryChunk[T] {
		val i = index(k);
		if(i == -1) throw new NoSuchElementException("Not found: " + k);
		return data(i) as DistMemoryChunk[T];
	}
	public def getOrElse(k :String, orelse :Any) :Any {
		val i = index(k);
		if(i == -1) return orelse;
		return data(i);
	}
	public def getOrElse[T](k :String, orelse :DistMemoryChunk[T]) :DistMemoryChunk[T] {
		val i = index(k);
		if(i == -1) return orelse;
		return data(i) as DistMemoryChunk[T];
	}
	
	public def put[T](k: String, v: DistMemoryChunk[T]) {
		if(containsKey(k)) throw new IllegalOperationException();
		this.name.add(k);
		this.data.add(v);
	}
	public def clear():void {
		name.clear();
		data.clear();
	}
	public def keys():Array[String] = name.toArray();
	public def containsKey(k :String) = (index(k) != -1);
	
	private def index(k :String) :Int {
		for(i in 0..(this.name.size()-1)) {
			if(name.equals(this.name(i)))
				return i;
		}
		return -1;
	}
}

package org.scalegraph.io;

import x10.util.ArrayList;

import org.scalegraph.util.DistMemoryChunk;
import x10.util.NoSuchElementException;
import org.scalegraph.util.tuple.Tuple2;

public class NamedDistData {
	val name :Array[String](1);
	val typeId :Array[Int](1);
	val data :Array[Any](1);
	var datatype :Byte;
	var header :Any;
	
	private static def createTypeId(data :Array[Any](1)) {
		val typeId = new Array[Int](data.size);
		for([i] in data) {
			typeId(i) = ID.typeId(data(i));
		}
		return typeId;
	}
	
	public def this(name_ :Array[String](1), data_ :Array[Any](1), header_ :Any) {
		this(name_, createTypeId(data_), data_, header_);
	}
	
	public def this(name_ :Array[String](1), typeId_ :Array[Int](1), data_ :Array[Any](1), header_ :Any) {
		this.name = name_;
		this.typeId = typeId_;
		this.data = data_;
		this.header = header_;
		this.datatype =
			(header_ instanceof GraphHeader) ? ID.TYPE_GRAPH :
			(header_ instanceof MatrixHeader) ? ID.TYPE_MATRIX :
			(header_ instanceof VectorHeader) ? ID.TYPE_VECTOR :
			ID.TYPE_ANY;
		
		// check
		if(name.size != typeId.size || name.size != data.size)
			throw new IllegalArgumentException("Check the array length!");
		for([i] in name) {
			if(!ID.checkType(data(i), typeId(i)))
				throw new IllegalArgumentException("Type ID is not match to the actual data type.");
		}
	}

	public def size() = name.size;
	public def name() = name;
	public def data() = data;
	public def typeId() = typeId;
	public def header() = header;
	public def datatype() = datatype;
}

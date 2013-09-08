/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.io;

import x10.util.ArrayList;

import org.scalegraph.util.DistMemoryChunk;
import x10.util.NoSuchElementException;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.SString;
import org.scalegraph.id.Type;

public class NamedDistData {
	val name :Array[String](1);
	val typeId :Array[Int](1);
	val data :Array[Any](1);
	var datatype :Byte;
	var header :Any;
	
	private static def createTypeId(data :Array[Any](1)) {
		val typeId = new Array[Int](data.size);
		for([i] in data) {
			typeId(i) = Type.typeId(data(i));
		}
		return typeId;
	}
	
	private static def createName(data :Array[Any](1)) {
		val name = new Array[String](data.size);
		for([i] in data) {
			name(i) = String.format("column-%d", [i as Any]);
		}
		return name;
	}

	public def this(data_ :Array[Any](1)) {
		this(null, null, data_, null);
	}
	
	public def this(name_ :Array[String](1), data_ :Array[Any](1)) {
		this(name_, null, data_, null);
	}
	
	public def this(name_ :Array[String](1), data_ :Array[Any](1), header_ :Any) {
		this(name_, null, data_, header_);
	}
	
	public def this(var name_ :Array[String](1), var typeId_ :Array[Int](1), data_ :Array[Any](1), header_ :Any) {
		if(data_ == null) {
			throw new IllegalArgumentException("data may not be null");
		}
		if(name_ == null) {
			name_ = createName(data_);
		}
		if(typeId_ == null) {
			typeId_ = createTypeId(data_);
		}
		
		this.name = name_;
		this.typeId = typeId_;
		this.data = data_;
		this.header = header_;
		this.datatype =
			(header_ == null) ? ID.HEADER_NONE :
			(header_ instanceof GraphHeader) ? ID.HEADER_GRAPH :
			(header_ instanceof MatrixHeader) ? ID.HEADER_MATRIX :
			(header_ instanceof VectorHeader) ? ID.HEADER_VECTOR :
			ID.HEADER_ANY;
		
		// check
		if(name.size != typeId.size || name.size != data.size)
			throw new IllegalArgumentException("Check the array length!");
		for([i] in name) {
			if(!Type.checkType(data(i), typeId(i)))
				throw new IllegalArgumentException("Type ID is not match to the actual data type.");
		}
	}
	
	public def nameToIndex(name_ :SString) {
		for([i] in name) {
			if(name_.equals(name(i))) {
				return i;
			}
		}
		throw new IllegalArgumentException("Specified name does not exist");
	}
	
	public def get[T](name_ :SString) = get[T](nameToIndex(name_));
	
	public def get[T](index :Int) {
		val data_ = data(index);
		if(data_ instanceof DistMemoryChunk[T]) {
			return data_ as DistMemoryChunk[T];
		}
		throw new IllegalArgumentException("Type not match: " + data_.typeName());
	}

	public def size() = name.size;
	public def name() = name;
	public def data() = data;
	public def typeId() = typeId;
	public def header() = header;
	public def datatype() = datatype;
}

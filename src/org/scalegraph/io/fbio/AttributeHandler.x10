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

package org.scalegraph.io.fbio;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPCompilationUnit;

import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.io.ID;
import org.scalegraph.io.NativeFile;

public abstract class AttributeHandler {
	
	public val team : Team;
	public val id : Int;
	
	public def this(team : Team, id : Int) {
		this.team = team;
		this.id = id;
	}
	
	public abstract def allocate(localSize : (Int) => Long) : Any;
	public abstract def typeId() : Int;
	public abstract def numElements(dmc : Any) : Long;
	public def numBytes(dmc :Any) = numBytes(dmc, 0, numElements(dmc));
	public abstract def numBytes(dmc : Any, offset : Long, num : Long) : Long;
	public abstract def read(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) :void;
	public abstract def write(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) :void;

	public abstract def print(dmc : Any) : void;
	
	public static def make(team : Team, id_ : Int) : AttributeHandler {
		val isArray = (id_ & 0xFF) == 1;
		val id = id_ >> 8;
		switch(id) {
		case ID.TYPE_BOOLEAN:
			return new PrimitiveAttributeHandler[Boolean](team, id);
		case ID.TYPE_BYTE:
			return new PrimitiveAttributeHandler[Byte](team, id);
		case ID.TYPE_SHORT:
			return new PrimitiveAttributeHandler[Short](team, id);
		case ID.TYPE_INT:
			return new PrimitiveAttributeHandler[Int](team, id);
		case ID.TYPE_LONG:
			return new PrimitiveAttributeHandler[Long](team, id);
		case ID.TYPE_FLOAT:
			return new PrimitiveAttributeHandler[Float](team, id);
		case ID.TYPE_DOUBLE:
			return new PrimitiveAttributeHandler[Double](team, id);
		case ID.TYPE_UBYTE:
			return new PrimitiveAttributeHandler[UByte](team, id);
		case ID.TYPE_USHORT:
			return new PrimitiveAttributeHandler[UShort](team, id);
		case ID.TYPE_UINT:
			return new PrimitiveAttributeHandler[UInt](team, id);
		case ID.TYPE_ULONG:
			return new PrimitiveAttributeHandler[ULong](team, id);
		case ID.TYPE_CHAR:
			return new PrimitiveAttributeHandler[Char](team, id);
		case ID.TYPE_STRING:
			return new StringAttributeHandler(team, id);
		default:
			throw new Exception("invalid type id : " + id);
		}
	}
}

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("fbio_fmt.h")
@NativeCPPCompilationUnit("NativeSupport.cc") 
class PrimitiveAttributeHandler[T] extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	public def allocate(localSize :(Int)=>Long) = DistMemoryChunk.make[T, Long](
				team.placeGroup(), localSize, (ls :Long) => new MemoryChunk[T](ls));
	public def typeId() = (id << 8);
	public def numElements(any : Any) = (any as DistMemoryChunk[T])().size();
	
	@Native("c++", "sizeof(TPMGL(T))")
	private native def sizeofT() :Int;
	public def numBytes(any : Any, offset : Long, num : Long) = (num * sizeofT());
	
	@Native("c++", "org::scalegraph::io::fbio::readPrimitives<TPMGL(T) >(#nf, (#dst).pointer(), #numElements, #numBytes)")
	private native def nativeRead(nf :NativeFile, dst :MemoryChunk[T], numElements :Long, numBytes :Long) :void;
	@Native("c++", "org::scalegraph::io::fbio::writePrimitives<TPMGL(T) >(#nf, (#dst).pointer(), #numElements, #numBytes)")
	private native def nativeWrite(nf :NativeFile, dst :MemoryChunk[T], numElements :Long, numBytes :Long) :void;
	
	public def read(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[T])().subpart(array_offset, numElements);
		nativeRead(nf, array_, numElements, numBytes);
	}
	public def write(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[T])().subpart(array_offset, numElements);
		nativeWrite(nf, array_, numElements, numBytes);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[T];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc() + " ");
		}
		Console.OUT.println("");
	}
}

@NativeCPPInclude("NativeSupport.h")
@NativeCPPOutputFile("fbio_fmt.h")
@NativeCPPCompilationUnit("NativeSupport.cc") 
class StringAttributeHandler extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	public def allocate(localSize :(Int)=>Long) = DistMemoryChunk.make[String, Long](
				team.placeGroup(), localSize, (ls :Long) => new MemoryChunk[String](ls));
	public def typeId() = (id << 8);	
	public def numElements(any : Any) = (any as DistMemoryChunk[String])().size();
	
	public def numBytes(any : Any, offset : Long, num : Long) : Long {
		val mc = (any as DistMemoryChunk[String])();
		var sum : Long = 0L;
		for(i in offset..(offset+num-1)) {
			sum += 4 + FBIOSupport.align(mc(i).length(), 4);
		}
		return sum;
	}

	@Native("c++", "org::scalegraph::io::fbio::readStrings(#nf, (#dst).pointer(), #numElements, #numBytes)")
	private native def nativeRead(nf :NativeFile, dst :MemoryChunk[String], numElements :Long, numBytes :Long) :void;
	@Native("c++", "org::scalegraph::io::fbio::writeStrings(#nf, (#dst).pointer(), #numElements, #numBytes)")
	private native def nativeWrite(nf :NativeFile, dst :MemoryChunk[String], numElements :Long, numBytes :Long) :void;
	
	public def read(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[String])().subpart(array_offset, numElements);
		nativeRead(nf, array_, numElements, numBytes);
	}
	public def write(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[String])().subpart(array_offset, numElements);
		nativeWrite(nf, array_, numElements, numBytes);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[String];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc().toArray() + " ");
		}
		Console.OUT.println("");
	}
}


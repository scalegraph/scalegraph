package org.scalegraph.io.fbio;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.io.ID;
import org.scalegraph.io.NativeFile;
import org.scalegraph.io.NamedDistData;

public abstract class AttributeHandler {
	
	public val team : Team;
	public val id : Int;
	
	public def this(team : Team, id : Int) {
		this.team = team;
		this.id = id;
	}
	
	public abstract def create(localSize : (Int) => Long) : Any;
	
	public abstract def getId() : Int;
	
	public abstract def numElems(dmc : Any) : Long;
	
	public abstract def localNumElems(dmc : Any) : Long;
	
	public abstract def sizeOfElem(dmc : Any, i : Long) : Long;
	
	public abstract def sizeOfElems(dmc : Any, offset : Long, num : Long) : Long;
	
	public abstract def localSize(dmc : Any, offset : Long, num : Long) : Long;

	public abstract def read(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) :void;
	
	public abstract def write(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) :void;
	
	public abstract def putResult(res :NamedDistData, k :String, array :Any) :void;
	
	public abstract def print(dmc : Any) : void;
	
	public static def makeFromId(team : Team, id_ : Int) : AttributeHandler {
		val isArray = (id_ & 0xFF) == 1;
		val id = id_ >> 8;
		if(id == ID.ATTR_BOOLEAN) {
			return new PrimitiveAttributeHandler[Boolean](team, id);
		} else if(id == ID.ATTR_BYTE) {
			return new PrimitiveAttributeHandler[Byte](team, id);
		} else if(id == ID.ATTR_SHORT) {
			return new PrimitiveAttributeHandler[Short](team, id);
		} else if(id == ID.ATTR_INT) {
			return new PrimitiveAttributeHandler[Int](team, id);
		} else if(id == ID.ATTR_LONG) {
			return new PrimitiveAttributeHandler[Long](team, id);
		} else if(id == ID.ATTR_FLOAT) {
			return new PrimitiveAttributeHandler[Float](team, id);
		} else if(id == ID.ATTR_DOUBLE) {
			return new PrimitiveAttributeHandler[Double](team, id);
		} else if(id == ID.ATTR_UBYTE) {
			return new PrimitiveAttributeHandler[UByte](team, id);
		} else if(id == ID.ATTR_USHORT) {
			return new PrimitiveAttributeHandler[UShort](team, id);
		} else if(id == ID.ATTR_UINT) {
			return new PrimitiveAttributeHandler[UInt](team, id);
		} else if(id == ID.ATTR_ULONG) {
			return new PrimitiveAttributeHandler[ULong](team, id);
		} else if(id == ID.ATTR_CHAR) {
			return new PrimitiveAttributeHandler[Char](team, id);
		} else if(id == ID.ATTR_STRING) {
			return new StringAttributeHandler(team, id);
		} else {
			throw new Exception("invalid type id : " + id);
//			return null;
		}
	}
	
	public static def makeFromAny(team : Team, dmc : Any) : AttributeHandler {
		if(dmc instanceof DistMemoryChunk[Boolean]) {
			return new PrimitiveAttributeHandler[Boolean](team, ID.ATTR_BOOLEAN);
		} else if(dmc instanceof DistMemoryChunk[Byte]) {
			return new PrimitiveAttributeHandler[Byte](team, ID.ATTR_BYTE);
		} else if(dmc instanceof DistMemoryChunk[Short]) {
			return new PrimitiveAttributeHandler[Short](team, ID.ATTR_SHORT);
		} else if(dmc instanceof DistMemoryChunk[Int]) {
			return new PrimitiveAttributeHandler[Int](team, ID.ATTR_INT);
		} else if(dmc instanceof DistMemoryChunk[Long]) {
			return new PrimitiveAttributeHandler[Long](team, ID.ATTR_LONG);
		} else if(dmc instanceof DistMemoryChunk[Float]) {
			return new PrimitiveAttributeHandler[Float](team, ID.ATTR_FLOAT);
		} else if(dmc instanceof DistMemoryChunk[Double]) {
			return new PrimitiveAttributeHandler[Double](team, ID.ATTR_DOUBLE);
		} else if(dmc instanceof DistMemoryChunk[UByte]) {
			return new PrimitiveAttributeHandler[UByte](team, ID.ATTR_UBYTE);
		} else if(dmc instanceof DistMemoryChunk[UShort]) {
			return new PrimitiveAttributeHandler[UShort](team, ID.ATTR_USHORT);
		} else if(dmc instanceof DistMemoryChunk[UInt]) {
			return new PrimitiveAttributeHandler[UInt](team, ID.ATTR_UINT);
		} else if(dmc instanceof DistMemoryChunk[ULong]) {
			return new PrimitiveAttributeHandler[ULong](team, ID.ATTR_ULONG);
		} else if(dmc instanceof DistMemoryChunk[Char]) {
			return new PrimitiveAttributeHandler[Char](team, ID.ATTR_CHAR);
		} else if(dmc instanceof DistMemoryChunk[String]) {
			return new StringAttributeHandler(team, ID.ATTR_STRING);
		} else {
			throw new Exception("invalid data type");
//			return null;
		}
	}
}


@NativeCPPInclude("NativeSupport.h")
class PrimitiveAttributeHandler[T] extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	
	public def create(localSize : (Int) => Long) : Any {
		return DistMemoryChunk.make[T, Long](
				team.placeGroup(), localSize, (ls :Long) => new MemoryChunk[T](ls));
	}
	
	public def getId() : Int {
		return id << 8;
	}
	
	public def numElems(any : Any) : Long {
		val dmc = any as DistMemoryChunk[T];
		var sum : Long = 0L;
		for(var i:Int = 0; i < team.size(); i++) {
			sum += at(team.places()(i)) dmc().size();
		}
		return sum;
	}
	
	public def localNumElems(any : Any) : Long {
		val dmc = any as DistMemoryChunk[T];
		return dmc().size();
	}
	
	public def sizeOfElem(any : Any, i : Long) : Long {
		var size : Int = 0;
		@Native("c++", "size = sizeof(TPMGL(T));") {}
		return size;
	}
	
	public def sizeOfElems(any : Any, offset : Long, num : Long) : Long {
		var size : Int = 0;
		@Native("c++", "size = sizeof(TPMGL(T));") {}
		return size * num;
	}
	
	public def localSize(any : Any, offset : Long, num : Long) : Long {
		var size : Int = 0;
		@Native("c++", "size = sizeof(TPMGL(T));") {}
		return num * size;
	}
	
	@Native("c++", "org::scalegraph::io::fbio::readPrimitives<#T >(#nf, #dst, #numElements, #numBytes)")
	private native def nativeRead(nf :NativeFile, dst :MemoryPointer[T], numElements :Long, numBytes :Long) :void;
	@Native("c++", "org::scalegraph::io::fbio::writePrimitives<#T >(#nf, #dst, #numElements, #numBytes)")
	private native def nativeWrite(nf :NativeFile, dst :MemoryPointer[T], numElements :Long, numBytes :Long) :void;
	
	public def read(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[T])().subpart(array_offset, numElements);
		nativeRead(nf, array_.pointer(), numElements, numBytes);
	}
	public def write(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[T])().subpart(array_offset, numElements);
		nativeWrite(nf, array_.pointer(), numElements, numBytes);
	}
	public def putResult(res :NamedDistData, k :String, array :Any) {
		res.put(k, array as DistMemoryChunk[T]);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[T];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc().toArray() + " ");
		}
		Console.OUT.println("");
	}
}

@NativeCPPInclude("NativeSupport.h")
class StringAttributeHandler extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	
	public def create(localSize : (Int) => Long) : Any {
		return DistMemoryChunk.make[String, Long](
				team.placeGroup(), localSize, (ls :Long) => new MemoryChunk[String](ls));
	}
	
	public def getId() : Int {
		return id << 8;
	}
	
	public def numElems(any : Any) : Long {
		val dmc = any as DistMemoryChunk[String];
		var sum : Long = 0L;
		for(var i:Int = 0; i < team.size(); i++) {
			sum += at(team.places()(i)) dmc().size();
		}
		return sum;
	}
	
	public def localNumElems(any : Any) : Long {
		val dmc = any as DistMemoryChunk[String];
		return dmc().size();
	}
	
	public def sizeOfElem(any : Any, i : Long) : Long {
		val dmc = any as DistMemoryChunk[String];
		return 4 + dmc()(i).length();
	}
	
	public def sizeOfElems(any : Any, offset : Long, num : Long) : Long {
		val dmc = any as DistMemoryChunk[String];
		var size:Long = 0L;
		for(var i:Long = offset; i < offset + num; i++) {
			size = Common.align(size, 4);
			size += 4 + dmc()(i).length();
		}
		return size;
	}
	
	public def localSize(any : Any, offset : Long, num : Long) : Long {
		val dmc = any as DistMemoryChunk[String];
		var sum : Long = 0L;
		for(var i:Long = offset; i < offset + num; i++) {
			sum += dmc()(i).length();
		}
		return sum;
	}

	@Native("c++", "org::scalegraph::io::fbio::readStrings(#nf, #dst, #numElements, #numBytes)")
	private native def nativeRead(nf :NativeFile, dst :MemoryPointer[String], numElements :Long, numBytes :Long) :void;
	@Native("c++", "org::scalegraph::io::fbio::writeStrings(#nf, #dst, #numElements, #numBytes)")
	private native def nativeWrite(nf :NativeFile, dst :MemoryPointer[String], numElements :Long, numBytes :Long) :void;
	
	public def read(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[String])().subpart(array_offset, numElements);
		nativeRead(nf, array_.pointer(), numElements, numBytes);
	}
	public def write(nf :NativeFile, array : Any, array_offset : Long, numElements :Long, numBytes :Long) {
		val array_ = (array as DistMemoryChunk[String])().subpart(array_offset, numElements);
		nativeWrite(nf, array_.pointer(), numElements, numBytes);
	}
	public def putResult(res :NamedDistData, k :String, array :Any) {
		res.put(k, array as DistMemoryChunk[String]);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[String];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc().toArray() + " ");
		}
		Console.OUT.println("");
	}
}


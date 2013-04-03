package org.scalegraph.io;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;


@NativeCPPInclude("NativeReader.h")
@NativeCPPInclude("NativeWriter.h")
public abstract class AttributeHandler {
	
	public val team : Team;
	public val id : Int;
	
	public def this(team : Team, id : Int) {
		this.team = team;
		this.id = id;
	}
	
	public abstract def create(localSize : () => Long) : Any;
	
	public abstract def getId() : Int;
	
	public abstract def numElems(dmc : Any) : Long;
	
	public abstract def localNumElems(dmc : Any) : Long;
	
	public abstract def sizeOfElem(dmc : Any, i : Long) : Long;
	
	public abstract def sizeOfElems(dmc : Any, offset : Long, num : Long) : Long;
	
	public abstract def localSize(dmc : Any, offset : Long, num : Long) : Long;
	
	public abstract def read(nr : NativeReader, array : Any, array_offset : Long, data : MemoryPointer[Byte], num : Long) : Long;
	
	public abstract def write(nw : NativeWriter, array : Any, array_offset : Long, data_offset : Long, num : Long) : Long;
	
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


@NativeCPPInclude("NativeReader.h")
@NativeCPPInclude("NativeWriter.h")
class PrimitiveAttributeHandler[T] extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	
	public def create(localSize : () => Long) : Any {
		return new DistMemoryChunk[T](team.placeGroup(), () => new MemoryChunk[T](localSize()));
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
	
	public def read(nr : NativeReader, any : Any, array_offset : Long, data : MemoryPointer[Byte], num : Long) : Long {
		val array = (any as DistMemoryChunk[T])().subpart(array_offset, num);
		return nr.readAttribute[T](array, data, num);
	}
	
	public def write(nw : NativeWriter, any : Any, array_offset : Long, data_offset : Long, num : Long) : Long {
		val array = (any as DistMemoryChunk[T])().subpart(array_offset, num);
		return nw.writeAttribute[T](array, data_offset, num);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[T];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc().toArray() + " ");
		}
		Console.OUT.println("");
	}
}


@NativeCPPInclude("NativeReader.h")
@NativeCPPInclude("NativeWriter.h")
class CharAttributeHandler extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	
	public def create(localSize : () => Long) : Any {
		return new DistMemoryChunk[Char](team.placeGroup(), () => new MemoryChunk[Char](localSize()));
	}
	
	public def getId() : Int {
		return id << 8;
	}
	
	public def numElems(any : Any) : Long {
		val dmc = any as DistMemoryChunk[Char];
		var sum : Long = 0L;
		for(var i:Int = 0; i < team.size(); i++) {
			sum += at(team.places()(i)) dmc().size();
		}
		return sum;
	}
	
	public def localNumElems(any : Any) : Long {
		val dmc = any as DistMemoryChunk[Char];
		return dmc().size();
	}
	
	public def sizeOfElem(any : Any, i : Long) : Long {
		var size : Int = 0;
		@Native("c++", "size = sizeof(char);") {}
		return size;
	}
	
	public def sizeOfElems(any : Any, offset : Long, num : Long) : Long {
		var size : Int = 0;
		@Native("c++", "size = sizeof(char);") {}
		return size * num;
	}
	
	public def localSize(any : Any, offset : Long, num : Long) : Long {
		var size : Int = 0;
		@Native("c++", "size = sizeof(char);") {}
		return num * size;
	}
	
	public def read(nr : NativeReader, any : Any, array_offset : Long, data : MemoryPointer[Byte], num : Long) : Long {
		val array = (any as DistMemoryChunk[Char])().subpart(array_offset, num);
		return nr.readCharAttribute(array, data, num);
	}
	
	public def write(nw : NativeWriter, any : Any, array_offset : Long, data_offset : Long, num : Long) : Long {
		val array = (any as DistMemoryChunk[Char])().subpart(array_offset, num);
		return nw.writeCharAttribute(array, data_offset, num);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[Char];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc().toArray() + " ");
		}
		Console.OUT.println("");
	}
}


@NativeCPPInclude("NativeReader.h")
@NativeCPPInclude("NativeWriter.h")
class StringAttributeHandler extends AttributeHandler {
	
	public def this(team : Team, id : Int) {
		super(team, id);
	}
	
	public def create(localSize : () => Long) : Any {
		return new DistMemoryChunk[String](team.placeGroup(), () => new MemoryChunk[String](localSize()));
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
	
	public def read(nr : NativeReader, any : Any, array_offset : Long, data : MemoryPointer[Byte], num : Long) : Long {
		val array = (any as DistMemoryChunk[String])().subpart(array_offset, num);
		return nr.readStringAttribute(array, data, num);
	}
	
	public def write(nw : NativeWriter, any : Any, array_offset : Long, data_offset : Long, num : Long) : Long {
		val array = (any as DistMemoryChunk[String])().subpart(array_offset, num);
		return nw.writeStringAttribute(array, data_offset, num);
	}
	
	public def print(any : Any) {
		val dmc = any as DistMemoryChunk[String];
		for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
			Console.OUT.print(dmc().toArray() + " ");
		}
		Console.OUT.println("");
	}
}
package org.scalegraph.io;

import org.scalegraph.util.DistMemoryChunk;

public class ID {
	
	public static val VERSION = 1;
	
	public static val TYPE_NONE		: Byte = 0;
	public static val TYPE_GRAPH	: Byte = 1;
	public static val TYPE_MATRIX	: Byte = 2;
	public static val TYPE_VECTOR	: Byte = 3;
	public static val TYPE_ANY		: Byte = -128; // Serialized with X10
	
	public static val ATTR_BOOLEAN	: Int = 1;
	public static val ATTR_BYTE		: Int = 2;
	public static val ATTR_SHORT	: Int = 3;
	public static val ATTR_INT		: Int = 4;
	public static val ATTR_LONG		: Int = 5;
	public static val ATTR_FLOAT	: Int = 6;
	public static val ATTR_DOUBLE	: Int = 7;
	public static val ATTR_UBYTE	: Int = 8;
	public static val ATTR_USHORT	: Int = 9;
	public static val ATTR_UINT		: Int = 10;
	public static val ATTR_ULONG	: Int = 11;
	public static val ATTR_CHAR		: Int = 12;
	public static val ATTR_STRING	: Int = 13;
	
	public static val NAME_VERTEX_ID	: String = "id";
	public static val NAME_SRC_ID		: String = "src";
	public static val NAME_DST_ID		: String = "dst";

	
	public static def typeId(dmc :Any) :Int {
		if(dmc instanceof DistMemoryChunk[Boolean])
			return ID.ATTR_BOOLEAN << 8;
		if(dmc instanceof DistMemoryChunk[Byte])
			return ID.ATTR_BYTE << 8;
		if(dmc instanceof DistMemoryChunk[Short])
			return ID.ATTR_SHORT << 8;
		if(dmc instanceof DistMemoryChunk[Int])
			return ID.ATTR_INT << 8;
		if(dmc instanceof DistMemoryChunk[Long])
			return ID.ATTR_LONG << 8;
		if(dmc instanceof DistMemoryChunk[Float])
			return ID.ATTR_FLOAT << 8;
		if(dmc instanceof DistMemoryChunk[Double])
			return ID.ATTR_DOUBLE << 8;
		if(dmc instanceof DistMemoryChunk[UByte])
			return ID.ATTR_UBYTE << 8;
		if(dmc instanceof DistMemoryChunk[UShort])
			return ID.ATTR_USHORT << 8;
		if(dmc instanceof DistMemoryChunk[UInt])
			return ID.ATTR_UINT << 8;
		if(dmc instanceof DistMemoryChunk[ULong])
			return ID.ATTR_ULONG << 8;
		if(dmc instanceof DistMemoryChunk[Char])
			return ID.ATTR_CHAR << 8;
		if(dmc instanceof DistMemoryChunk[String])
			return ID.ATTR_STRING << 8;
		else
			throw new Exception("invalid data type");
	}
	
	public static def checkType(dmc :Any, id_ :Int) :Boolean {
		val isArray = (id_ & 0xFF) == 1;
		val id = id_ >> 8;
		switch(id) {
		case ID.ATTR_BOOLEAN:
			return dmc instanceof DistMemoryChunk[Boolean];
		case ID.ATTR_BYTE:
			return dmc instanceof DistMemoryChunk[Byte];
		case ID.ATTR_SHORT:
			return dmc instanceof DistMemoryChunk[Short];
		case ID.ATTR_INT:
			return dmc instanceof DistMemoryChunk[Int];
		case ID.ATTR_LONG:
			return dmc instanceof DistMemoryChunk[Long];
		case ID.ATTR_FLOAT:
			return dmc instanceof DistMemoryChunk[Float];
		case ID.ATTR_DOUBLE:
			return dmc instanceof DistMemoryChunk[Double];
		case ID.ATTR_UBYTE:
			return dmc instanceof DistMemoryChunk[UByte];
		case ID.ATTR_USHORT:
			return dmc instanceof DistMemoryChunk[UShort];
		case ID.ATTR_UINT:
			return dmc instanceof DistMemoryChunk[UInt];
		case ID.ATTR_ULONG:
			return dmc instanceof DistMemoryChunk[ULong];
		case ID.ATTR_CHAR:
			return dmc instanceof DistMemoryChunk[Char];
		case ID.ATTR_STRING:
			return dmc instanceof DistMemoryChunk[String];
		default:
			throw new Exception("invalid type id : " + id);
			//			return null;
		}
	}
}
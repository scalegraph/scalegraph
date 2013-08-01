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

import org.scalegraph.util.DistMemoryChunk;

public class ID {
	
	public static val VERSION = 1;
	
	public static val HEADER_NONE		: Byte = 0;
	public static val HEADER_GRAPH	: Byte = 1;
	public static val HEADER_MATRIX	: Byte = 2;
	public static val HEADER_VECTOR	: Byte = 3;
	public static val HEADER_ANY		: Byte = -128; // Serialized with X10
	
	public static val TYPE_NONE		: Int = 0;
	public static val TYPE_BOOLEAN	: Int = 1;
	public static val TYPE_BYTE		: Int = 2;
	public static val TYPE_SHORT	: Int = 3;
	public static val TYPE_INT		: Int = 4;
	public static val TYPE_LONG		: Int = 5;
	public static val TYPE_FLOAT	: Int = 6;
	public static val TYPE_DOUBLE	: Int = 7;
	public static val TYPE_UBYTE	: Int = 8;
	public static val TYPE_USHORT	: Int = 9;
	public static val TYPE_UINT		: Int = 10;
	public static val TYPE_ULONG	: Int = 11;
	public static val TYPE_CHAR		: Int = 12;
	public static val TYPE_STRING	: Int = 13;
	
	public static val NAME_VERTEX_ID	: String = "id";
	public static val NAME_SRC_ID		: String = "src";
	public static val NAME_DST_ID		: String = "dst";

	
	public static def typeId(dmc :Any) :Int {
		if(dmc instanceof DistMemoryChunk[Boolean])
			return ID.TYPE_BOOLEAN << 8;
		if(dmc instanceof DistMemoryChunk[Byte])
			return ID.TYPE_BYTE << 8;
		if(dmc instanceof DistMemoryChunk[Short])
			return ID.TYPE_SHORT << 8;
		if(dmc instanceof DistMemoryChunk[Int])
			return ID.TYPE_INT << 8;
		if(dmc instanceof DistMemoryChunk[Long])
			return ID.TYPE_LONG << 8;
		if(dmc instanceof DistMemoryChunk[Float])
			return ID.TYPE_FLOAT << 8;
		if(dmc instanceof DistMemoryChunk[Double])
			return ID.TYPE_DOUBLE << 8;
		if(dmc instanceof DistMemoryChunk[UByte])
			return ID.TYPE_UBYTE << 8;
		if(dmc instanceof DistMemoryChunk[UShort])
			return ID.TYPE_USHORT << 8;
		if(dmc instanceof DistMemoryChunk[UInt])
			return ID.TYPE_UINT << 8;
		if(dmc instanceof DistMemoryChunk[ULong])
			return ID.TYPE_ULONG << 8;
		if(dmc instanceof DistMemoryChunk[Char])
			return ID.TYPE_CHAR << 8;
		if(dmc instanceof DistMemoryChunk[String])
			return ID.TYPE_STRING << 8;
		else
			throw new Exception("invalid data type");
	}
	
	public static def checkType(dmc :Any, id_ :Int) :Boolean {
		val isArray = (id_ & 0xFF) == 1;
		val id = id_ >> 8;
		switch(id) {
		case ID.TYPE_BOOLEAN:
			return dmc instanceof DistMemoryChunk[Boolean];
		case ID.TYPE_BYTE:
			return dmc instanceof DistMemoryChunk[Byte];
		case ID.TYPE_SHORT:
			return dmc instanceof DistMemoryChunk[Short];
		case ID.TYPE_INT:
			return dmc instanceof DistMemoryChunk[Int];
		case ID.TYPE_LONG:
			return dmc instanceof DistMemoryChunk[Long];
		case ID.TYPE_FLOAT:
			return dmc instanceof DistMemoryChunk[Float];
		case ID.TYPE_DOUBLE:
			return dmc instanceof DistMemoryChunk[Double];
		case ID.TYPE_UBYTE:
			return dmc instanceof DistMemoryChunk[UByte];
		case ID.TYPE_USHORT:
			return dmc instanceof DistMemoryChunk[UShort];
		case ID.TYPE_UINT:
			return dmc instanceof DistMemoryChunk[UInt];
		case ID.TYPE_ULONG:
			return dmc instanceof DistMemoryChunk[ULong];
		case ID.TYPE_CHAR:
			return dmc instanceof DistMemoryChunk[Char];
		case ID.TYPE_STRING:
			return dmc instanceof DistMemoryChunk[String];
		default:
			throw new Exception("invalid type id : " + id);
			//			return null;
		}
	}

	public static def typeId(typeName :String) :Int {
		val name = typeName.toLowerCase();
		// TODO: This is too slow ?
		if(name.equals("boolean") || name.equals("bool"))
			return ID.TYPE_BOOLEAN << 8;
		if(name.equals("byte"))
			return ID.TYPE_BYTE << 8;
		if(name.equals("short"))
			return ID.TYPE_SHORT << 8;
		if(name.equals("int"))
			return ID.TYPE_INT << 8;
		if(name.equals("long"))
			return ID.TYPE_LONG << 8;
		if(name.equals("float"))
			return ID.TYPE_FLOAT << 8;
		if(name.equals("double"))
			return ID.TYPE_DOUBLE << 8;
		if(name.equals("ubyte") || name.equals("unsigned byte"))
			return ID.TYPE_UBYTE << 8;
		if(name.equals("ushort") || name.equals("unsigned short"))
			return ID.TYPE_USHORT << 8;
		if(name.equals("uint") || name.equals("unsigned int"))
			return ID.TYPE_UINT << 8;
		if(name.equals("ulong") || name.equals("unsigned long"))
			return ID.TYPE_ULONG << 8;
		if(name.equals("char"))
			return ID.TYPE_CHAR << 8;
		if(name.equals("string"))
			return ID.TYPE_STRING << 8;
		else
			throw new Exception("invalid data type");
	}
}
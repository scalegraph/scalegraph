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
package org.scalegraph.id;

import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPInclude;
import x10.compiler.Native;

import org.scalegraph.util.DistMemoryChunk;

@NativeCPPInclude("TypeHelper.h")
@NativeCPPOutputFile("TypeHelper.h")
public final class Type {
	public static val None		: Int = 0;
	public static val Boolean	: Int = 1;
	public static val Byte		: Int = 2;
	public static val Short		: Int = 3;
	public static val Int		: Int = 4;
	public static val Long		: Int = 5;
	public static val Float		: Int = 6;
	public static val Double	: Int = 7;
	public static val UByte		: Int = 8;
	public static val UShort	: Int = 9;
	public static val UInt		: Int = 10;
	public static val ULong		: Int = 11;
	public static val Char		: Int = 12;
	public static val String	: Int = 13;
	public static val Date		: Int = 14;
	public static val TypeCount	: Int = 15;

	public static def attTypeId(typeId :Int) = typeId << 8;
	public static def attTypeId(typeId :Int, flags :Int) = (typeId << 8) | flags;
	
	@Native("c++", "org::scalegraph::id::TypeIdOf<#T >::value")
	public static native def typeId[T]() :Int;
	
	public static def typeId(dmc :Any) :Int {
		if(dmc instanceof DistMemoryChunk[Boolean])
			return Type.Boolean;
		if(dmc instanceof DistMemoryChunk[Byte])
			return Type.Byte;
		if(dmc instanceof DistMemoryChunk[Short])
			return Type.Short;
		if(dmc instanceof DistMemoryChunk[Int])
			return Type.Int;
		if(dmc instanceof DistMemoryChunk[Long])
			return Type.Long;
		if(dmc instanceof DistMemoryChunk[Float])
			return Type.Float;
		if(dmc instanceof DistMemoryChunk[Double])
			return Type.Double;
		if(dmc instanceof DistMemoryChunk[UByte])
			return Type.UByte;
		if(dmc instanceof DistMemoryChunk[UShort])
			return Type.UShort;
		if(dmc instanceof DistMemoryChunk[UInt])
			return Type.UInt;
		if(dmc instanceof DistMemoryChunk[ULong])
			return Type.ULong;
		if(dmc instanceof DistMemoryChunk[Char])
			return Type.Char;
		if(dmc instanceof DistMemoryChunk[String])
			return Type.String;
		else
			throw new Exception("invalid data type");
	}
	
	public static def checkType(dmc :Any, id :Int) :Boolean {
		switch(id) {
		case Type.Boolean:
			return dmc instanceof DistMemoryChunk[Boolean];
		case Type.Byte:
			return dmc instanceof DistMemoryChunk[Byte];
		case Type.Short:
			return dmc instanceof DistMemoryChunk[Short];
		case Type.Int:
			return dmc instanceof DistMemoryChunk[Int];
		case Type.Long:
			return dmc instanceof DistMemoryChunk[Long];
		case Type.Float:
			return dmc instanceof DistMemoryChunk[Float];
		case Type.Double:
			return dmc instanceof DistMemoryChunk[Double];
		case Type.UByte:
			return dmc instanceof DistMemoryChunk[UByte];
		case Type.UShort:
			return dmc instanceof DistMemoryChunk[UShort];
		case Type.UInt:
			return dmc instanceof DistMemoryChunk[UInt];
		case Type.ULong:
			return dmc instanceof DistMemoryChunk[ULong];
		case Type.Char:
			return dmc instanceof DistMemoryChunk[Char];
		case Type.String:
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
			return Type.Boolean;
		if(name.equals("byte"))
			return Type.Byte;
		if(name.equals("short"))
			return Type.Short;
		if(name.equals("int"))
			return Type.Int;
		if(name.equals("long"))
			return Type.Long;
		if(name.equals("float"))
			return Type.Float;
		if(name.equals("double"))
			return Type.Double;
		if(name.equals("ubyte") || name.equals("unsigned byte"))
			return Type.UByte;
		if(name.equals("ushort") || name.equals("unsigned short"))
			return Type.UShort;
		if(name.equals("uint") || name.equals("unsigned int"))
			return Type.UInt;
		if(name.equals("ulong") || name.equals("unsigned long"))
			return Type.ULong;
		if(name.equals("char"))
			return Type.Char;
		if(name.equals("string"))
			return Type.String;
		else
			throw new Exception("invalid data type");
	}
}

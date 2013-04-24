package org.scalegraph.io;

public class ID {
	
	public static val VERSION = 1;
	
	public static val TYPE_GRAPH	: Byte = 0;
	public static val TYPE_MATRIX	: Byte = 1;
	public static val TYPE_VECTOR	: Byte = 2;
	
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
}
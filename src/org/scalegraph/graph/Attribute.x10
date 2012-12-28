package org.scalegraph.graph;

import org.scalegraph.util.DistGrowableMemory;

/** An attribute for the graph.
 */
public class Attribute[T] (typeId :Int) {T haszero} {
	private values :DistGrowableMemory[T];
	
	private static def internalGetTypeId[T](t :T) {
		if(t instanceof Byte)
			return ID.Byte;
		else if(t instanceof Short)
			return ID.Short;
		else if(t instanceof Int)
			return ID.Int;
		else if(t instanceof Long)
			return ID.Long;
		else if(t instanceof Float)
			return ID.Float;
		else if(t instanceof Double)
			return ID.Double;
		else if(t instanceof Char)
			return ID.Char;
		else if(t instanceof String)
			return ID.String;
	//	else if(t instanceof Date)
	//		return ID.Date;
		else if(t instanceof Boolean)
			return ID.Boolean;
		else
			throw new IllegalArgumentException();
	}
	
	/** Creates an attribute with backing storage.
	 */
	public def this(values__ :DistGrowableMemory[T]) { 
		property(internalGetTypeId(Zero.get[T]()));
		values = values__;
	}
	
	/** Returns the storage of attribute values.
	 */
	public def values() = values;
	
	public static class ID {
		/**
		 * Attribute type constant
		 */
		public static val Byte = 0;
		public static val Short = 1;
		public static val Int = 2;
		public static val Long = 3;
		public static val Float = 4;
		public static val Double = 5;
		public static val Char = 6;
		public static val String = 7;
		public static val Date = 8;
		public static val Boolean = 9;
		public static val TypeCount = 10;
	}

	public property isByteAttribute() = (typeId == ID.Byte);
	public property isShortAttribute() = (typeId == ID.Short);
	public property isIntAttribute() = (typeId == ID.Int);
	public property isLongAttribute() = (typeId == ID.Long);
	public property isFloatAttribute() = (typeId == ID.Float);
	public property isDoubleAttribute() = (typeId == ID.Double);
	public property isCharAttribute() = (typeId == ID.Char);
	public property isStringAttribute() = (typeId == ID.String);
	public property isDateAttribute() = (typeId == ID.Date);
	public property isBooleanAttribute() = (typeId == ID.Boolean);
}

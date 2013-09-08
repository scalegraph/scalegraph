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

package org.scalegraph.graph;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.id.Type;

/** An attribute for the graph.
 */
public final class Attribute[T] (typeId :Int) {T haszero} {
	private values :DistMemoryChunk[T];
	
	private static def internalGetTypeId[T](t :T) {
		if(t instanceof Byte)
			return Type.Byte;
		else if(t instanceof Short)
			return Type.Short;
		else if(t instanceof Int)
			return Type.Int;
		else if(t instanceof Long)
			return Type.Long;
		else if(t instanceof Float)
			return Type.Float;
		else if(t instanceof Double)
			return Type.Double;
		else if(t instanceof Char)
			return Type.Char;
		else if(t instanceof String)
			return Type.String;
	//	else if(t instanceof Date)
	//		return Type.Date;
		else if(t instanceof Boolean)
			return Type.Boolean;
		else
			throw new IllegalArgumentException();
	}
	
	/** Creates an attribute with backing storage.
	 */
	public def this(values__ :DistMemoryChunk[T]) { 
		property(Type.typeId[T]());
		values = values__;
	}
	
	/** Returns the storage of attribute values.
	 */
	public def values() = values;

	public property isByteAttribute() = (typeId == Type.Byte);
	public property isShortAttribute() = (typeId == Type.Short);
	public property isIntAttribute() = (typeId == Type.Int);
	public property isLongAttribute() = (typeId == Type.Long);
	public property isFloatAttribute() = (typeId == Type.Float);
	public property isDoubleAttribute() = (typeId == Type.Double);
	public property isCharAttribute() = (typeId == Type.Char);
	public property isStringAttribute() = (typeId == Type.String);
	public property isDateAttribute() = (typeId == Type.Date);
	public property isBooleanAttribute() = (typeId == Type.Boolean);
}

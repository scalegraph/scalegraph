/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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
import org.scalegraph.util.SString;

public abstract class AttributeProxy {

	public abstract def setEdgeAttribute(g :Graph, name :String, values :Any) :void;
	public abstract def setVertexAttribute(g :Graph, name :String, values :Any) :void;
	public abstract def setVertexAttribute(g :Graph, name :String, ids :DistMemoryChunk[Long], values :Any) :void;
	
	private static class ProxyImpl[T] {T haszero} extends AttributeProxy {

		public def setEdgeAttribute(g :Graph, name :String, values :Any) {
			g.setEdgeAttribute(name, values as DistMemoryChunk[T]);
		}
		public def setVertexAttribute(g :Graph, name :String, values :Any) {
			g.setVertexAttribute(name, values as DistMemoryChunk[T]);
		}
		public def setVertexAttribute(g :Graph, name :String, ids :DistMemoryChunk[Long], values :Any) {
			g.setVertexAttribute(name, ids, values as DistMemoryChunk[T]);
		}
		
	}
	
	public static def make(typeId :Int) {
		switch(typeId) {
		case Type.Boolean:
			return new ProxyImpl[Boolean]();
		case Type.Byte:
			return new ProxyImpl[Byte]();
		case Type.Short:
			return new ProxyImpl[Short]();
		case Type.Int:
			return new ProxyImpl[Int]();
		case Type.Long:
			return new ProxyImpl[Long]();
		case Type.Float:
			return new ProxyImpl[Float]();
		case Type.Double:
			return new ProxyImpl[Double]();
		case Type.UByte:
			return new ProxyImpl[UByte]();
		case Type.UShort:
			return new ProxyImpl[UShort]();
		case Type.UInt:
			return new ProxyImpl[UInt]();
		case Type.ULong:
			return new ProxyImpl[ULong]();
		case Type.Char:
			return new ProxyImpl[Char]();
		case Type.String:
			return new ProxyImpl[SString]();
		default:
			throw new IllegalOperationException("Not supported attribute type");
		}
	}
}

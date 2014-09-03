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

package org.scalegraph.io;

public class GraphHeader {
	public var numVertexes :Long;
	public var numEdges :Long;
	public var numVertexAttributes :Int;
	public var numEdgeAttributes :Int;
	
	public def this(numVertexes :Long, numEdges :Long,
			numVertexAttributes :Int, numEdgeAttributes :Int)
	{
		this.numVertexes = numVertexes;
		this.numEdges = numEdges;
		this.numVertexAttributes = numVertexAttributes;
		this.numEdgeAttributes = numEdgeAttributes;
	}
}

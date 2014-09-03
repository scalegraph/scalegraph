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

import org.scalegraph.util.DistMemoryChunk;

public class ID {
	
	public static val VERSION = 1;
	
	public static val HEADER_NONE		: Byte = 0;
	public static val HEADER_GRAPH	: Byte = 1;
	public static val HEADER_MATRIX	: Byte = 2;
	public static val HEADER_VECTOR	: Byte = 3;
	public static val HEADER_ANY		: Byte = -128; // Serialized with X10
	
	public static val NAME_SOURCE		: String = "source";
	public static val NAME_TARGET		: String = "target";
	public static val NAME_WEIGHT		: String = "weight";

}
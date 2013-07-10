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

/* Vertex and Edge List */
package org.scalegraph.fileread;

import x10.io.BufferedReader;
import x10.io.FileReader;
import x10.io.File;

public struct InputSplit {
	private val path : String;
	private val start : Long;
	private val end : Long;
	
	public def this(path : String, start : Long, end : Long) {
		this.path = path;
		this.start = start;
		this.end = end;
	}
	
	public def open() {
		val reader = new BufferedReader(new FileReader(new File(path)));
		DistributedReader.ReaderSkip(reader, start);
		return reader;
	}
	
	public def getPath() : String {
		return path;
	}
	
	public def getStart() : Long{
		return start;
	}
	
	public def getEnd() : Long {
		return end;
	}
}

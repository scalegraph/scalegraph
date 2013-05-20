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

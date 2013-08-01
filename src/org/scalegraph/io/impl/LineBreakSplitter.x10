package org.scalegraph.io.impl;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.io.FileReader;

public class LineBreakSplitter extends InputSplitter {
	
	public def nextBreak(data :MemoryChunk[Byte], offset :Long) :Long {
		var cr :Boolean = false;
		for(i in offset..(data.size()-1)) {
			val ch = data(i) as Char;
			if(ch == '\r') cr = true;
			else if(ch == '\n') {
				return i + 1;
			}
		}
		return data.size();
	}
	
	public def nextBreak(reader :FileReader) = reader.fastReadLine().raw();
	
}

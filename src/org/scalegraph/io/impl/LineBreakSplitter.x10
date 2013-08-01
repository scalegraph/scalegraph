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

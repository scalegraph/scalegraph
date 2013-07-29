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

package org.scalegraph.io;

import x10.io.File;
import x10.io.IOException;

// import org.scalegraph.util.SString;
import org.scalegraph.util.MemoryChunk;

public class FileWriter {
	private transient val nf: NativeFile;
	private var fileOffset: Long;
	
	public def this(file: File, fileMode :Int) {
		nf = new NativeFile(file.getPath(), fileMode, FileAccess.Write);
		fileOffset = 0L;
	}
	
	public def reset():void {
		fileOffset = 0L;
		nf.seek(0L, NativeFile.BEGIN);
	}

	public def skip(n: Long):void {
		fileOffset += n;
		nf.seek(n, NativeFile.CURRENT);
	}

	public def close():void {
		fileOffset = 0L;
		nf.close();
	}
	
	public def currentOffset(): Long {
		return fileOffset;
	}
	
	public def write(b: MemoryChunk[Byte]) {
		if(nf.write(b) < b.size())
			throw new IOException();
	}
	/*
	public def write(str: SString) {
		write(str.bytes());
	}
	 */
}
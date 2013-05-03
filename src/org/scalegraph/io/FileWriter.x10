package org.scalegraph.io;

import x10.io.File;
import x10.io.IOException;

// import org.scalegraph.util.SString;
import org.scalegraph.util.MemoryChunk;

public class FileWriter {
	private val nf: NativeFile;
	private var fileOffset: Long;
	
	public def this(file: File) {
		nf = new NativeFile(file.getPath(), true, false);
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
package org.scalegraph.io;

import x10.io.File;
import x10.io.EOFException;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
// import org.scalegraph.util.SString;

public class FileReader {
	private val nf: NativeFile;
	private val buffer: GrowableMemory[Byte];
	private var offset: Long;
	private var length: Long;
	private var fileOffset: Long;
	
	public def this(file: File) {
		nf = new NativeFile(file.getPath(), FileMode.Open, FileAccess.Read);
		buffer = new GrowableMemory[Byte]();
		buffer.setSize(128*1024L);
		offset = length = 0L;
		fileOffset = 0L;
	}
	
	public def reset():void {
		offset = length = 0L;
		fileOffset = 0L;
		nf.seek(0L, NativeFile.BEGIN);
	}

	public def skip(n: Long):void {
		fileOffset += n;
		val buffered = length - offset;
		if(buffered >= n) {
			offset += n;
		}
		else {
			offset = length = 0L;
			nf.seek(n - buffered, NativeFile.CURRENT);
		}
	}

	public def read(r: MemoryChunk[Byte]): Long {
		var len :Long = r.size();
		var off :Long = 0L;
		val buffered = length - offset;
		fileOffset += len;
		if(buffered >= len) {
			MemoryChunk.copy[Byte](buffer.data(), offset, r, off, len);
			offset += len;
			return len;
		}
		else {
			MemoryChunk.copy[Byte](buffer.data(), offset, r, off, buffered);
			off += buffered; len -= buffered;
			offset = length = 0L;
			var ret: Long = buffered;
			val readBytes = nf.read(r.subpart(off, len));
			if(readBytes > 0L) {
				ret += readBytes;
				fillBuffer();
			}
			else if(ret == 0L) {
				throw new EOFException();
			}
			return ret;
		}
	}

	public def read(): Byte {
		fileOffset += 1L;
		if(length == offset) {
			offset = length = 0L;
			if(fillBuffer() <= 0L) throw new EOFException();
		}
		return buffer(offset++);
	}

	public def close():void {
		offset = length = 0L;
		fileOffset = 0L;
		buffer.del();
		nf.close();
	}

	public def available(): Long {
		return length - offset;
	}

	private def fillBuffer(): Long {
		val fil = buffer.data().subpart(length, buffer.size() - length);
		val readBytes = nf.read(fil);
		if(readBytes > 0L) length += readBytes;
		return readBytes;
	}
	
	public def currentOffset(): Long {
		return fileOffset;
	}
	
	private def internalReadLine(): GrowableMemory[Byte] {
		val b = new GrowableMemory[Byte]();
		var cr :Boolean = false;
		while(true) {
			val data = buffer.data();
			for(i in offset..(length-1)) {
				val ch = data(i) as Char;
				if(ch == '\r') cr = true;
				else if(ch == '\n') {
					b.add(data.subpart(offset, i - offset));
					b.setSize(b.size() - (cr ? 2 : 1));
					offset = i + 1;
					return b;
				}
			}
			b.add(data.subpart(offset, length - offset));
			offset = length = 0L;
			if(fillBuffer() <= 0L) {
				if(b.size() == 0L) throw new EOFException();
				return b;
			}
		}
	}
	/*
	public def readLine(): SString {
		val b = internalReadLine();
		val lineSize = b.size();
		b.setSize(lineSize + 1);
		b(lineSize) = 0Y; // null terminate
		return new SString(b.data().subpart(0, lineSize));
	}
	 */
}
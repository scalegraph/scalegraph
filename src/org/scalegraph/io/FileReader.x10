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

import x10.io.File;
import x10.io.EOFException;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.SString;

public final class FileReader {
	private static val BUFFER_SIZE = 128*1024L;
	private transient val nf: NativeFile;
	private val buffer: GrowableMemory[Byte];
	private var offset: Long;
	private var length: Long;
	private var fileOffset: Long;
	
	public def this(path: SString) {
		nf = new NativeFile(path, FileMode.Open, FileAccess.Read);
		buffer = new GrowableMemory[Byte]();
		buffer.setSize(BUFFER_SIZE);
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
		if(buffered >= n && offset + n >= 0) {
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
			MemoryChunk.copy[Byte](buffer.raw(), offset, r, off, len);
			offset += len;
			return len;
		}
		else {
			MemoryChunk.copy[Byte](buffer.raw(), offset, r, off, buffered);
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
		val fil = buffer.raw().subpart(length, buffer.size() - length);
		val readBytes = nf.read(fil);
		if(readBytes > 0L) length += readBytes;
		return readBytes;
	}
	
	public def currentOffset(): Long {
		return fileOffset;
	}
	
	private def replaceBuffer(new_size :Long) {
		val buffered = length - offset;
		val new_mem = MemoryChunk.make[Byte](new_size);
		val old_mem = buffer.raw();
		MemoryChunk.copy(old_mem, offset, new_mem, 0L, buffered);
		buffer.setMemory(new_mem);
		offset = 0;
		length = buffered;
	}
	
	private def shrinkBuffer() {
		val buffered = length - offset;
		if(buffered <= buffer.size()/2) {
			replaceBuffer(buffer.size()/2);
		}
	}
	
	private def growBuffer(request :Long) {
		val buffered = length - offset;
		if(request > buffer.size()) {
			replaceBuffer(request);
		}
	}
	
	private def internalReadLine(): MemoryChunk[Byte] {
		{
			val buffered = length - offset;
			val quater = buffer.size()/4;
			if(quater >= BUFFER_SIZE && buffered <= quater)
				shrinkBuffer();
		}
		var cur :Long = 0;
		var cr :Boolean = false;
		while(true) {
			val data = buffer.raw();
			for(i in (offset+cur)..(length-1)) {
				val ch = data(i) as Char;
				if(ch == '\r') cr = true;
				else if(ch == '\n') {
					val cur_offset = offset;
					val next_offset = i + 1;
					val line_length = i - cur_offset - (cr ? 1 : 0);
					fileOffset += next_offset - cur_offset;
					offset = next_offset;
					return data.subpart(cur_offset, line_length);
				}
			}
			cur = length - offset;

			if(cur < buffer.size()) {
				MemoryChunk.copy(data, offset, data, 0L, cur);
				offset = 0;
				length = cur;
			}
			else {
				growBuffer(buffer.size()*2);
			}
			// offset == 0 here
			if(fillBuffer() <= 0L) {
				val line_length = length;
				fileOffset += length;
				length = 0L;
				if(line_length == 0L) {
					throw new EOFException();
				}
				// Ensure that the end position is accessible.
				if(line_length == buffer.size()) {
					growBuffer(buffer.size()*2);
				}
				return data.subpart(0L, line_length);
			}
		}
	}

	public def readLine() {
		val str = internalReadLine();
		val ret = MemoryChunk.make[Byte](str.size()+1);
		MemoryChunk.copy(str, 0L, ret, 0L, str.size());
		ret(str.size()) = 0Y;
		return SString(ret.subpart(0, str.size()));
	}
	
	public def fastReadLine() = SString(internalReadLine());
}
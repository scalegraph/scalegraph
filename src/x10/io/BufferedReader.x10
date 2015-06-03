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

package x10.io;

public class BufferedReader extends Reader {
	private val reader: Reader;
	private var buffer: Rail[Byte];
	private var offset: Int;
	private var length: Int;
	private var fp: Long;
	
	/*
	 * buffer: |=====================|
	 *                |          |
	 *           offset    length
	 */
	
	public def this(r: Reader) {
		reader = r;
		buffer = new Rail[Byte](128*1024);
		offset = length = 0n;
		fp = 0n;
	}
	
	public def reset():void {
		offset = length = 0n;
		fp = 0n;
		reader.reset();
	}

	public def skip(n: Long):void {
		val buffered = length - offset;
		fp = fp + (n as Long);
		if(buffered >= n) {
			offset += n;
		}
		else {
			offset = length = 0n;
			reader.skip(n - buffered);
		}
	}

	public def read(r: Rail[Byte], var off: Long, var len: Long): void{//Int {
		val buffered = length - offset;
		fp = fp + (len as Long);
		if(buffered >= len) {
			Rail.copy(buffer, offset as Long, r, off as Long, len as Long);
			offset += len;
			//return len;
		}
		else {
			Rail.copy(buffer, offset as Long, r, off as Long, buffered as Long);
			off += buffered; len -= buffered;
			offset = length = 0n;
			var ret: Int = buffered;
			try {
				//val readBytes = reader.read(r, off, len);
				r.clear();
				reader.read(r, off, len);
				val readBytes = r.size;
				if(readBytes > 0n) {
					ret += readBytes;
					fillBuffer();
				}
			} catch (e: IOException) {
				if(ret == 0n) throw e;
			}
			//return ret;
		}
	}

	public def read():x10.lang.Byte {
		fp = fp + 1;
		if(length == offset) {
			offset = length = 0n;
			if(fillBuffer() <= 0n) throw new IOException();
		}
		return buffer(offset++);
	}

	public def close():void {
		offset = length = 0n;
		fp = 0n;
		buffer = null;
		reader.close();
	}

	public def markSupported():x10.lang.Boolean = false;

	public def mark(n: Long):void {
	    throw new UnsupportedOperationException();
	}

	public def available():x10.lang.Long {
		return length - offset + reader.available();
	}

	private def fillBuffer(): Int {
		buffer.clear();
		reader.read(buffer, length, buffer.size - length);
		val readBytes = buffer.size;
		//val readBytes = reader.read(buffer, length, buffer.size - length);
		if(readBytes > 0n) length += readBytes;
		return readBytes as Int;
	}
	
	public def getFilePointer(): Long{
		return fp;
	}

}

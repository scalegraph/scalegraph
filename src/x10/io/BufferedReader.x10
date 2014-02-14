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
		buffer = new Array[Byte](128*1024);
		offset = length = 0;
		fp = 0;
	}
	
	public def reset():void {
		offset = length = 0;
		fp = 0;
		reader.reset();
	}

	public def skip(n: Int):void {
		val buffered = length - offset;
		fp = fp + (n as Long);
		if(buffered >= n) {
			offset += n;
		}
		else {
			offset = length = 0;
			reader.skip(n - buffered);
		}
	}

	public def read(r: Rail[Byte], var off: Int, var len: Int): Int {
		val buffered = length - offset;
		fp = fp + (len as Long);
		if(buffered >= len) {
			Array.copy(buffer, offset, r, off, len);
			offset += len;
			return len;
		}
		else {
			Array.copy(buffer, offset, r, off, buffered);
			off += buffered; len -= buffered;
			offset = length = 0;
			var ret: Int = buffered;
			try {
				val readBytes = reader.read(r, off, len);
				if(readBytes > 0) {
					ret += readBytes;
					fillBuffer();
				}
			} catch (e: IOException) {
				if(ret == 0) throw e;
			}
			return ret;
		}
	}

	public def read():x10.lang.Byte {
		fp = fp + 1;
		if(length == offset) {
			offset = length = 0;
			if(fillBuffer() <= 0) throw new IOException();
		}
		return buffer(offset++);
	}

	public def close():void {
		offset = length = 0;
		fp = 0;
		buffer = null;
		reader.close();
	}

	public def markSupported():x10.lang.Boolean = false;

	public def mark(n: Int):void {
	    throw new UnsupportedOperationException();
	}

	public def available():x10.lang.Int {
		return length - offset + reader.available();
	}

	private def fillBuffer(): Int {
		val readBytes = reader.read(buffer, length, buffer.size - length);
		if(readBytes > 0) length += readBytes;
		return readBytes;
	}
	
	public def getFilePointer(): Long{
		return fp;
	}

}
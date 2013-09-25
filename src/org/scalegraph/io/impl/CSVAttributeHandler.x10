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

import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.DistMemoryChunk;

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeRep;
import x10.compiler.Native;
import x10.util.Team;
import org.scalegraph.io.ID;
import org.scalegraph.util.SString;
import org.scalegraph.id.Type;
import org.scalegraph.util.SStringBuilder;


@NativeCPPInclude("CSVHelper.h")
public class CSVAttributeHandler {
	@Native("c++", "org::scalegraph::io::impl::H_CHUNK_SIZE")
	public static val H_CHUNK_SIZE :Long = 256;
	
	public val typeId :Int;
	public val doubleQuoated :Boolean;
	
	public def this(typeId :Int, doubleQuoated :Boolean) {
		this.typeId = typeId;
		this.doubleQuoated = doubleQuoated;
	}
	
	public def isSkip() :Boolean = true;
	public def typeId() :Int = typeId;
	public def localSizeOf(any : Any) :Long {
		throw new IllegalOperationException("Type NULL Handler does not contain any data.");
	}
	public def createBlockGrowableMemory() :Any = null;
	public def parseElements(elemPtrs :MemoryPointer[MemoryPointer[Byte]], lines :Int, outBuf :Any) :void { }
	public def mergeResult(team :Team, nthreads :Int,
			getChunkSize :(tid :Int) => MemoryChunk[Long], getBuffer :(tid :Int) => Any) :Any {
		throw new IllegalOperationException("Type NULL Handler does not contain any data.");
	}
	public def makeStringClosure(any : Any) :(sb :SStringBuilder, idx :Long) => void {
		throw new IllegalOperationException("Type NULL Handler does not contain any data.");
	}
	public def print(team :Team, any : Any) {
		throw new IllegalOperationException("Type NULL Handler does not contain any data.");
	}
	
	// End of CSVAttributeHandler definition //
	
	private static class ChunkBuffer[T] {
		public var buf :GrowableMemory[T];
		public var chunkSize :MemoryChunk[Long];
		public var offset :Long;
	}
	
	public static def mergeResultHelper[T](team :Team, nthreads :Int,
			getChunkSize :(tid :Int) => MemoryChunk[Long],
			getBuffer :(tid :Int) => Any) :Any
	{
		val ret = DistMemoryChunk.make[T](team.placeGroup(), ()=> {
			val buffers = new MemoryChunk[ChunkBuffer[T]](nthreads);
			for(tid in 0..(nthreads-1)) {
				val ch = buffers(tid);
				ch.buf = getBuffer(tid) as GrowableMemory[T];
				ch.chunkSize = getChunkSize(tid);
				ch.offset = 0L;
			}
			
			var totalSize :Long = 0;
			
			// compute the size
			for(tid in 0..(nthreads-1)) {
				totalSize += buffers(tid).buf.size();
			}
			val outbuf = new MemoryChunk[T](totalSize);
			
			// copy the result
			val numChunks = getChunkSize(0).size();
			var offset :Long = 0;
			for(ich in 0..(numChunks-1)) {
				for(tid in 0..(nthreads-1)) {
					val ch = buffers(tid);
					val copySize = ch.chunkSize(ich);
					val buf = ch.buf.raw();
					MemoryChunk.copy(buf, ch.offset, outbuf, offset, copySize);
					offset += copySize;
					ch.offset += copySize;
				}
			}
			for(tid in 0..(nthreads-1)) {
				buffers(tid).buf.del();
			}
			assert (offset == totalSize);
			return outbuf;
		});
		return ret;
	}
	
	private static class BaseHandler[T] extends CSVAttributeHandler {
		public def this(typeId :Int, doubleQuoated :Boolean) { super(typeId, doubleQuoated); }

		public def isSkip() :Boolean = false;
		
		public def localSizeOf(any : Any) {
			val dmc = any as DistMemoryChunk[T];
			return dmc().size();
		}
		
		/** The make string closure is bind to the place. You may not move this closure. */
		public def makeStringClosure(any : Any) :(sb :SStringBuilder, idx :Long) => void {
			val dmc = any as DistMemoryChunk[T];
			val mc = dmc();
			return (sb :SStringBuilder, idx :Long) => { sb.add(mc(idx)); };
		}
		
		public def createBlockGrowableMemory() = new GrowableMemory[T]();
		
		public def mergeResult(team :Team, nthreads :Int,
				getChunkSize :(tid :Int) => MemoryChunk[Long],
				getBuffer :(tid :Int) => Any) :Any
		{
			return mergeResultHelper[T](team, nthreads, getChunkSize, getBuffer);
		}
		
		public def print(team :Team, any : Any) {
			val dmc = any as DistMemoryChunk[T];
			for(var i:Int = 0; i < team.size(); i++) at(team.places()(i)) {
				Console.OUT.print(dmc() + " ");
			}
			Console.OUT.println("");
		}
	}
	
	private static class PrimitiveHandler[T] extends BaseHandler[T] {
		public def this(typeId :Int, doubleQuoated :Boolean) { super(typeId, doubleQuoated); }
		
		@Native("c++", "org::scalegraph::io::impl::CSVParseElements<#T >(#elemPtrs, #lines, #outBuf)")
		private static native def nativeParseElements[T](
				elemPtrs :MemoryPointer[MemoryPointer[Byte]], lines :Int, outBuf :GrowableMemory[T]) :void;

		public def parseElements(elemPtrs :MemoryPointer[MemoryPointer[Byte]], lines :Int, outBuf :Any) {
			val typedOutBuf = outBuf as GrowableMemory[T];
			nativeParseElements[T](elemPtrs, lines, typedOutBuf);
		}
	}
	
	private static class StringHandler extends BaseHandler[SString] {
		public def this(typeId :Int, doubleQuoated :Boolean) { super(typeId, doubleQuoated); }
		
		@Native("c++", "org::scalegraph::io::impl::CSVParseStringElements(#elemPtrs, #lines, #outBuf, #doubleQuoated)")
		private static native def nativeParseElements(
				elemPtrs :MemoryPointer[MemoryPointer[Byte]], lines :Int, outBuf :GrowableMemory[SString], doubleQuoated :Boolean) :void;
		
		public def parseElements(elemPtrs :MemoryPointer[MemoryPointer[Byte]], lines :Int, outBuf :Any) {
			val typedOutBuf = outBuf as GrowableMemory[SString];
			nativeParseElements(elemPtrs, lines, typedOutBuf, doubleQuoated);
		}
		public def makeStringClosure(any : Any) :(sb :SStringBuilder, idx :Long) => void {
			val dmc = any as DistMemoryChunk[SString];
			val mc = dmc();
			return (sb :SStringBuilder, idx :Long) => { sb.add('\"'); sb.add(mc(idx)); sb.add('\"'); };
		}
		
	}
	
	public static def create(typeId :Int, doubleQuoated :Boolean) :CSVAttributeHandler {
		switch(typeId) {
		case Type.None:
			return new CSVAttributeHandler(typeId, doubleQuoated);
		case Type.Boolean:
			return new PrimitiveHandler[Boolean](typeId, doubleQuoated);
		case Type.Byte:
			return new PrimitiveHandler[Byte](typeId, doubleQuoated);
		case Type.Short:
			return new PrimitiveHandler[Short](typeId, doubleQuoated);
		case Type.Int:
			return new PrimitiveHandler[Int](typeId, doubleQuoated);
		case Type.Long:
			return new PrimitiveHandler[Long](typeId, doubleQuoated);
		case Type.Float:
			return new PrimitiveHandler[Float](typeId, doubleQuoated);
		case Type.Double:
			return new PrimitiveHandler[Double](typeId, doubleQuoated);
		case Type.UByte:
			return new PrimitiveHandler[UByte](typeId, doubleQuoated);
		case Type.UShort:
			return new PrimitiveHandler[UShort](typeId, doubleQuoated);
		case Type.UInt:
			return new PrimitiveHandler[UInt](typeId, doubleQuoated);
		case Type.ULong:
			return new PrimitiveHandler[ULong](typeId, doubleQuoated);
		case Type.Char:
			return new PrimitiveHandler[Char](typeId, doubleQuoated);
		case Type.String:
			return new StringHandler(typeId, doubleQuoated);
		default:
			throw new IllegalArgumentException("invalid data type");
		}
	}
}

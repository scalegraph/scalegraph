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

import x10.util.Team;

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPInclude;
import x10.compiler.Native;

import org.scalegraph.util.SString;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.tuple.Tuple2;

@NativeCPPInclude("CSVHelper.h")
@NativeCPPCompilationUnit("CSVHelper.cc") 
public class SimpleTextReader {
	
	private static class ReaderBuffer[T] {
		public val parser :(line :SString) => Tuple3[Long, Long, T];
		public val src = new GrowableMemory[Long]();
		public val dst = new GrowableMemory[Long]();
		public val wgt = new GrowableMemory[T]();
		public val chunkSize = new GrowableMemory[Long]();
		
		public def this(parser :(line :SString) => Tuple3[Long, Long, T]) {
			this.parser = parser;
		}
		
		private static val sharp = SString("#");
		private static def isSkip(line :SString) {
			return (line.size() == 0) || line.startsWith(sharp);
		}
		
		@Native("c++", "org::scalegraph::io::impl::LineEndAndNextBreak(#data, #offset)")
		private native static def nativeNextBreak(data :MemoryChunk[Byte], offset :Long) :Tuple2[Long, Long];
		
		public def parse(data :MemoryChunk[Byte]) {
			val size = data.size();
			var offset :Long = 0L;
			var lines :Long = 0;
			while(offset < size) {
				val nextOffset = nativeNextBreak(data, offset);
				val line = SString(data.subpart(offset, nextOffset.val1 - offset));
				
				if(isSkip(line) == false) {
					val v = parser(line);
					src.add(v.val1);
					dst.add(v.val2);
					wgt.add(v.val3);
					++lines;
				}
				
				offset = nextOffset.val2;
			}
			// store the number of lines for merging all data later
			chunkSize.add(lines);
		}
	}
	
	public static def read[T](team :Team, path :SString, parser :(line :SString) => Tuple3[Long, Long, T]) {
		val nthreads = Runtime.NTHREADS;

		val fman = FileNameProvider.createForRead(path);

		// broadcast attribute handlers
		val bufferPLH = PlaceLocalHandle.makeFlat[Array[ReaderBuffer[T]](1)](team.placeGroup(),
				() => new Array[ReaderBuffer[T]](nthreads, (i:Int) => new ReaderBuffer[T](parser)));
		
		val splitter = new LineBreakSplitter();
		
		// read data
		splitter.split(team, fman, 0, nthreads,
				(tid :Int, data :MemoryChunk[Byte]) => { bufferPLH()(tid).parse(data); });
		
		// merge result
		val getChunkSize = (tid :Int) => bufferPLH()(tid).chunkSize.raw();
		val src = CSVAttributeHandler.mergeResultHelper[Long](team, nthreads, getChunkSize,
				(tid :Int) => bufferPLH()(tid).src);
		val dst = CSVAttributeHandler.mergeResultHelper[Long](team, nthreads, getChunkSize,
				(tid :Int) => bufferPLH()(tid).dst);
		val wgt = CSVAttributeHandler.mergeResultHelper[T](team, nthreads, getChunkSize,
				(tid :Int) => bufferPLH()(tid).wgt);
		
		return new NamedDistData(
				["source" as String, "target", "weight"], [src as Any, dst, wgt]);
	}
}

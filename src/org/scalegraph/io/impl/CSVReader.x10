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

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeRep;
import x10.compiler.Native;
import x10.compiler.Ifdef;
import x10.io.File;
import x10.io.IOException;
import x10.util.Team;

import org.scalegraph.Config;

import org.scalegraph.util.SString;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MemoryPointer;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.io.FileReader;
import org.scalegraph.io.ID;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.id.Type;
import org.scalegraph.util.tuple.Tuple2;

@NativeCPPCompilationUnit("CSVHelper.cc") 
public class CSVReader {
	private static type IO = org.scalegraph.id.ProfilingID.IO;

	@NativeCPPInclude("CSVHelper.h")
	@NativeCPPOutputFile("CSVReader__CSVAttribute.h")
	@NativeRep("c++", "org::scalegraph::io::impl::NativeCSVAttribute*",
			"org::scalegraph::io::impl::NativeCSVAttribute*", null)
	private static struct CSVAttribute {
		@Native("c++", "(x10_boolean) (#this)->includeType")
		public native def includeType() :Boolean;
		@Native("c++", "(x10_boolean) (#this)->doubleQuoated")
		public native def doubleQuoated() :Boolean;
		@Native("c++", "(#this)->name")
		public native def name() :SString;
		@Native("c++", "(#this)->typeName")
		public native def attTypeName() :SString;
	}
	
	@NativeCPPInclude("CSVHelper.h")
	@NativeCPPOutputFile("CSVReader__NativeCSVHeader.h")
	@NativeRep("c++", "org::scalegraph::io::impl::NativeCSVHeader*",
			"org::scalegraph::io::impl::NativeCSVHeader*", null)
   private static struct NativeCSVHeader {
		@Native("c++", "org::scalegraph::io::impl::readCSVHeader(#headerLine)")
		public static native def make(headerLine :SString) : NativeCSVHeader;
		@Native("c++", "(#this)->~NativeCSVHeader(); x10aux::dealloc(#this)")
		public native def del() :void;

		@Native("c++", "(x10_int) (#this)->attrs.size()")
		public native def size() :Int;
		@Native("c++", "&((#this)->attrs[#index])")
		public native def attribute(index :Int) : CSVAttribute;
	}
	
	private static class ReaderBuffer {
		public val attHandler :Array[CSVAttributeHandler](1);
		public val buffer :Array[Any](1);
		public transient val elemPtrs :MemoryPointer[MemoryPointer[Byte]];
		public val chunkSize :GrowableMemory[Long];
		public val stride :Long;
		public val numElems :Int;
		
		public def this(attHandler :Array[CSVAttributeHandler](1)) {
			this.attHandler = attHandler;
			this.numElems = attHandler.size;
			this.stride = CSVAttributeHandler.H_CHUNK_SIZE;
			this.buffer = new Array[Any](numElems,
					(i :Int) => attHandler(i).createBlockGrowableMemory());
			this.elemPtrs = allocatePtrBuffer(stride * numElems);
			this.chunkSize = new GrowableMemory[Long]();
		}
		
		@Native("c++", "x10aux::alloc<x10_byte*>(sizeof(x10_byte*)*(#length))")
		private static native def allocatePtrBuffer(length :Long) :MemoryPointer[MemoryPointer[Byte]];

		@Native("c++", "org::scalegraph::io::impl::CSVReaderParseChunk(#data, (#this)->FMGL(stride), (#this)->FMGL(numElems), (#this)->FMGL(elemPtrs))")
		private native def nativeParseChunk(data :MemoryChunk[Byte]) :Tuple2[Long, Long];
		
		public def parse(data :MemoryChunk[Byte]) {
			val data_size = data.size();
			var data_off :Long = 0;
			var totalLines :Long = 0;
			while(data_off < data_size) {
				val res = nativeParseChunk(data.subpart(data_off, data.size() - data_off));
				data_off += res.val1;
				val lines = res.val2;
				totalLines += lines;
				for(e in 0..(numElems-1)) {
					attHandler(e).parseElements(elemPtrs + e*stride, lines as Int, buffer(e));
				}
			}
			// store the number of lines for merging all data later
			chunkSize.add(totalLines);
		}
	}
	
	
	/*
	 * Tree types of chunks:
	 * P_CHUNK: The input file is split into P_CHUNK at first. Each P_CHUNK is assigned to a place. Each InputSplit represent one P_CHUNK.
	 * S_CHUNK:
	 * T_CHUNK: Each P_CHUNK is split into T_CHUNK. Each T_CHUNK is assigned to a thread.
	 * H_CHUNK: Each P_CHUNK is split into H_CHUNK. Attribute handlers can process H_CHUNK at once.
	 */
	
	public static def read(team :Team, path :SString, columnDef :Array[Int](1),
			columnNames :Array[String](1), includeHeader :Boolean) {
		//
		@Ifdef("PROF_IO") val mtimer = Config.get().profIO().timer(IO.MAIN_FRAME, 0);
		@Ifdef("PROF_IO") { mtimer.start(); }
		val nthreads = Runtime.NTHREADS;
		val numColumns = columnDef.size;
		var columnNamesInHeader :Array[SString](1) = null;
		val attHandler = new Array[CSVAttributeHandler](columnDef.size);

		val fman = FileNameProvider.createForRead(path);
		var includeDQ :Boolean = false;
		var dataOffset :Long = 0;
		
		// read header and create attribute handler
		{
			val reader = new FileReader(fman.fileName(0));
			val headerLine = reader.fastReadLine();
			if(includeHeader) {
				val header = NativeCSVHeader.make(headerLine);
				if(columnDef.size > header.size()) {
					header.del();
					reader.close();
					throw new IOException("The file does not contain enough attributes.");
				}
				dataOffset = reader.currentOffset();
				
				columnNamesInHeader = new Array[SString](numColumns);
				for([i] in attHandler) {
					val att = header.attribute(i);
					val typeId = att.includeType() 
							? Type.typeId(att.attTypeName().toString())
							: columnDef(i);
					columnNamesInHeader(i) = att.name();
					attHandler(i) = CSVAttributeHandler.create(typeId, att.doubleQuoated());
					if(att.doubleQuoated()) includeDQ = true;
				}
				
				header.del();
			}
			else {
				includeDQ = (headerLine.trim().bytes()(0) as Char == '"');
				for([i] in attHandler) {
					attHandler(i) = CSVAttributeHandler.create(columnDef(i), includeDQ);
				}
			}
			
			reader.close();
		}
		@Ifdef("PROF_IO") { mtimer.lap(IO.MAIN_READ_HEADER); }

		// broadcast attribute handlers
		val bufferPLH = PlaceLocalHandle.makeFlat[Array[ReaderBuffer](1)](team.placeGroup(),
				() => new Array[ReaderBuffer](nthreads, (i:Int) => new ReaderBuffer(attHandler)));
		
		val splitter = includeDQ ? new DoubleQuoatedCSVSplitter() : new LineBreakSplitter();
		@Ifdef("PROF_IO") { mtimer.lap(IO.MAIN_PREPARE); }
		
		// read data
		splitter.split(team, fman, dataOffset, nthreads,
			(tid :Int, data :MemoryChunk[Byte]) => { bufferPLH()(tid).parse(data); });
		
		var enabledColumns :Int = 0;
		for(e in 0..(numColumns-1)) {
			if(!attHandler(e).isSkip()) ++enabledColumns;
		}
		
		// merge result
		val attributes = new Array[Any](enabledColumns);
		val attrNames = new Array[String](enabledColumns);
		val typeIds = new Array[Int](enabledColumns);
		var attrIndex :Int = 0;
	//	finish for(e in 0..(numColumns-1)) {
		for(e in 0..(numColumns-1)) {
			if(!attHandler(e).isSkip()) {
				val attrIndex_ = attrIndex;
			//	async
					attributes(attrIndex_) = attHandler(e).mergeResult(team, nthreads,
						(tid :Int) => bufferPLH()(tid).chunkSize.raw(),
						(tid :Int) => bufferPLH()(tid).buffer(e));
					
		//		attHandler(e).print(team,attributes(attrIndex));
				val name = (columnNamesInHeader != null) ? columnNamesInHeader(e).toString()
						: (columnNames != null) ? columnNames(attrIndex)
						: SString.format("column-%d" as SString, e).toString();
				attrNames(attrIndex) = name;
				
				typeIds(attrIndex) = attHandler(e).typeId();
				++attrIndex;
			}
		}
		@Ifdef("PROF_IO") { mtimer.lap(IO.MAIN_MERGE_RESULT); }
		
		return new NamedDistData(attrNames, typeIds, attributes, null);
	}
}

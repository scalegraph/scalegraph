package org.scalegraph.io;

import org.scalegraph.util.SString;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.io.impl.FileNameProvider;
import org.scalegraph.io.impl.InputSplitter;
import org.scalegraph.io.impl.CSVAttributeHandler;

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeRep;
import x10.compiler.Native;
import x10.io.File;
import x10.util.Team;
import x10.io.IOException;
import org.scalegraph.io.impl.DoubleQuoatedCSVSplitter;
import org.scalegraph.io.impl.LineBreakSplitter;

@NativeCPPCompilationUnit("CSVHelper.cc") 
public class CSVReader {

	@NativeCPPInclude("CSVHelper.h")
	@NativeCPPOutputFile("CSVAttribute.h")
	@NativeRep("c++", "org::scalegraph::io::impl::NativeCSVAttribute*",
			"org::scalegraph::io::impl::NativeCSVAttribute*", null)
	static private struct CSVAttribute {
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
	@NativeCPPOutputFile("NativeCSVHeader.h")
	@NativeRep("c++", "org::scalegraph::io::impl::NativeCSVHeader*",
			"org::scalegraph::io::impl::NativeCSVHeader*", null)
	static private struct NativeCSVHeader {
		@Native("c++", "org::scalegraph::io::impl::readCSVHeader(#headerLine)")
		public static native def make(headerLine :SString) : NativeCSVHeader;
		@Native("c++", "(#this)->~NativeCSVHeader(); x10aux::dealloc(#this)")
		public native def del() :void;

		@Native("c++", "(x10_int) (#this)->attrs.size()")
		public native def size() :Int;
		@Native("c++", "&((#this)->attrs[#index])")
		public native def attribute(index :Int) : CSVAttribute;
	}
	
	/*
	 * Tree types of chunks:
	 * P_CHUNK: The input file is split into P_CHUNK at first. Each P_CHUNK is assigned to a place. Each InputSplit represent one P_CHUNK.
	 * S_CHUNK:
	 * T_CHUNK: Each P_CHUNK is split into T_CHUNK. Each T_CHUNK is assigned to a thread.
	 * H_CHUNK: Each P_CHUNK is split into H_CHUNK. Attribute handlers can process H_CHUNK at once.
	 */
	
	public static def read(team :Team, path :SString, columnDef :Array[Int], includeHeader :Boolean) {
		//
		val columnNames = new Array[SString](columnDef.size);
		val attHandler = new Array[CSVAttributeHandler](columnDef.size);

		val fman = FileNameProvider.create(path, true);
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
				
				for([i] in attHandler) {
					val att = header.attribute(i);
					val typeId = att.includeType() 
							? ID.typeId(att.attTypeName().toString())
							: columnDef(i);
					columnNames(i) = att.name();
					attHandler(i) = CSVAttributeHandler.create(typeId, att.doubleQuoated());
					if(att.doubleQuoated()) includeDQ = true;
				}
				
				header.del();
			}
			else {
				includeDQ = (headerLine.trim().bytes()(0) as Char == '"');
				for([i] in attHandler) {
					val typeId = columnDef(i);
					columnNames(i) = SString.format("column-%d" as SString, i);
					attHandler(i) = CSVAttributeHandler.create(typeId, includeDQ);
				}
			}
			
			reader.close();
		}

		val splitter = includeDQ ? new DoubleQuoatedCSVSplitter() : new LineBreakSplitter();
		splitter.split(team, fman, dataOffset, (tid :Long, data :MemoryChunk[Byte]) => {
			// TODO:
		});
		
	}
}

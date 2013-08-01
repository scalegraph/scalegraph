package org.scalegraph.io.impl;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.io.FileReader;

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPInclude;
import x10.compiler.Native;

@NativeCPPInclude("CSVHelper.h")
@NativeCPPCompilationUnit("CSVHelper.cc") 
public class DoubleQuoatedCSVSplitter extends InputSplitter {

	@Native("c++", "org::scalegraph::io::impl::DQCSVNextBreak(#data, #offset)")
	public native def nativeNextBreak(data :MemoryChunk[Byte], offset :Long) :Long;
	
	public def nextBreak(data :MemoryChunk[Byte], offset :Long)
			= nativeNextBreak(data, offset);

	@Native("c++", "org::scalegraph::io::impl::DQCSVNextBreak(#reader)")
	public native def nativeNextBreak(reader :FileReader) :MemoryChunk[Byte];
	
	public def nextBreak(reader :FileReader) = nativeNextBreak(reader);
	
}

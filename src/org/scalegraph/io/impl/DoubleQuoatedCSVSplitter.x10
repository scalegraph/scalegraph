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
	public static native def nativeNextBreak(data :MemoryChunk[Byte], offset :Long) :Long;
	
	public def nextBreak(data :MemoryChunk[Byte], offset :Long)
			= nativeNextBreak(data, offset);

	@Native("c++", "org::scalegraph::io::impl::DQCSVNextBreak(#reader)")
	public static native def nativeNextBreak(reader :FileReader) :MemoryChunk[Byte];
	
	public def nextBreak(reader :FileReader) = nativeNextBreak(reader);
	
}

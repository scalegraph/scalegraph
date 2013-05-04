package org.scalegraph.io;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import org.scalegraph.util.MemoryChunk;

@NativeCPPInclude("NativeFile.h")
@NativeCPPCompilationUnit("NativeFile.cc")
@NativeRep("c++", "org::scalegraph::io::NativeFile", "org::scalegraph::io::NativeFile", null)
public struct NativeFile {
	@Native("c++", "0")
	public static val BEGIN: Int = 0;
	@Native("c++", "1")
	public static val CURRENT: Int = 1;
	@Native("c++", "2")
	public static val END: Int = 2;
	
	public native def this(name: String, write: Boolean, append: Boolean);
	public native def close(): void;
	public native def read(buffer: MemoryChunk[Byte]): Long;
	public native def write(buffer: MemoryChunk[Byte]): Long;
	public native def seek(offset: Long, origin: Int): void;
	public native def getpos(): Long;
}

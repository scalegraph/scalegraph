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

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import x10.compiler.Pinned;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.SString;

@NativeCPPInclude("NativeFile.h")
@NativeCPPCompilationUnit("NativeFile.cc")
@NativeRep("c++", "org::scalegraph::io::NativeFile", "org::scalegraph::io::NativeFile", null)
@Pinned public struct NativeFile {
	@Native("c++", "0")
	public static val BEGIN: Int = 0;
	@Native("c++", "1")
	public static val CURRENT: Int = 1;
	@Native("c++", "2")
	public static val END: Int = 2;
	
	public native def this(name: SString, fileMode :Int, fileAccess :Int);
	public native def close(): void;
	public native def read(buffer: MemoryChunk[Byte]): Long;
	public native def write(buffer: MemoryChunk[Byte]): void;
	public native def seek(offset: Long, origin: Int): void;
	public native def getpos(): Long;
}

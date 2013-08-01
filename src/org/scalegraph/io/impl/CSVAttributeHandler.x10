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

import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeRep;
import x10.compiler.Native;
import x10.util.Team;


@NativeCPPInclude("CSVHelper.h")
public abstract class CSVAttributeHandler {
	public static val H_CHUNK_SIZE :Long = 256;
	
	public abstract def isSkip() :Boolean;
	public abstract def typeId() :Int;
	public abstract def createBlockGrowableMemory() :Any;
	public abstract def parseElements(elemPtrs :MemoryChunk[MemoryPointer[Byte]], outBuf :Any) :void;
	public abstract def mergeResult(team :Team, getBuffer :(tid :Int) => Any) :Any;
	
	// End of CSVAttributeHandler definition //
	
	public static def create(typeId :Int, doubleQuoated :Boolean) :CSVAttributeHandler {
		// TODO:
		return null;
	}
}

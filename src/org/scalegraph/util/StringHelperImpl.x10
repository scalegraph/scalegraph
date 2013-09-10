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
package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeRep;

@NativeRep("c++", "int", "int", null)
final struct StringHelperImpl {
	private def this() { }
	
	@Native("c++", "org::scalegraph::util::StringIndexOf_(#th, #ch, #idx)")
	public native static def indexOf(th :MemoryChunk[Byte], ch :Char, idx :Int) :Int;

	@Native("c++", "org::scalegraph::util::StringIndexOf_(#th, #str, #idx)")
	public native static def indexOf(th :MemoryChunk[Byte], str :MemoryChunk[Byte], idx :Int) :Int;
}

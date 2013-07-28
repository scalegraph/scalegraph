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
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("StringHelper.h")
//@NativeCPPInclude("LazyCollection.h")
@NativeCPPCompilationUnit("StringHelper.cc")

public final struct SString {
	
	private val content: MemoryChunk[Byte];
	
//	@Native("c++", "(#this).FMGL(content) = #c")
//	private native def setContent(c: MemoryChunk[Byte]): void;
	
	@Native("c++", "org::scalegraph::util::charsToUTF8_(#chars)")
	private static native def charsToUTF8(chars: MemoryChunk[Char]): MemoryChunk[Byte];

//	@Native("c++", "org::scalegraph::util::charToUTF8_(#ch, #bytes)")
//	private static native def charToUTF8(ch: Char, bytes: MemoryChunk[Byte]): MemoryChunk[Byte];

	@Native("c++", "org::scalegraph::util::UTF8ToChars_(#bytes)")
	private static native def UTF8ToChars(bytes: MemoryChunk[Byte]): MemoryChunk[Char];

//	@Native("c++", "org::scalegraph::util::UTF8CodeLength_((x10_byte)#b0)")
//	private static native def UTF8CodeLength(b0: Byte): Int;
	
	@Native("c++", "org::scalegraph::util::StringCstr_(#this)")
	private native def nativeCstr(): MemoryPointer[Byte];

	@Native("c++", "org::scalegraph::util::StringFromX10String(#str)")
	private static native def fromX10String(str :String) :MemoryChunk[Byte];

	/** Creates a string from a X10 string.
	 */
	public def this(str :String) {
		content = fromX10String(str);
	}
	
	/** Creates a string.
	 * The length of the string is str.size().
	 * str(str.size()) must be accesible regardless of 
	 * the string being null terminated or not.
	 */
	public def this(str: MemoryChunk[Byte]) {
		// Ensure that the end position is accessible.
		assert (str.getUnchecked(str.size()) != 0Y || str.getUnchecked(str.size()) == 0Y);
		content = str;
	}
	
	public def this(r: MemoryChunk[Char]) {
		content = charsToUTF8(r);
	}
	
	public static operator (str: String) = new SString(str);
	
	public def equals(that: Any): Boolean {
		if(that instanceof SString) {
			val that_ = that as SString;
			return equals(that_);
		}
		if(that instanceof String) {
			val that_ = that as String;
			return equals(that_);
		}
		return false;
	}

	@Native("c++", "org::scalegraph::util::StringEqual_((#this).FMGL(content), (#that).FMGL(content))")
	public native def equals(that: SString): Boolean;
	
	public def hashCode(): Int {
		var hc: Int = 0;
		for(i in content.range()) {
			hc = hc * 31 + (content(i) as Int);
		}
		return hc;
	}
	
	@Native("c++", "x10::lang::String::_make(reinterpret_cast<char*>((#this).c_str()), true)") 
	public native def toString(): String;
	/* Steal flag is true to avoid unnecessary memory allocation.
	 * This is OK because the current X10 String never frees its memory.
	 * X10 String can free the memory and it will not work.
	 * However, there is no need to free the memory of X10 String because
	 * GC will collect both X10 String object and its content memory.
	 */
	
	public def size() = content.size() as Int;

	@Native("c++", "org::scalegraph::util::UTF8charsCount_((#this).FMGL(content))")
	public native def charsCount(): Int;
	
	public def c_str() = nativeCstr();
	
	public def chars() = UTF8ToChars(content);
	
	public def bytes() = content;
	
	public def substring(fromIndex: Int, toIndex: Int) =
		SString(content.subpart(fromIndex, toIndex - fromIndex));
	
	public def substring(fromIndex: Int) =
		SString(content.subpart(fromIndex, content.size() - fromIndex));
	
	public def indexOf(ch: Char) = indexOf(ch, 0);
	
	@Native("c++", "org::scalegraph::util::StringIndexOf_((#this).FMGL(content), #ch, #idx)")
	public native def indexOf(ch: Char, idx: Int): Int;
	
	public def indexOf(str: SString) = indexOf(str, 0);

	@Native("c++", "org::scalegraph::util::StringIndexOf_((#this).FMGL(content), (#str).FMGL(content), #idx)")
	public native def indexOf(str: SString, idx: Int): Int;
	
	public def lastIndexOf(ch: Char) = indexOf(ch, 0);

	@Native("c++", "org::scalegraph::util::StringLastIndexOf_((#this).FMGL(content), #ch, #idx)")
	public native def lastIndexOf(ch: Char, idx: Int): Int;
	
	public def lastIndexOf(str: SString) = indexOf(str, 0);

	@Native("c++", "org::scalegraph::util::StringLastIndexOf_((#this).FMGL(content), (#str).FMGL(content), #idx)")
	public native def lastIndexOf(str: SString, idx: Int): Int;
	
	/*
	static struct TokenIterator implements Iterator[SString] {
		val str: SString;
		val splitter: Char;
		val index: Int;
		
		@Native("c++", "(#this).FMGL(index) = #v")
		private native def setIndex(v: Int): void;
		
		public def this(str: SString, splitter: Char) {
			this.str = str;
			this.splitter = splitter;
			this.index = 0;
		}
		
		public def next() {
			var nextIndex: Int = str.indexOf(splitter, index);
			if(nextIndex == -1) nextIndex = str.size();
			val ret = str.substring(index, nextIndex);
			setIndex(nextIndex + 1);
			return ret;
		}

		public def hasNext() = (index < str.size());
	}
	*/
	
	@NativeRep("c++", "org::scalegraph::util::TokenIter<#T >", null, null)
	public static struct TokenIterator[T] implements Iterator[SString] {
		public native def this(str_ :SString, splitter_ :T);
		public native def next(): SString;
		public native def hasNext(): Boolean;
	}
	
	public static struct TokenCollection[T] implements Iterable[SString] {
		val str: SString;
		val splitter: T;
		public def this(str_ :SString, splitter_ :T) {
			str = str_; splitter = splitter_;
		}
		public def size() {
			var tokenCount: Int = 0;
			for(t in this) ++tokenCount;
			return tokenCount;
		}
		public def array() {
			val array = new MemoryChunk[SString](size());
			var tokenCount: Int = 0;
			for(t in this) array(tokenCount++) = t;
			return array;
		}
		public def iterator() {
			return TokenIterator(str, splitter);
		}
	}
	/*
	static struct TokenCollection implements Iterable[SString] {
		val str: SString;
		val splitter: Char;
		val array: Array[SString];
		
		@Native("c++", "(#this).FMGL(array) = #v")
		private native def setArray(v: Array[SString]): void;
		
		public def this(str: SString, splitter: Char) {
			this.str = str;
			this.splitter = splitter;
			this.array = null;
		}
		
		public def size() {
			if(array == null) createArray();
			return array.size;
		}
		
		public operator this(index: Int) {
			if(array == null) createArray();
			return array(index);
		}
		
		private def createArray() {
			var tokenCount: Int = 0;
			for(t in this) ++tokenCount;
			val array = new Array[SString](tokenCount);
			tokenCount = 0;
			for(t in this) array(tokenCount++) = t;
			setArray(array);
		}
		
		public def iterator(): TokenIterator = new TokenIterator(str, splitter);
	}
	*/
	
	public def split(ch: Char) = new TokenCollection(this, ch);
	
	public def split(str: String) = new TokenCollection(this, str);
	
	public def trim() {
		for(var i: Int = content.size() as Int - 1; i >= 0; --i) {
			if(content(i) > 0x20Y) {
				return SString(content.subpart(0, i+1L));
			}
		}
		return SString(MemoryChunk[Byte]());
	}
	
	@Native("c++", "org::scalegraph::util::StringCompare_((#this).FMGL(content), (#str).FMGL(content))")
	public native def compareTo(str: SString): Int;

	@Native("c++", "org::scalegraph::util::StringStartsWith_((#this).FMGL(content), (#str).FMGL(content))")
	public native def startsWith(str: SString): Boolean;

	@Native("c++", "org::scalegraph::util::StringEndsWith_((#this).FMGL(content), (#str).FMGL(content))")
	public native def endsWith(str: SString): Boolean;
}
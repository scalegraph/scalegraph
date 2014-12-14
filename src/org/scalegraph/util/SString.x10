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
package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;

@NativeCPPOutputFile("SString__TokenIterator.h")
@NativeCPPInclude("StringHelper.h")
@NativeCPPOutputFile("StringHelperImpl.h")
@NativeCPPCompilationUnit("StringHelperImpl.cc")

public final struct SString {
	
	private val content: MemoryChunk[Byte];
	
//	@Native("c++", "(#this).FMGL(content) = #c")
//	private native def setContent(c: MemoryChunk[Byte]): void;
	
	@Native("c++", "org::scalegraph::util::charsToUTF8_(#chars)")
	private static native def charsToUTF8(chars: MemoryChunk[Char]): MemoryChunk[Byte];

	@Native("c++", "org::scalegraph::util::charToUTF8_(#ch, #bytes)")
	private static native def charToUTF8(ch: Char, bytes: MemoryChunk[Byte]): MemoryChunk[Byte];

	@Native("c++", "org::scalegraph::util::UTF8ToChars_(#bytes)")
	private static native def UTF8ToChars(bytes: MemoryChunk[Byte]): MemoryChunk[Char];

	@Native("c++", "org::scalegraph::util::UTF8CodeLength_((x10_byte)#b0)")
	private static native def UTF8CodeLength(b0: Byte): Int;
	
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
	
	public static operator (str: String) = SString(str);
	
	public def raw() = content;
	
	public def equals(that: Any): Boolean {
		if(that instanceof SString) return equals(that as SString);
		if(that instanceof String) return equals(SString(that as String));
		return false;
	}

	@Native("c++", "org::scalegraph::util::StringEqual_((#this).FMGL(content), (#that).FMGL(content))")
	public native def equals(that: SString): Boolean;
	
	public def hashCode(): Int {
		var hc: Int = 0n;
		for(i in content.range()) {
			hc = hc * 31n + (content(i) as Int);
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
	
	public def indexOf(ch: Char) = indexOf(ch, 0n);
	
	@Native("c++", "org::scalegraph::util::StringIndexOf_((#this).FMGL(content), #ch, #idx)")
	public native def indexOf(ch: Char, idx: Int) :Int;
	
	public def indexOf(str: SString) = indexOf(str, 0n);

	@Native("c++", "org::scalegraph::util::StringIndexOf_((#this).FMGL(content), (#str).FMGL(content), #idx)")
	public native def indexOf(str: SString, idx: Int) :Int;
	
	public def lastIndexOf(ch: Char) = lastIndexOf(ch, 0n);

	@Native("c++", "org::scalegraph::util::StringLastIndexOf_((#this).FMGL(content), #ch, #idx)")
	public native def lastIndexOf(ch: Char, idx: Int): Int;
	
	public def lastIndexOf(str: SString) = lastIndexOf(str, 0n);

	@Native("c++", "org::scalegraph::util::StringLastIndexOf_((#this).FMGL(content), (#str).FMGL(content), #idx)")
	public native def lastIndexOf(str: SString, idx: Int): Int;
	
	public def replace(oldChar :Char, newChar :Char) {
		// shortcut
		if(indexOf(oldChar, 0n) == -1n) return this;
		
		val new_char = charToUTF8(newChar, MemoryChunk.make[Byte](4));
		val buf = new GrowableMemory[Byte]();
		buf.grow(content.size());
		var cur_pos :Int = 0n;
		while(true) {
			val next_pos = indexOf(oldChar, cur_pos);
			if(next_pos == -1n) break;
			buf.add(content.subpart(cur_pos, next_pos - cur_pos));
			buf.add(new_char);
			cur_pos = next_pos + UTF8CodeLength(content(next_pos));
		}
		buf.add(content.subpart(cur_pos, content.size() - cur_pos));
		buf.add(0Y);
		new_char.del();
		return new SString(buf.backingStore().subpart(0, buf.size()-1));
	}
	
	public def replace(target :SString, replacement :SString) {
		// shortcut
		if(indexOf(target, 0n) == -1n) return this;
		
		val buf = new GrowableMemory[Byte]();
		buf.grow(content.size());
		var cur_pos :Int = 0n;
		while(true) {
			val next_pos = indexOf(target, cur_pos);
			if(next_pos == -1n) break;
			buf.add(content.subpart(cur_pos, next_pos - cur_pos));
			buf.add(replacement.content);
			cur_pos = next_pos + target.size();
		}
		buf.add(content.subpart(cur_pos, content.size() - cur_pos));
		buf.add(0Y);
		return new SString(buf.backingStore().subpart(0, buf.size()-1));
	}
	
	@NativeRep("c++", "org::scalegraph::util::SString__TokenIterator<#T >", null, null)
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
			var tokenCount: Int = 0n;
			for(t in this) ++tokenCount;
			return tokenCount;
		}
		public def result() {
			val array = MemoryChunk.make[SString](size());
			var tokenCount: Int = 0n;
			for(t in this) array(tokenCount++) = t;
			return array;
		}
		public def iterator() = TokenIterator(str, splitter);
		public def iterator_() = TokenIterator(str, splitter);
	}
	
	public def split(ch: Char) = new TokenCollection(this, ch);
	
	public def split(str: SString) = new TokenCollection(this, str);
	
	public def trim() {
		val length = content.size();
		var start :Int = 0n;
		for( ; start < length; ++start) {
			if(content(start) > 0x20Y) {
				break;
			}
		}
		for(var end: Int = length as Int - 1n; end >= start; --end) {
			if(content(end) > 0x20Y) {
				return SString(content.subpart(start, end + 1 - start));
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
	
	// Type Conversion: String -> Value
	@Native("c++", "org::scalegraph::util::StringToBoolean_((#this).FMGL(content))")
	public native def toBoolean() :Boolean;

	@Native("c++", "org::scalegraph::util::StringToFloat_((#this).FMGL(content))")
	public native def toFloat() :Float;

	@Native("c++", "org::scalegraph::util::StringToDouble_((#this).FMGL(content))")
	public native def toDouble() :Double;

	@Native("c++", "org::scalegraph::util::StringToByte_((#this).FMGL(content))")
	public native def toByte() :Byte;

	@Native("c++", "org::scalegraph::util::StringToShort_((#this).FMGL(content))")
	public native def toShort() :Short;

	@Native("c++", "org::scalegraph::util::StringToInt_((#this).FMGL(content))")
	public native def toInt() :Int;

	@Native("c++", "org::scalegraph::util::StringToLong_((#this).FMGL(content))")
	public native def toLong() :Long;

	@Native("c++", "org::scalegraph::util::StringToUByte_((#this).FMGL(content))")
	public native def toUByte() :UByte;

	@Native("c++", "org::scalegraph::util::StringToShort_((#this).FMGL(content))")
	public native def toUShort() :UShort;

	@Native("c++", "org::scalegraph::util::StringToUInt_((#this).FMGL(content))")
	public native def toUInt() :UInt;
	
	@Native("c++", "org::scalegraph::util::StringToULong_((#this).FMGL(content))")
	public native def toULong() :ULong;
	
	
	@Native("c++", "org::scalegraph::util::StringFormat_((#fmt)->FMGL(content),#o1)")
	public static native def format[T1](fmt :SString, o1 :T1) :SString;
	
	@Native("c++", "org::scalegraph::util::StringFormat_((#fmt)->FMGL(content),#o1,#o2)")
	public static native def format[T1,T2](fmt :SString, o1 :T1, o2 :T2) :SString;
	
	@Native("c++", "org::scalegraph::util::StringFormat_((#fmt)->FMGL(content),#o1,#o2,#o3)")
	public static native def format[T1,T2,T3](fmt :SString, o1 :T1, o2 :T2, o3 :T3) :SString;
	
	@Native("c++", "org::scalegraph::util::StringFormat_((#fmt)->FMGL(content),#o1,#o2,#o3,#o4)")
	public static native def format[T1,T2,T3,T4](fmt :SString, o1 :T1, o2 :T2, o3 :T3, o4 :T4) :SString;
	
	@Native("c++", "org::scalegraph::util::StringFormat_((#fmt)->FMGL(content),#o1,#o2,#o3,#o4,#o5)")
	public static native def format[T1,T2,T3,T4,T5](fmt :SString, o1 :T1, o2 :T2, o3 :T3, o4 :T4, o5 :T5) :SString;
	
	@Native("c++", "org::scalegraph::util::StringFormat_((#fmt)->FMGL(content),#o1,#o2,#o3,#o4,#o5,#o6)")
	public static native def format[T1,T2,T3,T4,T5,T6](fmt :SString, o1 :T1, o2 :T2, o3 :T3, o4 :T4, o5 :T5, o6 :T6) :SString;

	private def _helper(sh :StringHelperImpl, sb :SStringBuilder) { }
}

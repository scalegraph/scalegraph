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
#ifndef __ORG_SCALEGRAPH_UTIL_STRINGHELPER_H
#define __ORG_SCALEGRAPH_UTIL_STRINGHELPER_H

#include <x10rt.h>

#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS
#include <org/scalegraph/util/GrowableMemory.h>
#undef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS

namespace org { namespace scalegraph { namespace util {

/*
 * LIMITATION: These helper functions assume that the length of
 * string is less than INT_MAX, which is 2^31 -1 on many platforms.
 */

class SString;

#define UTF8_CHAR_BYTES(c, bytesCount) \
	if(c.v < 0x80) bytesCount += 1; \
	else if(c.v < 0x800) bytesCount += 2; \
	else if(c.v < 0x10000) bytesCount += 3; \
	else bytesCount += 4

#define UTF8_CODE_LENGTH(b0, bytesCount) \
	if((b0 & 0x80) == 0x00) bytesCount += 1; \
	else if((b0 & 0xE0) == 0xC0) bytesCount += 2; \
	else if((b0 & 0xF0) == 0xE0) bytesCount += 3; \
	else bytesCount += 4

/**
 * returns null terminated utf-8 string.
 */
MemoryChunk<x10_byte> charsToUTF8_(const MemoryChunk<x10_char>& chars);

/**
 * Encodes ch and store the result to bytes array.
 * Returns the length of encoded stream.
 */
MemoryChunk<x10_byte> charToUTF8_(x10_char ch, const MemoryChunk<x10_byte>& bytes);

/**
 * Returns non null terminated chars String
 */
MemoryChunk<x10_char> UTF8ToChars_(const MemoryChunk<x10_byte>& bytes);

/**
 * Returns the number of characters in the input byte stream.
 */
int UTF8charsCount_(const MemoryChunk<x10_byte>& bytes);

static inline int UTF8CodeLength_(x10_byte b0) {
	int len = 0;
	UTF8_CODE_LENGTH(b0, len);
	return len;
}

static inline int UTF8CodeLength_(x10_char ch) {
	int len = 0;
	UTF8_CHAR_BYTES(ch, len);
	return len;
}

int StringIndexOf_(const MemoryChunk<x10_byte>& th, x10_char ch, int from);

int StringIndexOf_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str, int from);

int StringLastIndexOf_(const MemoryChunk<x10_byte>& th, x10_char ch, int from);

int StringLastIndexOf_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str, int from);

bool StringEqual_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str);

int StringCompare_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str);

bool StringStartsWith_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str);

bool StringEndsWith_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str);

// Type conversion
x10_boolean StringToBoolean_(const MemoryChunk<x10_byte>& th);

x10_float StringToFloat_(const MemoryChunk<x10_byte>& th);

x10_double StringToDouble_(const MemoryChunk<x10_byte>& th);

x10_byte StringToByte_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_short StringToShort_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_int StringToInt_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_long StringToLong_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_ubyte StringToUByte_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_ushort StringToUShort_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_uint StringToUInt_(const MemoryChunk<x10_byte>& th, int radix = 10);

x10_ulong StringToULong_(const MemoryChunk<x10_byte>& th, int radix = 10);

/**
 * Returns null terminated string poitner.
 * NOTE: If the given string is not null terminated,
 * this function will change the content of the string.
 */
x10_byte* StringCstr_(SString& str);

MemoryChunk<x10_byte> StringFromX10String(x10::lang::String* x10str);

#undef UTF8_CHAR_BYTES
#undef UTF8_CODE_LENGTH

} } } // namespace org { namespace scalegraph { namespace util {

#endif // __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_NATIVE_H

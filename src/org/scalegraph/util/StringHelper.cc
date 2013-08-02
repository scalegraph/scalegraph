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
#include <x10aux/config.h>

#include <x10aux/throw.h>

#include <x10/lang/String.h>
#include <x10/lang/NumberFormatException.h>

#include <org/scalegraph/util/StringHelper.h>
#include <org/scalegraph/util/SString.h>

#include <errno.h>
#include <stdarg.h>

namespace org { namespace scalegraph { namespace util {

#define UTF8_CHAR_BYTES(c, bytesCount) \
	if(c.v < 0x80) bytesCount += 1; \
	else if(c.v < 0x800) bytesCount += 2; \
	else if(c.v < 0x10000) bytesCount += 3; \
	else bytesCount += 4

#define UTF8_ENCODE_CHAR(c, buffer, index) \
	if(c.v < 0x80) { \
		buffer[index++] = (((c.v      )       )       ); \
	} \
	else if(c.v < 0x800) { \
		buffer[index++] = (((c.v >>  6)       ) | 0xC0); \
		buffer[index++] = (((c.v      ) & 0x3F) | 0x80); \
	} \
	else if(c.v < 0x10000) { \
		buffer[index++] = (((c.v >> 12)       ) | 0xE0); \
		buffer[index++] = (((c.v >>  6) & 0x3F) | 0x80); \
		buffer[index++] = (((c.v      ) & 0x3F) | 0x80); \
	} \
	else { \
		buffer[index++] = (((c.v >> 18)       ) | 0xF0); \
		buffer[index++] = (((c.v >> 12) & 0x3F) | 0x80); \
		buffer[index++] = (((c.v >>  6) & 0x3F) | 0x80); \
		buffer[index++] = (((c.v      ) & 0x3F) | 0x80); \
	}

#define UTF8_CODE_LENGTH(b0, bytesCount) \
	if((b0 & 0x80) == 0x00) bytesCount += 1; \
	else if((b0 & 0xE0) == 0xC0) bytesCount += 2; \
	else if((b0 & 0xF0) == 0xE0) bytesCount += 3; \
	else bytesCount += 4

#define UTF8_DECODE_CHAR(ch, bytes, index) \
	x10_char ch; \
	int b0 = bytes[index++]; \
	if((b0 & 0x80) == 0x00) { \
		ch.v = b0; \
	} \
	else if((b0 & 0xE0) == 0xC0) { \
		int b1 = bytes[index++]; \
		ch.v =(((b0 & 0x1F) << 6) | \
			((b1 & 0x3F)     )); \
	} \
	else if((b0 & 0xF0) == 0xE0) { \
		int b1 = bytes[index++]; \
		int b2 = bytes[index++]; \
		ch.v =(((b0 & 0x0F) << 12) | \
			((b1 & 0x3F) <<  6) | \
			((b2 & 0x3F)     )); \
	} \
	else { \
		int b1 = bytes[index++]; \
		int b2 = bytes[index++]; \
		int b3 = bytes[index++]; \
		ch.v =(((b0 & 0x08) << 18) | \
			((b1 & 0x3F) << 12) | \
			((b2 & 0x3F) <<  6) | \
			((b3 & 0x3F)     )); \
	}


MemoryChunk<x10_byte> charsToUTF8_(const MemoryChunk<x10_char>& chars) {
	int bytesCount = 0;
	int chars_size = chars.FMGL(data).FMGL(size);
	x10_char* chars_ptr = chars.FMGL(data).FMGL(pointer);
	for(int i = 0; i < chars_size; ++i) {
		x10_char c = chars_ptr[i];
		UTF8_CHAR_BYTES(c, bytesCount);
	}
	MemoryChunk<x10_byte> bytes = MemoryChunk<x10_byte>::_make(bytesCount + 1);
	x10_byte* bytes_ptr = bytes.FMGL(data).FMGL(pointer);
	int bytesIndex = 0;
	for(int i = 0; i < chars_size; ++i) {
		x10_char c = chars_ptr[i];
		UTF8_ENCODE_CHAR(c, bytes_ptr, bytesIndex);
	}
	bytes_ptr[bytesIndex] = 0;
	assert (bytesIndex = bytesCount);
	return bytes.subpart(0, bytesIndex);
}

MemoryChunk<x10_byte> charToUTF8_(x10_char ch, const MemoryChunk<x10_byte>& bytes) {
	int bytesCount = 0;
	x10_byte* bytes_ptr = bytes.FMGL(data).FMGL(pointer);
	UTF8_ENCODE_CHAR(ch, bytes_ptr, bytesCount);
	MemoryChunk<x10_byte> mc = { MCData_Impl<x10_byte>(bytes_ptr, bytes_ptr, bytesCount) };
	return mc;
}

MemoryChunk<x10_char> UTF8ToChars_(const MemoryChunk<x10_byte>& bytes) {
	x10_byte* bytes_ptr = bytes.FMGL(data).FMGL(pointer);
	int bytes_size = bytes.FMGL(data).FMGL(size);
	int charsCount = 0;
	for(int i = 0; i < bytes_size; ++charsCount) {
		int b0 = bytes_ptr[i];
		UTF8_CODE_LENGTH(b0, i);
	}
	MemoryChunk<x10_char> chars = MemoryChunk<x10_char>::_make(charsCount);
	x10_char* chars_ptr = chars.FMGL(data).FMGL(pointer);
	charsCount = 0;
	for(int i = 0; i < bytes_size; ++charsCount) {
		UTF8_DECODE_CHAR(ch, bytes_ptr, i);
		chars_ptr[charsCount] = ch;
	}
	return chars;
}

int UTF8charsCount_(const MemoryChunk<x10_byte>& bytes) {
	x10_byte* bytes_ptr = bytes.FMGL(data).FMGL(pointer);
	int bytes_size = bytes.FMGL(data).FMGL(size);
	int charsCount = 0;
	for(int i = 0; i < bytes_size; ++charsCount) {
		int b0 = bytes_ptr[i];
		UTF8_CODE_LENGTH(b0, i);
	}
	return charsCount;
}

// TODO: optimize search methods

int StringIndexOf_(const MemoryChunk<x10_byte>& th, x10_char ch, int from) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte buf[4];
	int bytesCount = 0;
	UTF8_ENCODE_CHAR(ch, buf, bytesCount);
	int lastIndex = size - bytesCount;
	if(bytesCount == 1) {
		for(int i = from; i <= lastIndex; ++i) {
			if(ptr[i] == buf[0]) return i;
		}
	}
	else if(bytesCount == 2) {
		for(int i = from; i <= lastIndex; ++i) {
			if((ptr[i+0] == buf[0]) &
			   (ptr[i+1] == buf[1])) return i;
		}
	}
	else if(bytesCount == 3) {
		for(int i = from; i <= lastIndex; ++i) {
			if((ptr[i+0] == buf[0]) &
			   (ptr[i+1] == buf[1]) &
			   (ptr[i+2] == buf[2])) return i;
		}
	}
	else {
		for(int i = from; i <= lastIndex; ++i) {
			if((ptr[i+0] == buf[0]) &
			   (ptr[i+1] == buf[1]) &
			   (ptr[i+2] == buf[2]) &
			   (ptr[i+3] == buf[3])) return i;
		}
	}
	return -1;
}

int StringIndexOf_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str, int from) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte* str_ptr = str.FMGL(data).FMGL(pointer);
	int str_size = str.FMGL(data).FMGL(size);
	int lastIndex = size - str_size;
	for(int i = from; i <= lastIndex; ++i) {
		if(memcmp(ptr + i, str_ptr, str_size) == 0)
			return i;
	}
	return -1;
}

int StringLastIndexOf_(const MemoryChunk<x10_byte>& th, x10_char ch, int from) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte buf[4];
	int bytesCount = 0;
	UTF8_ENCODE_CHAR(ch, buf, bytesCount);
	int lastIndex = size - bytesCount;
	if(bytesCount == 1) {
		for(int i = lastIndex; i >= from; --i) {
			if(ptr[i] == buf[0]) return i;
		}
	}
	else if(bytesCount == 2) {
		for(int i = lastIndex; i >= from; --i) {
			if((ptr[i+0] == buf[0]) &
			   (ptr[i+1] == buf[1])) return i;
		}
	}
	else if(bytesCount == 3) {
		for(int i = lastIndex; i >= from; --i) {
			if((ptr[i+0] == buf[0]) &
			   (ptr[i+1] == buf[1]) &
			   (ptr[i+2] == buf[2])) return i;
		}
	}
	else {
		for(int i = lastIndex; i >= from; --i) {
			if((ptr[i+0] == buf[0]) &
			   (ptr[i+1] == buf[1]) &
			   (ptr[i+2] == buf[2]) &
			   (ptr[i+3] == buf[3])) return i;
		}
	}
	return -1;
}

int StringLastIndexOf_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str, int from) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte* str_ptr = str.FMGL(data).FMGL(pointer);
	int str_size = str.FMGL(data).FMGL(size);
	int lastIndex = size - str_size;
	for(int i = lastIndex; i >= from; --i) {
		if(memcmp(ptr + i, str_ptr, str_size) == 0)
			return i;
	}
	return -1;
}

bool StringEqual_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte* str_ptr = str.FMGL(data).FMGL(pointer);
	int str_size = str.FMGL(data).FMGL(size);
	if(size != str_size) return false;
	return memcmp(ptr, str_ptr, size) == 0;
}

int StringCompare_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte* str_ptr = str.FMGL(data).FMGL(pointer);
	int str_size = str.FMGL(data).FMGL(size);
	int cmp_size = size < str_size ? size : str_size;
	int cmp = memcmp(ptr, str_ptr, cmp_size);
	if(cmp == 0) cmp = size - str_size;
	return cmp;
}

bool StringStartsWith_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte* str_ptr = str.FMGL(data).FMGL(pointer);
	int str_size = str.FMGL(data).FMGL(size);
	if(size < str_size) return false;
	return memcmp(ptr, str_ptr, str_size) == 0;
}

bool StringEndsWith_(const MemoryChunk<x10_byte>& th, const MemoryChunk<x10_byte>& str) {
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	int size = th.FMGL(data).FMGL(size);
	x10_byte* str_ptr = str.FMGL(data).FMGL(pointer);
	int str_size = str.FMGL(data).FMGL(size);
	if(size < str_size) return false;
	x10_byte* cmp_ptr = ptr + size - str_size;
	return memcmp(cmp_ptr, str_ptr, str_size) == 0;
}

x10_byte* StringCstr_(SString& str) {
	x10_byte* ptr = str.FMGL(content).FMGL(data).FMGL(pointer);
	int size = str.FMGL(content).FMGL(data).FMGL(size);
	if(ptr[size] != 0) {
		x10_byte* old_ptr = ptr;
		MemoryChunk<x10_byte> nb = MemoryChunk<x10_byte>::_make(size+1);
		ptr = nb.FMGL(data).FMGL(pointer);
		memcpy(ptr, old_ptr, size);
		ptr[size] = 0;
		str.FMGL(content) = nb.subpart(0, size);
	}
	return ptr;
}

MemoryChunk<x10_byte> StringFromX10String(x10::lang::String* x10str) {
	x10_byte* ptr = reinterpret_cast<x10_byte*>(const_cast<char*>(x10str->c_str()));
	MemoryChunk<x10_byte> mc = { MCData_Impl<x10_byte>(ptr, ptr, x10str->length()) };
	return mc;
}

// Type conversion
x10_boolean StringToBoolean_(const MemoryChunk<x10_byte>& th) {
	if(th.FMGL(data).FMGL(size) != 4) return (x10_boolean) false;
	x10_byte* ptr = th.FMGL(data).FMGL(pointer);
	if( (ptr[0] == 't' | ptr[0] == 'T') &
	    (ptr[1] == 'r' | ptr[1] == 'R') &
	    (ptr[2] == 'u' | ptr[2] == 'U') &
	    (ptr[3] == 'e' | ptr[3] == 'E') )
	{
		return true;
	}
	return false;
}

void throwNumberFormatException(const MemoryChunk<x10_byte>& th) {
	org::scalegraph::util::SString str = { th };
	x10aux::throwException(x10::lang::NumberFormatException::_make(
			x10::lang::String::_make(reinterpret_cast<char*>(
					StringCstr_(str)), true)));
}

#define C_STR_BEGIN(th) \
	char* orig_ = reinterpret_cast<char*>((th).FMGL(data).FMGL(pointer)); \
	char* start = orig_; \
	int len = (th).FMGL(data).FMGL(size); \
	char stackbuf_[128]; \
	char* heapbuf_ = NULL; \
	if(start[len] != 0) { \
		start = (len < 128) ? stackbuf_ : (heapbuf_ = new char[len+1]); \
		memcpy(start, orig_, len); \
		start[len] = 0; \
	}

#define C_STR_END delete [] heapbuf_

x10_float StringToFloat_(const MemoryChunk<x10_byte>& th) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_float ans = strtof(start, &end);
    if (errno != 0 || ((end-start) != len)) {
    	C_STR_END;
    	throwNumberFormatException(th);
    }
    C_STR_END;
    return ans;
}

x10_double StringToDouble_(const MemoryChunk<x10_byte>& th) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_double ans = strtod(start, &end);
    if (errno != 0 || ((end-start) != len)) {
    	C_STR_END;
    	throwNumberFormatException(th);
    }
    C_STR_END;
    return ans;
}

x10_byte StringToByte_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_int ans = strtol(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        (ans != (x10_byte)ans) ||
        ((end-start) != len)) {
        C_STR_END;
    	throwNumberFormatException(th);
    }
    C_STR_END;
    return (x10_byte)ans;
}

x10_short StringToShort_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_int ans = strtol(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        (ans != (x10_short)ans) ||
        ((end-start) != len)) {
        C_STR_END;
        throwNumberFormatException(th);
    }
    C_STR_END;
    return (x10_short)ans;
}

x10_int StringToInt_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_int ans = strtol(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        ((end-start) != len)) {
        C_STR_END;
        throwNumberFormatException(th);
    }
    C_STR_END;
    return ans;
}

x10_long StringToLong_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_long ans = strtoll(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        ((end-start) != len)) {
        C_STR_END;
        throwNumberFormatException(th);
    }
    C_STR_END;
    return ans;
}

x10_ubyte StringToUByte_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_uint ans = strtoul(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        (ans != (x10_ubyte)ans) ||
        ((end-start) != len)) {
        C_STR_END;
    	throwNumberFormatException(th);
    }
    C_STR_END;
    return (x10_ubyte)ans;
}

x10_ushort StringToUShort_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_uint ans = strtoul(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        (ans != (x10_ushort)ans) ||
        ((end-start) != len)) {
        C_STR_END;
        throwNumberFormatException(th);
    }
    C_STR_END;
    return (x10_ushort)ans;
}

x10_uint StringToUInt_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_uint ans = strtoul(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        ((end-start) != len)) {
        C_STR_END;
        throwNumberFormatException(th);
    }
    C_STR_END;
    return ans;
}

x10_ulong StringToULong_(const MemoryChunk<x10_byte>& th, int radix) {
	C_STR_BEGIN(th);
    char *end;
    errno = 0;
    x10_ulong ans = strtoull(start, &end, radix);
    if (errno == ERANGE || (errno != 0 && ans == 0) ||
        ((end-start) != len)) {
        C_STR_END;
        throwNumberFormatException(th);
    }
    C_STR_END;
    return ans;
}



template <typename T> void StringBuilderAdd_(GrowableMemory<x10_byte>* th, const T& x) {
	x10::lang::Reference* tmp = reinterpret_cast<x10::lang::Reference*>(x);

	int size = th->size();
	int capacity = th->capacity();
	int space = capacity - size;
	char* ptr = (char*)th->backingStore().FMGL(data).FMGL(pointer);
	int reqsize = snprintf(ptr + size, space, tmp->toString()->c_str());
	th->grow(size + reqsize + 1);
	th->setSize(size + reqsize);
	if(reqsize >= space) {
		// insufficient buffer
		ptr = (char*)th->backingStore().FMGL(data).FMGL(pointer);
		int ret = snprintf(ptr + size, reqsize + 1, tmp->toString()->c_str());
		(void) ret;
		assert (ret == reqsize);
	}
}

template <> void StringBuilderAdd_<SString>(GrowableMemory<x10_byte>* th, const SString& x) {
	th->org::scalegraph::util::GrowableMemoy<x10_byte>::add(x.FMGL(content));
}
template <> void StringBuilderAdd_<x10_int>(GrowableMemory<x10_byte>* th, const x10_int& x) {
	StringBuilderFmtAdd_(th, "%d", x);
}
template <> void StringBuilderAdd_<x10_uint>(GrowableMemory<x10_byte>* th, const x10_uint& x) {
	StringBuilderFmtAdd_(th, "%u", x);
}
template <> void StringBuilderAdd_<x10_float>(GrowableMemory<x10_byte>* th, const x10_float& x) {
	StringBuilderFmtAdd_(th, "%f", x);
}
template <> void StringBuilderAdd_<x10_double>(GrowableMemory<x10_byte>* th, const x10_double& x) {
	StringBuilderFmtAdd_(th, "%lf", x);
}
template <> void StringBuilderAdd_<x10_long>(GrowableMemory<x10_byte>* th, const x10_long& x) {
	StringBuilderFmtAdd_(th, "%ld", x);
}
template <> void StringBuilderAdd_<x10_ulong>(GrowableMemory<x10_byte>* th, const x10_ulong& x) {
	StringBuilderFmtAdd_(th, "%lu", x);
}
template <> void StringBuilderAdd_<x10_short>(GrowableMemory<x10_byte>* th, const x10_short& x) {
	StringBuilderFmtAdd_(th, "%d", x);
}
template <> void StringBuilderAdd_<x10_ushort>(GrowableMemory<x10_byte>* th, const x10_ushort& x) {
	StringBuilderFmtAdd_(th, "%u", x);
}
template <> void StringBuilderAdd_<x10_char>(GrowableMemory<x10_byte>* th, const x10_char& x) {
	StringBuilderFmtAdd_(th, "%c", x);
}
template <> void StringBuilderAdd_<x10_byte>(GrowableMemory<x10_byte>* th, const x10_ubyte& x) {
	StringBuilderFmtAdd_(th, "%d", x);
}
template <> void StringBuilderAdd_<x10_ubyte>(GrowableMemory<x10_byte>* th, const x10_ubyte& x) {
	StringBuilderFmtAdd_(th, "%u", x);
}
template <> void StringBuilderAdd_<x10_boolean>(GrowableMemory<x10_byte>* th, const x10_boolean& x) {
	StringBuilderFmtAdd_(th, x ? "true" : "false");
}

void StringBuilderFmtAdd_(GrowableMemory<x10_byte>* th, const char* fmt, ...) {
	va_list ap;

	int size = th->size();
	int capacity = th->capacity();
	int space = capacity - size;
	char* ptr = (char*)th->backingStore().FMGL(data).FMGL(pointer);
	va_start(ap, fmt);
	int reqsize = vsnprintf(ptr + size, space, fmt, ap);
	va_end(ap);
	th->grow(size + reqsize + 1);
	th->setSize(size + reqsize);
	if(reqsize >= space) {
		// insufficient buffer
		ptr = (char*)th->backingStore().FMGL(data).FMGL(pointer);
		va_start(ap, fmt);
		int ret = vsnprintf(ptr + size, reqsize + 1, fmt, ap);
		va_end(ap);
	    (void) ret;
	    assert (ret == reqsize);
	}
}

void StringBuilderFmtAdd_(GrowableMemory<x10_byte>* th, const MemoryChunk<x10_byte>& fmt, ...) {
	va_list ap;
	C_STR_BEGIN(fmt);

	int size = th->size();
	int capacity = th->capacity();
	int space = capacity - size;
	char* ptr = (char*)th->backingStore().FMGL(data).FMGL(pointer);
	va_start(ap, fmt);
	int reqsize = vsnprintf(ptr + size, space, start, ap);
	va_end(ap);
	th->grow(size + reqsize + 1);
	th->setSize(size + reqsize);
	if(reqsize >= space) {
		// insufficient buffer
		ptr = (char*)th->backingStore().FMGL(data).FMGL(pointer);
		va_start(ap, fmt);
		int ret = vsnprintf(ptr + size, reqsize + 1, start, ap);
		va_end(ap);
	    (void) ret;
	    assert (ret == reqsize);
	}

	C_STR_END;
}

SString StringFormat_(const MemoryChunk<x10_byte>& fmt, ...) {
	va_list ap;
	GrowableMemory<x10_byte>* th = GrowableMemory<x10_byte>::_make();
	va_start(ap, fmt);
	StringBuilderFmtAdd_(th, fmt, ap);
	va_end(ap);
	return SString::_make(th);
}

// explisit instantiation
template <> void StringBuilderAdd_<SString>(GrowableMemory<x10_byte>* th, const SString& x);
template <> void StringBuilderAdd_<x10_int>(GrowableMemory<x10_byte>* th, const x10_int& x);
template <> void StringBuilderAdd_<x10_uint>(GrowableMemory<x10_byte>* th, const x10_uint& x);
template void StringBuilderAdd_<x10_float>(GrowableMemory<x10_byte>* th, const x10_float& x);
template void StringBuilderAdd_<x10_double>(GrowableMemory<x10_byte>* th, const x10_double& x);
template void StringBuilderAdd_<x10_long>(GrowableMemory<x10_byte>* th, const x10_long& x);
template void StringBuilderAdd_<x10_ulong>(GrowableMemory<x10_byte>* th, const x10_ulong& x);
template void StringBuilderAdd_<x10_short>(GrowableMemory<x10_byte>* th, const x10_short& x);
template void StringBuilderAdd_<x10_ushort>(GrowableMemory<x10_byte>* th, const x10_ushort& x);
template void StringBuilderAdd_<x10_char>(GrowableMemory<x10_byte>* th, const x10_char& x);
template void StringBuilderAdd_<x10_byte>(GrowableMemory<x10_byte>* th, const x10_ubyte& x);
template void StringBuilderAdd_<x10_ubyte>(GrowableMemory<x10_byte>* th, const x10_ubyte& x);
template void StringBuilderAdd_<x10_boolean>(GrowableMemory<x10_byte>* th, const x10_boolean& x);


#undef C_STR_BEGIN
#undef C_STR_END

#undef UTF8_CHAR_BYTES
#undef UTF8_ENCODE_CHAR
#undef UTF8_CODE_LENGTH
#undef UTF8_DECODE_CHAR

}}} // namespace org { namespace scalegraph { namespace util {

/*************************************************/
/* START of SString$TokenIterator */
#include <org/scalegraph/util/SString__TokenIterator.h>

x10aux::RuntimeType org::scalegraph::util::SString__TokenIterator<void>::rtt;

/* END of SString$TokenIterator */
/*************************************************/



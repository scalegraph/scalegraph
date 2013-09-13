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

#include <stdlib.h>

#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/util/SString.h>
#include <org/scalegraph/io/FileReader.h>

#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/util/tuple/Tuple2.h>

#include <org/scalegraph/io/impl/CSVHelper.h>

#include <errno.h>

namespace org { namespace scalegraph { namespace io { namespace impl {

using namespace ::x10::lang;
using ::x10::io::IOException;
using ::org::scalegraph::util::MCData_Impl;

class CSVParser {

public:
	x10_byte* start;
	x10_byte* end;
	x10_byte* next;
	bool lastElement;
	bool corrupted;
	bool doubleQuoated;

	size_t elementSize() { return end - start; }

	void nextElement(x10_byte* ptr, x10_byte* terminal) {
		// skip space
		// if double quotation
		// 	next double quotation but not double double quotation
		//
		// else
		// 	next comma

		lastElement = false;
		corrupted = false;
		doubleQuoated = false;

		// skip space
		for( ; ; ++ptr) {
			if(ptr == terminal) {
				lastElement = true;
				start = end = next = ptr;
				return ;
			}
			if(*ptr == '\n') {
				lastElement = true;
				start = end = ptr;
				next = ptr + 1;
				return ;
			}
			if(*ptr >= 0x20) {
				break;
			}
		}

		if(*ptr == '"') { // double quotation
			doubleQuoated = true;
			start = ++ptr;
			// search double quotation
			for( ; ; ++ptr) {
				if(ptr == terminal) {
					corrupted = true;
					lastElement = true;
					end = next = ptr;
					return ;
				}
				if(*ptr == '"') {
					if(ptr + 1 != end && ptr[1] == '"') {
						++ptr;
					}
					else {
						end = ptr;
						break;
					}
				}
			}
			// skip space and comma
			for( ; ; ++ptr) {
				if(ptr == terminal) {
					lastElement = true;
					next = ptr;
					return ;
				}
				if(*ptr == '\n') {
					lastElement = true;
					next = ptr + 1;
					return ;
				}
				if(*ptr == ',') {
					next = ptr + 1;
					return ;
				}
				if(*ptr >= 0x20) {
					corrupted = true;
				}
			}
		}
		else {
			start = ptr;
			// search comma
			bool cr = false;
			for( ; ; ++ptr) {
				if(ptr == terminal) {
					lastElement = true;
					end = next = ptr;
					return ;
				}
				if(*ptr == '\r') {
					cr = true;
					end = ptr;
				}
				if(*ptr == '\n') {
					lastElement = true;
					if(!cr) end = ptr;
					next = ptr + 1;
					return ;
				}
				if(*ptr == ',') {
					end = ptr;
					next = ptr + 1;
					return ;
				}
			}
		}
	}
};

static inline x10_byte* skipSpace(x10_byte* ptr, x10_byte* end) {
	for( ; *ptr <= 0x20 && ptr < end; ++ptr);
	return ptr;
}

static inline x10_byte* trimSpace(x10_byte* ptr, x10_byte* begin) {
	for( --ptr; *ptr <= 0x20 && ptr >= begin; --ptr);
	return ptr + 1;
}

NativeCSVHeader::NativeCSVHeader(x10_byte* ptr, x10_long size) {
	x10_byte* orig = ptr;
	x10_byte* terminal = ptr + size;
	CSVParser p;
	while(true) {
		p.nextElement(ptr, terminal);
		x10_byte* attName = skipSpace(p.start, p.end);
		x10_byte* attNameEnd = trimSpace(p.end, attName);
		x10_byte* typeName = NULL;
		x10_byte* typeNameEnd = NULL;
		x10_byte* ptr = attName;
		// search "<"
		for( ; ; ++ptr) {
			if(ptr == p.end) {
				// no "<"
				break;
			}
			if(*ptr == '<') {
				// found !!
				attNameEnd = trimSpace(ptr, attName);
				typeName = ptr = skipSpace(ptr+1, p.end);
				for( ; ; ++ptr) {
					if(ptr == p.end) {
						// no ">"
						break;
					}
					if(*ptr == '>') {
						typeNameEnd = trimSpace(ptr, typeName);
						break;
					}
				}
				break;
			}
		}
		if(typeNameEnd == NULL) typeName = NULL;

		MemoryChunk<x10_byte> attNameMC = { MCData_Impl<x10_byte>(orig, attName, attNameEnd - attName) };
		MemoryChunk<x10_byte> typeNameMC = { MCData_Impl<x10_byte>(orig, typeName, typeNameEnd - typeName) };
		NativeCSVAttribute att = { (typeName != NULL), p.doubleQuoated, attNameMC, typeNameMC };
		attrs.push_back(att);

		if(p.lastElement) break;
	}
	if(attrs.size() == 0) {
		x10aux::throwException(IOException::_make(String::Lit(
				"Header is no attribute. Empty file ?")));
	}
}

NativeCSVHeader* readCSVHeader(SString headerLine) {
	return new (x10aux::alloc<NativeCSVHeader>()) NativeCSVHeader(
			headerLine.FMGL(content).pointer(), headerLine.size());
}

x10_long LineNextBreak(MemoryChunk<x10_byte> data, x10_long offset)
{
	x10_byte* start = data->pointer();
	x10_byte* end = start + data->size();
	x10_byte* ptr = start + offset;
	for( ; ; ++ptr) {
		if(ptr == end) {
			return end - start;
		}
		if(*ptr == '\n') {
			return ptr + 1 - start;
		}
	}
}

Tuple2<x10_long, x10_long> LineEndAndNextBreak(MemoryChunk<x10_byte> data, x10_long offset)
{
	x10_byte* start = data->pointer();
	x10_byte* end = start + data->size();
	x10_byte* ptr = start + offset;
	bool cr = false;
	for( ; ; ++ptr) {
		if(ptr == end) {
			x10_long off = end - start;
			return Tuple2<x10_long, x10_long>::_make(off, off);
		}
		if(*ptr == '\r') {
			cr = true;
		}
		if(*ptr == '\n') {
			return Tuple2<x10_long, x10_long>::_make(
					ptr - (cr ? 1 : 0) - start,
					ptr + 1 - start);
		}
	}
}

x10_long DQCSVNextBreak(MemoryChunk<x10_byte> data, x10_long offset)
{
	x10_byte* start = data->pointer();
	x10_byte* end = start + data->size();
	x10_byte* ptr = start + offset;
	for( ; ; ++ptr) {
		if(ptr == end) {
			return end - start;
		}
		if(*ptr == '"') {
			for( ; ; ++ptr) {
				if(ptr == end) {
					return end - ptr;
				}
				if(*ptr == '\n') {
					return ptr + 1 - start;
				}
				else if(*ptr <=0x20) {
				}
				else if(*ptr == ',') {
					goto next;
				}
				else {
					break;
				}
			}
		}
	}
next:
	int DQcount = 0;
	for(++ptr ; ; ++ptr) {
		if(ptr == end) {
			return end - ptr;
		}
		else if(*ptr == '\n') {
			if(DQcount % 2 == 0) {
				return ptr + 1 - start;
			}
		}
		else if(*ptr == '"') {
			++DQcount;
		}
	}
}

MemoryChunk<x10_byte> DQCSVNextBreak(FileReader* reader)
{
	GrowableMemory<x10_byte>* buf = GrowableMemory<x10_byte>::_make();
restart:
	MemoryChunk<x10_byte> line = reader->fastReadLine()->raw();
	buf->add(line);
	x10_byte* ptr = line->pointer();
	x10_byte* end = ptr + line->size();
	for( ; ; ++ptr) {
		if(ptr == end) {
			goto restart;
		}
		if(*ptr == '"') {
			ptr = skipSpace(ptr+1, end);
			if(ptr == end) {
				return buf->raw(); // OK
			}
			if(*ptr == ',') {
				break;
			}
		}
	}
	int DQcount = 0;
	for(++ptr ; ; ++ptr) {
		if(ptr == end) {
			if(DQcount % 2 == 0) {
				return buf->raw(); // OK
			}
			line = reader->fastReadLine()->raw();
			buf->add(line);
			ptr = line->pointer();
			end = ptr + line->size();
		}
		if(*ptr == '"') ++DQcount;
	}
	return buf->raw();
}

Tuple2<x10_long, x10_long> CSVReaderParseChunk(MemoryChunk<x10_byte> data, int stride, int numElems, x10_byte** out) {
	CSVParser p;

	x10_byte* start = data->pointer();
	x10_byte* ptr = start;
	x10_byte* end = start + data->size();
//	x10_byte** out = th->FMGL(elemPtrs);

	if(numElems == 0) {
		x10aux::throwException(x10::lang::IllegalArgumentException::_make(String::Lit(
				"No attribute ?")));
	}
	if(stride == 0) {
		x10aux::throwException(x10::lang::IllegalArgumentException::_make(String::Lit(
				"No storage to store output ?")));
	}

	// initialize
	memset(out, 0x00, sizeof(x10_byte*)*(stride*numElems));

	int numOutLines = stride;
	for(int i = 0; i < stride; ++i) {
		for(int e = 0; e < numElems; ++e) {
			p.nextElement(ptr, end);
			*p.end = '\0'; // null terminate
			out[stride * e + i] = p.start;
			ptr = p.next;
			if(p.corrupted) {
				printf("Error: CSV Parser: corrupted CSV.\n");
			}
			if(p.lastElement) {
				if(e + 1 < numElems) {
					printf("Error: CSV Parser: not enough attributes\n");
				}
				break;
			}
		}
		// skip unnecessary elements
		while(!p.lastElement) {
			p.nextElement(ptr, end); ptr = p.next;
		}
		if(ptr == end) {
			numOutLines = i + 1;
			break;
		}
	}

	return Tuple2<x10_long, x10_long>::_make(ptr - start, numOutLines);
}

template <typename T> T strtot(const char* str, char **endptr);

template <> x10_boolean strtot<x10_boolean>(const char* str, char **endptr) {
	if( (str[0] == 't' | str[0] == 'T') &&
	    (str[1] == 'r' | str[1] == 'R') &&
	    (str[2] == 'u' | str[2] == 'U') &&
	    (str[3] == 'e' | str[3] == 'E') &&
	    (str[4] == '\0'))
	{
		*endptr = const_cast<char*>(&str[4]);
		return (x10_boolean) true;
	}
	*endptr = const_cast<char*>(str) + strlen(str);
	return (x10_boolean) false;
}
template <> x10_byte strtot<x10_byte>(const char* str, char **endptr) {
	x10_int r = strtol(str, endptr, 10);
	if(r != (x10_byte) r) errno = ERANGE;
	return (x10_byte) r;
}
template <> x10_ubyte strtot<x10_ubyte>(const char* str, char **endptr) {
	x10_int r = strtol(str, endptr, 10);
	if(r != (x10_ubyte) r) errno = ERANGE;
	return (x10_ubyte) r;
}
template <> x10_short strtot<x10_short>(const char* str, char **endptr) {
	x10_int r = strtol(str, endptr, 10);
	if(r != (x10_short) r) errno = ERANGE;
	return (x10_short) r;
}
template <> x10_ushort strtot<x10_ushort>(const char* str, char **endptr) {
	x10_int r = strtol(str, endptr, 10);
	if(r != (x10_ushort) r) errno = ERANGE;
	return (x10_ushort) r;
}
template <> x10_int strtot<x10_int>(const char* str, char **endptr) {
	x10_int r = strtol(str, endptr, 10);
	return r;
}
template <> x10_uint strtot<x10_uint>(const char* str, char **endptr) {
	x10_uint r = strtoul(str, endptr, 10);
	return r;
}
template <> x10_long strtot<x10_long>(const char* str, char **endptr) {
	x10_long r = strtoll(str, endptr, 10);
	return r;
}
template <> x10_ulong strtot<x10_ulong>(const char* str, char **endptr) {
	x10_ulong r = strtoull(str, endptr, 10);
	return r;
}
template <> x10_float strtot<x10_float>(const char* str, char **endptr) {
	x10_float r = strtof(str, endptr);
	return r;
}
template <> x10_double strtot<x10_double>(const char* str, char **endptr) {
	x10_double r = strtod(str, endptr);
	return r;
}
template <> x10_char strtot<x10_char>(const char* str, char **endptr) {
	x10_int r = strtol(str, endptr, 16);
	if(r != (x10_short) r) errno = ERANGE;
	return x10_char(r);
}

template <typename T>
void CSVParseElements(x10_byte** elemPtrs, int lines, GrowableMemory<T>* outBuf) {
	x10_byte** ptrs = elemPtrs;
	T tmp[H_CHUNK_SIZE];

	for(int i = 0; i < lines; ++i) {
		char *endptr;
		if(ptrs[i] == NULL) {
			tmp[i] = T(0);
		}
		else {
			tmp[i] = strtot<T>((char*)ptrs[i], &endptr);
			if(errno == ERANGE) {
				printf("Warning: CSV Parser: Value range over.\n");
			}
			if(*endptr != '\0') {
				printf("Error: CSV Parser: Format error.\n");
			}
		}
	}

	MemoryChunk<T> mc = { MCData_Impl<T>(tmp, tmp, lines) };
	outBuf->add(mc);
}

void CSVParseStringElements(x10_byte** elemPtrs, int lines, GrowableMemory<SString>* outBuf, bool doubleQuoated) {
	x10_byte** ptrs = elemPtrs;
	SString tmp[H_CHUNK_SIZE];

	for(int i = 0; i < lines; ++i) {
		char *endptr;
		if(ptrs[i] == NULL) {
			MemoryChunk<x10_byte> mc = { MCData_Impl<x10_byte>(NULL, NULL, 0) };
			tmp[i].FMGL(content) = mc;
		}
		else {
			// count the length
			int len = 0;
			x10_byte* strbuf;
			if(doubleQuoated) {
				int off = 0;
				x10_byte* ptr = ptrs[i];
				while(ptr[off] != '\0') {
					if(ptr[off] == '"' && ptr[off+1] == '"') {
						++off;
					}
					++off; ++len;
				}
				strbuf = x10aux::alloc<x10_byte>(len+1);
				len = 0; off = 0;
				while(ptr[off] != '\0') {
					if(ptr[off] == '"' && ptr[off+1] == '"') {
						++off;
					}
					strbuf[len++] = ptr[off++];
				}
				strbuf[len] = '\0';
			}
			else {
				len = strlen((char*)ptrs[i]);
				strbuf = x10aux::alloc<x10_byte>(len+1);
				memcpy(strbuf, ptrs[i], len+1);
			}
			MemoryChunk<x10_byte> mc = { MCData_Impl<x10_byte>(strbuf, strbuf, len) };
			tmp[i].FMGL(content) = mc;
		}
	}

	MemoryChunk<SString> mc = { MCData_Impl<SString>(tmp, tmp, lines) };
	outBuf->add(mc);
}

// explisit instantiation
template void CSVParseElements<x10_boolean>(x10_byte**, int, GrowableMemory<x10_boolean>*);
template void CSVParseElements<x10_byte>(x10_byte**, int, GrowableMemory<x10_byte>*);
template void CSVParseElements<x10_ubyte>(x10_byte**, int, GrowableMemory<x10_ubyte>*);
template void CSVParseElements<x10_short>(x10_byte**, int, GrowableMemory<x10_short>*);
template void CSVParseElements<x10_ushort>(x10_byte**, int, GrowableMemory<x10_ushort>*);
template void CSVParseElements<x10_int>(x10_byte**, int, GrowableMemory<x10_int>*);
template void CSVParseElements<x10_uint>(x10_byte**, int, GrowableMemory<x10_uint>*);
template void CSVParseElements<x10_long>(x10_byte**, int, GrowableMemory<x10_long>*);
template void CSVParseElements<x10_ulong>(x10_byte**, int, GrowableMemory<x10_ulong>*);
template void CSVParseElements<x10_float>(x10_byte**, int, GrowableMemory<x10_float>*);
template void CSVParseElements<x10_double>(x10_byte**, int, GrowableMemory<x10_double>*);
template void CSVParseElements<x10_char>(x10_byte**, int, GrowableMemory<x10_char>*);


} } } } // namespace org { namespace scalegraph { namespace io { namespace impl {



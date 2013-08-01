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

#include <org/scalegraph/io/impl/CSVHelper.h>


namespace org { namespace scalegraph { namespace io { namespace impl {

class CSVParser {

public:
	x10_byte* start;
	x10_byte* end;
	x10_byte* next;
	bool lastElement;
	boole corrupted;
	bool doubleQuoated;

	void elementSize() { return end - start; }

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
		p.parse(ptr, terminal);
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

x10_long DQCSVNextBreak(MemoryChunk<x10_byte> data, x10_long offset)
{
	x10_byte* start = data->pointer();
	x10_byte* end = ptr + data->size();
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
	GrowableMemory* buf == GrowableMemory::_make();
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
				return ; // OK
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
				return ; // OK
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


} } } } // namespace org { namespace scalegraph { namespace io { namespace impl {



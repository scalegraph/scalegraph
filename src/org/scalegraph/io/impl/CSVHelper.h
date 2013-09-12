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
#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVHELPER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVHELPER_H

#include <gc_allocator.h>

#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS
#include <org/scalegraph/util/GrowableMemory.h>
#undef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#define ORG_SCALEGRAPH_IO_FILEREADER_H_NODEPS
#include <org/scalegraph/io/FileReader.h>
#undef ORG_SCALEGRAPH_IO_FILEREADER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TUPLE_TUPLE2_H_NODEPS
#include <org/scalegraph/util/tuple/Tuple2.h>
#undef ORG_SCALEGRAPH_UTIL_TUPLE_TUPLE2_H_NODEPS

#include <vector>

namespace org { namespace scalegraph { namespace io { namespace impl {

using ::org::scalegraph::util::MemoryChunk;
using ::org::scalegraph::util::GrowableMemory;
using ::org::scalegraph::util::SString;
using ::org::scalegraph::util::tuple::Tuple2;
using ::org::scalegraph::io::FileReader;
using ::scalegraph::gc_std;

enum { H_CHUNK_SIZE = 256 };

struct NativeCSVAttribute {
	bool includeType;
	bool doubleQuoated;
	SString name;
	SString typeName;
};

struct NativeCSVHeader {
	gc_std<NativeCSVAttribute>::vector attrs;

	NativeCSVHeader(x10_byte* ptr, x10_long size);
	~NativeCSVHeader() { }
};

NativeCSVHeader* readCSVHeader(SString headerLine);

x10_long LineNextBreak(MemoryChunk<x10_byte> data, x10_long offset);

Tuple2<x10_long, x10_long> LineEndAndNextBreak(MemoryChunk<x10_byte> data, x10_long offset);

x10_long DQCSVNextBreak(MemoryChunk<x10_byte> data, x10_long offset);
MemoryChunk<x10_byte> DQCSVNextBreak(FileReader* reader);

Tuple2<x10_long, x10_long> CSVReaderParseChunk(MemoryChunk<x10_byte> data, int stride, int numElems, x10_byte** out);

template <typename T>
void CSVParseElements(x10_byte** elemPtrs, int lines, GrowableMemory<T>* outBuf);

void CSVParseStringElements(x10_byte** elemPtrs, int lines, GrowableMemory<SString>* outBuf, bool doubleQuoated);


} } } } // namespace org { namespace scalegraph { namespace io { namespace impl {

#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVHELPER_H

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

#ifndef __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H
#define __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H

#include <stdio.h>
#include <string.h>
#include <vector>

#include <sys/types.h> 
#include <unistd.h>

#include <gc_allocator.h>
#include <fbio_fmt.h>

// TODO: ifdef NODEF e.t.c

#include <x10rt.h>
#include <x10/io/FileNotFoundException.h>
#include <x10/io/IOException.h>

#include <org/scalegraph/io/NativeFile.h>
#include <org/scalegraph/util/MemoryChunk.h>

namespace org { namespace scalegraph { namespace io { namespace fbio {

using namespace ::scalegraph::fbio;
using namespace ::x10::lang;
using ::x10::io::IOException;
using ::org::scalegraph::io::NativeFile;
using ::org::scalegraph::util::MemoryChunk;
using ::scalegraph::gc_std;

typedef FBIO_Header NativeHeader;

struct NativeAttribute {
	int32_t id;
	x10::lang::String* name;
};

typedef FBIO_Chunk NativeChunk;

struct NativeBlock {
	int64_t offset;
	// x10_long does not contain pointers.
	std::vector<x10_long> chunks;
};

class NativeHeaders {
public:
	NativeHeader header;
	// NativeAtrribue contains pointers.
	gc_std<NativeAttribute>::vector attributes;
	// NativeBlock does not contain pointers.
	std::vector<NativeBlock> blocks;
	// User Defined Header
	x10::lang::Any* udh;

	NativeHeaders(NativeFile nf);
	~NativeHeaders() { }
};

NativeHeaders* readHeaders(NativeFile nf);

void writeHeaders(
		NativeFile nf,
		int datatype,
		int numAttributes,
		int numBlocks,
		const int32_t* typeIds,
		x10::lang::String** attrNames,
		x10_long* blockOffsets, // in/out
		MemoryChunk<x10_long>* chunkSizes,
		x10::lang::Any* udf);

template <typename T> void readPrimitives(NativeFile nf,
		T *array, long numElements, long numBytes)
{
	long datalen = sizeof(T) * numElements;
	if(read(nf.handle(), array, datalen) != datalen)
		x10aux::throwException(IOException::_make(
				String::Lit("error while reading file...")));

	long padding = numBytes - datalen;
	if(padding >= 8)
		x10aux::throwException(IllegalArgumentException::_make(
				String::Lit("numBytes is too large!!")));

	if(lseek(nf.handle(), padding, SEEK_CUR) == -1)
		x10aux::throwException(IOException::_make(
				String::Lit("error while reading file...")));
}
template <typename T> void writePrimitives(NativeFile nf,
		T *array, long numElements, long numBytes)
{
	long datalen = sizeof(T) * numElements;
	if(write(nf.handle(), array, datalen) != datalen)
		x10aux::throwException(IOException::_make(
				String::Lit("error while writing file...")));

	long padding = numBytes - datalen;
	if(padding >= 8)
		x10aux::throwException(IllegalArgumentException::_make(
				String::Lit("numBytes is too large!!")));

	char emptybuf[16] = {};
	if(write(nf.handle(), emptybuf, padding) != padding)
		x10aux::throwException(IOException::_make(
				String::Lit("error while writing file...")));
}

void readStrings(NativeFile nf, String *array, long numElements, long numBytes);
long writeStrings(NativeFile nf, String *array, long numElements, long numBytes);

}}}} // namespace org { namespace scalegraph { namespace io { namespace fbio {

#endif // __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H

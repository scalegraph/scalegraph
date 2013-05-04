#ifndef __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H
#define __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H

#include <stdio.h>
#include <string.h>
#include <vector>
#include <new>

#include <x10rt.h>
#include <x10/io/FileNotFoundException.h>
#include <x10/io/IOException.h>

#include "org/scalegraph/io/fbio/fbio_fmt.h"

namespace org { namespace scalegraph { namespace io { namespace fbio {

using namespace scalegraph::fbio;
using namespace x10::lang;
using org::scalegraph::io::NativeFile;
using org::scalegraph::util::MemoryChunk;

typedef NativeHeader FBIO_Header;

struct NativeAttribute {
	int32_t id;
	x10::lang::String* name;
};

typedef NativeChunk FBIO_Chunk;

struct NativeBlock {
	int64_t offset;
	std::vector<x10_long> chunks;
};

class NativeHeaders {
public:
	NativeHeader header;
	std::vector<NativeAttribute> attributes;
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
		MemoryChunk<x10_long>** chunkSizes,
		x10::lang::Any* udf);

template <typename T> void readPrimitives(NativeFile nf,
		T *array, long numElements, long numBytes)
{
	if(fread(array, sizeof(T) * numElements, 1, nf.handle()) != 1)
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("error while reading file...")));

	long padding = numBytes - (sizeof(T) * numElements);
	if(fseek(nf.handle(), padding, SEEK_CUR) != 0)
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("error while reading file...")));
}
template <typename T> void writePrimitives(NativeFile nf,
		T *array, long numElements, long numBytes)
{
	if(fwrite(array, sizeof(T) * numElements, 1, nf.handle()) != 1)
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("error while writing file...")));

	long padding = numBytes - (sizeof(T) * numElements);
	if(fseek(nf.handle(), padding, SEEK_CUR) != 0)
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("error while writing file...")));
}

void readStrings(NativeFile nf, x10::lang::String **array, long numElements, long numBytes);
long writeStringAttribute(NativeFile nf, x10::lang::String **array, long numElements, long numBytes);

}}}} // namespace org { namespace scalegraph { namespace io { namespace fbio {

#endif // __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H

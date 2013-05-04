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

#define ALIGN(addr, length)		(((addr) + (length) - 1) & ~((length) - 1))

namespace org { namespace scalegraph { namespace io { namespace fbio {
using namespace scalegraph;

typedef NativeHeader fbio::FBIO_Header;

struct NativeAttribute {
	int32_t id;
	x10::lang::String* name;
};

typedef NativeChunk fbio::FBIO_Chunk;

struct NativeBlock {
	int64_t offset;
	std::vector<NativeChunk> chunks;
};

////////////

class NativeHeaders {

	int64_t align(int64_t offset, int64_t length) {
		return (offset + length - 1) & ~(length - 1);
	}

public:
	NativeHeader header;
	std::vector<NativeAttribute> attributes;
	std::vector<NativeBlock> blocks;

	// User Defined Header
	x10::lang::Any* udh;

	NativeHeaders(NativeFile nf) {
		using namespace fbio;
		using namespace org::scalegraph::io;
		using namespace x10::lang;

		FILE* fp = nf.handle();

		if(fread(&header, sizeof(header), 1, fp) != 1) {
			x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
		}
		if(memcmp(header.magic, "DRBF", 4) != 0) {
			x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
		}

		int64_t propSize = header.seclen[0];
		int64_t blocInfoSize = header.seclen[1];
		int64_t udhSize = header.seclen[2];

		int64_t propSectionSize = align(propSize, 8);
		int64_t blocInfoSectionSize = align(blocInfoSize, 8);
		int64_t udhSectionSize = align(udhSize, 8);

		int64_t remainHeaderSize = propSectionSize + blocInfoSectionSize + udhSectionSize;
		int8_t* headerMemory = x10aux::alloc(remainHeaderSize, false);
		if(fread(headerMemory, remainHeaderSize, 1, fp) != 1) {
			x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
		}

		scalegraph::FBIO_Properties* rawProps = reinterpret_cast<FBIO_Properies*>(headerMemory);
		headerMemory += propSectionSize;
		scalegraph::FBIO_Blocks* rawBlocks = reinterpret_cast<FBIO_Blocks*>(headerMemory);
		headerMemory += blocInfoSectionSize;
		int8_t* rawUserDefinedHeader = headerMemory;

		const int numProps = rawProps->numProperties;
		{
			int offset = offsetof(FBIO_Properties, properties);
			headerMemory = (int8_t*)rawProps;
			for(int i = 0; i < numProps; i++) {
				scalegraph::FBIO_Property* prop = (FBIO_Property*)&headerMemory[offset];
				String* name = String::Steal(
						x10aux::alloc_utils::strndup(prop->name.data, prop->name.length));
				NativeAttribute att = { prop->id, name };
				properties.push_back(att);
				offset += align(sizeof(int32_t) * 2 + prop->name.length, 4);  // next attribute
			}
		}

		{
			scalegraph::FBIO_Block *current = rawBlocks->blocks;
			for(int b = 0; b < rawBlocks->numBlocks; b++) {
				NativeBlock block;
				block.offset = current->offset;
				for(int p = 0; p < numProps; ++p) {
					block.attrSizes.push_back(current->chunks[p]);
				}
				blocks.push_back(block);
				current = (fbio::FBIO_Block*)(&current->chunks[numProps]);
			}
		}

		// read user defined header
		switch(header.datatype[0]) {
		case Format.TYPE_NONE:
			udh = NULL;
			break;
		case Format.TYPE_GRAPH:
			if(sizeof(fbio::FBIO_GraphHeader) != udhSize)
				x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
			FBIO_GraphHeader* raw = (FBIO_GraphHeader*)rawUserDefinedHeader;
			GraphHeader* gh = GraphHeader::_make();
			gh->FMGL(numVertexes) = raw->numVertexes;
			gh->FMGL(numEdges) = raw->numEdges;
			gh->FMGL(numVertexAttributes) = raw->numVertexAttributes;
			gh->FMGL(numEdgeAttributes) = raw->numEdgeAttributes;
			udh = reinterpret_cast<Any*>(gh);
			break;
		case Format.TYPE_MATRIX:
			if(sizeof(fbio::FBIO_MatrixHeader) != udhSize)
				x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
			FBIO_MatrixHeader* raw = (FBIO_MatrixHeader*)rawUserDefinedHeader;
			MatrixHeader* mh = MatrixHeader::_make();
			// TODO:
			udh = reinterpret_cast<Any*>(mh);
			break;
		case Format.TYPE_VECTOR:
			if(sizeof(fbio::FBIO_VectorHeader) != udhSize)
				x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
			FBIO_VectorHeader* raw = (FBIO_VectorHeader*)rawUserDefinedHeader;
			VectorHeader* vh = VectorHeader::_make();
			// TODO:
			udh = reinterpret_cast<Any*>(vh);
			break;
		case Format.TYPE_X10CLASS:
			// TODO: deserialize
			x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("not supported data type")));
			break;
		default:
			x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("not supported data type")));
		}

		x10aux::dealloc(props);
	}

	~NativeHeaders() { }
};

static NativeHeaders* readHeaders(NativeFile nf) {
	return new (x10aux::alloc<NativeHeaders>()) NativeHeaders(nf);
}

static void writeHeaders(
		NativeFile nf,
		int datatype,
		int numAttributes,
		int numBlocks,
		const int32_t* typeIds,
		x10::lang::String** attrNames,
		x10_long* blockOffsets, // in/out
		org::scalegraph::util::MemoryChunk<x10_long>** chunkSizes,
		x10::lang::Any* udf)
{
	using namespace fbio;
	using namespace org::scalegraph::io;
	using namespace x10::lang;

	// TODO:

	// calculate header length
	int64_t headerSize = sizeof(FBIO_Header);
	int64_t propSize = 4;
	for(int i = 0; i < numAttributes; ++i) {
		propSize += 8 + align(attrNames[i]->length(), 4);
	}
	int64_t blockInfoSize = 8 + (8 + (16 * numAttributes)) * numBlocks;
	int64_t udhSize;
	switch(datatype) {
	case Format.TYPE_NONE:
		udhSize = 0;
		break;
	case Format.TYPE_GRAPH:
		udhSize = sizeof(FBIO_GraphHeader);
		break;
	case Format.TYPE_MATRIX:
		udhSize = sizeof(FBIO_MatrixHeader);
		break;
	case Format.TYPE_VECTOR:
		udhSize = sizeof(FBIO_VectorHeader);
		break;
	case Format.TYPE_X10CLASS:
		// TODO: deserialize
		x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("not supported data type")));
		break;
	default:
		x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("not supported data type")));
	}

	int64_t headerSectionSize = align(headerSize, 8);
	int64_t propSectionSize = align(propSize, 8);
	int64_t blocInfoSectionSize = align(blocInfoSize, 8);
	int64_t udhSectionSize = align(udhSize, 8);

	int64_t totalHeaderSize = headerSectionSize + propSectionSize + blocInfoSectionSize + udhSectionSize;
	x10_byte* headerMemory = x10aux::alloc<x10_byte*>(totalHeaderSize, false);

	if(fwrite(headerMemory, totalHeaderSize, 1, nf.handle()) != 1)
		x10aux::throwException(IOException::_make(String::Lit("error while writing file")));

	x10aux::dealloc(headerMemory);
}

template <typename T> void readPrimitives(NativeFile nf, T *array, long numElements, long numBytes) {
	if(fread(array, sizeof(T) * numElements, 1, nf.handle()) != 1)
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while reading file...")));

	long padding = numBytes - (sizeof(T) * numElements);
	if(fseek(nf.handle(), padding, SEEK_CUR) != 0)
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while reading file...")));
}

void readStrings(NativeFile nf, x10::lang::String **array, long numElements, long numBytes) {
	int8_t* buffer = x10aux::alloc<int8_t>(numBytes, false);
	if(fread(buffer, numBytes, 1, nf.handle()) != 1) {
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while reading file...")));
	}
	long offset = 0L;
	for(long i = 0L; i < numElements; ++i) {
		scalegraph::FBIO_String* str_data = (scalegraph::FBIO_String*)&buffer[offset];
		int length = str_data->length;
		array[i] = x10::lang::String::Steal(
				x10aux::alloc_utils::strndup(str_data->data, length));
		offset += 4 + ALIGN(length, 4);
	}
	x10aux::dealloc(buffer);
}

template <typename T> void writePrimitives(NativeFile nf, T *array, long numElements, long numBytes) {
	if(fwrite(array, sizeof(T) * numElements, 1, nf.handle()) != 1)
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while writing file...")));

	long padding = numBytes - (sizeof(T) * numElements);
	if(fseek(nf.handle(), padding, SEEK_CUR) != 0)
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while reading file...")));
}

long writeStringAttribute(NativeFile nf, x10::lang::String **array, long numElements, long numBytes) {
	int8_t* buffer = x10aux::alloc<int8_t>(numBytes, false);
	long offset = 0L;
	for(long i = 0L; i < numElements; ++i) {
		int length = array[i]->length();
		scalegraph::FBIO_String* str_data = (scalegraph::FBIO_String*)&buffer[offset];
		str_data->length = length;
		memcpy(str_data->data, array[i]->c_str(), length);
		offset += 4 + ALIGN(length, 4);
	}
	if(fwrite(buffer, numBytes, 1, nf.handle()) != 1) {
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while writing file...")));
	}
	x10aux::dealloc(buffer);
	if(offset != numBytes) {
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("offset != numBytes")));
	}
}

}}}} // namespace org { namespace scalegraph { namespace io { namespace fbio {

#undef ALIGN

#endif // __ORG_SCALEGRAPH_IO_FBIO_NATIVESUPPORT_H

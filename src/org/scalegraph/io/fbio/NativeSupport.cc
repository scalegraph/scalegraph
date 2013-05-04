
#include <x10aux/config.h>

#include "org/scalegraph/io/fbio/NativeSupport.h"

namespace org { namespace scalegraph { namespace io { namespace fbio {

using namespace org::scalegraph::io;

inline int64_t align(int64_t offset, int64_t length) {
	return (offset + length - 1) & ~(length - 1);
}

NativeHeaders::NativeHeaders(NativeFile nf) {
	FILE* fp = nf.handle();

	if(fread(&header, sizeof(header), 1, fp) != 1) {
		x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
	}
	if(memcmp(header.magic, "DRBF", 4) != 0) {
		x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
	}

	int64_t attrSize = header.seclen[0];
	int64_t blocInfoSize = header.seclen[1];
	int64_t udhSize = header.seclen[2];

	int64_t attrSectionSize = align(attrSize, 8);
	int64_t blocInfoSectionSize = align(blocInfoSize, 8);
	int64_t udhSectionSize = align(udhSize, 8);

	int64_t remainHeaderSize = attrSectionSize + blocInfoSectionSize + udhSectionSize;
	int8_t* headerMemory = x10aux::alloc<int8_t>(remainHeaderSize, false);
	if(fread(headerMemory, remainHeaderSize, 1, fp) != 1) {
		x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
	}

	int8_t* ptr = headerMemory;
	FBIO_Attributes* rawAttrs = reinterpret_cast<FBIO_Attributes*>(ptr);
	ptr += attrSectionSize;
	scalegraph::FBIO_Blocks* rawBlocks = reinterpret_cast<FBIO_Blocks*>(ptr);
	ptr += blocInfoSectionSize;
	int8_t* rawUserDefinedHeader = ptr;

	const int numAttrs = rawAttrs->numAttributes;
	{
		int offset = 4;
		ptr = (int8_t*)rawAttrs;
		for(int i = 0; i < numAttrs; i++) {
			FBIO_Attributes* attr = (FBIO_Attributes*)&ptr[offset];
			String* name = String::Steal(
					x10aux::alloc_utils::strndup(attr->name.data, attr->name.length));
			NativeAttribute att = { attr->id, name };
			attributes.push_back(att);
			offset += align(sizeof(int32_t) * 2 + attr->name.length, 4);  // next attribute
		}
	}

	{
		FBIO_Block *current = rawBlocks->blocks;
		for(int b = 0; b < rawBlocks->numBlocks; b++) {
			NativeBlock block;
			block.offset = current->offset;
			block.chunks.resize(numAttrs);
			memcpy(&block.chunks[0], current->chunks, 16 * numAttrs);
			blocks.push_back(block);
			current = (FBIO_Block*)(&current->chunks[numAttrs]);
		}
	}

	// read user defined header
	switch(header.datatype[0]) {
	case Format.TYPE_NONE:
		udh = NULL;
		break;
	case Format.TYPE_GRAPH:
		if(sizeof(FBIO_GraphHeader) != udhSize)
			x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
		FBIO_GraphHeader* raw = (FBIO_GraphHeader*)rawUserDefinedHeader;
		GraphHeader* gh = GraphHeader::_make();
		gh->FMGL(numVertexes) = raw->numVertexes;
		gh->FMGL(numEdges) = raw->numEdges;
		gh->FMGL(numVertexAttributes) = raw->numVertexAttributes;
		gh->FMGL(numEdgeAttributes) = raw->numEdgeAttributes;
		udh = reinterpret_cast<Any*>(gh);
		break;
	case Format.TYPE_MATRIX:
		if(sizeof(FBIO_MatrixHeader) != udhSize)
			x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
		FBIO_MatrixHeader* raw = (FBIO_MatrixHeader*)rawUserDefinedHeader;
		MatrixHeader* mh = MatrixHeader::_make();
		// TODO:
		udh = reinterpret_cast<Any*>(mh);
		break;
	case Format.TYPE_VECTOR:
		if(sizeof(FBIO_VectorHeader) != udhSize)
			x10aux::throwException(IOException::_make(String::Lit("illegal file format")));
		FBIO_VectorHeader* raw = (FBIO_VectorHeader*)rawUserDefinedHeader;
		VectorHeader* vh = VectorHeader::_make();
		// TODO:
		udh = reinterpret_cast<Any*>(vh);
		break;
	case Format.TYPE_X10CLASS:
		// TODO: deserialize
		x10aux::throwException(IOException::_make(String::Lit("not supported data type")));
		break;
	default:
		x10aux::throwException(IOException::_make(String::Lit("not supported data type")));
	}

	x10aux::dealloc(headerMemory);
}

NativeHeaders* readHeaders(NativeFile nf) {
	return new (x10aux::alloc<NativeHeaders>()) NativeHeaders(nf);
}

void writeHeaders(
		NativeFile nf,
		int datatype,
		int numAttributes,
		int numBlocks,
		const int32_t* typeIds,
		x10::lang::String** attrNames,
		x10_long* blockOffsets, // in/out
		MemoryChunk<x10_long>** chunkSizes,
		x10::lang::Any* udf)
{
	// calculate header length
	int64_t headerSize = sizeof(FBIO_Header);
	int64_t attrSize = 4;
	for(int i = 0; i < numAttributes; ++i) {
		attrSize += 8 + align(attrNames[i]->length(), 4);
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
		// TODO: serialize
		x10aux::throwException(IOException::_make(String::Lit("not supported data type")));
		break;
	default:
		x10aux::throwException(IOException::_make(String::Lit("not supported data type")));
	}

	int64_t headerSectionSize = align(headerSize, 8);
	int64_t attrSectionSize = align(propSize, 8);
	int64_t blocInfoSectionSize = align(blocInfoSize, 8);
	int64_t udhSectionSize = align(udhSize, 8);

	int64_t totalHeaderSize = headerSectionSize + attrSectionSize + blocInfoSectionSize + udhSectionSize;
	int8_t* headerMemory = x10aux::alloc<int8_t*>(totalHeaderSize, false);

	// make header data
	int8_t* ptr = headerMemory;
	FBIO_Header* rawHeader = reinterpret_cast<FBIO_Header*>(ptr);
	ptr += headerSectionSize;
	FBIO_Attributes* rawAttrs = reinterpret_cast<FBIO_Attributes*>(ptr);
	ptr += attrSectionSize;
	FBIO_Blocks* rawBlocks = reinterpret_cast<FBIO_Blocks*>(ptr);
	ptr += blocInfoSectionSize;
	int8_t* rawUserDefinedHeader = ptr;

	// update offsets
	for(int b = 0; b <= numBlocks; b++) {
		blockOffsets[b] += totalHeaderSize;
	}

	// header
	memcpy(rawHeader->magic, "DRBF", 4);
	rawHeader->version = 1;
	rawHeader->datatype[0] = datatype;
	rawHeader->datatype[1] = 0;
	rawHeader->datatype[2] = 0;
	rawHeader->seclen[0] = attrSize;
	rawHeader->seclen[1] = blockInfoSize;
	rawHeader->seclen[2] = udhSize;
	raeHeader->seclen[3] = blockOffsets[numBlocks];

	// attributes
	rawAttrs->numAttributes = numAttrs;
	int offset = 4;
	ptr = (int8_t*)rawAttrs;
	for(int i = 0; i < numAttrs; i++) {
		FBIO_Attributes* attr = (FBIO_Attributes*)&ptr[offset];
		attr->id = typeIds[i];
		attr->name.length = attrNames[i]->length();
		memcpy(attr->name.data, attrNames[i]->c_str(), attr->name.length);
		offset += align(sizeof(int32_t) * 2 + attr->name.length, 4);  // next attribute
	}

	// blockInfo
	rawBlocks->numBlocks = numBlocks;
	rawBlocks->reserved = 0;
	FBIO_Block *current = rawBlocks->blocks;
	for(int b = 0; b < numBlocks; b++) {
		current->offset = blockOffsets[b];
		memcpy(current->chunks, chunkSizes[b]->pointer(), 16 * numAttrs);
		current = (FBIO_Block*)(&current->chunks[numAttrs]);
	}

	// user defined header
	switch(datatype) {
	case Format.TYPE_NONE:
		break;
	case Format.TYPE_GRAPH:
		FBIO_GraphHeader* raw = (FBIO_GraphHeader*)rawUserDefinedHeader;
		GraphHeader* gh = reinterpret_cast<GraphHeader*>(udh);
		raw->numVertexes = gh->FMGL(numVertexes);
		raw->numEdges = gh->FMGL(numEdges);
		raw->numVertexAttributes = gh->FMGL(numVertexAttributes);
		raw->numEdgeAttributes = gh->FMGL(numEdgeAttributes);
		break;
	case Format.TYPE_MATRIX:
		FBIO_MatrixHeader* raw = (FBIO_MatrixHeader*)rawUserDefinedHeader;
		MatrixHeader* gh = reinterpret_cast<MatrixHeader*>(udh);
		break;
	case Format.TYPE_VECTOR:
		FBIO_VectorHeader* raw = (FBIO_VectorHeader*)rawUserDefinedHeader;
		VectorHeader* gh = reinterpret_cast<VectorHeader*>(udh);
		break;
	case Format.TYPE_X10CLASS:
		// TODO: deserialize
		x10aux::throwException(IOException::_make(String::Lit("not supported data type")));
		break;
	default:
		x10aux::throwException(IOException::_make(String::Lit("not supported data type")));
	}

	// write to file
	if(fwrite(headerMemory, totalHeaderSize, 1, nf.handle()) != 1)
		x10aux::throwException(IOException::_make(String::Lit("error while writing file")));

	x10aux::dealloc(headerMemory);
}

void readStrings(NativeFile nf, String **array, long numElements, long numBytes) {
	int8_t* buffer = x10aux::alloc<int8_t>(numBytes, false);
	if(fread(buffer, numBytes, 1, nf.handle()) != 1) {
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("error while reading file...")));
	}
	long offset = 0L;
	for(long i = 0L; i < numElements; ++i) {
		FBIO_String* str_data = (FBIO_String*)&buffer[offset];
		int length = str_data->length;
		array[i] = x10::lang::String::Steal(
				x10aux::alloc_utils::strndup(str_data->data, length));
		offset += 4 + align(length, 4);
	}
	x10aux::dealloc(buffer);
}

long writeStringAttribute(NativeFile nf, String **array, long numElements, long numBytes) {
	int8_t* buffer = x10aux::alloc<int8_t>(numBytes, false);
	long offset = 0L;
	for(long i = 0L; i < numElements; ++i) {
		int length = array[i]->length();
		FBIO_String* str_data = (FBIO_String*)&buffer[offset];
		str_data->length = length;
		memcpy(str_data->data, array[i]->c_str(), length);
		offset += 4 + align(length, 4);
	}
	if(fwrite(buffer, numBytes, 1, nf.handle()) != 1) {
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("error while writing file...")));
	}
	x10aux::dealloc(buffer);
	if(offset != numBytes) {
		x10aux::throwException(x10::lang::IOException::_make(
				String::Lit("offset != numBytes")));
	}
}

}}}} // namespace org { namespace scalegraph { namespace io { namespace fbio {



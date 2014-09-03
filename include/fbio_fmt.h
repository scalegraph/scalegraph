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

#ifndef __SCALEGRAPH_FBIO_FMT_H
#define __SCALEGRAPH_FBIO_FMT_H

namespace scalegraph {

namespace Format {
	enum {
		HEADER_NONE = 0,
		HEADER_GRAPH = 1,
		HEADER_MATRIX = 2,
		HEADER_VECTOR = 3,
		HEADER_X10CLASS = -128,

		TYPE_BOOLEAN = 1,
		TYPE_BYTE = 2,
		TYPE_SHORT = 3,
		TYPE_INT = 4,
		TYPE_LONG = 5,
		TYPE_FLOAT = 6,
		TYPE_DOUBLE = 7,
		TYPE_UBYTE = 8,
		TYPE_USHORT = 9,
		TYPE_UINT = 10,
		TYPE_ULONG = 11,
		TYPE_CHAR = 12,
		TYPE_STRING = 13,
	};
} // namespace Format {

namespace fbio {

struct FBIO_Header {
	int8_t magic[4];
	int8_t version;
	int8_t datatype[3];
	int64_t seclen[4];
};

struct FBIO_String {
	int32_t length;
	char data[1];
};

struct FBIO_Attribute {
	int32_t id;
	FBIO_String name;
};

struct FBIO_Attributes {
	int32_t numAttributes;
	FBIO_Attribute attributes[1];
};

struct FBIO_Chunk {
	int64_t numBytes;
	int64_t numElements;
};

struct FBIO_Block {
	int64_t offset;
	FBIO_Chunk chunks[1];
} ;

struct FBIO_Blocks {
	int32_t numBlocks;
	int32_t reserved;
	FBIO_Block blocks[1];
};

struct FBIO_GraphHeader {
	int64_t numVertexes;
	int64_t numEdges;
	int32_t numVertexAttributes;
	int32_t numEdgeAttributes;
};

struct FBIO_MatrixHeader {
	// TODO:
};

struct FBIO_VectorHeader {
	// TODO:
};

} // namespace fbio {

} // namespace scalegraph {

#endif // __SCALEGRAPH_FBIO_FMT_H

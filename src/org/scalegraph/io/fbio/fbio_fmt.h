#ifndef __ORG_SCALEGRAPH_IO_FORMAT_H
#define __ORG_SCALEGRAPH_IO_FORMAT_H

namespace scalegraph {

namespace Format {
	enum {
		TYPE_NONE = 0,
		TYPE_GRAPH = 1,
		TYPE_MATRIX = 2,
		TYPE_VECTOR = 3,
		TYPE_X10CLASS = 128,

		ATTR_BOOLEAN = 1,
		ATTR_BYTE = 2,
		ATTR_SHORT = 3,
		ATTR_INT = 4,
		ATTR_LONG = 5,
		ATTR_FLOAT = 6,
		ATTR_DOUBLE = 7,
		ATTR_UBYTE = 8,
		ATTR_USHORT = 9,
		ATTR_UINT = 10,
		ATTR_ULONG = 11,
		ATTR_CHAR = 12,
		ATTR_STRING = 13,
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
	int8_t data[1];
};

struct FBIO_Attribute {
	int32_t id;
	FBIO_String name;
};

struct FBIO_Attributes {
	int32_t numProperties;
	FBIO_Attribute properties[1];
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

#endif // __ORG_SCALEGRAPH_IO_FORMAT_H

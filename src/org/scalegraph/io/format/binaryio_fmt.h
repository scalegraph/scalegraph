#ifndef __ORG_SCALEGRAPH_IO_FORMAT_H
#define __ORG_SCALEGRAPH_IO_FORMAT_H

namespace scalegraph {

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

struct FBIO_Property {
	int32_t id;
	FBIO_String name;
};

struct FBIO_Properties {
	int32_t numProperties;
	FBIO_Property properties[1];
};

struct FBIO_PropertySize {
	int64_t numBytes;
	int64_t numElements;
};

struct FBIO_Block {
	int64_t offset;
	FBIO_PropertySize propSizes[1];
} ;

struct FBIO_Blocks {
	int32_t numBlocks;
	int32_t reserved;
	FBIO_Block blocks[1];
};

struct FBIO_GraphHeader {
	int64_t numVertexes;
	int64_t numEdges;
	int32_t numVertexProperties;
	int32_t numEdgeProperties;
};

} // namespace scalegraph {

#endif // __ORG_SCALEGRAPH_IO_FORMAT_H

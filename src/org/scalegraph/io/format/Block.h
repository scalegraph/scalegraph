#ifndef __ORG_SCALEGRAPH_IO_FORMAT_BLOCK_H
#define __ORG_SCALEGRAPH_IO_FORMAT_BLOCK_H

namespace org { namespace scalegraph { namespace io {

struct NativeBlock {
	int64_t offset;
	std::vector<NativePropertySize> propSizes;
} ;

}}} // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_FORMAT_BLOCK_H

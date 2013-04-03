#ifndef __ORG_SCALEGRAPH_IO_FORMAT_BLOCKINFO_H
#define __ORG_SCALEGRAPH_IO_FORMAT_BLOCKINFO_H

namespace org { namespace scalegraph { namespace io {

struct NativeBlockInfo {
	int32_t n;
	int32_t reserved;
	NativeBlock block[1];
} ;

}}} // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_FORMAT_BLOCKINFO_H

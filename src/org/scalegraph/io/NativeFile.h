#ifndef __ORG_SCALEGRAPH_IO_NATIVEFILE_H
#define __ORG_SCALEGRAPH_IO_NATIVEFILE_H

#include <x10rt.h>
#include <x10/lang/String.h>

#include "org/scalegraph/util/MemoryChunk.h"

namespace org { namespace scalegraph { namespace io {

struct NativeFile {
protected:
	int FMGL(fd);

public:
	RTT_H_DECLS_CLASS;

	explicit NativeFile(int fd_) : FMGL(fd)(fd_) { }
	NativeFile() : FMGL(fd)(-1) { }

	static NativeFile _make(x10::lang::String* name, int  fileMode, int fileAccess);
	void _constructor (x10::lang::String* name, int  fileMode, int fileAccess);

	NativeFile* operator->() { return this; }

	int handle() { return FMGL(fd); }

	void close();
	x10_long read(org::scalegraph::util::MemoryChunk<x10_byte> b);
	void write(org::scalegraph::util::MemoryChunk<x10_byte> b);
	void seek(x10_long offset, int origin);
	x10_long getpos();

	// Serialization
	static void _serialize(NativeFile this_, x10aux::serialization_buffer& buf) {
		assert (false);
	}
	static NativeFile _deserializer(x10aux::deserialization_buffer& buf) {
		assert (false);
	}
};

}}} // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_NATIVEFILE_H


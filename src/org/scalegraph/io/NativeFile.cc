
#include <x10aux/config.h>

#include "org/scalegraph/io/NativeFile.h"

namespace org { namespace scalegraph { namespace io {

static NativeFile NativeFile::_make(x10::lang::String* name, bool write, bool append) {
	NativeFile ret;
	ret._constructor(name, write, append);
	return ret;
}

void NativeFile::_constructor (x10::lang::String* name, bool write, bool append) {
	char* mode = write ? (append ? "ab" : "wb") : "rb";
	FILE* fp = fopen(name->c_str(), mode);
	if (fp == NULL)
	        throwException(FileNotFoundException::_make(name));
	FMGL(fp) = fp;
}

void NativeFile::close() {
	if(FMGL(fp) != NULL) {
		fclose(FMGL(fp));
		FMGL(fp) = NULL;
	}
}

x10_long NativeFile::read(org::scalegraph::util::MemoryChunk<x10_byte> b) {
	return fread(b.pointer(), sizeof(x10_byte), b.size(), FMGL(fp));
}

x10_long NativeFile::write(org::scalegraph::util::MemoryChunk<x10_byte> b) {
	return fwrite(b.pointer(), sizeof(x10_byte), b.size(), FMGL(fp));
}

void NativeFile::seek(x10_long offset, int origin) {
	if(origin < 0 || origin > 2)
        throwException(FileNotFoundException::_make());
	int map[] = {SEEK_SET, SEEK_CUR, SEEK_END};
	if(fseek(FMGL(fp), offset, map[origin]))
        throwException(FileNotFoundException::_make());
}

x10_long NativeFile::getpos() {
	fpos_t pos;
	if(fgetpos(FMGL(fp), &pos))
        throwException(FileNotFoundException::_make());
	return pos;
}

RTT_CC_DECLS0(NativeFile, "org.scalegraph.io.NativeFile", RuntimeType::class_kind)

}}} // namespace org { namespace scalegraph { namespace io {

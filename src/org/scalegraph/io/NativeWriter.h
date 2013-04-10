#ifndef __ORG_SCALEGRAPH_IO_NATIVEWRITER_H
#define __ORG_SCALEGRAPH_IO_NATIVEWRITER_H

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <list>

#include <x10rt.h>
#include <x10/io/FileNotFoundException.h>

#include "org/scalegraph/io/format/struct.h"

#define ALIGN(addr, length)		(((addr) + (length) - 1) & ~((length) - 1))

namespace org { namespace scalegraph { namespace io {

class NativeWriter {
public:
	int fd;
	std::list<void *> malloced;

	NativeWriter(const char *filename) {
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
		if(fd < 0) {
			x10aux::throwException(x10::io::FileNotFoundException::_make(x10::lang::String::Lit(filename)));
		}
	}

	~NativeWriter() {
		my_free();
		close(fd);
	}


	void writeMetaData(NativeHeader *header, NativeProperty *v_prop, NativeProperty *e_prop,
			NativeBlockInfo *v_blockinfo, NativeBlockInfo *e_blockinfo) {

		long file_offset = 0L;

		// write header
		file_offset = writeHeader(header, file_offset);

		// write vertex property
		file_offset = writeProperty(v_prop, file_offset);

		// write edge property
		file_offset = writeProperty(e_prop, file_offset);

		// write vertex block info
		file_offset = writeBlockInfo(v_blockinfo, file_offset);

		// write edge block info
		file_offset = writeBlockInfo(e_blockinfo, file_offset);
	}


	long writeHeader(NativeHeader *header, long file_offset) {
		file_offset = ALIGN(file_offset, 8);
		lseek(fd, file_offset, SEEK_SET);
		write(fd, header, header->size);
		return file_offset + header->size;
	}

	long writeProperty(NativeProperty *prop, long file_offset) {
		file_offset = ALIGN(file_offset, 8);
		lseek(fd, file_offset, SEEK_SET);
		write(fd, prop, 12);
		int size = 12;
		for(int i = 0; i < prop->nattr; i++) {
			NativeAttribute *attr = prop->attr[i];
			int attr_size = 8 + attr->namelen;
			size = ALIGN(size, 4);
			lseek(fd, file_offset + size, SEEK_SET);
			write(fd, attr, attr_size);
			size += attr_size;
		}
		return file_offset + size;
	}

	long writeBlockInfo(NativeBlockInfo *blockinfo, long file_offset) {
		file_offset = ALIGN(file_offset, 8);
		int size = 8 + blockinfo->n * 24;
		lseek(fd, file_offset, SEEK_SET);
		write(fd, blockinfo, size);
		return file_offset + size;
	}



	/*
	 * write attributes from an array
	 */
	template <typename T> long writeAttribute(T *array, long file_offset, long num) {
		file_offset = ALIGN(file_offset, 8);
		lseek(fd, file_offset, SEEK_SET);
		return file_offset + write(fd, array, sizeof(T) * num);
	}

	long writeCharAttribute(x10_char *array, long file_offset, long num) {
		file_offset = ALIGN(file_offset, 8);
		long size = sizeof(char) * num;
		char *tmp = (char *)malloc(size);
		for(long i = 0; i < num; i++) {
			tmp[i] = array[i].v;
		}
		lseek(fd, file_offset, SEEK_SET);
		write(fd, tmp, size);
		free(tmp);
		return file_offset + size;
	}

	long writeStringAttribute(x10::lang::String **array, long file_offset, long num) {
		file_offset = ALIGN(file_offset, 8);
		long size = 0L;
		for(long i = 0; i < num; i++) {
			int length = array[i]->length();
			size = ALIGN(size, 4);
			lseek(fd, file_offset + size, SEEK_SET);
			write(fd, &length, 4);
			write(fd, array[i]->c_str(), length);
			size += 4 + length;
		}
		return file_offset + size;
	}


	/*
	 * make struct
	 */
	NativeHeader *makeHeader(int8_t version, int8_t *datatype, int32_t size, int32_t nsec, int64_t *seclen) {
		NativeHeader *header = (NativeHeader *)my_malloc(size);
		memcpy(header->magic, "DRBF", 4);
		header->version = version;
		memcpy(header->datatype, datatype, 3);
		header->size = size;
		header->nsec = nsec;
		memcpy(header->seclen, seclen, sizeof(int64_t) * nsec);
		return header;
	}

	NativeProperty *makeProperty(int64_t nvert, int32_t nattr, int32_t *id, x10::lang::String **name) {
		NativeProperty *prop = (NativeProperty *)my_malloc(12 + sizeof(NativeAttribute **));
		prop->n = nvert;
		prop->nattr = nattr;
		prop->attr = (NativeAttribute **)my_malloc(sizeof(NativeAttribute *) * nattr);
		for(int i = 0; i < nattr; i++) {
			prop->attr[i] = (NativeAttribute *)my_malloc(8 + name[i]->length());
			prop->attr[i]->id = id[i];
			prop->attr[i]->namelen = name[i]->length();
			memcpy(prop->attr[i]->name, name[i]->c_str(), name[i]->length());
		}
		return prop;
	}

	NativeBlock *makeBlock() {
		return (NativeBlock *)my_malloc(sizeof(NativeBlock));
	}

	NativeBlock *makeBlock(int64_t offset, int64_t size, int64_t n) {
		NativeBlock *block = (NativeBlock *)my_malloc(sizeof(NativeBlock));
		block->offset = offset;
		block->size = size;
		block->n = n;
		return block;
	}

	NativeBlockInfo *makeBlockInfo(int32_t nblock, int64_t *block_offset, int64_t *block_size, int64_t *block_n) {
		NativeBlockInfo *blockinfo = (NativeBlockInfo *)my_malloc(8 * sizeof(NativeBlock) * nblock);
		blockinfo->n = nblock;
		blockinfo->reserved = 0;
		for(int i = 0; i < nblock; i++) {
			blockinfo->block[i].offset = block_offset[i];
			blockinfo->block[i].size = block_size[i];
			blockinfo->block[i].n = block_n[i];
		}
		return blockinfo;
	}

	NativeBlockInfo *makeBlockInfo(int32_t nblock, NativeBlock **block) {
		NativeBlockInfo *blockinfo = (NativeBlockInfo *)my_malloc(8 * sizeof(NativeBlock) * nblock);
		blockinfo->n = nblock;
		blockinfo->reserved = 0;
		for(int i = 0; i < nblock; i++) {
			blockinfo->block[i] = *block[i];
		}
		return blockinfo;
	}



	/*********************** util functions ************************/

	void *my_malloc(size_t size) {
		void *ptr = malloc(size);
		if(ptr == NULL) {
			x10aux::throwException(x10::lang::Exception::_make(x10::lang::String::Lit("malloc failed")));
			return NULL;
		} else {
			malloced.push_back(ptr);
			return ptr;
		}
	}

	void my_free() {
		std::list<void *>::iterator it = malloced.begin();
		while(it != malloced.end()) {
			free(*it);
			it++;
		}
		malloced.clear();
	}
};


}}}  // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_NATIVEWRITER_H

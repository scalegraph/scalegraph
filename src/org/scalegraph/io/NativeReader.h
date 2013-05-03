#ifndef __ORG_SCALEGRAPH_IO_NATIVEREADER_H
#define __ORG_SCALEGRAPH_IO_NATIVEREADER_H

#include <stdio.h>
#include <string.h>
#include <vector>
#include <new>

#include <x10rt.h>
#include <x10/io/FileNotFoundException.h>
#include <x10/io/IOException.h>

#include "org/scalegraph/io/format/binaryio_fmt.h"

#define ALIGN(addr, length)		(((addr) + (length) - 1) & ~((length) - 1))

namespace org { namespace scalegraph { namespace io {

typedef NativeHeader scalegraph::FBIO_Header;

struct NativeAttribute {
	int32_t id;
	x10::lang::String* name;
};

typedef NativeChunk scalegraph::FBIO_Chunk;

struct NativeBlock {
	int64_t offset;
	std::vector<NativeChunk> chunks;
};

typedef NativeGraphHeader scalegraph::FBIO_GraphHeader;
typedef NativeMatrixHeader scalegraph::FBIO_MatrixHeader;
typedef NativeVectorHeader scalegraph::FBIO_VectorHeader;

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
	NativeGraphHeader graphHeader;
	NativeMatrixHeader matrixHeader;
	NativeVectorHeader vectorHeader;

	NativeHeaders(NativeFile* nf) {
		FILE* fp = nf->handle();

		if(fread(&header, sizeof(header), 1, fp) != 1) {
			x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
		}
		if(memcmp(header.magic, "DRBF", 4) != 0) {
			x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
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
			x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
		}

		scalegraph::FBIO_Properties* rawProps = reinterpret_cast<scalegraph::FBIO_Properies*>(headerMemory);
		headerMemory += propSectionSize;
		scalegraph::FBIO_Blocks* rawBlocks = reinterpret_cast<scalegraph::FBIO_Blocks*>(headerMemory);
		headerMemory += blocInfoSectionSize;
		int8_t* rawUserDefinedHeader = headerMemory;

		const int numProps = rawProps->numProperties;
		{
			int offset = offsetof(scalegraph::FBIO_Properties, properties);
			headerMemory = (int8_t*)rawProps;
			for(int i = 0; i < numProps; i++) {
				scalegraph::FBIO_Property* prop = (scalegraph::FBIO_Property*)&headerMemory[offset];
				x10::lang::String* name = x10::lang::String::Steal(
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
				current = (scalegraph::FBIO_Block*)(&current->chunks[numProps]);
			}
		}

		switch(header.datatype[0]) {
		case 0: // Graph
			if(sizeof(graphHeader) != udhSize)
				x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
			memcpy(&graphHeader, rawUserDefinedHeader, udhSize);
			break;
		case 1: // Matrix
			if(sizeof(matrixHeader) != udhSize)
				x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
			memcpy(&matrixHeader, rawUserDefinedHeader, udhSize);
			break;
		case 2: // Vector
			if(sizeof(vectorHeader) != udhSize)
				x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("illegal file format")));
			memcpy(&vectorHeader, rawUserDefinedHeader, udhSize);
			break;
		default:
			x10aux::throwException(x10::lang::IOException::_make(x10::lang::String::Lit("not supported data type")));
		}

		x10aux::dealloc(props);
	}

	~NativeHeaders() { }

	int8_t *readBlockData(int64_t sec_size, int64_t offset) {
		int8_t *rawdata = (int8_t *)my_mmap(NULL, sec_size, PROT_READ, MAP_PRIVATE, fd, offset);
		return rawdata;
	}


	/*
	 * read attributes to an array
	 */
	template <typename T> long readAttribute(T *array, void *rawdata, long num) {
		long size = sizeof(T) * num;
		memcpy(array, rawdata, size);
		return size;
	}

	long readCharAttribute(x10_char *array, void *rawdata, long num) {
		long size = sizeof(char) * num;
		for(long i = 0; i < num; i++) {
			array[i].v = *((char *)rawdata + i);
		}
		return size;
	}

	long readStringAttribute(x10::lang::String **array, void *rawdata, long num) {
		long size = 0L;
		for(long i = 0; i < num; i++) {
			char *ptr = (char *)rawdata + size;
			int length = *(int *)ptr;
			ptr += ALIGN(sizeof(int), 4);
			char *str = (char *)malloc(sizeof(char) * (length + 1));
			memcpy(str, ptr, length);
			str[length] = '\0';
			array[i] = x10::lang::String::Steal(str);
			ptr += ALIGN(length, 4);
			size += ptr - (char *)rawdata;
		}
	}



	/*********************** util functions ************************/

	void *my_mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) {
		long psize = sysconf(_SC_PAGE_SIZE);
		int pofs = offset / psize;
		int ofs = offset % psize;
		long actualLength = length + ofs;

		void *ptr = mmap(addr, actualLength, prot, flags, fd, psize * pofs);
		if(ptr == MAP_FAILED) {
			x10aux::throwException(x10::lang::Exception::_make(x10::lang::String::Lit("mmap failed")));
			return ptr;
		} else {
			mmaped.push_back(std::pair<void *, size_t>(ptr, actualLength));
			return (void *)((int8_t *)ptr + ofs);
		}
	}

	void my_munmap() {
		std::list< std::pair<void *, size_t> >::iterator it = mmaped.begin();
		while(it != mmaped.end()) {
			munmap((*it).first, (*it).second);
			it++;
		}
		mmaped.clear();
	}

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



	/***************** test functions ********************/

	NativeAttribute *getAttribute() {
		NativeAttribute *attr = (NativeAttribute *)my_malloc(sizeof(NativeAttribute) + 6);
		attr->id = 4;
		attr->namelen = 7;
		strcpy(attr->name, "foobar");
		return attr;
	}

	NativeProperty *getProperty() {
		NativeProperty *prop = (NativeProperty *)my_malloc(sizeof(NativeProperty));
		prop->n = 4;
		prop->nattr = 7;
		prop->attr = NULL;
		return prop;
	}

	/*void printProp(NativeProperty *p) {
		printf("n = %lld\n", p->n);
		printf("nattr = %d\n", p->nattr);
		for(int i = 0; i < p->nattr; i++) {
			char *s;
			s = (char *)malloc(sizeof(char) * (p->attr[i]->namelen + 1));
			memcpy(s, p->attr[i]->name, p->attr[i]->namelen);
			s[p->attr[i]->namelen] = '\0';
			printf("attr[%d] = {%d, %d, %s}\n", i, p->attr[i]->id, p->attr[i]->namelen, s);
			free(s);
		}
	}*/
};

namespace NativeBIO {

static NativeHeaders* readHeaders(NativeFile* nf) {
	return new (x10aux::alloc<NativeHeaders>()) NativeHeaders(nf);
}

static void writeHeaders(NativeFile* nf) {
	// TODO:
}

template <typename T> void readPrimitives(NativeFile* nf, T *array, long numElements, long numBytes) {
	if(fread(array, sizeof(T) * numElements, 1, nf.handle()) != 1)
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while reading file...")));
}

void readStrings(NativeFile* nf, x10::lang::String **array, long numElements, long numBytes) {
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

template <typename T> void writePrimitives(NativeFile* nf, T *array, long numElements, long numBytes) {
	if(fwrite(array, sizeof(T) * numElements, 1, nf.handle()) != 1)
		x10aux::throwException(x10::lang::IOException::_make(
				x10::lang::String::Lit("error while writing file...")));
}

long writeStringAttribute(NativeFile* nf, x10::lang::String **array, long numElements, long numBytes) {
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

}; // namespace NativeBIO {

}}} // namespace org { namespace scalegraph { namespace io {

#undef ALIGN

#endif // __ORG_SCALEGRAPH_IO_NATIVEREADER_H

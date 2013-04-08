#ifndef __ORG_SCALEGRAPH_IO_NATIVEREADER_H
#define __ORG_SCALEGRAPH_IO_NATIVEREADER_H

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

class NativeReader {
public:
	int fd;
	std::list< std::pair<void *, size_t> > mmaped;
	std::list<void *> malloced;

	NativeReader(const char *filename) {
		fd = open(filename, O_RDONLY);
		if(fd < 0) {
			x10aux::throwException(x10::io::FileNotFoundException::_make(x10::lang::String::Lit(filename)));
		}
	}

	~NativeReader() {
		my_free();
		my_munmap();
		close(fd);
	}


	NativeHeader *readHeader() {

		int8_t magic[4];
		read(fd, magic, 4);
		if(memcmp(magic, "DRBF", 4) != 0) {
			x10aux::throwException(x10::lang::Exception::_make(x10::lang::String::Lit("illegal file format")));
			return NULL;
		}

		int header_size;
		read(fd, (int8_t *)&header_size, 4);  // skip 4 bytes
		read(fd, (int8_t *)&header_size, 4);

		return (NativeHeader *)my_mmap(NULL, header_size, PROT_READ, MAP_PRIVATE, fd, 0);
	}


	NativeProperty *readProperty(int64_t sec_size, int64_t offset) {
		NativeProperty *prop = (NativeProperty *)my_malloc(sizeof(NativeProperty));
		int8_t *rawdata = (int8_t *)my_mmap(NULL, sec_size, PROT_READ, MAP_PRIVATE, fd, offset);
		NativeProperty *propdata = (NativeProperty *)rawdata;

		prop->n = propdata->n;
		prop->nattr = propdata->nattr;
		prop->attr = (NativeAttribute **)my_malloc(sizeof(NativeAttribute *) * prop->nattr);

		int ofs = sizeof(int64_t) + sizeof(int32_t);  // skip prop->n & prop->nattr
		for(int i = 0; i < prop->nattr; i++) {
			prop->attr[i] = (NativeAttribute *)&rawdata[ofs];
			ofs += ALIGN(sizeof(int32_t) * 2 + prop->attr[i]->namelen, 4);  // next attribute
		}
		return prop;
	}


	NativeBlockInfo *readBlockInfo(int64_t sec_size, int64_t offset) {
		NativeBlockInfo *blockinfo = (NativeBlockInfo *)my_mmap(NULL, sec_size, PROT_READ, MAP_PRIVATE, fd, offset);
		return blockinfo;
	}


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

		void *ptr = mmap(addr, length, prot, flags, fd, psize * pofs);
		if(ptr == MAP_FAILED) {
			x10aux::throwException(x10::lang::Exception::_make(x10::lang::String::Lit("mmap failed")));
			return ptr;
		} else {
			mmaped.push_back(std::pair<void *, size_t>(ptr, length));
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

}}} // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_NATIVEREADER_H

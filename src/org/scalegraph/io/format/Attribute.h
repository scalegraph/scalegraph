#ifndef __ORG_SCALEGRAPH_IO_FORMAT_ATTRIBUTE_H
#define __ORG_SCALEGRAPH_IO_FORMAT_ATTRIBUTE_H

#include <string.h>
#include <x10/lang/String.h>

namespace org { namespace scalegraph { namespace io {

struct NativeAttribute {
	int32_t id;
	int32_t namelen;
	char name[1];
} ;

inline x10::lang::String *makeString(const char *ptr, int32_t length) {
	char *str = (char *)malloc(sizeof(char) * (length + 1));
	memcpy(str, ptr, sizeof(char) * length);
	str[length] = '\0';
	return x10::lang::String::Steal(str);
}

}}} // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_FORMAT_ATTRIBUTE_H

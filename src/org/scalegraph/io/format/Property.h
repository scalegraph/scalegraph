#ifndef __ORG_SCALEGRAPH_IO_FORMAT_PROPERTY_H
#define __ORG_SCALEGRAPH_IO_FORMAT_PROPERTY_H

#include "Attribute.h"

namespace org { namespace scalegraph { namespace io {

struct NativeProperty {
	int64_t n;
	int32_t nattr;
	NativeAttribute **attr;
} ;

}}} // namespace org { namespace scalegraph { namespace io {

#endif // __ORG_SCALEGRAPH_IO_FORMAT_PROPERTY_H

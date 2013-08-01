/*
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

#include <gc_allocator.h>

namespace org { namespace scalegraph { namespace io { namespace impl {

using namespace ::x10::lang;
using ::x10::io::IOException;
using ::org::scalegraph::util::SString;
using ::org::scalegraph::util::MemoryChunk;
using ::org::scalegraph::util::GrowableMemory;
using ::org::scalegraph::io::FileReader;
using ::scalegraph::gc_std;

struct NativeCSVAttribute {
	bool includeType;
	bool doubleQuoated;
	SString name;
	SString typeName;
};

struct NativeCSVHeader {
	gc_std<NativeCSVAttribute>::vector attrs;

	NativeCSVHeader(x10_byte* ptr, x10_long size);
	~NativeCSVHeader() { }
};

NativeCSVHeader* readCSVHeader(SString headerLine);

x10_long DQCSVNextBreak(MemoryChunk<x10_byte> data, x10_long offset);
MemoryChunk<x10_byte> DQCSVNextBreak(FileReader* reader);

} } } } // namespace org { namespace scalegraph { namespace io { namespace impl {

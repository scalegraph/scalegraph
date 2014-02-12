/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */


#ifndef HYPER_ANF_NATIVES_H
#define HYPER_ANF_NATIVES_H

//#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
//#include <org/scalegraph/util/MemoryChunk.h>
//#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS

namespace org { namespace scalegraph { namespace api {

void inline hyperANF_update_counter(x10_byte* counter, x10_byte* mes) {
	for(int i=0; i < 16; ++i) {
		counter[i] = counter[i] > mes[i] ? counter[i] : mes[i];
	}
}

template <typename T>
T hyperANF_kernel_16(x10_byte* counter_, x10_byte* mes_, long mescnt,
		int ss, int mask)
{
	typedef char v16qi __attribute__ ((vector_size (16))) __attribute__((aligned(16)));
	enum { BlockWidth = 16 };
	v16qi* dst = (v16qi*)(counter_ +  BlockWidth * ((ss-1) & mask));
	v16qi* mes = (v16qi*)mes_;
	v16qi tmp = *dst;
	for(long i = 0; i < mescnt; ++i) {
		tmp = __builtin_ia32_pmaxub128(tmp, mes[i]);
	}
	*dst = tmp;
	T ret;
	*(v16qi*)&ret = *(v16qi*)(counter_ + BlockWidth * (ss & mask));
	return ret;
}

}}} // namespace org { namespace scalegraph { namespace api {

#endif // #ifndef HYPER_ANF_NATIVES_H


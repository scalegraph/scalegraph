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

/*************************************************/
/* START of MemoryChunkData */
#include <org/scalegraph/util/MemoryChunkData.h>

x10aux::RuntimeType org::scalegraph::util::MCData_Impl<void>::rtt;

namespace org { namespace scalegraph { namespace util {

ExpMemGlobalState ExpMemState = ExpMemGlobalState();

ExpMemGlobalState::ExpMemGlobalState() {
	numCnt = 0;
	gcThreshold = 1024*1024;
	totalSize = 0;
	gcWait = false;
	pthread_mutex_init(&mutex, NULL);
	pthread_cond_init(&sync, NULL);
	list = new ExplicitMemory();
}

x10_long get_gc_heap_size() {
#ifdef X10_USE_BDWGC
			return GC_get_heap_size();
#else
			return 0;
#endif
		}

} } } // namespace org { namespace scalegraph { namespace util {

/* END of MemoryChunkData */
/*************************************************/

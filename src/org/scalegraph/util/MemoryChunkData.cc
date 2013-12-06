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

pthread_mutex_t org::scalegraph::util::explMemMutex = PTHREAD_MUTEX_INITIALIZER;
org::scalegraph::util::ExplicitMemory *org::scalegraph::util::explMemList = new org::scalegraph::util::ExplicitMemory();
//scalegraph::ListEntry org::scalegraph::util::explMemList2;

long org::scalegraph::util::numCnt;

/* END of MemoryChunkData */
/*************************************************/

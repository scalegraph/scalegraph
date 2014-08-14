/*************************************************/
/* START of MemoryChunk */
#include <org/scalegraph/util/MemoryChunk.h>

x10aux::RuntimeType org::scalegraph::util::MemoryChunk<void>::rtt;
x10_long org::scalegraph::util::MemoryChunk<void>::getMemSize() {
                                                                    
                                                                    //#line 424 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10Return_c
                                                                    return ((x10_long) ((org::scalegraph::util::get_gc_heap_size()) + (org::scalegraph::util::ExpMemState.totalSize)));
                                                                    
                                                                }

/* END of MemoryChunk */
/*************************************************/
/*************************************************/
/* START of MemoryChunk$Distributor */
#include <org/scalegraph/util/MemoryChunk__Distributor.h>

x10aux::RuntimeType org::scalegraph::util::MemoryChunk__Distributor<void>::rtt;

/* END of MemoryChunk$Distributor */
/*************************************************/
/*************************************************/
/* START of MemoryChunk$MCIterator */
#include <org/scalegraph/util/MemoryChunk__MCIterator.h>

x10aux::RuntimeType org::scalegraph::util::MemoryChunk__MCIterator<void>::rtt;

/* END of MemoryChunk$MCIterator */
/*************************************************/

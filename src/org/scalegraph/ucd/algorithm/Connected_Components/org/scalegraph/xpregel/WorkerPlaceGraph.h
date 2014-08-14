#ifndef __ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H
#define __ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#undef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#undef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#include <org/scalegraph/graph/id/IdStruct.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#include <org/scalegraph/graph/id/IdStruct.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__VTOD_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__VtoD.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__VTOD_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__VTOD_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__VtoD.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__VTOD_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOV_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__DtoV.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOV_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOV_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__DtoV.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOV_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__DtoS.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__DtoS.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOD_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__StoD.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOD_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOD_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__StoD.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOD_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__StoV.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
#include <org/scalegraph/graph/id/OnedR__StoV.h>
#undef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace org { namespace scalegraph { namespace id { 
class ProfilingID__XPregel;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Bitmap;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class GraphEdge;
} } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class EdgeProvider;
} } } 
namespace x10 { namespace lang { 
class IntRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3)> class Tuple3;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class Algorithm;
} } } 
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__Timer;
} } } 
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageCommunicator;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageBuffer;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 
namespace x10 { namespace lang { 
class ULong;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__MCIterator;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
template <> class WorkerPlaceGraph<void, void>;
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::Team2 FMGL(mTeam);
    
    org::scalegraph::graph::id::IdStruct FMGL(mIds);
    
    org::scalegraph::graph::id::OnedR__VtoD FMGL(mVtoD);
    
    org::scalegraph::graph::id::OnedR__DtoV FMGL(mDtoV);
    
    org::scalegraph::graph::id::OnedR__DtoS FMGL(mDtoS);
    
    org::scalegraph::graph::id::OnedR__StoD FMGL(mStoD);
    
    org::scalegraph::graph::id::OnedR__StoV FMGL(mStoV);
    
    org::scalegraph::util::MemoryChunk<TPMGL(V)> FMGL(mVertexValue);
    
    org::scalegraph::util::Bitmap* FMGL(mVertexActive);
    
    org::scalegraph::util::Bitmap* FMGL(mVertexShouldBeActive);
    
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* FMGL(mOutEdge);
    
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* FMGL(mInEdge);
    
    org::scalegraph::util::Bitmap* FMGL(mInEdgesMask);
    
    x10_int FMGL(numThreads);
    
    x10::lang::Any* FMGL(mLastAggVal);
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>
      FMGL(mOutput);
    
    x10_int FMGL(mLogLevel);
    
    x10::io::Printer* FMGL(mLogPrinter);
    
    x10_boolean FMGL(mEnableStatistics);
    
    x10_boolean FMGL(mNeedsAllUpdateInEdge);
    
    void _constructor(x10::util::Team* team, org::scalegraph::graph::id::IdStruct ids);
    
    static org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* _make(
             x10::util::Team* team, org::scalegraph::graph::id::IdStruct ids);
    
    void _constructor(x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix);
    
    static org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* _make(
             x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix);
    
    virtual void updateFewInEdge(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list);
    virtual void updateInEdge();
    virtual void updateInEdgeWithValue();
    template<class TPMGL(M), class TPMGL(A)> void run(x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
                                                      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
                                                      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner,
                                                      x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end);
    virtual org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>
      outBuffer(x10_long tid);
    template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
      stealOutput(x10_int index);
    virtual org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*
      org__scalegraph__xpregel__WorkerPlaceGraph____this__org__scalegraph__xpregel__WorkerPlaceGraph(
      );
    virtual void __fieldInitializers60046();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(V), class TPMGL(E)> x10aux::RuntimeType org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::rtt;
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::WorkerPlaceGraph<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(V)>(), x10aux::getRTT<TPMGL(E)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.WorkerPlaceGraph";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 2, params, variances);
}

template <> class WorkerPlaceGraph<void, void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_int FMGL(MAX_OUTPUT_NUMBER);
    
    template<class TPMGL(A)> static TPMGL(A) computeAggregate(
      org::scalegraph::util::Team2 team, org::scalegraph::util::MemoryChunk<TPMGL(A)> src,
      org::scalegraph::util::MemoryChunk<TPMGL(A)> buffer,
      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator);
    
    static x10_int FMGL(STT_END_COUNT);
    
    static x10_int FMGL(STT_ACTIVE_VERTEX);
    
    static x10_int FMGL(STT_RAW_MESSAGE);
    
    static x10_int FMGL(STT_VERTEX_MESSAGE);
    
    static x10_int FMGL(STT_PRE);
    
    static x10_int FMGL(STT_COMBINED_MESSAGE);
    
    static x10_int FMGL(STT_VERTEX_TRANSFERED_MESSAGE);
    
    static x10_int FMGL(STT_POST);
    
    static x10_int FMGL(STT_MAX);
    
    template<class TPMGL(M)> static x10_boolean gatherInformation(
      org::scalegraph::util::Team2 team, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx,
      org::scalegraph::util::MemoryChunk<x10_long> stt, x10_boolean enableStatistics,
      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner);
    
    static void foreachVertexes(x10_long numLocalVertexes,
                                x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task);
    
    static void FMGL(MAX_OUTPUT_NUMBER__do_init)();
    static void FMGL(MAX_OUTPUT_NUMBER__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAX_OUTPUT_NUMBER__status);
    static x10::lang::CheckedThrowable* FMGL(MAX_OUTPUT_NUMBER__exception);
    static x10_int FMGL(MAX_OUTPUT_NUMBER__get)();
    static void FMGL(STT_END_COUNT__do_init)();
    static void FMGL(STT_END_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_END_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(STT_END_COUNT__exception);
    static x10_int FMGL(STT_END_COUNT__get)();
    static void FMGL(STT_ACTIVE_VERTEX__do_init)();
    static void FMGL(STT_ACTIVE_VERTEX__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_ACTIVE_VERTEX__status);
    static x10::lang::CheckedThrowable* FMGL(STT_ACTIVE_VERTEX__exception);
    static x10_int FMGL(STT_ACTIVE_VERTEX__get)();
    static void FMGL(STT_RAW_MESSAGE__do_init)();
    static void FMGL(STT_RAW_MESSAGE__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_RAW_MESSAGE__status);
    static x10::lang::CheckedThrowable* FMGL(STT_RAW_MESSAGE__exception);
    static x10_int FMGL(STT_RAW_MESSAGE__get)();
    static void FMGL(STT_VERTEX_MESSAGE__do_init)();
    static void FMGL(STT_VERTEX_MESSAGE__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_VERTEX_MESSAGE__status);
    static x10::lang::CheckedThrowable* FMGL(STT_VERTEX_MESSAGE__exception);
    static x10_int FMGL(STT_VERTEX_MESSAGE__get)();
    static void FMGL(STT_PRE__do_init)();
    static void FMGL(STT_PRE__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_PRE__status);
    static x10::lang::CheckedThrowable* FMGL(STT_PRE__exception);
    static x10_int FMGL(STT_PRE__get)();
    static void FMGL(STT_COMBINED_MESSAGE__do_init)();
    static void FMGL(STT_COMBINED_MESSAGE__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_COMBINED_MESSAGE__status);
    static x10::lang::CheckedThrowable* FMGL(STT_COMBINED_MESSAGE__exception);
    static x10_int FMGL(STT_COMBINED_MESSAGE__get)();
    static void FMGL(STT_VERTEX_TRANSFERED_MESSAGE__do_init)();
    static void FMGL(STT_VERTEX_TRANSFERED_MESSAGE__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_VERTEX_TRANSFERED_MESSAGE__status);
    static x10::lang::CheckedThrowable* FMGL(STT_VERTEX_TRANSFERED_MESSAGE__exception);
    static x10_int FMGL(STT_VERTEX_TRANSFERED_MESSAGE__get)();
    static void FMGL(STT_POST__do_init)();
    static void FMGL(STT_POST__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_POST__status);
    static x10::lang::CheckedThrowable* FMGL(STT_POST__exception);
    static x10_int FMGL(STT_POST__get)();
    static void FMGL(STT_MAX__do_init)();
    static void FMGL(STT_MAX__init)();
    static volatile x10aux::StaticInitController::status FMGL(STT_MAX__status);
    static x10::lang::CheckedThrowable* FMGL(STT_MAX__exception);
    static x10_int FMGL(STT_MAX__get)();
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/graph/id/OnedR__VtoD.h>
#include <org/scalegraph/graph/id/OnedR__DtoV.h>
#include <org/scalegraph/graph/id/OnedR__DtoS.h>
#include <org/scalegraph/graph/id/OnedR__StoD.h>
#include <org/scalegraph/graph/id/OnedR__StoV.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/id/ProfilingID__XPregel.h>
#include <org/scalegraph/util/Bitmap.h>
#include <org/scalegraph/xpregel/GraphEdge.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/io/Printer.h>
#include <x10/util/Team.h>
#include <x10/array/Array.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/xpregel/EdgeProvider.h>
#include <x10/lang/IntRange.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <org/scalegraph/util/tuple/Tuple3.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/Algorithm.h>
#include <org/scalegraph/util/ProfilingDB__Timer.h>
#include <org/scalegraph/util/ProfilingDB.h>
#include <org/scalegraph/Config.h>
#include <x10/compiler/Ifdef.h>
#include <org/scalegraph/util/StopWatch.h>
#include <x10/lang/Place.h>
#include <org/scalegraph/xpregel/MessageCommunicator.h>
#include <org/scalegraph/xpregel/MessageBuffer.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <x10/lang/Fun_0_2.h>
#include <org/scalegraph/test/STest.h>
#include <x10/lang/ULong.h>
#include <org/scalegraph/util/MemoryChunk__MCIterator.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Zero.h>
#include <x10/compiler/Native.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104072 = tid;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value104073 = r->FMGL(min);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104074;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((localSrcids->FMGL(data)).isValid())) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104072) < (((x10_long) (((x10_int)0))))) || ((index104072) >= (localSrcids->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104072), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (localSrcids->FMGL(data)).set(index104072, value104073);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104074 = value104073;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret104074;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> localSrcids;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->localSrcids);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_localSrcids = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_localSrcids);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__13(org::scalegraph::util::MemoryChunk<x10_long> localSrcids) : localSrcids(localSrcids) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:477-481";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid104193, x10::lang::LongRange r104194) {
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104075 = tid104193;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> value104076 = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((((x10_long) ((((x10_long) ((r104194->
                                                                                                                                                                    FMGL(max)) - (r104194->
                                                                                                                                                                                    FMGL(min))))) + (((x10_long)1ll))))) + (((x10_long)1ll)))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> ret104077;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((mOutEdgeModifyReqOffsets104191->FMGL(data)).isValid()))
            {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104075) < (((x10_long) (((x10_int)0))))) ||
                ((index104075) >= (mOutEdgeModifyReqOffsets104191->
                                     FMGL(data)->FMGL(size))))
            {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104075), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (mOutEdgeModifyReqOffsets104191->FMGL(data)).set(index104075, value104076);
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104077 = value104076;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret104077;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104078 = tid104193;
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret104079;
        {
            
            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((tmp104192->FMGL(data)).isValid())) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104078) < (((x10_long) (((x10_int)0))))) ||
                ((index104078) >= (tmp104192->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104078), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (tmp104192->FMGL(data)).set(index104078, ((x10_long)777ll));
        
        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104079 = ((x10_long)777ll);
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret104079;
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > mOutEdgeModifyReqOffsets104191;
    org::scalegraph::util::MemoryChunk<x10_long> tmp104192;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->mOutEdgeModifyReqOffsets104191);
        buf.write(this->tmp104192);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > that_mOutEdgeModifyReqOffsets104191 = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >();
        org::scalegraph::util::MemoryChunk<x10_long> that_tmp104192 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_mOutEdgeModifyReqOffsets104191, that_tmp104192);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__14(org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > mOutEdgeModifyReqOffsets104191, org::scalegraph::util::MemoryChunk<x10_long> tmp104192) : mOutEdgeModifyReqOffsets104191(mOutEdgeModifyReqOffsets104191), tmp104192(tmp104192) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:491-495";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* __apply(x10_long i104196) {
        
        //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* alloc104197 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > >(), 0, sizeof(org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >))) org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >()))
            ;
            
            //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
            (alloc104197)->::org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::_constructor(
              ((x10_long)0ll));
            alloc104197;
        }))
        ;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >();
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__15() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:502";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* __apply(x10_long i) {
        
        //#line 513 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return x10aux::nullCheck((__extension__ ({
                   
                   //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                   x10_long index103295 = i;
                   
                   //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                   org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret103296;
                   {
                       
                       //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                       if (!((vctxs->FMGL(data)).isValid())) {
                           
                           //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                           if (true) {
                               
                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                           }
                           
                       }
                       
                       //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                       if (((index103295) < (((x10_long) (((x10_int)0))))) ||
                           ((index103295) >= (vctxs->FMGL(data)->FMGL(size))))
                       {
                           
                           //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                           if (true) {
                               
                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103295), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                           }
                           
                       }
                       
                   }
                   
                   //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                   ret103296 = (vctxs->FMGL(data))[index103295];
                   ret103296;
               }))
               )->FMGL(mEdgeProvider);
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vctxs);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> that_vctxs = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__16(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs) : vctxs(vctxs) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:513";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid104154, x10::lang::LongRange r104155) {
        
        //#line 537 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* vc104156 =
          (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104157 = tid104154;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret104158;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((vctxs->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104157) < (((x10_long) (((x10_int)0))))) ||
                    ((index104157) >= (vctxs->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104157), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104158 = (vctxs->FMGL(data))[index104157];
            ret104158;
        }))
        ;
        
        //#line 538 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ep104159 =
          x10aux::nullCheck(vc104156)->FMGL(mEdgeProvider);
        
        //#line 539 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(M)>* mesTempBuffer104160 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(M)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(M)>))) org::scalegraph::util::GrowableMemory<TPMGL(M)>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (mesTempBuffer104160)->::org::scalegraph::util::GrowableMemory<TPMGL(M)>::_constructor(
          ((x10_long)0ll));
        
        //#line 540 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numProcessed104161 = ((x10_long)0ll);
        
        //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numLocalOutEdges104162 = ((x10_long) (((__extension__ ({
            
            //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this104163 =
              x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
                FMGL(offsets);
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104164 = ((x10_long) ((r104155->
                                                   FMGL(max)) + (((x10_long) (((x10_int)1))))));
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret104165;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this104163->FMGL(data)).isValid()))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104164) < (((x10_long) (((x10_int)0))))) ||
                    ((index104164) >= (this104163->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104164), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104165 = (this104163->FMGL(data))[index104164];
            ret104165;
        }))
        ) - ((__extension__ ({
            
            //#line 542 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this104166 =
              x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
                FMGL(offsets);
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104167 = r104155->FMGL(min);
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret104168;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this104166->FMGL(data)).isValid()))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104167) < (((x10_long) (((x10_int)0))))) ||
                    ((index104167) >= (this104166->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104167), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104168 = (this104166->FMGL(data))[index104167];
            ret104168;
        }))
        )));
        
        //#line 543 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long numLocalMes104169 = ((x10_long)0ll);
        
        //#line 545 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::ProfilingDB__Timer thtimer104170 =
          x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
            ((x10_int)1), tid104154);
        {
            
            //#line 546 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer104170->org::scalegraph::util::ProfilingDB__Timer::start();
        }
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i61556domain104116 = r104155;
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61556min104117 = i61556domain104116->FMGL(min);
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61556max104118 = i61556domain104116->FMGL(max);
        
        //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i104119;
            for (
                 //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i104119 = i61556min104117; ((i104119) <= (i61556max104118));
                 
                 //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i104119 = ((x10_long) ((i104119) + (((x10_long)1ll)))))
            {
                
                //#line 547 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long srcid104120 = i104119;
                
                //#line 548 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(vc104156)->FMGL(mSrcid) =
                  srcid104120;
                
                //#line 549 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(M)> mes104106 =
                  x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::message(
                    srcid104120, mesTempBuffer104160);
                {
                    
                    //#line 550 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    numLocalMes104169 = ((x10_long) ((numLocalMes104169) + ((__extension__ ({
                        mes104106->FMGL(data)->FMGL(size);
                    }))
                    )));
                }
                
                //#line 551 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((((__extension__ ({
                        mes104106->FMGL(data)->FMGL(size);
                    }))
                    ) > (((x10_long) (((x10_int)0))))) ||
                    (__extension__ ({
                        
                        //#line 551 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::Bitmap* this104107 =
                          saved_this->FMGL(mVertexActive);
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long i104108 = srcid104120;
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_boolean ret104109;
                        {
                            
                            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                            if (((i104108) < (((x10_long) (((x10_int)0))))) ||
                                ((i104108) > (x10aux::nullCheck(this104107)->
                                                FMGL(size))))
                            {
                                
                                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long wordOffset104102 = ((x10_long) ((i104108) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_ulong mask104103 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i104108) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret104109 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(this104107)->
                                                                              FMGL(mc)->
                                                                              FMGL(data))[wordOffset104102]) & (mask104103))),
                                                            ((x10_ulong)0ull)));
                        ret104109;
                    }))
                    ) {
                    
                    //#line 553 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >::__apply(x10aux::nullCheck(compute), 
                      vc104156, mes104106);
                    
                    //#line 555 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(ep104159)->FMGL(mEdgeChanged))
                    {
                        
                        //#line 555 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(ep104159)->fixModifiedEdges(
                          srcid104120);
                    }
                    
                    //#line 556 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if ((__extension__ ({
                            
                            //#line 556 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::Bitmap* this104110 =
                              saved_this->FMGL(mVertexActive);
                            
                            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_long i104111 = srcid104120;
                            
                            //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_boolean ret104112;
                            {
                                
                                //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                                if (((i104111) < (((x10_long) (((x10_int)0))))) ||
                                    ((i104111) > (x10aux::nullCheck(this104110)->
                                                    FMGL(size))))
                                {
                                    
                                    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_long wordOffset104104 = ((x10_long) ((i104111) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
                            
                            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                            x10_ulong mask104105 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i104111) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
                            
                            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
                            ret104112 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(this104110)->
                                                                                  FMGL(mc)->
                                                                                  FMGL(data))[wordOffset104104]) & (mask104105))),
                                                                ((x10_ulong)0ull)));
                            ret104112;
                        }))
                        ) {
                        
                        //#line 556 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                        numProcessed104161 = ((x10_long) ((numProcessed104161) + (((x10_long)1ll))));
                    }
                    
                }
                
            }
        }
        {
            
            //#line 559 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer104170->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)0));
        }
        
        //#line 560 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(aggregator, X10_NULL)))
        {
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104113 = tid104154;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            TPMGL(A) value104114 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
              x10aux::nullCheck(x10aux::nullCheck(vc104156)->
                                  FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<TPMGL(A)>::raw());
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            TPMGL(A) ret104115;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((intermedAggregateValue->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104113) < (((x10_long) (((x10_int)0))))) ||
                    ((index104113) >= (intermedAggregateValue->
                                         FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104113), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (intermedAggregateValue->FMGL(data)).set(index104113, value104114);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104115 = value104114;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret104115;
        }
        {
            
            //#line 563 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer104170->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)1));
        }
        
        //#line 564 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(A)>* this104121 =
          x10aux::nullCheck(vc104156)->FMGL(mAggregateValue);
        
        //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this104121)->FMGL(size) = ((x10_long) (((x10_int)0)));
        
        //#line 565 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(vc104156)->FMGL(mNumActiveVertexes) =
          numProcessed104161;
        {
            
            //#line 566 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::test::STest::bufferedPrintln(
              reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ XPS1: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                      FMGL(id)), x10aux::makeStringLit(": th: ")), tid104154), x10aux::makeStringLit(": ss: ")), ss104199), x10aux::makeStringLit(": OutEdge: ")), numLocalOutEdges104162), x10aux::makeStringLit(": Mes: ")), numLocalMes104169)));
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx;
    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator;
    org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue;
    x10_int ss104199;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vctxs);
        buf.write(this->saved_this);
        buf.write(this->ectx);
        buf.write(this->compute);
        buf.write(this->aggregator);
        buf.write(this->intermedAggregateValue);
        buf.write(this->ss104199);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> that_vctxs = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* that_ectx = buf.read<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>();
        x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* that_compute = buf.read<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >*>();
        x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* that_aggregator = buf.read<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(A)> that_intermedAggregateValue = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(A)> >();
        x10_int that_ss104199 = buf.read<x10_int>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs, that_saved_this, that_ectx, that_compute, that_aggregator, that_intermedAggregateValue, that_ss104199);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__17(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx, x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator, org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue, x10_int ss104199) : vctxs(vctxs), saved_this(saved_this), ectx(ectx), compute(compute), aggregator(aggregator), intermedAggregateValue(intermedAggregateValue), ss104199(ss104199) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:536-568";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__17_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__18 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid104174, x10::lang::LongRange r104175) {
        
        //#line 601 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* vc104176 =
          (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104177 = tid104174;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret104178;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((vctxs->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104177) < (((x10_long) (((x10_int)0))))) ||
                    ((index104177) >= (vctxs->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104177), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104178 = (vctxs->FMGL(data))[index104177];
            ret104178;
        }))
        ;
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i61595domain104137 = r104175;
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61595min104138 = i61595domain104137->FMGL(min);
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61595max104139 = i61595domain104137->FMGL(max);
        
        //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i104140;
            for (
                 //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i104140 = i61595min104138; ((i104140) <= (i61595max104139));
                 
                 //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i104140 = ((x10_long) ((i104140) + (((x10_long)1ll)))))
            {
                
                //#line 602 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long dosrcid104141 = i104140;
                
                //#line 603 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((__extension__ ({
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long i104127 = dosrcid104141;
                        
                        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_boolean ret104128;
                        {
                            
                            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                            if (((i104127) < (((x10_long) (((x10_int)0))))) ||
                                ((i104127) > (x10aux::nullCheck(BCbmp104173)->
                                                FMGL(size)))) {
                                
                                //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_long wordOffset104124 = ((x10_long) ((i104127) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
                        x10_ulong mask104125 = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i104127) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
                        
                        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
                        ret104128 = (!x10aux::struct_equals(((x10_ulong) (((x10aux::nullCheck(BCbmp104173)->
                                                                              FMGL(mc)->
                                                                              FMGL(data))[wordOffset104124]) & (mask104125))),
                                                            ((x10_ulong)0ull)));
                        ret104128;
                    }))
                    ) {
                    
                    //#line 604 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(vc104176)->FMGL(mSrcid) =
                      dosrcid104141;
                    
                    //#line 605 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> OEsId104129 =
                      x10aux::nullCheck(vc104176)->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::outEdgesId();
                    
                    //#line 606 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    TPMGL(M) tempmes104130 = (__extension__ ({
                        
                        //#line 606 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<TPMGL(M)> this104131 =
                          x10aux::nullCheck(ectx)->FMGL(mBCCMessages);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index104132 = dosrcid104141;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(M) ret104133;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this104131->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index104132) < (((x10_long) (((x10_int)0))))) ||
                                ((index104132) >= (this104131->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104132), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret104133 = (this104131->FMGL(data))[index104132];
                        ret104133;
                    }))
                    ;
                    
                    //#line 607 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                    {
                        org::scalegraph::util::MemoryChunk__MCIterator<x10_long>* eI104134;
                        for (
                             //#line 607 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                             eI104134 = (__extension__ ({
                                 (__extension__ ({
                                     
                                     //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::util::MemoryChunk__MCIterator<x10_long>* alloc104135 =
                                        ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__MCIterator<x10_long> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__MCIterator<x10_long>))) org::scalegraph::util::MemoryChunk__MCIterator<x10_long>()))
                                     ;
                                     
                                     //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::util::MCData_Impl<x10_long > data104126 =
                                       OEsId104129->FMGL(data);
                                     
                                     //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                                     alloc104135->FMGL(cur) =
                                       ((x10_long)0ll);
                                     
                                     //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                                     alloc104135->FMGL(data) =
                                       data104126;
                                     alloc104135;
                                 }))
                                 ;
                             }))
                             ; eI104134->hasNext(); ) {
                            
                            //#line 607 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long eI104136 = eI104134->next();
                            
                            //#line 608 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(vc104176)->org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::sendMessage(
                              eI104136, tempmes104130);
                        }
                    }
                    
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs;
    org::scalegraph::util::Bitmap* BCbmp104173;
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vctxs);
        buf.write(this->BCbmp104173);
        buf.write(this->ectx);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> that_vctxs = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> >();
        org::scalegraph::util::Bitmap* that_BCbmp104173 = buf.read<org::scalegraph::util::Bitmap*>();
        org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* that_ectx = buf.read<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_vctxs, that_BCbmp104173, that_ectx);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__18(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs, org::scalegraph::util::Bitmap* BCbmp104173, org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx) : vctxs(vctxs), BCbmp104173(BCbmp104173), ectx(ectx) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:600-612";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 681 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 686 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::ProfilingDB__Timer thtimer104210 = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                                        ((x10_int)1),
                                                                        ((x10_long) (i104214)));
            {
                
                //#line 687 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                thtimer104210->org::scalegraph::util::ProfilingDB__Timer::start();
            }
            
            //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<TPMGL(T)>* typed_buf104211 =
              reinterpret_cast<org::scalegraph::util::GrowableMemory<TPMGL(T) >*>(buf104204);
            
            //#line 689 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
              x10aux::nullCheck(typed_buf104211)->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw(),
              ((x10_long)0ll), outMem, offset_104209, src_len104208);
            
            //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(typed_buf104211)->FMGL(size) =
              ((x10_long) (((x10_int)0)));
            {
                
                //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                thtimer104210->org::scalegraph::util::ProfilingDB__Timer::lap(
                  ((x10_int)2));
            }
        }
        catch (x10::lang::CheckedThrowable* __exc567) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc567)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc567);
                {
                    
                    //#line 681 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc567);
                {
                    
                    //#line 681 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int i104214;
    org::scalegraph::util::GrowableMemory<x10_int>* buf104204;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem;
    x10_long offset_104209;
    x10_long src_len104208;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i104214);
        buf.write(this->buf104204);
        buf.write(this->outMem);
        buf.write(this->offset_104209);
        buf.write(this->src_len104208);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_i104214 = buf.read<x10_int>();
        org::scalegraph::util::GrowableMemory<x10_int>* that_buf104204 = buf.read<org::scalegraph::util::GrowableMemory<x10_int>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_outMem = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10_long that_offset_104209 = buf.read<x10_long>();
        x10_long that_src_len104208 = buf.read<x10_long>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >(that_i104214, that_buf104204, that_outMem, that_offset_104209, that_src_len104208);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__19(x10_int i104214, org::scalegraph::util::GrowableMemory<x10_int>* buf104204, org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem, x10_long offset_104209, x10_long src_len104208) : i104214(i104214), buf104204(buf104204), outMem(outMem), offset_104209(offset_104209), src_len104208(src_len104208) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:681-692";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_564
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_564
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::run(
  x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner,
  x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) {
    {
        
        //#line 461 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::bufferedPrintln(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ MEM-XPS0: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                              FMGL(id)), x10aux::makeStringLit(": TotalMem: ")), org::scalegraph::util::MemoryChunk<void>::getMemSize()), x10aux::makeStringLit(": GCMem: ")), org::scalegraph::util::get_gc_heap_size()), x10aux::makeStringLit(": ExpMem: ")), org::scalegraph::util::ExpMemState.totalSize)));
    }
    
    //#line 463 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ProfilingDB__Timer mtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                         ((x10_int)0),
                                                         ((x10_long) (((x10_int)0))));
    {
        
        //#line 464 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::start();
    }
    
    //#line 465 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 466 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 466 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("start xpregel iteration"));
    }
    
    //#line 468 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_boolean root = (x10aux::struct_equals((__extension__ ({
                                                  
                                                  //#line 468 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                  x10::array::Array<x10_int>* this103259 =
                                                    x10aux::nullCheck(this->
                                                                        FMGL(mTeam)->
                                                                        FMGL(base))->role();
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                  ;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int ret103260;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret103261; __ret103261: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(this103259)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret103260 =
                                                            (x10aux::nullCheck(this103259)->
                                                               FMGL(raw))->__apply(((x10_int)0));
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret103261_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(this103259)->
                                                                  FMGL(region)->contains(
                                                                  ((x10_int)0))))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                ((x10_int)0));
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret103260 =
                                                            (x10aux::nullCheck(this103259)->
                                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this103259)->
                                                                                                                   FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret103261_end_;
                                                      }
                                                      
                                                  }goto __ret103261_end_; __ret103261_end_: ;
                                                  }
                                                  ret103260;
                                                  }))
                                                  , ((x10_int)0)));
                        
    
    //#line 469 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 469 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this103262 =
          this->FMGL(mIds);
        this103262->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 470 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx =
       ((new (memset(x10aux::alloc<org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)> >(), 0, sizeof(org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>))) org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>()))
    ;
    
    //#line 471 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
    (ectx)->::org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::_constructor(
      this->FMGL(mTeam), this->FMGL(mIds), this->FMGL(numThreads));
    
    //#line 473 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*> vctxs =
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* >::_make(((x10_long) (this->
                                                                                                                                                  FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 474 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> localSrcids =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (this->
                                                                          FMGL(numThreads))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 477 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__13<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(localSrcids))));
    
    //#line 487 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > mOutEdgeModifyReqOffsets104191 =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::_make(((x10_long) (this->
                                                                                                              FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 490 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> tmp104192 =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (this->
                                                                          FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 491 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__14<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(mOutEdgeModifyReqOffsets104191, tmp104192))));
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61519domain104095 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((mOutEdgeModifyReqOffsets104191->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long i61519max104096 = i61519domain104095->FMGL(max);
    
    //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_long i104097;
        for (
             //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i104097 = ((x10_long)0ll); ((i104097) <= (i61519max104096));
             
             //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i104097 = ((x10_long) ((i104097) + (((x10_long)1ll)))))
        {
            
            //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i104098 = i104097;
            
            //#line 497 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((__extension__ ({
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long index104083 =
                                             i104098;
                                           
                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                           x10_long ret104084;
                                           {
                                               
                                               //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (!((tmp104192->
                                                        FMGL(data)).isValid()))
                                               {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                               //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (((index104083) < (((x10_long) (((x10_int)0))))) ||
                                                   ((index104083) >= (tmp104192->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                               {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104083), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret104084 = (tmp104192->
                                                          FMGL(data))[index104083];
                                           ret104084;
                                       }))
                                       , ((x10_long)777ll))))
            {
                
                //#line 498 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104080 = i104098;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> value104081 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)0))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> ret104082;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((mOutEdgeModifyReqOffsets104191->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104080) < (((x10_long) (((x10_int)0))))) ||
                    ((index104080) >= (mOutEdgeModifyReqOffsets104191->
                                         FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104080), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (mOutEdgeModifyReqOffsets104191->FMGL(data)).set(index104080, value104081);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104082 = value104081;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret104082;
        }
    }
    
    //#line 501 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> mOutEdgeModifyReqsWithAR104195 =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* >::_make(((x10_long) (this->
                                                                                                                                                                   FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__15<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i61538max104099 = ((x10_int) ((this->FMGL(numThreads)) - (((x10_int)1))));
    
    //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i104100;
        for (
             //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i104100 = ((x10_int)0); ((i104100) <= (i61538max104099));
             
             //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i104100 = ((x10_int) ((i104100) + (((x10_int)1)))))
        {
            
            //#line 503 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int tid104101 = i104100;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index104085 = tid104101;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* value104086 =
              (__extension__ ({
                
                //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* alloc104087 =
                   ((new (memset(x10aux::alloc<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)> >(), 0, sizeof(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>))) org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>()))
                ;
                
                //#line 504 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
                (alloc104087)->::org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>::_constructor(
                  this, ectx, ((x10_long) (tid104101)), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_int index104088 = tid104101;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      org::scalegraph::util::MemoryChunk<x10_long> ret104089;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((mOutEdgeModifyReqOffsets104191->
                                   FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index104088) < (((x10_int)0))) ||
                              ((((x10_long) (index104088))) >= (mOutEdgeModifyReqOffsets104191->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104088), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104089 = (mOutEdgeModifyReqOffsets104191->
                                     FMGL(data))[index104088];
                      ret104089;
                  }))
                  , (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_int index104090 = tid104101;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret104091;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((mOutEdgeModifyReqsWithAR104195->
                                   FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index104090) < (((x10_int)0))) ||
                              ((((x10_long) (index104090))) >= (mOutEdgeModifyReqsWithAR104195->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104090), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104091 = (mOutEdgeModifyReqsWithAR104195->
                                     FMGL(data))[index104090];
                      ret104091;
                  }))
                  , (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_int index104092 = tid104101;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret104093;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((localSrcids->FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((index104092) < (((x10_int)0))) ||
                              ((((x10_long) (index104092))) >= (localSrcids->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104092), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104093 = (localSrcids->FMGL(data))[index104092];
                      ret104093;
                  }))
                  );
                alloc104087;
            }))
            ;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret104094;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((vctxs->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104085) < (((x10_int)0))) || ((((x10_long) (index104085))) >= (vctxs->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104085), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (vctxs->FMGL(data)).set(index104085, value104086);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104094 = value104086;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret104094;
        }
    }
    
    //#line 512 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> edgeProviderList =
      org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* >::_make(((x10_long) (this->
                                                                                                                   FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__16<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 515 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(A)> intermedAggregateValue =
      org::scalegraph::util::MemoryChunk<TPMGL(A) >::_make(((x10_long) (this->
                                                                          FMGL(numThreads))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 516 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(A)> aggregateBuffer =
      org::scalegraph::util::MemoryChunk<TPMGL(A) >::_make(((x10_long) (root
      ? ((__extension__ ({
             
             //#line 516 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             org::scalegraph::util::Team2 this103298 = this->
                                                         FMGL(mTeam);
             x10aux::nullCheck(this103298->FMGL(base))->size();
         }))
         ) : (((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 517 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> statistics =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)12))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 518 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvStatistics =
      statistics->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
        ((x10_long) (((x10_int)6))), ((x10_long) (((x10_int)6))));
    
    //#line 520 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(ectx)->FMGL(mInEdgesOffset) = x10aux::nullCheck(this->
                                                                        FMGL(mInEdge))->
                                                      FMGL(offsets);
    
    //#line 521 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(ectx)->FMGL(mInEdgesVertex) = x10aux::nullCheck(this->
                                                                        FMGL(mInEdge))->
                                                      FMGL(vertexes);
    
    //#line 522 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(ectx)->FMGL(mInEdgesMask) = this->FMGL(mInEdgesMask);
    
    //#line 525 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_ulong> vertexActvieBitmap =
      (__extension__ ({
        
        //#line 525 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Bitmap* this103299 = this->
                                                      FMGL(mVertexActive);
        x10aux::nullCheck(this103299)->FMGL(mc);
    }))
    ;
    
    //#line 526 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<x10_ulong >(
      (__extension__ ({
          
          //#line 526 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::Bitmap* this103300 = this->
                                                        FMGL(mVertexShouldBeActive);
          x10aux::nullCheck(this103300)->FMGL(mc);
      }))
      , ((x10_long)0ll), vertexActvieBitmap, ((x10_long)0ll),
      (__extension__ ({
          vertexActvieBitmap->FMGL(data)->FMGL(size);
      }))
      );
    {
        
        //#line 529 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)0));
    }
    
    //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i104198;
        for (
             //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i104198 = ((x10_int)0); ((i104198) <= (((x10_int)10000)));
             
             //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i104198 = ((x10_int) ((i104198) + (((x10_int)1)))))
        {
            
            //#line 531 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int ss104199 = i104198;
            
            //#line 532 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(ectx)->FMGL(mSuperstep) = ss104199;
            {
                
                //#line 534 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                mtimer->org::scalegraph::util::ProfilingDB__Timer::start();
            }
            
            //#line 535 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 535 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("vertex processing started"));
            }
            
            //#line 536 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
              numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__17<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs, this, ectx, compute, aggregator, intermedAggregateValue, ss104199))));
            {
                
                //#line 569 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
                  ((x10_int)1));
            }
            {
                
                //#line 570 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::test::STest::bufferedPrintln(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("$ MEM-XPS2: place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                              FMGL(id)), x10aux::makeStringLit(": ss: ")), ss104199), x10aux::makeStringLit(": TotalMem: ")), org::scalegraph::util::MemoryChunk<void>::getMemSize()), x10aux::makeStringLit(": GCMem: ")), org::scalegraph::util::get_gc_heap_size()), x10aux::makeStringLit(": ExpMem: ")), org::scalegraph::util::ExpMemState.totalSize)));
            }
            
            //#line 572 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 572 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("vertex processing finished"));
            }
            
            //#line 575 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::deleteMessages();
            
            //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i61575max104145 = ((x10_int) ((this->
                                                     FMGL(numThreads)) - (((x10_int)1))));
            
            //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i104146;
                for (
                     //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i104146 = ((x10_int)0); ((i104146) <= (i61575max104145));
                     
                     //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i104146 = ((x10_int) ((i104146) + (((x10_int)1)))))
                {
                    
                    //#line 578 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int th104147 = i104146;
                    
                    //#line 580 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(ectx)->template sqweezeMessage<TPMGL(V),
                    TPMGL(E), TPMGL(A) >((__extension__ ({
                                             
                                             //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_int index104122 =
                                               th104147;
                                             
                                             //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret104123;
                                             {
                                                 
                                                 //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (!((vctxs->
                                                          FMGL(data)).isValid()))
                                                 {
                                                     
                                                     //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (((index104122) < (((x10_int)0))) ||
                                                     ((((x10_long) (index104122))) >= (vctxs->
                                                                                         FMGL(data)->
                                                                                         FMGL(size))))
                                                 {
                                                     
                                                     //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104122), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret104123 = (vctxs->
                                                            FMGL(data))[index104122];
                                             ret104123;
                                         }))
                                         );
                }
            }
            {
                
                //#line 582 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
                  ((x10_int)2));
            }
            
            //#line 585 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 585 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("update out edge"));
            }
            
            //#line 586 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::xpregel::EdgeProvider<void>::template updateOutEdge<TPMGL(V),
            TPMGL(E) >(this->FMGL(mOutEdge), edgeProviderList,
                       this->FMGL(mIds));
            
            //#line 588 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            this->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateFewInEdge(
              edgeProviderList);
            
            //#line 590 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(ectx)->FMGL(mInEdgesOffset) =
              x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(offsets);
            
            //#line 591 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(ectx)->FMGL(mInEdgesVertex) =
              x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(vertexes);
            
            //#line 593 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::xpregel::EdgeProvider<void>::template reInitializeEdgeProvider<TPMGL(E) >(
              edgeProviderList);
            
            //#line 597 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long numAllBCSCount104171 = this->FMGL(mTeam)->template allreduce<x10_long >(
                                              x10aux::nullCheck(ectx)->
                                                FMGL(mBCSInputCount),
                                              ((x10_int)0));
            
            //#line 598 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if (((((x10_long)0ll)) < (numAllBCSCount104171)) &&
                ((numAllBCSCount104171) < (((x10_long) (((__extension__ ({
                    
                    //#line 598 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::id::IdStruct this104172 =
                      this->FMGL(mIds);
                    this104172->FMGL(numberOfGlobalVertexes);
                }))
                ) / x10aux::zeroCheck(((x10_long) (((x10_int)50)))))))))
            {
                
                //#line 599 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Bitmap* BCbmp104173 =
                  x10aux::nullCheck(ectx)->FMGL(mBCCHasMessage);
                
                //#line 600 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
                  numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__18<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(vctxs, BCbmp104173, ectx))));
                
                //#line 613 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(ectx)->
                                    FMGL(mBCCHasMessage))->org::scalegraph::util::Bitmap::clear(
                  false);
                
                //#line 614 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(M)> this104142 =
                  x10aux::nullCheck(ectx)->FMGL(mBCCMessages);
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (this104142->FMGL(data)).del();
                
                //#line 615 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ectx)->FMGL(mBCCMessages) =
                  org::scalegraph::util::MemoryChunk<TPMGL(M) >::_make((__extension__ ({
                    
                    //#line 615 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::id::IdStruct this104179 =
                      this->FMGL(mIds);
                    this104179->FMGL(numberOfLocalVertexes);
                }))
                , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 616 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ectx)->FMGL(mBCSInputCount) =
                  ((x10_long)0ll);
            }
            
            //#line 621 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 621 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("aggregate..."));
            }
            
            //#line 622 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            TPMGL(A) aggVal104180 = (!x10aux::struct_equals(aggregator,
                                                            X10_NULL))
              ? (org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::template computeAggregate<TPMGL(A) >(
                   this->FMGL(mTeam), intermedAggregateValue,
                   aggregateBuffer, aggregator)) : (x10aux::zeroValue<TPMGL(A) >());
            
            //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i61614domain104148 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vctxs->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i61614max104149 = i61614domain104148->
                                         FMGL(max);
            
            //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_long i104150;
                for (
                     //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i104150 = ((x10_long)0ll); ((i104150) <= (i61614max104149));
                     
                     //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i104150 = ((x10_long) ((i104150) + (((x10_long)1ll)))))
                {
                    
                    //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i104151 = i104150;
                    
                    //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index104143 = i104151;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>* ret104144;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((vctxs->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index104143) < (((x10_long) (((x10_int)0))))) ||
                                ((index104143) >= (vctxs->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104143), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret104144 = (vctxs->FMGL(data))[index104143];
                        ret104144;
                    }))
                    )->FMGL(mAggregatedValue) = aggVal104180;
                }
            }
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value104152 = x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>::__apply(x10aux::nullCheck(end), 
              ss104199, aggVal104180) ? (((x10_long)1ll))
              : (((x10_long)0ll));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret104153;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((statistics->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (statistics->
                                                                                              FMGL(data)->
                                                                                              FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (statistics->FMGL(data)).set(((x10_int)0), value104152);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104153 = value104152;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret104153;
            
            //#line 629 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_boolean terminate104181 = org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::template gatherInformation<TPMGL(M) >(
                                            this->FMGL(mTeam),
                                            ectx, statistics,
                                            this->FMGL(mEnableStatistics),
                                            combiner);
            
            //#line 631 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((__extension__ ({
                                           
                                           //#line 631 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                           x10::lang::Place this104182 =
                                             x10::lang::Place::_make(x10aux::here);
                                           this104182->FMGL(id);
                                       }))
                                       , ((x10_int)0))) &&
                (!x10aux::struct_equals(this->FMGL(mLogPrinter),
                                        X10_NULL))) {
                
                //#line 632 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_END_COUNT: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret104183;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((recvStatistics->FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((((x10_int)0)) < (((x10_int)0))) ||
                              ((((x10_long) (((x10_int)0)))) >= (recvStatistics->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104183 = (recvStatistics->FMGL(data))[((x10_int)0)];
                      ret104183;
                  }))
                  )));
                
                //#line 633 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_ACTIVE_VERTEX: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret104184;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((recvStatistics->FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((((x10_int)1)) < (((x10_int)0))) ||
                              ((((x10_long) (((x10_int)1)))) >= (recvStatistics->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)1)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104184 = (recvStatistics->FMGL(data))[((x10_int)1)];
                      ret104184;
                  }))
                  )));
                
                //#line 634 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_RAW_MESSAGE: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret104185;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((recvStatistics->FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((((x10_int)2)) < (((x10_int)0))) ||
                              ((((x10_long) (((x10_int)2)))) >= (recvStatistics->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)2)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104185 = (recvStatistics->FMGL(data))[((x10_int)2)];
                      ret104185;
                  }))
                  )));
                
                //#line 635 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_VERTEX_MESSAGE: "), (__extension__ ({
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                      ;
                      
                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                      x10_long ret104186;
                      {
                          
                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (!((recvStatistics->FMGL(data)).isValid()))
                          {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                              }
                              
                          }
                          
                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (((((x10_int)3)) < (((x10_int)0))) ||
                              ((((x10_long) (((x10_int)3)))) >= (recvStatistics->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                          {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (true) {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)3)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                              }
                              
                          }
                          
                      }
                      
                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                      ret104186 = (recvStatistics->FMGL(data))[((x10_int)3)];
                      ret104186;
                  }))
                  )));
                
                //#line 636 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (this->FMGL(mEnableStatistics) && (x10aux::struct_equals(terminate104181,
                                                                            false)))
                {
                    
                    //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_COMBINED_MESSAGE: "), (__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret104187;
                          {
                              
                              //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((recvStatistics->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((((x10_int)4)) < (((x10_int)0))) ||
                                  ((((x10_long) (((x10_int)4)))) >= (recvStatistics->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                              {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)4)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret104187 = (recvStatistics->FMGL(data))[((x10_int)4)];
                          ret104187;
                      }))
                      )));
                    
                    //#line 638 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(this->FMGL(mLogPrinter))->x10::io::Printer::println(
                      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("STT_VERTEX_TRANSFERED_MESSAGE: "), (__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long ret104188;
                          {
                              
                              //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((recvStatistics->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((((x10_int)5)) < (((x10_int)0))) ||
                                  ((((x10_long) (((x10_int)5)))) >= (recvStatistics->
                                                                       FMGL(data)->
                                                                       FMGL(size))))
                              {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)5)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret104188 = (recvStatistics->FMGL(data))[((x10_int)5)];
                          ret104188;
                      }))
                      )));
                }
                
            }
            
            //#line 642 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
            if (terminate104181) {
                
                //#line 643 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(mLastAggVal) = (x10aux::class_cast_unchecked<x10::lang::Any*>(aggVal104180));
                
                //#line 644 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(mInEdgesMask) = x10aux::nullCheck(ectx)->
                                             FMGL(mInEdgesMask);
                
                //#line 646 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
                return;
            }
            
            //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::exchangeMessages(
              (((__extension__ ({
                  
                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                  ;
                  
                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  x10_long ret104189;
                  {
                      
                      //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (!((recvStatistics->FMGL(data)).isValid()))
                      {
                          
                          //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                          }
                          
                      }
                      
                      //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (((((x10_int)4)) < (((x10_int)0))) ||
                          ((((x10_long) (((x10_int)4)))) >= (recvStatistics->
                                                               FMGL(data)->
                                                               FMGL(size))))
                      {
                          
                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)4)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                          }
                          
                      }
                      
                  }
                  
                  //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                  ret104189 = (recvStatistics->FMGL(data))[((x10_int)4)];
                  ret104189;
              }))
              ) > (((x10_long)0ll))), (((__extension__ ({
                  
                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                  ;
                  
                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                  x10_long ret104190;
                  {
                      
                      //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (!((recvStatistics->FMGL(data)).isValid()))
                      {
                          
                          //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                          }
                          
                      }
                      
                      //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                      if (((((x10_int)3)) < (((x10_int)0))) ||
                          ((((x10_long) (((x10_int)3)))) >= (recvStatistics->
                                                               FMGL(data)->
                                                               FMGL(size))))
                      {
                          
                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)3)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                          }
                          
                      }
                      
                  }
                  
                  //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                  ret104190 = (recvStatistics->FMGL(data))[((x10_int)3)];
                  ret104190;
              }))
              ) > (((x10_long)0ll))));
        }
    }
    
    //#line 655 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("Superstep limit exceeded. # of supterstep > 10000"))));
    }
    #endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_run_564
    #ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_566
    #define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_566
    template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)>
    org::scalegraph::util::MemoryChunk<TPMGL(T)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::stealOutput(
      x10_int index) {
        
        //#line 664 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
        if (((index) > (((x10_int)8)))) {
            
            //#line 665 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make()));
        }
        
        //#line 667 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::ProfilingDB__Timer mtimer =
          x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
            ((x10_int)0), ((x10_long) (((x10_int)0))));
        {
            
            //#line 668 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            mtimer->org::scalegraph::util::ProfilingDB__Timer::start();
        }
        
        //#line 670 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long length = ((x10_long)0ll);
        
        //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_int i61651max104215 = ((x10_int) ((this->FMGL(numThreads)) - (((x10_int)1))));
        
        //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_int i104216;
            for (
                 //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i104216 = ((x10_int)0); ((i104216) <= (i61651max104215));
                 
                 //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i104216 = ((x10_int) ((i104216) + (((x10_int)1)))))
            {
                
                //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_int i104217 = i104216;
                
                //#line 672 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                length = ((x10_long) ((length) + ((__extension__ ({
                    
                    //#line 672 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<x10_int>* this104200 =
                      (__extension__ ({
                        
                        //#line 672 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> this104201 =
                          this->FMGL(mOutput);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index104202 = ((x10_int) ((((x10_int) ((i104217) * (((x10_int)8))))) + (index)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::GrowableMemory<x10_int>* ret104203;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this104201->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index104202) < (((x10_int)0))) ||
                                ((((x10_long) (index104202))) >= (this104201->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104202), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret104203 = (this104201->FMGL(data))[index104202];
                        ret104203;
                    }))
                    ;
                    x10aux::nullCheck(this104200)->FMGL(size);
                }))
                )));
            }
        }
        
        //#line 675 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> outMem =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(length, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 676 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long)0ll);
        {
            
            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var77 = x10::lang::Runtime::startFinish();
            {
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable104257 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int i61669max104212 = ((x10_int) ((this->
                                                                     FMGL(numThreads)) - (((x10_int)1))));
                            
                            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                            {
                                x10_int i104213;
                                for (
                                     //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                     i104213 = ((x10_int)0);
                                     ((i104213) <= (i61669max104212));
                                     
                                     //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                     i104213 = ((x10_int) ((i104213) + (((x10_int)1)))))
                                {
                                    
                                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    x10_int i104214 = i104213;
                                    
                                    //#line 678 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::util::GrowableMemory<x10_int>* buf104204 =
                                      (__extension__ ({
                                        
                                        //#line 678 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> this104205 =
                                          this->FMGL(mOutput);
                                        
                                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        x10_int index104206 =
                                          ((x10_int) ((((x10_int) ((i104214) * (((x10_int)8))))) + (index)));
                                        
                                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::GrowableMemory<x10_int>* ret104207;
                                        {
                                            
                                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (!((this104205->
                                                     FMGL(data)).isValid()))
                                            {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (((index104206) < (((x10_int)0))) ||
                                                ((((x10_long) (index104206))) >= (this104205->
                                                                                    FMGL(data)->
                                                                                    FMGL(size))))
                                            {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104206), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret104207 = (this104205->
                                                       FMGL(data))[index104206];
                                        ret104207;
                                    }))
                                    ;
                                    
                                    //#line 679 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    x10_long src_len104208 =
                                      (__extension__ ({
                                        x10aux::nullCheck(buf104204)->
                                          FMGL(size);
                                    }))
                                    ;
                                    
                                    //#line 680 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    x10_long offset_104209 =
                                      offset;
                                    
                                    //#line 681 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__19<TPMGL(V),TPMGL(E),TPMGL(T)>(i104214, buf104204, outMem, offset_104209, src_len104208))));
                                    
                                    //#line 693 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                    offset = ((x10_long) ((offset) + (src_len104208)));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc568) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc568);
                            {
                                
                                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc569) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal104258 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc569);
                        {
                            
                            //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable104257 = formal104258;
                        }
                    } else
                    throw;
                }
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable104257)))
                {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable104257))
                    {
                        
                        //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable104257));
                    }
                    
                }
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var77);
                }
                
                //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable104257)))
                {
                    
                    //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104257)))
                    {
                        
                        //#line 677 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable104257));
                    }
                    
                }
                
            }
        }
        {
            
            //#line 695 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)2));
        }
        
        //#line 697 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return outMem;
        
    }
    #endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_stealOutput_566
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER__get)() {
        if (FMGL(MAX_OUTPUT_NUMBER__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(MAX_OUTPUT_NUMBER__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(MAX_OUTPUT_NUMBER);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT__get)() {
        if (FMGL(STT_END_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_END_COUNT__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_END_COUNT);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX__get)() {
        if (FMGL(STT_ACTIVE_VERTEX__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_ACTIVE_VERTEX__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_ACTIVE_VERTEX);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE__get)() {
        if (FMGL(STT_RAW_MESSAGE__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_RAW_MESSAGE__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_RAW_MESSAGE);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE__get)() {
        if (FMGL(STT_VERTEX_MESSAGE__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_VERTEX_MESSAGE__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_MESSAGE);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE__get)() {
        if (FMGL(STT_PRE__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_PRE__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_PRE);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE__get)() {
        if (FMGL(STT_COMBINED_MESSAGE__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_COMBINED_MESSAGE__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_COMBINED_MESSAGE);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE__get)() {
        if (FMGL(STT_VERTEX_TRANSFERED_MESSAGE__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_VERTEX_TRANSFERED_MESSAGE__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_VERTEX_TRANSFERED_MESSAGE);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST__get)() {
        if (FMGL(STT_POST__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_POST__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_POST);
    }
    
    inline x10_int org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX__get)() {
        if (FMGL(STT_MAX__status) != x10aux::StaticInitController::INITIALIZED) {
            FMGL(STT_MAX__init)();
        }
        return org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::FMGL(STT_MAX);
    }
    
    #endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_GENERICS
    #ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>

#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_int> __apply(x10_long i) {
        
        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (numTeam)), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_int numTeam;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numTeam);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_int that_numTeam = buf.read<x10_int>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >(that_numTeam);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__1(x10_int numTeam) : numTeam(numTeam) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:119";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> > >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i72573domain103711 = i_range103719;
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i72573min103712 = i72573domain103711->FMGL(min);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i72573max103713 = i72573domain103711->FMGL(max);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i103714;
                for (
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i103714 = i72573min103712; ((i103714) <= (i72573max103713));
                     
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i103714 = ((x10_int) ((i103714) + (((x10_int)1)))))
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii103715 = i103714;
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int tid103710 = ii103715;
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                    if ((((__extension__ ({
                            
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_long> this103707 =
                              x10aux::nullCheck((__extension__ ({
                                  
                                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_int index103708 = tid103710;
                                  
                                  //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103709;
                                  {
                                      
                                      //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (!((list->FMGL(data)).isValid()))
                                      {
                                          
                                          //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                      //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (((index103708) < (((x10_int)0))) ||
                                          ((((x10_long) (index103708))) >= (list->
                                                                              FMGL(data)->
                                                                              FMGL(size))))
                                      {
                                          
                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103708), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103709 = (list->FMGL(data))[index103708];
                                  ret103709;
                              }))
                              )->FMGL(mEdgeModifyReqOffset);
                            this103707->FMGL(data)->FMGL(size);
                        }))
                        ) > (((x10_long) (((x10_int)0))))))
                    {
                        
                        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Assert_c
                        #ifndef NO_ASSERTIONS
                        if (x10aux::x10__assertions_enabled)
                            x10aux::x10__assert((x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                                                             tid103710))->
                                                                                           FMGL(mEdgeModifyReqWithAR))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::size(),
                                                                       x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                                           tid103710))->
                                                                         FMGL(mEdgeModifyReqOffset)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                         ((x10_long) ((x10aux::nullCheck(list->org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*>::__apply(
                                                                                                           tid103710))->
                                                                                         FMGL(mEdgeModifyReqOffset)->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long)1ll))))))));
                        #endif//NO_ASSERTIONS
                        
                    }
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index103694 = tid103710;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange value103695 = (__extension__ ({
                        
                        //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this103696 =
                          x10aux::nullCheck((__extension__ ({
                              
                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                              x10_int index103697 = tid103710;
                              
                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103698;
                              {
                                  
                                  //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (!((list->FMGL(data)).isValid()))
                                  {
                                      
                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (((index103697) < (((x10_int)0))) ||
                                      ((((x10_long) (index103697))) >= (list->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                  {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103697), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                              ret103698 = (list->FMGL(data))[index103697];
                              ret103698;
                          }))
                          )->FMGL(mEdgeModifyReqWithAR);
                        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((x10aux::nullCheck(this103696)->
                                                                                     FMGL(size)) - (((x10_long)1ll)))));
                    }))
                    ;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange ret103699;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((outModReqRange->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103694) < (((x10_int)0))) ||
                            ((((x10_long) (index103694))) >= (outModReqRange->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103694), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (outModReqRange->FMGL(data)).set(index103694, value103695);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103699 = value103695;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103699;
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange i61202domain103700 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103701 = tid103710;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10::lang::LongRange ret103702;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((outModReqRange->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103701) < (((x10_int)0))) ||
                                ((((x10_long) (index103701))) >= (outModReqRange->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103701), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103702 = (outModReqRange->FMGL(data))[index103701];
                        ret103702;
                    }))
                    ;
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i61202min103703 = i61202domain103700->
                                                 FMGL(min);
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i61202max103704 = i61202domain103700->
                                                 FMGL(max);
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                    {
                        x10_long i103705;
                        for (
                             //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                             i103705 = i61202min103703; ((i103705) <= (i61202max103704));
                             
                             //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                             i103705 = ((x10_long) ((i103705) + (((x10_long)1ll)))))
                        {
                            
                            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long i103706 = i103705;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x103682 =
                              (__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103683 = tid103710;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_int> ret103684;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((diffInEdgeCountPerThread->
                                             FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index103683) < (((x10_int)0))) ||
                                        ((((x10_long) (index103683))) >= (diffInEdgeCountPerThread->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103683), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103684 = (diffInEdgeCountPerThread->
                                               FMGL(data))[index103683];
                                ret103684;
                            }))
                            ;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int y103685 = (__extension__ ({
                                
                                //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103686 =
                                  saved_this->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103687 = (__extension__ ({
                                                        
                                                        //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this103688 =
                                                          x10aux::nullCheck((__extension__ ({
                                                              
                                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              x10_int index103689 =
                                                                tid103710;
                                                              
                                                              //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                              org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103690;
                                                              {
                                                                  
                                                                  //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (!((list->
                                                                           FMGL(data)).isValid()))
                                                                  {
                                                                      
                                                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                      if (true)
                                                                      {
                                                                          
                                                                          //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                          if (true)
                                                                          {
                                                                              
                                                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                          }
                                                                          
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                                  //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                  if (((index103689) < (((x10_int)0))) ||
                                                                      ((((x10_long) (index103689))) >= (list->
                                                                                                          FMGL(data)->
                                                                                                          FMGL(size))))
                                                                  {
                                                                      
                                                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                      if (true)
                                                                      {
                                                                          
                                                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                          if (true)
                                                                          {
                                                                              
                                                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103689), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                          }
                                                                          
                                                                      }
                                                                      
                                                                  }
                                                                  
                                                              }
                                                              
                                                              //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                              ret103690 =
                                                                (list->
                                                                   FMGL(data))[index103689];
                                                              ret103690;
                                                          }))
                                                          )->
                                                            FMGL(mEdgeModifyReqWithAR);
                                                        
                                                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                        x10_long index103691 =
                                                          i103706;
                                                        
                                                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103692;
                                                        {
                                                            
                                                            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                            if (((index103691) < (((x10_long) (((x10_int)0))))) ||
                                                                ((index103691) >= (x10aux::nullCheck(this103688)->
                                                                                     FMGL(size))))
                                                            {
                                                                
                                                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                if (true)
                                                                {
                                                                    
                                                                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103691), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                        }
                                                        
                                                        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret103692 =
                                                          (x10aux::nullCheck(this103688)->
                                                             FMGL(mc)->
                                                             FMGL(data))[index103691];
                                                        ret103692;
                                                    }))
                                                    ->FMGL(val1);
                                ((x10_int) (((x10_long) ((id103687) >> (0x3f & (this103686->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret103693;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int r103679 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103680 = y103685;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret103681;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x103682->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index103680) < (((x10_int)0))) ||
                                        ((((x10_long) (index103680))) >= (x103682->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103680), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103681 = (x103682->FMGL(data))[index103680];
                                ret103681;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103676 = y103685;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value103677 = r103679;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret103678;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x103682->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103676) < (((x10_int)0))) ||
                                    ((((x10_long) (index103676))) >= (x103682->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103676), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x103682->FMGL(data)).set(index103676, value103677);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103678 = value103677;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret103678;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103693 = r103679;
                            
                            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Local_c
                            ret103693;
                        }
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc550) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc550)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc550);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc550);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::IntRange i_range103719;
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range103719);
        buf.write(this->list);
        buf.write(this->outModReqRange);
        buf.write(this->diffInEdgeCountPerThread);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range103719 = buf.read<x10::lang::IntRange>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<x10::lang::LongRange> that_outModReqRange = buf.read<org::scalegraph::util::MemoryChunk<x10::lang::LongRange> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > that_diffInEdgeCountPerThread = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > >();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >(that_i_range103719, that_list, that_outModReqRange, that_diffInEdgeCountPerThread, that_saved_this);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__2(x10::lang::IntRange i_range103719, org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this) : i_range103719(i_range103719), list(list), outModReqRange(outModReqRange), diffInEdgeCountPerThread(diffInEdgeCountPerThread), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:843";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > __apply(x10_long j) {
        
        //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >::_make(((x10_long) ((__extension__ ({
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this101870 = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index101866 = i;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ret101867;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((diffInEdgeCountPerThread->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index101866) < (((x10_long) (((x10_int)0))))) ||
                        ((index101866) >= (diffInEdgeCountPerThread->FMGL(data)->
                                             FMGL(size)))) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index101866), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret101867 = (diffInEdgeCountPerThread->FMGL(data))[index101866];
                ret101867;
            }))
            ;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index101869 = j;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret101871;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this101870->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index101869) < (((x10_long) (((x10_int)0))))) ||
                    ((index101869) >= (this101870->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index101869), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret101871 = (this101870->FMGL(data))[index101869];
            ret101871;
        }))
        )), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long i;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i);
        buf.write(this->diffInEdgeCountPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_long that_i = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > that_diffInEdgeCountPerThread = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >(that_i, that_diffInEdgeCountPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__4(x10_long i, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread) : i(i), diffInEdgeCountPerThread(diffInEdgeCountPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:143";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > __apply(x10_long i) {
        
        //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > >::_make(((x10_long) (numTeam)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__4<TPMGL(V),TPMGL(E)>(i, diffInEdgeCountPerThread))), (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_int numTeam;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numTeam);
        buf.write(this->diffInEdgeCountPerThread);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_int that_numTeam = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > that_diffInEdgeCountPerThread = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >(that_numTeam, that_diffInEdgeCountPerThread);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__3(x10_int numTeam, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread) : numTeam(numTeam), diffInEdgeCountPerThread(diffInEdgeCountPerThread) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:142-144";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i72573domain103801 = i_range103809;
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i72573min103802 = i72573domain103801->FMGL(min);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i72573max103803 = i72573domain103801->FMGL(max);
            
            //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i103804;
                for (
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i103804 = i72573min103802; ((i103804) <= (i72573max103803));
                     
                     //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i103804 = ((x10_int) ((i103804) + (((x10_int)1)))))
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii103805 = i103804;
                    
                    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int tid103800 = ii103805;
                    
                    //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e103788 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103789 = tid103800;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103790;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((list->FMGL(data)).isValid())) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103789) < (((x10_int)0))) ||
                                ((((x10_long) (index103789))) >= (list->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103789), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103790 = (list->FMGL(data))[index103789];
                        ret103790;
                    }))
                    ;
                    
                    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > workdata103791 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103792 = tid103800;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > ret103793;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((diffInEdgeDataPerThread->
                                     FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103792) < (((x10_int)0))) ||
                                ((((x10_long) (index103792))) >= (diffInEdgeDataPerThread->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103792), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103793 = (diffInEdgeDataPerThread->
                                       FMGL(data))[index103792];
                        ret103793;
                    }))
                    ;
                    
                    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> workoff103794 =
                      x10aux::nullCheck((__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_int index103795 = tid103800;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103796;
                          {
                              
                              //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((list->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index103795) < (((x10_int)0))) ||
                                  ((((x10_long) (index103795))) >= (list->
                                                                      FMGL(data)->
                                                                      FMGL(size))))
                              {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103795), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret103796 = (list->FMGL(data))[index103795];
                          ret103796;
                      }))
                      )->FMGL(mEdgeModifyReqOffset);
                    
                    //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long maxSrcid103797 = ((x10_long) (((__extension__ ({
                        workoff103794->FMGL(data)->FMGL(size);
                    }))
                    ) - (((x10_long)2ll))));
                    
                    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> index103798 =
                      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (numTeam)), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
                    
                    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long srcid103799 = ((x10_long)0ll);
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::LongRange i61259domain103781 =
                      (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103782 = tid103800;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10::lang::LongRange ret103783;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((outModReqRange->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103782) < (((x10_int)0))) ||
                                ((((x10_long) (index103782))) >= (outModReqRange->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103782), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103783 = (outModReqRange->FMGL(data))[index103782];
                        ret103783;
                    }))
                    ;
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i61259min103784 = i61259domain103781->
                                                 FMGL(min);
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i61259max103785 = i61259domain103781->
                                                 FMGL(max);
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                    {
                        x10_long i103786;
                        for (
                             //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                             i103786 = i61259min103784; ((i103786) <= (i61259max103785));
                             
                             //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                             i103786 = ((x10_long) ((i103786) + (((x10_long)1ll)))))
                        {
                            
                            //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long i103787 = i103786;
                            
                            //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> target103769 =
                              (__extension__ ({
                                
                                //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* this103770 =
                                  x10aux::nullCheck((__extension__ ({
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      x10_int index103771 =
                                        tid103800;
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret103772;
                                      {
                                          
                                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (!((list->FMGL(data)).isValid()))
                                          {
                                              
                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                  if (true)
                                                  {
                                                      
                                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                  }
                                                  
                                              }
                                              
                                          }
                                          
                                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (((index103771) < (((x10_int)0))) ||
                                              ((((x10_long) (index103771))) >= (list->
                                                                                  FMGL(data)->
                                                                                  FMGL(size))))
                                          {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                  if (true)
                                                  {
                                                      
                                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103771), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                  }
                                                  
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret103772 = (list->
                                                     FMGL(data))[index103771];
                                      ret103772;
                                  }))
                                  )->FMGL(mEdgeModifyReqWithAR);
                                
                                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                x10_long index103773 = i103787;
                                
                                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103774;
                                {
                                    
                                    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                    if (((index103773) < (((x10_long) (((x10_int)0))))) ||
                                        ((index103773) >= (x10aux::nullCheck(this103770)->
                                                             FMGL(size))))
                                    {
                                        
                                        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103773), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103774 = (x10aux::nullCheck(this103770)->
                                               FMGL(mc)->
                                               FMGL(data))[index103773];
                                ret103774;
                            }))
                            ;
                            
                            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_long dstid103775 = target103769->
                                                     FMGL(val1);
                            
                            //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            x10_int team103776 = (__extension__ ({
                                
                                //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103777 =
                                  saved_this->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103778 = dstid103775;
                                ((x10_int) (((x10_long) ((id103778) >> (0x3f & (this103777->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10While_c
                            while (((srcid103799) < (maxSrcid103797)) &&
                                   (((__extension__ ({
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103779 =
                                         ((x10_long) ((srcid103799) + (((x10_long) (((x10_int)1))))));
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103780;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((workoff103794->
                                                    FMGL(data)).isValid()))
                                           {
                                               
                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (((index103779) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103779) >= (workoff103794->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103779), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103780 = (workoff103794->
                                                      FMGL(data))[index103779];
                                       ret103780;
                                   }))
                                   ) <= (i103787))) {
                                
                                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                srcid103799 = ((x10_long) ((srcid103799) + (((x10_long)1ll))));
                            }
                            
                            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > this103759 =
                              (__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103760 = team103776;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > ret103761;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((workdata103791->
                                             FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index103760) < (((x10_int)0))) ||
                                        ((((x10_long) (index103760))) >= (workdata103791->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103760), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103761 = (workdata103791->
                                               FMGL(data))[index103760];
                                ret103761;
                            }))
                            ;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103762 = ((x10_int) (((__extension__ ({
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::MemoryChunk<x10_int> x103763 =
                                  index103798;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int y103764 = team103776;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Empty_c
                                ;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int ret103765;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                x10_int r103751 = ((x10_int) (((__extension__ ({
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int index103752 =
                                      y103764;
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int ret103753;
                                    {
                                        
                                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((x103763->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (true)
                                                    {
                                                        
                                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                    }
                                                    
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index103752) < (((x10_int)0))) ||
                                            ((((x10_long) (index103752))) >= (x103763->
                                                                                FMGL(data)->
                                                                                FMGL(size))))
                                        {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (true)
                                                    {
                                                        
                                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103752), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                    }
                                                    
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret103753 = (x103763->
                                                   FMGL(data))[index103752];
                                    ret103753;
                                }))
                                ) + (((x10_int)1))));
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index103748 = y103764;
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int value103749 = r103751;
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret103750;
                                {
                                    
                                    //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x103763->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index103748) < (((x10_int)0))) ||
                                        ((((x10_long) (index103748))) >= (x103763->
                                                                            FMGL(data)->
                                                                            FMGL(size))))
                                    {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103748), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                                (x103763->FMGL(data)).set(index103748, value103749);
                                
                                //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103750 = value103749;
                                
                                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                                ret103750;
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                                ret103765 = r103751;
                                ret103765;
                            }))
                            ) - (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> value103766 =
                              (__extension__ ({
                                
                                //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> alloc103767 =
                                   org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)>::_alloc();
                                
                                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                                x10_long val103754 = ((x10_long) ((dstid103775) & (((x10_long)-8070450532247928833ll))));
                                
                                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                                x10_long val103755 = ((x10_long) (((__extension__ ({
                                    
                                    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::graph::id::OnedR__StoD this103756 =
                                      saved_this->FMGL(mStoD);
                                    
                                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                    x10_long id103757 = ((x10_long) ((x10aux::nullCheck(e103788)->
                                                                        FMGL(mStartSrcid)) + (srcid103799)));
                                    ((x10_long) ((id103757) | (this103756->
                                                                 FMGL(rshifted))));
                                }))
                                ) | (((x10_long) ((dstid103775) & (((x10_long)8070450532247928832ll)))))));
                                
                                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                                TPMGL(E) val103758 = target103769->
                                                       FMGL(val2);
                                
                                //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                                alloc103767->FMGL(val1) =
                                  val103754;
                                
                                //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                                alloc103767->FMGL(val2) =
                                  val103755;
                                
                                //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                                alloc103767->FMGL(val3) =
                                  val103758;
                                alloc103767;
                            }))
                            ;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103768;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this103759->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103762) < (((x10_int)0))) ||
                                    ((((x10_long) (index103762))) >= (this103759->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103762), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (this103759->FMGL(data)).set(index103762, value103766);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103768 = value103766;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret103768;
                        }
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc553) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc553)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc553);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc553);
                {
                    
                    //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::IntRange i_range103809;
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > diffInEdgeDataPerThread;
    x10_int numTeam;
    org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range103809);
        buf.write(this->list);
        buf.write(this->diffInEdgeDataPerThread);
        buf.write(this->numTeam);
        buf.write(this->outModReqRange);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range103809 = buf.read<x10::lang::IntRange>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > that_diffInEdgeDataPerThread = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >();
        x10_int that_numTeam = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10::lang::LongRange> that_outModReqRange = buf.read<org::scalegraph::util::MemoryChunk<x10::lang::LongRange> >();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >(that_i_range103809, that_list, that_diffInEdgeDataPerThread, that_numTeam, that_outModReqRange, that_saved_this);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__5(x10::lang::IntRange i_range103809, org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > diffInEdgeDataPerThread, x10_int numTeam, org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this) : i_range103809(i_range103809), list(list), diffInEdgeDataPerThread(diffInEdgeDataPerThread), numTeam(numTeam), outModReqRange(outModReqRange), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:843";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange range) {
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i61334domain103846 = range;
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61334min103847 = i61334domain103846->FMGL(min);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61334max103848 = i61334domain103846->FMGL(max);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103849;
            for (
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103849 = i61334min103847; ((i103849) <= (i61334max103848));
                 
                 //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103849 = ((x10_long) ((i103849) + (((x10_long)1ll))))) {
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103850 = i103849;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index103842 = i103850;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> value103843 =
                  (__extension__ ({
                    
                    //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> alloc103844 =
                       org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)>::_alloc();
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                    x10_long val103831 = (__extension__ ({
                        
                        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::graph::id::OnedR__DtoS this103832 =
                          saved_this->FMGL(mDtoS);
                        
                        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                        x10_long id103833 = (__extension__ ({
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                x10_long index103834 =
                                                  i103850;
                                                
                                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103835;
                                                {
                                                    
                                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (!((result->
                                                             FMGL(data)).isValid()))
                                                    {
                                                        
                                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                        }
                                                        
                                                    }
                                                    
                                                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                    if (((index103834) < (((x10_long) (((x10_int)0))))) ||
                                                        ((index103834) >= (result->
                                                                             FMGL(data)->
                                                                             FMGL(size))))
                                                    {
                                                        
                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103834), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                        }
                                                        
                                                    }
                                                    
                                                }
                                                
                                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret103835 =
                                                  (result->
                                                     FMGL(data))[index103834];
                                                ret103835;
                                            }))
                                            ->FMGL(val1);
                        ((x10_long) ((id103833) & (this103832->
                                                     FMGL(lmask))));
                    }))
                    ;
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                    x10_long val103836 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103837 =
                                               i103850;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103838;
                                             {
                                                 
                                                 //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (!((result->
                                                          FMGL(data)).isValid()))
                                                 {
                                                     
                                                     //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (((index103837) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103837) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103837), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103838 = (result->
                                                            FMGL(data))[index103837];
                                             ret103838;
                                         }))
                                         ->FMGL(val2);
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) val103839 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103840 =
                                               i103850;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103841;
                                             {
                                                 
                                                 //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (!((result->
                                                          FMGL(data)).isValid()))
                                                 {
                                                     
                                                     //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (((index103840) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103840) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103840), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103841 = (result->
                                                            FMGL(data))[index103840];
                                             ret103841;
                                         }))
                                         ->FMGL(val3);
                    
                    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103844->FMGL(val1) = val103831;
                    
                    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103844->FMGL(val2) = val103836;
                    
                    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple3.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103844->FMGL(val3) = val103839;
                    alloc103844;
                }))
                ;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103845;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((result->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index103842) < (((x10_long) (((x10_int)0))))) ||
                        ((index103842) >= (result->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103842), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (result->FMGL(data)).set(index103842, value103843);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret103845 = value103843;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret103845;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > result;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->result);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > that_result = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >(that_saved_this, that_result);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__6(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > result) : saved_this(saved_this), result(result) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:191-194";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply(x10_long tid) {
        
        //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
            
            //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this102827 = x10aux::nullCheck((__extension__ ({
                                                                          
                                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                          x10_long index102824 =
                                                                            tid;
                                                                          
                                                                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                          org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret102825;
                                                                          {
                                                                              
                                                                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                              if (!((list->
                                                                                       FMGL(data)).isValid()))
                                                                              {
                                                                                  
                                                                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                  if (true)
                                                                                  {
                                                                                      
                                                                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                  }
                                                                                  
                                                                              }
                                                                              
                                                                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                              if (((index102824) < (((x10_long) (((x10_int)0))))) ||
                                                                                  ((index102824) >= (list->
                                                                                                       FMGL(data)->
                                                                                                       FMGL(size))))
                                                                              {
                                                                                  
                                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                  if (true)
                                                                                  {
                                                                                      
                                                                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102824), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                  }
                                                                                  
                                                                              }
                                                                              
                                                                          }
                                                                          
                                                                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                          ret102825 =
                                                                            (list->
                                                                               FMGL(data))[index102824];
                                                                          ret102825;
                                                                      }))
                                                                      )->
                                                                        FMGL(mEdgeModifyReqOffset);
            this102827->FMGL(data)->FMGL(size);
        }))
        , ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->list);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >(that_list);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__7(org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list) : list(list) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:203";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange vrange) {
        
        //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange resrange = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((result->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long start = ((x10_long) ((resrange->FMGL(max)) + (((x10_long)1ll))));
        
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long end = resrange->FMGL(max);
        
        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* e = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index102828 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>* ret102829;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((list->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index102828) < (((x10_long) (((x10_int)0))))) ||
                    ((index102828) >= (list->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102828), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102829 = (list->FMGL(data))[index102828];
            ret102829;
        }))
        ;
        
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> reqoff = (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index102831 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> ret102832;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((InEdgeModifyReqOffsets->FMGL(data)).isValid()))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index102831) < (((x10_long) (((x10_int)0))))) ||
                    ((index102831) >= (InEdgeModifyReqOffsets->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102831), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102832 = (InEdgeModifyReqOffsets->FMGL(data))[index102831];
            ret102832;
        }))
        ;
        
        //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* reqs =
          (__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index102834 = tid;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* ret102835;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((InEdgeModifyReqsWithAR->FMGL(data)).isValid()))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index102834) < (((x10_long) (((x10_int)0))))) ||
                    ((index102834) >= (InEdgeModifyReqsWithAR->
                                         FMGL(data)->FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index102834), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret102835 = (InEdgeModifyReqsWithAR->FMGL(data))[index102834];
            ret102835;
        }))
        ;
        
        //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Assert_c
        #ifndef NO_ASSERTIONS
        if (x10aux::x10__assertions_enabled)
            x10aux::x10__assert((x10aux::struct_equals(vrange->
                                                         FMGL(min),
                                                       x10aux::nullCheck(e)->
                                                         FMGL(mStartSrcid))));
        #endif//NO_ASSERTIONS
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i61353domain103872 = resrange;
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61353max103873 = i61353domain103872->FMGL(max);
        
        //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103874;
            for (
                 //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103874 = ((x10_long)0ll); ((i103874) <= (i61353max103873));
                 
                 //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103874 = ((x10_long) ((i103874) + (((x10_long)1ll)))))
            {
                
                //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103875 = i103874;
                
                //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((((__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index103851 = i103875;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103852;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((result->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index103851) < (((x10_long) (((x10_int)0))))) ||
                                  ((index103851) >= (result->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103851), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret103852 = (result->FMGL(data))[index103851];
                          ret103852;
                      }))
                      ->FMGL(val1)) >= (vrange->FMGL(min))))
                {
                    
                    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    start = i103875;
                    
                    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Branch_c
                    break;
                }
                
            }
        }
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61372min103876 = start;
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61372max103877 = resrange->FMGL(max);
        
        //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103878;
            for (
                 //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103878 = i61372min103876; ((i103878) <= (i61372max103877));
                 
                 //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103878 = ((x10_long) ((i103878) + (((x10_long)1ll)))))
            {
                
                //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103879 = i103878;
                
                //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
                if ((((__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index103853 = i103879;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103854;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((result->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index103853) < (((x10_long) (((x10_int)0))))) ||
                                  ((index103853) >= (result->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103853), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret103854 = (result->FMGL(data))[index103853];
                          ret103854;
                      }))
                      ->FMGL(val1)) > (vrange->FMGL(max))))
                {
                    
                    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    end = ((x10_long) ((i103879) - (((x10_long)1ll))));
                    
                    //#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Branch_c
                    break;
                }
                
            }
        }
        
        //#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
        if (((start) > (end))) {
            
            //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(reqs)->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::setSize(
              ((x10_long)0ll));
            
            //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
            return;
        } else {
            
            //#line 236 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long size = ((x10_long) ((((x10_long) ((end) - (start)))) + (((x10_long)1ll))));
            
            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(reqs)->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::setSize(
              size);
        }
        
        //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long reqsIndex = ((x10_long)0ll);
        
        //#line 240 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long ssrc = x10aux::nullCheck(e)->FMGL(mStartSrcid);
        
        //#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long tsrcid = ((x10_long) ((ssrc) - (((x10_long)1ll))));
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61390min103880 = start;
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61390max103881 = end;
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103882;
            for (
                 //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103882 = i61390min103880; ((i103882) <= (i61390max103881));
                 
                 //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103882 = ((x10_long) ((i103882) + (((x10_long)1ll)))))
            {
                
                //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103883 = i103882;
                
                //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10While_c
                while (((tsrcid) < ((__extension__ ({
                                        
                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        x10_long index103867 =
                                          i103883;
                                        
                                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103868;
                                        {
                                            
                                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (!((result->
                                                     FMGL(data)).isValid()))
                                            {
                                                
                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (((index103867) < (((x10_long) (((x10_int)0))))) ||
                                                ((index103867) >= (result->
                                                                     FMGL(data)->
                                                                     FMGL(size))))
                                            {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103867), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret103868 = (result->
                                                       FMGL(data))[index103867];
                                        ret103868;
                                    }))
                                    ->FMGL(val1)))) {
                    
                    //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    tsrcid = ((x10_long) ((tsrcid) + (((x10_long)1ll))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103855 = ((x10_long) ((tsrcid) - (ssrc)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value103856 = reqsIndex;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103857;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((reqoff->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103855) < (((x10_long) (((x10_int)0))))) ||
                            ((index103855) >= (reqoff->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103855), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (reqoff->FMGL(data)).set(index103855, value103856);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103857 = value103856;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103857;
                }
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                x10_long index103864 = ((x10_long) ((reqsIndex =
                  ((x10_long) ((reqsIndex) + (((x10_long)1ll))))) - (((x10_long)1ll))));
                
                //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> value103865 =
                  (__extension__ ({
                    
                    //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc103866 =
                       org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                    
                    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                    x10_long val103858 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103859 =
                                               i103883;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103860;
                                             {
                                                 
                                                 //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (!((result->
                                                          FMGL(data)).isValid()))
                                                 {
                                                     
                                                     //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (((index103859) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103859) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103859), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103860 = (result->
                                                            FMGL(data))[index103859];
                                             ret103860;
                                         }))
                                         ->FMGL(val2);
                    
                    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) val103861 = (__extension__ ({
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             x10_long index103862 =
                                               i103883;
                                             
                                             //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                             org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> ret103863;
                                             {
                                                 
                                                 //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (!((result->
                                                          FMGL(data)).isValid()))
                                                 {
                                                     
                                                     //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                 if (((index103862) < (((x10_long) (((x10_int)0))))) ||
                                                     ((index103862) >= (result->
                                                                          FMGL(data)->
                                                                          FMGL(size))))
                                                 {
                                                     
                                                     //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (true)
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                         x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103862), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                     }
                                                     
                                                 }
                                                 
                                             }
                                             
                                             //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret103863 = (result->
                                                            FMGL(data))[index103862];
                                             ret103863;
                                         }))
                                         ->FMGL(val3);
                    
                    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103866->FMGL(val1) = val103858;
                    
                    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc103866->FMGL(val2) = val103861;
                    alloc103866;
                }))
                ;
                {
                    
                    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                    if (((index103864) < (((x10_long) (((x10_int)0))))) ||
                        ((index103864) >= (x10aux::nullCheck(reqs)->
                                             FMGL(size))))
                    {
                        
                        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103864), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                (x10aux::nullCheck(reqs)->FMGL(mc)->FMGL(data)).set(index103864, value103865);
            }
        }
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
        tsrcid = ((x10_long) ((tsrcid) + (((x10_long)1ll))));
        
        //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61408min103884 = ((x10_long) ((tsrcid) - (ssrc)));
        
        //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61408max103885 = ((x10_long) (((__extension__ ({
            reqoff->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long)1ll))));
        
        //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103886;
            for (
                 //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103886 = i61408min103884; ((i103886) <= (i61408max103885));
                 
                 //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103886 = ((x10_long) ((i103886) + (((x10_long)1ll)))))
            {
                
                //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i103887 = i103886;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index103869 = i103887;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value103870 = reqsIndex;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret103871;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((reqoff->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index103869) < (((x10_long) (((x10_int)0))))) ||
                        ((index103869) >= (reqoff->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103869), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (reqoff->FMGL(data)).set(index103869, value103870);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret103871 = value103870;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret103871;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > result;
    org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > InEdgeModifyReqOffsets;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> InEdgeModifyReqsWithAR;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->result);
        buf.write(this->list);
        buf.write(this->InEdgeModifyReqOffsets);
        buf.write(this->InEdgeModifyReqsWithAR);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > that_result = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> that_list = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > that_InEdgeModifyReqOffsets = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> that_InEdgeModifyReqsWithAR = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >(that_result, that_list, that_InEdgeModifyReqOffsets, that_InEdgeModifyReqsWithAR);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__8(org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > result, org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > InEdgeModifyReqOffsets, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> InEdgeModifyReqsWithAR) : result(result), list(list), InEdgeModifyReqOffsets(InEdgeModifyReqOffsets), InEdgeModifyReqsWithAR(InEdgeModifyReqsWithAR) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:208-255";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 276 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::ProfilingDB__Timer thtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                              ((x10_int)1),
                                                              tid);
        {
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer->org::scalegraph::util::ProfilingDB__Timer::start();
        }
        
        //#line 278 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<x10_long> > UCCMessages =
          mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::messageBuffer(
            tid);
        
        //#line 279 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offset =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(offsets);
        
        //#line 280 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> id =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(vertexes);
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i61444domain103923 = r;
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61444min103924 = i61444domain103923->FMGL(min);
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61444max103925 = i61444domain103923->FMGL(max);
        
        //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103926;
            for (
                 //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103926 = i61444min103924; ((i103926) <= (i61444max103925));
                 
                 //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103926 = ((x10_long) ((i103926) + (((x10_long)1ll)))))
            {
                
                //#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid103927 = i103926;
                
                //#line 282 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid_103921 = (__extension__ ({
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                    x10_long id103922 = vid103927;
                    ((x10_long) ((id103922) | (StoD->FMGL(rshifted))));
                }))
                ;
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i61426min103913 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103914 = vid103927;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103915;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103914) < (((x10_long) (((x10_int)0))))) ||
                            ((index103914) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103914), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103915 = (offset->FMGL(data))[index103914];
                    ret103915;
                }))
                ;
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i61426max103916 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103917 = ((x10_long) ((vid103927) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103918;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103917) < (((x10_long) (((x10_int)0))))) ||
                            ((index103917) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103917), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103918 = (offset->FMGL(data))[index103917];
                    ret103918;
                }))
                ) - (((x10_long) (((x10_int)1))))));
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                {
                    x10_long i103919;
                    for (
                         //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                         i103919 = i61426min103913; ((i103919) <= (i61426max103916));
                         
                         //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                         i103919 = ((x10_long) ((i103919) + (((x10_long)1ll)))))
                    {
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_long i103920 = i103919;
                        
                        //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::MessageBuffer<x10_long> mesBuf103902 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103903 = (__extension__ ({
                                
                                //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103904 =
                                  mesComm->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103905 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index103906 =
                                      i103920;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long ret103907;
                                    {
                                        
                                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((id->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index103906) < (((x10_long) (((x10_int)0))))) ||
                                            ((index103906) >= (id->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103906), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret103907 = (id->FMGL(data))[index103906];
                                    ret103907;
                                }))
                                ;
                                ((x10_int) (((x10_long) ((id103905) >> (0x3f & (this103904->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::xpregel::MessageBuffer<x10_long> ret103908;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((UCCMessages->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103903) < (((x10_int)0))) ||
                                    ((((x10_long) (index103903))) >= (UCCMessages->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103903), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103908 = (UCCMessages->FMGL(data))[index103903];
                            ret103908;
                        }))
                        ;
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103902->FMGL(messages))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          vid_103921);
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103902->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          (__extension__ ({
                              
                              //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::graph::id::OnedR__DtoS this103909 =
                                mesComm->FMGL(mDtoS);
                              
                              //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                              x10_long id103910 = (__extension__ ({
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long index103911 = i103920;
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long ret103912;
                                  {
                                      
                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (!((id->FMGL(data)).isValid()))
                                      {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                          }
                                          
                                      }
                                      
                                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (((index103911) < (((x10_long) (((x10_int)0))))) ||
                                          ((index103911) >= (id->
                                                               FMGL(data)->
                                                               FMGL(size))))
                                      {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103911), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103912 = (id->FMGL(data))[index103911];
                                  ret103912;
                              }))
                              ;
                              ((x10_long) ((id103910) & (this103909->
                                                           FMGL(lmask))));
                          }))
                          );
                    }
                }
                
            }
        }
        {
            
            //#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)0));
        }
    }
    
    // captured environment
    org::scalegraph::xpregel::MessageCommunicator<x10_long>* mesComm;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::graph::id::OnedR__StoD StoD;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->mesComm);
        buf.write(this->saved_this);
        buf.write(this->StoD);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::MessageCommunicator<x10_long>* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<x10_long>*>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::graph::id::OnedR__StoD that_StoD = buf.read<org::scalegraph::graph::id::OnedR__StoD>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >(that_mesComm, that_saved_this, that_StoD);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__9(org::scalegraph::xpregel::MessageCommunicator<x10_long>* mesComm, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::graph::id::OnedR__StoD StoD) : mesComm(mesComm), saved_this(saved_this), StoD(StoD) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:275-290";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i72610domain103938 = i_range103946;
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i72610min103939 = i72610domain103938->FMGL(min);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i72610max103940 = i72610domain103938->FMGL(max);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i103941;
                for (
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i103941 = i72610min103939; ((i103941) <= (i72610max103940));
                     
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i103941 = ((x10_long) ((i103941) + (((x10_long)1ll)))))
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii103942 = i103941;
                    
                    //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i103937 = ii103942;
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    ::std::sort((x10aux::nullCheck(saved_this->FMGL(mInEdge))->
                                   FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                   (__extension__ ({
                                       
                                       //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this103928 =
                                         x10aux::nullCheck(saved_this->
                                                             FMGL(mInEdge))->
                                           FMGL(offsets);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103929 =
                                         i103937;
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103930;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this103928->
                                                    FMGL(data)).isValid()))
                                           {
                                               
                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (((index103929) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103929) >= (this103928->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103929), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103930 = (this103928->
                                                      FMGL(data))[index103929];
                                       ret103930;
                                   }))
                                   , ((x10_long) (((__extension__ ({
                                       
                                       //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this103931 =
                                         x10aux::nullCheck(saved_this->
                                                             FMGL(mInEdge))->
                                           FMGL(offsets);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103932 =
                                         ((x10_long) ((i103937) + (((x10_long) (((x10_int)1))))));
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103933;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this103931->
                                                    FMGL(data)).isValid()))
                                           {
                                               
                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (((index103932) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103932) >= (this103931->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103932), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103933 = (this103931->
                                                      FMGL(data))[index103932];
                                       ret103933;
                                   }))
                                   ) - ((__extension__ ({
                                       
                                       //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                       org::scalegraph::util::MemoryChunk<x10_long> this103934 =
                                         x10aux::nullCheck(saved_this->
                                                             FMGL(mInEdge))->
                                           FMGL(offsets);
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long index103935 =
                                         i103937;
                                       
                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                       x10_long ret103936;
                                       {
                                           
                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (!((this103934->
                                                    FMGL(data)).isValid()))
                                           {
                                               
                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (((index103935) < (((x10_long) (((x10_int)0))))) ||
                                               ((index103935) >= (this103934->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                                           {
                                               
                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                               if (true) {
                                                   
                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (true)
                                                   {
                                                       
                                                       //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                       x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103935), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                   }
                                                   
                                               }
                                               
                                           }
                                           
                                       }
                                       
                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                       ret103936 = (this103934->
                                                      FMGL(data))[index103935];
                                       ret103936;
                                   }))
                                   )))))->pointer(), (x10aux::nullCheck(saved_this->
                                                                          FMGL(mInEdge))->
                                                        FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                        (__extension__ ({
                                                            
                                                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::MemoryChunk<x10_long> this103928 =
                                                              x10aux::nullCheck(saved_this->
                                                                                  FMGL(mInEdge))->
                                                                FMGL(offsets);
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long index103929 =
                                                              i103937;
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long ret103930;
                                                            {
                                                                
                                                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (!((this103928->
                                                                         FMGL(data)).isValid()))
                                                                {
                                                                    
                                                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (((index103929) < (((x10_long) (((x10_int)0))))) ||
                                                                    ((index103929) >= (this103928->
                                                                                         FMGL(data)->
                                                                                         FMGL(size))))
                                                                {
                                                                    
                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103929), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret103930 =
                                                              (this103928->
                                                                 FMGL(data))[index103929];
                                                            ret103930;
                                                        }))
                                                        ,
                                                        ((x10_long) (((__extension__ ({
                                                            
                                                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::MemoryChunk<x10_long> this103931 =
                                                              x10aux::nullCheck(saved_this->
                                                                                  FMGL(mInEdge))->
                                                                FMGL(offsets);
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long index103932 =
                                                              ((x10_long) ((i103937) + (((x10_long) (((x10_int)1))))));
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long ret103933;
                                                            {
                                                                
                                                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (!((this103931->
                                                                         FMGL(data)).isValid()))
                                                                {
                                                                    
                                                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (((index103932) < (((x10_long) (((x10_int)0))))) ||
                                                                    ((index103932) >= (this103931->
                                                                                         FMGL(data)->
                                                                                         FMGL(size))))
                                                                {
                                                                    
                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103932), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret103933 =
                                                              (this103931->
                                                                 FMGL(data))[index103932];
                                                            ret103933;
                                                        }))
                                                        ) - ((__extension__ ({
                                                            
                                                            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                            org::scalegraph::util::MemoryChunk<x10_long> this103934 =
                                                              x10aux::nullCheck(saved_this->
                                                                                  FMGL(mInEdge))->
                                                                FMGL(offsets);
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long index103935 =
                                                              i103937;
                                                            
                                                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                            x10_long ret103936;
                                                            {
                                                                
                                                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (!((this103934->
                                                                         FMGL(data)).isValid()))
                                                                {
                                                                    
                                                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                if (((index103935) < (((x10_long) (((x10_int)0))))) ||
                                                                    ((index103935) >= (this103934->
                                                                                         FMGL(data)->
                                                                                         FMGL(size))))
                                                                {
                                                                    
                                                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                    if (true)
                                                                    {
                                                                        
                                                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                        if (true)
                                                                        {
                                                                            
                                                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103935), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                        }
                                                                        
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                            
                                                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret103936 =
                                                              (this103934->
                                                                 FMGL(data))[index103935];
                                                            ret103936;
                                                        }))
                                                        )))))->pointer() + (x10aux::nullCheck(saved_this->
                                                                                                FMGL(mInEdge))->
                                                                              FMGL(vertexes)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                                              (__extension__ ({
                                                                                  
                                                                                  //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                                                  org::scalegraph::util::MemoryChunk<x10_long> this103928 =
                                                                                    x10aux::nullCheck(saved_this->
                                                                                                        FMGL(mInEdge))->
                                                                                      FMGL(offsets);
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long index103929 =
                                                                                    i103937;
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long ret103930;
                                                                                  {
                                                                                      
                                                                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (!((this103928->
                                                                                               FMGL(data)).isValid()))
                                                                                      {
                                                                                          
                                                                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                          if (true)
                                                                                          {
                                                                                              
                                                                                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                              if (true)
                                                                                              {
                                                                                                  
                                                                                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (((index103929) < (((x10_long) (((x10_int)0))))) ||
                                                                                          ((index103929) >= (this103928->
                                                                                                               FMGL(data)->
                                                                                                               FMGL(size))))
                                                                                      {
                                                                                          
                                                                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                          if (true)
                                                                                          {
                                                                                              
                                                                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                              if (true)
                                                                                              {
                                                                                                  
                                                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103929), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                  }
                                                                                  
                                                                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret103930 =
                                                                                    (this103928->
                                                                                       FMGL(data))[index103929];
                                                                                  ret103930;
                                                                              }))
                                                                              ,
                                                                              ((x10_long) (((__extension__ ({
                                                                                  
                                                                                  //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                                                  org::scalegraph::util::MemoryChunk<x10_long> this103931 =
                                                                                    x10aux::nullCheck(saved_this->
                                                                                                        FMGL(mInEdge))->
                                                                                      FMGL(offsets);
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long index103932 =
                                                                                    ((x10_long) ((i103937) + (((x10_long) (((x10_int)1))))));
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long ret103933;
                                                                                  {
                                                                                      
                                                                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (!((this103931->
                                                                                               FMGL(data)).isValid()))
                                                                                      {
                                                                                          
                                                                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                          if (true)
                                                                                          {
                                                                                              
                                                                                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                              if (true)
                                                                                              {
                                                                                                  
                                                                                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (((index103932) < (((x10_long) (((x10_int)0))))) ||
                                                                                          ((index103932) >= (this103931->
                                                                                                               FMGL(data)->
                                                                                                               FMGL(size))))
                                                                                      {
                                                                                          
                                                                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                          if (true)
                                                                                          {
                                                                                              
                                                                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                              if (true)
                                                                                              {
                                                                                                  
                                                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103932), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                  }
                                                                                  
                                                                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret103933 =
                                                                                    (this103931->
                                                                                       FMGL(data))[index103932];
                                                                                  ret103933;
                                                                              }))
                                                                              ) - ((__extension__ ({
                                                                                  
                                                                                  //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                                                  org::scalegraph::util::MemoryChunk<x10_long> this103934 =
                                                                                    x10aux::nullCheck(saved_this->
                                                                                                        FMGL(mInEdge))->
                                                                                      FMGL(offsets);
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long index103935 =
                                                                                    i103937;
                                                                                  
                                                                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                  x10_long ret103936;
                                                                                  {
                                                                                      
                                                                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (!((this103934->
                                                                                               FMGL(data)).isValid()))
                                                                                      {
                                                                                          
                                                                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                          if (true)
                                                                                          {
                                                                                              
                                                                                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                              if (true)
                                                                                              {
                                                                                                  
                                                                                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                      if (((index103935) < (((x10_long) (((x10_int)0))))) ||
                                                                                          ((index103935) >= (this103934->
                                                                                                               FMGL(data)->
                                                                                                               FMGL(size))))
                                                                                      {
                                                                                          
                                                                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                          if (true)
                                                                                          {
                                                                                              
                                                                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                              if (true)
                                                                                              {
                                                                                                  
                                                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103935), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                              }
                                                                                              
                                                                                          }
                                                                                          
                                                                                      }
                                                                                      
                                                                                  }
                                                                                  
                                                                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret103936 =
                                                                                    (this103934->
                                                                                       FMGL(data))[index103935];
                                                                                  ret103936;
                                                                              }))
                                                                              )))))->size());
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc557) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc557)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc557);
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc557);
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::LongRange i_range103946;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range103946);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::LongRange that_i_range103946 = buf.read<x10::lang::LongRange>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >(that_i_range103946, that_saved_this);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__10(x10::lang::LongRange i_range103946, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this) : i_range103946(i_range103946), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:854";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 323 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::ProfilingDB__Timer thtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                              ((x10_int)1),
                                                              tid);
        {
            
            //#line 324 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer->org::scalegraph::util::ProfilingDB__Timer::start();
        }
        
        //#line 325 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > > UCCMessages =
          mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::messageBuffer(
            tid);
        
        //#line 326 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offset =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(offsets);
        
        //#line 327 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> id =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(vertexes);
        
        //#line 328 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(E)> value =
          x10aux::nullCheck(saved_this->FMGL(mOutEdge))->
            FMGL(value);
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i61481domain103989 = r;
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61481min103990 = i61481domain103989->FMGL(min);
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i61481max103991 = i61481domain103989->FMGL(max);
        
        //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
        {
            x10_long i103992;
            for (
                 //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                 i103992 = i61481min103990; ((i103992) <= (i61481max103991));
                 
                 //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i103992 = ((x10_long) ((i103992) + (((x10_long)1ll)))))
            {
                
                //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid103993 = i103992;
                
                //#line 330 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long vid_103987 = (__extension__ ({
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                    x10_long id103988 = vid103993;
                    ((x10_long) ((id103988) | (StoD->FMGL(rshifted))));
                }))
                ;
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i61463min103979 = (__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103980 = vid103993;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103981;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103980) < (((x10_long) (((x10_int)0))))) ||
                            ((index103980) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103980), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103981 = (offset->FMGL(data))[index103980];
                    ret103981;
                }))
                ;
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i61463max103982 = ((x10_long) (((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103983 = ((x10_long) ((vid103993) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret103984;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offset->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103983) < (((x10_long) (((x10_int)0))))) ||
                            ((index103983) >= (offset->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103983), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103984 = (offset->FMGL(data))[index103983];
                    ret103984;
                }))
                ) - (((x10_long) (((x10_int)1))))));
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
                {
                    x10_long i103985;
                    for (
                         //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                         i103985 = i61463min103979; ((i103985) <= (i61463max103982));
                         
                         //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                         i103985 = ((x10_long) ((i103985) + (((x10_long)1ll)))))
                    {
                        
                        //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        x10_long i103986 = i103985;
                        
                        //#line 332 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > mesBuf103967 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103968 = (__extension__ ({
                                
                                //#line 332 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::graph::id::OnedR__DtoV this103969 =
                                  mesComm->FMGL(mDtoV);
                                
                                //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                                x10_long id103970 = (__extension__ ({
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long index103971 =
                                      i103986;
                                    
                                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_long ret103972;
                                    {
                                        
                                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((id->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index103971) < (((x10_long) (((x10_int)0))))) ||
                                            ((index103971) >= (id->
                                                                 FMGL(data)->
                                                                 FMGL(size))))
                                        {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103971), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret103972 = (id->FMGL(data))[index103971];
                                    ret103972;
                                }))
                                ;
                                ((x10_int) (((x10_long) ((id103970) >> (0x3f & (this103969->
                                                                                  FMGL(lgl)))))));
                            }))
                            ;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::xpregel::MessageBuffer<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > ret103973;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((UCCMessages->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103968) < (((x10_int)0))) ||
                                    ((((x10_long) (index103968))) >= (UCCMessages->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103968), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103973 = (UCCMessages->FMGL(data))[index103968];
                            ret103973;
                        }))
                        ;
                        
                        //#line 333 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103967->FMGL(messages))->org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::add(
                          (__extension__ ({
                              
                              //#line 333 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> alloc103974 =
                                 org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)>::_alloc();
                              
                              //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                              x10_long val103963 = vid_103987;
                              
                              //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                              TPMGL(E) val103964 = (__extension__ ({
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long index103965 = i103986;
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  TPMGL(E) ret103966;
                                  {
                                      
                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (!((value->FMGL(data)).isValid()))
                                      {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                          }
                                          
                                      }
                                      
                                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (((index103965) < (((x10_long) (((x10_int)0))))) ||
                                          ((index103965) >= (value->
                                                               FMGL(data)->
                                                               FMGL(size))))
                                      {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103965), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103966 = (value->FMGL(data))[index103965];
                                  ret103966;
                              }))
                              ;
                              
                              //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                              alloc103974->FMGL(val1) = val103963;
                              
                              //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                              alloc103974->FMGL(val2) = val103964;
                              alloc103974;
                          }))
                          );
                        
                        //#line 334 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(mesBuf103967->FMGL(dstIds))->org::scalegraph::util::GrowableMemory<x10_long>::add(
                          (__extension__ ({
                              
                              //#line 334 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                              org::scalegraph::graph::id::OnedR__DtoS this103975 =
                                mesComm->FMGL(mDtoS);
                              
                              //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
                              x10_long id103976 = (__extension__ ({
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long index103977 = i103986;
                                  
                                  //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                  x10_long ret103978;
                                  {
                                      
                                      //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (!((id->FMGL(data)).isValid()))
                                      {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                          }
                                          
                                      }
                                      
                                      //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (((index103977) < (((x10_long) (((x10_int)0))))) ||
                                          ((index103977) >= (id->
                                                               FMGL(data)->
                                                               FMGL(size))))
                                      {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (true) {
                                              
                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                              x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103977), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                          }
                                          
                                      }
                                      
                                  }
                                  
                                  //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret103978 = (id->FMGL(data))[index103977];
                                  ret103978;
                              }))
                              ;
                              ((x10_long) ((id103976) & (this103975->
                                                           FMGL(lmask))));
                          }))
                          );
                    }
                }
                
            }
        }
        {
            
            //#line 337 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
            thtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
              ((x10_int)0));
        }
    }
    
    // captured environment
    org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this;
    org::scalegraph::graph::id::OnedR__StoD StoD;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->mesComm);
        buf.write(this->saved_this);
        buf.write(this->StoD);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        org::scalegraph::graph::id::OnedR__StoD that_StoD = buf.read<org::scalegraph::graph::id::OnedR__StoD>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >(that_mesComm, that_saved_this, that_StoD);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__11(org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* saved_this, org::scalegraph::graph::id::OnedR__StoD StoD) : mesComm(mesComm), saved_this(saved_this), StoD(StoD) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10:322-338";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_WorkerPlaceGraph__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 350 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long tid104013 = ((x10_long) (idx104015));
            
            //#line 350 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r104014 = i_range104019;
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i61500domain104008 = r104014;
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i61500min104009 = i61500domain104008->FMGL(min);
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i61500max104010 = i61500domain104008->FMGL(max);
            
            //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_long i104011;
                for (
                     //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i104011 = i61500min104009; ((i104011) <= (i61500max104010));
                     
                     //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i104011 = ((x10_long) ((i104011) + (((x10_long)1ll)))))
                {
                    
                    //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i104012 = i104011;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103994 = i104012;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value103995 = (__extension__ ({
                        
                        //#line 352 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> this103996 =
                          (__extension__ ({
                            
                            //#line 352 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > this103997 =
                              mesComm->FMGL(mUCRMessages);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index103998 = i104012;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret103999;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this103997->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103998) < (((x10_long) (((x10_int)0))))) ||
                                    ((index103998) >= (this103997->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103998), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103999 = (this103997->FMGL(data))[index103998];
                            ret103999;
                        }))
                        ;
                        this103996->FMGL(val1);
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret104000;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((id->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103994) < (((x10_long) (((x10_int)0))))) ||
                            ((index103994) >= (id->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103994), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (id->FMGL(data)).set(index103994, value103995);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret104000 = value103995;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret104000;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index104001 = i104012;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) value104002 = (__extension__ ({
                        
                        //#line 353 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> this104003 =
                          (__extension__ ({
                            
                            //#line 353 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > this104004 =
                              mesComm->FMGL(mUCRMessages);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index104005 = i104012;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> ret104006;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this104004->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index104005) < (((x10_long) (((x10_int)0))))) ||
                                    ((index104005) >= (this104004->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104005), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret104006 = (this104004->FMGL(data))[index104005];
                            ret104006;
                        }))
                        ;
                        this104003->FMGL(val2);
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) ret104007;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((value->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index104001) < (((x10_long) (((x10_int)0))))) ||
                            ((index104001) >= (value->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104001), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (value->FMGL(data)).set(index104001, value104002);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret104007 = value104002;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret104007;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc561) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc561)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc561);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc561);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx104015;
    x10::lang::LongRange i_range104019;
    org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm;
    org::scalegraph::util::MemoryChunk<x10_long> id;
    org::scalegraph::util::MemoryChunk<TPMGL(E)> value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx104015);
        buf.write(this->i_range104019);
        buf.write(this->mesComm);
        buf.write(this->id);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_int that_idx104015 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range104019 = buf.read<x10::lang::LongRange>();
        org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* that_mesComm = buf.read<org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_id = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(E)> that_value = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(E)> >();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >(that_idx104015, that_i_range104019, that_mesComm, that_id, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__12(x10_int idx104015, x10::lang::LongRange i_range104019, org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm, org::scalegraph::util::MemoryChunk<x10_long> id, org::scalegraph::util::MemoryChunk<TPMGL(E)> value) : idx104015(idx104015), i_range104019(i_range104019), mesComm(mesComm), id(id), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_xpregel_WorkerPlaceGraph__closure__20 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_xpregel_WorkerPlaceGraph__closure__20> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 448 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long tid104055 = ((x10_long) (idx104057));
            
            //#line 448 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r_word104056 = i_range104061;
            
            //#line 449 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r104054 =  x10::lang::LongRange::_alloc();
            
            //#line 39 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
            x10_long min104050 = ((x10_long) ((r_word104056->FMGL(min)) * (((x10_long) (((x10_int)64))))));
            
            //#line 39 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
            x10_long max104051 = ((x10_long) (((__extension__ ({
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a104052 = numLocalVertexes;
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long b104053 = ((x10_long) ((((x10_long) ((r_word104056->
                                                                 FMGL(max)) + (((x10_long) (((x10_int)1))))))) * (((x10_long) (((x10_int)64))))));
                ((a104052) < (b104053)) ? (a104052) : (b104053);
            }))
            ) - (((x10_long) (((x10_int)1))))));
            
            //#line 40 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
            x10_boolean x104049 = (x10aux::struct_equals(min104050, ((x10_long)0ll)));
            
            //#line 41 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
            r104054->FMGL(min) = min104050;
            
            //#line 41 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
            r104054->FMGL(max) = max104051;
            
            //#line 41 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
            r104054->FMGL(zeroBased) = x104049;
            
            //#line 451 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.ClosureCall_c
            x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::__apply(x10aux::nullCheck(task), 
              tid104055, r104054);
        }
        catch (x10::lang::CheckedThrowable* __exc582) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc582)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc582);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc582);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx104057;
    x10::lang::LongRange i_range104061;
    x10_long numLocalVertexes;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx104057);
        buf.write(this->i_range104061);
        buf.write(this->numLocalVertexes);
        buf.write(this->task);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__20* storage = x10aux::alloc<org_scalegraph_xpregel_WorkerPlaceGraph__closure__20>();
        buf.record_reference(storage);
        x10_int that_idx104057 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range104061 = buf.read<x10::lang::LongRange>();
        x10_long that_numLocalVertexes = buf.read<x10_long>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* that_task = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>();
        org_scalegraph_xpregel_WorkerPlaceGraph__closure__20* this_ = new (storage) org_scalegraph_xpregel_WorkerPlaceGraph__closure__20(that_idx104057, that_i_range104061, that_numLocalVertexes, that_task);
        return this_;
    }
    
    org_scalegraph_xpregel_WorkerPlaceGraph__closure__20(x10_int idx104057, x10::lang::LongRange i_range104061, x10_long numLocalVertexes, x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* task) : idx104057(idx104057), i_range104061(i_range104061), numLocalVertexes(numLocalVertexes), task(task) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH__CLOSURE__20_CLOSURE

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c
 /* private static type XP = org.scalegraph.id.ProfilingID$XPregel; */ 

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           x10::util::Team* team,
                                           org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::__fieldInitializers60046();
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int rank_r = (__extension__ ({
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this101700 = x10aux::nullCheck(team)->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret101701;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret101702; __ret101702: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this101700)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret101701 = (x10aux::nullCheck(this101700)->FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret101702_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this101700)->FMGL(region)->contains(
                                ((x10_int)0)))) {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret101701 = (x10aux::nullCheck(this101700)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this101700)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret101702_end_;
            }
            
        }goto __ret101702_end_; __ret101702_end_: ;
        }
        ret101701;
        }))
        ;
        
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = (__extension__ ({
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc61185 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam103668 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc61185->FMGL(base) = baseTeam103668;
        alloc61185;
    }))
    ;
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mIds) = ids;
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this101705 =
          this->FMGL(mIds);
        this101705->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVtoD) = (__extension__ ({
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__VtoD alloc61186 =
           org::scalegraph::graph::id::OnedR__VtoD::_alloc();
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc61186)->::org::scalegraph::graph::id::OnedR__VtoD::_constructor(
          ids);
        alloc61186;
    }))
    ;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDtoV) = (__extension__ ({
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoV alloc61187 =
           org::scalegraph::graph::id::OnedR__DtoV::_alloc();
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc61187)->::org::scalegraph::graph::id::OnedR__DtoV::_constructor(
          ids);
        alloc61187;
    }))
    ;
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mDtoS) = (__extension__ ({
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS alloc61188 =
           org::scalegraph::graph::id::OnedR__DtoS::_alloc();
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids103670 = ids;
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int lgl103669 = ids103670->FMGL(lgl);
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc61188->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl103669))))) - (((x10_long)1ll))));
        alloc61188;
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStoD) = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD alloc61189 =
           org::scalegraph::graph::id::OnedR__StoD::_alloc();
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids103672 = ids;
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int r103673 = rank_r;
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int lgl103671 = ids103672->FMGL(lgl);
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc61189->FMGL(rshifted) = ((x10_long) ((((x10_long) (r103673))) << (0x3f & (lgl103671))));
        alloc61189;
    }))
    ;
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mStoV) = (__extension__ ({
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoV alloc61190 =
           org::scalegraph::graph::id::OnedR__StoV::_alloc();
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids103674 = ids;
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        x10_int r103675 = rank_r;
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc61190->FMGL(r) = r103675;
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
        alloc61190->FMGL(lgr) = ids103674->FMGL(lgr);
        alloc61190;
    }))
    ;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexValue) = org::scalegraph::util::MemoryChunk<TPMGL(V) >::_make(numLocalVertexes, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexActive) = (__extension__ ({
        
        //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Bitmap* alloc61191 =  ((new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap()))
        ;
        
        //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc61191)->::org::scalegraph::util::Bitmap::_constructor(
          numLocalVertexes, true);
        alloc61191;
    }))
    ;
    
    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexShouldBeActive) = (__extension__ ({
        
        //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Bitmap* alloc61192 =  ((new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap()))
        ;
        
        //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
        (alloc61192)->::org::scalegraph::util::Bitmap::_constructor(
          numLocalVertexes, true);
        alloc61192;
    }))
    ;
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutEdge) = (__extension__ ({
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* alloc61193 =
           ((new (memset(x10aux::alloc<org::scalegraph::xpregel::GraphEdge<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>))) org::scalegraph::xpregel::GraphEdge<TPMGL(E)>()))
        ;
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10Call_c
        alloc61193->org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::__fieldInitializers62411();
        alloc61193;
    }))
    ;
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInEdge) = (__extension__ ({
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* alloc61194 =
           ((new (memset(x10aux::alloc<org::scalegraph::xpregel::GraphEdge<TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>))) org::scalegraph::xpregel::GraphEdge<TPMGL(E)>()))
        ;
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10Call_c
        alloc61194->org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::__fieldInitializers62411();
        alloc61194;
    }))
    ;
    
    //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mOutput) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>* >::_make(((x10_long) (((x10_int) ((this->
                                                                                                                                                  FMGL(numThreads)) * (((x10_int)8)))))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    }
    template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(
                                               x10::util::Team* team,
                                               org::scalegraph::graph::id::IdStruct ids)
    {
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>();
        this_->_constructor(team, ids);
        return this_;
    }
    
    
    

//#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           x10::util::Team* team,
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix) {
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
      team, edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::ids());
    
    //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(offsets) =
      edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
        FMGL(offsets);
    
    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(vertexes) =
      edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
        FMGL(vertexes);
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(value) =
      org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make((__extension__ ({
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this101718 =
          x10aux::nullCheck(this->FMGL(mOutEdge))->FMGL(vertexes);
        this101718->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(
                                           x10::util::Team* team,
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix)
{
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>();
    this_->_constructor(team, edgeIndexMatrix);
    return this_;
}



//#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateFewInEdge(
  org::scalegraph::util::MemoryChunk<org::scalegraph::xpregel::EdgeProvider<TPMGL(E)>*> list) {
    
    //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int numTeam = (__extension__ ({
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 this101719 = this->FMGL(mTeam);
        x10aux::nullCheck(this101719->FMGL(base))->size();
    }))
    ;
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this101720 =
          this->FMGL(mIds);
        this101720->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange threadRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                              FMGL(numThreads)) - (((x10_int)1)))));
    
    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> > diffInEdgeCountPerThread =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_int> >::_make(((x10_long) (this->
                                                                                                             FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_int> > >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__1<TPMGL(V),TPMGL(E)>(numTeam))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10::lang::LongRange> outModReqRange =
      org::scalegraph::util::MemoryChunk<x10::lang::LongRange >::_make(((x10_long) (this->
                                                                                      FMGL(numThreads))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 836 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange range103888 = threadRange;
    
    //#line 837 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size103725 = ((x10_int) ((((x10_int) ((range103888->
                                                     FMGL(max)) - (range103888->
                                                                     FMGL(min))))) + (((x10_int)1))));
    
    //#line 838 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103726 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 839 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size103727 = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a103728 = ((x10_int) ((((x10_int) ((((x10_int) ((size103725) + (nthreads103726)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads103726)));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103728) < (((x10_int)1))) ? (((x10_int)1)) : (a103728);
    }))
    ;
    {
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var72 = x10::lang::Runtime::startFinish();
        {
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104242 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72592max103722 = ((x10_int) ((nthreads103726) - (((x10_int)1))));
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103723;
                            for (
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103723 = ((x10_int)0); ((i103723) <= (i72592max103722));
                                 
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103723 = ((x10_int) ((i103723) + (((x10_int)1)))))
                            {
                                
                                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103724 = i103723;
                                
                                //#line 841 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start103716 = (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103717 = ((x10_int) ((range103888->
                                                                     FMGL(max)) + (((x10_int)1))));
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103718 = ((x10_int) ((range103888->
                                                                     FMGL(min)) + (((x10_int) ((i103724) * (chunk_size103727))))));
                                    ((a103717) < (b103718))
                                      ? (a103717) : (b103718);
                                }))
                                ;
                                
                                //#line 842 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range103719 =
                                  x10::lang::IntRange::_make(i_start103716, (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103720 = range103888->
                                                        FMGL(max);
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103721 = ((x10_int) ((((x10_int) ((i_start103716) + (chunk_size103727)))) - (((x10_int)1))));
                                    ((a103720) < (b103721))
                                      ? (a103720) : (b103721);
                                }))
                                );
                                
                                //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__2<TPMGL(V),TPMGL(E)>(i_range103719, list, outModReqRange, diffInEdgeCountPerThread, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc551) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc551);
                        {
                            
                            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc552) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104243 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc552);
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104242 = formal104243;
                    }
                } else
                throw;
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104242)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104242))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104242));
                }
                
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var72);
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104242)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104242)))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104242));
                }
                
            }
            
        }
    }
    
    //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> diec = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (numTeam)), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61240domain103889 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((diec->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long i61240max103890 = i61240domain103889->FMGL(max);
    
    //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_long i103891;
        for (
             //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103891 = ((x10_long)0ll); ((i103891) <= (i61240max103890));
             
             //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103891 = ((x10_long) ((i103891) + (((x10_long)1ll)))))
        {
            
            //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long team103892 = i103891;
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i61221domain103744 = threadRange;
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i61221max103745 = i61221domain103744->
                                        FMGL(max);
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i103746;
                for (
                     //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103746 = ((x10_int)0); ((i103746) <= (i61221max103745));
                     
                     //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103746 = ((x10_int) ((i103746) + (((x10_int)1)))))
                {
                    
                    //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int thread103747 = i103746;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x103735 =
                      diec;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long y103736 = team103892;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int z103737 = (__extension__ ({
                        
                        //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this103738 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103739 = thread103747;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> ret103740;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((diffInEdgeCountPerThread->
                                         FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103739) < (((x10_int)0))) ||
                                    ((((x10_long) (index103739))) >= (diffInEdgeCountPerThread->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103739), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103740 = (diffInEdgeCountPerThread->
                                           FMGL(data))[index103739];
                            ret103740;
                        }))
                        ;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index103741 = team103892;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret103742;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this103738->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103741) < (((x10_long) (((x10_int)0))))) ||
                                ((index103741) >= (this103738->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103741), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103742 = (this103738->FMGL(data))[index103741];
                        ret103742;
                    }))
                    ;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret103743;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int r103732 = ((x10_int) (((__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index103733 = y103736;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret103734;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x103735->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103733) < (((x10_long) (((x10_int)0))))) ||
                                ((index103733) >= (x103735->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103733), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103734 = (x103735->FMGL(data))[index103733];
                        ret103734;
                    }))
                    ) + (z103737)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index103729 = y103736;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value103730 = r103732;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret103731;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x103735->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index103729) < (((x10_long) (((x10_int)0))))) ||
                            ((index103729) >= (x103735->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103729), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x103735->FMGL(data)).set(index103729, value103730);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103731 = value103730;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret103731;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret103743 = r103732;
                    
                    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Local_c
                    ret103743;
                }
            }
            
        }
    }
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > diffInEdgeDataPerThread =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >::_make(((x10_long) (this->
                                                                                                                                                                                                              FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > > >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__3<TPMGL(V),TPMGL(E)>(numTeam, diffInEdgeCountPerThread))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 836 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange range103893 = threadRange;
    
    //#line 837 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size103815 = ((x10_int) ((((x10_int) ((range103893->
                                                     FMGL(max)) - (range103893->
                                                                     FMGL(min))))) + (((x10_int)1))));
    
    //#line 838 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103816 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 839 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size103817 = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a103818 = ((x10_int) ((((x10_int) ((((x10_int) ((size103815) + (nthreads103816)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads103816)));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103818) < (((x10_int)1))) ? (((x10_int)1)) : (a103818);
    }))
    ;
    {
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var73 = x10::lang::Runtime::startFinish();
        {
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104245 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72592max103812 = ((x10_int) ((nthreads103816) - (((x10_int)1))));
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103813;
                            for (
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103813 = ((x10_int)0); ((i103813) <= (i72592max103812));
                                 
                                 //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103813 = ((x10_int) ((i103813) + (((x10_int)1)))))
                            {
                                
                                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103814 = i103813;
                                
                                //#line 841 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start103806 = (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103807 = ((x10_int) ((range103893->
                                                                     FMGL(max)) + (((x10_int)1))));
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103808 = ((x10_int) ((range103893->
                                                                     FMGL(min)) + (((x10_int) ((i103814) * (chunk_size103817))))));
                                    ((a103807) < (b103808))
                                      ? (a103807) : (b103808);
                                }))
                                ;
                                
                                //#line 842 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range103809 =
                                  x10::lang::IntRange::_make(i_start103806, (__extension__ ({
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int a103810 = range103893->
                                                        FMGL(max);
                                    
                                    //#line 348 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_int b103811 = ((x10_int) ((((x10_int) ((i_start103806) + (chunk_size103817)))) - (((x10_int)1))));
                                    ((a103810) < (b103811))
                                      ? (a103810) : (b103811);
                                }))
                                );
                                
                                //#line 843 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__5<TPMGL(V),TPMGL(E)>(i_range103809, list, diffInEdgeDataPerThread, numTeam, outModReqRange, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc554) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc554);
                        {
                            
                            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc555) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104246 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc555);
                    {
                        
                        //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104245 = formal104246;
                    }
                } else
                throw;
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104245)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104245))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104245));
                }
                
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var73);
            }
            
            //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104245)))
            {
                
                //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104245)))
                {
                    
                    //#line 840 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104245));
                }
                
            }
            
        }
    }
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long dataNum = ((x10_long)0ll);
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i61278domain103894 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((diec->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long i61278max103895 = i61278domain103894->FMGL(max);
    
    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_long i103896;
        for (
             //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103896 = ((x10_long)0ll); ((i103896) <= (i61278max103895));
             
             //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103896 = ((x10_long) ((i103896) + (((x10_long)1ll)))))
        {
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_long team103897 = i103896;
            
            //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
            dataNum = ((x10_long) ((dataNum) + (((x10_long) ((__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index103819 = team103897;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret103820;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((diec->FMGL(data)).isValid())) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index103819) < (((x10_long) (((x10_int)0))))) ||
                        ((index103819) >= (diec->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103819), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret103820 = (diec->FMGL(data))[index103819];
                ret103820;
            }))
            )))));
        }
    }
    
    //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > died =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >::_make(dataNum, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long dataIndex = ((x10_long) (((x10_int)0)));
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int i61316max103898 = ((x10_int) ((numTeam) - (((x10_int)1))));
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
    {
        x10_int i103899;
        for (
             //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
             i103899 = ((x10_int)0); ((i103899) <= (i61316max103898));
             
             //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
             i103899 = ((x10_int) ((i103899) + (((x10_int)1)))))
        {
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int team103900 = i103899;
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i61297domain103827 = threadRange;
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
            x10_int i61297max103828 = i61297domain103827->
                                        FMGL(max);
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.For_c
            {
                x10_int i103829;
                for (
                     //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                     i103829 = ((x10_int)0); ((i103829) <= (i61297max103828));
                     
                     //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i103829 = ((x10_int) ((i103829) + (((x10_int)1)))))
                {
                    
                    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    x10_int thread103830 = i103829;
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > src103821 =
                      (__extension__ ({
                        
                        //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > this103822 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index103823 = thread103830;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > > ret103824;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((diffInEdgeDataPerThread->
                                         FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index103823) < (((x10_int)0))) ||
                                    ((((x10_long) (index103823))) >= (diffInEdgeDataPerThread->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103823), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret103824 = (diffInEdgeDataPerThread->
                                           FMGL(data))[index103823];
                            ret103824;
                        }))
                        ;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index103825 = team103900;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > ret103826;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this103822->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index103825) < (((x10_int)0))) ||
                                ((((x10_long) (index103825))) >= (this103822->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index103825), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret103826 = (this103822->FMGL(data))[index103825];
                        ret103826;
                    }))
                    ;
                    
                    //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::MemoryChunk<void>::template copy<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >(
                      src103821, ((x10_long)0ll), died, dataIndex,
                      (__extension__ ({
                          src103821->FMGL(data)->FMGL(size);
                      }))
                      );
                    
                    //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10LocalAssign_c
                    dataIndex = ((x10_long) ((dataIndex) + ((__extension__ ({
                        src103821->FMGL(data)->FMGL(size);
                    }))
                    )));
                }
            }
            
        }
    }
    
    //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(dataIndex,
                                                   dataNum)));
    #endif//NO_ASSERTIONS
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> > result =
      this->FMGL(mTeam)->template alltoallv<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >(
        died, diec)->FMGL(val1);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (diffInEdgeCountPerThread->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (diec->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (diffInEdgeDataPerThread->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (died->FMGL(data)).del();
    
    //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      (__extension__ ({
          result->FMGL(data)->FMGL(size);
      }))
      , reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__6<TPMGL(V),TPMGL(E)>(this, result))));
    
    //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MaskedStableSort_TupleK2<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >((result)->pointer(), (result)->size());
    
    //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::StableSort_TupleK1<org::scalegraph::util::tuple::Tuple3<x10_long, x10_long, TPMGL(E)> >((result)->pointer(), (result)->size());
    
    //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > InEdgeModifyReqOffsets =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::_make(((x10_long) (this->
                                                                                                              FMGL(numThreads))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__7<TPMGL(V),TPMGL(E)>(list))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*> InEdgeModifyReqsWithAR =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* >::_make(((x10_long) (this->
                                                                                                                                                                   FMGL(numThreads))), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__8<TPMGL(V),TPMGL(E)>(result, list, InEdgeModifyReqOffsets, InEdgeModifyReqsWithAR))));
    
    //#line 256 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::EdgeProvider<void>::template updateInEdge<TPMGL(V),
    TPMGL(E) >(this->FMGL(mInEdge), list, this->FMGL(mIds),
               InEdgeModifyReqOffsets, InEdgeModifyReqsWithAR);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (InEdgeModifyReqOffsets->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (InEdgeModifyReqsWithAR->FMGL(data)).del();
}

//#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdge(
  ) {
    
    //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ProfilingDB__Timer mtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                         ((x10_int)0),
                                                         ((x10_long) (((x10_int)0))));
    {
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::start();
    }
    
    //#line 265 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("start to update in edge"));
    }
    
    //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageCommunicator<x10_long>* mesComm =
       ((new (memset(x10aux::alloc<org::scalegraph::xpregel::MessageCommunicator<x10_long> >(), 0, sizeof(org::scalegraph::xpregel::MessageCommunicator<x10_long>))) org::scalegraph::xpregel::MessageCommunicator<x10_long>()))
    ;
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
    (mesComm)->::org::scalegraph::xpregel::MessageCommunicator<x10_long>::_constructor(
      this->FMGL(mTeam), this->FMGL(mIds), numThreads);
    
    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this102871 =
          this->FMGL(mIds);
        this102871->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::OnedR__StoD StoD =  org::scalegraph::graph::id::OnedR__StoD::_alloc();
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::IdStruct ids103956 = this->
                                                       FMGL(mIds);
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int r103957 = (__extension__ ({
        
        //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this103958 = x10aux::nullCheck(this->
                                                                     FMGL(mTeam)->
                                                                     FMGL(base))->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret103959;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret103960; __ret103960: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this103958)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret103959 = (x10aux::nullCheck(this103958)->
                               FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret103960_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this103958)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret103959 = (x10aux::nullCheck(this103958)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this103958)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret103960_end_;
            }
            
        }goto __ret103960_end_; __ret103960_end_: ;
        }
        ret103959;
        }))
        ;
        
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int lgl103901 = ids103956->FMGL(lgl);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    StoD->FMGL(rshifted) = ((x10_long) ((((x10_long) (r103957))) << (0x3f & (lgl103901))));
    {
        
        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)0));
    }
    
    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("vertex processing start"));
    }
    
    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__9<TPMGL(V),TPMGL(E)>(mesComm, this, StoD))));
    {
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)1));
    }
    
    //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("vertex processing finished"));
    }
    
    //#line 294 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::preProcess();
    {
        
        //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)7));
    }
    
    //#line 296 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::process(
      x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*>(X10_NULL),
      true, false);
    {
        
        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)9));
    }
    
    //#line 298 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<x10_long>::exchangeMessages(
      true, false);
    
    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(offsets) =
      mesComm->FMGL(mUCROffset);
    
    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(vertexes) =
      mesComm->FMGL(mUCRMessages);
    
    //#line 847 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range103961 = x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((numLocalVertexes) - (((x10_long)1ll)))));
    
    //#line 848 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size103952 = ((x10_long) ((((x10_long) ((range103961->
                                                        FMGL(max)) - (range103961->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 849 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads103953 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 850 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size103954 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a103955 = ((x10_long) ((((x10_long) ((((x10_long) ((size103952) + (((x10_long) (nthreads103953)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads103953)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a103955) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a103955);
    }))
    ;
    {
        
        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var74 = x10::lang::Runtime::startFinish();
        {
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104248 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72629max103949 = ((x10_int) ((nthreads103953) - (((x10_int)1))));
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i103950;
                            for (
                                 //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i103950 = ((x10_int)0); ((i103950) <= (i72629max103949));
                                 
                                 //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i103950 = ((x10_int) ((i103950) + (((x10_int)1)))))
                            {
                                
                                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i103951 = i103950;
                                
                                //#line 852 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start103943 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103944 = ((x10_long) ((range103961->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103945 = ((x10_long) ((range103961->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i103951))) * (chunk_size103954))))));
                                    ((a103944) < (b103945))
                                      ? (a103944) : (b103945);
                                }))
                                ;
                                
                                //#line 853 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range103946 =
                                  x10::lang::LongRange::_make(i_start103943, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a103947 = range103961->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b103948 = ((x10_long) ((((x10_long) ((i_start103943) + (chunk_size103954)))) - (((x10_long) (((x10_int)1))))));
                                    ((a103947) < (b103948))
                                      ? (a103947) : (b103948);
                                }))
                                );
                                
                                //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__10<TPMGL(V),TPMGL(E)>(i_range103946, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc558) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc558);
                        {
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc559) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104249 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc559);
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104248 = formal104249;
                    }
                } else
                throw;
            }
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104248)))
            {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104248))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104248));
                }
                
            }
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var74);
            }
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104248)))
            {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104248)))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104248));
                }
                
            }
            
        }
    }
    
    //#line 306 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCROffset) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> alloc102951 =
               org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc102951->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc102951;
        }))
        ;
    }))
    ;
    
    //#line 307 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCRMessages) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> alloc102953 =
               org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc102953->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc102953;
        }))
        ;
    }))
    ;
    {
        
        //#line 309 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)18));
    }
    
    //#line 310 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                 FMGL(id), ((x10_int)0))))
    {
        
        //#line 310 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
          x10aux::makeStringLit("finished to update in edge"));
    }
    }
    

//#line 313 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdgeWithValue(
  ) {
    
    //#line 314 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ProfilingDB__Timer mtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                         ((x10_int)0),
                                                         ((x10_long) (((x10_int)0))));
    {
        
        //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::start();
    }
    
    //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >* mesComm =
       ((new (memset(x10aux::alloc<org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > >(), 0, sizeof(org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >))) org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >()))
    ;
    
    //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10ConstructorCall_c
    (mesComm)->::org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::_constructor(
      this->FMGL(mTeam), this->FMGL(mIds), numThreads);
    
    //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalVertexes = (__extension__ ({
        
        //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this102957 =
          this->FMGL(mIds);
        this102957->FMGL(numberOfLocalVertexes);
    }))
    ;
    
    //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::OnedR__StoD StoD =  org::scalegraph::graph::id::OnedR__StoD::_alloc();
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::id::IdStruct ids104029 = this->
                                                       FMGL(mIds);
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int r104030 = (__extension__ ({
        
        //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this104031 = x10aux::nullCheck(this->
                                                                     FMGL(mTeam)->
                                                                     FMGL(base))->role();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret104032;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret104033; __ret104033: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this104031)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret104032 = (x10aux::nullCheck(this104031)->
                               FMGL(raw))->__apply(((x10_int)0));
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret104033_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this104031)->
                                FMGL(region)->contains(((x10_int)0))))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      ((x10_int)0));
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret104032 = (x10aux::nullCheck(this104031)->
                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this104031)->
                                                                                   FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret104033_end_;
            }
            
        }goto __ret104033_end_; __ret104033_end_: ;
        }
        ret104032;
        }))
        ;
        
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int lgl103962 = ids104029->FMGL(lgl);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    StoD->FMGL(rshifted) = ((x10_long) ((((x10_long) (r104030))) << (0x3f & (lgl103962))));
    {
        
        //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)0));
    }
    
    //#line 322 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::foreachVertexes(
      numLocalVertexes, reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__11<TPMGL(V),TPMGL(E)>(mesComm, this, StoD))));
    {
        
        //#line 339 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)1));
    }
    
    //#line 341 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::preProcess();
    {
        
        //#line 342 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)7));
    }
    
    //#line 343 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::process(
      x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >, org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >*>(X10_NULL),
      true, false);
    {
        
        //#line 344 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)9));
    }
    
    //#line 345 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    mesComm->org::scalegraph::xpregel::MessageCommunicator<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> >::exchangeMessages(
      true, false);
    
    //#line 347 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = (__extension__ ({
        
        //#line 347 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::tuple::Tuple2<x10_long, TPMGL(E)> > this102992 =
          mesComm->FMGL(mUCRMessages);
        this102992->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 348 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> id = org::scalegraph::util::MemoryChunk<x10_long >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 349 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(E)> value = org::scalegraph::util::MemoryChunk<TPMGL(E) >::_make(numEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range104034 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numEdges) - (((x10_long) (((x10_int)1)))))));
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size104025 = ((x10_long) ((((x10_long) ((range104034->
                                                        FMGL(max)) - (range104034->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads104026 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size104027 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a104028 = ((x10_long) ((((x10_long) ((((x10_long) ((size104025) + (((x10_long) (nthreads104026)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads104026)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a104028) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a104028);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var75 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable104251 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max104022 = ((x10_int) ((nthreads104026) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i104023;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i104023 = ((x10_int)0); ((i104023) <= (i72665max104022));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i104023 = ((x10_int) ((i104023) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i104024 = i104023;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx104015 = i104024;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start104016 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a104017 = ((x10_long) ((range104034->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b104018 = ((x10_long) ((range104034->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i104024))) * (chunk_size104027))))));
                                    ((a104017) < (b104018))
                                      ? (a104017) : (b104018);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range104019 =
                                  x10::lang::LongRange::_make(i_start104016, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a104020 = range104034->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b104021 = ((x10_long) ((((x10_long) ((i_start104016) + (chunk_size104027)))) - (((x10_long) (((x10_int)1))))));
                                    ((a104020) < (b104021))
                                      ? (a104020) : (b104021);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_WorkerPlaceGraph__closure__12<TPMGL(V),TPMGL(E)>(idx104015, i_range104019, mesComm, id, value))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc562) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc562);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc563) {
                if (true) {
                    x10::lang::CheckedThrowable* formal104252 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc563);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable104251 = formal104252;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104251)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable104251))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104251));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var75);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable104251)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable104251)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable104251));
                }
                
            }
            
        }
    }
    
    //#line 357 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(offsets) =
      mesComm->FMGL(mUCROffset);
    
    //#line 358 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(vertexes) =
      id;
    
    //#line 359 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mInEdge))->FMGL(value) =
      value;
    
    //#line 361 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    mesComm->FMGL(mUCROffset) = (__extension__ ({
        (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> alloc103058 =
               org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
            
            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc103058->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
            alloc103058;
        }))
        ;
    }))
    ;
    {
        
        //#line 363 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)18));
    }
    }
    

//#line 369 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 384 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 385 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 386 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 387 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 388 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 390 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 391 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 392 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 394 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10FieldDecl_c

//#line 396 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 446 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 455 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 661 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::outBuffer(
  x10_long tid) {
    
    //#line 661 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return this->FMGL(mOutput)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*>::subpart(
             ((x10_long) ((tid) * (((x10_long) (((x10_int)8)))))),
             ((x10_long) (((x10_int)8))));
    
}

//#line 663 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::org__scalegraph__xpregel__WorkerPlaceGraph____this__org__scalegraph__xpregel__WorkerPlaceGraph(
  ) {
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::__fieldInitializers60046(
  ) {
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mVertexValue) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mInEdgesMask) = (x10aux::class_cast_unchecked<org::scalegraph::util::Bitmap*>(X10_NULL));
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numThreads) = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mLastAggVal) = (x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mLogLevel) = ((x10_int)0);
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mLogPrinter) = (x10aux::class_cast_unchecked<x10::io::Printer*>(X10_NULL));
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mEnableStatistics) = true;
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mNeedsAllUpdateInEdge) = true;
}
template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mTeam));
    buf.write(this->FMGL(mIds));
    buf.write(this->FMGL(mVtoD));
    buf.write(this->FMGL(mDtoV));
    buf.write(this->FMGL(mDtoS));
    buf.write(this->FMGL(mStoD));
    buf.write(this->FMGL(mStoV));
    buf.write(this->FMGL(mVertexValue));
    buf.write(this->FMGL(mVertexActive));
    buf.write(this->FMGL(mVertexShouldBeActive));
    buf.write(this->FMGL(mOutEdge));
    buf.write(this->FMGL(mInEdge));
    buf.write(this->FMGL(mInEdgesMask));
    buf.write(this->FMGL(numThreads));
    buf.write(this->FMGL(mLastAggVal));
    buf.write(this->FMGL(mOutput));
    buf.write(this->FMGL(mLogLevel));
    buf.write(this->FMGL(mLogPrinter));
    buf.write(this->FMGL(mEnableStatistics));
    buf.write(this->FMGL(mNeedsAllUpdateInEdge));
    
}

template<class TPMGL(V), class TPMGL(E)> x10::lang::Reference* org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mTeam) = buf.read<org::scalegraph::util::Team2>();
    FMGL(mIds) = buf.read<org::scalegraph::graph::id::IdStruct>();
    FMGL(mVtoD) = buf.read<org::scalegraph::graph::id::OnedR__VtoD>();
    FMGL(mDtoV) = buf.read<org::scalegraph::graph::id::OnedR__DtoV>();
    FMGL(mDtoS) = buf.read<org::scalegraph::graph::id::OnedR__DtoS>();
    FMGL(mStoD) = buf.read<org::scalegraph::graph::id::OnedR__StoD>();
    FMGL(mStoV) = buf.read<org::scalegraph::graph::id::OnedR__StoV>();
    FMGL(mVertexValue) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
    FMGL(mVertexActive) = buf.read<org::scalegraph::util::Bitmap*>();
    FMGL(mVertexShouldBeActive) = buf.read<org::scalegraph::util::Bitmap*>();
    FMGL(mOutEdge) = buf.read<org::scalegraph::xpregel::GraphEdge<TPMGL(E)>*>();
    FMGL(mInEdge) = buf.read<org::scalegraph::xpregel::GraphEdge<TPMGL(E)>*>();
    FMGL(mInEdgesMask) = buf.read<org::scalegraph::util::Bitmap*>();
    FMGL(numThreads) = buf.read<x10_int>();
    FMGL(mLastAggVal) = buf.read<x10::lang::Any*>();
    FMGL(mOutput) = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<x10_int>*> >();
    FMGL(mLogLevel) = buf.read<x10_int>();
    FMGL(mLogPrinter) = buf.read<x10::io::Printer*>();
    FMGL(mEnableStatistics) = buf.read<x10_boolean>();
    FMGL(mNeedsAllUpdateInEdge) = buf.read<x10_boolean>();
    
}

template<class TPMGL(A)> TPMGL(A) org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::computeAggregate(org::scalegraph::util::Team2 team,
                                                                                                           org::scalegraph::util::MemoryChunk<TPMGL(A)> src,
                                                                                                           org::scalegraph::util::MemoryChunk<TPMGL(A)> buffer,
                                                                                                           x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator)
{
    
    //#line 373 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ProfilingDB__Timer mtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                         ((x10_int)0),
                                                         ((x10_long) (((x10_int)0))));
    
    //#line 374 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_boolean root = (x10aux::struct_equals((__extension__ ({
                                                  
                                                  //#line 374 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
                                                  x10::array::Array<x10_int>* this103063 =
                                                    x10aux::nullCheck(team->
                                                                        FMGL(base))->role();
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                  ;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int ret103064;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret103065; __ret103065: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(this103063)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret103064 =
                                                            (x10aux::nullCheck(this103063)->
                                                               FMGL(raw))->__apply(((x10_int)0));
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret103065_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(this103063)->
                                                                  FMGL(region)->contains(
                                                                  ((x10_int)0))))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                ((x10_int)0));
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret103064 =
                                                            (x10aux::nullCheck(this103063)->
                                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this103063)->
                                                                                                                   FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret103065_end_;
                                                      }
                                                      
                                                  }goto __ret103065_end_; __ret103065_end_: ;
                                                  }
                                                  ret103064;
                                                  }))
                                                  , ((x10_int)0)));
                        
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(A) value104037 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
      src);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    TPMGL(A) ret104038;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((src->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (src->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (src->FMGL(data)).set(((x10_int)0), value104037);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104038 = value104037;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104038;
    {
        
        //#line 376 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)5));
    }
    
    //#line 377 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    team->template gather<TPMGL(A) >(((x10_int)0), src->org::scalegraph::util::MemoryChunk<TPMGL(A)>::subpart(
                                                     ((x10_long) (((x10_int)0))),
                                                     ((x10_long) (((x10_int)1)))),
                                     buffer);
    
    //#line 378 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if (root) {
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(A) value104035 = x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>::__apply(x10aux::nullCheck(aggregator), 
          buffer);
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(A) ret104036;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((buffer->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (buffer->
                                                                                          FMGL(data)->
                                                                                          FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (buffer->FMGL(data)).set(((x10_int)0), value104035);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104036 = value104035;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret104036;
    }
    
    //#line 379 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    team->template bcast<TPMGL(A) >(((x10_int)0), root ? (buffer->org::scalegraph::util::MemoryChunk<TPMGL(A)>::subpart(
                                                            ((x10_long) (((x10_int)0))),
                                                            ((x10_long) (((x10_int)1)))))
                                      : (buffer), src->org::scalegraph::util::MemoryChunk<TPMGL(A)>::subpart(
                                                    ((x10_long) (((x10_int)0))),
                                                    ((x10_long) (((x10_int)1)))));
    {
        
        //#line 380 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)6));
    }
    
    //#line 381 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        TPMGL(A) ret103075;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((src->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (src->
                                                                                          FMGL(data)->
                                                                                          FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret103075 = (src->FMGL(data))[((x10_int)0)];
        ret103075;
    }))
    ;
    }
template<class TPMGL(M)> x10_boolean org::scalegraph::xpregel::WorkerPlaceGraph<void, void>::gatherInformation(org::scalegraph::util::Team2 team,
                                                                                                               org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>* ectx,
                                                                                                               org::scalegraph::util::MemoryChunk<x10_long> stt,
                                                                                                               x10_boolean enableStatistics,
                                                                                                               x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner)
{
    
    //#line 400 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ProfilingDB__Timer mtimer = x10aux::nullCheck(org::scalegraph::Config::get())->profXPregel()->org::scalegraph::util::ProfilingDB::timer(
                                                         ((x10_int)0),
                                                         ((x10_long) (((x10_int)0))));
    
    //#line 401 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvStt =
      stt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
        ((x10_long) (((x10_int)6))), ((x10_long) (((x10_int)6))));
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id481 = x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::preProcess();
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numActive = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret103078;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret103078 = (x10aux::nullCheck(id481)->FMGL(raw))->__apply(((x10_int)0));
        ret103078;
    }))
    ;
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numRawMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret103081;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret103081 = (x10aux::nullCheck(id481)->FMGL(raw))->__apply(((x10_int)1));
        ret103081;
    }))
    ;
    
    //#line 404 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numVertexMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret103084;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret103084 = (x10aux::nullCheck(id481)->FMGL(raw))->__apply(((x10_int)2));
        ret103084;
    }))
    ;
    {
        
        //#line 405 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)7));
    }
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value104039 = numActive;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret104040;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((stt->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)1)) < (((x10_int)0))) || ((((x10_long) (((x10_int)1)))) >= (stt->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)1)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (stt->FMGL(data)).set(((x10_int)1), value104039);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104040 = value104039;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104040;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value104041 = numRawMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret104042;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((stt->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)2)) < (((x10_int)0))) || ((((x10_long) (((x10_int)2)))) >= (stt->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)2)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (stt->FMGL(data)).set(((x10_int)2), value104041);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104042 = value104041;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104042;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value104043 = numVertexMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret104044;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((stt->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)3)) < (((x10_int)0))) || ((((x10_long) (((x10_int)3)))) >= (stt->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)3)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (stt->FMGL(data)).set(((x10_int)3), value104043);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104044 = value104043;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104044;
    
    //#line 412 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
    team->template allreduce<x10_long >(stt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                          ((x10_long) (((x10_int)0))),
                                          ((x10_long) (((x10_int)4)))),
                                        recvStt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                          ((x10_long) (((x10_int)0))),
                                          ((x10_long) (((x10_int)4)))),
                                        ((x10_int)0));
    {
        
        //#line 413 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)8));
    }
    
    //#line 415 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((((__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
            ;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret103099;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((recvStt->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (recvStt->
                                                                                              FMGL(data)->
                                                                                              FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret103099 = (recvStt->FMGL(data))[((x10_int)0)];
            ret103099;
        }))
        ) > (((x10_long) (((x10_int)0)))))) {
        
        //#line 417 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    //#line 421 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals((__extension__ ({
                                   
                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                   ;
                                   
                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                   x10_long ret103102;
                                   {
                                       
                                       //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                       if (!((recvStt->FMGL(data)).isValid()))
                                       {
                                           
                                           //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (true) {
                                               
                                               //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                           }
                                           
                                       }
                                       
                                       //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                       if (((((x10_int)1)) < (((x10_int)0))) ||
                                           ((((x10_long) (((x10_int)1)))) >= (recvStt->
                                                                                FMGL(data)->
                                                                                FMGL(size))))
                                       {
                                           
                                           //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (true) {
                                               
                                               //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)1)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                           }
                                           
                                       }
                                       
                                   }
                                   
                                   //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                   ret103102 = (recvStt->
                                                  FMGL(data))[((x10_int)1)];
                                   ret103102;
                               }))
                               , ((x10_long)0ll))) && (x10aux::struct_equals((__extension__ ({
                                                                                 
                                                                                 //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                                                                 ;
                                                                                 
                                                                                 //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                                 x10_long ret103105;
                                                                                 {
                                                                                     
                                                                                     //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                     if (!((recvStt->
                                                                                              FMGL(data)).isValid()))
                                                                                     {
                                                                                         
                                                                                         //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                         if (true)
                                                                                         {
                                                                                             
                                                                                             //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                                         }
                                                                                         
                                                                                     }
                                                                                     
                                                                                     //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                     if (((((x10_int)2)) < (((x10_int)0))) ||
                                                                                         ((((x10_long) (((x10_int)2)))) >= (recvStt->
                                                                                                                              FMGL(data)->
                                                                                                                              FMGL(size))))
                                                                                     {
                                                                                         
                                                                                         //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                                         if (true)
                                                                                         {
                                                                                             
                                                                                             //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                             x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)2)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                                         }
                                                                                         
                                                                                     }
                                                                                     
                                                                                 }
                                                                                 
                                                                                 //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                 ret103105 =
                                                                                   (recvStt->
                                                                                      FMGL(data))[((x10_int)2)];
                                                                                 ret103105;
                                                                             }))
                                                                             ,
                                                                             ((x10_long)0ll))) &&
        (x10aux::struct_equals((__extension__ ({
                                   
                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                   ;
                                   
                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                   x10_long ret103108;
                                   {
                                       
                                       //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                       if (!((recvStt->FMGL(data)).isValid()))
                                       {
                                           
                                           //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (true) {
                                               
                                               //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                           }
                                           
                                       }
                                       
                                       //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                       if (((((x10_int)3)) < (((x10_int)0))) ||
                                           ((((x10_long) (((x10_int)3)))) >= (recvStt->
                                                                                FMGL(data)->
                                                                                FMGL(size))))
                                       {
                                           
                                           //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                           if (true) {
                                               
                                               //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)3)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                           }
                                           
                                       }
                                       
                                   }
                                   
                                   //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                   ret103108 = (recvStt->
                                                  FMGL(data))[((x10_int)3)];
                                   ret103108;
                               }))
                               , ((x10_long)0ll)))) {
        
        //#line 424 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    //#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_long>* id482 = x10aux::nullCheck(ectx)->org::scalegraph::xpregel::MessageCommunicator<TPMGL(M)>::process(
                                           combiner, (((__extension__ ({
                                               
                                               //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                               ;
                                               
                                               //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                               x10_long ret103111;
                                               {
                                                   
                                                   //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (!((recvStt->
                                                            FMGL(data)).isValid()))
                                                   {
                                                       
                                                       //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (true)
                                                       {
                                                           
                                                           //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                           x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (((((x10_int)2)) < (((x10_int)0))) ||
                                                       ((((x10_long) (((x10_int)2)))) >= (recvStt->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                                                   {
                                                       
                                                       //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (true)
                                                       {
                                                           
                                                           //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                           x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)2)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                       }
                                                       
                                                   }
                                                   
                                               }
                                               
                                               //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                               ret103111 =
                                                 (recvStt->
                                                    FMGL(data))[((x10_int)2)];
                                               ret103111;
                                           }))
                                           ) > (((x10_long) (((x10_int)0))))),
                                           (((__extension__ ({
                                               
                                               //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                               ;
                                               
                                               //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                               x10_long ret103114;
                                               {
                                                   
                                                   //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (!((recvStt->
                                                            FMGL(data)).isValid()))
                                                   {
                                                       
                                                       //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (true)
                                                       {
                                                           
                                                           //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                           x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                   if (((((x10_int)3)) < (((x10_int)0))) ||
                                                       ((((x10_long) (((x10_int)3)))) >= (recvStt->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                                                   {
                                                       
                                                       //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (true)
                                                       {
                                                           
                                                           //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                           x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)3)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                       }
                                                       
                                                   }
                                                   
                                               }
                                               
                                               //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                               ret103114 =
                                                 (recvStt->
                                                    FMGL(data))[((x10_int)3)];
                                               ret103114;
                                           }))
                                           ) > (((x10_long) (((x10_int)0))))));
    
    //#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numCombinedMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret103117;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret103117 = (x10aux::nullCheck(id482)->FMGL(raw))->__apply(((x10_int)0));
        ret103117;
    }))
    ;
    
    //#line 428 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10LocalDecl_c
    x10_long numTransferedVertexMessages = (__extension__ ({
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_long ret103120;
        
        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret103120 = (x10aux::nullCheck(id482)->FMGL(raw))->__apply(((x10_int)1));
        ret103120;
    }))
    ;
    {
        
        //#line 430 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)9));
    }
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value104045 = numCombinedMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret104046;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((stt->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)4)) < (((x10_int)0))) || ((((x10_long) (((x10_int)4)))) >= (stt->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)4)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (stt->FMGL(data)).set(((x10_int)4), value104045);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104046 = value104045;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104046;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long value104047 = numTransferedVertexMessages;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret104048;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((stt->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)5)) < (((x10_int)0))) || ((((x10_long) (((x10_int)5)))) >= (stt->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)5)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (stt->FMGL(data)).set(((x10_int)5), value104047);
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret104048 = value104047;
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret104048;
    
    //#line 437 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10If_c
    if (enableStatistics) {
        
        //#line 438 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        team->template allreduce<x10_long >(stt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                              ((x10_long) (((x10_int)4))),
                                              ((x10_long) (((x10_int)2)))),
                                            recvStt->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                              ((x10_long) (((x10_int)4))),
                                              ((x10_long) (((x10_int)2)))),
                                            ((x10_int)0));
    }
    {
        
        //#line 439 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": Eval of x10.ast.X10Call_c
        mtimer->org::scalegraph::util::ProfilingDB__Timer::lap(
          ((x10_int)10));
    }
    
    //#line 441 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/WorkerPlaceGraph.x10": x10.ast.X10Return_c
    return false;
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_WORKERPLACEGRAPH_H_NODEPS
